//  Translated by epsc  version: Mon Jan  5 13:40:12 2026

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
int SymPrsym (int fp,struct symbol* p,int level);
int SymIstemp (nctempchar1 *name);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
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
static int CodeFdpython;
static int CodePython;
int CodeCompstmnt (struct tree* p)
;
int CodeStmnt (struct tree* p)
;
nctempchar1 * CodeBinexpr (struct tree* p)
;
nctempchar1 * CodeExpr (struct tree* p)
;
int CodeSexpr (struct tree* p)
;
int CodeSbinexpr (struct tree* p)
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
int CodeSetpython (int flag)
{
CodePython = flag;
return 1;
}
int CodeGetpython ()
{
return CodePython;
}
int CodeSetfdpython (int fd)
{
CodeFdpython = fd;
return 1;
}
int CodeGetfdpython ()
{
return CodeFdpython;
}
static int CodeBreak;
int CodeBreakon ()
{
CodeBreak = 1;
return 1;
}
int CodeGetbreak ()
{
return CodeBreak;
}
int CodeBreakoff ()
{
CodeBreak = 0;
return 1;
}
static int CodeArch;
int CodeSetarch (int arch)
{
CodeArch = arch;
return 1;
}
int CodeGetarch ()
{
return CodeArch;
}
static int CodeLine;
static int CodeParallel;
int CodeSetparallel (int flag)
{
CodeParallel = flag;
return flag;
}
int CodeGetparallel ()
{
return CodeParallel;
}
static int CodeAddress;
nctempchar1 * CodeItemp (int cntrl)
{
nctempchar1 *s1;
nctempchar1 *s2;
int nctemp30=16;
nctempchar1 *nctemp29;
nctemp29=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp29->d[0]=16;
nctemp29->a=(char *)RunMalloc(sizeof(char)*nctemp30);
s1=nctemp29;
int nctemp39=16;
nctempchar1 *nctemp38;
nctemp38=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp38->d[0]=16;
nctemp38->a=(char *)RunMalloc(sizeof(char)*nctemp39);
s2=nctemp38;
struct nctempchar1 *nctemp45;
static struct nctempchar1 nctemp46 = {{ 7}, (char*)"nctemp\0"};
nctemp45=&nctemp46;
nctempchar1* nctemp43= nctemp45;
nctempchar1* nctemp47= s2;
int nctemp50=LibeStrcpy(nctemp43,nctemp47);
int nctemp54= -1;
int nctemp51 = (cntrl ==nctemp54);
if(nctemp51)
{
CodeAddress = 0;
}
else{
CodeAddress = (CodeAddress + 1);
}
int nctemp55 = (CodeAddress > 999999);
if(nctemp55)
{
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=CodeError(nctemp60);
}
int nctemp66= CodeAddress;
nctempchar1* nctemp68= s1;
int nctemp71=LibeItoa(nctemp66,nctemp68);
nctempchar1* nctemp73= s1;
nctempchar1* nctemp76= s2;
int nctemp79=LibeStrcat(nctemp73,nctemp76);
return s2;
}
int CodeInit ()
{
int nctemp83= 0;
int nctemp85=CodeSetparallel(nctemp83);
CodeLine = 0;
int nctemp88= -1;
int nctemp87= nctemp88;
nctempchar1* nctemp89=CodeItemp(nctemp87);
CodeBreak = 0;
int nctemp91= 1;
int nctemp93=CodeSetarch(nctemp91);
return 1;
}
static int CodeFdout;
int CodeSetfdout (int fd)
{
CodeFdout = fd;
return 1;
}
int CodeGetfdout ()
{
return CodeFdout;
}
static int CodeDebugflag;
int CodeDebug ()
{
return CodeDebugflag;
}
int CodeEs (struct tree* p,nctempchar1 *s)
{
int fdo;
nctempchar1 *f;
int nctemp102=CodeGetfdout();
fdo =nctemp102;
int nctemp106=CodeDebug();
int nctemp103 = (nctemp106 ==1);
if(nctemp103)
{
int nctemp108 = (p !=0);
if(nctemp108)
{
struct tree* nctemp115= p;
int nctemp117=PtreeGetline(nctemp115);
int nctemp112 = (nctemp117 !=CodeLine);
if(nctemp112)
{
int nctemp120= fdo;
struct nctempchar1 *nctemp124;
static struct nctempchar1 nctemp125 = {{ 3}, (char*)"\n\0"};
nctemp124=&nctemp125;
nctempchar1* nctemp122= nctemp124;
int nctemp126=LibePuts(nctemp120,nctemp122);
int nctemp128= fdo;
struct nctempchar1 *nctemp132;
static struct nctempchar1 nctemp133 = {{ 7}, (char*)"#line \0"};
nctemp132=&nctemp133;
nctempchar1* nctemp130= nctemp132;
int nctemp134=LibePuts(nctemp128,nctemp130);
int nctemp136= fdo;
struct tree* nctemp140= p;
int nctemp142=PtreeGetline(nctemp140);
int nctemp138= nctemp142;
int nctemp143=LibePuti(nctemp136,nctemp138);
int nctemp145= fdo;
struct nctempchar1 *nctemp149;
static struct nctempchar1 nctemp150 = {{ 3}, (char*)"  \0"};
nctemp149=&nctemp150;
nctempchar1* nctemp147= nctemp149;
int nctemp151=LibePuts(nctemp145,nctemp147);
int nctemp153= fdo;
int nctemp155= 34;
int nctemp157=LibePutc(nctemp153,nctemp155);
struct tree* nctemp163= p;
nctempchar1* nctemp165=PtreeGetfile(nctemp163);
f=nctemp165;
int nctemp167= fdo;
nctempchar1* nctemp169= f;
int nctemp172=LibePuts(nctemp167,nctemp169);
int nctemp174= fdo;
int nctemp176= 34;
int nctemp178=LibePutc(nctemp174,nctemp176);
int nctemp180= fdo;
struct nctempchar1 *nctemp184;
static struct nctempchar1 nctemp185 = {{ 3}, (char*)"\n\0"};
nctemp184=&nctemp185;
nctempchar1* nctemp182= nctemp184;
int nctemp186=LibePuts(nctemp180,nctemp182);
struct tree* nctemp191= p;
int nctemp193=PtreeGetline(nctemp191);
CodeLine =nctemp193;
}
}
}
int nctemp195= fdo;
nctempchar1* nctemp197= s;
int nctemp200=LibePuts(nctemp195,nctemp197);
int nctemp202= fdo;
int nctemp204=LibeFlush(nctemp202);
return 1;
}
int CodeEind (struct tree* p)
{
int fdo;
nctempchar1 *f;
int nctemp210=CodeGetfdout();
fdo =nctemp210;
int nctemp212= fdo;
struct nctempchar1 *nctemp216;
static struct nctempchar1 nctemp217 = {{ 2}, (char*)" \0"};
nctemp216=&nctemp217;
nctempchar1* nctemp214= nctemp216;
int nctemp218=LibePuts(nctemp212,nctemp214);
int nctemp220= fdo;
int nctemp222=LibeFlush(nctemp220);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp228=CodeGetfdout();
fdo =nctemp228;
int nctemp230= fdo;
int nctemp232= d;
int nctemp234=LibePuti(nctemp230,nctemp232);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp240=CodeGetfdout();
fdo =nctemp240;
int nctemp242= fdo;
int nctemp244= d;
int nctemp246=LibePutc(nctemp242,nctemp244);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp252=CodeGetfdout();
fdo =nctemp252;
nctempchar1* nctemp257= s;
int nctemp260=LibeStrlen(nctemp257);
l =nctemp260;
for(i = 1;i < (l - 1);i = (i + 1)){
int nctemp262= fdo;
int nctemp269=i;
int nctemp266=(int)(s->a[nctemp269]);
int nctemp264= nctemp266;
int nctemp271=LibePutc(nctemp262,nctemp264);
}
int nctemp273= fdo;
int nctemp275=LibeFlush(nctemp273);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp282= tp;
nctempchar1* nctemp284=SymGetype(nctemp282);
nctempchar1* nctemp280= nctemp284;
struct nctempchar1 *nctemp287;
static struct nctempchar1 nctemp288 = {{ 10}, (char*)"rconstant\0"};
nctemp287=&nctemp288;
nctempchar1* nctemp285= nctemp287;
int nctemp289=LibeStrcmp(nctemp280,nctemp285);
int nctemp277 = (nctemp289 ==1);
if(nctemp277)
{
return 1;
}
struct symbol* nctemp297= tp;
nctempchar1* nctemp299=SymGetype(nctemp297);
nctempchar1* nctemp295= nctemp299;
struct nctempchar1 *nctemp302;
static struct nctempchar1 nctemp303 = {{ 10}, (char*)"iconstant\0"};
nctemp302=&nctemp303;
nctempchar1* nctemp300= nctemp302;
int nctemp304=LibeStrcmp(nctemp295,nctemp300);
int nctemp292 = (nctemp304 ==1);
if(nctemp292)
{
return 1;
}
struct symbol* nctemp312= tp;
nctempchar1* nctemp314=SymGetype(nctemp312);
nctempchar1* nctemp310= nctemp314;
struct nctempchar1 *nctemp317;
static struct nctempchar1 nctemp318 = {{ 10}, (char*)"sconstant\0"};
nctemp317=&nctemp318;
nctempchar1* nctemp315= nctemp317;
int nctemp319=LibeStrcmp(nctemp310,nctemp315);
int nctemp307 = (nctemp319 ==1);
if(nctemp307)
{
return 1;
}
struct symbol* nctemp327= tp;
nctempchar1* nctemp329=SymGetstruct(nctemp327);
nctempchar1* nctemp325= nctemp329;
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 10}, (char*)"structdef\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
int nctemp334=LibeStrcmp(nctemp325,nctemp330);
int nctemp322 = (nctemp334 ==1);
if(nctemp322)
{
struct tree* nctemp337= p;
struct nctempchar1 *nctemp341;
static struct nctempchar1 nctemp342 = {{ 8}, (char*)"struct \0"};
nctemp341=&nctemp342;
nctempchar1* nctemp339= nctemp341;
int nctemp343=CodeEs(nctemp337,nctemp339);
}
struct symbol* nctemp349= tp;
nctempchar1* nctemp351=SymGetstruct(nctemp349);
nctempchar1* nctemp347= nctemp351;
struct nctempchar1 *nctemp354;
static struct nctempchar1 nctemp355 = {{ 7}, (char*)"struct\0"};
nctemp354=&nctemp355;
nctempchar1* nctemp352= nctemp354;
int nctemp356=LibeStrcmp(nctemp347,nctemp352);
int nctemp344 = (nctemp356 ==1);
if(nctemp344)
{
struct symbol* nctemp363= tp;
nctempchar1* nctemp365=SymGetarray(nctemp363);
nctempchar1* nctemp361= nctemp365;
struct nctempchar1 *nctemp368;
static struct nctempchar1 nctemp369 = {{ 6}, (char*)"array\0"};
nctemp368=&nctemp369;
nctempchar1* nctemp366= nctemp368;
int nctemp370=LibeStrcmp(nctemp361,nctemp366);
int nctemp358 = (nctemp370 ==1);
if(nctemp358)
{
struct symbol* nctemp377= tp;
nctempchar1* nctemp379=SymGetglobal(nctemp377);
nctempchar1* nctemp375= nctemp379;
struct nctempchar1 *nctemp382;
static struct nctempchar1 nctemp383 = {{ 7}, (char*)"global\0"};
nctemp382=&nctemp383;
nctempchar1* nctemp380= nctemp382;
int nctemp384=LibeStrcmp(nctemp375,nctemp380);
int nctemp372 = (nctemp384 ==1);
if(nctemp372)
{
struct tree* nctemp387= p;
struct nctempchar1 *nctemp391;
static struct nctempchar1 nctemp392 = {{ 8}, (char*)"static \0"};
nctemp391=&nctemp392;
nctempchar1* nctemp389= nctemp391;
int nctemp393=CodeEs(nctemp387,nctemp389);
}
struct tree* nctemp395= p;
struct nctempchar1 *nctemp399;
static struct nctempchar1 nctemp400 = {{ 14}, (char*)"struct nctemp\0"};
nctemp399=&nctemp400;
nctempchar1* nctemp397= nctemp399;
int nctemp401=CodeEs(nctemp395,nctemp397);
struct tree* nctemp403= p;
struct symbol* nctemp407= tp;
nctempchar1* nctemp409=SymGetype(nctemp407);
nctempchar1* nctemp405= nctemp409;
int nctemp410=CodeEs(nctemp403,nctemp405);
struct symbol* nctemp414= tp;
int nctemp416=SymGetrank(nctemp414);
int nctemp412= nctemp416;
int nctemp417=CodeEd(nctemp412);
struct tree* nctemp419= p;
struct nctempchar1 *nctemp423;
static struct nctempchar1 nctemp424 = {{ 3}, (char*)" *\0"};
nctemp423=&nctemp424;
nctempchar1* nctemp421= nctemp423;
int nctemp425=CodeEs(nctemp419,nctemp421);
struct tree* nctemp427= p;
struct symbol* nctemp431= tp;
nctempchar1* nctemp433=SymGetname(nctemp431);
nctempchar1* nctemp429= nctemp433;
int nctemp434=CodeEs(nctemp427,nctemp429);
}
else{
struct symbol* nctemp440= tp;
nctempchar1* nctemp442=SymGetglobal(nctemp440);
nctempchar1* nctemp438= nctemp442;
struct nctempchar1 *nctemp445;
static struct nctempchar1 nctemp446 = {{ 7}, (char*)"global\0"};
nctemp445=&nctemp446;
nctempchar1* nctemp443= nctemp445;
int nctemp447=LibeStrcmp(nctemp438,nctemp443);
int nctemp435 = (nctemp447 ==1);
if(nctemp435)
{
struct tree* nctemp450= p;
struct nctempchar1 *nctemp454;
static struct nctempchar1 nctemp455 = {{ 8}, (char*)"static \0"};
nctemp454=&nctemp455;
nctempchar1* nctemp452= nctemp454;
int nctemp456=CodeEs(nctemp450,nctemp452);
}
struct tree* nctemp458= p;
struct nctempchar1 *nctemp462;
static struct nctempchar1 nctemp463 = {{ 8}, (char*)"struct \0"};
nctemp462=&nctemp463;
nctempchar1* nctemp460= nctemp462;
int nctemp464=CodeEs(nctemp458,nctemp460);
struct tree* nctemp466= p;
struct symbol* nctemp470= tp;
nctempchar1* nctemp472=SymGetype(nctemp470);
nctempchar1* nctemp468= nctemp472;
int nctemp473=CodeEs(nctemp466,nctemp468);
struct tree* nctemp475= p;
struct nctempchar1 *nctemp479;
static struct nctempchar1 nctemp480 = {{ 2}, (char*)"*\0"};
nctemp479=&nctemp480;
nctempchar1* nctemp477= nctemp479;
int nctemp481=CodeEs(nctemp475,nctemp477);
struct tree* nctemp483= p;
struct nctempchar1 *nctemp487;
static struct nctempchar1 nctemp488 = {{ 2}, (char*)" \0"};
nctemp487=&nctemp488;
nctempchar1* nctemp485= nctemp487;
int nctemp489=CodeEs(nctemp483,nctemp485);
struct tree* nctemp491= p;
struct symbol* nctemp495= tp;
nctempchar1* nctemp497=SymGetname(nctemp495);
nctempchar1* nctemp493= nctemp497;
int nctemp498=CodeEs(nctemp491,nctemp493);
}
}
else{
struct symbol* nctemp504= tp;
nctempchar1* nctemp506=SymGetarray(nctemp504);
nctempchar1* nctemp502= nctemp506;
struct nctempchar1 *nctemp509;
static struct nctempchar1 nctemp510 = {{ 6}, (char*)"array\0"};
nctemp509=&nctemp510;
nctempchar1* nctemp507= nctemp509;
int nctemp511=LibeStrcmp(nctemp502,nctemp507);
int nctemp499 = (nctemp511 ==1);
if(nctemp499)
{
struct symbol* nctemp518= tp;
nctempchar1* nctemp520=SymGetglobal(nctemp518);
nctempchar1* nctemp516= nctemp520;
struct nctempchar1 *nctemp523;
static struct nctempchar1 nctemp524 = {{ 7}, (char*)"global\0"};
nctemp523=&nctemp524;
nctempchar1* nctemp521= nctemp523;
int nctemp525=LibeStrcmp(nctemp516,nctemp521);
int nctemp513 = (nctemp525 ==1);
if(nctemp513)
{
struct tree* nctemp528= p;
struct nctempchar1 *nctemp532;
static struct nctempchar1 nctemp533 = {{ 8}, (char*)"static \0"};
nctemp532=&nctemp533;
nctempchar1* nctemp530= nctemp532;
int nctemp534=CodeEs(nctemp528,nctemp530);
}
struct tree* nctemp536= p;
struct nctempchar1 *nctemp540;
static struct nctempchar1 nctemp541 = {{ 7}, (char*)"nctemp\0"};
nctemp540=&nctemp541;
nctempchar1* nctemp538= nctemp540;
int nctemp542=CodeEs(nctemp536,nctemp538);
struct tree* nctemp544= p;
struct symbol* nctemp548= tp;
nctempchar1* nctemp550=SymGetype(nctemp548);
nctempchar1* nctemp546= nctemp550;
int nctemp551=CodeEs(nctemp544,nctemp546);
struct symbol* nctemp555= tp;
int nctemp557=SymGetrank(nctemp555);
int nctemp553= nctemp557;
int nctemp558=CodeEd(nctemp553);
struct tree* nctemp560= p;
struct nctempchar1 *nctemp564;
static struct nctempchar1 nctemp565 = {{ 3}, (char*)" *\0"};
nctemp564=&nctemp565;
nctempchar1* nctemp562= nctemp564;
int nctemp566=CodeEs(nctemp560,nctemp562);
struct tree* nctemp568= p;
struct symbol* nctemp572= tp;
nctempchar1* nctemp574=SymGetname(nctemp572);
nctempchar1* nctemp570= nctemp574;
int nctemp575=CodeEs(nctemp568,nctemp570);
}
else{
struct symbol* nctemp581= tp;
nctempchar1* nctemp583=SymGetglobal(nctemp581);
nctempchar1* nctemp579= nctemp583;
struct nctempchar1 *nctemp586;
static struct nctempchar1 nctemp587 = {{ 7}, (char*)"global\0"};
nctemp586=&nctemp587;
nctempchar1* nctemp584= nctemp586;
int nctemp588=LibeStrcmp(nctemp579,nctemp584);
int nctemp576 = (nctemp588 ==1);
if(nctemp576)
{
struct tree* nctemp591= p;
struct nctempchar1 *nctemp595;
static struct nctempchar1 nctemp596 = {{ 8}, (char*)"static \0"};
nctemp595=&nctemp596;
nctempchar1* nctemp593= nctemp595;
int nctemp597=CodeEs(nctemp591,nctemp593);
}
struct tree* nctemp599= p;
struct symbol* nctemp603= tp;
nctempchar1* nctemp605=SymGetype(nctemp603);
nctempchar1* nctemp601= nctemp605;
int nctemp606=CodeEs(nctemp599,nctemp601);
struct tree* nctemp608= p;
struct nctempchar1 *nctemp612;
static struct nctempchar1 nctemp613 = {{ 2}, (char*)" \0"};
nctemp612=&nctemp613;
nctempchar1* nctemp610= nctemp612;
int nctemp614=CodeEs(nctemp608,nctemp610);
struct tree* nctemp616= p;
struct symbol* nctemp620= tp;
nctempchar1* nctemp622=SymGetname(nctemp620);
nctempchar1* nctemp618= nctemp622;
int nctemp623=CodeEs(nctemp616,nctemp618);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp625 = (tp !=0);
int nctemp629=nctemp625;
while(nctemp629)
{{
struct tree* nctemp631= p;
struct symbol* nctemp633= tp;
int nctemp635=CodeIdeclaration(nctemp631,nctemp633);
struct tree* nctemp637= p;
struct nctempchar1 *nctemp641;
static struct nctempchar1 nctemp642 = {{ 4}, (char*)";\n\0"};
nctemp641=&nctemp642;
nctempchar1* nctemp639= nctemp641;
int nctemp643=CodeEs(nctemp637,nctemp639);
struct symbol* nctemp648= tp;
struct symbol* nctemp650=SymMvnext(nctemp648);
tp =nctemp650;
}
int nctemp651 = (tp !=0);
nctemp629=nctemp651;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp657= p;
struct nctempchar1 *nctemp661;
static struct nctempchar1 nctemp662 = {{ 8}, (char*)"struct \0"};
nctemp661=&nctemp662;
nctempchar1* nctemp659= nctemp661;
int nctemp663=CodeEs(nctemp657,nctemp659);
struct tree* nctemp665= p;
struct symbol* nctemp669= tp;
nctempchar1* nctemp671=SymGetype(nctemp669);
nctempchar1* nctemp667= nctemp671;
int nctemp672=CodeEs(nctemp665,nctemp667);
struct tree* nctemp674= p;
struct nctempchar1 *nctemp678;
static struct nctempchar1 nctemp679 = {{ 3}, (char*)" {\0"};
nctemp678=&nctemp679;
nctempchar1* nctemp676= nctemp678;
int nctemp680=CodeEs(nctemp674,nctemp676);
struct symbol* nctemp685= tp;
struct symbol* nctemp687=SymGetable(nctemp685);
up =nctemp687;
struct symbol* nctemp692= up;
struct symbol* nctemp694=SymMvnext(nctemp692);
up =nctemp694;
struct tree* nctemp696= p;
struct symbol* nctemp698= up;
int nctemp700=CodeIdeclarations(nctemp696,nctemp698);
struct tree* nctemp702= p;
struct nctempchar1 *nctemp706;
static struct nctempchar1 nctemp707 = {{ 5}, (char*)"};\n\0"};
nctemp706=&nctemp707;
nctempchar1* nctemp704= nctemp706;
int nctemp708=CodeEs(nctemp702,nctemp704);
struct tree* nctemp710= p;
struct nctempchar1 *nctemp714;
static struct nctempchar1 nctemp715 = {{ 16}, (char*)"typedef struct \0"};
nctemp714=&nctemp715;
nctempchar1* nctemp712= nctemp714;
int nctemp716=CodeEs(nctemp710,nctemp712);
struct tree* nctemp718= p;
struct nctempchar1 *nctemp722;
static struct nctempchar1 nctemp723 = {{ 7}, (char*)"nctemp\0"};
nctemp722=&nctemp723;
nctempchar1* nctemp720= nctemp722;
int nctemp724=CodeEs(nctemp718,nctemp720);
struct tree* nctemp726= p;
struct symbol* nctemp730= tp;
nctempchar1* nctemp732=SymGetype(nctemp730);
nctempchar1* nctemp728= nctemp732;
int nctemp733=CodeEs(nctemp726,nctemp728);
struct tree* nctemp735= p;
struct nctempchar1 *nctemp739;
static struct nctempchar1 nctemp740 = {{ 2}, (char*)"1\0"};
nctemp739=&nctemp740;
nctempchar1* nctemp737= nctemp739;
int nctemp741=CodeEs(nctemp735,nctemp737);
struct tree* nctemp743= p;
struct nctempchar1 *nctemp747;
static struct nctempchar1 nctemp748 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp747=&nctemp748;
nctempchar1* nctemp745= nctemp747;
int nctemp749=CodeEs(nctemp743,nctemp745);
struct tree* nctemp751= p;
struct symbol* nctemp755= tp;
nctempchar1* nctemp757=SymGetype(nctemp755);
nctempchar1* nctemp753= nctemp757;
int nctemp758=CodeEs(nctemp751,nctemp753);
struct tree* nctemp760= p;
struct nctempchar1 *nctemp764;
static struct nctempchar1 nctemp765 = {{ 6}, (char*)" *a; \0"};
nctemp764=&nctemp765;
nctempchar1* nctemp762= nctemp764;
int nctemp766=CodeEs(nctemp760,nctemp762);
struct tree* nctemp768= p;
struct nctempchar1 *nctemp772;
static struct nctempchar1 nctemp773 = {{ 3}, (char*)"} \0"};
nctemp772=&nctemp773;
nctempchar1* nctemp770= nctemp772;
int nctemp774=CodeEs(nctemp768,nctemp770);
struct tree* nctemp776= p;
struct nctempchar1 *nctemp780;
static struct nctempchar1 nctemp781 = {{ 7}, (char*)"nctemp\0"};
nctemp780=&nctemp781;
nctempchar1* nctemp778= nctemp780;
int nctemp782=CodeEs(nctemp776,nctemp778);
struct tree* nctemp784= p;
struct symbol* nctemp788= tp;
nctempchar1* nctemp790=SymGetype(nctemp788);
nctempchar1* nctemp786= nctemp790;
int nctemp791=CodeEs(nctemp784,nctemp786);
struct tree* nctemp793= p;
struct nctempchar1 *nctemp797;
static struct nctempchar1 nctemp798 = {{ 2}, (char*)"1\0"};
nctemp797=&nctemp798;
nctempchar1* nctemp795= nctemp797;
int nctemp799=CodeEs(nctemp793,nctemp795);
struct tree* nctemp801= p;
struct nctempchar1 *nctemp805;
static struct nctempchar1 nctemp806 = {{ 4}, (char*)";\n\0"};
nctemp805=&nctemp806;
nctempchar1* nctemp803= nctemp805;
int nctemp807=CodeEs(nctemp801,nctemp803);
struct tree* nctemp809= p;
struct nctempchar1 *nctemp813;
static struct nctempchar1 nctemp814 = {{ 8}, (char*)"struct \0"};
nctemp813=&nctemp814;
nctempchar1* nctemp811= nctemp813;
int nctemp815=CodeEs(nctemp809,nctemp811);
struct tree* nctemp817= p;
struct nctempchar1 *nctemp821;
static struct nctempchar1 nctemp822 = {{ 7}, (char*)"nctemp\0"};
nctemp821=&nctemp822;
nctempchar1* nctemp819= nctemp821;
int nctemp823=CodeEs(nctemp817,nctemp819);
struct tree* nctemp825= p;
struct symbol* nctemp829= tp;
nctempchar1* nctemp831=SymGetype(nctemp829);
nctempchar1* nctemp827= nctemp831;
int nctemp832=CodeEs(nctemp825,nctemp827);
struct tree* nctemp834= p;
struct nctempchar1 *nctemp838;
static struct nctempchar1 nctemp839 = {{ 2}, (char*)"2\0"};
nctemp838=&nctemp839;
nctempchar1* nctemp836= nctemp838;
int nctemp840=CodeEs(nctemp834,nctemp836);
struct tree* nctemp842= p;
struct nctempchar1 *nctemp846;
static struct nctempchar1 nctemp847 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
int nctemp848=CodeEs(nctemp842,nctemp844);
struct tree* nctemp850= p;
struct symbol* nctemp854= tp;
nctempchar1* nctemp856=SymGetype(nctemp854);
nctempchar1* nctemp852= nctemp856;
int nctemp857=CodeEs(nctemp850,nctemp852);
struct tree* nctemp859= p;
struct nctempchar1 *nctemp863;
static struct nctempchar1 nctemp864 = {{ 6}, (char*)" *a; \0"};
nctemp863=&nctemp864;
nctempchar1* nctemp861= nctemp863;
int nctemp865=CodeEs(nctemp859,nctemp861);
struct tree* nctemp867= p;
struct nctempchar1 *nctemp871;
static struct nctempchar1 nctemp872 = {{ 3}, (char*)"} \0"};
nctemp871=&nctemp872;
nctempchar1* nctemp869= nctemp871;
int nctemp873=CodeEs(nctemp867,nctemp869);
struct tree* nctemp875= p;
struct nctempchar1 *nctemp879;
static struct nctempchar1 nctemp880 = {{ 4}, (char*)";\n\0"};
nctemp879=&nctemp880;
nctempchar1* nctemp877= nctemp879;
int nctemp881=CodeEs(nctemp875,nctemp877);
struct tree* nctemp883= p;
struct nctempchar1 *nctemp887;
static struct nctempchar1 nctemp888 = {{ 8}, (char*)"struct \0"};
nctemp887=&nctemp888;
nctempchar1* nctemp885= nctemp887;
int nctemp889=CodeEs(nctemp883,nctemp885);
struct tree* nctemp891= p;
struct nctempchar1 *nctemp895;
static struct nctempchar1 nctemp896 = {{ 7}, (char*)"nctemp\0"};
nctemp895=&nctemp896;
nctempchar1* nctemp893= nctemp895;
int nctemp897=CodeEs(nctemp891,nctemp893);
struct tree* nctemp899= p;
struct symbol* nctemp903= tp;
nctempchar1* nctemp905=SymGetype(nctemp903);
nctempchar1* nctemp901= nctemp905;
int nctemp906=CodeEs(nctemp899,nctemp901);
struct tree* nctemp908= p;
struct nctempchar1 *nctemp912;
static struct nctempchar1 nctemp913 = {{ 2}, (char*)"3\0"};
nctemp912=&nctemp913;
nctempchar1* nctemp910= nctemp912;
int nctemp914=CodeEs(nctemp908,nctemp910);
struct tree* nctemp916= p;
struct nctempchar1 *nctemp920;
static struct nctempchar1 nctemp921 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp920=&nctemp921;
nctempchar1* nctemp918= nctemp920;
int nctemp922=CodeEs(nctemp916,nctemp918);
struct tree* nctemp924= p;
struct symbol* nctemp928= tp;
nctempchar1* nctemp930=SymGetype(nctemp928);
nctempchar1* nctemp926= nctemp930;
int nctemp931=CodeEs(nctemp924,nctemp926);
struct tree* nctemp933= p;
struct nctempchar1 *nctemp937;
static struct nctempchar1 nctemp938 = {{ 6}, (char*)" *a; \0"};
nctemp937=&nctemp938;
nctempchar1* nctemp935= nctemp937;
int nctemp939=CodeEs(nctemp933,nctemp935);
struct tree* nctemp941= p;
struct nctempchar1 *nctemp945;
static struct nctempchar1 nctemp946 = {{ 3}, (char*)"} \0"};
nctemp945=&nctemp946;
nctempchar1* nctemp943= nctemp945;
int nctemp947=CodeEs(nctemp941,nctemp943);
struct tree* nctemp949= p;
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 4}, (char*)";\n\0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
int nctemp955=CodeEs(nctemp949,nctemp951);
struct tree* nctemp957= p;
struct nctempchar1 *nctemp961;
static struct nctempchar1 nctemp962 = {{ 8}, (char*)"struct \0"};
nctemp961=&nctemp962;
nctempchar1* nctemp959= nctemp961;
int nctemp963=CodeEs(nctemp957,nctemp959);
struct tree* nctemp965= p;
struct nctempchar1 *nctemp969;
static struct nctempchar1 nctemp970 = {{ 7}, (char*)"nctemp\0"};
nctemp969=&nctemp970;
nctempchar1* nctemp967= nctemp969;
int nctemp971=CodeEs(nctemp965,nctemp967);
struct tree* nctemp973= p;
struct symbol* nctemp977= tp;
nctempchar1* nctemp979=SymGetype(nctemp977);
nctempchar1* nctemp975= nctemp979;
int nctemp980=CodeEs(nctemp973,nctemp975);
struct tree* nctemp982= p;
struct nctempchar1 *nctemp986;
static struct nctempchar1 nctemp987 = {{ 2}, (char*)"4\0"};
nctemp986=&nctemp987;
nctempchar1* nctemp984= nctemp986;
int nctemp988=CodeEs(nctemp982,nctemp984);
struct tree* nctemp990= p;
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=CodeEs(nctemp990,nctemp992);
struct tree* nctemp998= p;
struct symbol* nctemp1002= tp;
nctempchar1* nctemp1004=SymGetype(nctemp1002);
nctempchar1* nctemp1000= nctemp1004;
int nctemp1005=CodeEs(nctemp998,nctemp1000);
struct tree* nctemp1007= p;
struct nctempchar1 *nctemp1011;
static struct nctempchar1 nctemp1012 = {{ 6}, (char*)" *a; \0"};
nctemp1011=&nctemp1012;
nctempchar1* nctemp1009= nctemp1011;
int nctemp1013=CodeEs(nctemp1007,nctemp1009);
struct tree* nctemp1015= p;
struct nctempchar1 *nctemp1019;
static struct nctempchar1 nctemp1020 = {{ 3}, (char*)"} \0"};
nctemp1019=&nctemp1020;
nctempchar1* nctemp1017= nctemp1019;
int nctemp1021=CodeEs(nctemp1015,nctemp1017);
struct tree* nctemp1023= p;
struct nctempchar1 *nctemp1027;
static struct nctempchar1 nctemp1028 = {{ 4}, (char*)";\n\0"};
nctemp1027=&nctemp1028;
nctempchar1* nctemp1025= nctemp1027;
int nctemp1029=CodeEs(nctemp1023,nctemp1025);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp1036= tp;
nctempchar1* nctemp1038=SymGetstruct(nctemp1036);
nctempchar1* nctemp1034= nctemp1038;
struct nctempchar1 *nctemp1041;
static struct nctempchar1 nctemp1042 = {{ 7}, (char*)"struct\0"};
nctemp1041=&nctemp1042;
nctempchar1* nctemp1039= nctemp1041;
int nctemp1043=LibeStrcmp(nctemp1034,nctemp1039);
int nctemp1031 = (nctemp1043 ==1);
if(nctemp1031)
{
struct tree* nctemp1046= p;
struct nctempchar1 *nctemp1050;
static struct nctempchar1 nctemp1051 = {{ 8}, (char*)"struct \0"};
nctemp1050=&nctemp1051;
nctempchar1* nctemp1048= nctemp1050;
int nctemp1052=CodeEs(nctemp1046,nctemp1048);
}
struct symbol* nctemp1058= tp;
nctempchar1* nctemp1060=SymGetarray(nctemp1058);
nctempchar1* nctemp1056= nctemp1060;
struct nctempchar1 *nctemp1063;
static struct nctempchar1 nctemp1064 = {{ 6}, (char*)"array\0"};
nctemp1063=&nctemp1064;
nctempchar1* nctemp1061= nctemp1063;
int nctemp1065=LibeStrcmp(nctemp1056,nctemp1061);
int nctemp1053 = (nctemp1065 ==1);
if(nctemp1053)
{
struct tree* nctemp1068= p;
struct nctempchar1 *nctemp1072;
static struct nctempchar1 nctemp1073 = {{ 7}, (char*)"nctemp\0"};
nctemp1072=&nctemp1073;
nctempchar1* nctemp1070= nctemp1072;
int nctemp1074=CodeEs(nctemp1068,nctemp1070);
}
struct tree* nctemp1076= p;
struct symbol* nctemp1080= tp;
nctempchar1* nctemp1082=SymGetype(nctemp1080);
nctempchar1* nctemp1078= nctemp1082;
int nctemp1083=CodeEs(nctemp1076,nctemp1078);
struct symbol* nctemp1089= tp;
nctempchar1* nctemp1091=SymGetarray(nctemp1089);
nctempchar1* nctemp1087= nctemp1091;
struct nctempchar1 *nctemp1094;
static struct nctempchar1 nctemp1095 = {{ 6}, (char*)"array\0"};
nctemp1094=&nctemp1095;
nctempchar1* nctemp1092= nctemp1094;
int nctemp1096=LibeStrcmp(nctemp1087,nctemp1092);
int nctemp1084 = (nctemp1096 ==1);
if(nctemp1084)
{
struct symbol* nctemp1101= tp;
int nctemp1103=SymGetrank(nctemp1101);
int nctemp1099= nctemp1103;
int nctemp1104=CodeEd(nctemp1099);
struct tree* nctemp1106= p;
struct nctempchar1 *nctemp1110;
static struct nctempchar1 nctemp1111 = {{ 3}, (char*)" *\0"};
nctemp1110=&nctemp1111;
nctempchar1* nctemp1108= nctemp1110;
int nctemp1112=CodeEs(nctemp1106,nctemp1108);
}
struct symbol* nctemp1118= tp;
nctempchar1* nctemp1120=SymGetstruct(nctemp1118);
nctempchar1* nctemp1116= nctemp1120;
struct nctempchar1 *nctemp1123;
static struct nctempchar1 nctemp1124 = {{ 7}, (char*)"struct\0"};
nctemp1123=&nctemp1124;
nctempchar1* nctemp1121= nctemp1123;
int nctemp1125=LibeStrcmp(nctemp1116,nctemp1121);
int nctemp1113 = (nctemp1125 ==1);
if(nctemp1113)
{
struct tree* nctemp1128= p;
struct nctempchar1 *nctemp1132;
static struct nctempchar1 nctemp1133 = {{ 2}, (char*)"*\0"};
nctemp1132=&nctemp1133;
nctempchar1* nctemp1130= nctemp1132;
int nctemp1134=CodeEs(nctemp1128,nctemp1130);
}
struct tree* nctemp1136= p;
struct nctempchar1 *nctemp1140;
static struct nctempchar1 nctemp1141 = {{ 2}, (char*)" \0"};
nctemp1140=&nctemp1141;
nctempchar1* nctemp1138= nctemp1140;
int nctemp1142=CodeEs(nctemp1136,nctemp1138);
struct tree* nctemp1144= p;
struct symbol* nctemp1148= tp;
nctempchar1* nctemp1150=SymGetname(nctemp1148);
nctempchar1* nctemp1146= nctemp1150;
int nctemp1151=CodeEs(nctemp1144,nctemp1146);
struct tree* nctemp1153= p;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 3}, (char*)" (\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=CodeEs(nctemp1153,nctemp1155);
struct symbol* nctemp1164= tp;
struct symbol* nctemp1166=SymGetable(nctemp1164);
tp =nctemp1166;
int nctemp1167 = (tp ==0);
if(nctemp1167)
{
struct tree* nctemp1172= p;
struct nctempchar1 *nctemp1176;
static struct nctempchar1 nctemp1177 = {{ 5}, (char*)");\n\0"};
nctemp1176=&nctemp1177;
nctempchar1* nctemp1174= nctemp1176;
int nctemp1178=CodeEs(nctemp1172,nctemp1174);
return 1;
}
struct symbol* nctemp1184= tp;
struct symbol* nctemp1186=SymMvnext(nctemp1184);
tp =nctemp1186;
struct symbol* nctemp1191= tp;
struct symbol* nctemp1193=SymGetable(nctemp1191);
tp =nctemp1193;
int nctemp1194 = (tp ==0);
if(nctemp1194)
{
return 1;
}
struct symbol* nctemp1203= tp;
struct symbol* nctemp1205=SymMvnext(nctemp1203);
tp =nctemp1205;
int nctemp1206 = (tp !=0);
int nctemp1210=nctemp1206;
while(nctemp1210)
{{
struct tree* nctemp1212= p;
struct symbol* nctemp1214= tp;
int nctemp1216=CodeIdeclaration(nctemp1212,nctemp1214);
struct symbol* nctemp1221= tp;
struct symbol* nctemp1223=SymMvnext(nctemp1221);
tp =nctemp1223;
int nctemp1224 = (tp !=0);
if(nctemp1224)
{
struct tree* nctemp1229= p;
struct nctempchar1 *nctemp1233;
static struct nctempchar1 nctemp1234 = {{ 2}, (char*)",\0"};
nctemp1233=&nctemp1234;
nctempchar1* nctemp1231= nctemp1233;
int nctemp1235=CodeEs(nctemp1229,nctemp1231);
}
else{
struct tree* nctemp1237= p;
struct nctempchar1 *nctemp1241;
static struct nctempchar1 nctemp1242 = {{ 5}, (char*)");\n\0"};
nctemp1241=&nctemp1242;
nctempchar1* nctemp1239= nctemp1241;
int nctemp1243=CodeEs(nctemp1237,nctemp1239);
}
}
int nctemp1244 = (tp !=0);
nctemp1210=nctemp1244;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1254= p;
nctempchar1* nctemp1256=PtreeGetdef(nctemp1254);
module=nctemp1256;
struct symbol* nctemp1261= tp;
struct symbol* nctemp1263=SymMvnext(nctemp1261);
tp =nctemp1263;
int nctemp1264 = (tp !=0);
int nctemp1268=nctemp1264;
while(nctemp1268)
{{
struct symbol* nctemp1274= tp;
nctempchar1* nctemp1276=SymGetmodule(nctemp1274);
nctempchar1* nctemp1272= nctemp1276;
nctempchar1* nctemp1277= module;
int nctemp1280=LibeStrcmp(nctemp1272,nctemp1277);
int nctemp1269 = (nctemp1280 ==1);
if(nctemp1269)
{
struct symbol* nctemp1287= tp;
nctempchar1* nctemp1289=SymGetstruct(nctemp1287);
nctempchar1* nctemp1285= nctemp1289;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 10}, (char*)"structdef\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibeStrcmp(nctemp1285,nctemp1290);
int nctemp1282 = (nctemp1294 ==1);
if(nctemp1282)
{
struct tree* nctemp1297= p;
struct symbol* nctemp1299= tp;
int nctemp1301=CodeStructdefsym(nctemp1297,nctemp1299);
}
else{
struct symbol* nctemp1307= tp;
nctempchar1* nctemp1309=SymGetfunc(nctemp1307);
nctempchar1* nctemp1305= nctemp1309;
struct nctempchar1 *nctemp1312;
static struct nctempchar1 nctemp1313 = {{ 5}, (char*)"fdef\0"};
nctemp1312=&nctemp1313;
nctempchar1* nctemp1310= nctemp1312;
int nctemp1314=LibeStrcmp(nctemp1305,nctemp1310);
int nctemp1302 = (nctemp1314 ==1);
if(nctemp1302)
{
struct tree* nctemp1317= p;
struct symbol* nctemp1319= tp;
int nctemp1321=CodeFdefcpusym(nctemp1317,nctemp1319);
}
}
}
struct symbol* nctemp1326= tp;
struct symbol* nctemp1328=SymMvnext(nctemp1326);
tp =nctemp1328;
}
int nctemp1329 = (tp !=0);
nctemp1268=nctemp1329;}return 1;
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
noarg = 0;
forw = 0;
struct tree* nctemp1339= p;
nctempchar1* nctemp1341=PtreeGetarray(nctemp1339);
nctempchar1* nctemp1337= nctemp1341;
struct nctempchar1 *nctemp1344;
static struct nctempchar1 nctemp1345 = {{ 6}, (char*)"array\0"};
nctemp1344=&nctemp1345;
nctempchar1* nctemp1342= nctemp1344;
int nctemp1346=LibeStrcmp(nctemp1337,nctemp1342);
int nctemp1334 = (nctemp1346 ==1);
if(nctemp1334)
{
struct tree* nctemp1352= p;
struct tree* nctemp1354=PtreeMvchild(nctemp1352);
p =nctemp1354;
struct tree* nctemp1359= p;
struct tree* nctemp1361=PtreeMvsister(nctemp1359);
p =nctemp1361;
struct tree* nctemp1367= p;
nctempchar1* nctemp1369=PtreeGetforw(nctemp1367);
nctempchar1* nctemp1365= nctemp1369;
struct nctempchar1 *nctemp1372;
static struct nctempchar1 nctemp1373 = {{ 5}, (char*)"forw\0"};
nctemp1372=&nctemp1373;
nctempchar1* nctemp1370= nctemp1372;
int nctemp1374=LibeStrcmp(nctemp1365,nctemp1370);
int nctemp1362 = (nctemp1374 ==1);
if(nctemp1362)
{
forw = 1;
}
}
else{
struct tree* nctemp1380= p;
struct tree* nctemp1382=PtreeMvchild(nctemp1380);
p =nctemp1382;
struct tree* nctemp1388= p;
nctempchar1* nctemp1390=PtreeGetforw(nctemp1388);
nctempchar1* nctemp1386= nctemp1390;
struct nctempchar1 *nctemp1393;
static struct nctempchar1 nctemp1394 = {{ 5}, (char*)"forw\0"};
nctemp1393=&nctemp1394;
nctempchar1* nctemp1391= nctemp1393;
int nctemp1395=LibeStrcmp(nctemp1386,nctemp1391);
int nctemp1383 = (nctemp1395 ==1);
if(nctemp1383)
{
forw = 1;
}
}
struct tree* nctemp1403= p;
nctempchar1* nctemp1405=PtreeGetdef(nctemp1403);
nctempchar1* nctemp1401= nctemp1405;
struct symbol* nctemp1408=SymGetetp();
struct symbol* nctemp1406= nctemp1408;
struct symbol* nctemp1409=SymLookup(nctemp1401,nctemp1406);
tp =nctemp1409;
struct symbol* nctemp1415= tp;
nctempchar1* nctemp1417=SymGetstruct(nctemp1415);
nctempchar1* nctemp1413= nctemp1417;
struct nctempchar1 *nctemp1420;
static struct nctempchar1 nctemp1421 = {{ 7}, (char*)"struct\0"};
nctemp1420=&nctemp1421;
nctempchar1* nctemp1418= nctemp1420;
int nctemp1422=LibeStrcmp(nctemp1413,nctemp1418);
int nctemp1410 = (nctemp1422 ==1);
if(nctemp1410)
{
struct tree* nctemp1425= p;
struct nctempchar1 *nctemp1429;
static struct nctempchar1 nctemp1430 = {{ 8}, (char*)"struct \0"};
nctemp1429=&nctemp1430;
nctempchar1* nctemp1427= nctemp1429;
int nctemp1431=CodeEs(nctemp1425,nctemp1427);
}
struct symbol* nctemp1437= tp;
nctempchar1* nctemp1439=SymGetarray(nctemp1437);
nctempchar1* nctemp1435= nctemp1439;
struct nctempchar1 *nctemp1442;
static struct nctempchar1 nctemp1443 = {{ 6}, (char*)"array\0"};
nctemp1442=&nctemp1443;
nctempchar1* nctemp1440= nctemp1442;
int nctemp1444=LibeStrcmp(nctemp1435,nctemp1440);
int nctemp1432 = (nctemp1444 ==1);
if(nctemp1432)
{
struct tree* nctemp1447= p;
struct nctempchar1 *nctemp1451;
static struct nctempchar1 nctemp1452 = {{ 7}, (char*)"nctemp\0"};
nctemp1451=&nctemp1452;
nctempchar1* nctemp1449= nctemp1451;
int nctemp1453=CodeEs(nctemp1447,nctemp1449);
}
struct tree* nctemp1455= p;
struct symbol* nctemp1459= tp;
nctempchar1* nctemp1461=SymGetype(nctemp1459);
nctempchar1* nctemp1457= nctemp1461;
int nctemp1462=CodeEs(nctemp1455,nctemp1457);
struct symbol* nctemp1468= tp;
nctempchar1* nctemp1470=SymGetarray(nctemp1468);
nctempchar1* nctemp1466= nctemp1470;
struct nctempchar1 *nctemp1473;
static struct nctempchar1 nctemp1474 = {{ 6}, (char*)"array\0"};
nctemp1473=&nctemp1474;
nctempchar1* nctemp1471= nctemp1473;
int nctemp1475=LibeStrcmp(nctemp1466,nctemp1471);
int nctemp1463 = (nctemp1475 ==1);
if(nctemp1463)
{
struct symbol* nctemp1480= tp;
int nctemp1482=SymGetrank(nctemp1480);
int nctemp1478= nctemp1482;
int nctemp1483=CodeEd(nctemp1478);
struct tree* nctemp1485= p;
struct nctempchar1 *nctemp1489;
static struct nctempchar1 nctemp1490 = {{ 3}, (char*)" *\0"};
nctemp1489=&nctemp1490;
nctempchar1* nctemp1487= nctemp1489;
int nctemp1491=CodeEs(nctemp1485,nctemp1487);
}
struct symbol* nctemp1497= tp;
nctempchar1* nctemp1499=SymGetstruct(nctemp1497);
nctempchar1* nctemp1495= nctemp1499;
struct nctempchar1 *nctemp1502;
static struct nctempchar1 nctemp1503 = {{ 7}, (char*)"struct\0"};
nctemp1502=&nctemp1503;
nctempchar1* nctemp1500= nctemp1502;
int nctemp1504=LibeStrcmp(nctemp1495,nctemp1500);
int nctemp1492 = (nctemp1504 ==1);
if(nctemp1492)
{
struct tree* nctemp1507= p;
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 2}, (char*)"*\0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
int nctemp1513=CodeEs(nctemp1507,nctemp1509);
}
struct tree* nctemp1515= p;
struct nctempchar1 *nctemp1519;
static struct nctempchar1 nctemp1520 = {{ 2}, (char*)" \0"};
nctemp1519=&nctemp1520;
nctempchar1* nctemp1517= nctemp1519;
int nctemp1521=CodeEs(nctemp1515,nctemp1517);
struct tree* nctemp1523= p;
struct symbol* nctemp1527= tp;
nctempchar1* nctemp1529=SymGetname(nctemp1527);
nctempchar1* nctemp1525= nctemp1529;
int nctemp1530=CodeEs(nctemp1523,nctemp1525);
struct tree* nctemp1532= p;
struct nctempchar1 *nctemp1536;
static struct nctempchar1 nctemp1537 = {{ 3}, (char*)" (\0"};
nctemp1536=&nctemp1537;
nctempchar1* nctemp1534= nctemp1536;
int nctemp1538=CodeEs(nctemp1532,nctemp1534);
struct tree* nctemp1542= p;
struct tree* nctemp1544=PtreeMvchild(nctemp1542);
int nctemp1539 = (nctemp1544 !=0);
if(nctemp1539)
{
struct tree* nctemp1550= p;
struct tree* nctemp1552=PtreeMvchild(nctemp1550);
p =nctemp1552;
}
struct tree* nctemp1558= p;
nctempchar1* nctemp1560=PtreeGetname(nctemp1558);
nctempchar1* nctemp1556= nctemp1560;
struct nctempchar1 *nctemp1563;
static struct nctempchar1 nctemp1564 = {{ 8}, (char*)"arglist\0"};
nctemp1563=&nctemp1564;
nctempchar1* nctemp1561= nctemp1563;
int nctemp1565=LibeStrcmp(nctemp1556,nctemp1561);
int nctemp1553 = (nctemp1565 ==1);
if(nctemp1553)
{
struct symbol* nctemp1571= tp;
struct symbol* nctemp1573=SymGetable(nctemp1571);
tp =nctemp1573;
struct nctempchar1 *nctemp1580;
static struct nctempchar1 nctemp1581 = {{ 9}, (char*)"#arglist\0"};
nctemp1580=&nctemp1581;
nctempchar1* nctemp1578= nctemp1580;
struct symbol* nctemp1582= tp;
struct symbol* nctemp1584=SymLookup(nctemp1578,nctemp1582);
tp =nctemp1584;
struct symbol* nctemp1589= tp;
struct symbol* nctemp1591=SymGetable(nctemp1589);
tp =nctemp1591;
struct symbol* nctemp1599= tp;
struct symbol* nctemp1601=SymMvnext(nctemp1599);
tp =nctemp1601;
int nctemp1592 = (tp !=0);
int nctemp1603=nctemp1592;
while(nctemp1603)
{{
struct tree* nctemp1605= p;
struct symbol* nctemp1607= tp;
int nctemp1609=CodeIdeclaration(nctemp1605,nctemp1607);
struct symbol* nctemp1613= tp;
struct symbol* nctemp1615=SymMvnext(nctemp1613);
int nctemp1610 = (nctemp1615 !=0);
if(nctemp1610)
{
struct tree* nctemp1618= p;
struct nctempchar1 *nctemp1622;
static struct nctempchar1 nctemp1623 = {{ 2}, (char*)",\0"};
nctemp1622=&nctemp1623;
nctempchar1* nctemp1620= nctemp1622;
int nctemp1624=CodeEs(nctemp1618,nctemp1620);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1632= tp;
struct symbol* nctemp1634=SymMvnext(nctemp1632);
tp =nctemp1634;
int nctemp1625 = (tp !=0);
nctemp1603=nctemp1625;}}
struct tree* nctemp1637= p;
struct nctempchar1 *nctemp1641;
static struct nctempchar1 nctemp1642 = {{ 4}, (char*)")\n\0"};
nctemp1641=&nctemp1642;
nctempchar1* nctemp1639= nctemp1641;
int nctemp1643=CodeEs(nctemp1637,nctemp1639);
int nctemp1644 = (forw ==1);
if(nctemp1644)
{
struct tree* nctemp1649= p;
struct nctempchar1 *nctemp1653;
static struct nctempchar1 nctemp1654 = {{ 4}, (char*)";\n\0"};
nctemp1653=&nctemp1654;
nctempchar1* nctemp1651= nctemp1653;
int nctemp1655=CodeEs(nctemp1649,nctemp1651);
return 1;
}
struct tree* nctemp1660= p;
struct tree* nctemp1662=PtreeMvsister(nctemp1660);
int nctemp1657 = (nctemp1662 !=0);
if(nctemp1657)
{
struct tree* nctemp1667= p;
struct tree* nctemp1669=PtreeMvsister(nctemp1667);
struct tree* nctemp1665= nctemp1669;
int nctemp1670=CodeCompstmnt(nctemp1665);
}
else{
struct tree* nctemp1672= p;
int nctemp1674=CodeCompstmnt(nctemp1672);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1682= p;
nctempchar1* nctemp1684=PtreeGetdef(nctemp1682);
nctempchar1* nctemp1680= nctemp1684;
struct symbol* nctemp1687=SymGetetp();
struct symbol* nctemp1685= nctemp1687;
struct symbol* nctemp1688=SymLookup(nctemp1680,nctemp1685);
tp =nctemp1688;
struct symbol* nctemp1692= tp;
struct symbol* nctemp1694=SymGetable(nctemp1692);
struct symbol* nctemp1690= nctemp1694;
int nctemp1695=SymSetltp(nctemp1690);
struct tree* nctemp1697= p;
struct nctempchar1 *nctemp1701;
static struct nctempchar1 nctemp1702 = {{ 12}, (char*)"__global__ \0"};
nctemp1701=&nctemp1702;
nctempchar1* nctemp1699= nctemp1701;
int nctemp1703=CodeEs(nctemp1697,nctemp1699);
struct tree* nctemp1705= p;
struct nctempchar1 *nctemp1709;
static struct nctempchar1 nctemp1710 = {{ 5}, (char*)"void\0"};
nctemp1709=&nctemp1710;
nctempchar1* nctemp1707= nctemp1709;
int nctemp1711=CodeEs(nctemp1705,nctemp1707);
struct symbol* nctemp1717= tp;
nctempchar1* nctemp1719=SymGetarray(nctemp1717);
nctempchar1* nctemp1715= nctemp1719;
struct nctempchar1 *nctemp1722;
static struct nctempchar1 nctemp1723 = {{ 6}, (char*)"array\0"};
nctemp1722=&nctemp1723;
nctempchar1* nctemp1720= nctemp1722;
int nctemp1724=LibeStrcmp(nctemp1715,nctemp1720);
int nctemp1712 = (nctemp1724 ==1);
if(nctemp1712)
{
struct symbol* nctemp1729= tp;
int nctemp1731=SymGetrank(nctemp1729);
int nctemp1727= nctemp1731;
int nctemp1732=CodeEd(nctemp1727);
}
struct symbol* nctemp1738= tp;
nctempchar1* nctemp1740=SymGetstruct(nctemp1738);
nctempchar1* nctemp1736= nctemp1740;
struct nctempchar1 *nctemp1743;
static struct nctempchar1 nctemp1744 = {{ 7}, (char*)"struct\0"};
nctemp1743=&nctemp1744;
nctempchar1* nctemp1741= nctemp1743;
int nctemp1745=LibeStrcmp(nctemp1736,nctemp1741);
int nctemp1733 = (nctemp1745 ==1);
if(nctemp1733)
{
struct tree* nctemp1748= p;
struct nctempchar1 *nctemp1752;
static struct nctempchar1 nctemp1753 = {{ 2}, (char*)"*\0"};
nctemp1752=&nctemp1753;
nctempchar1* nctemp1750= nctemp1752;
int nctemp1754=CodeEs(nctemp1748,nctemp1750);
}
struct tree* nctemp1756= p;
struct nctempchar1 *nctemp1760;
static struct nctempchar1 nctemp1761 = {{ 2}, (char*)" \0"};
nctemp1760=&nctemp1761;
nctempchar1* nctemp1758= nctemp1760;
int nctemp1762=CodeEs(nctemp1756,nctemp1758);
struct tree* nctemp1764= p;
struct nctempchar1 *nctemp1768;
static struct nctempchar1 nctemp1769 = {{ 8}, (char*)"kernel_\0"};
nctemp1768=&nctemp1769;
nctempchar1* nctemp1766= nctemp1768;
int nctemp1770=CodeEs(nctemp1764,nctemp1766);
struct tree* nctemp1772= p;
struct symbol* nctemp1776= tp;
nctempchar1* nctemp1778=SymGetname(nctemp1776);
nctempchar1* nctemp1774= nctemp1778;
int nctemp1779=CodeEs(nctemp1772,nctemp1774);
struct tree* nctemp1781= p;
struct nctempchar1 *nctemp1785;
static struct nctempchar1 nctemp1786 = {{ 3}, (char*)" (\0"};
nctemp1785=&nctemp1786;
nctempchar1* nctemp1783= nctemp1785;
int nctemp1787=CodeEs(nctemp1781,nctemp1783);
struct tree* nctemp1792= p;
struct tree* nctemp1794=PtreeMvchild(nctemp1792);
p =nctemp1794;
struct tree* nctemp1800= p;
nctempchar1* nctemp1802=PtreeGetname(nctemp1800);
nctempchar1* nctemp1798= nctemp1802;
struct nctempchar1 *nctemp1805;
static struct nctempchar1 nctemp1806 = {{ 8}, (char*)"arglist\0"};
nctemp1805=&nctemp1806;
nctempchar1* nctemp1803= nctemp1805;
int nctemp1807=LibeStrcmp(nctemp1798,nctemp1803);
int nctemp1795 = (nctemp1807 ==1);
if(nctemp1795)
{
struct symbol* nctemp1813= tp;
struct symbol* nctemp1815=SymGetable(nctemp1813);
tp =nctemp1815;
struct nctempchar1 *nctemp1822;
static struct nctempchar1 nctemp1823 = {{ 9}, (char*)"#arglist\0"};
nctemp1822=&nctemp1823;
nctempchar1* nctemp1820= nctemp1822;
struct symbol* nctemp1824= tp;
struct symbol* nctemp1826=SymLookup(nctemp1820,nctemp1824);
tp =nctemp1826;
struct symbol* nctemp1831= tp;
struct symbol* nctemp1833=SymGetable(nctemp1831);
tp =nctemp1833;
struct symbol* nctemp1841= tp;
struct symbol* nctemp1843=SymMvnext(nctemp1841);
tp =nctemp1843;
int nctemp1834 = (tp !=0);
int nctemp1845=nctemp1834;
while(nctemp1845)
{{
struct tree* nctemp1847= p;
struct symbol* nctemp1849= tp;
int nctemp1851=CodeIdeclaration(nctemp1847,nctemp1849);
struct symbol* nctemp1855= tp;
struct symbol* nctemp1857=SymMvnext(nctemp1855);
int nctemp1852 = (nctemp1857 !=0);
if(nctemp1852)
{
struct tree* nctemp1860= p;
struct nctempchar1 *nctemp1864;
static struct nctempchar1 nctemp1865 = {{ 2}, (char*)",\0"};
nctemp1864=&nctemp1865;
nctempchar1* nctemp1862= nctemp1864;
int nctemp1866=CodeEs(nctemp1860,nctemp1862);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1874= tp;
struct symbol* nctemp1876=SymMvnext(nctemp1874);
tp =nctemp1876;
int nctemp1867 = (tp !=0);
nctemp1845=nctemp1867;}}
struct tree* nctemp1879= p;
struct nctempchar1 *nctemp1883;
static struct nctempchar1 nctemp1884 = {{ 5}, (char*)");\n\0"};
nctemp1883=&nctemp1884;
nctempchar1* nctemp1881= nctemp1883;
int nctemp1885=CodeEs(nctemp1879,nctemp1881);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1892= p;
nctempchar1* nctemp1894=PtreeGetarray(nctemp1892);
nctempchar1* nctemp1890= nctemp1894;
struct nctempchar1 *nctemp1897;
static struct nctempchar1 nctemp1898 = {{ 6}, (char*)"array\0"};
nctemp1897=&nctemp1898;
nctempchar1* nctemp1895= nctemp1897;
int nctemp1899=LibeStrcmp(nctemp1890,nctemp1895);
int nctemp1887 = (nctemp1899 ==1);
if(nctemp1887)
{
struct tree* nctemp1905= p;
struct tree* nctemp1907=PtreeMvchild(nctemp1905);
p =nctemp1907;
struct tree* nctemp1912= p;
struct tree* nctemp1914=PtreeMvsister(nctemp1912);
p =nctemp1914;
struct tree* nctemp1920= p;
nctempchar1* nctemp1922=PtreeGetforw(nctemp1920);
nctempchar1* nctemp1918= nctemp1922;
struct nctempchar1 *nctemp1925;
static struct nctempchar1 nctemp1926 = {{ 5}, (char*)"forw\0"};
nctemp1925=&nctemp1926;
nctempchar1* nctemp1923= nctemp1925;
int nctemp1927=LibeStrcmp(nctemp1918,nctemp1923);
int nctemp1915 = (nctemp1927 ==1);
if(nctemp1915)
{
forw = 1;
}
}
else{
struct tree* nctemp1933= p;
struct tree* nctemp1935=PtreeMvchild(nctemp1933);
p =nctemp1935;
struct tree* nctemp1941= p;
nctempchar1* nctemp1943=PtreeGetforw(nctemp1941);
nctempchar1* nctemp1939= nctemp1943;
struct nctempchar1 *nctemp1946;
static struct nctempchar1 nctemp1947 = {{ 5}, (char*)"forw\0"};
nctemp1946=&nctemp1947;
nctempchar1* nctemp1944= nctemp1946;
int nctemp1948=LibeStrcmp(nctemp1939,nctemp1944);
int nctemp1936 = (nctemp1948 ==1);
if(nctemp1936)
{
forw = 1;
}
}
struct tree* nctemp1956= p;
nctempchar1* nctemp1958=PtreeGetdef(nctemp1956);
nctempchar1* nctemp1954= nctemp1958;
struct symbol* nctemp1961=SymGetetp();
struct symbol* nctemp1959= nctemp1961;
struct symbol* nctemp1962=SymLookup(nctemp1954,nctemp1959);
tp =nctemp1962;
struct tree* nctemp1964= p;
struct nctempchar1 *nctemp1968;
static struct nctempchar1 nctemp1969 = {{ 11}, (char*)"__global__\0"};
nctemp1968=&nctemp1969;
nctempchar1* nctemp1966= nctemp1968;
int nctemp1970=CodeEs(nctemp1964,nctemp1966);
struct tree* nctemp1972= p;
struct nctempchar1 *nctemp1976;
static struct nctempchar1 nctemp1977 = {{ 6}, (char*)" void\0"};
nctemp1976=&nctemp1977;
nctempchar1* nctemp1974= nctemp1976;
int nctemp1978=CodeEs(nctemp1972,nctemp1974);
struct tree* nctemp1980= p;
struct nctempchar1 *nctemp1984;
static struct nctempchar1 nctemp1985 = {{ 2}, (char*)" \0"};
nctemp1984=&nctemp1985;
nctempchar1* nctemp1982= nctemp1984;
int nctemp1986=CodeEs(nctemp1980,nctemp1982);
struct tree* nctemp1988= p;
struct nctempchar1 *nctemp1992;
static struct nctempchar1 nctemp1993 = {{ 8}, (char*)"kernel_\0"};
nctemp1992=&nctemp1993;
nctempchar1* nctemp1990= nctemp1992;
int nctemp1994=CodeEs(nctemp1988,nctemp1990);
struct tree* nctemp1996= p;
struct symbol* nctemp2000= tp;
nctempchar1* nctemp2002=SymGetname(nctemp2000);
nctempchar1* nctemp1998= nctemp2002;
int nctemp2003=CodeEs(nctemp1996,nctemp1998);
struct tree* nctemp2005= p;
struct nctempchar1 *nctemp2009;
static struct nctempchar1 nctemp2010 = {{ 3}, (char*)" (\0"};
nctemp2009=&nctemp2010;
nctempchar1* nctemp2007= nctemp2009;
int nctemp2011=CodeEs(nctemp2005,nctemp2007);
struct tree* nctemp2015= p;
struct tree* nctemp2017=PtreeMvchild(nctemp2015);
int nctemp2012 = (nctemp2017 !=0);
if(nctemp2012)
{
struct tree* nctemp2023= p;
struct tree* nctemp2025=PtreeMvchild(nctemp2023);
p =nctemp2025;
}
struct tree* nctemp2031= p;
nctempchar1* nctemp2033=PtreeGetname(nctemp2031);
nctempchar1* nctemp2029= nctemp2033;
struct nctempchar1 *nctemp2036;
static struct nctempchar1 nctemp2037 = {{ 8}, (char*)"arglist\0"};
nctemp2036=&nctemp2037;
nctempchar1* nctemp2034= nctemp2036;
int nctemp2038=LibeStrcmp(nctemp2029,nctemp2034);
int nctemp2026 = (nctemp2038 ==1);
if(nctemp2026)
{
struct symbol* nctemp2044= tp;
struct symbol* nctemp2046=SymGetable(nctemp2044);
tp =nctemp2046;
struct nctempchar1 *nctemp2053;
static struct nctempchar1 nctemp2054 = {{ 9}, (char*)"#arglist\0"};
nctemp2053=&nctemp2054;
nctempchar1* nctemp2051= nctemp2053;
struct symbol* nctemp2055= tp;
struct symbol* nctemp2057=SymLookup(nctemp2051,nctemp2055);
tp =nctemp2057;
struct symbol* nctemp2062= tp;
struct symbol* nctemp2064=SymGetable(nctemp2062);
tp =nctemp2064;
struct symbol* nctemp2072= tp;
struct symbol* nctemp2074=SymMvnext(nctemp2072);
tp =nctemp2074;
int nctemp2065 = (tp !=0);
int nctemp2076=nctemp2065;
while(nctemp2076)
{{
struct tree* nctemp2078= p;
struct symbol* nctemp2080= tp;
int nctemp2082=CodeIdeclaration(nctemp2078,nctemp2080);
struct symbol* nctemp2086= tp;
struct symbol* nctemp2088=SymMvnext(nctemp2086);
int nctemp2083 = (nctemp2088 !=0);
if(nctemp2083)
{
struct tree* nctemp2091= p;
struct nctempchar1 *nctemp2095;
static struct nctempchar1 nctemp2096 = {{ 2}, (char*)",\0"};
nctemp2095=&nctemp2096;
nctempchar1* nctemp2093= nctemp2095;
int nctemp2097=CodeEs(nctemp2091,nctemp2093);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2105= tp;
struct symbol* nctemp2107=SymMvnext(nctemp2105);
tp =nctemp2107;
int nctemp2098 = (tp !=0);
nctemp2076=nctemp2098;}}
struct tree* nctemp2110= p;
struct nctempchar1 *nctemp2114;
static struct nctempchar1 nctemp2115 = {{ 4}, (char*)")\n\0"};
nctemp2114=&nctemp2115;
nctempchar1* nctemp2112= nctemp2114;
int nctemp2116=CodeEs(nctemp2110,nctemp2112);
int nctemp2117 = (forw ==1);
if(nctemp2117)
{
struct tree* nctemp2122= p;
struct nctempchar1 *nctemp2126;
static struct nctempchar1 nctemp2127 = {{ 4}, (char*)";\n\0"};
nctemp2126=&nctemp2127;
nctempchar1* nctemp2124= nctemp2126;
int nctemp2128=CodeEs(nctemp2122,nctemp2124);
return 1;
}
struct tree* nctemp2133= p;
struct tree* nctemp2135=PtreeMvsister(nctemp2133);
int nctemp2130 = (nctemp2135 !=0);
if(nctemp2130)
{
struct tree* nctemp2140= p;
struct tree* nctemp2142=PtreeMvsister(nctemp2140);
struct tree* nctemp2138= nctemp2142;
int nctemp2143=CodeCompstmnt(nctemp2138);
}
else{
struct tree* nctemp2145= p;
int nctemp2147=CodeCompstmnt(nctemp2145);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2153= p;
struct tree* nctemp2155=PtreeMvchild(nctemp2153);
p =nctemp2155;
noarg = 0;
struct tree* nctemp2162= p;
nctempchar1* nctemp2164=PtreeGetdef(nctemp2162);
nctempchar1* nctemp2160= nctemp2164;
struct symbol* nctemp2167=SymGetetp();
struct symbol* nctemp2165= nctemp2167;
struct symbol* nctemp2168=SymLookup(nctemp2160,nctemp2165);
tp =nctemp2168;
struct symbol* nctemp2172= tp;
struct symbol* nctemp2174=SymGetable(nctemp2172);
struct symbol* nctemp2170= nctemp2174;
int nctemp2175=SymSetltp(nctemp2170);
struct symbol* nctemp2181= tp;
nctempchar1* nctemp2183=SymGetstruct(nctemp2181);
nctempchar1* nctemp2179= nctemp2183;
struct nctempchar1 *nctemp2186;
static struct nctempchar1 nctemp2187 = {{ 7}, (char*)"struct\0"};
nctemp2186=&nctemp2187;
nctempchar1* nctemp2184= nctemp2186;
int nctemp2188=LibeStrcmp(nctemp2179,nctemp2184);
int nctemp2176 = (nctemp2188 ==1);
if(nctemp2176)
{
struct tree* nctemp2191= p;
struct nctempchar1 *nctemp2195;
static struct nctempchar1 nctemp2196 = {{ 8}, (char*)"struct \0"};
nctemp2195=&nctemp2196;
nctempchar1* nctemp2193= nctemp2195;
int nctemp2197=CodeEs(nctemp2191,nctemp2193);
}
struct symbol* nctemp2203= tp;
nctempchar1* nctemp2205=SymGetarray(nctemp2203);
nctempchar1* nctemp2201= nctemp2205;
struct nctempchar1 *nctemp2208;
static struct nctempchar1 nctemp2209 = {{ 6}, (char*)"array\0"};
nctemp2208=&nctemp2209;
nctempchar1* nctemp2206= nctemp2208;
int nctemp2210=LibeStrcmp(nctemp2201,nctemp2206);
int nctemp2198 = (nctemp2210 ==1);
if(nctemp2198)
{
struct tree* nctemp2213= p;
struct nctempchar1 *nctemp2217;
static struct nctempchar1 nctemp2218 = {{ 7}, (char*)"nctemp\0"};
nctemp2217=&nctemp2218;
nctempchar1* nctemp2215= nctemp2217;
int nctemp2219=CodeEs(nctemp2213,nctemp2215);
}
struct tree* nctemp2221= p;
struct symbol* nctemp2225= tp;
nctempchar1* nctemp2227=SymGetype(nctemp2225);
nctempchar1* nctemp2223= nctemp2227;
int nctemp2228=CodeEs(nctemp2221,nctemp2223);
struct symbol* nctemp2234= tp;
nctempchar1* nctemp2236=SymGetarray(nctemp2234);
nctempchar1* nctemp2232= nctemp2236;
struct nctempchar1 *nctemp2239;
static struct nctempchar1 nctemp2240 = {{ 6}, (char*)"array\0"};
nctemp2239=&nctemp2240;
nctempchar1* nctemp2237= nctemp2239;
int nctemp2241=LibeStrcmp(nctemp2232,nctemp2237);
int nctemp2229 = (nctemp2241 ==1);
if(nctemp2229)
{
struct symbol* nctemp2246= tp;
int nctemp2248=SymGetrank(nctemp2246);
int nctemp2244= nctemp2248;
int nctemp2249=CodeEd(nctemp2244);
}
struct symbol* nctemp2255= tp;
nctempchar1* nctemp2257=SymGetstruct(nctemp2255);
nctempchar1* nctemp2253= nctemp2257;
struct nctempchar1 *nctemp2260;
static struct nctempchar1 nctemp2261 = {{ 7}, (char*)"struct\0"};
nctemp2260=&nctemp2261;
nctempchar1* nctemp2258= nctemp2260;
int nctemp2262=LibeStrcmp(nctemp2253,nctemp2258);
int nctemp2250 = (nctemp2262 ==1);
if(nctemp2250)
{
struct tree* nctemp2265= p;
struct nctempchar1 *nctemp2269;
static struct nctempchar1 nctemp2270 = {{ 2}, (char*)"*\0"};
nctemp2269=&nctemp2270;
nctempchar1* nctemp2267= nctemp2269;
int nctemp2271=CodeEs(nctemp2265,nctemp2267);
}
top = p;
toptp = tp;
struct tree* nctemp2273= p;
struct nctempchar1 *nctemp2277;
static struct nctempchar1 nctemp2278 = {{ 2}, (char*)" \0"};
nctemp2277=&nctemp2278;
nctempchar1* nctemp2275= nctemp2277;
int nctemp2279=CodeEs(nctemp2273,nctemp2275);
struct tree* nctemp2281= p;
struct symbol* nctemp2285= tp;
nctempchar1* nctemp2287=SymGetname(nctemp2285);
nctempchar1* nctemp2283= nctemp2287;
int nctemp2288=CodeEs(nctemp2281,nctemp2283);
struct tree* nctemp2290= p;
struct nctempchar1 *nctemp2294;
static struct nctempchar1 nctemp2295 = {{ 3}, (char*)" (\0"};
nctemp2294=&nctemp2295;
nctempchar1* nctemp2292= nctemp2294;
int nctemp2296=CodeEs(nctemp2290,nctemp2292);
struct tree* nctemp2301= p;
struct tree* nctemp2303=PtreeMvchild(nctemp2301);
p =nctemp2303;
struct tree* nctemp2309= p;
nctempchar1* nctemp2311=PtreeGetname(nctemp2309);
nctempchar1* nctemp2307= nctemp2311;
struct nctempchar1 *nctemp2314;
static struct nctempchar1 nctemp2315 = {{ 8}, (char*)"arglist\0"};
nctemp2314=&nctemp2315;
nctempchar1* nctemp2312= nctemp2314;
int nctemp2316=LibeStrcmp(nctemp2307,nctemp2312);
int nctemp2304 = (nctemp2316 ==1);
if(nctemp2304)
{
struct symbol* nctemp2322= tp;
struct symbol* nctemp2324=SymGetable(nctemp2322);
tp =nctemp2324;
struct nctempchar1 *nctemp2331;
static struct nctempchar1 nctemp2332 = {{ 9}, (char*)"#arglist\0"};
nctemp2331=&nctemp2332;
nctempchar1* nctemp2329= nctemp2331;
struct symbol* nctemp2333= tp;
struct symbol* nctemp2335=SymLookup(nctemp2329,nctemp2333);
tp =nctemp2335;
struct symbol* nctemp2340= tp;
struct symbol* nctemp2342=SymGetable(nctemp2340);
tp =nctemp2342;
struct symbol* nctemp2350= tp;
struct symbol* nctemp2352=SymMvnext(nctemp2350);
tp =nctemp2352;
int nctemp2343 = (tp !=0);
int nctemp2354=nctemp2343;
while(nctemp2354)
{{
struct tree* nctemp2356= p;
struct symbol* nctemp2358= tp;
int nctemp2360=CodeIdeclaration(nctemp2356,nctemp2358);
struct symbol* nctemp2364= tp;
struct symbol* nctemp2366=SymMvnext(nctemp2364);
int nctemp2361 = (nctemp2366 !=0);
if(nctemp2361)
{
struct tree* nctemp2369= p;
struct nctempchar1 *nctemp2373;
static struct nctempchar1 nctemp2374 = {{ 2}, (char*)",\0"};
nctemp2373=&nctemp2374;
nctempchar1* nctemp2371= nctemp2373;
int nctemp2375=CodeEs(nctemp2369,nctemp2371);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2383= tp;
struct symbol* nctemp2385=SymMvnext(nctemp2383);
tp =nctemp2385;
int nctemp2376 = (tp !=0);
nctemp2354=nctemp2376;}}
struct tree* nctemp2388= p;
struct nctempchar1 *nctemp2392;
static struct nctempchar1 nctemp2393 = {{ 4}, (char*)")\n\0"};
nctemp2392=&nctemp2393;
nctempchar1* nctemp2390= nctemp2392;
int nctemp2394=CodeEs(nctemp2388,nctemp2390);
struct tree* nctemp2396= p;
struct nctempchar1 *nctemp2400;
static struct nctempchar1 nctemp2401 = {{ 4}, (char*)"{\n\0"};
nctemp2400=&nctemp2401;
nctempchar1* nctemp2398= nctemp2400;
int nctemp2402=CodeEs(nctemp2396,nctemp2398);
p = top;
tp = toptp;
struct tree* nctemp2404= p;
struct nctempchar1 *nctemp2408;
static struct nctempchar1 nctemp2409 = {{ 10}, (char*)"  kernel_\0"};
nctemp2408=&nctemp2409;
nctempchar1* nctemp2406= nctemp2408;
int nctemp2410=CodeEs(nctemp2404,nctemp2406);
struct tree* nctemp2412= p;
struct symbol* nctemp2416= tp;
nctempchar1* nctemp2418=SymGetname(nctemp2416);
nctempchar1* nctemp2414= nctemp2418;
int nctemp2419=CodeEs(nctemp2412,nctemp2414);
struct tree* nctemp2421= p;
struct nctempchar1 *nctemp2425;
static struct nctempchar1 nctemp2426 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2425=&nctemp2426;
nctempchar1* nctemp2423= nctemp2425;
int nctemp2427=CodeEs(nctemp2421,nctemp2423);
struct tree* nctemp2432= p;
struct tree* nctemp2434=PtreeMvchild(nctemp2432);
p =nctemp2434;
struct tree* nctemp2440= p;
nctempchar1* nctemp2442=PtreeGetname(nctemp2440);
nctempchar1* nctemp2438= nctemp2442;
struct nctempchar1 *nctemp2445;
static struct nctempchar1 nctemp2446 = {{ 8}, (char*)"arglist\0"};
nctemp2445=&nctemp2446;
nctempchar1* nctemp2443= nctemp2445;
int nctemp2447=LibeStrcmp(nctemp2438,nctemp2443);
int nctemp2435 = (nctemp2447 ==1);
if(nctemp2435)
{
struct symbol* nctemp2453= tp;
struct symbol* nctemp2455=SymGetable(nctemp2453);
tp =nctemp2455;
struct nctempchar1 *nctemp2462;
static struct nctempchar1 nctemp2463 = {{ 9}, (char*)"#arglist\0"};
nctemp2462=&nctemp2463;
nctempchar1* nctemp2460= nctemp2462;
struct symbol* nctemp2464= tp;
struct symbol* nctemp2466=SymLookup(nctemp2460,nctemp2464);
tp =nctemp2466;
struct symbol* nctemp2471= tp;
struct symbol* nctemp2473=SymGetable(nctemp2471);
tp =nctemp2473;
struct symbol* nctemp2481= tp;
struct symbol* nctemp2483=SymMvnext(nctemp2481);
tp =nctemp2483;
int nctemp2474 = (tp !=0);
int nctemp2485=nctemp2474;
while(nctemp2485)
{{
struct tree* nctemp2487= p;
struct symbol* nctemp2491= tp;
nctempchar1* nctemp2493=SymGetname(nctemp2491);
nctempchar1* nctemp2489= nctemp2493;
int nctemp2494=CodeEs(nctemp2487,nctemp2489);
struct symbol* nctemp2498= tp;
struct symbol* nctemp2500=SymMvnext(nctemp2498);
int nctemp2495 = (nctemp2500 !=0);
if(nctemp2495)
{
struct tree* nctemp2503= p;
struct nctempchar1 *nctemp2507;
static struct nctempchar1 nctemp2508 = {{ 2}, (char*)",\0"};
nctemp2507=&nctemp2508;
nctempchar1* nctemp2505= nctemp2507;
int nctemp2509=CodeEs(nctemp2503,nctemp2505);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2517= tp;
struct symbol* nctemp2519=SymMvnext(nctemp2517);
tp =nctemp2519;
int nctemp2510 = (tp !=0);
nctemp2485=nctemp2510;}}
struct tree* nctemp2522= p;
struct nctempchar1 *nctemp2526;
static struct nctempchar1 nctemp2527 = {{ 5}, (char*)");\n\0"};
nctemp2526=&nctemp2527;
nctempchar1* nctemp2524= nctemp2526;
int nctemp2528=CodeEs(nctemp2522,nctemp2524);
struct tree* nctemp2530= p;
struct nctempchar1 *nctemp2534;
static struct nctempchar1 nctemp2535 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2534=&nctemp2535;
nctempchar1* nctemp2532= nctemp2534;
int nctemp2536=CodeEs(nctemp2530,nctemp2532);
struct tree* nctemp2538= p;
struct nctempchar1 *nctemp2542;
static struct nctempchar1 nctemp2543 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2542=&nctemp2543;
nctempchar1* nctemp2540= nctemp2542;
int nctemp2544=CodeEs(nctemp2538,nctemp2540);
struct tree* nctemp2546= p;
struct nctempchar1 *nctemp2550;
static struct nctempchar1 nctemp2551 = {{ 4}, (char*)"}\n\0"};
nctemp2550=&nctemp2551;
nctempchar1* nctemp2548= nctemp2550;
int nctemp2552=CodeEs(nctemp2546,nctemp2548);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2558= tp;
struct symbol* nctemp2560=SymMvnext(nctemp2558);
tp =nctemp2560;
int nctemp2561 = (tp !=0);
int nctemp2565=nctemp2561;
while(nctemp2565)
{{
struct nctempchar1 *nctemp2571;
static struct nctempchar1 nctemp2572 = {{ 9}, (char*)"#arglist\0"};
nctemp2571=&nctemp2572;
nctempchar1* nctemp2569= nctemp2571;
struct symbol* nctemp2575= tp;
nctempchar1* nctemp2577=SymGetname(nctemp2575);
nctempchar1* nctemp2573= nctemp2577;
int nctemp2578=LibeStrcmp(nctemp2569,nctemp2573);
int nctemp2566 = (nctemp2578 ==0);
if(nctemp2566)
{
struct symbol* nctemp2583= tp;
int nctemp2585=SymGetemit(nctemp2583);
int nctemp2580 = (nctemp2585 ==1);
if(nctemp2580)
{
struct symbol* nctemp2592= tp;
nctempchar1* nctemp2594=SymGetstruct(nctemp2592);
nctempchar1* nctemp2590= nctemp2594;
struct nctempchar1 *nctemp2597;
static struct nctempchar1 nctemp2598 = {{ 10}, (char*)"structdef\0"};
nctemp2597=&nctemp2598;
nctempchar1* nctemp2595= nctemp2597;
int nctemp2599=LibeStrcmp(nctemp2590,nctemp2595);
int nctemp2587 = (nctemp2599 ==1);
if(nctemp2587)
{
struct tree* nctemp2602= p;
struct symbol* nctemp2604= tp;
int nctemp2606=CodeStructdef(nctemp2602,nctemp2604);
}
else{
struct symbol* nctemp2612= tp;
nctempchar1* nctemp2614=SymGetfunc(nctemp2612);
nctempchar1* nctemp2610= nctemp2614;
struct nctempchar1 *nctemp2617;
static struct nctempchar1 nctemp2618 = {{ 5}, (char*)"fdef\0"};
nctemp2617=&nctemp2618;
nctempchar1* nctemp2615= nctemp2617;
int nctemp2619=LibeStrcmp(nctemp2610,nctemp2615);
int nctemp2607 = (nctemp2619 ==1);
if(nctemp2607)
{
struct tree* nctemp2622= p;
int nctemp2624=CodeFdef(nctemp2622);
}
else{
struct symbol* nctemp2630= tp;
nctempchar1* nctemp2632=SymGetname(nctemp2630);
nctempchar1* nctemp2628= nctemp2632;
struct nctempchar1 *nctemp2635;
static struct nctempchar1 nctemp2636 = {{ 6}, (char*)"#self\0"};
nctemp2635=&nctemp2636;
nctempchar1* nctemp2633= nctemp2635;
int nctemp2637=LibeStrcmp(nctemp2628,nctemp2633);
int nctemp2625 = (nctemp2637 ==0);
if(nctemp2625)
{
struct tree* nctemp2640= p;
struct symbol* nctemp2642= tp;
int nctemp2644=CodeIdeclaration(nctemp2640,nctemp2642);
struct tree* nctemp2646= p;
struct nctempchar1 *nctemp2650;
static struct nctempchar1 nctemp2651 = {{ 4}, (char*)";\n\0"};
nctemp2650=&nctemp2651;
nctempchar1* nctemp2648= nctemp2650;
int nctemp2652=CodeEs(nctemp2646,nctemp2648);
}
}
}
struct symbol* nctemp2654= tp;
int nctemp2656= 0;
int nctemp2658=SymSetemit(nctemp2654,nctemp2656);
}
}
struct symbol* nctemp2663= tp;
struct symbol* nctemp2665=SymMvnext(nctemp2663);
tp =nctemp2665;
}
int nctemp2666 = (tp !=0);
nctemp2565=nctemp2666;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2671 = (p !=0);
if(nctemp2671)
{
struct tree* nctemp2679= p;
struct tree* nctemp2681=PtreeMvchild(nctemp2679);
np =nctemp2681;
}
else{
np = p;
}
struct tree* nctemp2683= np;
struct symbol* nctemp2685= tp;
int nctemp2687=CodeGdeclarations(nctemp2683,nctemp2685);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2693= p;
struct tree* nctemp2695=PtreeMvchild(nctemp2693);
np =nctemp2695;
struct tree* nctemp2699= np;
nctempchar1* nctemp2701=PtreeGetname(nctemp2699);
nctempchar1* nctemp2697= nctemp2701;
struct nctempchar1 *nctemp2704;
static struct nctempchar1 nctemp2705 = {{ 7}, (char*)"import\0"};
nctemp2704=&nctemp2705;
nctempchar1* nctemp2702= nctemp2704;
int nctemp2706=LibeStrcmp(nctemp2697,nctemp2702);
if(nctemp2706)
{
struct tree* nctemp2708= np;
struct symbol* nctemp2710= tp;
int nctemp2712=CodeImport(nctemp2708,nctemp2710);
}
struct tree* nctemp2714= p;
struct symbol* nctemp2716= tp;
int nctemp2718=CodeDeclarations(nctemp2714,nctemp2716);
return 1;
}
static int CodeArraytest;
int CodeArraycheck ()
{
return CodeArraytest;
}
int CodeArraycheckon ()
{
CodeArraytest = 1;
return 1;
}
int CodeArraycheckoff ()
{
CodeArraytest = 0;
return 1;
}
int CodeDebugon ()
{
CodeDebugflag = 1;
return 1;
}
nctempchar1 * CodeMktemp ()
{
int nctemp2725= 0;
nctempchar1* nctemp2727=CodeItemp(nctemp2725);
return nctemp2727;
}
int CodeDebugoff ()
{
CodeDebugflag = 0;
return 1;
}
nctempchar1 * CodeNewtemp (nctempchar1 *type)
{
nctempchar1 *temp;
struct symbol* tp;
nctempchar1* nctemp2734=CodeMktemp();
temp=nctemp2734;
nctempchar1* nctemp2739= temp;
struct symbol* nctemp2744=SymGetltp();
struct symbol* nctemp2742= nctemp2744;
struct symbol* nctemp2745=SymMkname(nctemp2739,nctemp2742);
tp =nctemp2745;
struct symbol* nctemp2747= tp;
nctempchar1* nctemp2749= type;
int nctemp2752=SymSetype(nctemp2747,nctemp2749);
struct symbol* nctemp2754= tp;
int nctemp2756= 0;
int nctemp2758=SymSetemit(nctemp2754,nctemp2756);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2765= name;
struct symbol* nctemp2770=SymGetltp();
struct symbol* nctemp2768= nctemp2770;
struct symbol* nctemp2771=SymMkname(nctemp2765,nctemp2768);
tp =nctemp2771;
struct symbol* nctemp2773= tp;
nctempchar1* nctemp2775= type;
int nctemp2778=SymSetype(nctemp2773,nctemp2775);
struct symbol* nctemp2780= tp;
int nctemp2782= 0;
int nctemp2784=SymSetemit(nctemp2780,nctemp2782);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2791=CodeMktemp();
tmp=nctemp2791;
nctempchar1* nctemp2796= tmp;
struct symbol* nctemp2801=SymGetltp();
struct symbol* nctemp2799= nctemp2801;
struct symbol* nctemp2802=SymMkname(nctemp2796,nctemp2799);
sp =nctemp2802;
struct symbol* nctemp2804= sp;
int nctemp2806= 1;
int nctemp2808=SymSetrank(nctemp2804,nctemp2806);
struct symbol* nctemp2810= sp;
struct nctempchar1 *nctemp2814;
static struct nctempchar1 nctemp2815 = {{ 5}, (char*)"char\0"};
nctemp2814=&nctemp2815;
nctempchar1* nctemp2812= nctemp2814;
int nctemp2816=SymSetype(nctemp2810,nctemp2812);
struct symbol* nctemp2818= sp;
struct nctempchar1 *nctemp2822;
static struct nctempchar1 nctemp2823 = {{ 6}, (char*)"array\0"};
nctemp2822=&nctemp2823;
nctempchar1* nctemp2820= nctemp2822;
int nctemp2824=SymSetarray(nctemp2818,nctemp2820);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2832=CodeMktemp();
tmp2=nctemp2832;
struct tree* nctemp2834= p;
struct nctempchar1 *nctemp2838;
static struct nctempchar1 nctemp2839 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2838=&nctemp2839;
nctempchar1* nctemp2836= nctemp2838;
int nctemp2840=CodeEs(nctemp2834,nctemp2836);
struct tree* nctemp2842= p;
nctempchar1* nctemp2844= tmp2;
int nctemp2847=CodeEs(nctemp2842,nctemp2844);
struct tree* nctemp2849= p;
struct nctempchar1 *nctemp2853;
static struct nctempchar1 nctemp2854 = {{ 4}, (char*)";\n\0"};
nctemp2853=&nctemp2854;
nctempchar1* nctemp2851= nctemp2853;
int nctemp2855=CodeEs(nctemp2849,nctemp2851);
nctempchar1* nctemp2861=CodeMktemp();
tmp=nctemp2861;
struct tree* nctemp2863= p;
struct nctempchar1 *nctemp2867;
static struct nctempchar1 nctemp2868 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2867=&nctemp2868;
nctempchar1* nctemp2865= nctemp2867;
int nctemp2869=CodeEs(nctemp2863,nctemp2865);
struct tree* nctemp2871= p;
nctempchar1* nctemp2873= tmp;
int nctemp2876=CodeEs(nctemp2871,nctemp2873);
struct tree* nctemp2878= p;
struct nctempchar1 *nctemp2882;
static struct nctempchar1 nctemp2883 = {{ 4}, (char*)" = \0"};
nctemp2882=&nctemp2883;
nctempchar1* nctemp2880= nctemp2882;
int nctemp2884=CodeEs(nctemp2878,nctemp2880);
struct tree* nctemp2886= p;
struct nctempchar1 *nctemp2890;
static struct nctempchar1 nctemp2891 = {{ 4}, (char*)"{{ \0"};
nctemp2890=&nctemp2891;
nctempchar1* nctemp2888= nctemp2890;
int nctemp2892=CodeEs(nctemp2886,nctemp2888);
struct tree* nctemp2902= p;
nctempchar1* nctemp2904=PtreeGetdef(nctemp2902);
nctempchar1* nctemp2900= nctemp2904;
int nctemp2905=LibeStrlen(nctemp2900);
int nctemp2907 = nctemp2905 - 1;
l =nctemp2907;
int nctemp2909= l;
int nctemp2911=CodeEd(nctemp2909);
struct tree* nctemp2913= p;
struct nctempchar1 *nctemp2917;
static struct nctempchar1 nctemp2918 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2917=&nctemp2918;
nctempchar1* nctemp2915= nctemp2917;
int nctemp2919=CodeEs(nctemp2913,nctemp2915);
int nctemp2921= 34;
int nctemp2923=CodeEc(nctemp2921);
struct tree* nctemp2927= p;
nctempchar1* nctemp2929=PtreeGetdef(nctemp2927);
nctempchar1* nctemp2925= nctemp2929;
int nctemp2930=CodeEsr(nctemp2925);
int nctemp2932= 92;
int nctemp2934=CodeEc(nctemp2932);
int nctemp2936= 48;
int nctemp2938=CodeEc(nctemp2936);
int nctemp2940= 34;
int nctemp2942=CodeEc(nctemp2940);
struct tree* nctemp2944= p;
struct nctempchar1 *nctemp2948;
static struct nctempchar1 nctemp2949 = {{ 5}, (char*)"};\n\0"};
nctemp2948=&nctemp2949;
nctempchar1* nctemp2946= nctemp2948;
int nctemp2950=CodeEs(nctemp2944,nctemp2946);
struct tree* nctemp2952= p;
nctempchar1* nctemp2954= tmp2;
int nctemp2957=CodeEs(nctemp2952,nctemp2954);
struct tree* nctemp2959= p;
struct nctempchar1 *nctemp2963;
static struct nctempchar1 nctemp2964 = {{ 3}, (char*)"=&\0"};
nctemp2963=&nctemp2964;
nctempchar1* nctemp2961= nctemp2963;
int nctemp2965=CodeEs(nctemp2959,nctemp2961);
struct tree* nctemp2967= p;
nctempchar1* nctemp2969= tmp;
int nctemp2972=CodeEs(nctemp2967,nctemp2969);
struct tree* nctemp2974= p;
struct nctempchar1 *nctemp2978;
static struct nctempchar1 nctemp2979 = {{ 4}, (char*)";\n\0"};
nctemp2978=&nctemp2979;
nctempchar1* nctemp2976= nctemp2978;
int nctemp2980=CodeEs(nctemp2974,nctemp2976);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2984= p;
struct nctempchar1 *nctemp2988;
static struct nctempchar1 nctemp2989 = {{ 8}, (char*)"struct \0"};
nctemp2988=&nctemp2989;
nctempchar1* nctemp2986= nctemp2988;
int nctemp2990=CodeEs(nctemp2984,nctemp2986);
struct tree* nctemp2992= p;
struct symbol* nctemp2996= tp;
nctempchar1* nctemp2998=SymGetype(nctemp2996);
nctempchar1* nctemp2994= nctemp2998;
int nctemp2999=CodeEs(nctemp2992,nctemp2994);
struct tree* nctemp3001= p;
struct nctempchar1 *nctemp3005;
static struct nctempchar1 nctemp3006 = {{ 3}, (char*)" {\0"};
nctemp3005=&nctemp3006;
nctempchar1* nctemp3003= nctemp3005;
int nctemp3007=CodeEs(nctemp3001,nctemp3003);
struct symbol* nctemp3012= tp;
struct symbol* nctemp3014=SymGetable(nctemp3012);
up =nctemp3014;
struct symbol* nctemp3019= up;
struct symbol* nctemp3021=SymMvnext(nctemp3019);
up =nctemp3021;
struct tree* nctemp3023= p;
struct symbol* nctemp3025= up;
int nctemp3027=CodeIdeclarations(nctemp3023,nctemp3025);
struct tree* nctemp3029= p;
struct nctempchar1 *nctemp3033;
static struct nctempchar1 nctemp3034 = {{ 5}, (char*)"};\n\0"};
nctemp3033=&nctemp3034;
nctempchar1* nctemp3031= nctemp3033;
int nctemp3035=CodeEs(nctemp3029,nctemp3031);
struct tree* nctemp3037= p;
struct nctempchar1 *nctemp3041;
static struct nctempchar1 nctemp3042 = {{ 16}, (char*)"typedef struct \0"};
nctemp3041=&nctemp3042;
nctempchar1* nctemp3039= nctemp3041;
int nctemp3043=CodeEs(nctemp3037,nctemp3039);
struct tree* nctemp3045= p;
struct nctempchar1 *nctemp3049;
static struct nctempchar1 nctemp3050 = {{ 7}, (char*)"nctemp\0"};
nctemp3049=&nctemp3050;
nctempchar1* nctemp3047= nctemp3049;
int nctemp3051=CodeEs(nctemp3045,nctemp3047);
struct tree* nctemp3053= p;
struct symbol* nctemp3057= tp;
nctempchar1* nctemp3059=SymGetype(nctemp3057);
nctempchar1* nctemp3055= nctemp3059;
int nctemp3060=CodeEs(nctemp3053,nctemp3055);
struct tree* nctemp3062= p;
struct nctempchar1 *nctemp3066;
static struct nctempchar1 nctemp3067 = {{ 2}, (char*)"1\0"};
nctemp3066=&nctemp3067;
nctempchar1* nctemp3064= nctemp3066;
int nctemp3068=CodeEs(nctemp3062,nctemp3064);
struct tree* nctemp3070= p;
struct nctempchar1 *nctemp3074;
static struct nctempchar1 nctemp3075 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3074=&nctemp3075;
nctempchar1* nctemp3072= nctemp3074;
int nctemp3076=CodeEs(nctemp3070,nctemp3072);
struct tree* nctemp3078= p;
struct symbol* nctemp3082= tp;
nctempchar1* nctemp3084=SymGetype(nctemp3082);
nctempchar1* nctemp3080= nctemp3084;
int nctemp3085=CodeEs(nctemp3078,nctemp3080);
struct tree* nctemp3087= p;
struct nctempchar1 *nctemp3091;
static struct nctempchar1 nctemp3092 = {{ 6}, (char*)" *a; \0"};
nctemp3091=&nctemp3092;
nctempchar1* nctemp3089= nctemp3091;
int nctemp3093=CodeEs(nctemp3087,nctemp3089);
struct tree* nctemp3095= p;
struct nctempchar1 *nctemp3099;
static struct nctempchar1 nctemp3100 = {{ 3}, (char*)"} \0"};
nctemp3099=&nctemp3100;
nctempchar1* nctemp3097= nctemp3099;
int nctemp3101=CodeEs(nctemp3095,nctemp3097);
struct tree* nctemp3103= p;
struct nctempchar1 *nctemp3107;
static struct nctempchar1 nctemp3108 = {{ 7}, (char*)"nctemp\0"};
nctemp3107=&nctemp3108;
nctempchar1* nctemp3105= nctemp3107;
int nctemp3109=CodeEs(nctemp3103,nctemp3105);
struct tree* nctemp3111= p;
struct symbol* nctemp3115= tp;
nctempchar1* nctemp3117=SymGetype(nctemp3115);
nctempchar1* nctemp3113= nctemp3117;
int nctemp3118=CodeEs(nctemp3111,nctemp3113);
struct tree* nctemp3120= p;
struct nctempchar1 *nctemp3124;
static struct nctempchar1 nctemp3125 = {{ 2}, (char*)"1\0"};
nctemp3124=&nctemp3125;
nctempchar1* nctemp3122= nctemp3124;
int nctemp3126=CodeEs(nctemp3120,nctemp3122);
struct tree* nctemp3128= p;
struct nctempchar1 *nctemp3132;
static struct nctempchar1 nctemp3133 = {{ 4}, (char*)";\n\0"};
nctemp3132=&nctemp3133;
nctempchar1* nctemp3130= nctemp3132;
int nctemp3134=CodeEs(nctemp3128,nctemp3130);
struct tree* nctemp3136= p;
struct nctempchar1 *nctemp3140;
static struct nctempchar1 nctemp3141 = {{ 8}, (char*)"struct \0"};
nctemp3140=&nctemp3141;
nctempchar1* nctemp3138= nctemp3140;
int nctemp3142=CodeEs(nctemp3136,nctemp3138);
struct tree* nctemp3144= p;
struct nctempchar1 *nctemp3148;
static struct nctempchar1 nctemp3149 = {{ 7}, (char*)"nctemp\0"};
nctemp3148=&nctemp3149;
nctempchar1* nctemp3146= nctemp3148;
int nctemp3150=CodeEs(nctemp3144,nctemp3146);
struct tree* nctemp3152= p;
struct symbol* nctemp3156= tp;
nctempchar1* nctemp3158=SymGetype(nctemp3156);
nctempchar1* nctemp3154= nctemp3158;
int nctemp3159=CodeEs(nctemp3152,nctemp3154);
struct tree* nctemp3161= p;
struct nctempchar1 *nctemp3165;
static struct nctempchar1 nctemp3166 = {{ 2}, (char*)"2\0"};
nctemp3165=&nctemp3166;
nctempchar1* nctemp3163= nctemp3165;
int nctemp3167=CodeEs(nctemp3161,nctemp3163);
struct tree* nctemp3169= p;
struct nctempchar1 *nctemp3173;
static struct nctempchar1 nctemp3174 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3173=&nctemp3174;
nctempchar1* nctemp3171= nctemp3173;
int nctemp3175=CodeEs(nctemp3169,nctemp3171);
struct tree* nctemp3177= p;
struct symbol* nctemp3181= tp;
nctempchar1* nctemp3183=SymGetype(nctemp3181);
nctempchar1* nctemp3179= nctemp3183;
int nctemp3184=CodeEs(nctemp3177,nctemp3179);
struct tree* nctemp3186= p;
struct nctempchar1 *nctemp3190;
static struct nctempchar1 nctemp3191 = {{ 6}, (char*)" *a; \0"};
nctemp3190=&nctemp3191;
nctempchar1* nctemp3188= nctemp3190;
int nctemp3192=CodeEs(nctemp3186,nctemp3188);
struct tree* nctemp3194= p;
struct nctempchar1 *nctemp3198;
static struct nctempchar1 nctemp3199 = {{ 3}, (char*)"} \0"};
nctemp3198=&nctemp3199;
nctempchar1* nctemp3196= nctemp3198;
int nctemp3200=CodeEs(nctemp3194,nctemp3196);
struct tree* nctemp3202= p;
struct nctempchar1 *nctemp3206;
static struct nctempchar1 nctemp3207 = {{ 4}, (char*)";\n\0"};
nctemp3206=&nctemp3207;
nctempchar1* nctemp3204= nctemp3206;
int nctemp3208=CodeEs(nctemp3202,nctemp3204);
struct tree* nctemp3210= p;
struct nctempchar1 *nctemp3214;
static struct nctempchar1 nctemp3215 = {{ 8}, (char*)"struct \0"};
nctemp3214=&nctemp3215;
nctempchar1* nctemp3212= nctemp3214;
int nctemp3216=CodeEs(nctemp3210,nctemp3212);
struct tree* nctemp3218= p;
struct nctempchar1 *nctemp3222;
static struct nctempchar1 nctemp3223 = {{ 7}, (char*)"nctemp\0"};
nctemp3222=&nctemp3223;
nctempchar1* nctemp3220= nctemp3222;
int nctemp3224=CodeEs(nctemp3218,nctemp3220);
struct tree* nctemp3226= p;
struct symbol* nctemp3230= tp;
nctempchar1* nctemp3232=SymGetype(nctemp3230);
nctempchar1* nctemp3228= nctemp3232;
int nctemp3233=CodeEs(nctemp3226,nctemp3228);
struct tree* nctemp3235= p;
struct nctempchar1 *nctemp3239;
static struct nctempchar1 nctemp3240 = {{ 2}, (char*)"3\0"};
nctemp3239=&nctemp3240;
nctempchar1* nctemp3237= nctemp3239;
int nctemp3241=CodeEs(nctemp3235,nctemp3237);
struct tree* nctemp3243= p;
struct nctempchar1 *nctemp3247;
static struct nctempchar1 nctemp3248 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3247=&nctemp3248;
nctempchar1* nctemp3245= nctemp3247;
int nctemp3249=CodeEs(nctemp3243,nctemp3245);
struct tree* nctemp3251= p;
struct symbol* nctemp3255= tp;
nctempchar1* nctemp3257=SymGetype(nctemp3255);
nctempchar1* nctemp3253= nctemp3257;
int nctemp3258=CodeEs(nctemp3251,nctemp3253);
struct tree* nctemp3260= p;
struct nctempchar1 *nctemp3264;
static struct nctempchar1 nctemp3265 = {{ 6}, (char*)" *a; \0"};
nctemp3264=&nctemp3265;
nctempchar1* nctemp3262= nctemp3264;
int nctemp3266=CodeEs(nctemp3260,nctemp3262);
struct tree* nctemp3268= p;
struct nctempchar1 *nctemp3272;
static struct nctempchar1 nctemp3273 = {{ 3}, (char*)"} \0"};
nctemp3272=&nctemp3273;
nctempchar1* nctemp3270= nctemp3272;
int nctemp3274=CodeEs(nctemp3268,nctemp3270);
struct tree* nctemp3276= p;
struct nctempchar1 *nctemp3280;
static struct nctempchar1 nctemp3281 = {{ 4}, (char*)";\n\0"};
nctemp3280=&nctemp3281;
nctempchar1* nctemp3278= nctemp3280;
int nctemp3282=CodeEs(nctemp3276,nctemp3278);
struct tree* nctemp3284= p;
struct nctempchar1 *nctemp3288;
static struct nctempchar1 nctemp3289 = {{ 8}, (char*)"struct \0"};
nctemp3288=&nctemp3289;
nctempchar1* nctemp3286= nctemp3288;
int nctemp3290=CodeEs(nctemp3284,nctemp3286);
struct tree* nctemp3292= p;
struct nctempchar1 *nctemp3296;
static struct nctempchar1 nctemp3297 = {{ 7}, (char*)"nctemp\0"};
nctemp3296=&nctemp3297;
nctempchar1* nctemp3294= nctemp3296;
int nctemp3298=CodeEs(nctemp3292,nctemp3294);
struct tree* nctemp3300= p;
struct symbol* nctemp3304= tp;
nctempchar1* nctemp3306=SymGetype(nctemp3304);
nctempchar1* nctemp3302= nctemp3306;
int nctemp3307=CodeEs(nctemp3300,nctemp3302);
struct tree* nctemp3309= p;
struct nctempchar1 *nctemp3313;
static struct nctempchar1 nctemp3314 = {{ 2}, (char*)"4\0"};
nctemp3313=&nctemp3314;
nctempchar1* nctemp3311= nctemp3313;
int nctemp3315=CodeEs(nctemp3309,nctemp3311);
struct tree* nctemp3317= p;
struct nctempchar1 *nctemp3321;
static struct nctempchar1 nctemp3322 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3321=&nctemp3322;
nctempchar1* nctemp3319= nctemp3321;
int nctemp3323=CodeEs(nctemp3317,nctemp3319);
struct tree* nctemp3325= p;
struct symbol* nctemp3329= tp;
nctempchar1* nctemp3331=SymGetype(nctemp3329);
nctempchar1* nctemp3327= nctemp3331;
int nctemp3332=CodeEs(nctemp3325,nctemp3327);
struct tree* nctemp3334= p;
struct nctempchar1 *nctemp3338;
static struct nctempchar1 nctemp3339 = {{ 6}, (char*)" *a; \0"};
nctemp3338=&nctemp3339;
nctempchar1* nctemp3336= nctemp3338;
int nctemp3340=CodeEs(nctemp3334,nctemp3336);
struct tree* nctemp3342= p;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 3}, (char*)"} \0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=CodeEs(nctemp3342,nctemp3344);
struct tree* nctemp3350= p;
struct nctempchar1 *nctemp3354;
static struct nctempchar1 nctemp3355 = {{ 4}, (char*)";\n\0"};
nctemp3354=&nctemp3355;
nctempchar1* nctemp3352= nctemp3354;
int nctemp3356=CodeEs(nctemp3350,nctemp3352);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3363= tp;
nctempchar1* nctemp3365=SymGetstruct(nctemp3363);
nctempchar1* nctemp3361= nctemp3365;
struct nctempchar1 *nctemp3368;
static struct nctempchar1 nctemp3369 = {{ 7}, (char*)"struct\0"};
nctemp3368=&nctemp3369;
nctempchar1* nctemp3366= nctemp3368;
int nctemp3370=LibeStrcmp(nctemp3361,nctemp3366);
int nctemp3358 = (nctemp3370 ==1);
if(nctemp3358)
{
struct tree* nctemp3373= p;
struct nctempchar1 *nctemp3377;
static struct nctempchar1 nctemp3378 = {{ 8}, (char*)"struct \0"};
nctemp3377=&nctemp3378;
nctempchar1* nctemp3375= nctemp3377;
int nctemp3379=CodeEs(nctemp3373,nctemp3375);
}
struct symbol* nctemp3385= tp;
nctempchar1* nctemp3387=SymGetarray(nctemp3385);
nctempchar1* nctemp3383= nctemp3387;
struct nctempchar1 *nctemp3390;
static struct nctempchar1 nctemp3391 = {{ 6}, (char*)"array\0"};
nctemp3390=&nctemp3391;
nctempchar1* nctemp3388= nctemp3390;
int nctemp3392=LibeStrcmp(nctemp3383,nctemp3388);
int nctemp3380 = (nctemp3392 ==1);
if(nctemp3380)
{
struct tree* nctemp3395= p;
struct nctempchar1 *nctemp3399;
static struct nctempchar1 nctemp3400 = {{ 7}, (char*)"nctemp\0"};
nctemp3399=&nctemp3400;
nctempchar1* nctemp3397= nctemp3399;
int nctemp3401=CodeEs(nctemp3395,nctemp3397);
}
struct tree* nctemp3403= p;
struct symbol* nctemp3407= tp;
nctempchar1* nctemp3409=SymGetype(nctemp3407);
nctempchar1* nctemp3405= nctemp3409;
int nctemp3410=CodeEs(nctemp3403,nctemp3405);
struct symbol* nctemp3416= tp;
nctempchar1* nctemp3418=SymGetarray(nctemp3416);
nctempchar1* nctemp3414= nctemp3418;
struct nctempchar1 *nctemp3421;
static struct nctempchar1 nctemp3422 = {{ 6}, (char*)"array\0"};
nctemp3421=&nctemp3422;
nctempchar1* nctemp3419= nctemp3421;
int nctemp3423=LibeStrcmp(nctemp3414,nctemp3419);
int nctemp3411 = (nctemp3423 ==1);
if(nctemp3411)
{
struct symbol* nctemp3428= tp;
int nctemp3430=SymGetrank(nctemp3428);
int nctemp3426= nctemp3430;
int nctemp3431=CodeEd(nctemp3426);
struct tree* nctemp3433= p;
struct nctempchar1 *nctemp3437;
static struct nctempchar1 nctemp3438 = {{ 2}, (char*)"*\0"};
nctemp3437=&nctemp3438;
nctempchar1* nctemp3435= nctemp3437;
int nctemp3439=CodeEs(nctemp3433,nctemp3435);
}
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
static struct nctempchar1 nctemp3460 = {{ 2}, (char*)"*\0"};
nctemp3459=&nctemp3460;
nctempchar1* nctemp3457= nctemp3459;
int nctemp3461=CodeEs(nctemp3455,nctemp3457);
}
struct tree* nctemp3463= p;
struct nctempchar1 *nctemp3467;
static struct nctempchar1 nctemp3468 = {{ 2}, (char*)" \0"};
nctemp3467=&nctemp3468;
nctempchar1* nctemp3465= nctemp3467;
int nctemp3469=CodeEs(nctemp3463,nctemp3465);
struct tree* nctemp3471= p;
struct symbol* nctemp3475= tp;
nctempchar1* nctemp3477=SymGetname(nctemp3475);
nctempchar1* nctemp3473= nctemp3477;
int nctemp3478=CodeEs(nctemp3471,nctemp3473);
struct tree* nctemp3480= p;
struct nctempchar1 *nctemp3484;
static struct nctempchar1 nctemp3485 = {{ 3}, (char*)" (\0"};
nctemp3484=&nctemp3485;
nctempchar1* nctemp3482= nctemp3484;
int nctemp3486=CodeEs(nctemp3480,nctemp3482);
struct symbol* nctemp3491= tp;
struct symbol* nctemp3493=SymGetable(nctemp3491);
tp =nctemp3493;
struct nctempchar1 *nctemp3500;
static struct nctempchar1 nctemp3501 = {{ 9}, (char*)"#arglist\0"};
nctemp3500=&nctemp3501;
nctempchar1* nctemp3498= nctemp3500;
struct symbol* nctemp3502= tp;
struct symbol* nctemp3504=SymLookup(nctemp3498,nctemp3502);
tp =nctemp3504;
struct symbol* nctemp3509= tp;
struct symbol* nctemp3511=SymGetable(nctemp3509);
tp =nctemp3511;
noargs = 0;
struct symbol* nctemp3519= tp;
struct symbol* nctemp3521=SymMvnext(nctemp3519);
tp =nctemp3521;
int nctemp3512 = (tp !=0);
int nctemp3523=nctemp3512;
while(nctemp3523)
{{
struct tree* nctemp3525= p;
struct symbol* nctemp3527= tp;
int nctemp3529=CodeIdeclaration(nctemp3525,nctemp3527);
struct symbol* nctemp3533= tp;
struct symbol* nctemp3535=SymMvnext(nctemp3533);
int nctemp3530 = (nctemp3535 !=0);
if(nctemp3530)
{
struct tree* nctemp3538= p;
struct nctempchar1 *nctemp3542;
static struct nctempchar1 nctemp3543 = {{ 2}, (char*)",\0"};
nctemp3542=&nctemp3543;
nctempchar1* nctemp3540= nctemp3542;
int nctemp3544=CodeEs(nctemp3538,nctemp3540);
}
noargs = (noargs + 1);
}
struct symbol* nctemp3552= tp;
struct symbol* nctemp3554=SymMvnext(nctemp3552);
tp =nctemp3554;
int nctemp3545 = (tp !=0);
nctemp3523=nctemp3545;}struct tree* nctemp3557= p;
struct nctempchar1 *nctemp3561;
static struct nctempchar1 nctemp3562 = {{ 5}, (char*)");\n\0"};
nctemp3561=&nctemp3562;
nctempchar1* nctemp3559= nctemp3561;
int nctemp3563=CodeEs(nctemp3557,nctemp3559);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3569= p;
struct tree* nctemp3571=PtreeMvchild(nctemp3569);
np =nctemp3571;
int nctemp3572 = (np !=0);
int nctemp3576=nctemp3572;
while(nctemp3576)
{{
struct tree* nctemp3582= np;
nctempchar1* nctemp3584=PtreeGetname(nctemp3582);
nctempchar1* nctemp3580= nctemp3584;
struct nctempchar1 *nctemp3587;
static struct nctempchar1 nctemp3588 = {{ 5}, (char*)"fdef\0"};
nctemp3587=&nctemp3588;
nctempchar1* nctemp3585= nctemp3587;
int nctemp3589=LibeStrcmp(nctemp3580,nctemp3585);
int nctemp3577 = (nctemp3589 ==1);
if(nctemp3577)
{
struct tree* nctemp3592= np;
int nctemp3594=CodeFdef(nctemp3592);
}
struct tree* nctemp3599= np;
struct tree* nctemp3601=PtreeMvsister(nctemp3599);
np =nctemp3601;
}
int nctemp3602 = (np !=0);
nctemp3576=nctemp3602;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3607 = (p !=0);
int nctemp3611=nctemp3607;
while(nctemp3611)
{{
struct tree* nctemp3620= p;
nctempchar1* nctemp3622=PtreeGetname(nctemp3620);
nctempchar1* nctemp3618= nctemp3622;
struct nctempchar1 *nctemp3625;
static struct nctempchar1 nctemp3626 = {{ 5}, (char*)"type\0"};
nctemp3625=&nctemp3626;
nctempchar1* nctemp3623= nctemp3625;
int nctemp3627=LibeStrcmp(nctemp3618,nctemp3623);
int nctemp3615 = (nctemp3627 ==1);
struct tree* nctemp3635= p;
nctempchar1* nctemp3637=PtreeGetname(nctemp3635);
nctempchar1* nctemp3633= nctemp3637;
struct nctempchar1 *nctemp3640;
static struct nctempchar1 nctemp3641 = {{ 7}, (char*)"struct\0"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=LibeStrcmp(nctemp3633,nctemp3638);
int nctemp3630 = (nctemp3642 ==1);
int nctemp3612 = (nctemp3615 || nctemp3630);
if(nctemp3612)
{
struct tree* nctemp3645= p;
int nctemp3647=CodeWdeclaration(nctemp3645);
}
struct tree* nctemp3652= p;
struct tree* nctemp3654=PtreeMvsister(nctemp3652);
p =nctemp3654;
}
int nctemp3655 = (p !=0);
nctemp3611=nctemp3655;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3666;
static struct nctempchar1 nctemp3667 = {{ 6}, (char*)"dummy\0"};
nctemp3666=&nctemp3667;
nctempchar1* nctemp3664= nctemp3666;
struct nctempchar1 *nctemp3670;
static struct nctempchar1 nctemp3671 = {{ 6}, (char*)"dummy\0"};
nctemp3670=&nctemp3671;
nctempchar1* nctemp3668= nctemp3670;
struct tree* nctemp3672=PtreeMknode(nctemp3664,nctemp3668);
p =nctemp3672;
struct tree* nctemp3674= p;
int nctemp3676= line;
int nctemp3678=PtreeSetline(nctemp3674,nctemp3676);
qname = name;
nctempchar1 *nctemp3680 =qual;
int nctemp3679 =(nctemp3680!=0);
if(nctemp3679)
{
nctempchar1* nctemp3689= qual;
struct nctempchar1 *nctemp3694;
static struct nctempchar1 nctemp3695 = {{ 3}, (char*)"->\0"};
nctemp3694=&nctemp3695;
nctempchar1* nctemp3692= nctemp3694;
nctempchar1* nctemp3696=LibeStradd(nctemp3689,nctemp3692);
tmp=nctemp3696;
nctempchar1* nctemp3702= tmp;
nctempchar1* nctemp3705= name;
nctempchar1* nctemp3708=LibeStradd(nctemp3702,nctemp3705);
qname=nctemp3708;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3713= p;
struct nctempchar1 *nctemp3717;
static struct nctempchar1 nctemp3718 = {{ 7}, (char*)"if((0>\0"};
nctemp3717=&nctemp3718;
nctempchar1* nctemp3715= nctemp3717;
int nctemp3719=CodeEs(nctemp3713,nctemp3715);
struct tree* nctemp3721= p;
nctempchar1* nctemp3723= ival;
int nctemp3726=CodeEs(nctemp3721,nctemp3723);
struct tree* nctemp3728= p;
struct nctempchar1 *nctemp3732;
static struct nctempchar1 nctemp3733 = {{ 5}, (char*)")||(\0"};
nctemp3732=&nctemp3733;
nctempchar1* nctemp3730= nctemp3732;
int nctemp3734=CodeEs(nctemp3728,nctemp3730);
struct tree* nctemp3736= p;
nctempchar1* nctemp3738= ival;
int nctemp3741=CodeEs(nctemp3736,nctemp3738);
struct tree* nctemp3743= p;
struct nctempchar1 *nctemp3747;
static struct nctempchar1 nctemp3748 = {{ 3}, (char*)">=\0"};
nctemp3747=&nctemp3748;
nctempchar1* nctemp3745= nctemp3747;
int nctemp3749=CodeEs(nctemp3743,nctemp3745);
nctempchar1 *nctemp3751 =qual;
int nctemp3750 =(nctemp3751!=0);
if(nctemp3750)
{
struct tree* nctemp3756= p;
nctempchar1* nctemp3758= qual;
int nctemp3761=CodeEs(nctemp3756,nctemp3758);
struct tree* nctemp3763= p;
nctempchar1* nctemp3765= sel;
int nctemp3768=CodeEs(nctemp3763,nctemp3765);
}
struct tree* nctemp3770= p;
nctempchar1* nctemp3772= name;
int nctemp3775=CodeEs(nctemp3770,nctemp3772);
struct tree* nctemp3777= p;
struct nctempchar1 *nctemp3781;
static struct nctempchar1 nctemp3782 = {{ 5}, (char*)"->d[\0"};
nctemp3781=&nctemp3782;
nctempchar1* nctemp3779= nctemp3781;
int nctemp3783=CodeEs(nctemp3777,nctemp3779);
int nctemp3785= index;
int nctemp3787=CodeEd(nctemp3785);
struct tree* nctemp3789= p;
struct nctempchar1 *nctemp3793;
static struct nctempchar1 nctemp3794 = {{ 7}, (char*)"])){\n\0"};
nctemp3793=&nctemp3794;
nctempchar1* nctemp3791= nctemp3793;
int nctemp3795=CodeEs(nctemp3789,nctemp3791);
struct tree* nctemp3797= p;
struct nctempchar1 *nctemp3801;
static struct nctempchar1 nctemp3802 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3801=&nctemp3802;
nctempchar1* nctemp3799= nctemp3801;
int nctemp3803=CodeEs(nctemp3797,nctemp3799);
struct tree* nctemp3805= p;
nctempchar1* nctemp3809=ScanGetfile();
nctempchar1* nctemp3807= nctemp3809;
int nctemp3810=CodeEs(nctemp3805,nctemp3807);
struct tree* nctemp3812= p;
struct nctempchar1 *nctemp3816;
static struct nctempchar1 nctemp3817 = {{ 2}, (char*)" \0"};
nctemp3816=&nctemp3817;
nctempchar1* nctemp3814= nctemp3816;
int nctemp3818=CodeEs(nctemp3812,nctemp3814);
struct tree* nctemp3820= p;
nctempchar1* nctemp3822= qname;
int nctemp3825=CodeEs(nctemp3820,nctemp3822);
struct tree* nctemp3827= p;
struct nctempchar1 *nctemp3831;
static struct nctempchar1 nctemp3832 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3831=&nctemp3832;
nctempchar1* nctemp3829= nctemp3831;
int nctemp3833=CodeEs(nctemp3827,nctemp3829);
struct tree* nctemp3835= p;
struct nctempchar1 *nctemp3839;
static struct nctempchar1 nctemp3840 = {{ 6}, (char*)" \" ,\0"};
nctemp3839=&nctemp3840;
nctempchar1* nctemp3837= nctemp3839;
int nctemp3841=CodeEs(nctemp3835,nctemp3837);
int nctemp3843= line;
int nctemp3845=CodeEd(nctemp3843);
struct tree* nctemp3847= p;
struct nctempchar1 *nctemp3851;
static struct nctempchar1 nctemp3852 = {{ 2}, (char*)",\0"};
nctemp3851=&nctemp3852;
nctempchar1* nctemp3849= nctemp3851;
int nctemp3853=CodeEs(nctemp3847,nctemp3849);
struct tree* nctemp3855= p;
nctempchar1* nctemp3857= ival;
int nctemp3860=CodeEs(nctemp3855,nctemp3857);
struct tree* nctemp3862= p;
struct nctempchar1 *nctemp3866;
static struct nctempchar1 nctemp3867 = {{ 2}, (char*)",\0"};
nctemp3866=&nctemp3867;
nctempchar1* nctemp3864= nctemp3866;
int nctemp3868=CodeEs(nctemp3862,nctemp3864);
int nctemp3870= index;
int nctemp3872=CodeEd(nctemp3870);
struct tree* nctemp3874= p;
struct nctempchar1 *nctemp3878;
static struct nctempchar1 nctemp3879 = {{ 2}, (char*)",\0"};
nctemp3878=&nctemp3879;
nctempchar1* nctemp3876= nctemp3878;
int nctemp3880=CodeEs(nctemp3874,nctemp3876);
struct tree* nctemp3882= p;
nctempchar1* nctemp3884= qname;
int nctemp3887=CodeEs(nctemp3882,nctemp3884);
struct tree* nctemp3889= p;
struct nctempchar1 *nctemp3893;
static struct nctempchar1 nctemp3894 = {{ 5}, (char*)"->d[\0"};
nctemp3893=&nctemp3894;
nctempchar1* nctemp3891= nctemp3893;
int nctemp3895=CodeEs(nctemp3889,nctemp3891);
int nctemp3897= index;
int nctemp3899=CodeEd(nctemp3897);
struct tree* nctemp3901= p;
struct nctempchar1 *nctemp3905;
static struct nctempchar1 nctemp3906 = {{ 4}, (char*)"]-1\0"};
nctemp3905=&nctemp3906;
nctempchar1* nctemp3903= nctemp3905;
int nctemp3907=CodeEs(nctemp3901,nctemp3903);
struct tree* nctemp3909= p;
struct nctempchar1 *nctemp3913;
static struct nctempchar1 nctemp3914 = {{ 3}, (char*)");\0"};
nctemp3913=&nctemp3914;
nctempchar1* nctemp3911= nctemp3913;
int nctemp3915=CodeEs(nctemp3909,nctemp3911);
struct tree* nctemp3917= p;
struct nctempchar1 *nctemp3921;
static struct nctempchar1 nctemp3922 = {{ 6}, (char*)"\n}\n\0"};
nctemp3921=&nctemp3922;
nctempchar1* nctemp3919= nctemp3921;
int nctemp3923=CodeEs(nctemp3917,nctemp3919);
nctempchar1 *nctemp3925 =qual;
int nctemp3924 =(nctemp3925!=0);
if(nctemp3924)
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
struct tree* nctemp3938= p;
nctempchar1* nctemp3940=PtreeGetdef(nctemp3938);
name=nctemp3940;
nctempchar1* nctemp3946=CodeMktemp();
temp=nctemp3946;
nctempchar1* nctemp3951= name;
struct symbol* nctemp3954=SymLook(nctemp3951);
tp =nctemp3954;
int nctemp3955 = (tp ==0);
if(nctemp3955)
{
nctempchar1* nctemp3960= name;
int nctemp3963=CodeError(nctemp3960);
}
struct tree* nctemp3968= p;
struct tree* nctemp3970=PtreeMvchild(nctemp3968);
sp =nctemp3970;
int nctemp3971 = (sp ==0);
if(nctemp3971)
{
struct tree* nctemp3976= p;
nctempchar1* nctemp3978=PtreeGetdef(nctemp3976);
return nctemp3978;
}
else{
struct tree* nctemp3984= sp;
nctempchar1* nctemp3986=PtreeGetname(nctemp3984);
nctempchar1* nctemp3982= nctemp3986;
struct nctempchar1 *nctemp3989;
static struct nctempchar1 nctemp3990 = {{ 9}, (char*)"exprlist\0"};
nctemp3989=&nctemp3990;
nctempchar1* nctemp3987= nctemp3989;
int nctemp3991=LibeStrcmp(nctemp3982,nctemp3987);
int nctemp3979 = (nctemp3991 ==0);
if(nctemp3979)
{
struct tree* nctemp3994= p;
nctempchar1* nctemp3996=PtreeGetdef(nctemp3994);
return nctemp3996;
}
}
struct symbol* nctemp4001= tp;
int nctemp4003=SymGetrank(nctemp4001);
rank =nctemp4003;
struct tree* nctemp4008= p;
struct tree* nctemp4010=PtreeMvchild(nctemp4008);
p =nctemp4010;
struct tree* nctemp4015= p;
struct tree* nctemp4017=PtreeMvchild(nctemp4015);
p =nctemp4017;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp4018 = (i ==0);
if(nctemp4018)
{
struct tree* nctemp4027= p;
nctempchar1* nctemp4029=CodeExpr(nctemp4027);
temp2=nctemp4029;
struct tree* nctemp4031= p;
struct tree* nctemp4035= p;
nctempchar1* nctemp4037=PtreeGetype(nctemp4035);
nctempchar1* nctemp4033= nctemp4037;
int nctemp4038=CodeEs(nctemp4031,nctemp4033);
struct tree* nctemp4040= p;
struct nctempchar1 *nctemp4044;
static struct nctempchar1 nctemp4045 = {{ 2}, (char*)" \0"};
nctemp4044=&nctemp4045;
nctempchar1* nctemp4042= nctemp4044;
int nctemp4046=CodeEs(nctemp4040,nctemp4042);
struct tree* nctemp4048= p;
nctempchar1* nctemp4050= temp;
int nctemp4053=CodeEs(nctemp4048,nctemp4050);
struct tree* nctemp4055= p;
struct nctempchar1 *nctemp4059;
static struct nctempchar1 nctemp4060 = {{ 2}, (char*)"=\0"};
nctemp4059=&nctemp4060;
nctempchar1* nctemp4057= nctemp4059;
int nctemp4061=CodeEs(nctemp4055,nctemp4057);
struct tree* nctemp4063= p;
nctempchar1* nctemp4065= temp2;
int nctemp4068=CodeEs(nctemp4063,nctemp4065);
struct tree* nctemp4070= p;
struct nctempchar1 *nctemp4074;
static struct nctempchar1 nctemp4075 = {{ 4}, (char*)";\n\0"};
nctemp4074=&nctemp4075;
nctempchar1* nctemp4072= nctemp4074;
int nctemp4076=CodeEs(nctemp4070,nctemp4072);
int nctemp4078=CodeArraycheck();
if(nctemp4078)
{
struct tree* nctemp4082= p;
int nctemp4084=PtreeGetline(nctemp4082);
int nctemp4080= nctemp4084;
nctempchar1* nctemp4085= qual;
nctempchar1* nctemp4088= sel;
nctempchar1* nctemp4091= name;
nctempchar1* nctemp4094= temp2;
int nctemp4097= i;
int nctemp4099=CodeArrayex(nctemp4080,nctemp4085,nctemp4088,nctemp4091,nctemp4094,nctemp4097);
}
}
else{
struct tree* nctemp4105= sp;
nctempchar1* nctemp4107=CodeExpr(nctemp4105);
temp2=nctemp4107;
struct tree* nctemp4109= p;
nctempchar1* nctemp4111= temp;
int nctemp4114=CodeEs(nctemp4109,nctemp4111);
struct tree* nctemp4116= p;
struct nctempchar1 *nctemp4120;
static struct nctempchar1 nctemp4121 = {{ 2}, (char*)"=\0"};
nctemp4120=&nctemp4121;
nctempchar1* nctemp4118= nctemp4120;
int nctemp4122=CodeEs(nctemp4116,nctemp4118);
struct tree* nctemp4124= p;
nctempchar1* nctemp4126= temp2;
int nctemp4129=CodeEs(nctemp4124,nctemp4126);
struct tree* nctemp4131= p;
struct nctempchar1 *nctemp4135;
static struct nctempchar1 nctemp4136 = {{ 2}, (char*)"*\0"};
nctemp4135=&nctemp4136;
nctempchar1* nctemp4133= nctemp4135;
int nctemp4137=CodeEs(nctemp4131,nctemp4133);
nctempchar1 *nctemp4139 =qual;
int nctemp4138 =(nctemp4139!=0);
if(nctemp4138)
{
struct tree* nctemp4144= p;
nctempchar1* nctemp4146= qual;
int nctemp4149=CodeEs(nctemp4144,nctemp4146);
}
nctempchar1 *nctemp4151 =sel;
int nctemp4150 =(nctemp4151!=0);
if(nctemp4150)
{
struct tree* nctemp4156= p;
nctempchar1* nctemp4158= sel;
int nctemp4161=CodeEs(nctemp4156,nctemp4158);
}
struct tree* nctemp4163= p;
nctempchar1* nctemp4165= name;
int nctemp4168=CodeEs(nctemp4163,nctemp4165);
struct tree* nctemp4170= p;
struct nctempchar1 *nctemp4174;
static struct nctempchar1 nctemp4175 = {{ 4}, (char*)"->d\0"};
nctemp4174=&nctemp4175;
nctempchar1* nctemp4172= nctemp4174;
int nctemp4176=CodeEs(nctemp4170,nctemp4172);
struct tree* nctemp4178= p;
struct nctempchar1 *nctemp4182;
static struct nctempchar1 nctemp4183 = {{ 2}, (char*)"[\0"};
nctemp4182=&nctemp4183;
nctempchar1* nctemp4180= nctemp4182;
int nctemp4184=CodeEs(nctemp4178,nctemp4180);
int nctemp4191 = i - 1;
int nctemp4186= nctemp4191;
int nctemp4192=CodeEd(nctemp4186);
struct tree* nctemp4194= p;
struct nctempchar1 *nctemp4198;
static struct nctempchar1 nctemp4199 = {{ 2}, (char*)"]\0"};
nctemp4198=&nctemp4199;
nctempchar1* nctemp4196= nctemp4198;
int nctemp4200=CodeEs(nctemp4194,nctemp4196);
struct tree* nctemp4202= p;
struct nctempchar1 *nctemp4206;
static struct nctempchar1 nctemp4207 = {{ 2}, (char*)"+\0"};
nctemp4206=&nctemp4207;
nctempchar1* nctemp4204= nctemp4206;
int nctemp4208=CodeEs(nctemp4202,nctemp4204);
struct tree* nctemp4210= p;
nctempchar1* nctemp4212= temp;
int nctemp4215=CodeEs(nctemp4210,nctemp4212);
struct tree* nctemp4217= p;
struct nctempchar1 *nctemp4221;
static struct nctempchar1 nctemp4222 = {{ 4}, (char*)";\n\0"};
nctemp4221=&nctemp4222;
nctempchar1* nctemp4219= nctemp4221;
int nctemp4223=CodeEs(nctemp4217,nctemp4219);
int nctemp4225=CodeArraycheck();
if(nctemp4225)
{
struct tree* nctemp4229= p;
int nctemp4231=PtreeGetline(nctemp4229);
int nctemp4227= nctemp4231;
nctempchar1* nctemp4232= qual;
nctempchar1* nctemp4235= sel;
nctempchar1* nctemp4238= name;
nctempchar1* nctemp4241= temp2;
int nctemp4244= i;
int nctemp4246=CodeArrayex(nctemp4227,nctemp4232,nctemp4235,nctemp4238,nctemp4241,nctemp4244);
}
}
int nctemp4247 = (sp !=0);
if(nctemp4247)
{
struct tree* nctemp4255= sp;
struct tree* nctemp4257=PtreeMvsister(nctemp4255);
sp =nctemp4257;
}
}
nctempchar1* nctemp4268= name;
int nctemp4271=LibeStrlen(nctemp4268);
nctempchar1* nctemp4273= temp;
int nctemp4276=LibeStrlen(nctemp4273);
int nctemp4277 = nctemp4271 + nctemp4276;
int nctemp4279 = nctemp4277 + 6;
size =nctemp4279;
int nctemp4286=size;
nctempchar1 *nctemp4285;
nctemp4285=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4285->d[0]=size;
nctemp4285->a=(char *)RunMalloc(sizeof(char)*nctemp4286);
rval=nctemp4285;
nctempchar1* nctemp4290= name;
nctempchar1* nctemp4293= rval;
int nctemp4296=LibeStrcpy(nctemp4290,nctemp4293);
struct nctempchar1 *nctemp4300;
static struct nctempchar1 nctemp4301 = {{ 4}, (char*)"->a\0"};
nctemp4300=&nctemp4301;
nctempchar1* nctemp4298= nctemp4300;
nctempchar1* nctemp4302= rval;
int nctemp4305=LibeStrcat(nctemp4298,nctemp4302);
struct nctempchar1 *nctemp4309;
static struct nctempchar1 nctemp4310 = {{ 2}, (char*)"[\0"};
nctemp4309=&nctemp4310;
nctempchar1* nctemp4307= nctemp4309;
nctempchar1* nctemp4311= rval;
int nctemp4314=LibeStrcat(nctemp4307,nctemp4311);
nctempchar1* nctemp4316= temp;
nctempchar1* nctemp4319= rval;
int nctemp4322=LibeStrcat(nctemp4316,nctemp4319);
struct nctempchar1 *nctemp4326;
static struct nctempchar1 nctemp4327 = {{ 2}, (char*)"]\0"};
nctemp4326=&nctemp4327;
nctempchar1* nctemp4324= nctemp4326;
nctempchar1* nctemp4328= rval;
int nctemp4331=LibeStrcat(nctemp4324,nctemp4328);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4338= qual;
int nctemp4341=LibeStrlen(nctemp4338);
lq =nctemp4341;
nctempchar1* nctemp4346= ident;
int nctemp4349=LibeStrlen(nctemp4346);
li =nctemp4349;
int nctemp4364 = lq + li;
int nctemp4366 = nctemp4364 + 2;
int nctemp4356=nctemp4366;
nctempchar1 *nctemp4355;
nctemp4355=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4374 = lq + li;
int nctemp4376 = nctemp4374 + 2;
nctemp4355->d[0]=nctemp4376;
nctemp4355->a=(char *)RunMalloc(sizeof(char)*nctemp4356);
name=nctemp4355;
nctempchar1* nctemp4378= qual;
nctempchar1* nctemp4381= name;
int nctemp4384=LibeStrcpy(nctemp4378,nctemp4381);
struct nctempchar1 *nctemp4388;
static struct nctempchar1 nctemp4389 = {{ 2}, (char*)".\0"};
nctemp4388=&nctemp4389;
nctempchar1* nctemp4386= nctemp4388;
nctempchar1* nctemp4390= name;
int nctemp4393=LibeStrcat(nctemp4386,nctemp4390);
nctempchar1* nctemp4395= ident;
nctempchar1* nctemp4398= name;
int nctemp4401=LibeStrcat(nctemp4395,nctemp4398);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4408= qual;
int nctemp4411=LibeStrlen(nctemp4408);
lq =nctemp4411;
nctempchar1* nctemp4416= ident;
int nctemp4419=LibeStrlen(nctemp4416);
li =nctemp4419;
int nctemp4434 = lq + li;
int nctemp4436 = nctemp4434 + 3;
int nctemp4426=nctemp4436;
nctempchar1 *nctemp4425;
nctemp4425=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4444 = lq + li;
int nctemp4446 = nctemp4444 + 3;
nctemp4425->d[0]=nctemp4446;
nctemp4425->a=(char *)RunMalloc(sizeof(char)*nctemp4426);
name=nctemp4425;
nctempchar1* nctemp4448= qual;
nctempchar1* nctemp4451= name;
int nctemp4454=LibeStrcpy(nctemp4448,nctemp4451);
struct nctempchar1 *nctemp4458;
static struct nctempchar1 nctemp4459 = {{ 3}, (char*)"->\0"};
nctemp4458=&nctemp4459;
nctempchar1* nctemp4456= nctemp4458;
nctempchar1* nctemp4460= name;
int nctemp4463=LibeStrcat(nctemp4456,nctemp4460);
nctempchar1* nctemp4465= ident;
nctempchar1* nctemp4468= name;
int nctemp4471=LibeStrcat(nctemp4465,nctemp4468);
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
qual  = 0;
struct tree* nctemp4479= p;
nctempchar1* nctemp4481=PtreeGetstruct(nctemp4479);
nctempchar1* nctemp4477= nctemp4481;
struct nctempchar1 *nctemp4484;
static struct nctempchar1 nctemp4485 = {{ 7}, (char*)"struct\0"};
nctemp4484=&nctemp4485;
nctempchar1* nctemp4482= nctemp4484;
int nctemp4486=LibeStrcmp(nctemp4477,nctemp4482);
int nctemp4474 = (nctemp4486 ==1);
if(nctemp4474)
{
struct tree* nctemp4493= p;
nctempchar1* nctemp4495=PtreeGetarray(nctemp4493);
nctempchar1* nctemp4491= nctemp4495;
struct nctempchar1 *nctemp4498;
static struct nctempchar1 nctemp4499 = {{ 6}, (char*)"array\0"};
nctemp4498=&nctemp4499;
nctempchar1* nctemp4496= nctemp4498;
int nctemp4500=LibeStrcmp(nctemp4491,nctemp4496);
int nctemp4488 = (nctemp4500 ==1);
if(nctemp4488)
{
struct tree* nctemp4507= p;
nctempchar1* nctemp4509= qual;
struct nctempchar1 *nctemp4514;
static struct nctempchar1 nctemp4515 = {{ 2}, (char*)".\0"};
nctemp4514=&nctemp4515;
nctempchar1* nctemp4512= nctemp4514;
nctempchar1* nctemp4516=CodeArray(nctemp4507,nctemp4509,nctemp4512);
qual=nctemp4516;
struct tree* nctemp4521= p;
struct tree* nctemp4523=PtreeMvchild(nctemp4521);
np =nctemp4523;
int nctemp4524 = (np ==0);
if(nctemp4524)
{
return qual;
}
struct tree* nctemp4534= np;
struct tree* nctemp4536=PtreeMvsister(nctemp4534);
np =nctemp4536;
int nctemp4537 = (np ==0);
if(nctemp4537)
{
return qual;
}
}
else{
struct tree* nctemp4548= p;
nctempchar1* nctemp4550=PtreeGetdef(nctemp4548);
qual=nctemp4550;
struct tree* nctemp4558= p;
struct tree* nctemp4560=PtreeMvchild(nctemp4558);
np =nctemp4560;
int nctemp4551 = (np ==0);
if(nctemp4551)
{
return qual;
}
}
struct tree* nctemp4569= np;
nctempchar1* nctemp4571=PtreeGetarray(nctemp4569);
nctempchar1* nctemp4567= nctemp4571;
struct nctempchar1 *nctemp4574;
static struct nctempchar1 nctemp4575 = {{ 6}, (char*)"array\0"};
nctemp4574=&nctemp4575;
nctempchar1* nctemp4572= nctemp4574;
int nctemp4576=LibeStrcmp(nctemp4567,nctemp4572);
int nctemp4564 = (nctemp4576 ==1);
if(nctemp4564)
{
struct symbol* nctemp4582=SymGetltp();
tp =nctemp4582;
struct symbol* nctemp4587=SymGetetp();
up =nctemp4587;
struct tree* nctemp4594= p;
nctempchar1* nctemp4596=PtreeGetdef(nctemp4594);
nctempchar1* nctemp4592= nctemp4596;
struct symbol* nctemp4597=SymLook(nctemp4592);
uup =nctemp4597;
struct symbol* nctemp4604= uup;
nctempchar1* nctemp4606=SymGetype(nctemp4604);
nctempchar1* nctemp4602= nctemp4606;
struct symbol* nctemp4607=SymLook(nctemp4602);
uup =nctemp4607;
struct symbol* nctemp4611= uup;
struct symbol* nctemp4613=SymGetable(nctemp4611);
struct symbol* nctemp4609= nctemp4613;
int nctemp4614=SymSetltp(nctemp4609);
struct tree* nctemp4620= p;
nctempchar1* nctemp4622=PtreeGetarray(nctemp4620);
nctempchar1* nctemp4618= nctemp4622;
struct nctempchar1 *nctemp4625;
static struct nctempchar1 nctemp4626 = {{ 6}, (char*)"array\0"};
nctemp4625=&nctemp4626;
nctempchar1* nctemp4623= nctemp4625;
int nctemp4627=LibeStrcmp(nctemp4618,nctemp4623);
int nctemp4615 = (nctemp4627 ==1);
if(nctemp4615)
{
struct tree* nctemp4634= np;
nctempchar1* nctemp4636= qual;
struct nctempchar1 *nctemp4641;
static struct nctempchar1 nctemp4642 = {{ 2}, (char*)".\0"};
nctemp4641=&nctemp4642;
nctempchar1* nctemp4639= nctemp4641;
nctempchar1* nctemp4643=CodeArray(nctemp4634,nctemp4636,nctemp4639);
name=nctemp4643;
}
else{
struct tree* nctemp4649= np;
nctempchar1* nctemp4651= qual;
struct nctempchar1 *nctemp4656;
static struct nctempchar1 nctemp4657 = {{ 3}, (char*)"->\0"};
nctemp4656=&nctemp4657;
nctempchar1* nctemp4654= nctemp4656;
nctempchar1* nctemp4658=CodeArray(nctemp4649,nctemp4651,nctemp4654);
name=nctemp4658;
}
struct symbol* nctemp4660= tp;
int nctemp4662=SymSetltp(nctemp4660);
struct symbol* nctemp4664= up;
int nctemp4666=SymSetetp(nctemp4664);
}
else{
struct tree* nctemp4672= np;
nctempchar1* nctemp4674=PtreeGetdef(nctemp4672);
name=nctemp4674;
}
struct tree* nctemp4680= p;
nctempchar1* nctemp4682=PtreeGetarray(nctemp4680);
nctempchar1* nctemp4678= nctemp4682;
struct nctempchar1 *nctemp4685;
static struct nctempchar1 nctemp4686 = {{ 6}, (char*)"array\0"};
nctemp4685=&nctemp4686;
nctempchar1* nctemp4683= nctemp4685;
int nctemp4687=LibeStrcmp(nctemp4678,nctemp4683);
int nctemp4675 = (nctemp4687 ==1);
if(nctemp4675)
{
nctempchar1* nctemp4690= qual;
nctempchar1* nctemp4693= name;
nctempchar1* nctemp4696=CodeQident(nctemp4690,nctemp4693);
return nctemp4696;
}
else{
nctempchar1* nctemp4698= qual;
nctempchar1* nctemp4701= name;
nctempchar1* nctemp4704=CodeQident2(nctemp4698,nctemp4701);
return nctemp4704;
}
}
else{
struct tree* nctemp4710= p;
nctempchar1* nctemp4712=PtreeGetarray(nctemp4710);
nctempchar1* nctemp4708= nctemp4712;
struct nctempchar1 *nctemp4715;
static struct nctempchar1 nctemp4716 = {{ 6}, (char*)"array\0"};
nctemp4715=&nctemp4716;
nctempchar1* nctemp4713= nctemp4715;
int nctemp4717=LibeStrcmp(nctemp4708,nctemp4713);
int nctemp4705 = (nctemp4717 ==1);
if(nctemp4705)
{
name  = 0;
qual  = 0;
struct tree* nctemp4724= p;
nctempchar1* nctemp4726= qual;
nctempchar1* nctemp4729= name;
nctempchar1* nctemp4732=CodeArray(nctemp4724,nctemp4726,nctemp4729);
qual=nctemp4732;
return qual;
}
else{
struct tree* nctemp4736= p;
nctempchar1* nctemp4738=PtreeGetdef(nctemp4736);
return nctemp4738;
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
nctempchar1* nctemp4744=CodeMktemp();
pointer=nctemp4744;
nctempchar1* nctemp4750=CodeMktemp();
totdim=nctemp4750;
struct tree* nctemp4755= p;
struct tree* nctemp4757=PtreeMvchild(nctemp4755);
p =nctemp4757;
struct tree* nctemp4763= p;
nctempchar1* nctemp4765=PtreeGetdef(nctemp4763);
type=nctemp4765;
struct tree* nctemp4771= p;
nctempchar1* nctemp4773=PtreeGetstruct(nctemp4771);
structflag=nctemp4773;
struct tree* nctemp4779= p;
nctempchar1* nctemp4781=PtreeGetarray(nctemp4779);
arrayflag=nctemp4781;
struct tree* nctemp4787= p;
nctempchar1* nctemp4789=PtreeGetarray(nctemp4787);
nctempchar1* nctemp4785= nctemp4789;
struct nctempchar1 *nctemp4792;
static struct nctempchar1 nctemp4793 = {{ 6}, (char*)"array\0"};
nctemp4792=&nctemp4793;
nctempchar1* nctemp4790= nctemp4792;
int nctemp4794=LibeStrcmp(nctemp4785,nctemp4790);
int nctemp4782 = (nctemp4794 ==1);
if(nctemp4782)
{
struct tree* nctemp4800= p;
struct tree* nctemp4802=PtreeMvchild(nctemp4800);
p =nctemp4802;
struct tree* nctemp4807= p;
struct tree* nctemp4809=PtreeMvchild(nctemp4807);
p =nctemp4809;
struct tree* nctemp4814= p;
struct tree* nctemp4816=PtreeMvchild(nctemp4814);
p =nctemp4816;
struct tree* nctemp4821= p;
struct tree* nctemp4823=PtreeMvchild(nctemp4821);
p =nctemp4823;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4831= p;
struct tree* nctemp4833=PtreeMvsister(nctemp4831);
p =nctemp4833;
int nctemp4824 = (p !=0);
int nctemp4835=nctemp4824;
while(nctemp4835)
{{
rank = (rank + 1);
}
struct tree* nctemp4843= p;
struct tree* nctemp4845=PtreeMvsister(nctemp4843);
p =nctemp4845;
int nctemp4836 = (p !=0);
nctemp4835=nctemp4836;}int nctemp4847 = (rank > 4);
if(nctemp4847)
{
struct nctempchar1 *nctemp4854;
static struct nctempchar1 nctemp4855 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4854=&nctemp4855;
nctempchar1* nctemp4852= nctemp4854;
int nctemp4856=CodeError(nctemp4852);
}
p = sp;
i = 0;
int nctemp4857 = (p !=0);
int nctemp4861=nctemp4857;
while(nctemp4861)
{{
struct tree* nctemp4867= p;
nctempchar1* nctemp4869=CodeExpr(nctemp4867);
dim=nctemp4869;
int nctemp4870 = (i ==0);
if(nctemp4870)
{
struct tree* nctemp4875= p;
struct tree* nctemp4879= p;
nctempchar1* nctemp4881=PtreeGetype(nctemp4879);
nctempchar1* nctemp4877= nctemp4881;
int nctemp4882=CodeEs(nctemp4875,nctemp4877);
struct tree* nctemp4884= p;
struct nctempchar1 *nctemp4888;
static struct nctempchar1 nctemp4889 = {{ 2}, (char*)" \0"};
nctemp4888=&nctemp4889;
nctempchar1* nctemp4886= nctemp4888;
int nctemp4890=CodeEs(nctemp4884,nctemp4886);
struct tree* nctemp4892= p;
nctempchar1* nctemp4894= totdim;
int nctemp4897=CodeEs(nctemp4892,nctemp4894);
struct tree* nctemp4899= p;
struct nctempchar1 *nctemp4903;
static struct nctempchar1 nctemp4904 = {{ 2}, (char*)"=\0"};
nctemp4903=&nctemp4904;
nctempchar1* nctemp4901= nctemp4903;
int nctemp4905=CodeEs(nctemp4899,nctemp4901);
struct tree* nctemp4907= p;
nctempchar1* nctemp4909= dim;
int nctemp4912=CodeEs(nctemp4907,nctemp4909);
}
else{
struct tree* nctemp4914= p;
nctempchar1* nctemp4916= totdim;
int nctemp4919=CodeEs(nctemp4914,nctemp4916);
struct tree* nctemp4921= p;
struct nctempchar1 *nctemp4925;
static struct nctempchar1 nctemp4926 = {{ 2}, (char*)"=\0"};
nctemp4925=&nctemp4926;
nctempchar1* nctemp4923= nctemp4925;
int nctemp4927=CodeEs(nctemp4921,nctemp4923);
struct tree* nctemp4929= p;
nctempchar1* nctemp4931= totdim;
int nctemp4934=CodeEs(nctemp4929,nctemp4931);
struct tree* nctemp4936= p;
struct nctempchar1 *nctemp4940;
static struct nctempchar1 nctemp4941 = {{ 2}, (char*)"*\0"};
nctemp4940=&nctemp4941;
nctempchar1* nctemp4938= nctemp4940;
int nctemp4942=CodeEs(nctemp4936,nctemp4938);
struct tree* nctemp4944= p;
nctempchar1* nctemp4946= dim;
int nctemp4949=CodeEs(nctemp4944,nctemp4946);
}
struct tree* nctemp4951= p;
struct nctempchar1 *nctemp4955;
static struct nctempchar1 nctemp4956 = {{ 4}, (char*)";\n\0"};
nctemp4955=&nctemp4956;
nctempchar1* nctemp4953= nctemp4955;
int nctemp4957=CodeEs(nctemp4951,nctemp4953);
i = (i + 1);
struct tree* nctemp4962= p;
struct tree* nctemp4964=PtreeMvsister(nctemp4962);
p =nctemp4964;
}
int nctemp4965 = (p !=0);
nctemp4861=nctemp4965;}}
nctempchar1* nctemp4975= structflag;
struct nctempchar1 *nctemp4980;
static struct nctempchar1 nctemp4981 = {{ 7}, (char*)"struct\0"};
nctemp4980=&nctemp4981;
nctempchar1* nctemp4978= nctemp4980;
int nctemp4982=LibeStrcmp(nctemp4975,nctemp4978);
int nctemp4972 = (nctemp4982 ==1);
nctempchar1* nctemp4988= arrayflag;
struct nctempchar1 *nctemp4993;
static struct nctempchar1 nctemp4994 = {{ 6}, (char*)"array\0"};
nctemp4993=&nctemp4994;
nctempchar1* nctemp4991= nctemp4993;
int nctemp4995=LibeStrcmp(nctemp4988,nctemp4991);
int nctemp4985 = (nctemp4995 ==0);
int nctemp4969 = (nctemp4972 && nctemp4985);
if(nctemp4969)
{
struct tree* nctemp4998= p;
struct nctempchar1 *nctemp5002;
static struct nctempchar1 nctemp5003 = {{ 8}, (char*)"struct \0"};
nctemp5002=&nctemp5003;
nctempchar1* nctemp5000= nctemp5002;
int nctemp5004=CodeEs(nctemp4998,nctemp5000);
struct tree* nctemp5006= p;
nctempchar1* nctemp5008= type;
int nctemp5011=CodeEs(nctemp5006,nctemp5008);
struct tree* nctemp5013= p;
struct nctempchar1 *nctemp5017;
static struct nctempchar1 nctemp5018 = {{ 3}, (char*)" *\0"};
nctemp5017=&nctemp5018;
nctempchar1* nctemp5015= nctemp5017;
int nctemp5019=CodeEs(nctemp5013,nctemp5015);
struct tree* nctemp5021= p;
nctempchar1* nctemp5023= pointer;
int nctemp5026=CodeEs(nctemp5021,nctemp5023);
struct tree* nctemp5028= p;
struct nctempchar1 *nctemp5032;
static struct nctempchar1 nctemp5033 = {{ 2}, (char*)"=\0"};
nctemp5032=&nctemp5033;
nctempchar1* nctemp5030= nctemp5032;
int nctemp5034=CodeEs(nctemp5028,nctemp5030);
struct tree* nctemp5036= p;
struct nctempchar1 *nctemp5040;
static struct nctempchar1 nctemp5041 = {{ 2}, (char*)"(\0"};
nctemp5040=&nctemp5041;
nctempchar1* nctemp5038= nctemp5040;
int nctemp5042=CodeEs(nctemp5036,nctemp5038);
struct tree* nctemp5044= p;
struct nctempchar1 *nctemp5048;
static struct nctempchar1 nctemp5049 = {{ 8}, (char*)"struct \0"};
nctemp5048=&nctemp5049;
nctempchar1* nctemp5046= nctemp5048;
int nctemp5050=CodeEs(nctemp5044,nctemp5046);
struct tree* nctemp5052= p;
nctempchar1* nctemp5054= type;
int nctemp5057=CodeEs(nctemp5052,nctemp5054);
struct tree* nctemp5059= p;
struct nctempchar1 *nctemp5063;
static struct nctempchar1 nctemp5064 = {{ 3}, (char*)"*)\0"};
nctemp5063=&nctemp5064;
nctempchar1* nctemp5061= nctemp5063;
int nctemp5065=CodeEs(nctemp5059,nctemp5061);
struct tree* nctemp5067= p;
struct nctempchar1 *nctemp5071;
static struct nctempchar1 nctemp5072 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5071=&nctemp5072;
nctempchar1* nctemp5069= nctemp5071;
int nctemp5073=CodeEs(nctemp5067,nctemp5069);
struct tree* nctemp5075= p;
struct nctempchar1 *nctemp5079;
static struct nctempchar1 nctemp5080 = {{ 8}, (char*)"sizeof(\0"};
nctemp5079=&nctemp5080;
nctempchar1* nctemp5077= nctemp5079;
int nctemp5081=CodeEs(nctemp5075,nctemp5077);
struct tree* nctemp5083= p;
struct nctempchar1 *nctemp5087;
static struct nctempchar1 nctemp5088 = {{ 8}, (char*)"struct \0"};
nctemp5087=&nctemp5088;
nctempchar1* nctemp5085= nctemp5087;
int nctemp5089=CodeEs(nctemp5083,nctemp5085);
struct tree* nctemp5091= p;
nctempchar1* nctemp5093= type;
int nctemp5096=CodeEs(nctemp5091,nctemp5093);
struct tree* nctemp5098= p;
struct nctempchar1 *nctemp5102;
static struct nctempchar1 nctemp5103 = {{ 6}, (char*)"));\n\0"};
nctemp5102=&nctemp5103;
nctempchar1* nctemp5100= nctemp5102;
int nctemp5104=CodeEs(nctemp5098,nctemp5100);
}
nctempchar1* nctemp5111= structflag;
struct nctempchar1 *nctemp5116;
static struct nctempchar1 nctemp5117 = {{ 7}, (char*)"struct\0"};
nctemp5116=&nctemp5117;
nctempchar1* nctemp5114= nctemp5116;
int nctemp5118=LibeStrcmp(nctemp5111,nctemp5114);
int nctemp5108 = (nctemp5118 ==1);
nctempchar1* nctemp5124= arrayflag;
struct nctempchar1 *nctemp5129;
static struct nctempchar1 nctemp5130 = {{ 6}, (char*)"array\0"};
nctemp5129=&nctemp5130;
nctempchar1* nctemp5127= nctemp5129;
int nctemp5131=LibeStrcmp(nctemp5124,nctemp5127);
int nctemp5121 = (nctemp5131 ==1);
int nctemp5105 = (nctemp5108 && nctemp5121);
if(nctemp5105)
{
struct tree* nctemp5134= p;
struct nctempchar1 *nctemp5138;
static struct nctempchar1 nctemp5139 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5138=&nctemp5139;
nctempchar1* nctemp5136= nctemp5138;
int nctemp5140=CodeEs(nctemp5134,nctemp5136);
struct tree* nctemp5142= p;
nctempchar1* nctemp5144= type;
int nctemp5147=CodeEs(nctemp5142,nctemp5144);
int nctemp5149= rank;
int nctemp5151=CodeEd(nctemp5149);
struct tree* nctemp5153= p;
struct nctempchar1 *nctemp5157;
static struct nctempchar1 nctemp5158 = {{ 3}, (char*)" *\0"};
nctemp5157=&nctemp5158;
nctempchar1* nctemp5155= nctemp5157;
int nctemp5159=CodeEs(nctemp5153,nctemp5155);
struct tree* nctemp5161= p;
nctempchar1* nctemp5163= pointer;
int nctemp5166=CodeEs(nctemp5161,nctemp5163);
struct tree* nctemp5168= p;
struct nctempchar1 *nctemp5172;
static struct nctempchar1 nctemp5173 = {{ 4}, (char*)";\n\0"};
nctemp5172=&nctemp5173;
nctempchar1* nctemp5170= nctemp5172;
int nctemp5174=CodeEs(nctemp5168,nctemp5170);
struct tree* nctemp5176= p;
nctempchar1* nctemp5178= pointer;
int nctemp5181=CodeEs(nctemp5176,nctemp5178);
struct tree* nctemp5183= p;
struct nctempchar1 *nctemp5187;
static struct nctempchar1 nctemp5188 = {{ 2}, (char*)"=\0"};
nctemp5187=&nctemp5188;
nctempchar1* nctemp5185= nctemp5187;
int nctemp5189=CodeEs(nctemp5183,nctemp5185);
struct tree* nctemp5191= p;
struct nctempchar1 *nctemp5195;
static struct nctempchar1 nctemp5196 = {{ 2}, (char*)"(\0"};
nctemp5195=&nctemp5196;
nctempchar1* nctemp5193= nctemp5195;
int nctemp5197=CodeEs(nctemp5191,nctemp5193);
struct tree* nctemp5199= p;
struct nctempchar1 *nctemp5203;
static struct nctempchar1 nctemp5204 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5203=&nctemp5204;
nctempchar1* nctemp5201= nctemp5203;
int nctemp5205=CodeEs(nctemp5199,nctemp5201);
struct tree* nctemp5207= p;
nctempchar1* nctemp5209= type;
int nctemp5212=CodeEs(nctemp5207,nctemp5209);
int nctemp5214= rank;
int nctemp5216=CodeEd(nctemp5214);
struct tree* nctemp5218= p;
struct nctempchar1 *nctemp5222;
static struct nctempchar1 nctemp5223 = {{ 3}, (char*)"*)\0"};
nctemp5222=&nctemp5223;
nctempchar1* nctemp5220= nctemp5222;
int nctemp5224=CodeEs(nctemp5218,nctemp5220);
struct tree* nctemp5226= p;
struct nctempchar1 *nctemp5230;
static struct nctempchar1 nctemp5231 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5230=&nctemp5231;
nctempchar1* nctemp5228= nctemp5230;
int nctemp5232=CodeEs(nctemp5226,nctemp5228);
struct tree* nctemp5234= p;
struct nctempchar1 *nctemp5238;
static struct nctempchar1 nctemp5239 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5238=&nctemp5239;
nctempchar1* nctemp5236= nctemp5238;
int nctemp5240=CodeEs(nctemp5234,nctemp5236);
struct tree* nctemp5242= p;
nctempchar1* nctemp5244= type;
int nctemp5247=CodeEs(nctemp5242,nctemp5244);
int nctemp5249= rank;
int nctemp5251=CodeEd(nctemp5249);
struct tree* nctemp5253= p;
struct nctempchar1 *nctemp5257;
static struct nctempchar1 nctemp5258 = {{ 6}, (char*)"));\n\0"};
nctemp5257=&nctemp5258;
nctempchar1* nctemp5255= nctemp5257;
int nctemp5259=CodeEs(nctemp5253,nctemp5255);
i = 0;
p = sp;
int nctemp5260 = (p !=0);
int nctemp5264=nctemp5260;
while(nctemp5264)
{{
struct tree* nctemp5270= sp;
nctempchar1* nctemp5272=CodeExpr(nctemp5270);
dim=nctemp5272;
struct tree* nctemp5274= sp;
nctempchar1* nctemp5276= pointer;
int nctemp5279=CodeEs(nctemp5274,nctemp5276);
struct tree* nctemp5281= sp;
struct nctempchar1 *nctemp5285;
static struct nctempchar1 nctemp5286 = {{ 4}, (char*)"->d\0"};
nctemp5285=&nctemp5286;
nctempchar1* nctemp5283= nctemp5285;
int nctemp5287=CodeEs(nctemp5281,nctemp5283);
struct tree* nctemp5289= sp;
struct nctempchar1 *nctemp5293;
static struct nctempchar1 nctemp5294 = {{ 2}, (char*)"[\0"};
nctemp5293=&nctemp5294;
nctempchar1* nctemp5291= nctemp5293;
int nctemp5295=CodeEs(nctemp5289,nctemp5291);
int nctemp5297= i;
int nctemp5299=CodeEd(nctemp5297);
struct tree* nctemp5301= sp;
struct nctempchar1 *nctemp5305;
static struct nctempchar1 nctemp5306 = {{ 3}, (char*)"]=\0"};
nctemp5305=&nctemp5306;
nctempchar1* nctemp5303= nctemp5305;
int nctemp5307=CodeEs(nctemp5301,nctemp5303);
struct tree* nctemp5309= sp;
nctempchar1* nctemp5311= dim;
int nctemp5314=CodeEs(nctemp5309,nctemp5311);
struct tree* nctemp5316= sp;
struct nctempchar1 *nctemp5320;
static struct nctempchar1 nctemp5321 = {{ 4}, (char*)";\n\0"};
nctemp5320=&nctemp5321;
nctempchar1* nctemp5318= nctemp5320;
int nctemp5322=CodeEs(nctemp5316,nctemp5318);
i = (i + 1);
struct tree* nctemp5327= p;
struct tree* nctemp5329=PtreeMvsister(nctemp5327);
p =nctemp5329;
}
int nctemp5330 = (p !=0);
nctemp5264=nctemp5330;}struct tree* nctemp5335= sp;
nctempchar1* nctemp5337= pointer;
int nctemp5340=CodeEs(nctemp5335,nctemp5337);
struct tree* nctemp5342= sp;
struct nctempchar1 *nctemp5346;
static struct nctempchar1 nctemp5347 = {{ 4}, (char*)"->a\0"};
nctemp5346=&nctemp5347;
nctempchar1* nctemp5344= nctemp5346;
int nctemp5348=CodeEs(nctemp5342,nctemp5344);
struct tree* nctemp5350= sp;
struct nctempchar1 *nctemp5354;
static struct nctempchar1 nctemp5355 = {{ 2}, (char*)"=\0"};
nctemp5354=&nctemp5355;
nctempchar1* nctemp5352= nctemp5354;
int nctemp5356=CodeEs(nctemp5350,nctemp5352);
struct tree* nctemp5358= sp;
struct nctempchar1 *nctemp5362;
static struct nctempchar1 nctemp5363 = {{ 9}, (char*)"(struct \0"};
nctemp5362=&nctemp5363;
nctempchar1* nctemp5360= nctemp5362;
int nctemp5364=CodeEs(nctemp5358,nctemp5360);
struct tree* nctemp5366= sp;
nctempchar1* nctemp5368= type;
int nctemp5371=CodeEs(nctemp5366,nctemp5368);
struct tree* nctemp5373= sp;
struct nctempchar1 *nctemp5377;
static struct nctempchar1 nctemp5378 = {{ 3}, (char*)"*)\0"};
nctemp5377=&nctemp5378;
nctempchar1* nctemp5375= nctemp5377;
int nctemp5379=CodeEs(nctemp5373,nctemp5375);
struct tree* nctemp5381= sp;
struct nctempchar1 *nctemp5385;
static struct nctempchar1 nctemp5386 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5385=&nctemp5386;
nctempchar1* nctemp5383= nctemp5385;
int nctemp5387=CodeEs(nctemp5381,nctemp5383);
struct tree* nctemp5389= sp;
struct nctempchar1 *nctemp5393;
static struct nctempchar1 nctemp5394 = {{ 8}, (char*)"struct \0"};
nctemp5393=&nctemp5394;
nctempchar1* nctemp5391= nctemp5393;
int nctemp5395=CodeEs(nctemp5389,nctemp5391);
struct tree* nctemp5397= sp;
nctempchar1* nctemp5399= type;
int nctemp5402=CodeEs(nctemp5397,nctemp5399);
struct tree* nctemp5404= sp;
struct nctempchar1 *nctemp5408;
static struct nctempchar1 nctemp5409 = {{ 2}, (char*)")\0"};
nctemp5408=&nctemp5409;
nctempchar1* nctemp5406= nctemp5408;
int nctemp5410=CodeEs(nctemp5404,nctemp5406);
struct tree* nctemp5412= sp;
struct nctempchar1 *nctemp5416;
static struct nctempchar1 nctemp5417 = {{ 2}, (char*)"*\0"};
nctemp5416=&nctemp5417;
nctempchar1* nctemp5414= nctemp5416;
int nctemp5418=CodeEs(nctemp5412,nctemp5414);
struct tree* nctemp5420= sp;
nctempchar1* nctemp5422= totdim;
int nctemp5425=CodeEs(nctemp5420,nctemp5422);
struct tree* nctemp5427= sp;
struct nctempchar1 *nctemp5431;
static struct nctempchar1 nctemp5432 = {{ 5}, (char*)");\n\0"};
nctemp5431=&nctemp5432;
nctempchar1* nctemp5429= nctemp5431;
int nctemp5433=CodeEs(nctemp5427,nctemp5429);
}
nctempchar1* nctemp5440= structflag;
struct nctempchar1 *nctemp5445;
static struct nctempchar1 nctemp5446 = {{ 7}, (char*)"struct\0"};
nctemp5445=&nctemp5446;
nctempchar1* nctemp5443= nctemp5445;
int nctemp5447=LibeStrcmp(nctemp5440,nctemp5443);
int nctemp5437 = (nctemp5447 ==0);
nctempchar1* nctemp5453= arrayflag;
struct nctempchar1 *nctemp5458;
static struct nctempchar1 nctemp5459 = {{ 6}, (char*)"array\0"};
nctemp5458=&nctemp5459;
nctempchar1* nctemp5456= nctemp5458;
int nctemp5460=LibeStrcmp(nctemp5453,nctemp5456);
int nctemp5450 = (nctemp5460 ==1);
int nctemp5434 = (nctemp5437 && nctemp5450);
if(nctemp5434)
{
int nctemp5463= 4;
int nctemp5465=LibeFlush(nctemp5463);
struct tree* nctemp5467= sp;
struct nctempchar1 *nctemp5471;
static struct nctempchar1 nctemp5472 = {{ 7}, (char*)"nctemp\0"};
nctemp5471=&nctemp5472;
nctempchar1* nctemp5469= nctemp5471;
int nctemp5473=CodeEs(nctemp5467,nctemp5469);
struct tree* nctemp5475= sp;
nctempchar1* nctemp5477= type;
int nctemp5480=CodeEs(nctemp5475,nctemp5477);
int nctemp5482= rank;
int nctemp5484=CodeEd(nctemp5482);
struct tree* nctemp5486= sp;
struct nctempchar1 *nctemp5490;
static struct nctempchar1 nctemp5491 = {{ 3}, (char*)" *\0"};
nctemp5490=&nctemp5491;
nctempchar1* nctemp5488= nctemp5490;
int nctemp5492=CodeEs(nctemp5486,nctemp5488);
struct tree* nctemp5494= sp;
nctempchar1* nctemp5496= pointer;
int nctemp5499=CodeEs(nctemp5494,nctemp5496);
struct tree* nctemp5501= sp;
struct nctempchar1 *nctemp5505;
static struct nctempchar1 nctemp5506 = {{ 4}, (char*)";\n\0"};
nctemp5505=&nctemp5506;
nctempchar1* nctemp5503= nctemp5505;
int nctemp5507=CodeEs(nctemp5501,nctemp5503);
p = top;
i = 0;
struct tree* nctemp5509= p;
nctempchar1* nctemp5511= pointer;
int nctemp5514=CodeEs(nctemp5509,nctemp5511);
struct tree* nctemp5516= p;
struct nctempchar1 *nctemp5520;
static struct nctempchar1 nctemp5521 = {{ 2}, (char*)"=\0"};
nctemp5520=&nctemp5521;
nctempchar1* nctemp5518= nctemp5520;
int nctemp5522=CodeEs(nctemp5516,nctemp5518);
struct tree* nctemp5524= p;
struct nctempchar1 *nctemp5528;
static struct nctempchar1 nctemp5529 = {{ 2}, (char*)"(\0"};
nctemp5528=&nctemp5529;
nctempchar1* nctemp5526= nctemp5528;
int nctemp5530=CodeEs(nctemp5524,nctemp5526);
struct tree* nctemp5532= p;
struct nctempchar1 *nctemp5536;
static struct nctempchar1 nctemp5537 = {{ 7}, (char*)"nctemp\0"};
nctemp5536=&nctemp5537;
nctempchar1* nctemp5534= nctemp5536;
int nctemp5538=CodeEs(nctemp5532,nctemp5534);
struct tree* nctemp5540= p;
nctempchar1* nctemp5542= type;
int nctemp5545=CodeEs(nctemp5540,nctemp5542);
int nctemp5547= rank;
int nctemp5549=CodeEd(nctemp5547);
struct tree* nctemp5551= p;
struct nctempchar1 *nctemp5555;
static struct nctempchar1 nctemp5556 = {{ 3}, (char*)"*)\0"};
nctemp5555=&nctemp5556;
nctempchar1* nctemp5553= nctemp5555;
int nctemp5557=CodeEs(nctemp5551,nctemp5553);
struct tree* nctemp5559= p;
struct nctempchar1 *nctemp5563;
static struct nctempchar1 nctemp5564 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5563=&nctemp5564;
nctempchar1* nctemp5561= nctemp5563;
int nctemp5565=CodeEs(nctemp5559,nctemp5561);
struct tree* nctemp5567= p;
struct nctempchar1 *nctemp5571;
static struct nctempchar1 nctemp5572 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5571=&nctemp5572;
nctempchar1* nctemp5569= nctemp5571;
int nctemp5573=CodeEs(nctemp5567,nctemp5569);
struct tree* nctemp5575= p;
nctempchar1* nctemp5577= type;
int nctemp5580=CodeEs(nctemp5575,nctemp5577);
int nctemp5582= rank;
int nctemp5584=CodeEd(nctemp5582);
struct tree* nctemp5586= p;
struct nctempchar1 *nctemp5590;
static struct nctempchar1 nctemp5591 = {{ 6}, (char*)"));\n\0"};
nctemp5590=&nctemp5591;
nctempchar1* nctemp5588= nctemp5590;
int nctemp5592=CodeEs(nctemp5586,nctemp5588);
int nctemp5593 = (p !=0);
int nctemp5597=nctemp5593;
while(nctemp5597)
{{
struct tree* nctemp5603= p;
nctempchar1* nctemp5605=CodeExpr(nctemp5603);
dim=nctemp5605;
struct tree* nctemp5607= p;
nctempchar1* nctemp5609= pointer;
int nctemp5612=CodeEs(nctemp5607,nctemp5609);
struct tree* nctemp5614= p;
struct nctempchar1 *nctemp5618;
static struct nctempchar1 nctemp5619 = {{ 4}, (char*)"->d\0"};
nctemp5618=&nctemp5619;
nctempchar1* nctemp5616= nctemp5618;
int nctemp5620=CodeEs(nctemp5614,nctemp5616);
struct tree* nctemp5622= p;
struct nctempchar1 *nctemp5626;
static struct nctempchar1 nctemp5627 = {{ 2}, (char*)"[\0"};
nctemp5626=&nctemp5627;
nctempchar1* nctemp5624= nctemp5626;
int nctemp5628=CodeEs(nctemp5622,nctemp5624);
int nctemp5630= i;
int nctemp5632=CodeEd(nctemp5630);
struct tree* nctemp5634= p;
struct nctempchar1 *nctemp5638;
static struct nctempchar1 nctemp5639 = {{ 3}, (char*)"]=\0"};
nctemp5638=&nctemp5639;
nctempchar1* nctemp5636= nctemp5638;
int nctemp5640=CodeEs(nctemp5634,nctemp5636);
struct tree* nctemp5642= p;
nctempchar1* nctemp5644= dim;
int nctemp5647=CodeEs(nctemp5642,nctemp5644);
struct tree* nctemp5649= p;
struct nctempchar1 *nctemp5653;
static struct nctempchar1 nctemp5654 = {{ 4}, (char*)";\n\0"};
nctemp5653=&nctemp5654;
nctempchar1* nctemp5651= nctemp5653;
int nctemp5655=CodeEs(nctemp5649,nctemp5651);
i = (i + 1);
struct tree* nctemp5660= p;
struct tree* nctemp5662=PtreeMvsister(nctemp5660);
p =nctemp5662;
}
int nctemp5663 = (p !=0);
nctemp5597=nctemp5663;}p = top;
struct tree* nctemp5668= p;
nctempchar1* nctemp5670= pointer;
int nctemp5673=CodeEs(nctemp5668,nctemp5670);
struct tree* nctemp5675= p;
struct nctempchar1 *nctemp5679;
static struct nctempchar1 nctemp5680 = {{ 4}, (char*)"->a\0"};
nctemp5679=&nctemp5680;
nctempchar1* nctemp5677= nctemp5679;
int nctemp5681=CodeEs(nctemp5675,nctemp5677);
struct tree* nctemp5683= p;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 3}, (char*)"=(\0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=CodeEs(nctemp5683,nctemp5685);
struct tree* nctemp5691= p;
nctempchar1* nctemp5693= type;
int nctemp5696=CodeEs(nctemp5691,nctemp5693);
struct tree* nctemp5698= p;
struct nctempchar1 *nctemp5702;
static struct nctempchar1 nctemp5703 = {{ 4}, (char*)" *)\0"};
nctemp5702=&nctemp5703;
nctempchar1* nctemp5700= nctemp5702;
int nctemp5704=CodeEs(nctemp5698,nctemp5700);
struct tree* nctemp5706= p;
struct nctempchar1 *nctemp5710;
static struct nctempchar1 nctemp5711 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5710=&nctemp5711;
nctempchar1* nctemp5708= nctemp5710;
int nctemp5712=CodeEs(nctemp5706,nctemp5708);
struct tree* nctemp5714= p;
nctempchar1* nctemp5716= type;
int nctemp5719=CodeEs(nctemp5714,nctemp5716);
struct tree* nctemp5721= p;
struct nctempchar1 *nctemp5725;
static struct nctempchar1 nctemp5726 = {{ 2}, (char*)")\0"};
nctemp5725=&nctemp5726;
nctempchar1* nctemp5723= nctemp5725;
int nctemp5727=CodeEs(nctemp5721,nctemp5723);
struct tree* nctemp5729= p;
struct nctempchar1 *nctemp5733;
static struct nctempchar1 nctemp5734 = {{ 2}, (char*)"*\0"};
nctemp5733=&nctemp5734;
nctempchar1* nctemp5731= nctemp5733;
int nctemp5735=CodeEs(nctemp5729,nctemp5731);
struct tree* nctemp5737= p;
nctempchar1* nctemp5739= totdim;
int nctemp5742=CodeEs(nctemp5737,nctemp5739);
struct tree* nctemp5744= p;
struct nctempchar1 *nctemp5748;
static struct nctempchar1 nctemp5749 = {{ 5}, (char*)");\n\0"};
nctemp5748=&nctemp5749;
nctempchar1* nctemp5746= nctemp5748;
int nctemp5750=CodeEs(nctemp5744,nctemp5746);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5757= p;
struct tree* nctemp5759=PtreeMvchild(nctemp5757);
p =nctemp5759;
struct tree* nctemp5764= p;
struct tree* nctemp5766=PtreeMvchild(nctemp5764);
p =nctemp5766;
struct tree* nctemp5772= p;
nctempchar1* nctemp5774=CodeBinexpr(nctemp5772);
tmp=nctemp5774;
struct tree* nctemp5778= p;
nctempchar1* nctemp5780=PtreeGetref(nctemp5778);
nctempchar1* nctemp5776= nctemp5780;
struct nctempchar1 *nctemp5783;
static struct nctempchar1 nctemp5784 = {{ 5}, (char*)"aref\0"};
nctemp5783=&nctemp5784;
nctempchar1* nctemp5781= nctemp5783;
int nctemp5785=LibeStrcmp(nctemp5776,nctemp5781);
if(nctemp5785)
{
struct tree* nctemp5787= p;
struct nctempchar1 *nctemp5791;
static struct nctempchar1 nctemp5792 = {{ 9}, (char*)"RunFree(\0"};
nctemp5791=&nctemp5792;
nctempchar1* nctemp5789= nctemp5791;
int nctemp5793=CodeEs(nctemp5787,nctemp5789);
struct tree* nctemp5795= p;
nctempchar1* nctemp5797= tmp;
int nctemp5800=CodeEs(nctemp5795,nctemp5797);
struct tree* nctemp5802= p;
struct nctempchar1 *nctemp5806;
static struct nctempchar1 nctemp5807 = {{ 8}, (char*)"->a);\n\0"};
nctemp5806=&nctemp5807;
nctempchar1* nctemp5804= nctemp5806;
int nctemp5808=CodeEs(nctemp5802,nctemp5804);
struct tree* nctemp5810= p;
struct nctempchar1 *nctemp5814;
static struct nctempchar1 nctemp5815 = {{ 9}, (char*)"RunFree(\0"};
nctemp5814=&nctemp5815;
nctempchar1* nctemp5812= nctemp5814;
int nctemp5816=CodeEs(nctemp5810,nctemp5812);
struct tree* nctemp5818= p;
nctempchar1* nctemp5820= tmp;
int nctemp5823=CodeEs(nctemp5818,nctemp5820);
struct tree* nctemp5825= p;
struct nctempchar1 *nctemp5829;
static struct nctempchar1 nctemp5830 = {{ 5}, (char*)");\n\0"};
nctemp5829=&nctemp5830;
nctempchar1* nctemp5827= nctemp5829;
int nctemp5831=CodeEs(nctemp5825,nctemp5827);
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
nctempchar1* nctemp5839=CodeMktemp();
tempr=nctemp5839;
struct tree* nctemp5844= p;
struct tree* nctemp5846=PtreeMvchild(nctemp5844);
np =nctemp5846;
struct tree* nctemp5852= np;
nctempchar1* nctemp5854=CodeExpr(nctemp5852);
temp=nctemp5854;
struct tree* nctemp5859= np;
struct tree* nctemp5861=PtreeMvsister(nctemp5859);
sp =nctemp5861;
struct tree* nctemp5867= sp;
nctempchar1* nctemp5869=CodeExpr(nctemp5867);
index=nctemp5869;
struct tree* nctemp5871= p;
struct tree* nctemp5875= p;
nctempchar1* nctemp5877=PtreeGetype(nctemp5875);
nctempchar1* nctemp5873= nctemp5877;
int nctemp5878=CodeEs(nctemp5871,nctemp5873);
struct tree* nctemp5880= p;
struct nctempchar1 *nctemp5884;
static struct nctempchar1 nctemp5885 = {{ 2}, (char*)" \0"};
nctemp5884=&nctemp5885;
nctempchar1* nctemp5882= nctemp5884;
int nctemp5886=CodeEs(nctemp5880,nctemp5882);
struct tree* nctemp5888= p;
nctempchar1* nctemp5890= tempr;
int nctemp5893=CodeEs(nctemp5888,nctemp5890);
struct tree* nctemp5895= p;
struct nctempchar1 *nctemp5899;
static struct nctempchar1 nctemp5900 = {{ 2}, (char*)"=\0"};
nctemp5899=&nctemp5900;
nctempchar1* nctemp5897= nctemp5899;
int nctemp5901=CodeEs(nctemp5895,nctemp5897);
struct tree* nctemp5903= p;
nctempchar1* nctemp5905= temp;
int nctemp5908=CodeEs(nctemp5903,nctemp5905);
struct tree* nctemp5910= p;
struct nctempchar1 *nctemp5914;
static struct nctempchar1 nctemp5915 = {{ 4}, (char*)"->d\0"};
nctemp5914=&nctemp5915;
nctempchar1* nctemp5912= nctemp5914;
int nctemp5916=CodeEs(nctemp5910,nctemp5912);
struct tree* nctemp5918= p;
struct nctempchar1 *nctemp5922;
static struct nctempchar1 nctemp5923 = {{ 2}, (char*)"[\0"};
nctemp5922=&nctemp5923;
nctempchar1* nctemp5920= nctemp5922;
int nctemp5924=CodeEs(nctemp5918,nctemp5920);
struct tree* nctemp5926= p;
nctempchar1* nctemp5928= index;
int nctemp5931=CodeEs(nctemp5926,nctemp5928);
struct tree* nctemp5933= p;
struct nctempchar1 *nctemp5937;
static struct nctempchar1 nctemp5938 = {{ 3}, (char*)"];\0"};
nctemp5937=&nctemp5938;
nctempchar1* nctemp5935= nctemp5937;
int nctemp5939=CodeEs(nctemp5933,nctemp5935);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5947=CodeMktemp();
tempr=nctemp5947;
struct tree* nctemp5952= p;
struct tree* nctemp5954=PtreeMvchild(nctemp5952);
np =nctemp5954;
struct tree* nctemp5959= np;
struct tree* nctemp5961=PtreeMvchild(nctemp5959);
np =nctemp5961;
struct tree* nctemp5967= np;
nctempchar1* nctemp5969=CodeExpr(nctemp5967);
q=nctemp5969;
struct tree* nctemp5974= np;
struct tree* nctemp5976=PtreeMvsister(nctemp5974);
sp =nctemp5976;
struct tree* nctemp5982= sp;
nctempchar1* nctemp5984=CodeExpr(nctemp5982);
r=nctemp5984;
struct tree* nctemp5986= p;
struct tree* nctemp5990= p;
nctempchar1* nctemp5992=PtreeGetype(nctemp5990);
nctempchar1* nctemp5988= nctemp5992;
int nctemp5993=CodeEs(nctemp5986,nctemp5988);
struct tree* nctemp5995= p;
struct nctempchar1 *nctemp5999;
static struct nctempchar1 nctemp6000 = {{ 2}, (char*)" \0"};
nctemp5999=&nctemp6000;
nctempchar1* nctemp5997= nctemp5999;
int nctemp6001=CodeEs(nctemp5995,nctemp5997);
struct tree* nctemp6003= p;
nctempchar1* nctemp6005= tempr;
int nctemp6008=CodeEs(nctemp6003,nctemp6005);
struct tree* nctemp6010= p;
struct nctempchar1 *nctemp6014;
static struct nctempchar1 nctemp6015 = {{ 3}, (char*)".r\0"};
nctemp6014=&nctemp6015;
nctempchar1* nctemp6012= nctemp6014;
int nctemp6016=CodeEs(nctemp6010,nctemp6012);
struct tree* nctemp6018= p;
struct nctempchar1 *nctemp6022;
static struct nctempchar1 nctemp6023 = {{ 3}, (char*)" =\0"};
nctemp6022=&nctemp6023;
nctempchar1* nctemp6020= nctemp6022;
int nctemp6024=CodeEs(nctemp6018,nctemp6020);
struct tree* nctemp6026= p;
nctempchar1* nctemp6028= q;
int nctemp6031=CodeEs(nctemp6026,nctemp6028);
struct tree* nctemp6033= p;
struct nctempchar1 *nctemp6037;
static struct nctempchar1 nctemp6038 = {{ 2}, (char*)";\0"};
nctemp6037=&nctemp6038;
nctempchar1* nctemp6035= nctemp6037;
int nctemp6039=CodeEs(nctemp6033,nctemp6035);
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
static struct nctempchar1 nctemp6070 = {{ 3}, (char*)".i\0"};
nctemp6069=&nctemp6070;
nctempchar1* nctemp6067= nctemp6069;
int nctemp6071=CodeEs(nctemp6065,nctemp6067);
struct tree* nctemp6073= p;
struct nctempchar1 *nctemp6077;
static struct nctempchar1 nctemp6078 = {{ 2}, (char*)"=\0"};
nctemp6077=&nctemp6078;
nctempchar1* nctemp6075= nctemp6077;
int nctemp6079=CodeEs(nctemp6073,nctemp6075);
struct tree* nctemp6081= p;
nctempchar1* nctemp6083= r;
int nctemp6086=CodeEs(nctemp6081,nctemp6083);
struct tree* nctemp6088= p;
struct nctempchar1 *nctemp6092;
static struct nctempchar1 nctemp6093 = {{ 2}, (char*)";\0"};
nctemp6092=&nctemp6093;
nctempchar1* nctemp6090= nctemp6092;
int nctemp6094=CodeEs(nctemp6088,nctemp6090);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6102=CodeMktemp();
tempr=nctemp6102;
struct tree* nctemp6107= p;
struct tree* nctemp6109=PtreeMvchild(nctemp6107);
np =nctemp6109;
struct tree* nctemp6115= np;
nctempchar1* nctemp6117=CodeExpr(nctemp6115);
q=nctemp6117;
struct tree* nctemp6119= p;
struct tree* nctemp6123= p;
nctempchar1* nctemp6125=PtreeGetype(nctemp6123);
nctempchar1* nctemp6121= nctemp6125;
int nctemp6126=CodeEs(nctemp6119,nctemp6121);
struct tree* nctemp6128= p;
struct nctempchar1 *nctemp6132;
static struct nctempchar1 nctemp6133 = {{ 2}, (char*)" \0"};
nctemp6132=&nctemp6133;
nctempchar1* nctemp6130= nctemp6132;
int nctemp6134=CodeEs(nctemp6128,nctemp6130);
struct tree* nctemp6136= p;
nctempchar1* nctemp6138= tempr;
int nctemp6141=CodeEs(nctemp6136,nctemp6138);
struct tree* nctemp6143= p;
struct nctempchar1 *nctemp6147;
static struct nctempchar1 nctemp6148 = {{ 3}, (char*)" =\0"};
nctemp6147=&nctemp6148;
nctempchar1* nctemp6145= nctemp6147;
int nctemp6149=CodeEs(nctemp6143,nctemp6145);
struct tree* nctemp6151= p;
nctempchar1* nctemp6153= q;
int nctemp6156=CodeEs(nctemp6151,nctemp6153);
struct tree* nctemp6158= p;
struct nctempchar1 *nctemp6162;
static struct nctempchar1 nctemp6163 = {{ 5}, (char*)".i  \0"};
nctemp6162=&nctemp6163;
nctempchar1* nctemp6160= nctemp6162;
int nctemp6164=CodeEs(nctemp6158,nctemp6160);
struct tree* nctemp6166= p;
struct nctempchar1 *nctemp6170;
static struct nctempchar1 nctemp6171 = {{ 4}, (char*)";\n\0"};
nctemp6170=&nctemp6171;
nctempchar1* nctemp6168= nctemp6170;
int nctemp6172=CodeEs(nctemp6166,nctemp6168);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6179= p;
struct tree* nctemp6181=PtreeMvchild(nctemp6179);
np =nctemp6181;
struct tree* nctemp6187= np;
nctempchar1* nctemp6189=CodeExpr(nctemp6187);
q=nctemp6189;
nctempchar1* nctemp6195=CodeMktemp();
tmp=nctemp6195;
struct tree* nctemp6197= p;
struct tree* nctemp6201= p;
nctempchar1* nctemp6203=PtreeGetype(nctemp6201);
nctempchar1* nctemp6199= nctemp6203;
int nctemp6204=CodeEs(nctemp6197,nctemp6199);
struct tree* nctemp6206= p;
struct nctempchar1 *nctemp6210;
static struct nctempchar1 nctemp6211 = {{ 2}, (char*)" \0"};
nctemp6210=&nctemp6211;
nctempchar1* nctemp6208= nctemp6210;
int nctemp6212=CodeEs(nctemp6206,nctemp6208);
struct tree* nctemp6214= p;
nctempchar1* nctemp6216= tmp;
int nctemp6219=CodeEs(nctemp6214,nctemp6216);
struct tree* nctemp6221= p;
struct nctempchar1 *nctemp6225;
static struct nctempchar1 nctemp6226 = {{ 3}, (char*)" =\0"};
nctemp6225=&nctemp6226;
nctempchar1* nctemp6223= nctemp6225;
int nctemp6227=CodeEs(nctemp6221,nctemp6223);
struct tree* nctemp6229= p;
nctempchar1* nctemp6231= q;
int nctemp6234=CodeEs(nctemp6229,nctemp6231);
struct tree* nctemp6236= p;
struct nctempchar1 *nctemp6240;
static struct nctempchar1 nctemp6241 = {{ 5}, (char*)".r  \0"};
nctemp6240=&nctemp6241;
nctempchar1* nctemp6238= nctemp6240;
int nctemp6242=CodeEs(nctemp6236,nctemp6238);
struct tree* nctemp6244= p;
struct nctempchar1 *nctemp6248;
static struct nctempchar1 nctemp6249 = {{ 4}, (char*)";\n\0"};
nctemp6248=&nctemp6249;
nctempchar1* nctemp6246= nctemp6248;
int nctemp6250=CodeEs(nctemp6244,nctemp6246);
return tmp;
}
nctempchar1 * CodeFcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *ntemp;
int noargs;
noargs = 0;
struct tree* nctemp6259= p;
nctempchar1* nctemp6261=PtreeGetdef(nctemp6259);
nctempchar1* nctemp6257= nctemp6261;
struct symbol* nctemp6264=SymGetetp();
struct symbol* nctemp6262= nctemp6264;
struct symbol* nctemp6265=SymLookup(nctemp6257,nctemp6262);
tp =nctemp6265;
struct tree* nctemp6270= p;
struct tree* nctemp6272=PtreeMvchild(nctemp6270);
sp =nctemp6272;
int nctemp6273 = (sp !=0);
if(nctemp6273)
{
struct tree* nctemp6282= sp;
nctempchar1* nctemp6284=PtreeGetname(nctemp6282);
nctempchar1* nctemp6280= nctemp6284;
struct nctempchar1 *nctemp6287;
static struct nctempchar1 nctemp6288 = {{ 9}, (char*)"exprlist\0"};
nctemp6287=&nctemp6288;
nctempchar1* nctemp6285= nctemp6287;
int nctemp6289=LibeStrcmp(nctemp6280,nctemp6285);
int nctemp6277 = (nctemp6289 ==1);
if(nctemp6277)
{
struct tree* nctemp6295= sp;
struct tree* nctemp6297=PtreeMvchild(nctemp6295);
sp =nctemp6297;
}
}
int nctemp6298 = (sp !=0);
int nctemp6302=nctemp6298;
while(nctemp6302)
{{
nctempchar1* nctemp6308=CodeMktemp();
ntemp=nctemp6308;
struct tree* nctemp6310= sp;
nctempchar1* nctemp6312= ntemp;
int nctemp6315=PtreeSetempr(nctemp6310,nctemp6312);
struct tree* nctemp6321= sp;
nctempchar1* nctemp6323=CodeExpr(nctemp6321);
temp=nctemp6323;
struct tree* nctemp6329= sp;
nctempchar1* nctemp6331=PtreeGetref(nctemp6329);
nctempchar1* nctemp6327= nctemp6331;
struct nctempchar1 *nctemp6334;
static struct nctempchar1 nctemp6335 = {{ 5}, (char*)"aref\0"};
nctemp6334=&nctemp6335;
nctempchar1* nctemp6332= nctemp6334;
int nctemp6336=LibeStrcmp(nctemp6327,nctemp6332);
int nctemp6324 = (nctemp6336 ==1);
if(nctemp6324)
{
struct tree* nctemp6339= sp;
struct nctempchar1 *nctemp6343;
static struct nctempchar1 nctemp6344 = {{ 7}, (char*)"nctemp\0"};
nctemp6343=&nctemp6344;
nctempchar1* nctemp6341= nctemp6343;
int nctemp6345=CodeEs(nctemp6339,nctemp6341);
struct tree* nctemp6347= sp;
struct tree* nctemp6351= sp;
nctempchar1* nctemp6353=PtreeGetype(nctemp6351);
nctempchar1* nctemp6349= nctemp6353;
int nctemp6354=CodeEs(nctemp6347,nctemp6349);
struct tree* nctemp6358= sp;
int nctemp6360=PtreeGetrank(nctemp6358);
int nctemp6356= nctemp6360;
int nctemp6361=CodeEd(nctemp6356);
struct tree* nctemp6363= sp;
struct nctempchar1 *nctemp6367;
static struct nctempchar1 nctemp6368 = {{ 2}, (char*)"*\0"};
nctemp6367=&nctemp6368;
nctempchar1* nctemp6365= nctemp6367;
int nctemp6369=CodeEs(nctemp6363,nctemp6365);
}
else{
struct tree* nctemp6375= sp;
nctempchar1* nctemp6377=PtreeGetref(nctemp6375);
nctempchar1* nctemp6373= nctemp6377;
struct nctempchar1 *nctemp6380;
static struct nctempchar1 nctemp6381 = {{ 5}, (char*)"sref\0"};
nctemp6380=&nctemp6381;
nctempchar1* nctemp6378= nctemp6380;
int nctemp6382=LibeStrcmp(nctemp6373,nctemp6378);
int nctemp6370 = (nctemp6382 ==1);
if(nctemp6370)
{
struct tree* nctemp6385= sp;
struct nctempchar1 *nctemp6389;
static struct nctempchar1 nctemp6390 = {{ 8}, (char*)"struct \0"};
nctemp6389=&nctemp6390;
nctempchar1* nctemp6387= nctemp6389;
int nctemp6391=CodeEs(nctemp6385,nctemp6387);
struct tree* nctemp6393= sp;
struct tree* nctemp6397= sp;
nctempchar1* nctemp6399=PtreeGetype(nctemp6397);
nctempchar1* nctemp6395= nctemp6399;
int nctemp6400=CodeEs(nctemp6393,nctemp6395);
struct tree* nctemp6402= sp;
struct nctempchar1 *nctemp6406;
static struct nctempchar1 nctemp6407 = {{ 2}, (char*)"*\0"};
nctemp6406=&nctemp6407;
nctempchar1* nctemp6404= nctemp6406;
int nctemp6408=CodeEs(nctemp6402,nctemp6404);
}
else{
struct tree* nctemp6410= sp;
struct tree* nctemp6414= sp;
nctempchar1* nctemp6416=PtreeGetype(nctemp6414);
nctempchar1* nctemp6412= nctemp6416;
int nctemp6417=CodeEs(nctemp6410,nctemp6412);
}
}
struct tree* nctemp6419= sp;
struct nctempchar1 *nctemp6423;
static struct nctempchar1 nctemp6424 = {{ 2}, (char*)" \0"};
nctemp6423=&nctemp6424;
nctempchar1* nctemp6421= nctemp6423;
int nctemp6425=CodeEs(nctemp6419,nctemp6421);
struct tree* nctemp6427= sp;
nctempchar1* nctemp6429= ntemp;
int nctemp6432=CodeEs(nctemp6427,nctemp6429);
struct tree* nctemp6434= sp;
struct nctempchar1 *nctemp6438;
static struct nctempchar1 nctemp6439 = {{ 3}, (char*)"= \0"};
nctemp6438=&nctemp6439;
nctempchar1* nctemp6436= nctemp6438;
int nctemp6440=CodeEs(nctemp6434,nctemp6436);
struct tree* nctemp6442= sp;
nctempchar1* nctemp6444= temp;
int nctemp6447=CodeEs(nctemp6442,nctemp6444);
struct tree* nctemp6449= sp;
struct nctempchar1 *nctemp6453;
static struct nctempchar1 nctemp6454 = {{ 4}, (char*)";\n\0"};
nctemp6453=&nctemp6454;
nctempchar1* nctemp6451= nctemp6453;
int nctemp6455=CodeEs(nctemp6449,nctemp6451);
struct tree* nctemp6460= sp;
struct tree* nctemp6462=PtreeMvsister(nctemp6460);
sp =nctemp6462;
}
int nctemp6463 = (sp !=0);
nctemp6302=nctemp6463;}nctempchar1* nctemp6472=CodeMktemp();
ntemp=nctemp6472;
struct tree* nctemp6478= p;
nctempchar1* nctemp6480=PtreeGetref(nctemp6478);
nctempchar1* nctemp6476= nctemp6480;
struct nctempchar1 *nctemp6483;
static struct nctempchar1 nctemp6484 = {{ 5}, (char*)"aref\0"};
nctemp6483=&nctemp6484;
nctempchar1* nctemp6481= nctemp6483;
int nctemp6485=LibeStrcmp(nctemp6476,nctemp6481);
int nctemp6473 = (nctemp6485 ==1);
if(nctemp6473)
{
struct tree* nctemp6488= p;
struct nctempchar1 *nctemp6492;
static struct nctempchar1 nctemp6493 = {{ 7}, (char*)"nctemp\0"};
nctemp6492=&nctemp6493;
nctempchar1* nctemp6490= nctemp6492;
int nctemp6494=CodeEs(nctemp6488,nctemp6490);
struct tree* nctemp6496= p;
struct tree* nctemp6500= p;
nctempchar1* nctemp6502=PtreeGetype(nctemp6500);
nctempchar1* nctemp6498= nctemp6502;
int nctemp6503=CodeEs(nctemp6496,nctemp6498);
struct tree* nctemp6507= p;
int nctemp6509=PtreeGetrank(nctemp6507);
int nctemp6505= nctemp6509;
int nctemp6510=CodeEd(nctemp6505);
struct tree* nctemp6512= p;
struct nctempchar1 *nctemp6516;
static struct nctempchar1 nctemp6517 = {{ 2}, (char*)"*\0"};
nctemp6516=&nctemp6517;
nctempchar1* nctemp6514= nctemp6516;
int nctemp6518=CodeEs(nctemp6512,nctemp6514);
}
else{
struct tree* nctemp6524= p;
nctempchar1* nctemp6526=PtreeGetref(nctemp6524);
nctempchar1* nctemp6522= nctemp6526;
struct nctempchar1 *nctemp6529;
static struct nctempchar1 nctemp6530 = {{ 5}, (char*)"sref\0"};
nctemp6529=&nctemp6530;
nctempchar1* nctemp6527= nctemp6529;
int nctemp6531=LibeStrcmp(nctemp6522,nctemp6527);
int nctemp6519 = (nctemp6531 ==1);
if(nctemp6519)
{
struct tree* nctemp6534= p;
struct nctempchar1 *nctemp6538;
static struct nctempchar1 nctemp6539 = {{ 8}, (char*)"struct \0"};
nctemp6538=&nctemp6539;
nctempchar1* nctemp6536= nctemp6538;
int nctemp6540=CodeEs(nctemp6534,nctemp6536);
struct tree* nctemp6542= p;
struct tree* nctemp6546= p;
nctempchar1* nctemp6548=PtreeGetype(nctemp6546);
nctempchar1* nctemp6544= nctemp6548;
int nctemp6549=CodeEs(nctemp6542,nctemp6544);
struct tree* nctemp6551= p;
struct nctempchar1 *nctemp6555;
static struct nctempchar1 nctemp6556 = {{ 2}, (char*)"*\0"};
nctemp6555=&nctemp6556;
nctempchar1* nctemp6553= nctemp6555;
int nctemp6557=CodeEs(nctemp6551,nctemp6553);
}
else{
struct tree* nctemp6559= p;
struct tree* nctemp6563= p;
nctempchar1* nctemp6565=PtreeGetype(nctemp6563);
nctempchar1* nctemp6561= nctemp6565;
int nctemp6566=CodeEs(nctemp6559,nctemp6561);
}
}
struct tree* nctemp6568= p;
struct nctempchar1 *nctemp6572;
static struct nctempchar1 nctemp6573 = {{ 2}, (char*)" \0"};
nctemp6572=&nctemp6573;
nctempchar1* nctemp6570= nctemp6572;
int nctemp6574=CodeEs(nctemp6568,nctemp6570);
struct tree* nctemp6576= p;
nctempchar1* nctemp6578= ntemp;
int nctemp6581=CodeEs(nctemp6576,nctemp6578);
struct tree* nctemp6583= p;
struct nctempchar1 *nctemp6587;
static struct nctempchar1 nctemp6588 = {{ 2}, (char*)"=\0"};
nctemp6587=&nctemp6588;
nctempchar1* nctemp6585= nctemp6587;
int nctemp6589=CodeEs(nctemp6583,nctemp6585);
struct tree* nctemp6591= p;
struct symbol* nctemp6595= tp;
nctempchar1* nctemp6597=SymGetname(nctemp6595);
nctempchar1* nctemp6593= nctemp6597;
int nctemp6598=CodeEs(nctemp6591,nctemp6593);
struct tree* nctemp6600= p;
struct nctempchar1 *nctemp6604;
static struct nctempchar1 nctemp6605 = {{ 2}, (char*)"(\0"};
nctemp6604=&nctemp6605;
nctempchar1* nctemp6602= nctemp6604;
int nctemp6606=CodeEs(nctemp6600,nctemp6602);
struct tree* nctemp6611= p;
struct tree* nctemp6613=PtreeMvchild(nctemp6611);
sp =nctemp6613;
int nctemp6614 = (sp !=0);
if(nctemp6614)
{
struct tree* nctemp6622= sp;
struct tree* nctemp6624=PtreeMvchild(nctemp6622);
sp =nctemp6624;
}
int nctemp6625 = (sp !=0);
int nctemp6629=nctemp6625;
while(nctemp6629)
{{
struct tree* nctemp6631= p;
struct tree* nctemp6635= sp;
nctempchar1* nctemp6637=PtreeGetempr(nctemp6635);
nctempchar1* nctemp6633= nctemp6637;
int nctemp6638=CodeEs(nctemp6631,nctemp6633);
struct tree* nctemp6646= sp;
struct tree* nctemp6648=PtreeMvsister(nctemp6646);
sp =nctemp6648;
int nctemp6639 = (sp !=0);
if(nctemp6639)
{
struct tree* nctemp6651= p;
struct nctempchar1 *nctemp6655;
static struct nctempchar1 nctemp6656 = {{ 2}, (char*)",\0"};
nctemp6655=&nctemp6656;
nctempchar1* nctemp6653= nctemp6655;
int nctemp6657=CodeEs(nctemp6651,nctemp6653);
}
noargs = (noargs + 1);
}
int nctemp6658 = (sp !=0);
nctemp6629=nctemp6658;}struct tree* nctemp6663= p;
struct nctempchar1 *nctemp6667;
static struct nctempchar1 nctemp6668 = {{ 5}, (char*)");\n\0"};
nctemp6667=&nctemp6668;
nctempchar1* nctemp6665= nctemp6667;
int nctemp6669=CodeEs(nctemp6663,nctemp6665);
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
nctempchar1* nctemp6677=CodeMktemp();
pointer=nctemp6677;
nctempchar1* nctemp6683=CodeMktemp();
descr=nctemp6683;
struct tree* nctemp6689= p;
nctempchar1* nctemp6691=PtreeGetype(nctemp6689);
type=nctemp6691;
struct tree* nctemp6697= p;
nctempchar1* nctemp6699=PtreeGetname(nctemp6697);
nctempchar1* nctemp6695= nctemp6699;
struct nctempchar1 *nctemp6702;
static struct nctempchar1 nctemp6703 = {{ 5}, (char*)"cast\0"};
nctemp6702=&nctemp6703;
nctempchar1* nctemp6700= nctemp6702;
int nctemp6704=LibeStrcmp(nctemp6695,nctemp6700);
int nctemp6692 = (nctemp6704 ==1);
if(nctemp6692)
{
struct tree* nctemp6710= p;
struct tree* nctemp6712=PtreeMvchild(nctemp6710);
np =nctemp6712;
struct tree* nctemp6717= np;
struct tree* nctemp6719=PtreeMvsister(nctemp6717);
sp =nctemp6719;
struct tree* nctemp6725= sp;
nctempchar1* nctemp6727=CodeExpr(nctemp6725);
expr=nctemp6727;
struct tree* nctemp6733= np;
nctempchar1* nctemp6735=PtreeGetref(nctemp6733);
nctempchar1* nctemp6731= nctemp6735;
struct nctempchar1 *nctemp6738;
static struct nctempchar1 nctemp6739 = {{ 5}, (char*)"sref\0"};
nctemp6738=&nctemp6739;
nctempchar1* nctemp6736= nctemp6738;
int nctemp6740=LibeStrcmp(nctemp6731,nctemp6736);
int nctemp6728 = (nctemp6740 ==1);
if(nctemp6728)
{
nctempchar1* nctemp6747=CodeMktemp();
tmp=nctemp6747;
struct tree* nctemp6749= p;
nctempchar1* nctemp6751= type;
int nctemp6754=CodeEs(nctemp6749,nctemp6751);
struct tree* nctemp6756= p;
struct nctempchar1 *nctemp6760;
static struct nctempchar1 nctemp6761 = {{ 2}, (char*)" \0"};
nctemp6760=&nctemp6761;
nctempchar1* nctemp6758= nctemp6760;
int nctemp6762=CodeEs(nctemp6756,nctemp6758);
struct tree* nctemp6764= p;
nctempchar1* nctemp6766= tmp;
int nctemp6769=CodeEs(nctemp6764,nctemp6766);
struct tree* nctemp6771= p;
struct nctempchar1 *nctemp6775;
static struct nctempchar1 nctemp6776 = {{ 2}, (char*)"=\0"};
nctemp6775=&nctemp6776;
nctempchar1* nctemp6773= nctemp6775;
int nctemp6777=CodeEs(nctemp6771,nctemp6773);
struct tree* nctemp6779= p;
struct nctempchar1 *nctemp6783;
static struct nctempchar1 nctemp6784 = {{ 9}, (char*)"(struct \0"};
nctemp6783=&nctemp6784;
nctempchar1* nctemp6781= nctemp6783;
int nctemp6785=CodeEs(nctemp6779,nctemp6781);
struct tree* nctemp6787= p;
struct tree* nctemp6791= np;
nctempchar1* nctemp6793=PtreeGetype(nctemp6791);
nctempchar1* nctemp6789= nctemp6793;
int nctemp6794=CodeEs(nctemp6787,nctemp6789);
struct tree* nctemp6796= p;
struct nctempchar1 *nctemp6800;
static struct nctempchar1 nctemp6801 = {{ 4}, (char*)"*)(\0"};
nctemp6800=&nctemp6801;
nctempchar1* nctemp6798= nctemp6800;
int nctemp6802=CodeEs(nctemp6796,nctemp6798);
struct tree* nctemp6804= p;
nctempchar1* nctemp6806= expr;
int nctemp6809=CodeEs(nctemp6804,nctemp6806);
struct tree* nctemp6811= p;
struct nctempchar1 *nctemp6815;
static struct nctempchar1 nctemp6816 = {{ 5}, (char*)");\n\0"};
nctemp6815=&nctemp6816;
nctempchar1* nctemp6813= nctemp6815;
int nctemp6817=CodeEs(nctemp6811,nctemp6813);
}
else{
struct tree* nctemp6823= np;
nctempchar1* nctemp6825=PtreeGetref(nctemp6823);
nctempchar1* nctemp6821= nctemp6825;
struct nctempchar1 *nctemp6828;
static struct nctempchar1 nctemp6829 = {{ 5}, (char*)"aref\0"};
nctemp6828=&nctemp6829;
nctempchar1* nctemp6826= nctemp6828;
int nctemp6830=LibeStrcmp(nctemp6821,nctemp6826);
int nctemp6818 = (nctemp6830 ==1);
if(nctemp6818)
{
struct tree* nctemp6836= np;
struct tree* nctemp6838=PtreeMvchild(nctemp6836);
np =nctemp6838;
struct tree* nctemp6843= np;
struct tree* nctemp6845=PtreeMvchild(nctemp6843);
np =nctemp6845;
struct tree* nctemp6850= np;
struct tree* nctemp6852=PtreeMvchild(nctemp6850);
np =nctemp6852;
struct tree* nctemp6857= np;
struct tree* nctemp6859=PtreeMvchild(nctemp6857);
np =nctemp6859;
tp = np;
rank = 1;
struct tree* nctemp6867= np;
struct tree* nctemp6869=PtreeMvsister(nctemp6867);
np =nctemp6869;
int nctemp6860 = (np !=0);
int nctemp6871=nctemp6860;
while(nctemp6871)
{{
rank = (rank + 1);
}
struct tree* nctemp6879= np;
struct tree* nctemp6881=PtreeMvsister(nctemp6879);
np =nctemp6881;
int nctemp6872 = (np !=0);
nctemp6871=nctemp6872;}int nctemp6883 = (rank > 4);
if(nctemp6883)
{
struct nctempchar1 *nctemp6890;
static struct nctempchar1 nctemp6891 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6890=&nctemp6891;
nctempchar1* nctemp6888= nctemp6890;
int nctemp6892=CodeError(nctemp6888);
}
p = tp;
struct tree* nctemp6894= p;
struct nctempchar1 *nctemp6898;
static struct nctempchar1 nctemp6899 = {{ 7}, (char*)"nctemp\0"};
nctemp6898=&nctemp6899;
nctempchar1* nctemp6896= nctemp6898;
int nctemp6900=CodeEs(nctemp6894,nctemp6896);
struct tree* nctemp6902= p;
nctempchar1* nctemp6904= type;
int nctemp6907=CodeEs(nctemp6902,nctemp6904);
int nctemp6909= rank;
int nctemp6911=CodeEd(nctemp6909);
struct tree* nctemp6913= p;
struct nctempchar1 *nctemp6917;
static struct nctempchar1 nctemp6918 = {{ 2}, (char*)" \0"};
nctemp6917=&nctemp6918;
nctempchar1* nctemp6915= nctemp6917;
int nctemp6919=CodeEs(nctemp6913,nctemp6915);
struct tree* nctemp6921= sp;
nctempchar1* nctemp6923= descr;
int nctemp6926=CodeEs(nctemp6921,nctemp6923);
struct tree* nctemp6928= sp;
struct nctempchar1 *nctemp6932;
static struct nctempchar1 nctemp6933 = {{ 4}, (char*)";\n\0"};
nctemp6932=&nctemp6933;
nctempchar1* nctemp6930= nctemp6932;
int nctemp6934=CodeEs(nctemp6928,nctemp6930);
struct tree* nctemp6936= p;
struct nctempchar1 *nctemp6940;
static struct nctempchar1 nctemp6941 = {{ 7}, (char*)"nctemp\0"};
nctemp6940=&nctemp6941;
nctempchar1* nctemp6938= nctemp6940;
int nctemp6942=CodeEs(nctemp6936,nctemp6938);
struct tree* nctemp6944= p;
nctempchar1* nctemp6946= type;
int nctemp6949=CodeEs(nctemp6944,nctemp6946);
int nctemp6951= rank;
int nctemp6953=CodeEd(nctemp6951);
struct tree* nctemp6955= p;
struct nctempchar1 *nctemp6959;
static struct nctempchar1 nctemp6960 = {{ 3}, (char*)" *\0"};
nctemp6959=&nctemp6960;
nctempchar1* nctemp6957= nctemp6959;
int nctemp6961=CodeEs(nctemp6955,nctemp6957);
struct tree* nctemp6963= sp;
nctempchar1* nctemp6965= pointer;
int nctemp6968=CodeEs(nctemp6963,nctemp6965);
struct tree* nctemp6970= p;
struct nctempchar1 *nctemp6974;
static struct nctempchar1 nctemp6975 = {{ 4}, (char*)";\n\0"};
nctemp6974=&nctemp6975;
nctempchar1* nctemp6972= nctemp6974;
int nctemp6976=CodeEs(nctemp6970,nctemp6972);
struct tree* nctemp6978= sp;
nctempchar1* nctemp6980= descr;
int nctemp6983=CodeEs(nctemp6978,nctemp6980);
struct tree* nctemp6985= sp;
struct nctempchar1 *nctemp6989;
static struct nctempchar1 nctemp6990 = {{ 2}, (char*)"=\0"};
nctemp6989=&nctemp6990;
nctempchar1* nctemp6987= nctemp6989;
int nctemp6991=CodeEs(nctemp6985,nctemp6987);
struct tree* nctemp6993= sp;
struct nctempchar1 *nctemp6997;
static struct nctempchar1 nctemp6998 = {{ 3}, (char*)"*(\0"};
nctemp6997=&nctemp6998;
nctempchar1* nctemp6995= nctemp6997;
int nctemp6999=CodeEs(nctemp6993,nctemp6995);
struct tree* nctemp7001= p;
struct nctempchar1 *nctemp7005;
static struct nctempchar1 nctemp7006 = {{ 7}, (char*)"nctemp\0"};
nctemp7005=&nctemp7006;
nctempchar1* nctemp7003= nctemp7005;
int nctemp7007=CodeEs(nctemp7001,nctemp7003);
struct tree* nctemp7009= sp;
nctempchar1* nctemp7011= type;
int nctemp7014=CodeEs(nctemp7009,nctemp7011);
int nctemp7016= rank;
int nctemp7018=CodeEd(nctemp7016);
struct tree* nctemp7020= sp;
struct nctempchar1 *nctemp7024;
static struct nctempchar1 nctemp7025 = {{ 4}, (char*)"*)(\0"};
nctemp7024=&nctemp7025;
nctempchar1* nctemp7022= nctemp7024;
int nctemp7026=CodeEs(nctemp7020,nctemp7022);
struct tree* nctemp7028= sp;
nctempchar1* nctemp7030= expr;
int nctemp7033=CodeEs(nctemp7028,nctemp7030);
struct tree* nctemp7035= sp;
struct nctempchar1 *nctemp7039;
static struct nctempchar1 nctemp7040 = {{ 5}, (char*)");\n\0"};
nctemp7039=&nctemp7040;
nctempchar1* nctemp7037= nctemp7039;
int nctemp7041=CodeEs(nctemp7035,nctemp7037);
p = tp;
i = 0;
int nctemp7042 = (p !=0);
int nctemp7046=nctemp7042;
while(nctemp7046)
{{
struct tree* nctemp7052= p;
nctempchar1* nctemp7054=CodeExpr(nctemp7052);
dim=nctemp7054;
struct tree* nctemp7056= sp;
nctempchar1* nctemp7058= descr;
int nctemp7061=CodeEs(nctemp7056,nctemp7058);
struct tree* nctemp7063= sp;
struct nctempchar1 *nctemp7067;
static struct nctempchar1 nctemp7068 = {{ 3}, (char*)".d\0"};
nctemp7067=&nctemp7068;
nctempchar1* nctemp7065= nctemp7067;
int nctemp7069=CodeEs(nctemp7063,nctemp7065);
struct tree* nctemp7071= sp;
struct nctempchar1 *nctemp7075;
static struct nctempchar1 nctemp7076 = {{ 2}, (char*)"[\0"};
nctemp7075=&nctemp7076;
nctempchar1* nctemp7073= nctemp7075;
int nctemp7077=CodeEs(nctemp7071,nctemp7073);
int nctemp7079= i;
int nctemp7081=CodeEd(nctemp7079);
struct tree* nctemp7083= sp;
struct nctempchar1 *nctemp7087;
static struct nctempchar1 nctemp7088 = {{ 3}, (char*)"]=\0"};
nctemp7087=&nctemp7088;
nctempchar1* nctemp7085= nctemp7087;
int nctemp7089=CodeEs(nctemp7083,nctemp7085);
struct tree* nctemp7091= sp;
nctempchar1* nctemp7093= dim;
int nctemp7096=CodeEs(nctemp7091,nctemp7093);
struct tree* nctemp7098= sp;
struct nctempchar1 *nctemp7102;
static struct nctempchar1 nctemp7103 = {{ 4}, (char*)";\n\0"};
nctemp7102=&nctemp7103;
nctempchar1* nctemp7100= nctemp7102;
int nctemp7104=CodeEs(nctemp7098,nctemp7100);
i = (i + 1);
struct tree* nctemp7109= p;
struct tree* nctemp7111=PtreeMvsister(nctemp7109);
p =nctemp7111;
}
int nctemp7112 = (p !=0);
nctemp7046=nctemp7112;}struct tree* nctemp7117= sp;
nctempchar1* nctemp7119= pointer;
int nctemp7122=CodeEs(nctemp7117,nctemp7119);
struct tree* nctemp7124= sp;
struct nctempchar1 *nctemp7128;
static struct nctempchar1 nctemp7129 = {{ 3}, (char*)"=&\0"};
nctemp7128=&nctemp7129;
nctempchar1* nctemp7126= nctemp7128;
int nctemp7130=CodeEs(nctemp7124,nctemp7126);
struct tree* nctemp7132= sp;
nctempchar1* nctemp7134= descr;
int nctemp7137=CodeEs(nctemp7132,nctemp7134);
struct tree* nctemp7139= sp;
struct nctempchar1 *nctemp7143;
static struct nctempchar1 nctemp7144 = {{ 4}, (char*)";\n\0"};
nctemp7143=&nctemp7144;
nctempchar1* nctemp7141= nctemp7143;
int nctemp7145=CodeEs(nctemp7139,nctemp7141);
}
else{
struct tree* nctemp7147= p;
nctempchar1* nctemp7149= type;
int nctemp7152=CodeEs(nctemp7147,nctemp7149);
struct tree* nctemp7154= p;
struct nctempchar1 *nctemp7158;
static struct nctempchar1 nctemp7159 = {{ 2}, (char*)" \0"};
nctemp7158=&nctemp7159;
nctempchar1* nctemp7156= nctemp7158;
int nctemp7160=CodeEs(nctemp7154,nctemp7156);
struct tree* nctemp7162= p;
nctempchar1* nctemp7164= pointer;
int nctemp7167=CodeEs(nctemp7162,nctemp7164);
struct tree* nctemp7169= p;
struct nctempchar1 *nctemp7173;
static struct nctempchar1 nctemp7174 = {{ 2}, (char*)"=\0"};
nctemp7173=&nctemp7174;
nctempchar1* nctemp7171= nctemp7173;
int nctemp7175=CodeEs(nctemp7169,nctemp7171);
struct tree* nctemp7177= p;
struct nctempchar1 *nctemp7181;
static struct nctempchar1 nctemp7182 = {{ 2}, (char*)"(\0"};
nctemp7181=&nctemp7182;
nctempchar1* nctemp7179= nctemp7181;
int nctemp7183=CodeEs(nctemp7177,nctemp7179);
struct tree* nctemp7185= p;
struct tree* nctemp7189= np;
nctempchar1* nctemp7191=PtreeGetype(nctemp7189);
nctempchar1* nctemp7187= nctemp7191;
int nctemp7192=CodeEs(nctemp7185,nctemp7187);
struct tree* nctemp7194= p;
struct nctempchar1 *nctemp7198;
static struct nctempchar1 nctemp7199 = {{ 3}, (char*)")(\0"};
nctemp7198=&nctemp7199;
nctempchar1* nctemp7196= nctemp7198;
int nctemp7200=CodeEs(nctemp7194,nctemp7196);
struct tree* nctemp7202= p;
nctempchar1* nctemp7204= expr;
int nctemp7207=CodeEs(nctemp7202,nctemp7204);
struct tree* nctemp7209= p;
struct nctempchar1 *nctemp7213;
static struct nctempchar1 nctemp7214 = {{ 5}, (char*)");\n\0"};
nctemp7213=&nctemp7214;
nctempchar1* nctemp7211= nctemp7213;
int nctemp7215=CodeEs(nctemp7209,nctemp7211);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7223= p;
nctempchar1* nctemp7225=PtreeGetname(nctemp7223);
nctempchar1* nctemp7221= nctemp7225;
struct nctempchar1 *nctemp7228;
static struct nctempchar1 nctemp7229 = {{ 11}, (char*)"identifier\0"};
nctemp7228=&nctemp7229;
nctempchar1* nctemp7226= nctemp7228;
int nctemp7230=LibeStrcmp(nctemp7221,nctemp7226);
int nctemp7218 = (nctemp7230 ==1);
if(nctemp7218)
{
struct tree* nctemp7233= p;
nctempchar1* nctemp7235=CodeIdent(nctemp7233);
return nctemp7235;
}
else{
struct tree* nctemp7241= p;
nctempchar1* nctemp7243=PtreeGetname(nctemp7241);
nctempchar1* nctemp7239= nctemp7243;
struct nctempchar1 *nctemp7246;
static struct nctempchar1 nctemp7247 = {{ 4}, (char*)"new\0"};
nctemp7246=&nctemp7247;
nctempchar1* nctemp7244= nctemp7246;
int nctemp7248=LibeStrcmp(nctemp7239,nctemp7244);
int nctemp7236 = (nctemp7248 ==1);
if(nctemp7236)
{
struct tree* nctemp7251= p;
nctempchar1* nctemp7253=CodeNew(nctemp7251);
return nctemp7253;
}
else{
struct tree* nctemp7259= p;
nctempchar1* nctemp7261=PtreeGetname(nctemp7259);
nctempchar1* nctemp7257= nctemp7261;
struct nctempchar1 *nctemp7264;
static struct nctempchar1 nctemp7265 = {{ 7}, (char*)"delete\0"};
nctemp7264=&nctemp7265;
nctempchar1* nctemp7262= nctemp7264;
int nctemp7266=LibeStrcmp(nctemp7257,nctemp7262);
int nctemp7254 = (nctemp7266 ==1);
if(nctemp7254)
{
struct tree* nctemp7269= p;
nctempchar1* nctemp7271=CodeDelete(nctemp7269);
return nctemp7271;
}
else{
struct tree* nctemp7277= p;
nctempchar1* nctemp7279=PtreeGetname(nctemp7277);
nctempchar1* nctemp7275= nctemp7279;
struct nctempchar1 *nctemp7282;
static struct nctempchar1 nctemp7283 = {{ 4}, (char*)"len\0"};
nctemp7282=&nctemp7283;
nctempchar1* nctemp7280= nctemp7282;
int nctemp7284=LibeStrcmp(nctemp7275,nctemp7280);
int nctemp7272 = (nctemp7284 ==1);
if(nctemp7272)
{
struct tree* nctemp7287= p;
nctempchar1* nctemp7289=CodeLen(nctemp7287);
return nctemp7289;
}
else{
struct tree* nctemp7295= p;
nctempchar1* nctemp7297=PtreeGetname(nctemp7295);
nctempchar1* nctemp7293= nctemp7297;
struct nctempchar1 *nctemp7300;
static struct nctempchar1 nctemp7301 = {{ 6}, (char*)"cmplx\0"};
nctemp7300=&nctemp7301;
nctempchar1* nctemp7298= nctemp7300;
int nctemp7302=LibeStrcmp(nctemp7293,nctemp7298);
int nctemp7290 = (nctemp7302 ==1);
if(nctemp7290)
{
struct tree* nctemp7305= p;
nctempchar1* nctemp7307=CodeCmplx(nctemp7305);
return nctemp7307;
}
else{
struct tree* nctemp7313= p;
nctempchar1* nctemp7315=PtreeGetname(nctemp7313);
nctempchar1* nctemp7311= nctemp7315;
struct nctempchar1 *nctemp7318;
static struct nctempchar1 nctemp7319 = {{ 3}, (char*)"im\0"};
nctemp7318=&nctemp7319;
nctempchar1* nctemp7316= nctemp7318;
int nctemp7320=LibeStrcmp(nctemp7311,nctemp7316);
int nctemp7308 = (nctemp7320 ==1);
if(nctemp7308)
{
struct tree* nctemp7323= p;
nctempchar1* nctemp7325=CodeIm(nctemp7323);
return nctemp7325;
}
else{
struct tree* nctemp7331= p;
nctempchar1* nctemp7333=PtreeGetname(nctemp7331);
nctempchar1* nctemp7329= nctemp7333;
struct nctempchar1 *nctemp7336;
static struct nctempchar1 nctemp7337 = {{ 3}, (char*)"re\0"};
nctemp7336=&nctemp7337;
nctempchar1* nctemp7334= nctemp7336;
int nctemp7338=LibeStrcmp(nctemp7329,nctemp7334);
int nctemp7326 = (nctemp7338 ==1);
if(nctemp7326)
{
struct tree* nctemp7341= p;
nctempchar1* nctemp7343=CodeRe(nctemp7341);
return nctemp7343;
}
else{
struct tree* nctemp7349= p;
nctempchar1* nctemp7351=PtreeGetname(nctemp7349);
nctempchar1* nctemp7347= nctemp7351;
struct nctempchar1 *nctemp7354;
static struct nctempchar1 nctemp7355 = {{ 6}, (char*)"fcall\0"};
nctemp7354=&nctemp7355;
nctempchar1* nctemp7352= nctemp7354;
int nctemp7356=LibeStrcmp(nctemp7347,nctemp7352);
int nctemp7344 = (nctemp7356 ==1);
if(nctemp7344)
{
struct tree* nctemp7359= p;
nctempchar1* nctemp7361=CodeFcall(nctemp7359);
return nctemp7361;
}
else{
struct tree* nctemp7367= p;
nctempchar1* nctemp7369=PtreeGetname(nctemp7367);
nctempchar1* nctemp7365= nctemp7369;
struct nctempchar1 *nctemp7372;
static struct nctempchar1 nctemp7373 = {{ 5}, (char*)"cast\0"};
nctemp7372=&nctemp7373;
nctempchar1* nctemp7370= nctemp7372;
int nctemp7374=LibeStrcmp(nctemp7365,nctemp7370);
int nctemp7362 = (nctemp7374 ==1);
if(nctemp7362)
{
struct tree* nctemp7377= p;
nctempchar1* nctemp7379=CodeCast(nctemp7377);
return nctemp7379;
}
else{
struct tree* nctemp7385= p;
nctempchar1* nctemp7387=PtreeGetname(nctemp7385);
nctempchar1* nctemp7383= nctemp7387;
struct nctempchar1 *nctemp7390;
static struct nctempchar1 nctemp7391 = {{ 10}, (char*)"iconstant\0"};
nctemp7390=&nctemp7391;
nctempchar1* nctemp7388= nctemp7390;
int nctemp7392=LibeStrcmp(nctemp7383,nctemp7388);
int nctemp7380 = (nctemp7392 ==1);
if(nctemp7380)
{
struct tree* nctemp7395= p;
nctempchar1* nctemp7397=PtreeGetdef(nctemp7395);
return nctemp7397;
}
else{
struct tree* nctemp7403= p;
nctempchar1* nctemp7405=PtreeGetname(nctemp7403);
nctempchar1* nctemp7401= nctemp7405;
struct nctempchar1 *nctemp7408;
static struct nctempchar1 nctemp7409 = {{ 10}, (char*)"rconstant\0"};
nctemp7408=&nctemp7409;
nctempchar1* nctemp7406= nctemp7408;
int nctemp7410=LibeStrcmp(nctemp7401,nctemp7406);
int nctemp7398 = (nctemp7410 ==1);
if(nctemp7398)
{
struct tree* nctemp7413= p;
nctempchar1* nctemp7415=PtreeGetdef(nctemp7413);
return nctemp7415;
}
else{
struct tree* nctemp7421= p;
nctempchar1* nctemp7423=PtreeGetname(nctemp7421);
nctempchar1* nctemp7419= nctemp7423;
struct nctempchar1 *nctemp7426;
static struct nctempchar1 nctemp7427 = {{ 10}, (char*)"sconstant\0"};
nctemp7426=&nctemp7427;
nctempchar1* nctemp7424= nctemp7426;
int nctemp7428=LibeStrcmp(nctemp7419,nctemp7424);
int nctemp7416 = (nctemp7428 ==1);
if(nctemp7416)
{
struct tree* nctemp7431= p;
nctempchar1* nctemp7433=CodeSconstant(nctemp7431);
return nctemp7433;
}
else{
struct tree* nctemp7435= p;
nctempchar1* nctemp7437=CodeBinexpr(nctemp7435);
return nctemp7437;
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
nctempchar1* nctemp7443=CodeMktemp();
tempr=nctemp7443;
struct tree* nctemp7449= p;
nctempchar1* nctemp7451=PtreeGetname(nctemp7449);
nctempchar1* nctemp7447= nctemp7451;
struct nctempchar1 *nctemp7454;
static struct nctempchar1 nctemp7455 = {{ 7}, (char*)"unexpr\0"};
nctemp7454=&nctemp7455;
nctempchar1* nctemp7452= nctemp7454;
int nctemp7456=LibeStrcmp(nctemp7447,nctemp7452);
int nctemp7444 = (nctemp7456 ==1);
if(nctemp7444)
{
struct tree* nctemp7463= p;
nctempchar1* nctemp7465=PtreeGetype(nctemp7463);
nctempchar1* nctemp7461= nctemp7465;
struct nctempchar1 *nctemp7468;
static struct nctempchar1 nctemp7469 = {{ 8}, (char*)"complex\0"};
nctemp7468=&nctemp7469;
nctempchar1* nctemp7466= nctemp7468;
int nctemp7470=LibeStrcmp(nctemp7461,nctemp7466);
int nctemp7458 = (nctemp7470 ==1);
if(nctemp7458)
{
struct tree* nctemp7479= p;
struct tree* nctemp7481=PtreeMvchild(nctemp7479);
struct tree* nctemp7477= nctemp7481;
nctempchar1* nctemp7482=CodePrimexpr(nctemp7477);
tmp=nctemp7482;
struct tree* nctemp7484= p;
struct nctempchar1 *nctemp7488;
static struct nctempchar1 nctemp7489 = {{ 4}, (char*)";\n\0"};
nctemp7488=&nctemp7489;
nctempchar1* nctemp7486= nctemp7488;
int nctemp7490=CodeEs(nctemp7484,nctemp7486);
struct tree* nctemp7492= p;
nctempchar1* nctemp7494= tempr;
int nctemp7497=CodeEs(nctemp7492,nctemp7494);
struct tree* nctemp7499= p;
struct nctempchar1 *nctemp7503;
static struct nctempchar1 nctemp7504 = {{ 3}, (char*)".r\0"};
nctemp7503=&nctemp7504;
nctempchar1* nctemp7501= nctemp7503;
int nctemp7505=CodeEs(nctemp7499,nctemp7501);
struct tree* nctemp7507= p;
struct nctempchar1 *nctemp7511;
static struct nctempchar1 nctemp7512 = {{ 4}, (char*)"= -\0"};
nctemp7511=&nctemp7512;
nctempchar1* nctemp7509= nctemp7511;
int nctemp7513=CodeEs(nctemp7507,nctemp7509);
struct tree* nctemp7515= p;
nctempchar1* nctemp7517= tmp;
int nctemp7520=CodeEs(nctemp7515,nctemp7517);
struct tree* nctemp7522= p;
struct nctempchar1 *nctemp7526;
static struct nctempchar1 nctemp7527 = {{ 3}, (char*)".r\0"};
nctemp7526=&nctemp7527;
nctempchar1* nctemp7524= nctemp7526;
int nctemp7528=CodeEs(nctemp7522,nctemp7524);
struct tree* nctemp7530= p;
struct nctempchar1 *nctemp7534;
static struct nctempchar1 nctemp7535 = {{ 4}, (char*)";\n\0"};
nctemp7534=&nctemp7535;
nctempchar1* nctemp7532= nctemp7534;
int nctemp7536=CodeEs(nctemp7530,nctemp7532);
struct tree* nctemp7538= p;
nctempchar1* nctemp7540= tempr;
int nctemp7543=CodeEs(nctemp7538,nctemp7540);
struct tree* nctemp7545= p;
struct nctempchar1 *nctemp7549;
static struct nctempchar1 nctemp7550 = {{ 3}, (char*)".i\0"};
nctemp7549=&nctemp7550;
nctempchar1* nctemp7547= nctemp7549;
int nctemp7551=CodeEs(nctemp7545,nctemp7547);
struct tree* nctemp7553= p;
struct nctempchar1 *nctemp7557;
static struct nctempchar1 nctemp7558 = {{ 4}, (char*)"= -\0"};
nctemp7557=&nctemp7558;
nctempchar1* nctemp7555= nctemp7557;
int nctemp7559=CodeEs(nctemp7553,nctemp7555);
struct tree* nctemp7561= p;
nctempchar1* nctemp7563= tmp;
int nctemp7566=CodeEs(nctemp7561,nctemp7563);
struct tree* nctemp7568= p;
struct nctempchar1 *nctemp7572;
static struct nctempchar1 nctemp7573 = {{ 3}, (char*)".i\0"};
nctemp7572=&nctemp7573;
nctempchar1* nctemp7570= nctemp7572;
int nctemp7574=CodeEs(nctemp7568,nctemp7570);
struct tree* nctemp7576= p;
struct nctempchar1 *nctemp7580;
static struct nctempchar1 nctemp7581 = {{ 4}, (char*)";\n\0"};
nctemp7580=&nctemp7581;
nctempchar1* nctemp7578= nctemp7580;
int nctemp7582=CodeEs(nctemp7576,nctemp7578);
return tempr;
}
else{
struct tree* nctemp7592= p;
struct tree* nctemp7594=PtreeMvchild(nctemp7592);
struct tree* nctemp7590= nctemp7594;
nctempchar1* nctemp7595=CodePrimexpr(nctemp7590);
tmp=nctemp7595;
struct tree* nctemp7597= p;
struct tree* nctemp7601= p;
nctempchar1* nctemp7603=PtreeGetype(nctemp7601);
nctempchar1* nctemp7599= nctemp7603;
int nctemp7604=CodeEs(nctemp7597,nctemp7599);
struct tree* nctemp7606= p;
struct nctempchar1 *nctemp7610;
static struct nctempchar1 nctemp7611 = {{ 2}, (char*)" \0"};
nctemp7610=&nctemp7611;
nctempchar1* nctemp7608= nctemp7610;
int nctemp7612=CodeEs(nctemp7606,nctemp7608);
struct tree* nctemp7614= p;
nctempchar1* nctemp7616= tempr;
int nctemp7619=CodeEs(nctemp7614,nctemp7616);
struct tree* nctemp7621= p;
struct nctempchar1 *nctemp7625;
static struct nctempchar1 nctemp7626 = {{ 4}, (char*)"= -\0"};
nctemp7625=&nctemp7626;
nctempchar1* nctemp7623= nctemp7625;
int nctemp7627=CodeEs(nctemp7621,nctemp7623);
struct tree* nctemp7629= p;
nctempchar1* nctemp7631= tmp;
int nctemp7634=CodeEs(nctemp7629,nctemp7631);
struct tree* nctemp7636= p;
struct nctempchar1 *nctemp7640;
static struct nctempchar1 nctemp7641 = {{ 4}, (char*)";\n\0"};
nctemp7640=&nctemp7641;
nctempchar1* nctemp7638= nctemp7640;
int nctemp7642=CodeEs(nctemp7636,nctemp7638);
return tempr;
}
}
else{
struct tree* nctemp7646= p;
nctempchar1* nctemp7648=CodePrimexpr(nctemp7646);
return nctemp7648;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7654= p;
nctempchar1* nctemp7656=PtreeGetype(nctemp7654);
type=nctemp7656;
nctempchar1* nctemp7662=CodeMktemp();
tempr=nctemp7662;
struct tree* nctemp7668= p;
nctempchar1* nctemp7670=PtreeGetdef(nctemp7668);
opr=nctemp7670;
nctempchar1* nctemp7674= type;
struct nctempchar1 *nctemp7679;
static struct nctempchar1 nctemp7680 = {{ 8}, (char*)"complex\0"};
nctemp7679=&nctemp7680;
nctempchar1* nctemp7677= nctemp7679;
int nctemp7681=LibeStrcmp(nctemp7674,nctemp7677);
int nctemp7671 = (nctemp7681 ==1);
if(nctemp7671)
{
nctempchar1* nctemp7689= opr;
struct nctempchar1 *nctemp7694;
static struct nctempchar1 nctemp7695 = {{ 2}, (char*)"+\0"};
nctemp7694=&nctemp7695;
nctempchar1* nctemp7692= nctemp7694;
int nctemp7696=LibeStrcmp(nctemp7689,nctemp7692);
int nctemp7686 = (nctemp7696 ==1);
nctempchar1* nctemp7702= opr;
struct nctempchar1 *nctemp7707;
static struct nctempchar1 nctemp7708 = {{ 2}, (char*)"-\0"};
nctemp7707=&nctemp7708;
nctempchar1* nctemp7705= nctemp7707;
int nctemp7709=LibeStrcmp(nctemp7702,nctemp7705);
int nctemp7699 = (nctemp7709 ==1);
int nctemp7683 = (nctemp7686 || nctemp7699);
if(nctemp7683)
{
struct tree* nctemp7712= p;
nctempchar1* nctemp7714= type;
int nctemp7717=CodeEs(nctemp7712,nctemp7714);
struct tree* nctemp7719= p;
struct nctempchar1 *nctemp7723;
static struct nctempchar1 nctemp7724 = {{ 2}, (char*)" \0"};
nctemp7723=&nctemp7724;
nctempchar1* nctemp7721= nctemp7723;
int nctemp7725=CodeEs(nctemp7719,nctemp7721);
struct tree* nctemp7727= p;
nctempchar1* nctemp7729= tempr;
int nctemp7732=CodeEs(nctemp7727,nctemp7729);
struct tree* nctemp7734= p;
struct nctempchar1 *nctemp7738;
static struct nctempchar1 nctemp7739 = {{ 3}, (char*)".r\0"};
nctemp7738=&nctemp7739;
nctempchar1* nctemp7736= nctemp7738;
int nctemp7740=CodeEs(nctemp7734,nctemp7736);
struct tree* nctemp7742= p;
struct nctempchar1 *nctemp7746;
static struct nctempchar1 nctemp7747 = {{ 4}, (char*)" = \0"};
nctemp7746=&nctemp7747;
nctempchar1* nctemp7744= nctemp7746;
int nctemp7748=CodeEs(nctemp7742,nctemp7744);
struct tree* nctemp7750= p;
nctempchar1* nctemp7752= lval;
int nctemp7755=CodeEs(nctemp7750,nctemp7752);
struct tree* nctemp7757= p;
struct nctempchar1 *nctemp7761;
static struct nctempchar1 nctemp7762 = {{ 3}, (char*)".r\0"};
nctemp7761=&nctemp7762;
nctempchar1* nctemp7759= nctemp7761;
int nctemp7763=CodeEs(nctemp7757,nctemp7759);
struct tree* nctemp7765= p;
struct nctempchar1 *nctemp7769;
static struct nctempchar1 nctemp7770 = {{ 2}, (char*)" \0"};
nctemp7769=&nctemp7770;
nctempchar1* nctemp7767= nctemp7769;
int nctemp7771=CodeEs(nctemp7765,nctemp7767);
struct tree* nctemp7773= p;
struct tree* nctemp7777= p;
nctempchar1* nctemp7779=PtreeGetdef(nctemp7777);
nctempchar1* nctemp7775= nctemp7779;
int nctemp7780=CodeEs(nctemp7773,nctemp7775);
struct tree* nctemp7782= p;
struct nctempchar1 *nctemp7786;
static struct nctempchar1 nctemp7787 = {{ 2}, (char*)" \0"};
nctemp7786=&nctemp7787;
nctempchar1* nctemp7784= nctemp7786;
int nctemp7788=CodeEs(nctemp7782,nctemp7784);
struct tree* nctemp7790= p;
nctempchar1* nctemp7792= rval;
int nctemp7795=CodeEs(nctemp7790,nctemp7792);
struct tree* nctemp7797= p;
struct nctempchar1 *nctemp7801;
static struct nctempchar1 nctemp7802 = {{ 3}, (char*)".r\0"};
nctemp7801=&nctemp7802;
nctempchar1* nctemp7799= nctemp7801;
int nctemp7803=CodeEs(nctemp7797,nctemp7799);
struct tree* nctemp7805= p;
struct nctempchar1 *nctemp7809;
static struct nctempchar1 nctemp7810 = {{ 4}, (char*)";\n\0"};
nctemp7809=&nctemp7810;
nctempchar1* nctemp7807= nctemp7809;
int nctemp7811=CodeEs(nctemp7805,nctemp7807);
struct tree* nctemp7813= p;
nctempchar1* nctemp7815= type;
int nctemp7818=CodeEs(nctemp7813,nctemp7815);
struct tree* nctemp7820= p;
struct nctempchar1 *nctemp7824;
static struct nctempchar1 nctemp7825 = {{ 2}, (char*)" \0"};
nctemp7824=&nctemp7825;
nctempchar1* nctemp7822= nctemp7824;
int nctemp7826=CodeEs(nctemp7820,nctemp7822);
struct tree* nctemp7828= p;
nctempchar1* nctemp7830= tempr;
int nctemp7833=CodeEs(nctemp7828,nctemp7830);
struct tree* nctemp7835= p;
struct nctempchar1 *nctemp7839;
static struct nctempchar1 nctemp7840 = {{ 3}, (char*)".i\0"};
nctemp7839=&nctemp7840;
nctempchar1* nctemp7837= nctemp7839;
int nctemp7841=CodeEs(nctemp7835,nctemp7837);
struct tree* nctemp7843= p;
struct nctempchar1 *nctemp7847;
static struct nctempchar1 nctemp7848 = {{ 4}, (char*)" = \0"};
nctemp7847=&nctemp7848;
nctempchar1* nctemp7845= nctemp7847;
int nctemp7849=CodeEs(nctemp7843,nctemp7845);
struct tree* nctemp7851= p;
nctempchar1* nctemp7853= lval;
int nctemp7856=CodeEs(nctemp7851,nctemp7853);
struct tree* nctemp7858= p;
struct nctempchar1 *nctemp7862;
static struct nctempchar1 nctemp7863 = {{ 3}, (char*)".i\0"};
nctemp7862=&nctemp7863;
nctempchar1* nctemp7860= nctemp7862;
int nctemp7864=CodeEs(nctemp7858,nctemp7860);
struct tree* nctemp7866= p;
struct nctempchar1 *nctemp7870;
static struct nctempchar1 nctemp7871 = {{ 2}, (char*)" \0"};
nctemp7870=&nctemp7871;
nctempchar1* nctemp7868= nctemp7870;
int nctemp7872=CodeEs(nctemp7866,nctemp7868);
struct tree* nctemp7874= p;
struct tree* nctemp7878= p;
nctempchar1* nctemp7880=PtreeGetdef(nctemp7878);
nctempchar1* nctemp7876= nctemp7880;
int nctemp7881=CodeEs(nctemp7874,nctemp7876);
struct tree* nctemp7883= p;
struct nctempchar1 *nctemp7887;
static struct nctempchar1 nctemp7888 = {{ 2}, (char*)" \0"};
nctemp7887=&nctemp7888;
nctempchar1* nctemp7885= nctemp7887;
int nctemp7889=CodeEs(nctemp7883,nctemp7885);
struct tree* nctemp7891= p;
nctempchar1* nctemp7893= rval;
int nctemp7896=CodeEs(nctemp7891,nctemp7893);
struct tree* nctemp7898= p;
struct nctempchar1 *nctemp7902;
static struct nctempchar1 nctemp7903 = {{ 3}, (char*)".i\0"};
nctemp7902=&nctemp7903;
nctempchar1* nctemp7900= nctemp7902;
int nctemp7904=CodeEs(nctemp7898,nctemp7900);
struct tree* nctemp7906= p;
struct nctempchar1 *nctemp7910;
static struct nctempchar1 nctemp7911 = {{ 4}, (char*)";\n\0"};
nctemp7910=&nctemp7911;
nctempchar1* nctemp7908= nctemp7910;
int nctemp7912=CodeEs(nctemp7906,nctemp7908);
}
else{
nctempchar1* nctemp7916= opr;
struct nctempchar1 *nctemp7921;
static struct nctempchar1 nctemp7922 = {{ 2}, (char*)"*\0"};
nctemp7921=&nctemp7922;
nctempchar1* nctemp7919= nctemp7921;
int nctemp7923=LibeStrcmp(nctemp7916,nctemp7919);
int nctemp7913 = (nctemp7923 ==1);
if(nctemp7913)
{
struct tree* nctemp7926= p;
nctempchar1* nctemp7928= type;
int nctemp7931=CodeEs(nctemp7926,nctemp7928);
struct tree* nctemp7933= p;
struct nctempchar1 *nctemp7937;
static struct nctempchar1 nctemp7938 = {{ 2}, (char*)" \0"};
nctemp7937=&nctemp7938;
nctempchar1* nctemp7935= nctemp7937;
int nctemp7939=CodeEs(nctemp7933,nctemp7935);
struct tree* nctemp7941= p;
nctempchar1* nctemp7943= tempr;
int nctemp7946=CodeEs(nctemp7941,nctemp7943);
struct tree* nctemp7948= p;
struct nctempchar1 *nctemp7952;
static struct nctempchar1 nctemp7953 = {{ 3}, (char*)".r\0"};
nctemp7952=&nctemp7953;
nctempchar1* nctemp7950= nctemp7952;
int nctemp7954=CodeEs(nctemp7948,nctemp7950);
struct tree* nctemp7956= p;
struct nctempchar1 *nctemp7960;
static struct nctempchar1 nctemp7961 = {{ 4}, (char*)" = \0"};
nctemp7960=&nctemp7961;
nctempchar1* nctemp7958= nctemp7960;
int nctemp7962=CodeEs(nctemp7956,nctemp7958);
struct tree* nctemp7964= p;
nctempchar1* nctemp7966= lval;
int nctemp7969=CodeEs(nctemp7964,nctemp7966);
struct tree* nctemp7971= p;
struct nctempchar1 *nctemp7975;
static struct nctempchar1 nctemp7976 = {{ 3}, (char*)".r\0"};
nctemp7975=&nctemp7976;
nctempchar1* nctemp7973= nctemp7975;
int nctemp7977=CodeEs(nctemp7971,nctemp7973);
struct tree* nctemp7979= p;
struct nctempchar1 *nctemp7983;
static struct nctempchar1 nctemp7984 = {{ 2}, (char*)"*\0"};
nctemp7983=&nctemp7984;
nctempchar1* nctemp7981= nctemp7983;
int nctemp7985=CodeEs(nctemp7979,nctemp7981);
struct tree* nctemp7987= p;
nctempchar1* nctemp7989= rval;
int nctemp7992=CodeEs(nctemp7987,nctemp7989);
struct tree* nctemp7994= p;
struct nctempchar1 *nctemp7998;
static struct nctempchar1 nctemp7999 = {{ 3}, (char*)".r\0"};
nctemp7998=&nctemp7999;
nctempchar1* nctemp7996= nctemp7998;
int nctemp8000=CodeEs(nctemp7994,nctemp7996);
struct tree* nctemp8002= p;
struct nctempchar1 *nctemp8006;
static struct nctempchar1 nctemp8007 = {{ 2}, (char*)"-\0"};
nctemp8006=&nctemp8007;
nctempchar1* nctemp8004= nctemp8006;
int nctemp8008=CodeEs(nctemp8002,nctemp8004);
struct tree* nctemp8010= p;
nctempchar1* nctemp8012= lval;
int nctemp8015=CodeEs(nctemp8010,nctemp8012);
struct tree* nctemp8017= p;
struct nctempchar1 *nctemp8021;
static struct nctempchar1 nctemp8022 = {{ 3}, (char*)".i\0"};
nctemp8021=&nctemp8022;
nctempchar1* nctemp8019= nctemp8021;
int nctemp8023=CodeEs(nctemp8017,nctemp8019);
struct tree* nctemp8025= p;
struct nctempchar1 *nctemp8029;
static struct nctempchar1 nctemp8030 = {{ 2}, (char*)"*\0"};
nctemp8029=&nctemp8030;
nctempchar1* nctemp8027= nctemp8029;
int nctemp8031=CodeEs(nctemp8025,nctemp8027);
struct tree* nctemp8033= p;
nctempchar1* nctemp8035= rval;
int nctemp8038=CodeEs(nctemp8033,nctemp8035);
struct tree* nctemp8040= p;
struct nctempchar1 *nctemp8044;
static struct nctempchar1 nctemp8045 = {{ 3}, (char*)".i\0"};
nctemp8044=&nctemp8045;
nctempchar1* nctemp8042= nctemp8044;
int nctemp8046=CodeEs(nctemp8040,nctemp8042);
struct tree* nctemp8048= p;
struct nctempchar1 *nctemp8052;
static struct nctempchar1 nctemp8053 = {{ 4}, (char*)";\n\0"};
nctemp8052=&nctemp8053;
nctempchar1* nctemp8050= nctemp8052;
int nctemp8054=CodeEs(nctemp8048,nctemp8050);
struct tree* nctemp8056= p;
nctempchar1* nctemp8058= type;
int nctemp8061=CodeEs(nctemp8056,nctemp8058);
struct tree* nctemp8063= p;
struct nctempchar1 *nctemp8067;
static struct nctempchar1 nctemp8068 = {{ 2}, (char*)" \0"};
nctemp8067=&nctemp8068;
nctempchar1* nctemp8065= nctemp8067;
int nctemp8069=CodeEs(nctemp8063,nctemp8065);
struct tree* nctemp8071= p;
nctempchar1* nctemp8073= tempr;
int nctemp8076=CodeEs(nctemp8071,nctemp8073);
struct tree* nctemp8078= p;
struct nctempchar1 *nctemp8082;
static struct nctempchar1 nctemp8083 = {{ 3}, (char*)".i\0"};
nctemp8082=&nctemp8083;
nctempchar1* nctemp8080= nctemp8082;
int nctemp8084=CodeEs(nctemp8078,nctemp8080);
struct tree* nctemp8086= p;
struct nctempchar1 *nctemp8090;
static struct nctempchar1 nctemp8091 = {{ 4}, (char*)" = \0"};
nctemp8090=&nctemp8091;
nctempchar1* nctemp8088= nctemp8090;
int nctemp8092=CodeEs(nctemp8086,nctemp8088);
struct tree* nctemp8094= p;
nctempchar1* nctemp8096= lval;
int nctemp8099=CodeEs(nctemp8094,nctemp8096);
struct tree* nctemp8101= p;
struct nctempchar1 *nctemp8105;
static struct nctempchar1 nctemp8106 = {{ 3}, (char*)".i\0"};
nctemp8105=&nctemp8106;
nctempchar1* nctemp8103= nctemp8105;
int nctemp8107=CodeEs(nctemp8101,nctemp8103);
struct tree* nctemp8109= p;
struct nctempchar1 *nctemp8113;
static struct nctempchar1 nctemp8114 = {{ 2}, (char*)"*\0"};
nctemp8113=&nctemp8114;
nctempchar1* nctemp8111= nctemp8113;
int nctemp8115=CodeEs(nctemp8109,nctemp8111);
struct tree* nctemp8117= p;
nctempchar1* nctemp8119= rval;
int nctemp8122=CodeEs(nctemp8117,nctemp8119);
struct tree* nctemp8124= p;
struct nctempchar1 *nctemp8128;
static struct nctempchar1 nctemp8129 = {{ 3}, (char*)".r\0"};
nctemp8128=&nctemp8129;
nctempchar1* nctemp8126= nctemp8128;
int nctemp8130=CodeEs(nctemp8124,nctemp8126);
struct tree* nctemp8132= p;
struct nctempchar1 *nctemp8136;
static struct nctempchar1 nctemp8137 = {{ 2}, (char*)"+\0"};
nctemp8136=&nctemp8137;
nctempchar1* nctemp8134= nctemp8136;
int nctemp8138=CodeEs(nctemp8132,nctemp8134);
struct tree* nctemp8140= p;
nctempchar1* nctemp8142= lval;
int nctemp8145=CodeEs(nctemp8140,nctemp8142);
struct tree* nctemp8147= p;
struct nctempchar1 *nctemp8151;
static struct nctempchar1 nctemp8152 = {{ 3}, (char*)".r\0"};
nctemp8151=&nctemp8152;
nctempchar1* nctemp8149= nctemp8151;
int nctemp8153=CodeEs(nctemp8147,nctemp8149);
struct tree* nctemp8155= p;
struct nctempchar1 *nctemp8159;
static struct nctempchar1 nctemp8160 = {{ 2}, (char*)"*\0"};
nctemp8159=&nctemp8160;
nctempchar1* nctemp8157= nctemp8159;
int nctemp8161=CodeEs(nctemp8155,nctemp8157);
struct tree* nctemp8163= p;
nctempchar1* nctemp8165= rval;
int nctemp8168=CodeEs(nctemp8163,nctemp8165);
struct tree* nctemp8170= p;
struct nctempchar1 *nctemp8174;
static struct nctempchar1 nctemp8175 = {{ 3}, (char*)".i\0"};
nctemp8174=&nctemp8175;
nctempchar1* nctemp8172= nctemp8174;
int nctemp8176=CodeEs(nctemp8170,nctemp8172);
struct tree* nctemp8178= p;
struct nctempchar1 *nctemp8182;
static struct nctempchar1 nctemp8183 = {{ 4}, (char*)";\n\0"};
nctemp8182=&nctemp8183;
nctempchar1* nctemp8180= nctemp8182;
int nctemp8184=CodeEs(nctemp8178,nctemp8180);
}
else{
nctempchar1* nctemp8188= opr;
struct nctempchar1 *nctemp8193;
static struct nctempchar1 nctemp8194 = {{ 2}, (char*)"/\0"};
nctemp8193=&nctemp8194;
nctempchar1* nctemp8191= nctemp8193;
int nctemp8195=LibeStrcmp(nctemp8188,nctemp8191);
int nctemp8185 = (nctemp8195 ==1);
if(nctemp8185)
{
struct tree* nctemp8198= p;
nctempchar1* nctemp8200= type;
int nctemp8203=CodeEs(nctemp8198,nctemp8200);
struct tree* nctemp8205= p;
struct nctempchar1 *nctemp8209;
static struct nctempchar1 nctemp8210 = {{ 2}, (char*)" \0"};
nctemp8209=&nctemp8210;
nctempchar1* nctemp8207= nctemp8209;
int nctemp8211=CodeEs(nctemp8205,nctemp8207);
struct tree* nctemp8213= p;
nctempchar1* nctemp8215= tempr;
int nctemp8218=CodeEs(nctemp8213,nctemp8215);
struct tree* nctemp8220= p;
struct nctempchar1 *nctemp8224;
static struct nctempchar1 nctemp8225 = {{ 3}, (char*)".r\0"};
nctemp8224=&nctemp8225;
nctempchar1* nctemp8222= nctemp8224;
int nctemp8226=CodeEs(nctemp8220,nctemp8222);
struct tree* nctemp8228= p;
struct nctempchar1 *nctemp8232;
static struct nctempchar1 nctemp8233 = {{ 4}, (char*)" = \0"};
nctemp8232=&nctemp8233;
nctempchar1* nctemp8230= nctemp8232;
int nctemp8234=CodeEs(nctemp8228,nctemp8230);
struct tree* nctemp8236= p;
struct nctempchar1 *nctemp8240;
static struct nctempchar1 nctemp8241 = {{ 2}, (char*)"(\0"};
nctemp8240=&nctemp8241;
nctempchar1* nctemp8238= nctemp8240;
int nctemp8242=CodeEs(nctemp8236,nctemp8238);
struct tree* nctemp8244= p;
nctempchar1* nctemp8246= lval;
int nctemp8249=CodeEs(nctemp8244,nctemp8246);
struct tree* nctemp8251= p;
struct nctempchar1 *nctemp8255;
static struct nctempchar1 nctemp8256 = {{ 3}, (char*)".r\0"};
nctemp8255=&nctemp8256;
nctempchar1* nctemp8253= nctemp8255;
int nctemp8257=CodeEs(nctemp8251,nctemp8253);
struct tree* nctemp8259= p;
struct nctempchar1 *nctemp8263;
static struct nctempchar1 nctemp8264 = {{ 2}, (char*)"*\0"};
nctemp8263=&nctemp8264;
nctempchar1* nctemp8261= nctemp8263;
int nctemp8265=CodeEs(nctemp8259,nctemp8261);
struct tree* nctemp8267= p;
nctempchar1* nctemp8269= rval;
int nctemp8272=CodeEs(nctemp8267,nctemp8269);
struct tree* nctemp8274= p;
struct nctempchar1 *nctemp8278;
static struct nctempchar1 nctemp8279 = {{ 3}, (char*)".r\0"};
nctemp8278=&nctemp8279;
nctempchar1* nctemp8276= nctemp8278;
int nctemp8280=CodeEs(nctemp8274,nctemp8276);
struct tree* nctemp8282= p;
struct nctempchar1 *nctemp8286;
static struct nctempchar1 nctemp8287 = {{ 2}, (char*)"+\0"};
nctemp8286=&nctemp8287;
nctempchar1* nctemp8284= nctemp8286;
int nctemp8288=CodeEs(nctemp8282,nctemp8284);
struct tree* nctemp8290= p;
nctempchar1* nctemp8292= lval;
int nctemp8295=CodeEs(nctemp8290,nctemp8292);
struct tree* nctemp8297= p;
struct nctempchar1 *nctemp8301;
static struct nctempchar1 nctemp8302 = {{ 3}, (char*)".i\0"};
nctemp8301=&nctemp8302;
nctempchar1* nctemp8299= nctemp8301;
int nctemp8303=CodeEs(nctemp8297,nctemp8299);
struct tree* nctemp8305= p;
struct nctempchar1 *nctemp8309;
static struct nctempchar1 nctemp8310 = {{ 2}, (char*)"*\0"};
nctemp8309=&nctemp8310;
nctempchar1* nctemp8307= nctemp8309;
int nctemp8311=CodeEs(nctemp8305,nctemp8307);
struct tree* nctemp8313= p;
nctempchar1* nctemp8315= rval;
int nctemp8318=CodeEs(nctemp8313,nctemp8315);
struct tree* nctemp8320= p;
struct nctempchar1 *nctemp8324;
static struct nctempchar1 nctemp8325 = {{ 3}, (char*)".i\0"};
nctemp8324=&nctemp8325;
nctempchar1* nctemp8322= nctemp8324;
int nctemp8326=CodeEs(nctemp8320,nctemp8322);
struct tree* nctemp8328= p;
struct nctempchar1 *nctemp8332;
static struct nctempchar1 nctemp8333 = {{ 4}, (char*)")/(\0"};
nctemp8332=&nctemp8333;
nctempchar1* nctemp8330= nctemp8332;
int nctemp8334=CodeEs(nctemp8328,nctemp8330);
struct tree* nctemp8336= p;
nctempchar1* nctemp8338= rval;
int nctemp8341=CodeEs(nctemp8336,nctemp8338);
struct tree* nctemp8343= p;
struct nctempchar1 *nctemp8347;
static struct nctempchar1 nctemp8348 = {{ 3}, (char*)".r\0"};
nctemp8347=&nctemp8348;
nctempchar1* nctemp8345= nctemp8347;
int nctemp8349=CodeEs(nctemp8343,nctemp8345);
struct tree* nctemp8351= p;
struct nctempchar1 *nctemp8355;
static struct nctempchar1 nctemp8356 = {{ 2}, (char*)"*\0"};
nctemp8355=&nctemp8356;
nctempchar1* nctemp8353= nctemp8355;
int nctemp8357=CodeEs(nctemp8351,nctemp8353);
struct tree* nctemp8359= p;
nctempchar1* nctemp8361= rval;
int nctemp8364=CodeEs(nctemp8359,nctemp8361);
struct tree* nctemp8366= p;
struct nctempchar1 *nctemp8370;
static struct nctempchar1 nctemp8371 = {{ 3}, (char*)".r\0"};
nctemp8370=&nctemp8371;
nctempchar1* nctemp8368= nctemp8370;
int nctemp8372=CodeEs(nctemp8366,nctemp8368);
struct tree* nctemp8374= p;
struct nctempchar1 *nctemp8378;
static struct nctempchar1 nctemp8379 = {{ 2}, (char*)"+\0"};
nctemp8378=&nctemp8379;
nctempchar1* nctemp8376= nctemp8378;
int nctemp8380=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8382= p;
nctempchar1* nctemp8384= rval;
int nctemp8387=CodeEs(nctemp8382,nctemp8384);
struct tree* nctemp8389= p;
struct nctempchar1 *nctemp8393;
static struct nctempchar1 nctemp8394 = {{ 3}, (char*)".i\0"};
nctemp8393=&nctemp8394;
nctempchar1* nctemp8391= nctemp8393;
int nctemp8395=CodeEs(nctemp8389,nctemp8391);
struct tree* nctemp8397= p;
struct nctempchar1 *nctemp8401;
static struct nctempchar1 nctemp8402 = {{ 2}, (char*)"*\0"};
nctemp8401=&nctemp8402;
nctempchar1* nctemp8399= nctemp8401;
int nctemp8403=CodeEs(nctemp8397,nctemp8399);
struct tree* nctemp8405= p;
nctempchar1* nctemp8407= rval;
int nctemp8410=CodeEs(nctemp8405,nctemp8407);
struct tree* nctemp8412= p;
struct nctempchar1 *nctemp8416;
static struct nctempchar1 nctemp8417 = {{ 3}, (char*)".i\0"};
nctemp8416=&nctemp8417;
nctempchar1* nctemp8414= nctemp8416;
int nctemp8418=CodeEs(nctemp8412,nctemp8414);
struct tree* nctemp8420= p;
struct nctempchar1 *nctemp8424;
static struct nctempchar1 nctemp8425 = {{ 5}, (char*)");\n\0"};
nctemp8424=&nctemp8425;
nctempchar1* nctemp8422= nctemp8424;
int nctemp8426=CodeEs(nctemp8420,nctemp8422);
struct tree* nctemp8428= p;
nctempchar1* nctemp8430= type;
int nctemp8433=CodeEs(nctemp8428,nctemp8430);
struct tree* nctemp8435= p;
struct nctempchar1 *nctemp8439;
static struct nctempchar1 nctemp8440 = {{ 2}, (char*)" \0"};
nctemp8439=&nctemp8440;
nctempchar1* nctemp8437= nctemp8439;
int nctemp8441=CodeEs(nctemp8435,nctemp8437);
struct tree* nctemp8443= p;
nctempchar1* nctemp8445= tempr;
int nctemp8448=CodeEs(nctemp8443,nctemp8445);
struct tree* nctemp8450= p;
struct nctempchar1 *nctemp8454;
static struct nctempchar1 nctemp8455 = {{ 3}, (char*)".i\0"};
nctemp8454=&nctemp8455;
nctempchar1* nctemp8452= nctemp8454;
int nctemp8456=CodeEs(nctemp8450,nctemp8452);
struct tree* nctemp8458= p;
struct nctempchar1 *nctemp8462;
static struct nctempchar1 nctemp8463 = {{ 4}, (char*)" = \0"};
nctemp8462=&nctemp8463;
nctempchar1* nctemp8460= nctemp8462;
int nctemp8464=CodeEs(nctemp8458,nctemp8460);
struct tree* nctemp8466= p;
struct nctempchar1 *nctemp8470;
static struct nctempchar1 nctemp8471 = {{ 2}, (char*)"(\0"};
nctemp8470=&nctemp8471;
nctempchar1* nctemp8468= nctemp8470;
int nctemp8472=CodeEs(nctemp8466,nctemp8468);
struct tree* nctemp8474= p;
nctempchar1* nctemp8476= lval;
int nctemp8479=CodeEs(nctemp8474,nctemp8476);
struct tree* nctemp8481= p;
struct nctempchar1 *nctemp8485;
static struct nctempchar1 nctemp8486 = {{ 3}, (char*)".i\0"};
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
static struct nctempchar1 nctemp8509 = {{ 3}, (char*)".r\0"};
nctemp8508=&nctemp8509;
nctempchar1* nctemp8506= nctemp8508;
int nctemp8510=CodeEs(nctemp8504,nctemp8506);
struct tree* nctemp8512= p;
struct nctempchar1 *nctemp8516;
static struct nctempchar1 nctemp8517 = {{ 2}, (char*)"-\0"};
nctemp8516=&nctemp8517;
nctempchar1* nctemp8514= nctemp8516;
int nctemp8518=CodeEs(nctemp8512,nctemp8514);
struct tree* nctemp8520= p;
nctempchar1* nctemp8522= lval;
int nctemp8525=CodeEs(nctemp8520,nctemp8522);
struct tree* nctemp8527= p;
struct nctempchar1 *nctemp8531;
static struct nctempchar1 nctemp8532 = {{ 3}, (char*)".r\0"};
nctemp8531=&nctemp8532;
nctempchar1* nctemp8529= nctemp8531;
int nctemp8533=CodeEs(nctemp8527,nctemp8529);
struct tree* nctemp8535= p;
struct nctempchar1 *nctemp8539;
static struct nctempchar1 nctemp8540 = {{ 2}, (char*)"*\0"};
nctemp8539=&nctemp8540;
nctempchar1* nctemp8537= nctemp8539;
int nctemp8541=CodeEs(nctemp8535,nctemp8537);
struct tree* nctemp8543= p;
nctempchar1* nctemp8545= rval;
int nctemp8548=CodeEs(nctemp8543,nctemp8545);
struct tree* nctemp8550= p;
struct nctempchar1 *nctemp8554;
static struct nctempchar1 nctemp8555 = {{ 3}, (char*)".i\0"};
nctemp8554=&nctemp8555;
nctempchar1* nctemp8552= nctemp8554;
int nctemp8556=CodeEs(nctemp8550,nctemp8552);
struct tree* nctemp8558= p;
struct nctempchar1 *nctemp8562;
static struct nctempchar1 nctemp8563 = {{ 4}, (char*)")/(\0"};
nctemp8562=&nctemp8563;
nctempchar1* nctemp8560= nctemp8562;
int nctemp8564=CodeEs(nctemp8558,nctemp8560);
struct tree* nctemp8566= p;
nctempchar1* nctemp8568= rval;
int nctemp8571=CodeEs(nctemp8566,nctemp8568);
struct tree* nctemp8573= p;
struct nctempchar1 *nctemp8577;
static struct nctempchar1 nctemp8578 = {{ 3}, (char*)".r\0"};
nctemp8577=&nctemp8578;
nctempchar1* nctemp8575= nctemp8577;
int nctemp8579=CodeEs(nctemp8573,nctemp8575);
struct tree* nctemp8581= p;
struct nctempchar1 *nctemp8585;
static struct nctempchar1 nctemp8586 = {{ 2}, (char*)"*\0"};
nctemp8585=&nctemp8586;
nctempchar1* nctemp8583= nctemp8585;
int nctemp8587=CodeEs(nctemp8581,nctemp8583);
struct tree* nctemp8589= p;
nctempchar1* nctemp8591= rval;
int nctemp8594=CodeEs(nctemp8589,nctemp8591);
struct tree* nctemp8596= p;
struct nctempchar1 *nctemp8600;
static struct nctempchar1 nctemp8601 = {{ 3}, (char*)".r\0"};
nctemp8600=&nctemp8601;
nctempchar1* nctemp8598= nctemp8600;
int nctemp8602=CodeEs(nctemp8596,nctemp8598);
struct tree* nctemp8604= p;
struct nctempchar1 *nctemp8608;
static struct nctempchar1 nctemp8609 = {{ 2}, (char*)"+\0"};
nctemp8608=&nctemp8609;
nctempchar1* nctemp8606= nctemp8608;
int nctemp8610=CodeEs(nctemp8604,nctemp8606);
struct tree* nctemp8612= p;
nctempchar1* nctemp8614= rval;
int nctemp8617=CodeEs(nctemp8612,nctemp8614);
struct tree* nctemp8619= p;
struct nctempchar1 *nctemp8623;
static struct nctempchar1 nctemp8624 = {{ 3}, (char*)".i\0"};
nctemp8623=&nctemp8624;
nctempchar1* nctemp8621= nctemp8623;
int nctemp8625=CodeEs(nctemp8619,nctemp8621);
struct tree* nctemp8627= p;
struct nctempchar1 *nctemp8631;
static struct nctempchar1 nctemp8632 = {{ 2}, (char*)"*\0"};
nctemp8631=&nctemp8632;
nctempchar1* nctemp8629= nctemp8631;
int nctemp8633=CodeEs(nctemp8627,nctemp8629);
struct tree* nctemp8635= p;
nctempchar1* nctemp8637= rval;
int nctemp8640=CodeEs(nctemp8635,nctemp8637);
struct tree* nctemp8642= p;
struct nctempchar1 *nctemp8646;
static struct nctempchar1 nctemp8647 = {{ 3}, (char*)".i\0"};
nctemp8646=&nctemp8647;
nctempchar1* nctemp8644= nctemp8646;
int nctemp8648=CodeEs(nctemp8642,nctemp8644);
struct tree* nctemp8650= p;
struct nctempchar1 *nctemp8654;
static struct nctempchar1 nctemp8655 = {{ 5}, (char*)");\n\0"};
nctemp8654=&nctemp8655;
nctempchar1* nctemp8652= nctemp8654;
int nctemp8656=CodeEs(nctemp8650,nctemp8652);
}
}
}
}
else{
struct tree* nctemp8658= p;
nctempchar1* nctemp8660= type;
int nctemp8663=CodeEs(nctemp8658,nctemp8660);
struct tree* nctemp8665= p;
struct nctempchar1 *nctemp8669;
static struct nctempchar1 nctemp8670 = {{ 2}, (char*)" \0"};
nctemp8669=&nctemp8670;
nctempchar1* nctemp8667= nctemp8669;
int nctemp8671=CodeEs(nctemp8665,nctemp8667);
struct tree* nctemp8673= p;
nctempchar1* nctemp8675= tempr;
int nctemp8678=CodeEs(nctemp8673,nctemp8675);
struct tree* nctemp8680= p;
struct nctempchar1 *nctemp8684;
static struct nctempchar1 nctemp8685 = {{ 4}, (char*)" = \0"};
nctemp8684=&nctemp8685;
nctempchar1* nctemp8682= nctemp8684;
int nctemp8686=CodeEs(nctemp8680,nctemp8682);
struct tree* nctemp8688= p;
nctempchar1* nctemp8690= lval;
int nctemp8693=CodeEs(nctemp8688,nctemp8690);
struct tree* nctemp8695= p;
struct nctempchar1 *nctemp8699;
static struct nctempchar1 nctemp8700 = {{ 2}, (char*)" \0"};
nctemp8699=&nctemp8700;
nctempchar1* nctemp8697= nctemp8699;
int nctemp8701=CodeEs(nctemp8695,nctemp8697);
struct tree* nctemp8703= p;
struct tree* nctemp8707= p;
nctempchar1* nctemp8709=PtreeGetdef(nctemp8707);
nctempchar1* nctemp8705= nctemp8709;
int nctemp8710=CodeEs(nctemp8703,nctemp8705);
struct tree* nctemp8712= p;
struct nctempchar1 *nctemp8716;
static struct nctempchar1 nctemp8717 = {{ 2}, (char*)" \0"};
nctemp8716=&nctemp8717;
nctempchar1* nctemp8714= nctemp8716;
int nctemp8718=CodeEs(nctemp8712,nctemp8714);
struct tree* nctemp8720= p;
nctempchar1* nctemp8722= rval;
int nctemp8725=CodeEs(nctemp8720,nctemp8722);
struct tree* nctemp8727= p;
struct nctempchar1 *nctemp8731;
static struct nctempchar1 nctemp8732 = {{ 4}, (char*)";\n\0"};
nctemp8731=&nctemp8732;
nctempchar1* nctemp8729= nctemp8731;
int nctemp8733=CodeEs(nctemp8727,nctemp8729);
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
struct tree* nctemp8741= p;
nctempchar1* nctemp8743=PtreeGetname(nctemp8741);
nctempchar1* nctemp8739= nctemp8743;
struct nctempchar1 *nctemp8746;
static struct nctempchar1 nctemp8747 = {{ 8}, (char*)"binexpr\0"};
nctemp8746=&nctemp8747;
nctempchar1* nctemp8744= nctemp8746;
int nctemp8748=LibeStrcmp(nctemp8739,nctemp8744);
int nctemp8736 = (nctemp8748 ==1);
if(nctemp8736)
{
struct tree* nctemp8755= p;
nctempchar1* nctemp8757=PtreeGetype(nctemp8755);
type=nctemp8757;
nctempchar1* nctemp8763=CodeMktemp();
tempr=nctemp8763;
nctempchar1* nctemp8769=CodeMktemp();
tempi=nctemp8769;
struct tree* nctemp8774= p;
struct tree* nctemp8776=PtreeMvchild(nctemp8774);
np =nctemp8776;
struct tree* nctemp8782= np;
nctempchar1* nctemp8784=CodeUnexpr(nctemp8782);
lval=nctemp8784;
struct tree* nctemp8792= np;
struct tree* nctemp8794=PtreeMvsister(nctemp8792);
struct tree* nctemp8790= nctemp8794;
nctempchar1* nctemp8795=CodeUnexpr(nctemp8790);
rval=nctemp8795;
struct tree* nctemp8810= p;
nctempchar1* nctemp8812=PtreeGetdef(nctemp8810);
nctempchar1* nctemp8808= nctemp8812;
struct nctempchar1 *nctemp8815;
static struct nctempchar1 nctemp8816 = {{ 2}, (char*)"+\0"};
nctemp8815=&nctemp8816;
nctempchar1* nctemp8813= nctemp8815;
int nctemp8817=LibeStrcmp(nctemp8808,nctemp8813);
int nctemp8805 = (nctemp8817 ==1);
struct tree* nctemp8825= p;
nctempchar1* nctemp8827=PtreeGetdef(nctemp8825);
nctempchar1* nctemp8823= nctemp8827;
struct nctempchar1 *nctemp8830;
static struct nctempchar1 nctemp8831 = {{ 2}, (char*)"-\0"};
nctemp8830=&nctemp8831;
nctempchar1* nctemp8828= nctemp8830;
int nctemp8832=LibeStrcmp(nctemp8823,nctemp8828);
int nctemp8820 = (nctemp8832 ==1);
int nctemp8802 = (nctemp8805 || nctemp8820);
struct tree* nctemp8840= p;
nctempchar1* nctemp8842=PtreeGetdef(nctemp8840);
nctempchar1* nctemp8838= nctemp8842;
struct nctempchar1 *nctemp8845;
static struct nctempchar1 nctemp8846 = {{ 2}, (char*)"*\0"};
nctemp8845=&nctemp8846;
nctempchar1* nctemp8843= nctemp8845;
int nctemp8847=LibeStrcmp(nctemp8838,nctemp8843);
int nctemp8835 = (nctemp8847 ==1);
int nctemp8799 = (nctemp8802 || nctemp8835);
struct tree* nctemp8855= p;
nctempchar1* nctemp8857=PtreeGetdef(nctemp8855);
nctempchar1* nctemp8853= nctemp8857;
struct nctempchar1 *nctemp8860;
static struct nctempchar1 nctemp8861 = {{ 2}, (char*)"/\0"};
nctemp8860=&nctemp8861;
nctempchar1* nctemp8858= nctemp8860;
int nctemp8862=LibeStrcmp(nctemp8853,nctemp8858);
int nctemp8850 = (nctemp8862 ==1);
int nctemp8796 = (nctemp8799 || nctemp8850);
if(nctemp8796)
{
struct tree* nctemp8865= p;
nctempchar1* nctemp8867= lval;
nctempchar1* nctemp8870= rval;
nctempchar1* nctemp8873=CodeAddexpr(nctemp8865,nctemp8867,nctemp8870);
return nctemp8873;
}
else{
struct tree* nctemp8879= p;
nctempchar1* nctemp8881=PtreeGetdef(nctemp8879);
nctempchar1* nctemp8877= nctemp8881;
struct nctempchar1 *nctemp8884;
static struct nctempchar1 nctemp8885 = {{ 2}, (char*)"=\0"};
nctemp8884=&nctemp8885;
nctempchar1* nctemp8882= nctemp8884;
int nctemp8886=LibeStrcmp(nctemp8877,nctemp8882);
int nctemp8874 = (nctemp8886 ==1);
if(nctemp8874)
{
struct tree* nctemp8899= p;
nctempchar1* nctemp8901=PtreeGetype(nctemp8899);
nctempchar1* nctemp8897= nctemp8901;
struct nctempchar1 *nctemp8904;
static struct nctempchar1 nctemp8905 = {{ 8}, (char*)"complex\0"};
nctemp8904=&nctemp8905;
nctempchar1* nctemp8902= nctemp8904;
int nctemp8906=LibeStrcmp(nctemp8897,nctemp8902);
int nctemp8894 = (nctemp8906 ==1);
struct tree* nctemp8914= p;
nctempchar1* nctemp8916=PtreeGetref(nctemp8914);
nctempchar1* nctemp8912= nctemp8916;
struct nctempchar1 *nctemp8919;
static struct nctempchar1 nctemp8920 = {{ 5}, (char*)"aref\0"};
nctemp8919=&nctemp8920;
nctempchar1* nctemp8917= nctemp8919;
int nctemp8921=LibeStrcmp(nctemp8912,nctemp8917);
int nctemp8909 = (nctemp8921 ==0);
int nctemp8891 = (nctemp8894 && nctemp8909);
struct tree* nctemp8929= p;
nctempchar1* nctemp8931=PtreeGetref(nctemp8929);
nctempchar1* nctemp8927= nctemp8931;
struct nctempchar1 *nctemp8934;
static struct nctempchar1 nctemp8935 = {{ 5}, (char*)"sref\0"};
nctemp8934=&nctemp8935;
nctempchar1* nctemp8932= nctemp8934;
int nctemp8936=LibeStrcmp(nctemp8927,nctemp8932);
int nctemp8924 = (nctemp8936 ==0);
int nctemp8888 = (nctemp8891 && nctemp8924);
if(nctemp8888)
{
struct tree* nctemp8939= p;
nctempchar1* nctemp8941= lval;
int nctemp8944=CodeEs(nctemp8939,nctemp8941);
struct tree* nctemp8946= p;
struct nctempchar1 *nctemp8950;
static struct nctempchar1 nctemp8951 = {{ 4}, (char*)".r \0"};
nctemp8950=&nctemp8951;
nctempchar1* nctemp8948= nctemp8950;
int nctemp8952=CodeEs(nctemp8946,nctemp8948);
struct tree* nctemp8954= p;
struct nctempchar1 *nctemp8958;
static struct nctempchar1 nctemp8959 = {{ 2}, (char*)"=\0"};
nctemp8958=&nctemp8959;
nctempchar1* nctemp8956= nctemp8958;
int nctemp8960=CodeEs(nctemp8954,nctemp8956);
struct tree* nctemp8962= p;
nctempchar1* nctemp8964= rval;
int nctemp8967=CodeEs(nctemp8962,nctemp8964);
struct tree* nctemp8969= p;
struct nctempchar1 *nctemp8973;
static struct nctempchar1 nctemp8974 = {{ 3}, (char*)".r\0"};
nctemp8973=&nctemp8974;
nctempchar1* nctemp8971= nctemp8973;
int nctemp8975=CodeEs(nctemp8969,nctemp8971);
struct tree* nctemp8977= p;
struct nctempchar1 *nctemp8981;
static struct nctempchar1 nctemp8982 = {{ 4}, (char*)";\n\0"};
nctemp8981=&nctemp8982;
nctempchar1* nctemp8979= nctemp8981;
int nctemp8983=CodeEs(nctemp8977,nctemp8979);
struct tree* nctemp8985= p;
nctempchar1* nctemp8987= lval;
int nctemp8990=CodeEs(nctemp8985,nctemp8987);
struct tree* nctemp8992= p;
struct nctempchar1 *nctemp8996;
static struct nctempchar1 nctemp8997 = {{ 3}, (char*)".i\0"};
nctemp8996=&nctemp8997;
nctempchar1* nctemp8994= nctemp8996;
int nctemp8998=CodeEs(nctemp8992,nctemp8994);
struct tree* nctemp9000= p;
struct nctempchar1 *nctemp9004;
static struct nctempchar1 nctemp9005 = {{ 2}, (char*)"=\0"};
nctemp9004=&nctemp9005;
nctempchar1* nctemp9002= nctemp9004;
int nctemp9006=CodeEs(nctemp9000,nctemp9002);
struct tree* nctemp9008= p;
nctempchar1* nctemp9010= rval;
int nctemp9013=CodeEs(nctemp9008,nctemp9010);
struct tree* nctemp9015= p;
struct nctempchar1 *nctemp9019;
static struct nctempchar1 nctemp9020 = {{ 3}, (char*)".i\0"};
nctemp9019=&nctemp9020;
nctempchar1* nctemp9017= nctemp9019;
int nctemp9021=CodeEs(nctemp9015,nctemp9017);
struct tree* nctemp9023= p;
struct nctempchar1 *nctemp9027;
static struct nctempchar1 nctemp9028 = {{ 4}, (char*)";\n\0"};
nctemp9027=&nctemp9028;
nctempchar1* nctemp9025= nctemp9027;
int nctemp9029=CodeEs(nctemp9023,nctemp9025);
return lval;
}
else{
struct tree* nctemp9037= np;
nctempchar1* nctemp9039=PtreeGetref(nctemp9037);
nctempchar1* nctemp9035= nctemp9039;
struct nctempchar1 *nctemp9042;
static struct nctempchar1 nctemp9043 = {{ 5}, (char*)"aref\0"};
nctemp9042=&nctemp9043;
nctempchar1* nctemp9040= nctemp9042;
int nctemp9044=LibeStrcmp(nctemp9035,nctemp9040);
int nctemp9032 = (nctemp9044 ==1);
if(nctemp9032)
{
struct tree* nctemp9053= np;
struct tree* nctemp9055=PtreeMvsister(nctemp9053);
struct tree* nctemp9051= nctemp9055;
nctempchar1* nctemp9056=PtreeGetname(nctemp9051);
nctempchar1* nctemp9049= nctemp9056;
struct nctempchar1 *nctemp9059;
static struct nctempchar1 nctemp9060 = {{ 10}, (char*)"iconstant\0"};
nctemp9059=&nctemp9060;
nctempchar1* nctemp9057= nctemp9059;
int nctemp9061=LibeStrcmp(nctemp9049,nctemp9057);
struct tree* nctemp9067= np;
struct tree* nctemp9069=PtreeMvsister(nctemp9067);
struct tree* nctemp9065= nctemp9069;
nctempchar1* nctemp9070=PtreeGetdef(nctemp9065);
nctempchar1* nctemp9063= nctemp9070;
struct nctempchar1 *nctemp9073;
static struct nctempchar1 nctemp9074 = {{ 2}, (char*)"0\0"};
nctemp9073=&nctemp9074;
nctempchar1* nctemp9071= nctemp9073;
int nctemp9075=LibeStrcmp(nctemp9063,nctemp9071);
int nctemp9046 = (nctemp9061 && nctemp9075);
if(nctemp9046)
{
struct tree* nctemp9077= p;
nctempchar1* nctemp9079= lval;
int nctemp9082=CodeEs(nctemp9077,nctemp9079);
struct tree* nctemp9084= p;
struct nctempchar1 *nctemp9088;
static struct nctempchar1 nctemp9089 = {{ 3}, (char*)"=(\0"};
nctemp9088=&nctemp9089;
nctempchar1* nctemp9086= nctemp9088;
int nctemp9090=CodeEs(nctemp9084,nctemp9086);
struct tree* nctemp9092= p;
nctempchar1* nctemp9094= rval;
int nctemp9097=CodeEs(nctemp9092,nctemp9094);
struct tree* nctemp9099= p;
struct nctempchar1 *nctemp9103;
static struct nctempchar1 nctemp9104 = {{ 5}, (char*)");\n\0"};
nctemp9103=&nctemp9104;
nctempchar1* nctemp9101= nctemp9103;
int nctemp9105=CodeEs(nctemp9099,nctemp9101);
return lval;
}
else{
struct tree* nctemp9109= p;
nctempchar1* nctemp9111= lval;
int nctemp9114=CodeEs(nctemp9109,nctemp9111);
struct tree* nctemp9116= p;
struct nctempchar1 *nctemp9120;
static struct nctempchar1 nctemp9121 = {{ 2}, (char*)"=\0"};
nctemp9120=&nctemp9121;
nctempchar1* nctemp9118= nctemp9120;
int nctemp9122=CodeEs(nctemp9116,nctemp9118);
struct tree* nctemp9124= p;
nctempchar1* nctemp9126= rval;
int nctemp9129=CodeEs(nctemp9124,nctemp9126);
struct tree* nctemp9131= p;
struct nctempchar1 *nctemp9135;
static struct nctempchar1 nctemp9136 = {{ 4}, (char*)";\n\0"};
nctemp9135=&nctemp9136;
nctempchar1* nctemp9133= nctemp9135;
int nctemp9137=CodeEs(nctemp9131,nctemp9133);
return lval;
}
}
else{
struct tree* nctemp9141= p;
nctempchar1* nctemp9143= lval;
int nctemp9146=CodeEs(nctemp9141,nctemp9143);
struct tree* nctemp9148= p;
struct nctempchar1 *nctemp9152;
static struct nctempchar1 nctemp9153 = {{ 2}, (char*)" \0"};
nctemp9152=&nctemp9153;
nctempchar1* nctemp9150= nctemp9152;
int nctemp9154=CodeEs(nctemp9148,nctemp9150);
struct tree* nctemp9156= p;
struct nctempchar1 *nctemp9160;
static struct nctempchar1 nctemp9161 = {{ 2}, (char*)"=\0"};
nctemp9160=&nctemp9161;
nctempchar1* nctemp9158= nctemp9160;
int nctemp9162=CodeEs(nctemp9156,nctemp9158);
struct tree* nctemp9164= p;
nctempchar1* nctemp9166= rval;
int nctemp9169=CodeEs(nctemp9164,nctemp9166);
struct tree* nctemp9171= p;
struct nctempchar1 *nctemp9175;
static struct nctempchar1 nctemp9176 = {{ 4}, (char*)";\n\0"};
nctemp9175=&nctemp9176;
nctempchar1* nctemp9173= nctemp9175;
int nctemp9177=CodeEs(nctemp9171,nctemp9173);
return lval;
}
}
}
else{
struct tree* nctemp9188= p;
nctempchar1* nctemp9190=PtreeGetdef(nctemp9188);
nctempchar1* nctemp9186= nctemp9190;
struct nctempchar1 *nctemp9193;
static struct nctempchar1 nctemp9194 = {{ 3}, (char*)"==\0"};
nctemp9193=&nctemp9194;
nctempchar1* nctemp9191= nctemp9193;
int nctemp9195=LibeStrcmp(nctemp9186,nctemp9191);
int nctemp9183 = (nctemp9195 ==1);
struct tree* nctemp9203= p;
nctempchar1* nctemp9205=PtreeGetdef(nctemp9203);
nctempchar1* nctemp9201= nctemp9205;
struct nctempchar1 *nctemp9208;
static struct nctempchar1 nctemp9209 = {{ 3}, (char*)"!=\0"};
nctemp9208=&nctemp9209;
nctempchar1* nctemp9206= nctemp9208;
int nctemp9210=LibeStrcmp(nctemp9201,nctemp9206);
int nctemp9198 = (nctemp9210 ==1);
int nctemp9180 = (nctemp9183 || nctemp9198);
if(nctemp9180)
{
struct tree* nctemp9217= np;
nctempchar1* nctemp9219=PtreeGetref(nctemp9217);
nctempchar1* nctemp9215= nctemp9219;
struct nctempchar1 *nctemp9222;
static struct nctempchar1 nctemp9223 = {{ 5}, (char*)"aref\0"};
nctemp9222=&nctemp9223;
nctempchar1* nctemp9220= nctemp9222;
int nctemp9224=LibeStrcmp(nctemp9215,nctemp9220);
int nctemp9212 = (nctemp9224 ==1);
if(nctemp9212)
{
sp = np;
struct tree* nctemp9233= np;
struct tree* nctemp9235=PtreeMvsister(nctemp9233);
struct tree* nctemp9231= nctemp9235;
nctempchar1* nctemp9236=PtreeGetname(nctemp9231);
nctempchar1* nctemp9229= nctemp9236;
struct nctempchar1 *nctemp9239;
static struct nctempchar1 nctemp9240 = {{ 10}, (char*)"iconstant\0"};
nctemp9239=&nctemp9240;
nctempchar1* nctemp9237= nctemp9239;
int nctemp9241=LibeStrcmp(nctemp9229,nctemp9237);
struct tree* nctemp9247= np;
struct tree* nctemp9249=PtreeMvsister(nctemp9247);
struct tree* nctemp9245= nctemp9249;
nctempchar1* nctemp9250=PtreeGetdef(nctemp9245);
nctempchar1* nctemp9243= nctemp9250;
struct nctempchar1 *nctemp9253;
static struct nctempchar1 nctemp9254 = {{ 2}, (char*)"0\0"};
nctemp9253=&nctemp9254;
nctempchar1* nctemp9251= nctemp9253;
int nctemp9255=LibeStrcmp(nctemp9243,nctemp9251);
int nctemp9226 = (nctemp9241 && nctemp9255);
if(nctemp9226)
{
struct tree* nctemp9257= p;
struct nctempchar1 *nctemp9261;
static struct nctempchar1 nctemp9262 = {{ 7}, (char*)"nctemp\0"};
nctemp9261=&nctemp9262;
nctempchar1* nctemp9259= nctemp9261;
int nctemp9263=CodeEs(nctemp9257,nctemp9259);
struct tree* nctemp9265= p;
struct tree* nctemp9269= sp;
nctempchar1* nctemp9271=PtreeGetype(nctemp9269);
nctempchar1* nctemp9267= nctemp9271;
int nctemp9272=CodeEs(nctemp9265,nctemp9267);
struct tree* nctemp9276= sp;
int nctemp9278=PtreeGetrank(nctemp9276);
int nctemp9274= nctemp9278;
int nctemp9279=CodeEd(nctemp9274);
struct tree* nctemp9281= p;
struct nctempchar1 *nctemp9285;
static struct nctempchar1 nctemp9286 = {{ 3}, (char*)" *\0"};
nctemp9285=&nctemp9286;
nctempchar1* nctemp9283= nctemp9285;
int nctemp9287=CodeEs(nctemp9281,nctemp9283);
struct tree* nctemp9289= p;
nctempchar1* nctemp9291= tempi;
int nctemp9294=CodeEs(nctemp9289,nctemp9291);
struct tree* nctemp9296= p;
struct nctempchar1 *nctemp9300;
static struct nctempchar1 nctemp9301 = {{ 3}, (char*)" =\0"};
nctemp9300=&nctemp9301;
nctempchar1* nctemp9298= nctemp9300;
int nctemp9302=CodeEs(nctemp9296,nctemp9298);
struct tree* nctemp9304= p;
nctempchar1* nctemp9306= lval;
int nctemp9309=CodeEs(nctemp9304,nctemp9306);
struct tree* nctemp9311= p;
struct nctempchar1 *nctemp9315;
static struct nctempchar1 nctemp9316 = {{ 4}, (char*)";\n\0"};
nctemp9315=&nctemp9316;
nctempchar1* nctemp9313= nctemp9315;
int nctemp9317=CodeEs(nctemp9311,nctemp9313);
struct tree* nctemp9319= p;
nctempchar1* nctemp9321= type;
int nctemp9324=CodeEs(nctemp9319,nctemp9321);
struct tree* nctemp9326= p;
struct nctempchar1 *nctemp9330;
static struct nctempchar1 nctemp9331 = {{ 2}, (char*)" \0"};
nctemp9330=&nctemp9331;
nctempchar1* nctemp9328= nctemp9330;
int nctemp9332=CodeEs(nctemp9326,nctemp9328);
struct tree* nctemp9334= p;
nctempchar1* nctemp9336= tempr;
int nctemp9339=CodeEs(nctemp9334,nctemp9336);
struct tree* nctemp9341= p;
struct nctempchar1 *nctemp9345;
static struct nctempchar1 nctemp9346 = {{ 4}, (char*)" =(\0"};
nctemp9345=&nctemp9346;
nctempchar1* nctemp9343= nctemp9345;
int nctemp9347=CodeEs(nctemp9341,nctemp9343);
struct tree* nctemp9349= p;
nctempchar1* nctemp9351= tempi;
int nctemp9354=CodeEs(nctemp9349,nctemp9351);
struct tree* nctemp9356= p;
struct tree* nctemp9360= p;
nctempchar1* nctemp9362=PtreeGetdef(nctemp9360);
nctempchar1* nctemp9358= nctemp9362;
int nctemp9363=CodeEs(nctemp9356,nctemp9358);
struct tree* nctemp9365= p;
nctempchar1* nctemp9367= rval;
int nctemp9370=CodeEs(nctemp9365,nctemp9367);
struct tree* nctemp9372= p;
struct nctempchar1 *nctemp9376;
static struct nctempchar1 nctemp9377 = {{ 5}, (char*)");\n\0"};
nctemp9376=&nctemp9377;
nctempchar1* nctemp9374= nctemp9376;
int nctemp9378=CodeEs(nctemp9372,nctemp9374);
return tempr;
}
else{
struct tree* nctemp9382= p;
nctempchar1* nctemp9384= type;
int nctemp9387=CodeEs(nctemp9382,nctemp9384);
struct tree* nctemp9389= p;
struct nctempchar1 *nctemp9393;
static struct nctempchar1 nctemp9394 = {{ 2}, (char*)" \0"};
nctemp9393=&nctemp9394;
nctempchar1* nctemp9391= nctemp9393;
int nctemp9395=CodeEs(nctemp9389,nctemp9391);
struct tree* nctemp9397= p;
nctempchar1* nctemp9399= tempr;
int nctemp9402=CodeEs(nctemp9397,nctemp9399);
struct tree* nctemp9404= p;
struct nctempchar1 *nctemp9408;
static struct nctempchar1 nctemp9409 = {{ 5}, (char*)" = (\0"};
nctemp9408=&nctemp9409;
nctempchar1* nctemp9406= nctemp9408;
int nctemp9410=CodeEs(nctemp9404,nctemp9406);
struct tree* nctemp9412= p;
nctempchar1* nctemp9414= lval;
int nctemp9417=CodeEs(nctemp9412,nctemp9414);
struct tree* nctemp9419= p;
struct tree* nctemp9423= p;
nctempchar1* nctemp9425=PtreeGetdef(nctemp9423);
nctempchar1* nctemp9421= nctemp9425;
int nctemp9426=CodeEs(nctemp9419,nctemp9421);
struct tree* nctemp9428= p;
nctempchar1* nctemp9430= rval;
int nctemp9433=CodeEs(nctemp9428,nctemp9430);
struct tree* nctemp9435= p;
struct nctempchar1 *nctemp9439;
static struct nctempchar1 nctemp9440 = {{ 5}, (char*)");\n\0"};
nctemp9439=&nctemp9440;
nctempchar1* nctemp9437= nctemp9439;
int nctemp9441=CodeEs(nctemp9435,nctemp9437);
return lval;
}
}
else{
struct tree* nctemp9445= p;
nctempchar1* nctemp9447= type;
int nctemp9450=CodeEs(nctemp9445,nctemp9447);
struct tree* nctemp9452= p;
struct nctempchar1 *nctemp9456;
static struct nctempchar1 nctemp9457 = {{ 2}, (char*)" \0"};
nctemp9456=&nctemp9457;
nctempchar1* nctemp9454= nctemp9456;
int nctemp9458=CodeEs(nctemp9452,nctemp9454);
struct tree* nctemp9460= p;
nctempchar1* nctemp9462= tempr;
int nctemp9465=CodeEs(nctemp9460,nctemp9462);
struct tree* nctemp9467= p;
struct nctempchar1 *nctemp9471;
static struct nctempchar1 nctemp9472 = {{ 5}, (char*)" = (\0"};
nctemp9471=&nctemp9472;
nctempchar1* nctemp9469= nctemp9471;
int nctemp9473=CodeEs(nctemp9467,nctemp9469);
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
struct tree* nctemp9494= p;
nctempchar1* nctemp9496=PtreeGetdef(nctemp9494);
nctempchar1* nctemp9492= nctemp9496;
int nctemp9497=CodeEs(nctemp9490,nctemp9492);
struct tree* nctemp9499= p;
nctempchar1* nctemp9501= rval;
int nctemp9504=CodeEs(nctemp9499,nctemp9501);
struct tree* nctemp9506= p;
struct nctempchar1 *nctemp9510;
static struct nctempchar1 nctemp9511 = {{ 5}, (char*)");\n\0"};
nctemp9510=&nctemp9511;
nctempchar1* nctemp9508= nctemp9510;
int nctemp9512=CodeEs(nctemp9506,nctemp9508);
return tempr;
}
}
else{
struct tree* nctemp9516= p;
nctempchar1* nctemp9518= type;
int nctemp9521=CodeEs(nctemp9516,nctemp9518);
struct tree* nctemp9523= p;
struct nctempchar1 *nctemp9527;
static struct nctempchar1 nctemp9528 = {{ 2}, (char*)" \0"};
nctemp9527=&nctemp9528;
nctempchar1* nctemp9525= nctemp9527;
int nctemp9529=CodeEs(nctemp9523,nctemp9525);
struct tree* nctemp9531= p;
nctempchar1* nctemp9533= tempr;
int nctemp9536=CodeEs(nctemp9531,nctemp9533);
struct tree* nctemp9538= p;
struct nctempchar1 *nctemp9542;
static struct nctempchar1 nctemp9543 = {{ 5}, (char*)" = (\0"};
nctemp9542=&nctemp9543;
nctempchar1* nctemp9540= nctemp9542;
int nctemp9544=CodeEs(nctemp9538,nctemp9540);
struct tree* nctemp9546= p;
nctempchar1* nctemp9548= lval;
int nctemp9551=CodeEs(nctemp9546,nctemp9548);
struct tree* nctemp9553= p;
struct nctempchar1 *nctemp9557;
static struct nctempchar1 nctemp9558 = {{ 2}, (char*)" \0"};
nctemp9557=&nctemp9558;
nctempchar1* nctemp9555= nctemp9557;
int nctemp9559=CodeEs(nctemp9553,nctemp9555);
struct tree* nctemp9561= p;
struct tree* nctemp9565= p;
nctempchar1* nctemp9567=PtreeGetdef(nctemp9565);
nctempchar1* nctemp9563= nctemp9567;
int nctemp9568=CodeEs(nctemp9561,nctemp9563);
struct tree* nctemp9570= p;
struct nctempchar1 *nctemp9574;
static struct nctempchar1 nctemp9575 = {{ 2}, (char*)" \0"};
nctemp9574=&nctemp9575;
nctempchar1* nctemp9572= nctemp9574;
int nctemp9576=CodeEs(nctemp9570,nctemp9572);
struct tree* nctemp9578= p;
nctempchar1* nctemp9580= rval;
int nctemp9583=CodeEs(nctemp9578,nctemp9580);
struct tree* nctemp9585= p;
struct nctempchar1 *nctemp9589;
static struct nctempchar1 nctemp9590 = {{ 5}, (char*)");\n\0"};
nctemp9589=&nctemp9590;
nctempchar1* nctemp9587= nctemp9589;
int nctemp9591=CodeEs(nctemp9585,nctemp9587);
return tempr;
}
}
}
}
else{
struct tree* nctemp9595= p;
nctempchar1* nctemp9597=CodeUnexpr(nctemp9595);
return nctemp9597;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9599= p;
nctempchar1* nctemp9601= name;
int nctemp9604=CodeEs(nctemp9599,nctemp9601);
struct tree* nctemp9606= p;
struct nctempchar1 *nctemp9610;
static struct nctempchar1 nctemp9611 = {{ 5}, (char*)"->d[\0"};
nctemp9610=&nctemp9611;
nctempchar1* nctemp9608= nctemp9610;
int nctemp9612=CodeEs(nctemp9606,nctemp9608);
int nctemp9614= j;
int nctemp9616=CodeEd(nctemp9614);
struct tree* nctemp9618= p;
struct nctempchar1 *nctemp9622;
static struct nctempchar1 nctemp9623 = {{ 2}, (char*)"]\0"};
nctemp9622=&nctemp9623;
nctempchar1* nctemp9620= nctemp9622;
int nctemp9624=CodeEs(nctemp9618,nctemp9620);
struct tree* nctemp9626= p;
struct nctempchar1 *nctemp9630;
static struct nctempchar1 nctemp9631 = {{ 2}, (char*)"*\0"};
nctemp9630=&nctemp9631;
nctempchar1* nctemp9628= nctemp9630;
int nctemp9632=CodeEs(nctemp9626,nctemp9628);
}
return 1;
}
int CodeSarray (struct tree* p,nctempchar1 *qname)
{
struct symbol* tp;
struct tree* sp;
struct tree* q;
nctempchar1 *name;
int rank;
int i;
struct tree* nctemp9639= p;
nctempchar1* nctemp9641=PtreeGetdef(nctemp9639);
name=nctemp9641;
nctempchar1* nctemp9646= name;
struct symbol* nctemp9649=SymLook(nctemp9646);
tp =nctemp9649;
int nctemp9650 = (tp ==0);
if(nctemp9650)
{
nctempchar1* nctemp9655= name;
int nctemp9658=CodeError(nctemp9655);
}
struct symbol* nctemp9663= tp;
int nctemp9665=SymGetrank(nctemp9663);
rank =nctemp9665;
struct tree* nctemp9670= p;
struct tree* nctemp9672=PtreeMvchild(nctemp9670);
sp =nctemp9672;
int nctemp9673 = (sp ==0);
if(nctemp9673)
{
struct tree* nctemp9678= p;
struct tree* nctemp9682= p;
nctempchar1* nctemp9684=PtreeGetdef(nctemp9682);
nctempchar1* nctemp9680= nctemp9684;
int nctemp9685=CodeEs(nctemp9678,nctemp9680);
return 1;
}
else{
struct tree* nctemp9692= sp;
nctempchar1* nctemp9694=PtreeGetname(nctemp9692);
nctempchar1* nctemp9690= nctemp9694;
struct nctempchar1 *nctemp9697;
static struct nctempchar1 nctemp9698 = {{ 9}, (char*)"exprlist\0"};
nctemp9697=&nctemp9698;
nctempchar1* nctemp9695= nctemp9697;
int nctemp9699=LibeStrcmp(nctemp9690,nctemp9695);
int nctemp9687 = (nctemp9699 ==0);
if(nctemp9687)
{
struct tree* nctemp9702= p;
struct tree* nctemp9706= p;
nctempchar1* nctemp9708=PtreeGetdef(nctemp9706);
nctempchar1* nctemp9704= nctemp9708;
int nctemp9709=CodeEs(nctemp9702,nctemp9704);
return 1;
}
}
p = sp;
struct tree* nctemp9715= p;
struct tree* nctemp9717=PtreeMvchild(nctemp9715);
p =nctemp9717;
struct tree* nctemp9719= p;
nctempchar1* nctemp9721= name;
int nctemp9724=CodeEs(nctemp9719,nctemp9721);
struct tree* nctemp9726= p;
struct nctempchar1 *nctemp9730;
static struct nctempchar1 nctemp9731 = {{ 4}, (char*)"->a\0"};
nctemp9730=&nctemp9731;
nctempchar1* nctemp9728= nctemp9730;
int nctemp9732=CodeEs(nctemp9726,nctemp9728);
struct tree* nctemp9734= p;
struct nctempchar1 *nctemp9738;
static struct nctempchar1 nctemp9739 = {{ 2}, (char*)"[\0"};
nctemp9738=&nctemp9739;
nctempchar1* nctemp9736= nctemp9738;
int nctemp9740=CodeEs(nctemp9734,nctemp9736);
q = p;
nctempchar1 *nctemp9742 =qname;
int nctemp9741 =(nctemp9742!=0);
if(nctemp9741)
{
nctempchar1* nctemp9751= qname;
nctempchar1* nctemp9754= name;
nctempchar1* nctemp9757=LibeStradd(nctemp9751,nctemp9754);
qname=nctemp9757;
}
else{
nctempchar1* nctemp9763= name;
nctempchar1* nctemp9766=LibeStrsave(nctemp9763);
qname=nctemp9766;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9767 = (i ==0);
if(nctemp9767)
{
struct tree* nctemp9772= q;
int nctemp9774=CodeSexpr(nctemp9772);
}
else{
struct tree* nctemp9779= q;
struct tree* nctemp9781=PtreeMvsister(nctemp9779);
q =nctemp9781;
struct tree* nctemp9783= p;
struct nctempchar1 *nctemp9787;
static struct nctempchar1 nctemp9788 = {{ 2}, (char*)"+\0"};
nctemp9787=&nctemp9788;
nctempchar1* nctemp9785= nctemp9787;
int nctemp9789=CodeEs(nctemp9783,nctemp9785);
struct tree* nctemp9791= p;
nctempchar1* nctemp9793= qname;
int nctemp9801 = i + 1;
int nctemp9796= nctemp9801;
int nctemp9802=CodeDimprod(nctemp9791,nctemp9793,nctemp9796);
struct tree* nctemp9804= p;
struct nctempchar1 *nctemp9808;
static struct nctempchar1 nctemp9809 = {{ 2}, (char*)"(\0"};
nctemp9808=&nctemp9809;
nctempchar1* nctemp9806= nctemp9808;
int nctemp9810=CodeEs(nctemp9804,nctemp9806);
struct tree* nctemp9812= q;
int nctemp9814=CodeSexpr(nctemp9812);
struct tree* nctemp9816= p;
struct nctempchar1 *nctemp9820;
static struct nctempchar1 nctemp9821 = {{ 2}, (char*)")\0"};
nctemp9820=&nctemp9821;
nctempchar1* nctemp9818= nctemp9820;
int nctemp9822=CodeEs(nctemp9816,nctemp9818);
}
}
struct tree* nctemp9824= p;
struct nctempchar1 *nctemp9828;
static struct nctempchar1 nctemp9829 = {{ 2}, (char*)"]\0"};
nctemp9828=&nctemp9829;
nctempchar1* nctemp9826= nctemp9828;
int nctemp9830=CodeEs(nctemp9824,nctemp9826);
RunFree(qname->a);
RunFree(qname);
return 1;
}
int CodeIdstruct (struct tree* p)
{
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* sp;
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp9840= p;
nctempchar1* nctemp9842=PtreeGetarray(nctemp9840);
nctempchar1* nctemp9838= nctemp9842;
struct nctempchar1 *nctemp9845;
static struct nctempchar1 nctemp9846 = {{ 6}, (char*)"array\0"};
nctemp9845=&nctemp9846;
nctempchar1* nctemp9843= nctemp9845;
int nctemp9847=LibeStrcmp(nctemp9838,nctemp9843);
int nctemp9835 = (nctemp9847 ==1);
if(nctemp9835)
{
struct tree* nctemp9850= p;
nctempchar1* nctemp9852= qname;
int nctemp9855=CodeSarray(nctemp9850,nctemp9852);
struct tree* nctemp9860= p;
struct tree* nctemp9862=PtreeMvchild(nctemp9860);
np =nctemp9862;
int nctemp9863 = (np ==0);
if(nctemp9863)
{
return 1;
}
struct tree* nctemp9872= np;
struct tree* nctemp9874=PtreeMvsister(nctemp9872);
sp =nctemp9874;
int nctemp9875 = (sp ==0);
if(nctemp9875)
{
return 1;
}
struct tree* nctemp9881= p;
struct nctempchar1 *nctemp9885;
static struct nctempchar1 nctemp9886 = {{ 2}, (char*)".\0"};
nctemp9885=&nctemp9886;
nctempchar1* nctemp9883= nctemp9885;
int nctemp9887=CodeEs(nctemp9881,nctemp9883);
struct tree* nctemp9895= p;
nctempchar1* nctemp9897=PtreeGetdef(nctemp9895);
nctempchar1* nctemp9893= nctemp9897;
struct nctempchar1 *nctemp9900;
static struct nctempchar1 nctemp9901 = {{ 2}, (char*)".\0"};
nctemp9900=&nctemp9901;
nctempchar1* nctemp9898= nctemp9900;
nctempchar1* nctemp9902=LibeStradd(nctemp9893,nctemp9898);
qname=nctemp9902;
}
else{
struct tree* nctemp9904= p;
struct tree* nctemp9908= p;
nctempchar1* nctemp9910=PtreeGetdef(nctemp9908);
nctempchar1* nctemp9906= nctemp9910;
int nctemp9911=CodeEs(nctemp9904,nctemp9906);
struct tree* nctemp9919= p;
nctempchar1* nctemp9921=PtreeGetdef(nctemp9919);
nctempchar1* nctemp9917= nctemp9921;
struct nctempchar1 *nctemp9924;
static struct nctempchar1 nctemp9925 = {{ 3}, (char*)"->\0"};
nctemp9924=&nctemp9925;
nctempchar1* nctemp9922= nctemp9924;
nctempchar1* nctemp9926=LibeStradd(nctemp9917,nctemp9922);
qname=nctemp9926;
struct tree* nctemp9931= p;
struct tree* nctemp9933=PtreeMvchild(nctemp9931);
sp =nctemp9933;
int nctemp9934 = (sp ==0);
if(nctemp9934)
{
return 1;
}
struct tree* nctemp9940= p;
struct nctempchar1 *nctemp9944;
static struct nctempchar1 nctemp9945 = {{ 3}, (char*)"->\0"};
nctemp9944=&nctemp9945;
nctempchar1* nctemp9942= nctemp9944;
int nctemp9946=CodeEs(nctemp9940,nctemp9942);
}
struct tree* nctemp9952= sp;
nctempchar1* nctemp9954=PtreeGetarray(nctemp9952);
nctempchar1* nctemp9950= nctemp9954;
struct nctempchar1 *nctemp9957;
static struct nctempchar1 nctemp9958 = {{ 6}, (char*)"array\0"};
nctemp9957=&nctemp9958;
nctempchar1* nctemp9955= nctemp9957;
int nctemp9959=LibeStrcmp(nctemp9950,nctemp9955);
int nctemp9947 = (nctemp9959 ==1);
if(nctemp9947)
{
struct symbol* nctemp9965=SymGetltp();
tp =nctemp9965;
struct symbol* nctemp9970=SymGetetp();
up =nctemp9970;
struct tree* nctemp9977= p;
nctempchar1* nctemp9979=PtreeGetdef(nctemp9977);
nctempchar1* nctemp9975= nctemp9979;
struct symbol* nctemp9980=SymLook(nctemp9975);
uup =nctemp9980;
struct symbol* nctemp9987= uup;
nctempchar1* nctemp9989=SymGetype(nctemp9987);
nctempchar1* nctemp9985= nctemp9989;
struct symbol* nctemp9990=SymLook(nctemp9985);
uup =nctemp9990;
struct symbol* nctemp9994= uup;
struct symbol* nctemp9996=SymGetable(nctemp9994);
struct symbol* nctemp9992= nctemp9996;
int nctemp9997=SymSetltp(nctemp9992);
struct tree* nctemp9999= sp;
nctempchar1* nctemp10001= qname;
int nctemp10004=CodeSarray(nctemp9999,nctemp10001);
RunFree(qname->a);
RunFree(qname);
struct symbol* nctemp10009= tp;
int nctemp10011=SymSetltp(nctemp10009);
struct symbol* nctemp10013= up;
int nctemp10015=SymSetetp(nctemp10013);
}
else{
struct tree* nctemp10017= p;
struct tree* nctemp10021= sp;
nctempchar1* nctemp10023=PtreeGetdef(nctemp10021);
nctempchar1* nctemp10019= nctemp10023;
int nctemp10024=CodeEs(nctemp10017,nctemp10019);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10031= p;
nctempchar1* nctemp10033=PtreeGetstruct(nctemp10031);
nctempchar1* nctemp10029= nctemp10033;
struct nctempchar1 *nctemp10036;
static struct nctempchar1 nctemp10037 = {{ 7}, (char*)"struct\0"};
nctemp10036=&nctemp10037;
nctempchar1* nctemp10034= nctemp10036;
int nctemp10038=LibeStrcmp(nctemp10029,nctemp10034);
int nctemp10026 = (nctemp10038 ==1);
if(nctemp10026)
{
struct tree* nctemp10041= p;
int nctemp10043=CodeIdstruct(nctemp10041);
}
else{
struct tree* nctemp10049= p;
nctempchar1* nctemp10051=PtreeGetarray(nctemp10049);
nctempchar1* nctemp10047= nctemp10051;
struct nctempchar1 *nctemp10054;
static struct nctempchar1 nctemp10055 = {{ 6}, (char*)"array\0"};
nctemp10054=&nctemp10055;
nctempchar1* nctemp10052= nctemp10054;
int nctemp10056=LibeStrcmp(nctemp10047,nctemp10052);
int nctemp10044 = (nctemp10056 ==1);
if(nctemp10044)
{
struct tree* nctemp10059= p;
nctempchar1* nctemp10061= qname;
int nctemp10064=CodeSarray(nctemp10059,nctemp10061);
return 1;
}
else{
struct tree* nctemp10067= p;
struct tree* nctemp10071= p;
nctempchar1* nctemp10073=PtreeGetdef(nctemp10071);
nctempchar1* nctemp10069= nctemp10073;
int nctemp10074=CodeEs(nctemp10067,nctemp10069);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10083= p;
nctempchar1* nctemp10085=PtreeGetdef(nctemp10083);
nctempchar1* nctemp10081= nctemp10085;
struct symbol* nctemp10088=SymGetetp();
struct symbol* nctemp10086= nctemp10088;
struct symbol* nctemp10089=SymLookup(nctemp10081,nctemp10086);
tp =nctemp10089;
struct tree* nctemp10094= p;
struct tree* nctemp10096=PtreeMvchild(nctemp10094);
sp =nctemp10096;
int nctemp10097 = (sp !=0);
if(nctemp10097)
{
struct tree* nctemp10106= sp;
nctempchar1* nctemp10108=PtreeGetname(nctemp10106);
nctempchar1* nctemp10104= nctemp10108;
struct nctempchar1 *nctemp10111;
static struct nctempchar1 nctemp10112 = {{ 9}, (char*)"exprlist\0"};
nctemp10111=&nctemp10112;
nctempchar1* nctemp10109= nctemp10111;
int nctemp10113=LibeStrcmp(nctemp10104,nctemp10109);
int nctemp10101 = (nctemp10113 ==1);
if(nctemp10101)
{
struct tree* nctemp10119= sp;
struct tree* nctemp10121=PtreeMvchild(nctemp10119);
sp =nctemp10121;
}
}
struct tree* nctemp10123= p;
struct symbol* nctemp10127= tp;
nctempchar1* nctemp10129=SymGetname(nctemp10127);
nctempchar1* nctemp10125= nctemp10129;
int nctemp10130=CodeEs(nctemp10123,nctemp10125);
struct tree* nctemp10132= p;
struct nctempchar1 *nctemp10136;
static struct nctempchar1 nctemp10137 = {{ 2}, (char*)"(\0"};
nctemp10136=&nctemp10137;
nctempchar1* nctemp10134= nctemp10136;
int nctemp10138=CodeEs(nctemp10132,nctemp10134);
int nctemp10139 = (sp !=0);
int nctemp10143=nctemp10139;
while(nctemp10143)
{{
struct tree* nctemp10145= sp;
int nctemp10147=CodeSexpr(nctemp10145);
struct tree* nctemp10155= sp;
struct tree* nctemp10157=PtreeMvsister(nctemp10155);
sp =nctemp10157;
int nctemp10148 = (sp !=0);
if(nctemp10148)
{
struct tree* nctemp10160= p;
struct nctempchar1 *nctemp10164;
static struct nctempchar1 nctemp10165 = {{ 2}, (char*)",\0"};
nctemp10164=&nctemp10165;
nctempchar1* nctemp10162= nctemp10164;
int nctemp10166=CodeEs(nctemp10160,nctemp10162);
}
}
int nctemp10167 = (sp !=0);
nctemp10143=nctemp10167;}struct tree* nctemp10172= p;
struct nctempchar1 *nctemp10176;
static struct nctempchar1 nctemp10177 = {{ 2}, (char*)")\0"};
nctemp10176=&nctemp10177;
nctempchar1* nctemp10174= nctemp10176;
int nctemp10178=CodeEs(nctemp10172,nctemp10174);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10185= p;
nctempchar1* nctemp10187=PtreeGetname(nctemp10185);
nctempchar1* nctemp10183= nctemp10187;
struct nctempchar1 *nctemp10190;
static struct nctempchar1 nctemp10191 = {{ 5}, (char*)"cast\0"};
nctemp10190=&nctemp10191;
nctempchar1* nctemp10188= nctemp10190;
int nctemp10192=LibeStrcmp(nctemp10183,nctemp10188);
int nctemp10180 = (nctemp10192 ==1);
if(nctemp10180)
{
struct tree* nctemp10198= p;
struct tree* nctemp10200=PtreeMvchild(nctemp10198);
np =nctemp10200;
struct tree* nctemp10205= np;
struct tree* nctemp10207=PtreeMvsister(nctemp10205);
sp =nctemp10207;
struct tree* nctemp10209= p;
struct nctempchar1 *nctemp10213;
static struct nctempchar1 nctemp10214 = {{ 2}, (char*)"(\0"};
nctemp10213=&nctemp10214;
nctempchar1* nctemp10211= nctemp10213;
int nctemp10215=CodeEs(nctemp10209,nctemp10211);
struct tree* nctemp10221= np;
nctempchar1* nctemp10223=PtreeGetstruct(nctemp10221);
nctempchar1* nctemp10219= nctemp10223;
struct nctempchar1 *nctemp10226;
static struct nctempchar1 nctemp10227 = {{ 7}, (char*)"struct\0"};
nctemp10226=&nctemp10227;
nctempchar1* nctemp10224= nctemp10226;
int nctemp10228=LibeStrcmp(nctemp10219,nctemp10224);
int nctemp10216 = (nctemp10228 ==1);
if(nctemp10216)
{
struct tree* nctemp10231= p;
struct nctempchar1 *nctemp10235;
static struct nctempchar1 nctemp10236 = {{ 8}, (char*)"struct \0"};
nctemp10235=&nctemp10236;
nctempchar1* nctemp10233= nctemp10235;
int nctemp10237=CodeEs(nctemp10231,nctemp10233);
}
struct tree* nctemp10239= p;
struct tree* nctemp10243= np;
nctempchar1* nctemp10245=PtreeGetdef(nctemp10243);
nctempchar1* nctemp10241= nctemp10245;
int nctemp10246=CodeEs(nctemp10239,nctemp10241);
struct tree* nctemp10252= np;
nctempchar1* nctemp10254=PtreeGetstruct(nctemp10252);
nctempchar1* nctemp10250= nctemp10254;
struct nctempchar1 *nctemp10257;
static struct nctempchar1 nctemp10258 = {{ 6}, (char*)"array\0"};
nctemp10257=&nctemp10258;
nctempchar1* nctemp10255= nctemp10257;
int nctemp10259=LibeStrcmp(nctemp10250,nctemp10255);
int nctemp10247 = (nctemp10259 ==1);
if(nctemp10247)
{
struct tree* nctemp10262= p;
struct nctempchar1 *nctemp10266;
static struct nctempchar1 nctemp10267 = {{ 2}, (char*)"*\0"};
nctemp10266=&nctemp10267;
nctempchar1* nctemp10264= nctemp10266;
int nctemp10268=CodeEs(nctemp10262,nctemp10264);
}
struct tree* nctemp10270= p;
struct nctempchar1 *nctemp10274;
static struct nctempchar1 nctemp10275 = {{ 3}, (char*)")(\0"};
nctemp10274=&nctemp10275;
nctempchar1* nctemp10272= nctemp10274;
int nctemp10276=CodeEs(nctemp10270,nctemp10272);
struct tree* nctemp10278= sp;
int nctemp10280=CodeSexpr(nctemp10278);
struct tree* nctemp10282= p;
struct nctempchar1 *nctemp10286;
static struct nctempchar1 nctemp10287 = {{ 2}, (char*)")\0"};
nctemp10286=&nctemp10287;
nctempchar1* nctemp10284= nctemp10286;
int nctemp10288=CodeEs(nctemp10282,nctemp10284);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10295= p;
nctempchar1* nctemp10297=PtreeGetname(nctemp10295);
nctempchar1* nctemp10293= nctemp10297;
struct nctempchar1 *nctemp10300;
static struct nctempchar1 nctemp10301 = {{ 11}, (char*)"identifier\0"};
nctemp10300=&nctemp10301;
nctempchar1* nctemp10298= nctemp10300;
int nctemp10302=LibeStrcmp(nctemp10293,nctemp10298);
int nctemp10290 = (nctemp10302 ==1);
if(nctemp10290)
{
struct tree* nctemp10305= p;
int nctemp10307=CodeSident(nctemp10305);
}
else{
struct tree* nctemp10313= p;
nctempchar1* nctemp10315=PtreeGetname(nctemp10313);
nctempchar1* nctemp10311= nctemp10315;
struct nctempchar1 *nctemp10318;
static struct nctempchar1 nctemp10319 = {{ 6}, (char*)"fcall\0"};
nctemp10318=&nctemp10319;
nctempchar1* nctemp10316= nctemp10318;
int nctemp10320=LibeStrcmp(nctemp10311,nctemp10316);
int nctemp10308 = (nctemp10320 ==1);
if(nctemp10308)
{
struct tree* nctemp10323= p;
int nctemp10325=CodeSfcall(nctemp10323);
}
else{
struct tree* nctemp10331= p;
nctempchar1* nctemp10333=PtreeGetname(nctemp10331);
nctempchar1* nctemp10329= nctemp10333;
struct nctempchar1 *nctemp10336;
static struct nctempchar1 nctemp10337 = {{ 5}, (char*)"cast\0"};
nctemp10336=&nctemp10337;
nctempchar1* nctemp10334= nctemp10336;
int nctemp10338=LibeStrcmp(nctemp10329,nctemp10334);
int nctemp10326 = (nctemp10338 ==1);
if(nctemp10326)
{
struct tree* nctemp10341= p;
int nctemp10343=CodeScast(nctemp10341);
}
else{
struct tree* nctemp10349= p;
nctempchar1* nctemp10351=PtreeGetname(nctemp10349);
nctempchar1* nctemp10347= nctemp10351;
struct nctempchar1 *nctemp10354;
static struct nctempchar1 nctemp10355 = {{ 10}, (char*)"iconstant\0"};
nctemp10354=&nctemp10355;
nctempchar1* nctemp10352= nctemp10354;
int nctemp10356=LibeStrcmp(nctemp10347,nctemp10352);
int nctemp10344 = (nctemp10356 ==1);
if(nctemp10344)
{
struct tree* nctemp10359= p;
struct tree* nctemp10363= p;
nctempchar1* nctemp10365=PtreeGetdef(nctemp10363);
nctempchar1* nctemp10361= nctemp10365;
int nctemp10366=CodeEs(nctemp10359,nctemp10361);
}
else{
struct tree* nctemp10372= p;
nctempchar1* nctemp10374=PtreeGetname(nctemp10372);
nctempchar1* nctemp10370= nctemp10374;
struct nctempchar1 *nctemp10377;
static struct nctempchar1 nctemp10378 = {{ 10}, (char*)"sconstant\0"};
nctemp10377=&nctemp10378;
nctempchar1* nctemp10375= nctemp10377;
int nctemp10379=LibeStrcmp(nctemp10370,nctemp10375);
int nctemp10367 = (nctemp10379 ==1);
if(nctemp10367)
{
struct tree* nctemp10382= p;
struct tree* nctemp10386= p;
nctempchar1* nctemp10388=PtreeGetdef(nctemp10386);
nctempchar1* nctemp10384= nctemp10388;
int nctemp10389=CodeEs(nctemp10382,nctemp10384);
}
else{
struct tree* nctemp10395= p;
nctempchar1* nctemp10397=PtreeGetname(nctemp10395);
nctempchar1* nctemp10393= nctemp10397;
struct nctempchar1 *nctemp10400;
static struct nctempchar1 nctemp10401 = {{ 10}, (char*)"rconstant\0"};
nctemp10400=&nctemp10401;
nctempchar1* nctemp10398= nctemp10400;
int nctemp10402=LibeStrcmp(nctemp10393,nctemp10398);
int nctemp10390 = (nctemp10402 ==1);
if(nctemp10390)
{
struct tree* nctemp10405= p;
struct tree* nctemp10409= p;
nctempchar1* nctemp10411=PtreeGetdef(nctemp10409);
nctempchar1* nctemp10407= nctemp10411;
int nctemp10412=CodeEs(nctemp10405,nctemp10407);
}
else{
struct tree* nctemp10414= p;
struct nctempchar1 *nctemp10418;
static struct nctempchar1 nctemp10419 = {{ 2}, (char*)"(\0"};
nctemp10418=&nctemp10419;
nctempchar1* nctemp10416= nctemp10418;
int nctemp10420=CodeEs(nctemp10414,nctemp10416);
struct tree* nctemp10422= p;
int nctemp10424=CodeSbinexpr(nctemp10422);
struct tree* nctemp10426= p;
struct nctempchar1 *nctemp10430;
static struct nctempchar1 nctemp10431 = {{ 2}, (char*)")\0"};
nctemp10430=&nctemp10431;
nctempchar1* nctemp10428= nctemp10430;
int nctemp10432=CodeEs(nctemp10426,nctemp10428);
}
}
}
}
}
}
return 1;
}
int CodeSunexpr (struct tree* p)
{
struct tree* nctemp10439= p;
nctempchar1* nctemp10441=PtreeGetname(nctemp10439);
nctempchar1* nctemp10437= nctemp10441;
struct nctempchar1 *nctemp10444;
static struct nctempchar1 nctemp10445 = {{ 7}, (char*)"unexpr\0"};
nctemp10444=&nctemp10445;
nctempchar1* nctemp10442= nctemp10444;
int nctemp10446=LibeStrcmp(nctemp10437,nctemp10442);
int nctemp10434 = (nctemp10446 ==1);
if(nctemp10434)
{
struct tree* nctemp10449= p;
struct nctempchar1 *nctemp10453;
static struct nctempchar1 nctemp10454 = {{ 3}, (char*)" -\0"};
nctemp10453=&nctemp10454;
nctempchar1* nctemp10451= nctemp10453;
int nctemp10455=CodeEs(nctemp10449,nctemp10451);
struct tree* nctemp10459= p;
struct tree* nctemp10461=PtreeMvchild(nctemp10459);
struct tree* nctemp10457= nctemp10461;
int nctemp10462=CodeSprimexpr(nctemp10457);
}
else{
struct tree* nctemp10464= p;
int nctemp10466=CodeSprimexpr(nctemp10464);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10473= p;
nctempchar1* nctemp10475=PtreeGetname(nctemp10473);
nctempchar1* nctemp10471= nctemp10475;
struct nctempchar1 *nctemp10478;
static struct nctempchar1 nctemp10479 = {{ 8}, (char*)"binexpr\0"};
nctemp10478=&nctemp10479;
nctempchar1* nctemp10476= nctemp10478;
int nctemp10480=LibeStrcmp(nctemp10471,nctemp10476);
int nctemp10468 = (nctemp10480 ==1);
if(nctemp10468)
{
struct tree* nctemp10486= p;
struct tree* nctemp10488=PtreeMvchild(nctemp10486);
np =nctemp10488;
struct tree* nctemp10490= np;
int nctemp10492=CodeSunexpr(nctemp10490);
struct tree* nctemp10504= p;
nctempchar1* nctemp10506=PtreeGetdef(nctemp10504);
nctempchar1* nctemp10502= nctemp10506;
struct nctempchar1 *nctemp10509;
static struct nctempchar1 nctemp10510 = {{ 2}, (char*)"=\0"};
nctemp10509=&nctemp10510;
nctempchar1* nctemp10507= nctemp10509;
int nctemp10511=LibeStrcmp(nctemp10502,nctemp10507);
int nctemp10499 = (nctemp10511 ==1);
struct tree* nctemp10519= p;
nctempchar1* nctemp10521=PtreeGetdef(nctemp10519);
nctempchar1* nctemp10517= nctemp10521;
struct nctempchar1 *nctemp10524;
static struct nctempchar1 nctemp10525 = {{ 3}, (char*)"==\0"};
nctemp10524=&nctemp10525;
nctempchar1* nctemp10522= nctemp10524;
int nctemp10526=LibeStrcmp(nctemp10517,nctemp10522);
int nctemp10514 = (nctemp10526 ==1);
int nctemp10496 = (nctemp10499 || nctemp10514);
struct tree* nctemp10534= p;
nctempchar1* nctemp10536=PtreeGetdef(nctemp10534);
nctempchar1* nctemp10532= nctemp10536;
struct nctempchar1 *nctemp10539;
static struct nctempchar1 nctemp10540 = {{ 3}, (char*)"!=\0"};
nctemp10539=&nctemp10540;
nctempchar1* nctemp10537= nctemp10539;
int nctemp10541=LibeStrcmp(nctemp10532,nctemp10537);
int nctemp10529 = (nctemp10541 ==1);
int nctemp10493 = (nctemp10496 || nctemp10529);
if(nctemp10493)
{
struct tree* nctemp10548= np;
nctempchar1* nctemp10550=PtreeGetref(nctemp10548);
nctempchar1* nctemp10546= nctemp10550;
struct nctempchar1 *nctemp10553;
static struct nctempchar1 nctemp10554 = {{ 5}, (char*)"aref\0"};
nctemp10553=&nctemp10554;
nctempchar1* nctemp10551= nctemp10553;
int nctemp10555=LibeStrcmp(nctemp10546,nctemp10551);
int nctemp10543 = (nctemp10555 ==1);
if(nctemp10543)
{
struct tree* nctemp10564= np;
struct tree* nctemp10566=PtreeMvsister(nctemp10564);
struct tree* nctemp10562= nctemp10566;
nctempchar1* nctemp10567=PtreeGetname(nctemp10562);
nctempchar1* nctemp10560= nctemp10567;
struct nctempchar1 *nctemp10570;
static struct nctempchar1 nctemp10571 = {{ 10}, (char*)"iconstant\0"};
nctemp10570=&nctemp10571;
nctempchar1* nctemp10568= nctemp10570;
int nctemp10572=LibeStrcmp(nctemp10560,nctemp10568);
struct tree* nctemp10578= np;
struct tree* nctemp10580=PtreeMvsister(nctemp10578);
struct tree* nctemp10576= nctemp10580;
nctempchar1* nctemp10581=PtreeGetdef(nctemp10576);
nctempchar1* nctemp10574= nctemp10581;
struct nctempchar1 *nctemp10584;
static struct nctempchar1 nctemp10585 = {{ 2}, (char*)"0\0"};
nctemp10584=&nctemp10585;
nctempchar1* nctemp10582= nctemp10584;
int nctemp10586=LibeStrcmp(nctemp10574,nctemp10582);
int nctemp10557 = (nctemp10572 && nctemp10586);
if(nctemp10557)
{
struct tree* nctemp10588= p;
struct nctempchar1 *nctemp10592;
static struct nctempchar1 nctemp10593 = {{ 2}, (char*)" \0"};
nctemp10592=&nctemp10593;
nctempchar1* nctemp10590= nctemp10592;
int nctemp10594=CodeEs(nctemp10588,nctemp10590);
}
}
}
struct tree* nctemp10596= p;
struct nctempchar1 *nctemp10600;
static struct nctempchar1 nctemp10601 = {{ 2}, (char*)" \0"};
nctemp10600=&nctemp10601;
nctempchar1* nctemp10598= nctemp10600;
int nctemp10602=CodeEs(nctemp10596,nctemp10598);
struct tree* nctemp10604= p;
struct tree* nctemp10608= p;
nctempchar1* nctemp10610=PtreeGetdef(nctemp10608);
nctempchar1* nctemp10606= nctemp10610;
int nctemp10611=CodeEs(nctemp10604,nctemp10606);
struct tree* nctemp10613= p;
struct nctempchar1 *nctemp10617;
static struct nctempchar1 nctemp10618 = {{ 2}, (char*)" \0"};
nctemp10617=&nctemp10618;
nctempchar1* nctemp10615= nctemp10617;
int nctemp10619=CodeEs(nctemp10613,nctemp10615);
struct tree* nctemp10623= np;
struct tree* nctemp10625=PtreeMvsister(nctemp10623);
struct tree* nctemp10621= nctemp10625;
int nctemp10626=CodeSunexpr(nctemp10621);
}
else{
struct tree* nctemp10628= p;
int nctemp10630=CodeSunexpr(nctemp10628);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp10636= p;
struct tree* nctemp10638=PtreeMvchild(nctemp10636);
sp =nctemp10638;
struct tree* nctemp10640= sp;
int nctemp10642=CodeSbinexpr(nctemp10640);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10648= p;
struct tree* nctemp10650=PtreeMvchild(nctemp10648);
sp =nctemp10650;
struct tree* nctemp10656= sp;
nctempchar1* nctemp10658=CodeBinexpr(nctemp10656);
rval=nctemp10658;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10665= p;
struct tree* nctemp10667=PtreeMvchild(nctemp10665);
p =nctemp10667;
struct tree* nctemp10669= p;
struct nctempchar1 *nctemp10673;
static struct nctempchar1 nctemp10674 = {{ 5}, (char*)"for(\0"};
nctemp10673=&nctemp10674;
nctempchar1* nctemp10671= nctemp10673;
int nctemp10675=CodeEs(nctemp10669,nctemp10671);
struct tree* nctemp10677= p;
int nctemp10679=CodeSexpr(nctemp10677);
struct tree* nctemp10681= p;
struct nctempchar1 *nctemp10685;
static struct nctempchar1 nctemp10686 = {{ 2}, (char*)";\0"};
nctemp10685=&nctemp10686;
nctempchar1* nctemp10683= nctemp10685;
int nctemp10687=CodeEs(nctemp10681,nctemp10683);
struct tree* nctemp10692= p;
struct tree* nctemp10694=PtreeMvsister(nctemp10692);
p =nctemp10694;
struct tree* nctemp10696= p;
int nctemp10698=CodeSexpr(nctemp10696);
struct tree* nctemp10700= p;
struct nctempchar1 *nctemp10704;
static struct nctempchar1 nctemp10705 = {{ 2}, (char*)";\0"};
nctemp10704=&nctemp10705;
nctempchar1* nctemp10702= nctemp10704;
int nctemp10706=CodeEs(nctemp10700,nctemp10702);
struct tree* nctemp10711= p;
struct tree* nctemp10713=PtreeMvsister(nctemp10711);
p =nctemp10713;
struct tree* nctemp10715= p;
int nctemp10717=CodeSexpr(nctemp10715);
struct tree* nctemp10719= p;
struct nctempchar1 *nctemp10723;
static struct nctempchar1 nctemp10724 = {{ 2}, (char*)")\0"};
nctemp10723=&nctemp10724;
nctempchar1* nctemp10721= nctemp10723;
int nctemp10725=CodeEs(nctemp10719,nctemp10721);
struct tree* nctemp10730= p;
struct tree* nctemp10732=PtreeMvsister(nctemp10730);
p =nctemp10732;
struct tree* nctemp10734= p;
int nctemp10736=CodeStmnt(nctemp10734);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10742= p;
struct tree* nctemp10744=PtreeMvchild(nctemp10742);
p =nctemp10744;
sp = p;
struct tree* nctemp10750= sp;
nctempchar1* nctemp10752=CodeExpr(nctemp10750);
cond=nctemp10752;
nctempchar1* nctemp10758=CodeMktemp();
tmp=nctemp10758;
struct tree* nctemp10760= p;
struct tree* nctemp10764= sp;
nctempchar1* nctemp10766=PtreeGetype(nctemp10764);
nctempchar1* nctemp10762= nctemp10766;
int nctemp10767=CodeEs(nctemp10760,nctemp10762);
struct tree* nctemp10769= p;
struct nctempchar1 *nctemp10773;
static struct nctempchar1 nctemp10774 = {{ 2}, (char*)" \0"};
nctemp10773=&nctemp10774;
nctempchar1* nctemp10771= nctemp10773;
int nctemp10775=CodeEs(nctemp10769,nctemp10771);
struct tree* nctemp10777= p;
nctempchar1* nctemp10779= tmp;
int nctemp10782=CodeEs(nctemp10777,nctemp10779);
struct tree* nctemp10784= p;
struct nctempchar1 *nctemp10788;
static struct nctempchar1 nctemp10789 = {{ 2}, (char*)"=\0"};
nctemp10788=&nctemp10789;
nctempchar1* nctemp10786= nctemp10788;
int nctemp10790=CodeEs(nctemp10784,nctemp10786);
struct tree* nctemp10792= p;
nctempchar1* nctemp10794= cond;
int nctemp10797=CodeEs(nctemp10792,nctemp10794);
struct tree* nctemp10799= p;
struct nctempchar1 *nctemp10803;
static struct nctempchar1 nctemp10804 = {{ 4}, (char*)";\n\0"};
nctemp10803=&nctemp10804;
nctempchar1* nctemp10801= nctemp10803;
int nctemp10805=CodeEs(nctemp10799,nctemp10801);
struct tree* nctemp10807= p;
struct nctempchar1 *nctemp10811;
static struct nctempchar1 nctemp10812 = {{ 7}, (char*)"while(\0"};
nctemp10811=&nctemp10812;
nctempchar1* nctemp10809= nctemp10811;
int nctemp10813=CodeEs(nctemp10807,nctemp10809);
struct tree* nctemp10815= p;
nctempchar1* nctemp10817= tmp;
int nctemp10820=CodeEs(nctemp10815,nctemp10817);
struct tree* nctemp10822= p;
struct nctempchar1 *nctemp10826;
static struct nctempchar1 nctemp10827 = {{ 4}, (char*)")\n\0"};
nctemp10826=&nctemp10827;
nctempchar1* nctemp10824= nctemp10826;
int nctemp10828=CodeEs(nctemp10822,nctemp10824);
struct tree* nctemp10830= p;
struct nctempchar1 *nctemp10834;
static struct nctempchar1 nctemp10835 = {{ 2}, (char*)"{\0"};
nctemp10834=&nctemp10835;
nctempchar1* nctemp10832= nctemp10834;
int nctemp10836=CodeEs(nctemp10830,nctemp10832);
struct tree* nctemp10841= p;
struct tree* nctemp10843=PtreeMvsister(nctemp10841);
p =nctemp10843;
struct tree* nctemp10845= p;
int nctemp10847=CodeStmnt(nctemp10845);
struct tree* nctemp10853= sp;
nctempchar1* nctemp10855=CodeExpr(nctemp10853);
cond2=nctemp10855;
struct tree* nctemp10857= p;
nctempchar1* nctemp10859= tmp;
int nctemp10862=CodeEs(nctemp10857,nctemp10859);
struct tree* nctemp10864= p;
struct nctempchar1 *nctemp10868;
static struct nctempchar1 nctemp10869 = {{ 2}, (char*)"=\0"};
nctemp10868=&nctemp10869;
nctempchar1* nctemp10866= nctemp10868;
int nctemp10870=CodeEs(nctemp10864,nctemp10866);
struct tree* nctemp10872= p;
nctempchar1* nctemp10874= cond2;
int nctemp10877=CodeEs(nctemp10872,nctemp10874);
struct tree* nctemp10879= p;
struct nctempchar1 *nctemp10883;
static struct nctempchar1 nctemp10884 = {{ 2}, (char*)";\0"};
nctemp10883=&nctemp10884;
nctempchar1* nctemp10881= nctemp10883;
int nctemp10885=CodeEs(nctemp10879,nctemp10881);
struct tree* nctemp10887= p;
struct nctempchar1 *nctemp10891;
static struct nctempchar1 nctemp10892 = {{ 2}, (char*)"}\0"};
nctemp10891=&nctemp10892;
nctempchar1* nctemp10889= nctemp10891;
int nctemp10893=CodeEs(nctemp10887,nctemp10889);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10899= p;
struct tree* nctemp10901=PtreeMvchild(nctemp10899);
p =nctemp10901;
struct tree* nctemp10903= p;
nctempchar1* nctemp10905=CodeExpr(nctemp10903);
struct tree* nctemp10910= p;
struct tree* nctemp10912=PtreeMvsister(nctemp10910);
p =nctemp10912;
np = p;
struct tree* nctemp10918= p;
nctempchar1* nctemp10920=CodeExpr(nctemp10918);
cond=nctemp10920;
struct tree* nctemp10922= p;
struct nctempchar1 *nctemp10926;
static struct nctempchar1 nctemp10927 = {{ 7}, (char*)"while(\0"};
nctemp10926=&nctemp10927;
nctempchar1* nctemp10924= nctemp10926;
int nctemp10928=CodeEs(nctemp10922,nctemp10924);
struct tree* nctemp10930= p;
nctempchar1* nctemp10932= cond;
int nctemp10935=CodeEs(nctemp10930,nctemp10932);
struct tree* nctemp10937= p;
struct nctempchar1 *nctemp10941;
static struct nctempchar1 nctemp10942 = {{ 5}, (char*)"){\n\0"};
nctemp10941=&nctemp10942;
nctempchar1* nctemp10939= nctemp10941;
int nctemp10943=CodeEs(nctemp10937,nctemp10939);
struct tree* nctemp10948= p;
struct tree* nctemp10950=PtreeMvsister(nctemp10948);
p =nctemp10950;
sp = p;
struct tree* nctemp10955= p;
struct tree* nctemp10957=PtreeMvsister(nctemp10955);
p =nctemp10957;
struct tree* nctemp10959= p;
int nctemp10961=CodeStmnt(nctemp10959);
struct tree* nctemp10963= sp;
nctempchar1* nctemp10965=CodeExpr(nctemp10963);
struct tree* nctemp10971= np;
nctempchar1* nctemp10973=CodeExpr(nctemp10971);
tmp=nctemp10973;
struct tree* nctemp10975= p;
nctempchar1* nctemp10977= cond;
int nctemp10980=CodeEs(nctemp10975,nctemp10977);
struct tree* nctemp10982= p;
struct nctempchar1 *nctemp10986;
static struct nctempchar1 nctemp10987 = {{ 2}, (char*)"=\0"};
nctemp10986=&nctemp10987;
nctempchar1* nctemp10984= nctemp10986;
int nctemp10988=CodeEs(nctemp10982,nctemp10984);
struct tree* nctemp10990= p;
nctempchar1* nctemp10992= tmp;
int nctemp10995=CodeEs(nctemp10990,nctemp10992);
struct tree* nctemp10997= p;
struct nctempchar1 *nctemp11001;
static struct nctempchar1 nctemp11002 = {{ 4}, (char*)";\n\0"};
nctemp11001=&nctemp11002;
nctempchar1* nctemp10999= nctemp11001;
int nctemp11003=CodeEs(nctemp10997,nctemp10999);
struct tree* nctemp11005= p;
struct nctempchar1 *nctemp11009;
static struct nctempchar1 nctemp11010 = {{ 4}, (char*)"}\n\0"};
nctemp11009=&nctemp11010;
nctempchar1* nctemp11007= nctemp11009;
int nctemp11011=CodeEs(nctemp11005,nctemp11007);
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
sp = p;
level = (level + 1);
int nctemp11013 = (p ==0);
if(nctemp11013)
{
return 1;
}
struct tree* nctemp11022= p;
struct tree* nctemp11024=PtreeMvsister(nctemp11022);
p =nctemp11024;
struct tree* nctemp11026= p;
int nctemp11028= level;
int nctemp11030= rank;
int nctemp11032=CodeParallelfor(nctemp11026,nctemp11028,nctemp11030);
struct tree* nctemp11037= sp;
struct tree* nctemp11039=PtreeMvchild(nctemp11037);
rp =nctemp11039;
struct tree* nctemp11044= rp;
struct tree* nctemp11046=PtreeMvchild(nctemp11044);
qp =nctemp11046;
struct tree* nctemp11051= qp;
struct tree* nctemp11053=PtreeMvchild(nctemp11051);
qp =nctemp11053;
struct tree* nctemp11059= qp;
nctempchar1* nctemp11061=PtreeGetdef(nctemp11059);
index=nctemp11061;
struct tree* nctemp11069= qp;
struct tree* nctemp11071=PtreeMvsister(nctemp11069);
struct tree* nctemp11067= nctemp11071;
nctempchar1* nctemp11072=CodeBinexpr(nctemp11067);
init=nctemp11072;
struct tree* nctemp11077= rp;
struct tree* nctemp11079=PtreeMvsister(nctemp11077);
rrp =nctemp11079;
struct tree* nctemp11085= rrp;
nctempchar1* nctemp11087=CodeExpr(nctemp11085);
cond=nctemp11087;
int nctemp11088 = (level ==rank);
if(nctemp11088)
{
struct tree* nctemp11093= p;
struct nctempchar1 *nctemp11097;
static struct nctempchar1 nctemp11098 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11097=&nctemp11098;
nctempchar1* nctemp11095= nctemp11097;
int nctemp11099=CodeEs(nctemp11093,nctemp11095);
}
struct tree* nctemp11101= rp;
struct nctempchar1 *nctemp11105;
static struct nctempchar1 nctemp11106 = {{ 5}, (char*)"for(\0"};
nctemp11105=&nctemp11106;
nctempchar1* nctemp11103= nctemp11105;
int nctemp11107=CodeEs(nctemp11101,nctemp11103);
struct tree* nctemp11109= rp;
nctempchar1* nctemp11111= index;
int nctemp11114=CodeEs(nctemp11109,nctemp11111);
struct tree* nctemp11116= rp;
struct nctempchar1 *nctemp11120;
static struct nctempchar1 nctemp11121 = {{ 2}, (char*)"=\0"};
nctemp11120=&nctemp11121;
nctempchar1* nctemp11118= nctemp11120;
int nctemp11122=CodeEs(nctemp11116,nctemp11118);
struct tree* nctemp11124= rp;
nctempchar1* nctemp11126= init;
int nctemp11129=CodeEs(nctemp11124,nctemp11126);
struct tree* nctemp11131= rp;
struct nctempchar1 *nctemp11135;
static struct nctempchar1 nctemp11136 = {{ 2}, (char*)";\0"};
nctemp11135=&nctemp11136;
nctempchar1* nctemp11133= nctemp11135;
int nctemp11137=CodeEs(nctemp11131,nctemp11133);
struct tree* nctemp11142= rp;
struct tree* nctemp11144=PtreeMvsister(nctemp11142);
rp =nctemp11144;
struct tree* nctemp11146= rp;
nctempchar1* nctemp11148= index;
int nctemp11151=CodeEs(nctemp11146,nctemp11148);
struct tree* nctemp11153= rp;
struct nctempchar1 *nctemp11157;
static struct nctempchar1 nctemp11158 = {{ 2}, (char*)"<\0"};
nctemp11157=&nctemp11158;
nctempchar1* nctemp11155= nctemp11157;
int nctemp11159=CodeEs(nctemp11153,nctemp11155);
struct tree* nctemp11161= p;
nctempchar1* nctemp11163= cond;
int nctemp11166=CodeEs(nctemp11161,nctemp11163);
struct tree* nctemp11168= rp;
struct nctempchar1 *nctemp11172;
static struct nctempchar1 nctemp11173 = {{ 2}, (char*)";\0"};
nctemp11172=&nctemp11173;
nctempchar1* nctemp11170= nctemp11172;
int nctemp11174=CodeEs(nctemp11168,nctemp11170);
struct tree* nctemp11182= rp;
struct tree* nctemp11184=PtreeMvsister(nctemp11182);
rp =nctemp11184;
int nctemp11175 = (rp !=0);
if(nctemp11175)
{
struct tree* nctemp11187= rp;
nctempchar1* nctemp11189= index;
int nctemp11192=CodeEs(nctemp11187,nctemp11189);
struct tree* nctemp11194= rp;
struct nctempchar1 *nctemp11198;
static struct nctempchar1 nctemp11199 = {{ 2}, (char*)"=\0"};
nctemp11198=&nctemp11199;
nctempchar1* nctemp11196= nctemp11198;
int nctemp11200=CodeEs(nctemp11194,nctemp11196);
struct tree* nctemp11202= rp;
nctempchar1* nctemp11204= index;
int nctemp11207=CodeEs(nctemp11202,nctemp11204);
struct tree* nctemp11209= rp;
struct nctempchar1 *nctemp11213;
static struct nctempchar1 nctemp11214 = {{ 2}, (char*)"+\0"};
nctemp11213=&nctemp11214;
nctempchar1* nctemp11211= nctemp11213;
int nctemp11215=CodeEs(nctemp11209,nctemp11211);
struct tree* nctemp11217= rp;
nctempchar1* nctemp11219=CodeExpr(nctemp11217);
}
else{
struct tree* nctemp11221= rp;
nctempchar1* nctemp11223= index;
int nctemp11226=CodeEs(nctemp11221,nctemp11223);
struct tree* nctemp11228= rp;
struct nctempchar1 *nctemp11232;
static struct nctempchar1 nctemp11233 = {{ 2}, (char*)"=\0"};
nctemp11232=&nctemp11233;
nctempchar1* nctemp11230= nctemp11232;
int nctemp11234=CodeEs(nctemp11228,nctemp11230);
struct tree* nctemp11236= rp;
nctempchar1* nctemp11238= index;
int nctemp11241=CodeEs(nctemp11236,nctemp11238);
struct tree* nctemp11243= rp;
struct nctempchar1 *nctemp11247;
static struct nctempchar1 nctemp11248 = {{ 2}, (char*)"+\0"};
nctemp11247=&nctemp11248;
nctempchar1* nctemp11245= nctemp11247;
int nctemp11249=CodeEs(nctemp11243,nctemp11245);
struct tree* nctemp11251= rp;
struct nctempchar1 *nctemp11255;
static struct nctempchar1 nctemp11256 = {{ 2}, (char*)"1\0"};
nctemp11255=&nctemp11256;
nctempchar1* nctemp11253= nctemp11255;
int nctemp11257=CodeEs(nctemp11251,nctemp11253);
}
struct tree* nctemp11259= rp;
struct nctempchar1 *nctemp11263;
static struct nctempchar1 nctemp11264 = {{ 3}, (char*)"){\0"};
nctemp11263=&nctemp11264;
nctempchar1* nctemp11261= nctemp11263;
int nctemp11265=CodeEs(nctemp11259,nctemp11261);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11271= sp;
int nctemp11273=PtreeGetrank(nctemp11271);
rank =nctemp11273;
struct tree* nctemp11278= p;
struct tree* nctemp11280=PtreeMvchild(nctemp11278);
p =nctemp11280;
struct tree* nctemp11285= p;
struct tree* nctemp11287=PtreeMvchild(nctemp11285);
p =nctemp11287;
struct tree* nctemp11289= p;
int nctemp11291= 0;
int nctemp11293= rank;
int nctemp11295=CodeParallelfor(nctemp11289,nctemp11291,nctemp11293);
struct tree* nctemp11300= sp;
struct tree* nctemp11302=PtreeMvchild(nctemp11300);
sp =nctemp11302;
struct tree* nctemp11307= sp;
struct tree* nctemp11309=PtreeMvsister(nctemp11307);
sp =nctemp11309;
struct tree* nctemp11311= sp;
int nctemp11313=CodeStmnt(nctemp11311);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11315= sp;
struct nctempchar1 *nctemp11319;
static struct nctempchar1 nctemp11320 = {{ 2}, (char*)"}\0"};
nctemp11319=&nctemp11320;
nctempchar1* nctemp11317= nctemp11319;
int nctemp11321=CodeEs(nctemp11315,nctemp11317);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11324= p;
struct nctempchar1 *nctemp11328;
static struct nctempchar1 nctemp11329 = {{ 13}, (char*)"int nctempno\0"};
nctemp11328=&nctemp11329;
nctempchar1* nctemp11326= nctemp11328;
int nctemp11330=CodeEs(nctemp11324,nctemp11326);
struct tree* nctemp11332= p;
struct nctempchar1 *nctemp11336;
static struct nctempchar1 nctemp11337 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11336=&nctemp11337;
nctempchar1* nctemp11334= nctemp11336;
int nctemp11338=CodeEs(nctemp11332,nctemp11334);
struct nctempchar1 *nctemp11340;
static struct nctempchar1 nctemp11341 = {{ 9}, (char*)"nctempno\0"};
nctemp11340=&nctemp11341;
return nctemp11340;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11346= p;
struct tree* nctemp11348=PtreeMvchild(nctemp11346);
p =nctemp11348;
struct tree* nctemp11353= p;
struct tree* nctemp11355=PtreeMvchild(nctemp11353);
p =nctemp11355;
struct tree* nctemp11360= p;
struct tree* nctemp11362=PtreeMvchild(nctemp11360);
p =nctemp11362;
struct tree* nctemp11364= p;
nctempchar1* nctemp11366=PtreeGetdef(nctemp11364);
return nctemp11366;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11371= p;
struct tree* nctemp11373=PtreeMvsister(nctemp11371);
p =nctemp11373;
}
struct tree* nctemp11375= p;
nctempchar1* nctemp11377=CodeParidx(nctemp11375);
return nctemp11377;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11382= p;
struct tree* nctemp11384=PtreeMvchild(nctemp11382);
p =nctemp11384;
struct tree* nctemp11390= p;
nctempchar1* nctemp11392=CodeExpr(nctemp11390);
tmp=nctemp11392;
nctempchar1* nctemp11398=CodeMktemp();
temp=nctemp11398;
struct tree* nctemp11400= p;
struct nctempchar1 *nctemp11404;
static struct nctempchar1 nctemp11405 = {{ 5}, (char*)"int \0"};
nctemp11404=&nctemp11405;
nctempchar1* nctemp11402= nctemp11404;
int nctemp11406=CodeEs(nctemp11400,nctemp11402);
struct tree* nctemp11408= p;
nctempchar1* nctemp11410= temp;
int nctemp11413=CodeEs(nctemp11408,nctemp11410);
struct tree* nctemp11415= p;
struct nctempchar1 *nctemp11419;
static struct nctempchar1 nctemp11420 = {{ 2}, (char*)"=\0"};
nctemp11419=&nctemp11420;
nctempchar1* nctemp11417= nctemp11419;
int nctemp11421=CodeEs(nctemp11415,nctemp11417);
struct tree* nctemp11423= p;
nctempchar1* nctemp11425= tmp;
int nctemp11428=CodeEs(nctemp11423,nctemp11425);
struct tree* nctemp11430= p;
struct nctempchar1 *nctemp11434;
static struct nctempchar1 nctemp11435 = {{ 4}, (char*)";\n\0"};
nctemp11434=&nctemp11435;
nctempchar1* nctemp11432= nctemp11434;
int nctemp11436=CodeEs(nctemp11430,nctemp11432);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11443= p;
struct tree* nctemp11445=PtreeMvchild(nctemp11443);
p =nctemp11445;
struct tree* nctemp11450= p;
struct tree* nctemp11452=PtreeMvsister(nctemp11450);
p =nctemp11452;
struct tree* nctemp11454= p;
nctempchar1* nctemp11456=CodeExpr(nctemp11454);
return nctemp11456;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11461= p;
struct tree* nctemp11463=PtreeMvsister(nctemp11461);
p =nctemp11463;
}
struct tree* nctemp11465= p;
nctempchar1* nctemp11467=CodeParllim(nctemp11465);
return nctemp11467;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11472= p;
struct tree* nctemp11474=PtreeMvsister(nctemp11472);
p =nctemp11474;
}
struct tree* nctemp11476= p;
nctempchar1* nctemp11478=CodeParulim(nctemp11476);
return nctemp11478;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11484=CodeMktemp();
tmp1=nctemp11484;
struct tree* nctemp11490= p;
nctempchar1* nctemp11492=CodeParulim(nctemp11490);
tmp2=nctemp11492;
struct tree* nctemp11498= p;
nctempchar1* nctemp11500=CodeParllim(nctemp11498);
tmp3=nctemp11500;
struct tree* nctemp11502= p;
struct nctempchar1 *nctemp11506;
static struct nctempchar1 nctemp11507 = {{ 5}, (char*)"int \0"};
nctemp11506=&nctemp11507;
nctempchar1* nctemp11504= nctemp11506;
int nctemp11508=CodeEs(nctemp11502,nctemp11504);
struct tree* nctemp11510= p;
nctempchar1* nctemp11512= tmp1;
int nctemp11515=CodeEs(nctemp11510,nctemp11512);
struct tree* nctemp11517= p;
struct nctempchar1 *nctemp11521;
static struct nctempchar1 nctemp11522 = {{ 2}, (char*)"=\0"};
nctemp11521=&nctemp11522;
nctempchar1* nctemp11519= nctemp11521;
int nctemp11523=CodeEs(nctemp11517,nctemp11519);
struct tree* nctemp11525= p;
nctempchar1* nctemp11527= tmp2;
int nctemp11530=CodeEs(nctemp11525,nctemp11527);
struct tree* nctemp11532= p;
struct nctempchar1 *nctemp11536;
static struct nctempchar1 nctemp11537 = {{ 2}, (char*)"-\0"};
nctemp11536=&nctemp11537;
nctempchar1* nctemp11534= nctemp11536;
int nctemp11538=CodeEs(nctemp11532,nctemp11534);
struct tree* nctemp11540= p;
nctempchar1* nctemp11542= tmp3;
int nctemp11545=CodeEs(nctemp11540,nctemp11542);
struct tree* nctemp11547= p;
struct nctempchar1 *nctemp11551;
static struct nctempchar1 nctemp11552 = {{ 4}, (char*)";\n\0"};
nctemp11551=&nctemp11552;
nctempchar1* nctemp11549= nctemp11551;
int nctemp11553=CodeEs(nctemp11547,nctemp11549);
nctempchar1* nctemp11557= tmp3;
nctempchar1* nctemp11560= llim;
int nctemp11563=LibeStrcpy(nctemp11557,nctemp11560);
int nctemp11554 = (nctemp11563 ==0);
if(nctemp11554)
{
struct nctempchar1 *nctemp11568;
static struct nctempchar1 nctemp11569 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11568=&nctemp11569;
nctempchar1* nctemp11566= nctemp11568;
int nctemp11570=CodeError(nctemp11566);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11577= p;
struct tree* nctemp11579=PtreeMvsister(nctemp11577);
p =nctemp11579;
}
struct tree* nctemp11585= p;
nctempchar1* nctemp11587= llim;
nctempchar1* nctemp11590=CodeParlen(nctemp11585,nctemp11587);
tmp=nctemp11590;
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
int nctemp11597=m->d[0];r =nctemp11597;
nctempchar1* nctemp11606=CodeMktemp();
nsize=nctemp11606;
struct tree* nctemp11608= p;
struct nctempchar1 *nctemp11612;
static struct nctempchar1 nctemp11613 = {{ 5}, (char*)"int \0"};
nctemp11612=&nctemp11613;
nctempchar1* nctemp11610= nctemp11612;
int nctemp11614=CodeEs(nctemp11608,nctemp11610);
struct tree* nctemp11616= p;
nctempchar1* nctemp11618= nsize;
int nctemp11621=CodeEs(nctemp11616,nctemp11618);
struct tree* nctemp11623= p;
struct nctempchar1 *nctemp11627;
static struct nctempchar1 nctemp11628 = {{ 2}, (char*)"=\0"};
nctemp11627=&nctemp11628;
nctempchar1* nctemp11625= nctemp11627;
int nctemp11629=CodeEs(nctemp11623,nctemp11625);
for(i = 0;i < r;i = (i + 1)){
int nctemp11638 = r - 1;
int nctemp11630 = (i ==nctemp11638);
if(nctemp11630)
{
struct tree* nctemp11640= p;
int nctemp11644=i;
nctempchar1* nctemp11642= m->a[nctemp11644].s;
int nctemp11647=CodeEs(nctemp11640,nctemp11642);
struct tree* nctemp11649= p;
struct nctempchar1 *nctemp11653;
static struct nctempchar1 nctemp11654 = {{ 4}, (char*)";\n\0"};
nctemp11653=&nctemp11654;
nctempchar1* nctemp11651= nctemp11653;
int nctemp11655=CodeEs(nctemp11649,nctemp11651);
}
else{
struct tree* nctemp11657= p;
int nctemp11661=i;
nctempchar1* nctemp11659= m->a[nctemp11661].s;
int nctemp11664=CodeEs(nctemp11657,nctemp11659);
struct tree* nctemp11666= p;
struct nctempchar1 *nctemp11670;
static struct nctempchar1 nctemp11671 = {{ 2}, (char*)"*\0"};
nctemp11670=&nctemp11671;
nctempchar1* nctemp11668= nctemp11670;
int nctemp11672=CodeEs(nctemp11666,nctemp11668);
}
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
int nctemp11676= 1;
int nctemp11678=CodeSetparallel(nctemp11676);
sp = p;
struct tree* nctemp11683= p;
int nctemp11685=PtreeGetrank(nctemp11683);
rank =nctemp11685;
int nctemp11692=rank;
struct nctempcharr1 *nctemp11691;
nctemp11691=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11691->d[0]=rank;
nctemp11691->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11692);
m=nctemp11691;
int nctemp11701=rank;
struct nctempcharr1 *nctemp11700;
nctemp11700=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11700->d[0]=rank;
nctemp11700->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11701);
i=nctemp11700;
int nctemp11710=rank;
struct nctempcharr1 *nctemp11709;
nctemp11709=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11709->d[0]=rank;
nctemp11709->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11710);
nl=nctemp11709;
struct tree* nctemp11717= p;
struct tree* nctemp11719=PtreeMvchild(nctemp11717);
p =nctemp11719;
struct tree* nctemp11724= p;
struct tree* nctemp11726=PtreeMvchild(nctemp11724);
slice =nctemp11726;
struct tree* nctemp11728= p;
struct nctempchar1 *nctemp11732;
static struct nctempchar1 nctemp11733 = {{ 4}, (char*)"{\n\0"};
nctemp11732=&nctemp11733;
nctempchar1* nctemp11730= nctemp11732;
int nctemp11734=CodeEs(nctemp11728,nctemp11730);
struct tree* nctemp11740= slice;
nctempchar1* nctemp11742=CodeParprocno(nctemp11740);
pno=nctemp11742;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11746=l;
struct tree* nctemp11750= slice;
int nctemp11757 = l + 1;
int nctemp11752= nctemp11757;
nctempchar1* nctemp11758=CodeParidxrank(nctemp11750,nctemp11752);
i->a[nctemp11746].s=nctemp11758;
int nctemp11762=l;
int nctemp11767=4096;
nctempchar1 *nctemp11766;
nctemp11766=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11766->d[0]=4096;
nctemp11766->a=(char *)RunMalloc(sizeof(char)*nctemp11767);
nl->a[nctemp11762].s=nctemp11766;
int nctemp11773=l;
struct tree* nctemp11777= slice;
int nctemp11784 = l + 1;
int nctemp11779= nctemp11784;
int nctemp11787=l;
nctempchar1* nctemp11785= nl->a[nctemp11787].s;
nctempchar1* nctemp11790=CodeParlenrank(nctemp11777,nctemp11779,nctemp11785);
m->a[nctemp11773].s=nctemp11790;
}
struct tree* nctemp11796= p;
nctempcharr1* nctemp11798= m;
nctempchar1* nctemp11801=CodeParnsize(nctemp11796,nctemp11798);
nmax=nctemp11801;
struct tree* nctemp11803= p;
struct nctempchar1 *nctemp11807;
static struct nctempchar1 nctemp11808 = {{ 5}, (char*)"for(\0"};
nctemp11807=&nctemp11808;
nctempchar1* nctemp11805= nctemp11807;
int nctemp11809=CodeEs(nctemp11803,nctemp11805);
struct tree* nctemp11811= p;
nctempchar1* nctemp11813= pno;
int nctemp11816=CodeEs(nctemp11811,nctemp11813);
struct tree* nctemp11818= p;
struct nctempchar1 *nctemp11822;
static struct nctempchar1 nctemp11823 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11822=&nctemp11823;
nctempchar1* nctemp11820= nctemp11822;
int nctemp11824=CodeEs(nctemp11818,nctemp11820);
struct tree* nctemp11826= p;
nctempchar1* nctemp11828= pno;
int nctemp11831=CodeEs(nctemp11826,nctemp11828);
struct tree* nctemp11833= p;
struct nctempchar1 *nctemp11837;
static struct nctempchar1 nctemp11838 = {{ 2}, (char*)"<\0"};
nctemp11837=&nctemp11838;
nctempchar1* nctemp11835= nctemp11837;
int nctemp11839=CodeEs(nctemp11833,nctemp11835);
struct tree* nctemp11841= p;
nctempchar1* nctemp11843= nmax;
int nctemp11846=CodeEs(nctemp11841,nctemp11843);
struct tree* nctemp11848= p;
struct nctempchar1 *nctemp11852;
static struct nctempchar1 nctemp11853 = {{ 2}, (char*)";\0"};
nctemp11852=&nctemp11853;
nctempchar1* nctemp11850= nctemp11852;
int nctemp11854=CodeEs(nctemp11848,nctemp11850);
struct tree* nctemp11856= p;
nctempchar1* nctemp11858= pno;
int nctemp11861=CodeEs(nctemp11856,nctemp11858);
struct tree* nctemp11863= p;
struct nctempchar1 *nctemp11867;
static struct nctempchar1 nctemp11868 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11867=&nctemp11868;
nctempchar1* nctemp11865= nctemp11867;
int nctemp11869=CodeEs(nctemp11863,nctemp11865);
struct tree* nctemp11871= p;
struct nctempchar1 *nctemp11875;
static struct nctempchar1 nctemp11876 = {{ 5}, (char*)"){\n\0"};
nctemp11875=&nctemp11876;
nctempchar1* nctemp11873= nctemp11875;
int nctemp11877=CodeEs(nctemp11871,nctemp11873);
struct nctempchar1 *nctemp11885;
static struct nctempchar1 nctemp11886 = {{ 2}, (char*)"1\0"};
nctemp11885=&nctemp11886;
nctempchar1* nctemp11883= nctemp11885;
nctempchar1* nctemp11887=LibeStrsave(nctemp11883);
qk=nctemp11887;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11896 = rank - 1;
int nctemp11888 = (l ==nctemp11896);
if(nctemp11888)
{
struct tree* nctemp11898= p;
int nctemp11902=l;
nctempchar1* nctemp11900= i->a[nctemp11902].s;
int nctemp11905=CodeEs(nctemp11898,nctemp11900);
struct tree* nctemp11907= p;
struct nctempchar1 *nctemp11911;
static struct nctempchar1 nctemp11912 = {{ 2}, (char*)"=\0"};
nctemp11911=&nctemp11912;
nctempchar1* nctemp11909= nctemp11911;
int nctemp11913=CodeEs(nctemp11907,nctemp11909);
struct tree* nctemp11915= p;
struct nctempchar1 *nctemp11919;
static struct nctempchar1 nctemp11920 = {{ 2}, (char*)"(\0"};
nctemp11919=&nctemp11920;
nctempchar1* nctemp11917= nctemp11919;
int nctemp11921=CodeEs(nctemp11915,nctemp11917);
struct tree* nctemp11923= p;
nctempchar1* nctemp11925= pno;
int nctemp11928=CodeEs(nctemp11923,nctemp11925);
struct tree* nctemp11930= p;
struct nctempchar1 *nctemp11934;
static struct nctempchar1 nctemp11935 = {{ 2}, (char*)"/\0"};
nctemp11934=&nctemp11935;
nctempchar1* nctemp11932= nctemp11934;
int nctemp11936=CodeEs(nctemp11930,nctemp11932);
struct tree* nctemp11938= p;
struct nctempchar1 *nctemp11942;
static struct nctempchar1 nctemp11943 = {{ 2}, (char*)"(\0"};
nctemp11942=&nctemp11943;
nctempchar1* nctemp11940= nctemp11942;
int nctemp11944=CodeEs(nctemp11938,nctemp11940);
struct tree* nctemp11946= p;
nctempchar1* nctemp11948= qk;
int nctemp11951=CodeEs(nctemp11946,nctemp11948);
struct tree* nctemp11953= p;
struct nctempchar1 *nctemp11957;
static struct nctempchar1 nctemp11958 = {{ 2}, (char*)")\0"};
nctemp11957=&nctemp11958;
nctempchar1* nctemp11955= nctemp11957;
int nctemp11959=CodeEs(nctemp11953,nctemp11955);
struct tree* nctemp11961= p;
struct nctempchar1 *nctemp11965;
static struct nctempchar1 nctemp11966 = {{ 2}, (char*)")\0"};
nctemp11965=&nctemp11966;
nctempchar1* nctemp11963= nctemp11965;
int nctemp11967=CodeEs(nctemp11961,nctemp11963);
struct tree* nctemp11969= p;
struct nctempchar1 *nctemp11973;
static struct nctempchar1 nctemp11974 = {{ 2}, (char*)"+\0"};
nctemp11973=&nctemp11974;
nctempchar1* nctemp11971= nctemp11973;
int nctemp11975=CodeEs(nctemp11969,nctemp11971);
struct tree* nctemp11977= p;
int nctemp11981=l;
nctempchar1* nctemp11979= nl->a[nctemp11981].s;
int nctemp11984=CodeEs(nctemp11977,nctemp11979);
int nctemp11987=l;
RunFree(nl->a[nctemp11987].s->a);
RunFree(nl->a[nctemp11987].s);
struct tree* nctemp11991= p;
struct nctempchar1 *nctemp11995;
static struct nctempchar1 nctemp11996 = {{ 4}, (char*)";\n\0"};
nctemp11995=&nctemp11996;
nctempchar1* nctemp11993= nctemp11995;
int nctemp11997=CodeEs(nctemp11991,nctemp11993);
}
else{
struct tree* nctemp11999= p;
int nctemp12003=l;
nctempchar1* nctemp12001= i->a[nctemp12003].s;
int nctemp12006=CodeEs(nctemp11999,nctemp12001);
struct tree* nctemp12008= p;
struct nctempchar1 *nctemp12012;
static struct nctempchar1 nctemp12013 = {{ 2}, (char*)"=\0"};
nctemp12012=&nctemp12013;
nctempchar1* nctemp12010= nctemp12012;
int nctemp12014=CodeEs(nctemp12008,nctemp12010);
struct tree* nctemp12016= p;
struct nctempchar1 *nctemp12020;
static struct nctempchar1 nctemp12021 = {{ 2}, (char*)"(\0"};
nctemp12020=&nctemp12021;
nctempchar1* nctemp12018= nctemp12020;
int nctemp12022=CodeEs(nctemp12016,nctemp12018);
struct tree* nctemp12024= p;
nctempchar1* nctemp12026= pno;
int nctemp12029=CodeEs(nctemp12024,nctemp12026);
struct tree* nctemp12031= p;
struct nctempchar1 *nctemp12035;
static struct nctempchar1 nctemp12036 = {{ 2}, (char*)"/\0"};
nctemp12035=&nctemp12036;
nctempchar1* nctemp12033= nctemp12035;
int nctemp12037=CodeEs(nctemp12031,nctemp12033);
struct tree* nctemp12039= p;
struct nctempchar1 *nctemp12043;
static struct nctempchar1 nctemp12044 = {{ 2}, (char*)"(\0"};
nctemp12043=&nctemp12044;
nctempchar1* nctemp12041= nctemp12043;
int nctemp12045=CodeEs(nctemp12039,nctemp12041);
struct tree* nctemp12047= p;
nctempchar1* nctemp12049= qk;
int nctemp12052=CodeEs(nctemp12047,nctemp12049);
struct tree* nctemp12054= p;
struct nctempchar1 *nctemp12058;
static struct nctempchar1 nctemp12059 = {{ 2}, (char*)")\0"};
nctemp12058=&nctemp12059;
nctempchar1* nctemp12056= nctemp12058;
int nctemp12060=CodeEs(nctemp12054,nctemp12056);
struct tree* nctemp12062= p;
struct nctempchar1 *nctemp12066;
static struct nctempchar1 nctemp12067 = {{ 2}, (char*)")\0"};
nctemp12066=&nctemp12067;
nctempchar1* nctemp12064= nctemp12066;
int nctemp12068=CodeEs(nctemp12062,nctemp12064);
struct tree* nctemp12070= p;
struct nctempchar1 *nctemp12074;
static struct nctempchar1 nctemp12075 = {{ 2}, (char*)"%\0"};
nctemp12074=&nctemp12075;
nctempchar1* nctemp12072= nctemp12074;
int nctemp12076=CodeEs(nctemp12070,nctemp12072);
struct tree* nctemp12078= p;
int nctemp12082=l;
nctempchar1* nctemp12080= m->a[nctemp12082].s;
int nctemp12085=CodeEs(nctemp12078,nctemp12080);
struct tree* nctemp12087= p;
struct nctempchar1 *nctemp12091;
static struct nctempchar1 nctemp12092 = {{ 2}, (char*)"+\0"};
nctemp12091=&nctemp12092;
nctempchar1* nctemp12089= nctemp12091;
int nctemp12093=CodeEs(nctemp12087,nctemp12089);
struct tree* nctemp12095= p;
int nctemp12099=l;
nctempchar1* nctemp12097= nl->a[nctemp12099].s;
int nctemp12102=CodeEs(nctemp12095,nctemp12097);
int nctemp12105=l;
RunFree(nl->a[nctemp12105].s->a);
RunFree(nl->a[nctemp12105].s);
struct tree* nctemp12109= p;
struct nctempchar1 *nctemp12113;
static struct nctempchar1 nctemp12114 = {{ 4}, (char*)";\n\0"};
nctemp12113=&nctemp12114;
nctempchar1* nctemp12111= nctemp12113;
int nctemp12115=CodeEs(nctemp12109,nctemp12111);
}
nctempchar1* nctemp12121= qk;
struct nctempchar1 *nctemp12126;
static struct nctempchar1 nctemp12127 = {{ 2}, (char*)"*\0"};
nctemp12126=&nctemp12127;
nctempchar1* nctemp12124= nctemp12126;
nctempchar1* nctemp12128=LibeStradd(nctemp12121,nctemp12124);
tmp=nctemp12128;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12137= qk;
int nctemp12142=l;
nctempchar1* nctemp12140= m->a[nctemp12142].s;
nctempchar1* nctemp12145=LibeStradd(nctemp12137,nctemp12140);
tmp=nctemp12145;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12153= sp;
struct tree* nctemp12155=PtreeMvchild(nctemp12153);
p =nctemp12155;
struct tree* nctemp12160= p;
struct tree* nctemp12162=PtreeMvsister(nctemp12160);
p =nctemp12162;
struct tree* nctemp12164= p;
int nctemp12166=CodeCompstmnt(nctemp12164);
struct tree* nctemp12168= p;
struct nctempchar1 *nctemp12172;
static struct nctempchar1 nctemp12173 = {{ 4}, (char*)"}\n\0"};
nctemp12172=&nctemp12173;
nctempchar1* nctemp12170= nctemp12172;
int nctemp12174=CodeEs(nctemp12168,nctemp12170);
struct tree* nctemp12176= p;
struct nctempchar1 *nctemp12180;
static struct nctempchar1 nctemp12181 = {{ 4}, (char*)"}\n\0"};
nctemp12180=&nctemp12181;
nctempchar1* nctemp12178= nctemp12180;
int nctemp12182=CodeEs(nctemp12176,nctemp12178);
int nctemp12184= 0;
int nctemp12186=CodeSetparallel(nctemp12184);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12191=CodeGetarch();
int nctemp12188 = (nctemp12191 ==1);
if(nctemp12188)
{
struct tree* nctemp12194= p;
int nctemp12196=CodeParallelstmntcpu(nctemp12194);
}
else{
int nctemp12200=CodeGetarch();
int nctemp12197 = (nctemp12200 ==2);
if(nctemp12197)
{
struct tree* nctemp12203= p;
int nctemp12205=CodeParallelstmntgpu(nctemp12203);
}
else{
int nctemp12209=CodeGetarch();
int nctemp12206 = (nctemp12209 ==3);
if(nctemp12206)
{
struct tree* nctemp12212= p;
int nctemp12214=CodeParallelstmntgpu(nctemp12212);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12220= p;
struct tree* nctemp12222=PtreeMvchild(nctemp12220);
p =nctemp12222;
struct tree* nctemp12228= p;
nctempchar1* nctemp12230=CodeExpr(nctemp12228);
cond=nctemp12230;
struct tree* nctemp12232= p;
struct nctempchar1 *nctemp12236;
static struct nctempchar1 nctemp12237 = {{ 4}, (char*)"if(\0"};
nctemp12236=&nctemp12237;
nctempchar1* nctemp12234= nctemp12236;
int nctemp12238=CodeEs(nctemp12232,nctemp12234);
struct tree* nctemp12240= p;
nctempchar1* nctemp12242= cond;
int nctemp12245=CodeEs(nctemp12240,nctemp12242);
struct tree* nctemp12247= p;
struct nctempchar1 *nctemp12251;
static struct nctempchar1 nctemp12252 = {{ 4}, (char*)")\n\0"};
nctemp12251=&nctemp12252;
nctempchar1* nctemp12249= nctemp12251;
int nctemp12253=CodeEs(nctemp12247,nctemp12249);
struct tree* nctemp12258= p;
struct tree* nctemp12260=PtreeMvsister(nctemp12258);
p =nctemp12260;
struct tree* nctemp12262= p;
int nctemp12264=CodeStmnt(nctemp12262);
struct tree* nctemp12272= p;
struct tree* nctemp12274=PtreeMvsister(nctemp12272);
p =nctemp12274;
int nctemp12265 = (p !=0);
if(nctemp12265)
{
struct tree* nctemp12281= p;
nctempchar1* nctemp12283=PtreeGetname(nctemp12281);
nctempchar1* nctemp12279= nctemp12283;
struct nctempchar1 *nctemp12286;
static struct nctempchar1 nctemp12287 = {{ 5}, (char*)"else\0"};
nctemp12286=&nctemp12287;
nctempchar1* nctemp12284= nctemp12286;
int nctemp12288=LibeStrcmp(nctemp12279,nctemp12284);
int nctemp12276 = (nctemp12288 ==1);
if(nctemp12276)
{
struct tree* nctemp12294= p;
struct tree* nctemp12296=PtreeMvchild(nctemp12294);
p =nctemp12296;
struct tree* nctemp12298= p;
struct nctempchar1 *nctemp12302;
static struct nctempchar1 nctemp12303 = {{ 5}, (char*)"else\0"};
nctemp12302=&nctemp12303;
nctempchar1* nctemp12300= nctemp12302;
int nctemp12304=CodeEs(nctemp12298,nctemp12300);
struct tree* nctemp12306= p;
int nctemp12308=CodeStmnt(nctemp12306);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12314= p;
struct tree* nctemp12316=PtreeMvchild(nctemp12314);
np =nctemp12316;
struct tree* nctemp12322= np;
nctempchar1* nctemp12324=CodeExpr(nctemp12322);
rval=nctemp12324;
struct tree* nctemp12326= np;
struct nctempchar1 *nctemp12330;
static struct nctempchar1 nctemp12331 = {{ 8}, (char*)"return \0"};
nctemp12330=&nctemp12331;
nctempchar1* nctemp12328= nctemp12330;
int nctemp12332=CodeEs(nctemp12326,nctemp12328);
struct tree* nctemp12334= np;
nctempchar1* nctemp12336= rval;
int nctemp12339=CodeEs(nctemp12334,nctemp12336);
struct tree* nctemp12341= np;
struct nctempchar1 *nctemp12345;
static struct nctempchar1 nctemp12346 = {{ 4}, (char*)";\n\0"};
nctemp12345=&nctemp12346;
nctempchar1* nctemp12343= nctemp12345;
int nctemp12347=CodeEs(nctemp12341,nctemp12343);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12350= p;
struct nctempchar1 *nctemp12354;
static struct nctempchar1 nctemp12355 = {{ 4}, (char*)"{\n\0"};
nctemp12354=&nctemp12355;
nctempchar1* nctemp12352= nctemp12354;
int nctemp12356=CodeEs(nctemp12350,nctemp12352);
struct tree* nctemp12361= p;
struct tree* nctemp12363=PtreeMvchild(nctemp12361);
p =nctemp12363;
int nctemp12364 = (p ==0);
if(nctemp12364)
{
struct tree* nctemp12369= sp;
struct nctempchar1 *nctemp12373;
static struct nctempchar1 nctemp12374 = {{ 4}, (char*)"}\n\0"};
nctemp12373=&nctemp12374;
nctempchar1* nctemp12371= nctemp12373;
int nctemp12375=CodeEs(nctemp12369,nctemp12371);
return 1;
}
struct tree* nctemp12378= p;
struct symbol* nctemp12382=SymGetltp();
struct symbol* nctemp12380= nctemp12382;
int nctemp12383=CodeDeclarations(nctemp12378,nctemp12380);
struct tree* nctemp12389= p;
nctempchar1* nctemp12391=PtreeGetname(nctemp12389);
nctempchar1* nctemp12387= nctemp12391;
struct nctempchar1 *nctemp12394;
static struct nctempchar1 nctemp12395 = {{ 13}, (char*)"declarations\0"};
nctemp12394=&nctemp12395;
nctempchar1* nctemp12392= nctemp12394;
int nctemp12396=LibeStrcmp(nctemp12387,nctemp12392);
int nctemp12384 = (nctemp12396 ==1);
if(nctemp12384)
{
struct tree* nctemp12402= p;
struct tree* nctemp12404=PtreeMvsister(nctemp12402);
p =nctemp12404;
}
int nctemp12405 = (p !=0);
int nctemp12409=nctemp12405;
while(nctemp12409)
{{
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
int nctemp12427=CodeGetbreak();
int nctemp12424 = (nctemp12427 ==1);
if(nctemp12424)
{
struct tree* nctemp12430= p;
nctempchar1* nctemp12432=CodeExpr(nctemp12430);
}
else{
struct tree* nctemp12436= p;
int nctemp12438=PtreeGetsimple(nctemp12436);
int nctemp12433 = (nctemp12438 ==1);
if(nctemp12433)
{
struct tree* nctemp12441= p;
int nctemp12443=CodeSexpr(nctemp12441);
struct tree* nctemp12445= p;
struct nctempchar1 *nctemp12449;
static struct nctempchar1 nctemp12450 = {{ 4}, (char*)";\n\0"};
nctemp12449=&nctemp12450;
nctempchar1* nctemp12447= nctemp12449;
int nctemp12451=CodeEs(nctemp12445,nctemp12447);
}
else{
struct tree* nctemp12453= p;
nctempchar1* nctemp12455=CodeExpr(nctemp12453);
}
}
}
struct tree* nctemp12461= p;
nctempchar1* nctemp12463=PtreeGetname(nctemp12461);
nctempchar1* nctemp12459= nctemp12463;
struct nctempchar1 *nctemp12466;
static struct nctempchar1 nctemp12467 = {{ 6}, (char*)"while\0"};
nctemp12466=&nctemp12467;
nctempchar1* nctemp12464= nctemp12466;
int nctemp12468=LibeStrcmp(nctemp12459,nctemp12464);
int nctemp12456 = (nctemp12468 ==1);
if(nctemp12456)
{
struct tree* nctemp12471= p;
int nctemp12473=CodeWhilestmnt(nctemp12471);
}
struct tree* nctemp12479= p;
nctempchar1* nctemp12481=PtreeGetname(nctemp12479);
nctempchar1* nctemp12477= nctemp12481;
struct nctempchar1 *nctemp12484;
static struct nctempchar1 nctemp12485 = {{ 4}, (char*)"for\0"};
nctemp12484=&nctemp12485;
nctempchar1* nctemp12482= nctemp12484;
int nctemp12486=LibeStrcmp(nctemp12477,nctemp12482);
int nctemp12474 = (nctemp12486 ==1);
if(nctemp12474)
{
struct tree* nctemp12492= p;
struct tree* nctemp12494=PtreeMvchild(nctemp12492);
q =nctemp12494;
struct tree* nctemp12499= q;
struct tree* nctemp12501=PtreeMvsister(nctemp12499);
r =nctemp12501;
struct tree* nctemp12508= q;
int nctemp12510=PtreeGetsimple(nctemp12508);
struct tree* nctemp12512= r;
int nctemp12514=PtreeGetsimple(nctemp12512);
int nctemp12505 = (nctemp12510 && nctemp12514);
struct tree* nctemp12518= r;
struct tree* nctemp12520=PtreeMvsister(nctemp12518);
struct tree* nctemp12516= nctemp12520;
int nctemp12521=PtreeGetsimple(nctemp12516);
int nctemp12502 = (nctemp12505 && nctemp12521);
if(nctemp12502)
{
struct tree* nctemp12523= p;
int nctemp12525=CodeSforstmnt(nctemp12523);
}
else{
struct tree* nctemp12527= q;
int nctemp12529= 0;
int nctemp12531=PtreeSetsimple(nctemp12527,nctemp12529);
struct tree* nctemp12533= r;
int nctemp12535= 0;
int nctemp12537=PtreeSetsimple(nctemp12533,nctemp12535);
struct tree* nctemp12541= r;
struct tree* nctemp12543=PtreeMvsister(nctemp12541);
struct tree* nctemp12539= nctemp12543;
int nctemp12544= 0;
int nctemp12546=PtreeSetsimple(nctemp12539,nctemp12544);
struct tree* nctemp12548= p;
int nctemp12550=CodeForstmnt(nctemp12548);
}
}
struct tree* nctemp12556= p;
nctempchar1* nctemp12558=PtreeGetname(nctemp12556);
nctempchar1* nctemp12554= nctemp12558;
struct nctempchar1 *nctemp12561;
static struct nctempchar1 nctemp12562 = {{ 9}, (char*)"parallel\0"};
nctemp12561=&nctemp12562;
nctempchar1* nctemp12559= nctemp12561;
int nctemp12563=LibeStrcmp(nctemp12554,nctemp12559);
int nctemp12551 = (nctemp12563 ==1);
if(nctemp12551)
{
struct tree* nctemp12566= p;
int nctemp12568=CodeParallelstmnt(nctemp12566);
}
struct tree* nctemp12574= p;
nctempchar1* nctemp12576=PtreeGetname(nctemp12574);
nctempchar1* nctemp12572= nctemp12576;
struct nctempchar1 *nctemp12579;
static struct nctempchar1 nctemp12580 = {{ 3}, (char*)"if\0"};
nctemp12579=&nctemp12580;
nctempchar1* nctemp12577= nctemp12579;
int nctemp12581=LibeStrcmp(nctemp12572,nctemp12577);
int nctemp12569 = (nctemp12581 ==1);
if(nctemp12569)
{
struct tree* nctemp12584= p;
int nctemp12586=CodeIfstmnt(nctemp12584);
}
struct tree* nctemp12592= p;
nctempchar1* nctemp12594=PtreeGetname(nctemp12592);
nctempchar1* nctemp12590= nctemp12594;
struct nctempchar1 *nctemp12597;
static struct nctempchar1 nctemp12598 = {{ 7}, (char*)"return\0"};
nctemp12597=&nctemp12598;
nctempchar1* nctemp12595= nctemp12597;
int nctemp12599=LibeStrcmp(nctemp12590,nctemp12595);
int nctemp12587 = (nctemp12599 ==1);
if(nctemp12587)
{
struct tree* nctemp12602= p;
int nctemp12604=CodeReturnstmnt(nctemp12602);
}
struct tree* nctemp12609= p;
struct tree* nctemp12611=PtreeMvsister(nctemp12609);
p =nctemp12611;
}
int nctemp12612 = (p !=0);
nctemp12409=nctemp12612;}struct tree* nctemp12617= sp;
struct nctempchar1 *nctemp12621;
static struct nctempchar1 nctemp12622 = {{ 4}, (char*)"}\n\0"};
nctemp12621=&nctemp12622;
nctempchar1* nctemp12619= nctemp12621;
int nctemp12623=CodeEs(nctemp12617,nctemp12619);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12626= p;
struct nctempchar1 *nctemp12630;
static struct nctempchar1 nctemp12631 = {{ 4}, (char*)"{\n\0"};
nctemp12630=&nctemp12631;
nctempchar1* nctemp12628= nctemp12630;
int nctemp12632=CodeEs(nctemp12626,nctemp12628);
struct tree* nctemp12638= p;
nctempchar1* nctemp12640=PtreeGetname(nctemp12638);
nctempchar1* nctemp12636= nctemp12640;
struct nctempchar1 *nctemp12643;
static struct nctempchar1 nctemp12644 = {{ 10}, (char*)"compstmnt\0"};
nctemp12643=&nctemp12644;
nctempchar1* nctemp12641= nctemp12643;
int nctemp12645=LibeStrcmp(nctemp12636,nctemp12641);
int nctemp12633 = (nctemp12645 ==1);
if(nctemp12633)
{
struct tree* nctemp12651= p;
struct tree* nctemp12653=PtreeMvchild(nctemp12651);
p =nctemp12653;
struct tree* nctemp12655= p;
struct symbol* nctemp12659=SymGetltp();
struct symbol* nctemp12657= nctemp12659;
int nctemp12660=CodeDeclarations(nctemp12655,nctemp12657);
struct tree* nctemp12666= p;
nctempchar1* nctemp12668=PtreeGetname(nctemp12666);
nctempchar1* nctemp12664= nctemp12668;
struct nctempchar1 *nctemp12671;
static struct nctempchar1 nctemp12672 = {{ 13}, (char*)"declarations\0"};
nctemp12671=&nctemp12672;
nctempchar1* nctemp12669= nctemp12671;
int nctemp12673=LibeStrcmp(nctemp12664,nctemp12669);
int nctemp12661 = (nctemp12673 ==1);
if(nctemp12661)
{
struct tree* nctemp12679= p;
struct tree* nctemp12681=PtreeMvsister(nctemp12679);
p =nctemp12681;
}
}
int nctemp12682 = (p !=0);
int nctemp12686=nctemp12682;
while(nctemp12686)
{{
struct tree* nctemp12692= p;
nctempchar1* nctemp12694=PtreeGetname(nctemp12692);
nctempchar1* nctemp12690= nctemp12694;
struct nctempchar1 *nctemp12697;
static struct nctempchar1 nctemp12698 = {{ 10}, (char*)"compstmnt\0"};
nctemp12697=&nctemp12698;
nctempchar1* nctemp12695= nctemp12697;
int nctemp12699=LibeStrcmp(nctemp12690,nctemp12695);
int nctemp12687 = (nctemp12699 ==1);
if(nctemp12687)
{
struct tree* nctemp12702= p;
int nctemp12704=CodeCompstmnt(nctemp12702);
}
struct tree* nctemp12710= p;
nctempchar1* nctemp12712=PtreeGetname(nctemp12710);
nctempchar1* nctemp12708= nctemp12712;
struct nctempchar1 *nctemp12715;
static struct nctempchar1 nctemp12716 = {{ 5}, (char*)"expr\0"};
nctemp12715=&nctemp12716;
nctempchar1* nctemp12713= nctemp12715;
int nctemp12717=LibeStrcmp(nctemp12708,nctemp12713);
int nctemp12705 = (nctemp12717 ==1);
if(nctemp12705)
{
int nctemp12722=CodeGetbreak();
int nctemp12719 = (nctemp12722 ==1);
if(nctemp12719)
{
struct tree* nctemp12725= p;
nctempchar1* nctemp12727=CodeExpr(nctemp12725);
}
else{
struct tree* nctemp12731= p;
int nctemp12733=PtreeGetsimple(nctemp12731);
int nctemp12728 = (nctemp12733 ==1);
if(nctemp12728)
{
struct tree* nctemp12736= p;
int nctemp12738=CodeSexpr(nctemp12736);
struct tree* nctemp12740= p;
struct nctempchar1 *nctemp12744;
static struct nctempchar1 nctemp12745 = {{ 4}, (char*)";\n\0"};
nctemp12744=&nctemp12745;
nctempchar1* nctemp12742= nctemp12744;
int nctemp12746=CodeEs(nctemp12740,nctemp12742);
}
else{
struct tree* nctemp12748= p;
nctempchar1* nctemp12750=CodeExpr(nctemp12748);
}
}
}
struct tree* nctemp12756= p;
nctempchar1* nctemp12758=PtreeGetname(nctemp12756);
nctempchar1* nctemp12754= nctemp12758;
struct nctempchar1 *nctemp12761;
static struct nctempchar1 nctemp12762 = {{ 6}, (char*)"while\0"};
nctemp12761=&nctemp12762;
nctempchar1* nctemp12759= nctemp12761;
int nctemp12763=LibeStrcmp(nctemp12754,nctemp12759);
int nctemp12751 = (nctemp12763 ==1);
if(nctemp12751)
{
struct tree* nctemp12766= p;
int nctemp12768=CodeWhilestmnt(nctemp12766);
}
struct tree* nctemp12774= p;
nctempchar1* nctemp12776=PtreeGetname(nctemp12774);
nctempchar1* nctemp12772= nctemp12776;
struct nctempchar1 *nctemp12779;
static struct nctempchar1 nctemp12780 = {{ 4}, (char*)"for\0"};
nctemp12779=&nctemp12780;
nctempchar1* nctemp12777= nctemp12779;
int nctemp12781=LibeStrcmp(nctemp12772,nctemp12777);
int nctemp12769 = (nctemp12781 ==1);
if(nctemp12769)
{
struct tree* nctemp12787= p;
struct tree* nctemp12789=PtreeMvchild(nctemp12787);
q =nctemp12789;
struct tree* nctemp12794= q;
struct tree* nctemp12796=PtreeMvsister(nctemp12794);
r =nctemp12796;
struct tree* nctemp12803= q;
int nctemp12805=PtreeGetsimple(nctemp12803);
struct tree* nctemp12807= r;
int nctemp12809=PtreeGetsimple(nctemp12807);
int nctemp12800 = (nctemp12805 && nctemp12809);
struct tree* nctemp12813= r;
struct tree* nctemp12815=PtreeMvsister(nctemp12813);
struct tree* nctemp12811= nctemp12815;
int nctemp12816=PtreeGetsimple(nctemp12811);
int nctemp12797 = (nctemp12800 && nctemp12816);
if(nctemp12797)
{
struct tree* nctemp12818= p;
int nctemp12820=CodeSforstmnt(nctemp12818);
}
else{
struct tree* nctemp12822= q;
int nctemp12824= 0;
int nctemp12826=PtreeSetsimple(nctemp12822,nctemp12824);
struct tree* nctemp12828= r;
int nctemp12830= 0;
int nctemp12832=PtreeSetsimple(nctemp12828,nctemp12830);
struct tree* nctemp12836= r;
struct tree* nctemp12838=PtreeMvsister(nctemp12836);
struct tree* nctemp12834= nctemp12838;
int nctemp12839= 0;
int nctemp12841=PtreeSetsimple(nctemp12834,nctemp12839);
struct tree* nctemp12843= p;
int nctemp12845=CodeForstmnt(nctemp12843);
}
}
struct tree* nctemp12851= p;
nctempchar1* nctemp12853=PtreeGetname(nctemp12851);
nctempchar1* nctemp12849= nctemp12853;
struct nctempchar1 *nctemp12856;
static struct nctempchar1 nctemp12857 = {{ 9}, (char*)"parallel\0"};
nctemp12856=&nctemp12857;
nctempchar1* nctemp12854= nctemp12856;
int nctemp12858=LibeStrcmp(nctemp12849,nctemp12854);
int nctemp12846 = (nctemp12858 ==1);
if(nctemp12846)
{
struct tree* nctemp12861= p;
int nctemp12863=CodeParallelstmnt(nctemp12861);
}
struct tree* nctemp12869= p;
nctempchar1* nctemp12871=PtreeGetname(nctemp12869);
nctempchar1* nctemp12867= nctemp12871;
struct nctempchar1 *nctemp12874;
static struct nctempchar1 nctemp12875 = {{ 3}, (char*)"if\0"};
nctemp12874=&nctemp12875;
nctempchar1* nctemp12872= nctemp12874;
int nctemp12876=LibeStrcmp(nctemp12867,nctemp12872);
int nctemp12864 = (nctemp12876 ==1);
if(nctemp12864)
{
struct tree* nctemp12879= p;
int nctemp12881=CodeIfstmnt(nctemp12879);
}
struct tree* nctemp12887= p;
nctempchar1* nctemp12889=PtreeGetname(nctemp12887);
nctempchar1* nctemp12885= nctemp12889;
struct nctempchar1 *nctemp12892;
static struct nctempchar1 nctemp12893 = {{ 7}, (char*)"return\0"};
nctemp12892=&nctemp12893;
nctempchar1* nctemp12890= nctemp12892;
int nctemp12894=LibeStrcmp(nctemp12885,nctemp12890);
int nctemp12882 = (nctemp12894 ==1);
if(nctemp12882)
{
struct tree* nctemp12897= p;
int nctemp12899=CodeReturnstmnt(nctemp12897);
}
struct tree* nctemp12904= p;
struct tree* nctemp12906=PtreeMvsister(nctemp12904);
p =nctemp12906;
}
int nctemp12907 = (p !=0);
nctemp12686=nctemp12907;}struct tree* nctemp12912= sp;
struct nctempchar1 *nctemp12916;
static struct nctempchar1 nctemp12917 = {{ 4}, (char*)"}\n\0"};
nctemp12916=&nctemp12917;
nctempchar1* nctemp12914= nctemp12916;
int nctemp12918=CodeEs(nctemp12912,nctemp12914);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12921= p;
nctempchar1* nctemp12923= pointer;
int nctemp12926=CodeEs(nctemp12921,nctemp12923);
struct tree* nctemp12928= p;
struct nctempchar1 *nctemp12932;
static struct nctempchar1 nctemp12933 = {{ 2}, (char*)"=\0"};
nctemp12932=&nctemp12933;
nctempchar1* nctemp12930= nctemp12932;
int nctemp12934=CodeEs(nctemp12928,nctemp12930);
struct tree* nctemp12936= p;
struct nctempchar1 *nctemp12940;
static struct nctempchar1 nctemp12941 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12940=&nctemp12941;
nctempchar1* nctemp12938= nctemp12940;
int nctemp12942=CodeEs(nctemp12936,nctemp12938);
struct tree* nctemp12944= p;
struct nctempchar1 *nctemp12948;
static struct nctempchar1 nctemp12949 = {{ 8}, (char*)"sizeof(\0"};
nctemp12948=&nctemp12949;
nctempchar1* nctemp12946= nctemp12948;
int nctemp12950=CodeEs(nctemp12944,nctemp12946);
struct tree* nctemp12952= p;
nctempchar1* nctemp12954= pointer;
int nctemp12957=CodeEs(nctemp12952,nctemp12954);
struct tree* nctemp12959= p;
struct nctempchar1 *nctemp12963;
static struct nctempchar1 nctemp12964 = {{ 6}, (char*)"));\n\0"};
nctemp12963=&nctemp12964;
nctempchar1* nctemp12961= nctemp12963;
int nctemp12965=CodeEs(nctemp12959,nctemp12961);
return 1;
}
int CodeFdefwrapperpy (struct tree* p)
{
int fdcout;
nctempchar1 *fname;
nctempchar1 *rtype;
nctempchar1 *rarray;
nctempchar1 *rstruct;
nctempchar1 *farray;
struct symbol* tp;
struct symbol* tbl;
nctempchar1 *name;
int nctemp12971=CodeGetfdout();
fdcout =nctemp12971;
int nctemp12975=CodeGetfdpython();
int nctemp12973= nctemp12975;
int nctemp12976=CodeSetfdout(nctemp12973);
struct tree* nctemp12978= p;
struct nctempchar1 *nctemp12982;
static struct nctempchar1 nctemp12983 = {{ 5}, (char*)"def \0"};
nctemp12982=&nctemp12983;
nctempchar1* nctemp12980= nctemp12982;
int nctemp12984=CodeEs(nctemp12978,nctemp12980);
struct tree* nctemp12989= p;
struct tree* nctemp12991=PtreeMvchild(nctemp12989);
p =nctemp12991;
struct tree* nctemp12997= p;
nctempchar1* nctemp12999=PtreeGetdef(nctemp12997);
fname=nctemp12999;
struct tree* nctemp13005= p;
nctempchar1* nctemp13007=PtreeGetype(nctemp13005);
rtype=nctemp13007;
struct tree* nctemp13013= p;
nctempchar1* nctemp13015=PtreeGetarray(nctemp13013);
rarray=nctemp13015;
struct tree* nctemp13021= p;
nctempchar1* nctemp13023=PtreeGetstruct(nctemp13021);
rstruct=nctemp13023;
struct tree* nctemp13029= p;
nctempchar1* nctemp13031=PtreeGetarray(nctemp13029);
farray=nctemp13031;
struct tree* nctemp13033= p;
nctempchar1* nctemp13035= fname;
int nctemp13038=CodeEs(nctemp13033,nctemp13035);
struct tree* nctemp13040= p;
struct nctempchar1 *nctemp13044;
static struct nctempchar1 nctemp13045 = {{ 8}, (char*)"(pylib,\0"};
nctemp13044=&nctemp13045;
nctempchar1* nctemp13042= nctemp13044;
int nctemp13046=CodeEs(nctemp13040,nctemp13042);
struct symbol* nctemp13051=SymGetetp();
tp =nctemp13051;
struct tree* nctemp13058= p;
nctempchar1* nctemp13060=PtreeGetdef(nctemp13058);
nctempchar1* nctemp13056= nctemp13060;
struct symbol* nctemp13061= tp;
struct symbol* nctemp13063=SymLookup(nctemp13056,nctemp13061);
tp =nctemp13063;
struct symbol* nctemp13068= tp;
struct symbol* nctemp13070=SymGetable(nctemp13068);
tp =nctemp13070;
struct nctempchar1 *nctemp13077;
static struct nctempchar1 nctemp13078 = {{ 9}, (char*)"#arglist\0"};
nctemp13077=&nctemp13078;
nctempchar1* nctemp13075= nctemp13077;
struct symbol* nctemp13079= tp;
struct symbol* nctemp13081=SymLookup(nctemp13075,nctemp13079);
tp =nctemp13081;
struct symbol* nctemp13086= tp;
struct symbol* nctemp13088=SymGetable(nctemp13086);
tp =nctemp13088;
tbl = tp;
tp = tbl;
struct symbol* nctemp13096= tp;
struct symbol* nctemp13098=SymMvnext(nctemp13096);
tp =nctemp13098;
int nctemp13089 = (tp !=0);
int nctemp13100=nctemp13089;
while(nctemp13100)
{{
struct tree* nctemp13102= p;
struct symbol* nctemp13106= tp;
nctempchar1* nctemp13108=SymGetname(nctemp13106);
nctempchar1* nctemp13104= nctemp13108;
int nctemp13109=CodeEs(nctemp13102,nctemp13104);
struct symbol* nctemp13113= tp;
struct symbol* nctemp13115=SymMvnext(nctemp13113);
int nctemp13110 = (nctemp13115 !=0);
if(nctemp13110)
{
struct tree* nctemp13118= p;
struct nctempchar1 *nctemp13122;
static struct nctempchar1 nctemp13123 = {{ 2}, (char*)",\0"};
nctemp13122=&nctemp13123;
nctempchar1* nctemp13120= nctemp13122;
int nctemp13124=CodeEs(nctemp13118,nctemp13120);
}
}
struct symbol* nctemp13132= tp;
struct symbol* nctemp13134=SymMvnext(nctemp13132);
tp =nctemp13134;
int nctemp13125 = (tp !=0);
nctemp13100=nctemp13125;}struct tree* nctemp13137= p;
struct nctempchar1 *nctemp13141;
static struct nctempchar1 nctemp13142 = {{ 2}, (char*)")\0"};
nctemp13141=&nctemp13142;
nctempchar1* nctemp13139= nctemp13141;
int nctemp13143=CodeEs(nctemp13137,nctemp13139);
struct tree* nctemp13145= p;
struct nctempchar1 *nctemp13149;
static struct nctempchar1 nctemp13150 = {{ 2}, (char*)":\0"};
nctemp13149=&nctemp13150;
nctempchar1* nctemp13147= nctemp13149;
int nctemp13151=CodeEs(nctemp13145,nctemp13147);
struct tree* nctemp13153= p;
struct nctempchar1 *nctemp13157;
static struct nctempchar1 nctemp13158 = {{ 3}, (char*)"\n\0"};
nctemp13157=&nctemp13158;
nctempchar1* nctemp13155= nctemp13157;
int nctemp13159=CodeEs(nctemp13153,nctemp13155);
tp = tbl;
struct tree* nctemp13161= p;
int nctemp13163=CodeEind(nctemp13161);
struct tree* nctemp13165= p;
struct nctempchar1 *nctemp13169;
static struct nctempchar1 nctemp13170 = {{ 7}, (char*)"pylib.\0"};
nctemp13169=&nctemp13170;
nctempchar1* nctemp13167= nctemp13169;
int nctemp13171=CodeEs(nctemp13165,nctemp13167);
struct tree* nctemp13173= p;
nctempchar1* nctemp13175= fname;
int nctemp13178=CodeEs(nctemp13173,nctemp13175);
struct tree* nctemp13180= p;
struct nctempchar1 *nctemp13184;
static struct nctempchar1 nctemp13185 = {{ 13}, (char*)".argtypes =[\0"};
nctemp13184=&nctemp13185;
nctempchar1* nctemp13182= nctemp13184;
int nctemp13186=CodeEs(nctemp13180,nctemp13182);
struct symbol* nctemp13194= tp;
struct symbol* nctemp13196=SymMvnext(nctemp13194);
tp =nctemp13196;
int nctemp13187 = (tp !=0);
int nctemp13198=nctemp13187;
while(nctemp13198)
{{
struct symbol* nctemp13204= tp;
nctempchar1* nctemp13206=SymGetarray(nctemp13204);
nctempchar1* nctemp13202= nctemp13206;
struct nctempchar1 *nctemp13209;
static struct nctempchar1 nctemp13210 = {{ 6}, (char*)"array\0"};
nctemp13209=&nctemp13210;
nctempchar1* nctemp13207= nctemp13209;
int nctemp13211=LibeStrcmp(nctemp13202,nctemp13207);
int nctemp13199 = (nctemp13211 ==1);
if(nctemp13199)
{
struct tree* nctemp13214= p;
struct nctempchar1 *nctemp13218;
static struct nctempchar1 nctemp13219 = {{ 9}, (char*)"c_void_p\0"};
nctemp13218=&nctemp13219;
nctempchar1* nctemp13216= nctemp13218;
int nctemp13220=CodeEs(nctemp13214,nctemp13216);
}
else{
struct symbol* nctemp13226= tp;
nctempchar1* nctemp13228=SymGetstruct(nctemp13226);
nctempchar1* nctemp13224= nctemp13228;
struct nctempchar1 *nctemp13231;
static struct nctempchar1 nctemp13232 = {{ 7}, (char*)"struct\0"};
nctemp13231=&nctemp13232;
nctempchar1* nctemp13229= nctemp13231;
int nctemp13233=LibeStrcmp(nctemp13224,nctemp13229);
int nctemp13221 = (nctemp13233 ==1);
if(nctemp13221)
{
struct tree* nctemp13236= p;
struct nctempchar1 *nctemp13240;
static struct nctempchar1 nctemp13241 = {{ 9}, (char*)"c_void_p\0"};
nctemp13240=&nctemp13241;
nctempchar1* nctemp13238= nctemp13240;
int nctemp13242=CodeEs(nctemp13236,nctemp13238);
}
else{
struct tree* nctemp13244= p;
struct nctempchar1 *nctemp13248;
static struct nctempchar1 nctemp13249 = {{ 3}, (char*)"c_\0"};
nctemp13248=&nctemp13249;
nctempchar1* nctemp13246= nctemp13248;
int nctemp13250=CodeEs(nctemp13244,nctemp13246);
struct tree* nctemp13252= p;
struct symbol* nctemp13256= tp;
nctempchar1* nctemp13258=SymGetype(nctemp13256);
nctempchar1* nctemp13254= nctemp13258;
int nctemp13259=CodeEs(nctemp13252,nctemp13254);
}
}
struct symbol* nctemp13263= tp;
struct symbol* nctemp13265=SymMvnext(nctemp13263);
int nctemp13260 = (nctemp13265 !=0);
if(nctemp13260)
{
struct tree* nctemp13268= p;
struct nctempchar1 *nctemp13272;
static struct nctempchar1 nctemp13273 = {{ 2}, (char*)",\0"};
nctemp13272=&nctemp13273;
nctempchar1* nctemp13270= nctemp13272;
int nctemp13274=CodeEs(nctemp13268,nctemp13270);
}
}
struct symbol* nctemp13282= tp;
struct symbol* nctemp13284=SymMvnext(nctemp13282);
tp =nctemp13284;
int nctemp13275 = (tp !=0);
nctemp13198=nctemp13275;}struct tree* nctemp13287= p;
struct nctempchar1 *nctemp13291;
static struct nctempchar1 nctemp13292 = {{ 2}, (char*)"]\0"};
nctemp13291=&nctemp13292;
nctempchar1* nctemp13289= nctemp13291;
int nctemp13293=CodeEs(nctemp13287,nctemp13289);
struct tree* nctemp13295= p;
struct nctempchar1 *nctemp13299;
static struct nctempchar1 nctemp13300 = {{ 3}, (char*)"\n\0"};
nctemp13299=&nctemp13300;
nctempchar1* nctemp13297= nctemp13299;
int nctemp13301=CodeEs(nctemp13295,nctemp13297);
struct tree* nctemp13303= p;
int nctemp13305=CodeEind(nctemp13303);
struct tree* nctemp13307= p;
struct nctempchar1 *nctemp13311;
static struct nctempchar1 nctemp13312 = {{ 7}, (char*)"pylib.\0"};
nctemp13311=&nctemp13312;
nctempchar1* nctemp13309= nctemp13311;
int nctemp13313=CodeEs(nctemp13307,nctemp13309);
struct tree* nctemp13315= p;
nctempchar1* nctemp13317= fname;
int nctemp13320=CodeEs(nctemp13315,nctemp13317);
struct tree* nctemp13322= p;
struct nctempchar1 *nctemp13326;
static struct nctempchar1 nctemp13327 = {{ 10}, (char*)".restype=\0"};
nctemp13326=&nctemp13327;
nctempchar1* nctemp13324= nctemp13326;
int nctemp13328=CodeEs(nctemp13322,nctemp13324);
nctempchar1* nctemp13332= farray;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 6}, (char*)"array\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=LibeStrcmp(nctemp13332,nctemp13335);
int nctemp13329 = (nctemp13339 ==0);
if(nctemp13329)
{
struct tree* nctemp13342= p;
nctempchar1* nctemp13344= rtype;
int nctemp13347=CodeEs(nctemp13342,nctemp13344);
struct tree* nctemp13349= p;
struct nctempchar1 *nctemp13353;
static struct nctempchar1 nctemp13354 = {{ 3}, (char*)"\n\0"};
nctemp13353=&nctemp13354;
nctempchar1* nctemp13351= nctemp13353;
int nctemp13355=CodeEs(nctemp13349,nctemp13351);
}
else{
struct tree* nctemp13357= p;
struct nctempchar1 *nctemp13361;
static struct nctempchar1 nctemp13362 = {{ 9}, (char*)"c_void_p\0"};
nctemp13361=&nctemp13362;
nctempchar1* nctemp13359= nctemp13361;
int nctemp13363=CodeEs(nctemp13357,nctemp13359);
}
tp = tbl;
struct symbol* nctemp13371= tp;
struct symbol* nctemp13373=SymMvnext(nctemp13371);
tp =nctemp13373;
int nctemp13364 = (tp !=0);
int nctemp13375=nctemp13364;
while(nctemp13375)
{{
struct symbol* nctemp13384= tp;
nctempchar1* nctemp13386=SymGetarray(nctemp13384);
nctempchar1* nctemp13382= nctemp13386;
struct nctempchar1 *nctemp13389;
static struct nctempchar1 nctemp13390 = {{ 6}, (char*)"array\0"};
nctemp13389=&nctemp13390;
nctempchar1* nctemp13387= nctemp13389;
int nctemp13391=LibeStrcmp(nctemp13382,nctemp13387);
int nctemp13379 = (nctemp13391 ==1);
struct symbol* nctemp13399= tp;
nctempchar1* nctemp13401=SymGetstruct(nctemp13399);
nctempchar1* nctemp13397= nctemp13401;
struct nctempchar1 *nctemp13404;
static struct nctempchar1 nctemp13405 = {{ 7}, (char*)"struct\0"};
nctemp13404=&nctemp13405;
nctempchar1* nctemp13402= nctemp13404;
int nctemp13406=LibeStrcmp(nctemp13397,nctemp13402);
int nctemp13394 = (nctemp13406 ==0);
int nctemp13376 = (nctemp13379 && nctemp13394);
if(nctemp13376)
{
struct symbol* nctemp13413= tp;
nctempchar1* nctemp13415=SymGetname(nctemp13413);
name=nctemp13415;
struct tree* nctemp13417= p;
int nctemp13419=CodeEind(nctemp13417);
struct tree* nctemp13421= p;
nctempchar1* nctemp13423= name;
int nctemp13426=CodeEs(nctemp13421,nctemp13423);
struct tree* nctemp13428= p;
struct nctempchar1 *nctemp13432;
static struct nctempchar1 nctemp13433 = {{ 6}, (char*)"_eps=\0"};
nctemp13432=&nctemp13433;
nctempchar1* nctemp13430= nctemp13432;
int nctemp13434=CodeEs(nctemp13428,nctemp13430);
struct tree* nctemp13436= p;
struct nctempchar1 *nctemp13440;
static struct nctempchar1 nctemp13441 = {{ 7}, (char*)"pyeps.\0"};
nctemp13440=&nctemp13441;
nctempchar1* nctemp13438= nctemp13440;
int nctemp13442=CodeEs(nctemp13436,nctemp13438);
struct tree* nctemp13444= p;
struct nctempchar1 *nctemp13448;
static struct nctempchar1 nctemp13449 = {{ 16}, (char*)"Store2df(pylib,\0"};
nctemp13448=&nctemp13449;
nctempchar1* nctemp13446= nctemp13448;
int nctemp13450=CodeEs(nctemp13444,nctemp13446);
struct tree* nctemp13452= p;
nctempchar1* nctemp13454= name;
int nctemp13457=CodeEs(nctemp13452,nctemp13454);
struct tree* nctemp13459= p;
struct nctempchar1 *nctemp13463;
static struct nctempchar1 nctemp13464 = {{ 2}, (char*)")\0"};
nctemp13463=&nctemp13464;
nctempchar1* nctemp13461= nctemp13463;
int nctemp13465=CodeEs(nctemp13459,nctemp13461);
struct tree* nctemp13467= p;
struct nctempchar1 *nctemp13471;
static struct nctempchar1 nctemp13472 = {{ 3}, (char*)"\n\0"};
nctemp13471=&nctemp13472;
nctempchar1* nctemp13469= nctemp13471;
int nctemp13473=CodeEs(nctemp13467,nctemp13469);
}
}
struct symbol* nctemp13481= tp;
struct symbol* nctemp13483=SymMvnext(nctemp13481);
tp =nctemp13483;
int nctemp13474 = (tp !=0);
nctemp13375=nctemp13474;}tp = tbl;
struct tree* nctemp13486= p;
int nctemp13488=CodeEind(nctemp13486);
struct tree* nctemp13490= p;
struct nctempchar1 *nctemp13494;
static struct nctempchar1 nctemp13495 = {{ 13}, (char*)"r_val=pylib.\0"};
nctemp13494=&nctemp13495;
nctempchar1* nctemp13492= nctemp13494;
int nctemp13496=CodeEs(nctemp13490,nctemp13492);
struct tree* nctemp13498= p;
nctempchar1* nctemp13500= fname;
int nctemp13503=CodeEs(nctemp13498,nctemp13500);
struct tree* nctemp13505= p;
struct nctempchar1 *nctemp13509;
static struct nctempchar1 nctemp13510 = {{ 2}, (char*)"(\0"};
nctemp13509=&nctemp13510;
nctempchar1* nctemp13507= nctemp13509;
int nctemp13511=CodeEs(nctemp13505,nctemp13507);
struct symbol* nctemp13519= tp;
struct symbol* nctemp13521=SymMvnext(nctemp13519);
tp =nctemp13521;
int nctemp13512 = (tp !=0);
int nctemp13523=nctemp13512;
while(nctemp13523)
{{
struct symbol* nctemp13532= tp;
nctempchar1* nctemp13534=SymGetarray(nctemp13532);
nctempchar1* nctemp13530= nctemp13534;
struct nctempchar1 *nctemp13537;
static struct nctempchar1 nctemp13538 = {{ 6}, (char*)"array\0"};
nctemp13537=&nctemp13538;
nctempchar1* nctemp13535= nctemp13537;
int nctemp13539=LibeStrcmp(nctemp13530,nctemp13535);
int nctemp13527 = (nctemp13539 ==1);
struct symbol* nctemp13547= tp;
nctempchar1* nctemp13549=SymGetstruct(nctemp13547);
nctempchar1* nctemp13545= nctemp13549;
struct nctempchar1 *nctemp13552;
static struct nctempchar1 nctemp13553 = {{ 7}, (char*)"struct\0"};
nctemp13552=&nctemp13553;
nctempchar1* nctemp13550= nctemp13552;
int nctemp13554=LibeStrcmp(nctemp13545,nctemp13550);
int nctemp13542 = (nctemp13554 ==0);
int nctemp13524 = (nctemp13527 && nctemp13542);
if(nctemp13524)
{
struct symbol* nctemp13561= tp;
nctempchar1* nctemp13563=SymGetname(nctemp13561);
name=nctemp13563;
struct tree* nctemp13565= p;
nctempchar1* nctemp13567= name;
int nctemp13570=CodeEs(nctemp13565,nctemp13567);
struct tree* nctemp13572= p;
struct nctempchar1 *nctemp13576;
static struct nctempchar1 nctemp13577 = {{ 5}, (char*)"_eps\0"};
nctemp13576=&nctemp13577;
nctempchar1* nctemp13574= nctemp13576;
int nctemp13578=CodeEs(nctemp13572,nctemp13574);
}
else{
struct tree* nctemp13580= p;
struct symbol* nctemp13584= tp;
nctempchar1* nctemp13586=SymGetname(nctemp13584);
nctempchar1* nctemp13582= nctemp13586;
int nctemp13587=CodeEs(nctemp13580,nctemp13582);
}
struct symbol* nctemp13591= tp;
struct symbol* nctemp13593=SymMvnext(nctemp13591);
int nctemp13588 = (nctemp13593 !=0);
if(nctemp13588)
{
struct tree* nctemp13596= p;
struct nctempchar1 *nctemp13600;
static struct nctempchar1 nctemp13601 = {{ 2}, (char*)",\0"};
nctemp13600=&nctemp13601;
nctempchar1* nctemp13598= nctemp13600;
int nctemp13602=CodeEs(nctemp13596,nctemp13598);
}
}
struct symbol* nctemp13610= tp;
struct symbol* nctemp13612=SymMvnext(nctemp13610);
tp =nctemp13612;
int nctemp13603 = (tp !=0);
nctemp13523=nctemp13603;}struct tree* nctemp13615= p;
struct nctempchar1 *nctemp13619;
static struct nctempchar1 nctemp13620 = {{ 2}, (char*)")\0"};
nctemp13619=&nctemp13620;
nctempchar1* nctemp13617= nctemp13619;
int nctemp13621=CodeEs(nctemp13615,nctemp13617);
struct tree* nctemp13623= p;
struct nctempchar1 *nctemp13627;
static struct nctempchar1 nctemp13628 = {{ 3}, (char*)"\n\0"};
nctemp13627=&nctemp13628;
nctempchar1* nctemp13625= nctemp13627;
int nctemp13629=CodeEs(nctemp13623,nctemp13625);
tp = tbl;
struct symbol* nctemp13637= tp;
struct symbol* nctemp13639=SymMvnext(nctemp13637);
tp =nctemp13639;
int nctemp13630 = (tp !=0);
int nctemp13641=nctemp13630;
while(nctemp13641)
{{
struct symbol* nctemp13650= tp;
nctempchar1* nctemp13652=SymGetarray(nctemp13650);
nctempchar1* nctemp13648= nctemp13652;
struct nctempchar1 *nctemp13655;
static struct nctempchar1 nctemp13656 = {{ 6}, (char*)"array\0"};
nctemp13655=&nctemp13656;
nctempchar1* nctemp13653= nctemp13655;
int nctemp13657=LibeStrcmp(nctemp13648,nctemp13653);
int nctemp13645 = (nctemp13657 ==1);
struct symbol* nctemp13665= tp;
nctempchar1* nctemp13667=SymGetstruct(nctemp13665);
nctempchar1* nctemp13663= nctemp13667;
struct nctempchar1 *nctemp13670;
static struct nctempchar1 nctemp13671 = {{ 7}, (char*)"struct\0"};
nctemp13670=&nctemp13671;
nctempchar1* nctemp13668= nctemp13670;
int nctemp13672=LibeStrcmp(nctemp13663,nctemp13668);
int nctemp13660 = (nctemp13672 ==0);
int nctemp13642 = (nctemp13645 && nctemp13660);
if(nctemp13642)
{
struct symbol* nctemp13679= tp;
nctempchar1* nctemp13681=SymGetname(nctemp13679);
name=nctemp13681;
struct tree* nctemp13683= p;
int nctemp13685=CodeEind(nctemp13683);
struct tree* nctemp13687= p;
struct nctempchar1 *nctemp13691;
static struct nctempchar1 nctemp13692 = {{ 7}, (char*)"pyeps.\0"};
nctemp13691=&nctemp13692;
nctempchar1* nctemp13689= nctemp13691;
int nctemp13693=CodeEs(nctemp13687,nctemp13689);
struct tree* nctemp13695= p;
struct nctempchar1 *nctemp13699;
static struct nctempchar1 nctemp13700 = {{ 14}, (char*)"Get2df(pylib,\0"};
nctemp13699=&nctemp13700;
nctempchar1* nctemp13697= nctemp13699;
int nctemp13701=CodeEs(nctemp13695,nctemp13697);
struct tree* nctemp13703= p;
nctempchar1* nctemp13705= name;
int nctemp13708=CodeEs(nctemp13703,nctemp13705);
struct tree* nctemp13710= p;
struct nctempchar1 *nctemp13714;
static struct nctempchar1 nctemp13715 = {{ 6}, (char*)"_eps,\0"};
nctemp13714=&nctemp13715;
nctempchar1* nctemp13712= nctemp13714;
int nctemp13716=CodeEs(nctemp13710,nctemp13712);
struct tree* nctemp13718= p;
nctempchar1* nctemp13720= name;
int nctemp13723=CodeEs(nctemp13718,nctemp13720);
struct tree* nctemp13725= p;
struct nctempchar1 *nctemp13729;
static struct nctempchar1 nctemp13730 = {{ 4}, (char*)")\n\0"};
nctemp13729=&nctemp13730;
nctempchar1* nctemp13727= nctemp13729;
int nctemp13731=CodeEs(nctemp13725,nctemp13727);
}
}
struct symbol* nctemp13739= tp;
struct symbol* nctemp13741=SymMvnext(nctemp13739);
tp =nctemp13741;
int nctemp13732 = (tp !=0);
nctemp13641=nctemp13732;}nctempchar1* nctemp13746= rarray;
struct nctempchar1 *nctemp13751;
static struct nctempchar1 nctemp13752 = {{ 6}, (char*)"array\0"};
nctemp13751=&nctemp13752;
nctempchar1* nctemp13749= nctemp13751;
int nctemp13753=LibeStrcmp(nctemp13746,nctemp13749);
int nctemp13743 = (nctemp13753 ==1);
if(nctemp13743)
{
struct tree* nctemp13756= p;
int nctemp13758=CodeEind(nctemp13756);
struct tree* nctemp13760= p;
struct nctempchar1 *nctemp13764;
static struct nctempchar1 nctemp13765 = {{ 8}, (char*)"rval = \0"};
nctemp13764=&nctemp13765;
nctempchar1* nctemp13762= nctemp13764;
int nctemp13766=CodeEs(nctemp13760,nctemp13762);
struct tree* nctemp13768= p;
struct nctempchar1 *nctemp13772;
static struct nctempchar1 nctemp13773 = {{ 27}, (char*)"pylib.Getf2d(rval,r_val)\n\0"};
nctemp13772=&nctemp13773;
nctempchar1* nctemp13770= nctemp13772;
int nctemp13774=CodeEs(nctemp13768,nctemp13770);
}
else{
struct tree* nctemp13776= p;
int nctemp13778=CodeEind(nctemp13776);
struct tree* nctemp13780= p;
struct nctempchar1 *nctemp13784;
static struct nctempchar1 nctemp13785 = {{ 15}, (char*)"rval = r_val\n\0"};
nctemp13784=&nctemp13785;
nctempchar1* nctemp13782= nctemp13784;
int nctemp13786=CodeEs(nctemp13780,nctemp13782);
}
struct tree* nctemp13788= p;
int nctemp13790=CodeEind(nctemp13788);
struct tree* nctemp13792= p;
struct nctempchar1 *nctemp13796;
static struct nctempchar1 nctemp13797 = {{ 14}, (char*)"return rval\n\0"};
nctemp13796=&nctemp13797;
nctempchar1* nctemp13794= nctemp13796;
int nctemp13798=CodeEs(nctemp13792,nctemp13794);
int nctemp13800= fdcout;
int nctemp13802=CodeSetfdout(nctemp13800);
}
int CodeFdef (struct tree* p)
{
int nctemp13806=CodeGetarch();
int nctemp13803 = (nctemp13806 ==1);
if(nctemp13803)
{
struct tree* nctemp13809= p;
int nctemp13811=CodeFdefcpu(nctemp13809);
int nctemp13815=CodeGetpython();
int nctemp13812 = (nctemp13815 ==1);
if(nctemp13812)
{
struct tree* nctemp13818= p;
int nctemp13820=CodeFdefwrapperpy(nctemp13818);
}
}
else{
int nctemp13824=CodeGetarch();
int nctemp13821 = (nctemp13824 ==2);
if(nctemp13821)
{
struct tree* nctemp13833= p;
struct tree* nctemp13835=PtreeMvchild(nctemp13833);
struct tree* nctemp13831= nctemp13835;
nctempchar1* nctemp13836=PtreeGetparallel(nctemp13831);
nctempchar1* nctemp13829= nctemp13836;
struct nctempchar1 *nctemp13839;
static struct nctempchar1 nctemp13840 = {{ 9}, (char*)"parallel\0"};
nctemp13839=&nctemp13840;
nctempchar1* nctemp13837= nctemp13839;
int nctemp13841=LibeStrcmp(nctemp13829,nctemp13837);
int nctemp13826 = (nctemp13841 ==1);
if(nctemp13826)
{
struct tree* nctemp13844= p;
int nctemp13846=CodeFdefgpu(nctemp13844);
struct tree* nctemp13848= p;
int nctemp13850=CodeFdewrappergpu(nctemp13848);
int nctemp13854=CodeGetpython();
int nctemp13851 = (nctemp13854 ==1);
if(nctemp13851)
{
struct tree* nctemp13857= p;
int nctemp13859=CodeFdefwrapperpy(nctemp13857);
}
}
else{
struct tree* nctemp13861= p;
int nctemp13863=CodeFdefcpu(nctemp13861);
int nctemp13867=CodeGetpython();
int nctemp13864 = (nctemp13867 ==1);
if(nctemp13864)
{
struct tree* nctemp13870= p;
int nctemp13872=CodeFdefwrapperpy(nctemp13870);
}
}
}
else{
int nctemp13876=CodeGetarch();
int nctemp13873 = (nctemp13876 ==3);
if(nctemp13873)
{
struct tree* nctemp13883= p;
nctempchar1* nctemp13885=PtreeGetparallel(nctemp13883);
nctempchar1* nctemp13881= nctemp13885;
struct nctempchar1 *nctemp13888;
static struct nctempchar1 nctemp13889 = {{ 9}, (char*)"parallel\0"};
nctemp13888=&nctemp13889;
nctempchar1* nctemp13886= nctemp13888;
int nctemp13890=LibeStrcmp(nctemp13881,nctemp13886);
int nctemp13878 = (nctemp13890 ==1);
if(nctemp13878)
{
struct tree* nctemp13893= p;
int nctemp13895=CodeFdefgpu(nctemp13893);
struct tree* nctemp13897= p;
int nctemp13899=CodeFdewrappergpu(nctemp13897);
int nctemp13903=CodeGetpython();
int nctemp13900 = (nctemp13903 ==1);
if(nctemp13900)
{
struct tree* nctemp13906= p;
int nctemp13908=CodeFdefwrapperpy(nctemp13906);
}
}
else{
struct tree* nctemp13910= p;
int nctemp13912=CodeFdefcpu(nctemp13910);
int nctemp13916=CodeGetpython();
int nctemp13913 = (nctemp13916 ==1);
if(nctemp13913)
{
struct tree* nctemp13919= p;
int nctemp13921=CodeFdefwrapperpy(nctemp13919);
}
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13929;
static struct nctempchar1 nctemp13930 = {{ 6}, (char*)"dummy\0"};
nctemp13929=&nctemp13930;
nctempchar1* nctemp13927= nctemp13929;
struct nctempchar1 *nctemp13933;
static struct nctempchar1 nctemp13934 = {{ 6}, (char*)"dummy\0"};
nctemp13933=&nctemp13934;
nctempchar1* nctemp13931= nctemp13933;
struct tree* nctemp13935=PtreeMknode(nctemp13927,nctemp13931);
p =nctemp13935;
struct tree* nctemp13937= p;
int nctemp13939= 1;
int nctemp13941=PtreeSetline(nctemp13937,nctemp13939);
struct tree* nctemp13943= p;
struct nctempchar1 *nctemp13947;
static struct nctempchar1 nctemp13948 = {{ 34}, (char*)"//  Translated by epsc  version: \0"};
nctemp13947=&nctemp13948;
nctempchar1* nctemp13945= nctemp13947;
int nctemp13949=CodeEs(nctemp13943,nctemp13945);
struct tree* nctemp13951= p;
nctempchar1* nctemp13955=LibeDate();
nctempchar1* nctemp13953= nctemp13955;
int nctemp13956=CodeEs(nctemp13951,nctemp13953);
struct tree* nctemp13958= p;
struct nctempchar1 *nctemp13962;
static struct nctempchar1 nctemp13963 = {{ 3}, (char*)"\n\0"};
nctemp13962=&nctemp13963;
nctempchar1* nctemp13960= nctemp13962;
int nctemp13964=CodeEs(nctemp13958,nctemp13960);
struct tree* nctemp13966= p;
int nctemp13968= 2;
int nctemp13970=PtreeSetline(nctemp13966,nctemp13968);
struct tree* nctemp13972= p;
int nctemp13974= 3;
int nctemp13976=PtreeSetline(nctemp13972,nctemp13974);
struct tree* nctemp13978= p;
int nctemp13980= 4;
int nctemp13982=PtreeSetline(nctemp13978,nctemp13980);
struct tree* nctemp13984= p;
struct nctempchar1 *nctemp13988;
static struct nctempchar1 nctemp13989 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13988=&nctemp13989;
nctempchar1* nctemp13986= nctemp13988;
int nctemp13990=CodeEs(nctemp13984,nctemp13986);
struct tree* nctemp13992= p;
struct nctempchar1 *nctemp13996;
static struct nctempchar1 nctemp13997 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13996=&nctemp13997;
nctempchar1* nctemp13994= nctemp13996;
int nctemp13998=CodeEs(nctemp13992,nctemp13994);
struct tree* nctemp14000= p;
struct nctempchar1 *nctemp14004;
static struct nctempchar1 nctemp14005 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp14004=&nctemp14005;
nctempchar1* nctemp14002= nctemp14004;
int nctemp14006=CodeEs(nctemp14000,nctemp14002);
struct tree* nctemp14008= p;
struct nctempchar1 *nctemp14012;
static struct nctempchar1 nctemp14013 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14012=&nctemp14013;
nctempchar1* nctemp14010= nctemp14012;
int nctemp14014=CodeEs(nctemp14008,nctemp14010);
struct tree* nctemp14016= p;
int nctemp14018= 3;
int nctemp14020=PtreeSetline(nctemp14016,nctemp14018);
struct tree* nctemp14022= p;
struct nctempchar1 *nctemp14026;
static struct nctempchar1 nctemp14027 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14026=&nctemp14027;
nctempchar1* nctemp14024= nctemp14026;
int nctemp14028=CodeEs(nctemp14022,nctemp14024);
struct tree* nctemp14030= p;
int nctemp14032= 5;
int nctemp14034=PtreeSetline(nctemp14030,nctemp14032);
struct tree* nctemp14036= p;
struct nctempchar1 *nctemp14040;
static struct nctempchar1 nctemp14041 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14040=&nctemp14041;
nctempchar1* nctemp14038= nctemp14040;
int nctemp14042=CodeEs(nctemp14036,nctemp14038);
struct tree* nctemp14044= p;
int nctemp14046= 7;
int nctemp14048=PtreeSetline(nctemp14044,nctemp14046);
struct tree* nctemp14050= p;
struct nctempchar1 *nctemp14054;
static struct nctempchar1 nctemp14055 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14054=&nctemp14055;
nctempchar1* nctemp14052= nctemp14054;
int nctemp14056=CodeEs(nctemp14050,nctemp14052);
struct tree* nctemp14058= p;
int nctemp14060= 7;
int nctemp14062=PtreeSetline(nctemp14058,nctemp14060);
struct tree* nctemp14064= p;
struct nctempchar1 *nctemp14068;
static struct nctempchar1 nctemp14069 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14068=&nctemp14069;
nctempchar1* nctemp14066= nctemp14068;
int nctemp14070=CodeEs(nctemp14064,nctemp14066);
struct tree* nctemp14072= p;
int nctemp14074= 8;
int nctemp14076=PtreeSetline(nctemp14072,nctemp14074);
int nctemp14080=CodeArraycheck();
int nctemp14077 = (nctemp14080 ==1);
if(nctemp14077)
{
struct tree* nctemp14083= p;
struct nctempchar1 *nctemp14087;
static struct nctempchar1 nctemp14088 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp14087=&nctemp14088;
nctempchar1* nctemp14085= nctemp14087;
int nctemp14089=CodeEs(nctemp14083,nctemp14085);
struct tree* nctemp14091= p;
struct nctempchar1 *nctemp14095;
static struct nctempchar1 nctemp14096 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp14095=&nctemp14096;
nctempchar1* nctemp14093= nctemp14095;
int nctemp14097=CodeEs(nctemp14091,nctemp14093);
struct tree* nctemp14099= p;
int nctemp14101= 8;
int nctemp14103=PtreeSetline(nctemp14099,nctemp14101);
}
struct tree* nctemp14105= p;
struct nctempchar1 *nctemp14109;
static struct nctempchar1 nctemp14110 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14109=&nctemp14110;
nctempchar1* nctemp14107= nctemp14109;
int nctemp14111=CodeEs(nctemp14105,nctemp14107);
struct tree* nctemp14113= p;
int nctemp14115= 10;
int nctemp14117=PtreeSetline(nctemp14113,nctemp14115);
struct tree* nctemp14119= p;
struct nctempchar1 *nctemp14123;
static struct nctempchar1 nctemp14124 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14123=&nctemp14124;
nctempchar1* nctemp14121= nctemp14123;
int nctemp14125=CodeEs(nctemp14119,nctemp14121);
struct tree* nctemp14127= p;
int nctemp14129= 10;
int nctemp14131=PtreeSetline(nctemp14127,nctemp14129);
struct tree* nctemp14133= p;
struct nctempchar1 *nctemp14137;
static struct nctempchar1 nctemp14138 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14137=&nctemp14138;
nctempchar1* nctemp14135= nctemp14137;
int nctemp14139=CodeEs(nctemp14133,nctemp14135);
struct tree* nctemp14141= p;
int nctemp14143= 12;
int nctemp14145=PtreeSetline(nctemp14141,nctemp14143);
struct tree* nctemp14147= p;
struct nctempchar1 *nctemp14151;
static struct nctempchar1 nctemp14152 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14151=&nctemp14152;
nctempchar1* nctemp14149= nctemp14151;
int nctemp14153=CodeEs(nctemp14147,nctemp14149);
struct tree* nctemp14155= p;
int nctemp14157= 13;
int nctemp14159=PtreeSetline(nctemp14155,nctemp14157);
struct tree* nctemp14161= p;
struct nctempchar1 *nctemp14165;
static struct nctempchar1 nctemp14166 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14165=&nctemp14166;
nctempchar1* nctemp14163= nctemp14165;
int nctemp14167=CodeEs(nctemp14161,nctemp14163);
struct tree* nctemp14169= p;
int nctemp14171= 14;
int nctemp14173=PtreeSetline(nctemp14169,nctemp14171);
struct tree* nctemp14175= p;
struct nctempchar1 *nctemp14179;
static struct nctempchar1 nctemp14180 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14179=&nctemp14180;
nctempchar1* nctemp14177= nctemp14179;
int nctemp14181=CodeEs(nctemp14175,nctemp14177);
struct tree* nctemp14183= p;
int nctemp14185= 15;
int nctemp14187=PtreeSetline(nctemp14183,nctemp14185);
struct tree* nctemp14189= p;
struct nctempchar1 *nctemp14193;
static struct nctempchar1 nctemp14194 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14193=&nctemp14194;
nctempchar1* nctemp14191= nctemp14193;
int nctemp14195=CodeEs(nctemp14189,nctemp14191);
struct tree* nctemp14197= p;
int nctemp14199= 16;
int nctemp14201=PtreeSetline(nctemp14197,nctemp14199);
struct tree* nctemp14203= p;
struct nctempchar1 *nctemp14207;
static struct nctempchar1 nctemp14208 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14207=&nctemp14208;
nctempchar1* nctemp14205= nctemp14207;
int nctemp14209=CodeEs(nctemp14203,nctemp14205);
struct tree* nctemp14211= p;
int nctemp14213= 17;
int nctemp14215=PtreeSetline(nctemp14211,nctemp14213);
struct tree* nctemp14217= p;
struct nctempchar1 *nctemp14221;
static struct nctempchar1 nctemp14222 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14221=&nctemp14222;
nctempchar1* nctemp14219= nctemp14221;
int nctemp14223=CodeEs(nctemp14217,nctemp14219);
struct tree* nctemp14225= p;
int nctemp14227= 18;
int nctemp14229=PtreeSetline(nctemp14225,nctemp14227);
struct tree* nctemp14231= p;
struct nctempchar1 *nctemp14235;
static struct nctempchar1 nctemp14236 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14235=&nctemp14236;
nctempchar1* nctemp14233= nctemp14235;
int nctemp14237=CodeEs(nctemp14231,nctemp14233);
struct tree* nctemp14239= p;
int nctemp14241= 19;
int nctemp14243=PtreeSetline(nctemp14239,nctemp14241);
struct tree* nctemp14245= p;
struct nctempchar1 *nctemp14249;
static struct nctempchar1 nctemp14250 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14249=&nctemp14250;
nctempchar1* nctemp14247= nctemp14249;
int nctemp14251=CodeEs(nctemp14245,nctemp14247);
struct tree* nctemp14253= p;
int nctemp14255= 20;
int nctemp14257=PtreeSetline(nctemp14253,nctemp14255);
struct tree* nctemp14259= p;
struct nctempchar1 *nctemp14263;
static struct nctempchar1 nctemp14264 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14263=&nctemp14264;
nctempchar1* nctemp14261= nctemp14263;
int nctemp14265=CodeEs(nctemp14259,nctemp14261);
struct tree* nctemp14267= p;
struct nctempchar1 *nctemp14271;
static struct nctempchar1 nctemp14272 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14271=&nctemp14272;
nctempchar1* nctemp14269= nctemp14271;
int nctemp14273=CodeEs(nctemp14267,nctemp14269);
struct tree* nctemp14275= p;
struct nctempchar1 *nctemp14279;
static struct nctempchar1 nctemp14280 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14279=&nctemp14280;
nctempchar1* nctemp14277= nctemp14279;
int nctemp14281=CodeEs(nctemp14275,nctemp14277);
struct tree* nctemp14283= p;
struct nctempchar1 *nctemp14287;
static struct nctempchar1 nctemp14288 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp14287=&nctemp14288;
nctempchar1* nctemp14285= nctemp14287;
int nctemp14289=CodeEs(nctemp14283,nctemp14285);
struct tree* nctemp14291= p;
struct nctempchar1 *nctemp14295;
static struct nctempchar1 nctemp14296 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp14295=&nctemp14296;
nctempchar1* nctemp14293= nctemp14295;
int nctemp14297=CodeEs(nctemp14291,nctemp14293);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp14305;
static struct nctempchar1 nctemp14306 = {{ 6}, (char*)"dummy\0"};
nctemp14305=&nctemp14306;
nctempchar1* nctemp14303= nctemp14305;
struct nctempchar1 *nctemp14309;
static struct nctempchar1 nctemp14310 = {{ 6}, (char*)"dummy\0"};
nctemp14309=&nctemp14310;
nctempchar1* nctemp14307= nctemp14309;
struct tree* nctemp14311=PtreeMknode(nctemp14303,nctemp14307);
p =nctemp14311;
struct tree* nctemp14313= p;
int nctemp14315= 1;
int nctemp14317=PtreeSetline(nctemp14313,nctemp14315);
struct tree* nctemp14319= p;
struct nctempchar1 *nctemp14323;
static struct nctempchar1 nctemp14324 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp14323=&nctemp14324;
nctempchar1* nctemp14321= nctemp14323;
int nctemp14325=CodeEs(nctemp14319,nctemp14321);
struct tree* nctemp14327= p;
int nctemp14329= 2;
int nctemp14331=PtreeSetline(nctemp14327,nctemp14329);
struct tree* nctemp14333= p;
int nctemp14335= 3;
int nctemp14337=PtreeSetline(nctemp14333,nctemp14335);
struct tree* nctemp14339= p;
struct nctempchar1 *nctemp14343;
static struct nctempchar1 nctemp14344 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp14343=&nctemp14344;
nctempchar1* nctemp14341= nctemp14343;
int nctemp14345=CodeEs(nctemp14339,nctemp14341);
struct tree* nctemp14347= p;
struct nctempchar1 *nctemp14351;
static struct nctempchar1 nctemp14352 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14351=&nctemp14352;
nctempchar1* nctemp14349= nctemp14351;
int nctemp14353=CodeEs(nctemp14347,nctemp14349);
struct tree* nctemp14355= p;
int nctemp14357= 3;
int nctemp14359=PtreeSetline(nctemp14355,nctemp14357);
struct tree* nctemp14361= p;
struct nctempchar1 *nctemp14365;
static struct nctempchar1 nctemp14366 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14365=&nctemp14366;
nctempchar1* nctemp14363= nctemp14365;
int nctemp14367=CodeEs(nctemp14361,nctemp14363);
struct tree* nctemp14369= p;
int nctemp14371= 5;
int nctemp14373=PtreeSetline(nctemp14369,nctemp14371);
struct tree* nctemp14375= p;
struct nctempchar1 *nctemp14379;
static struct nctempchar1 nctemp14380 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14379=&nctemp14380;
nctempchar1* nctemp14377= nctemp14379;
int nctemp14381=CodeEs(nctemp14375,nctemp14377);
struct tree* nctemp14383= p;
int nctemp14385= 7;
int nctemp14387=PtreeSetline(nctemp14383,nctemp14385);
struct tree* nctemp14389= p;
struct nctempchar1 *nctemp14393;
static struct nctempchar1 nctemp14394 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14393=&nctemp14394;
nctempchar1* nctemp14391= nctemp14393;
int nctemp14395=CodeEs(nctemp14389,nctemp14391);
struct tree* nctemp14397= p;
int nctemp14399= 7;
int nctemp14401=PtreeSetline(nctemp14397,nctemp14399);
struct tree* nctemp14403= p;
struct nctempchar1 *nctemp14407;
static struct nctempchar1 nctemp14408 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14407=&nctemp14408;
nctempchar1* nctemp14405= nctemp14407;
int nctemp14409=CodeEs(nctemp14403,nctemp14405);
struct tree* nctemp14411= p;
int nctemp14413= 8;
int nctemp14415=PtreeSetline(nctemp14411,nctemp14413);
int nctemp14419=CodeArraycheck();
int nctemp14416 = (nctemp14419 ==1);
if(nctemp14416)
{
struct tree* nctemp14422= p;
struct nctempchar1 *nctemp14426;
static struct nctempchar1 nctemp14427 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp14426=&nctemp14427;
nctempchar1* nctemp14424= nctemp14426;
int nctemp14428=CodeEs(nctemp14422,nctemp14424);
struct tree* nctemp14430= p;
struct nctempchar1 *nctemp14434;
static struct nctempchar1 nctemp14435 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp14434=&nctemp14435;
nctempchar1* nctemp14432= nctemp14434;
int nctemp14436=CodeEs(nctemp14430,nctemp14432);
struct tree* nctemp14438= p;
int nctemp14440= 8;
int nctemp14442=PtreeSetline(nctemp14438,nctemp14440);
}
struct tree* nctemp14444= p;
struct nctempchar1 *nctemp14448;
static struct nctempchar1 nctemp14449 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14448=&nctemp14449;
nctempchar1* nctemp14446= nctemp14448;
int nctemp14450=CodeEs(nctemp14444,nctemp14446);
struct tree* nctemp14452= p;
int nctemp14454= 10;
int nctemp14456=PtreeSetline(nctemp14452,nctemp14454);
struct tree* nctemp14458= p;
struct nctempchar1 *nctemp14462;
static struct nctempchar1 nctemp14463 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14462=&nctemp14463;
nctempchar1* nctemp14460= nctemp14462;
int nctemp14464=CodeEs(nctemp14458,nctemp14460);
struct tree* nctemp14466= p;
int nctemp14468= 10;
int nctemp14470=PtreeSetline(nctemp14466,nctemp14468);
struct tree* nctemp14472= p;
struct nctempchar1 *nctemp14476;
static struct nctempchar1 nctemp14477 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14476=&nctemp14477;
nctempchar1* nctemp14474= nctemp14476;
int nctemp14478=CodeEs(nctemp14472,nctemp14474);
struct tree* nctemp14480= p;
int nctemp14482= 12;
int nctemp14484=PtreeSetline(nctemp14480,nctemp14482);
struct tree* nctemp14486= p;
struct nctempchar1 *nctemp14490;
static struct nctempchar1 nctemp14491 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14490=&nctemp14491;
nctempchar1* nctemp14488= nctemp14490;
int nctemp14492=CodeEs(nctemp14486,nctemp14488);
struct tree* nctemp14494= p;
int nctemp14496= 13;
int nctemp14498=PtreeSetline(nctemp14494,nctemp14496);
struct tree* nctemp14500= p;
struct nctempchar1 *nctemp14504;
static struct nctempchar1 nctemp14505 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14504=&nctemp14505;
nctempchar1* nctemp14502= nctemp14504;
int nctemp14506=CodeEs(nctemp14500,nctemp14502);
struct tree* nctemp14508= p;
int nctemp14510= 14;
int nctemp14512=PtreeSetline(nctemp14508,nctemp14510);
struct tree* nctemp14514= p;
struct nctempchar1 *nctemp14518;
static struct nctempchar1 nctemp14519 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14518=&nctemp14519;
nctempchar1* nctemp14516= nctemp14518;
int nctemp14520=CodeEs(nctemp14514,nctemp14516);
struct tree* nctemp14522= p;
int nctemp14524= 15;
int nctemp14526=PtreeSetline(nctemp14522,nctemp14524);
struct tree* nctemp14528= p;
struct nctempchar1 *nctemp14532;
static struct nctempchar1 nctemp14533 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14532=&nctemp14533;
nctempchar1* nctemp14530= nctemp14532;
int nctemp14534=CodeEs(nctemp14528,nctemp14530);
struct tree* nctemp14536= p;
int nctemp14538= 16;
int nctemp14540=PtreeSetline(nctemp14536,nctemp14538);
struct tree* nctemp14542= p;
struct nctempchar1 *nctemp14546;
static struct nctempchar1 nctemp14547 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14546=&nctemp14547;
nctempchar1* nctemp14544= nctemp14546;
int nctemp14548=CodeEs(nctemp14542,nctemp14544);
struct tree* nctemp14550= p;
int nctemp14552= 17;
int nctemp14554=PtreeSetline(nctemp14550,nctemp14552);
struct tree* nctemp14556= p;
struct nctempchar1 *nctemp14560;
static struct nctempchar1 nctemp14561 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14560=&nctemp14561;
nctempchar1* nctemp14558= nctemp14560;
int nctemp14562=CodeEs(nctemp14556,nctemp14558);
struct tree* nctemp14564= p;
int nctemp14566= 18;
int nctemp14568=PtreeSetline(nctemp14564,nctemp14566);
struct tree* nctemp14570= p;
struct nctempchar1 *nctemp14574;
static struct nctempchar1 nctemp14575 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14574=&nctemp14575;
nctempchar1* nctemp14572= nctemp14574;
int nctemp14576=CodeEs(nctemp14570,nctemp14572);
struct tree* nctemp14578= p;
int nctemp14580= 19;
int nctemp14582=PtreeSetline(nctemp14578,nctemp14580);
struct tree* nctemp14584= p;
struct nctempchar1 *nctemp14588;
static struct nctempchar1 nctemp14589 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14588=&nctemp14589;
nctempchar1* nctemp14586= nctemp14588;
int nctemp14590=CodeEs(nctemp14584,nctemp14586);
struct tree* nctemp14592= p;
int nctemp14594= 20;
int nctemp14596=PtreeSetline(nctemp14592,nctemp14594);
struct tree* nctemp14598= p;
struct nctempchar1 *nctemp14602;
static struct nctempchar1 nctemp14603 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14602=&nctemp14603;
nctempchar1* nctemp14600= nctemp14602;
int nctemp14604=CodeEs(nctemp14598,nctemp14600);
struct tree* nctemp14606= p;
struct nctempchar1 *nctemp14610;
static struct nctempchar1 nctemp14611 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14610=&nctemp14611;
nctempchar1* nctemp14608= nctemp14610;
int nctemp14612=CodeEs(nctemp14606,nctemp14608);
struct tree* nctemp14614= p;
struct nctempchar1 *nctemp14618;
static struct nctempchar1 nctemp14619 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14618=&nctemp14619;
nctempchar1* nctemp14616= nctemp14618;
int nctemp14620=CodeEs(nctemp14614,nctemp14616);
struct tree* nctemp14622= p;
struct nctempchar1 *nctemp14626;
static struct nctempchar1 nctemp14627 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14626=&nctemp14627;
nctempchar1* nctemp14624= nctemp14626;
int nctemp14628=CodeEs(nctemp14622,nctemp14624);
struct tree* nctemp14630= p;
struct nctempchar1 *nctemp14634;
static struct nctempchar1 nctemp14635 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp14634=&nctemp14635;
nctempchar1* nctemp14632= nctemp14634;
int nctemp14636=CodeEs(nctemp14630,nctemp14632);
struct tree* nctemp14638= p;
struct nctempchar1 *nctemp14642;
static struct nctempchar1 nctemp14643 = {{ 3}, (char*)"\n\0"};
nctemp14642=&nctemp14643;
nctempchar1* nctemp14640= nctemp14642;
int nctemp14644=CodeEs(nctemp14638,nctemp14640);
struct tree* nctemp14646= p;
struct nctempchar1 *nctemp14650;
static struct nctempchar1 nctemp14651 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14650=&nctemp14651;
nctempchar1* nctemp14648= nctemp14650;
int nctemp14652=CodeEs(nctemp14646,nctemp14648);
struct tree* nctemp14654= p;
struct nctempchar1 *nctemp14658;
static struct nctempchar1 nctemp14659 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14658=&nctemp14659;
nctempchar1* nctemp14656= nctemp14658;
int nctemp14660=CodeEs(nctemp14654,nctemp14656);
struct tree* nctemp14662= p;
struct nctempchar1 *nctemp14666;
static struct nctempchar1 nctemp14667 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14666=&nctemp14667;
nctempchar1* nctemp14664= nctemp14666;
int nctemp14668=CodeEs(nctemp14662,nctemp14664);
struct tree* nctemp14670= p;
struct nctempchar1 *nctemp14674;
static struct nctempchar1 nctemp14675 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14674=&nctemp14675;
nctempchar1* nctemp14672= nctemp14674;
int nctemp14676=CodeEs(nctemp14670,nctemp14672);
struct tree* nctemp14678= p;
struct nctempchar1 *nctemp14682;
static struct nctempchar1 nctemp14683 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp14682=&nctemp14683;
nctempchar1* nctemp14680= nctemp14682;
int nctemp14684=CodeEs(nctemp14678,nctemp14680);
struct tree* nctemp14686= p;
struct nctempchar1 *nctemp14690;
static struct nctempchar1 nctemp14691 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp14690=&nctemp14691;
nctempchar1* nctemp14688= nctemp14690;
int nctemp14692=CodeEs(nctemp14686,nctemp14688);
struct tree* nctemp14694= p;
struct nctempchar1 *nctemp14698;
static struct nctempchar1 nctemp14699 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp14698=&nctemp14699;
nctempchar1* nctemp14696= nctemp14698;
int nctemp14700=CodeEs(nctemp14694,nctemp14696);
struct tree* nctemp14702= p;
struct nctempchar1 *nctemp14706;
static struct nctempchar1 nctemp14707 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp14706=&nctemp14707;
nctempchar1* nctemp14704= nctemp14706;
int nctemp14708=CodeEs(nctemp14702,nctemp14704);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp14716;
static struct nctempchar1 nctemp14717 = {{ 6}, (char*)"dummy\0"};
nctemp14716=&nctemp14717;
nctempchar1* nctemp14714= nctemp14716;
struct nctempchar1 *nctemp14720;
static struct nctempchar1 nctemp14721 = {{ 6}, (char*)"dummy\0"};
nctemp14720=&nctemp14721;
nctempchar1* nctemp14718= nctemp14720;
struct tree* nctemp14722=PtreeMknode(nctemp14714,nctemp14718);
p =nctemp14722;
struct tree* nctemp14724= p;
int nctemp14726= 1;
int nctemp14728=PtreeSetline(nctemp14724,nctemp14726);
struct tree* nctemp14730= p;
struct nctempchar1 *nctemp14734;
static struct nctempchar1 nctemp14735 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp14734=&nctemp14735;
nctempchar1* nctemp14732= nctemp14734;
int nctemp14736=CodeEs(nctemp14730,nctemp14732);
struct tree* nctemp14738= p;
int nctemp14740= 2;
int nctemp14742=PtreeSetline(nctemp14738,nctemp14740);
struct tree* nctemp14744= p;
int nctemp14746= 3;
int nctemp14748=PtreeSetline(nctemp14744,nctemp14746);
struct tree* nctemp14750= p;
struct nctempchar1 *nctemp14754;
static struct nctempchar1 nctemp14755 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14754=&nctemp14755;
nctempchar1* nctemp14752= nctemp14754;
int nctemp14756=CodeEs(nctemp14750,nctemp14752);
struct tree* nctemp14758= p;
int nctemp14760= 3;
int nctemp14762=PtreeSetline(nctemp14758,nctemp14760);
struct tree* nctemp14764= p;
struct nctempchar1 *nctemp14768;
static struct nctempchar1 nctemp14769 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14768=&nctemp14769;
nctempchar1* nctemp14766= nctemp14768;
int nctemp14770=CodeEs(nctemp14764,nctemp14766);
struct tree* nctemp14772= p;
int nctemp14774= 5;
int nctemp14776=PtreeSetline(nctemp14772,nctemp14774);
struct tree* nctemp14778= p;
struct nctempchar1 *nctemp14782;
static struct nctempchar1 nctemp14783 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14782=&nctemp14783;
nctempchar1* nctemp14780= nctemp14782;
int nctemp14784=CodeEs(nctemp14778,nctemp14780);
struct tree* nctemp14786= p;
int nctemp14788= 7;
int nctemp14790=PtreeSetline(nctemp14786,nctemp14788);
struct tree* nctemp14792= p;
struct nctempchar1 *nctemp14796;
static struct nctempchar1 nctemp14797 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14796=&nctemp14797;
nctempchar1* nctemp14794= nctemp14796;
int nctemp14798=CodeEs(nctemp14792,nctemp14794);
struct tree* nctemp14800= p;
int nctemp14802= 7;
int nctemp14804=PtreeSetline(nctemp14800,nctemp14802);
struct tree* nctemp14806= p;
struct nctempchar1 *nctemp14810;
static struct nctempchar1 nctemp14811 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14810=&nctemp14811;
nctempchar1* nctemp14808= nctemp14810;
int nctemp14812=CodeEs(nctemp14806,nctemp14808);
struct tree* nctemp14814= p;
int nctemp14816= 8;
int nctemp14818=PtreeSetline(nctemp14814,nctemp14816);
int nctemp14822=CodeArraycheck();
int nctemp14819 = (nctemp14822 ==1);
if(nctemp14819)
{
struct tree* nctemp14825= p;
struct nctempchar1 *nctemp14829;
static struct nctempchar1 nctemp14830 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp14829=&nctemp14830;
nctempchar1* nctemp14827= nctemp14829;
int nctemp14831=CodeEs(nctemp14825,nctemp14827);
struct tree* nctemp14833= p;
int nctemp14835= 8;
int nctemp14837=PtreeSetline(nctemp14833,nctemp14835);
}
struct tree* nctemp14839= p;
struct nctempchar1 *nctemp14843;
static struct nctempchar1 nctemp14844 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14843=&nctemp14844;
nctempchar1* nctemp14841= nctemp14843;
int nctemp14845=CodeEs(nctemp14839,nctemp14841);
struct tree* nctemp14847= p;
int nctemp14849= 10;
int nctemp14851=PtreeSetline(nctemp14847,nctemp14849);
struct tree* nctemp14853= p;
struct nctempchar1 *nctemp14857;
static struct nctempchar1 nctemp14858 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14857=&nctemp14858;
nctempchar1* nctemp14855= nctemp14857;
int nctemp14859=CodeEs(nctemp14853,nctemp14855);
struct tree* nctemp14861= p;
int nctemp14863= 10;
int nctemp14865=PtreeSetline(nctemp14861,nctemp14863);
struct tree* nctemp14867= p;
struct nctempchar1 *nctemp14871;
static struct nctempchar1 nctemp14872 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14871=&nctemp14872;
nctempchar1* nctemp14869= nctemp14871;
int nctemp14873=CodeEs(nctemp14867,nctemp14869);
struct tree* nctemp14875= p;
int nctemp14877= 12;
int nctemp14879=PtreeSetline(nctemp14875,nctemp14877);
struct tree* nctemp14881= p;
struct nctempchar1 *nctemp14885;
static struct nctempchar1 nctemp14886 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14885=&nctemp14886;
nctempchar1* nctemp14883= nctemp14885;
int nctemp14887=CodeEs(nctemp14881,nctemp14883);
struct tree* nctemp14889= p;
int nctemp14891= 13;
int nctemp14893=PtreeSetline(nctemp14889,nctemp14891);
struct tree* nctemp14895= p;
struct nctempchar1 *nctemp14899;
static struct nctempchar1 nctemp14900 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14899=&nctemp14900;
nctempchar1* nctemp14897= nctemp14899;
int nctemp14901=CodeEs(nctemp14895,nctemp14897);
struct tree* nctemp14903= p;
int nctemp14905= 14;
int nctemp14907=PtreeSetline(nctemp14903,nctemp14905);
struct tree* nctemp14909= p;
struct nctempchar1 *nctemp14913;
static struct nctempchar1 nctemp14914 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14913=&nctemp14914;
nctempchar1* nctemp14911= nctemp14913;
int nctemp14915=CodeEs(nctemp14909,nctemp14911);
struct tree* nctemp14917= p;
int nctemp14919= 15;
int nctemp14921=PtreeSetline(nctemp14917,nctemp14919);
struct tree* nctemp14923= p;
struct nctempchar1 *nctemp14927;
static struct nctempchar1 nctemp14928 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14927=&nctemp14928;
nctempchar1* nctemp14925= nctemp14927;
int nctemp14929=CodeEs(nctemp14923,nctemp14925);
struct tree* nctemp14931= p;
int nctemp14933= 16;
int nctemp14935=PtreeSetline(nctemp14931,nctemp14933);
struct tree* nctemp14937= p;
struct nctempchar1 *nctemp14941;
static struct nctempchar1 nctemp14942 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14941=&nctemp14942;
nctempchar1* nctemp14939= nctemp14941;
int nctemp14943=CodeEs(nctemp14937,nctemp14939);
struct tree* nctemp14945= p;
int nctemp14947= 17;
int nctemp14949=PtreeSetline(nctemp14945,nctemp14947);
struct tree* nctemp14951= p;
struct nctempchar1 *nctemp14955;
static struct nctempchar1 nctemp14956 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14955=&nctemp14956;
nctempchar1* nctemp14953= nctemp14955;
int nctemp14957=CodeEs(nctemp14951,nctemp14953);
struct tree* nctemp14959= p;
int nctemp14961= 18;
int nctemp14963=PtreeSetline(nctemp14959,nctemp14961);
struct tree* nctemp14965= p;
struct nctempchar1 *nctemp14969;
static struct nctempchar1 nctemp14970 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14969=&nctemp14970;
nctempchar1* nctemp14967= nctemp14969;
int nctemp14971=CodeEs(nctemp14965,nctemp14967);
struct tree* nctemp14973= p;
int nctemp14975= 19;
int nctemp14977=PtreeSetline(nctemp14973,nctemp14975);
struct tree* nctemp14979= p;
struct nctempchar1 *nctemp14983;
static struct nctempchar1 nctemp14984 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14983=&nctemp14984;
nctempchar1* nctemp14981= nctemp14983;
int nctemp14985=CodeEs(nctemp14979,nctemp14981);
struct tree* nctemp14987= p;
int nctemp14989= 20;
int nctemp14991=PtreeSetline(nctemp14987,nctemp14989);
struct tree* nctemp14993= p;
struct nctempchar1 *nctemp14997;
static struct nctempchar1 nctemp14998 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14997=&nctemp14998;
nctempchar1* nctemp14995= nctemp14997;
int nctemp14999=CodeEs(nctemp14993,nctemp14995);
struct tree* nctemp15001= p;
struct nctempchar1 *nctemp15005;
static struct nctempchar1 nctemp15006 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp15005=&nctemp15006;
nctempchar1* nctemp15003= nctemp15005;
int nctemp15007=CodeEs(nctemp15001,nctemp15003);
struct tree* nctemp15009= p;
struct nctempchar1 *nctemp15013;
static struct nctempchar1 nctemp15014 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15013=&nctemp15014;
nctempchar1* nctemp15011= nctemp15013;
int nctemp15015=CodeEs(nctemp15009,nctemp15011);
struct tree* nctemp15017= p;
struct nctempchar1 *nctemp15021;
static struct nctempchar1 nctemp15022 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15021=&nctemp15022;
nctempchar1* nctemp15019= nctemp15021;
int nctemp15023=CodeEs(nctemp15017,nctemp15019);
struct tree* nctemp15025= p;
struct nctempchar1 *nctemp15029;
static struct nctempchar1 nctemp15030 = {{ 4}, (char*)"}\n\0"};
nctemp15029=&nctemp15030;
nctempchar1* nctemp15027= nctemp15029;
int nctemp15031=CodeEs(nctemp15025,nctemp15027);
struct tree* nctemp15033= p;
struct nctempchar1 *nctemp15037;
static struct nctempchar1 nctemp15038 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp15037=&nctemp15038;
nctempchar1* nctemp15035= nctemp15037;
int nctemp15039=CodeEs(nctemp15033,nctemp15035);
struct tree* nctemp15041= p;
struct nctempchar1 *nctemp15045;
static struct nctempchar1 nctemp15046 = {{ 3}, (char*)"\n\0"};
nctemp15045=&nctemp15046;
nctempchar1* nctemp15043= nctemp15045;
int nctemp15047=CodeEs(nctemp15041,nctemp15043);
struct tree* nctemp15049= p;
struct nctempchar1 *nctemp15053;
static struct nctempchar1 nctemp15054 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp15053=&nctemp15054;
nctempchar1* nctemp15051= nctemp15053;
int nctemp15055=CodeEs(nctemp15049,nctemp15051);
struct tree* nctemp15057= p;
struct nctempchar1 *nctemp15061;
static struct nctempchar1 nctemp15062 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp15061=&nctemp15062;
nctempchar1* nctemp15059= nctemp15061;
int nctemp15063=CodeEs(nctemp15057,nctemp15059);
struct tree* nctemp15065= p;
struct nctempchar1 *nctemp15069;
static struct nctempchar1 nctemp15070 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp15069=&nctemp15070;
nctempchar1* nctemp15067= nctemp15069;
int nctemp15071=CodeEs(nctemp15065,nctemp15067);
struct tree* nctemp15073= p;
struct nctempchar1 *nctemp15077;
static struct nctempchar1 nctemp15078 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp15077=&nctemp15078;
nctempchar1* nctemp15075= nctemp15077;
int nctemp15079=CodeEs(nctemp15073,nctemp15075);
struct tree* nctemp15081= p;
struct nctempchar1 *nctemp15085;
static struct nctempchar1 nctemp15086 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp15085=&nctemp15086;
nctempchar1* nctemp15083= nctemp15085;
int nctemp15087=CodeEs(nctemp15081,nctemp15083);
return 1;
}
int CodePreamble ()
{
int nctemp15092=CodeGetarch();
int nctemp15089 = (nctemp15092 ==1);
if(nctemp15089)
{
int nctemp15095=CodePreamblecpu();
return 1;
}
else{
int nctemp15100=CodeGetarch();
int nctemp15097 = (nctemp15100 ==2);
if(nctemp15097)
{
int nctemp15103=CodePreamblecuda();
return 1;
}
else{
int nctemp15108=CodeGetarch();
int nctemp15105 = (nctemp15108 ==3);
if(nctemp15105)
{
int nctemp15111=CodePreamblehip();
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
struct tree* p;
struct nctempchar1 *nctemp15120;
static struct nctempchar1 nctemp15121 = {{ 6}, (char*)"dummy\0"};
nctemp15120=&nctemp15121;
nctempchar1* nctemp15118= nctemp15120;
struct nctempchar1 *nctemp15124;
static struct nctempchar1 nctemp15125 = {{ 6}, (char*)"dummy\0"};
nctemp15124=&nctemp15125;
nctempchar1* nctemp15122= nctemp15124;
struct tree* nctemp15126=PtreeMknode(nctemp15118,nctemp15122);
p =nctemp15126;
int nctemp15130=CodeGetarch();
int nctemp15127 = (nctemp15130 ==2);
if(nctemp15127)
{
struct tree* nctemp15133= p;
struct nctempchar1 *nctemp15137;
static struct nctempchar1 nctemp15138 = {{ 3}, (char*)"};\0"};
nctemp15137=&nctemp15138;
nctempchar1* nctemp15135= nctemp15137;
int nctemp15139=CodeEs(nctemp15133,nctemp15135);
}
int nctemp15143=CodeGetarch();
int nctemp15140 = (nctemp15143 ==3);
if(nctemp15140)
{
struct tree* nctemp15146= p;
struct nctempchar1 *nctemp15150;
static struct nctempchar1 nctemp15151 = {{ 3}, (char*)"};\0"};
nctemp15150=&nctemp15151;
nctempchar1* nctemp15148= nctemp15150;
int nctemp15152=CodeEs(nctemp15146,nctemp15148);
}
return 1;
}
