//  Translated by epsc  version: Thu Jun 11 16:27:56 2026

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
nctempchar1* nctemp3692= sel;
nctempchar1* nctemp3695=LibeStradd(nctemp3689,nctemp3692);
tmp=nctemp3695;
nctempchar1* nctemp3701= tmp;
nctempchar1* nctemp3704= name;
nctempchar1* nctemp3707=LibeStradd(nctemp3701,nctemp3704);
qname=nctemp3707;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3712= p;
struct nctempchar1 *nctemp3716;
static struct nctempchar1 nctemp3717 = {{ 7}, (char*)"if((0>\0"};
nctemp3716=&nctemp3717;
nctempchar1* nctemp3714= nctemp3716;
int nctemp3718=CodeEs(nctemp3712,nctemp3714);
struct tree* nctemp3720= p;
nctempchar1* nctemp3722= ival;
int nctemp3725=CodeEs(nctemp3720,nctemp3722);
struct tree* nctemp3727= p;
struct nctempchar1 *nctemp3731;
static struct nctempchar1 nctemp3732 = {{ 5}, (char*)")||(\0"};
nctemp3731=&nctemp3732;
nctempchar1* nctemp3729= nctemp3731;
int nctemp3733=CodeEs(nctemp3727,nctemp3729);
struct tree* nctemp3735= p;
nctempchar1* nctemp3737= ival;
int nctemp3740=CodeEs(nctemp3735,nctemp3737);
struct tree* nctemp3742= p;
struct nctempchar1 *nctemp3746;
static struct nctempchar1 nctemp3747 = {{ 3}, (char*)">=\0"};
nctemp3746=&nctemp3747;
nctempchar1* nctemp3744= nctemp3746;
int nctemp3748=CodeEs(nctemp3742,nctemp3744);
nctempchar1 *nctemp3750 =qual;
int nctemp3749 =(nctemp3750!=0);
if(nctemp3749)
{
struct tree* nctemp3755= p;
nctempchar1* nctemp3757= qual;
int nctemp3760=CodeEs(nctemp3755,nctemp3757);
struct tree* nctemp3762= p;
nctempchar1* nctemp3764= sel;
int nctemp3767=CodeEs(nctemp3762,nctemp3764);
}
struct tree* nctemp3769= p;
nctempchar1* nctemp3771= name;
int nctemp3774=CodeEs(nctemp3769,nctemp3771);
struct tree* nctemp3776= p;
struct nctempchar1 *nctemp3780;
static struct nctempchar1 nctemp3781 = {{ 5}, (char*)"->d[\0"};
nctemp3780=&nctemp3781;
nctempchar1* nctemp3778= nctemp3780;
int nctemp3782=CodeEs(nctemp3776,nctemp3778);
int nctemp3784= index;
int nctemp3786=CodeEd(nctemp3784);
struct tree* nctemp3788= p;
struct nctempchar1 *nctemp3792;
static struct nctempchar1 nctemp3793 = {{ 7}, (char*)"])){\n\0"};
nctemp3792=&nctemp3793;
nctempchar1* nctemp3790= nctemp3792;
int nctemp3794=CodeEs(nctemp3788,nctemp3790);
struct tree* nctemp3796= p;
struct nctempchar1 *nctemp3800;
static struct nctempchar1 nctemp3801 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3800=&nctemp3801;
nctempchar1* nctemp3798= nctemp3800;
int nctemp3802=CodeEs(nctemp3796,nctemp3798);
struct tree* nctemp3804= p;
nctempchar1* nctemp3808=ScanGetfile();
nctempchar1* nctemp3806= nctemp3808;
int nctemp3809=CodeEs(nctemp3804,nctemp3806);
struct tree* nctemp3811= p;
struct nctempchar1 *nctemp3815;
static struct nctempchar1 nctemp3816 = {{ 2}, (char*)" \0"};
nctemp3815=&nctemp3816;
nctempchar1* nctemp3813= nctemp3815;
int nctemp3817=CodeEs(nctemp3811,nctemp3813);
struct tree* nctemp3819= p;
nctempchar1* nctemp3821= qname;
int nctemp3824=CodeEs(nctemp3819,nctemp3821);
struct tree* nctemp3826= p;
struct nctempchar1 *nctemp3830;
static struct nctempchar1 nctemp3831 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3830=&nctemp3831;
nctempchar1* nctemp3828= nctemp3830;
int nctemp3832=CodeEs(nctemp3826,nctemp3828);
struct tree* nctemp3834= p;
struct nctempchar1 *nctemp3838;
static struct nctempchar1 nctemp3839 = {{ 6}, (char*)" \" ,\0"};
nctemp3838=&nctemp3839;
nctempchar1* nctemp3836= nctemp3838;
int nctemp3840=CodeEs(nctemp3834,nctemp3836);
int nctemp3842= line;
int nctemp3844=CodeEd(nctemp3842);
struct tree* nctemp3846= p;
struct nctempchar1 *nctemp3850;
static struct nctempchar1 nctemp3851 = {{ 2}, (char*)",\0"};
nctemp3850=&nctemp3851;
nctempchar1* nctemp3848= nctemp3850;
int nctemp3852=CodeEs(nctemp3846,nctemp3848);
struct tree* nctemp3854= p;
nctempchar1* nctemp3856= ival;
int nctemp3859=CodeEs(nctemp3854,nctemp3856);
struct tree* nctemp3861= p;
struct nctempchar1 *nctemp3865;
static struct nctempchar1 nctemp3866 = {{ 2}, (char*)",\0"};
nctemp3865=&nctemp3866;
nctempchar1* nctemp3863= nctemp3865;
int nctemp3867=CodeEs(nctemp3861,nctemp3863);
int nctemp3869= index;
int nctemp3871=CodeEd(nctemp3869);
struct tree* nctemp3873= p;
struct nctempchar1 *nctemp3877;
static struct nctempchar1 nctemp3878 = {{ 2}, (char*)",\0"};
nctemp3877=&nctemp3878;
nctempchar1* nctemp3875= nctemp3877;
int nctemp3879=CodeEs(nctemp3873,nctemp3875);
struct tree* nctemp3881= p;
nctempchar1* nctemp3883= qname;
int nctemp3886=CodeEs(nctemp3881,nctemp3883);
struct tree* nctemp3888= p;
struct nctempchar1 *nctemp3892;
static struct nctempchar1 nctemp3893 = {{ 5}, (char*)"->d[\0"};
nctemp3892=&nctemp3893;
nctempchar1* nctemp3890= nctemp3892;
int nctemp3894=CodeEs(nctemp3888,nctemp3890);
int nctemp3896= index;
int nctemp3898=CodeEd(nctemp3896);
struct tree* nctemp3900= p;
struct nctempchar1 *nctemp3904;
static struct nctempchar1 nctemp3905 = {{ 4}, (char*)"]-1\0"};
nctemp3904=&nctemp3905;
nctempchar1* nctemp3902= nctemp3904;
int nctemp3906=CodeEs(nctemp3900,nctemp3902);
struct tree* nctemp3908= p;
struct nctempchar1 *nctemp3912;
static struct nctempchar1 nctemp3913 = {{ 3}, (char*)");\0"};
nctemp3912=&nctemp3913;
nctempchar1* nctemp3910= nctemp3912;
int nctemp3914=CodeEs(nctemp3908,nctemp3910);
struct tree* nctemp3916= p;
struct nctempchar1 *nctemp3920;
static struct nctempchar1 nctemp3921 = {{ 6}, (char*)"\n}\n\0"};
nctemp3920=&nctemp3921;
nctempchar1* nctemp3918= nctemp3920;
int nctemp3922=CodeEs(nctemp3916,nctemp3918);
nctempchar1 *nctemp3924 =qual;
int nctemp3923 =(nctemp3924!=0);
if(nctemp3923)
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
struct tree* nctemp3937= p;
nctempchar1* nctemp3939=PtreeGetdef(nctemp3937);
name=nctemp3939;
nctempchar1* nctemp3945=CodeMktemp();
temp=nctemp3945;
nctempchar1* nctemp3950= name;
struct symbol* nctemp3953=SymLook(nctemp3950);
tp =nctemp3953;
int nctemp3954 = (tp ==0);
if(nctemp3954)
{
nctempchar1* nctemp3959= name;
int nctemp3962=CodeError(nctemp3959);
}
struct tree* nctemp3967= p;
struct tree* nctemp3969=PtreeMvchild(nctemp3967);
sp =nctemp3969;
int nctemp3970 = (sp ==0);
if(nctemp3970)
{
struct tree* nctemp3975= p;
nctempchar1* nctemp3977=PtreeGetdef(nctemp3975);
return nctemp3977;
}
else{
struct tree* nctemp3983= sp;
nctempchar1* nctemp3985=PtreeGetname(nctemp3983);
nctempchar1* nctemp3981= nctemp3985;
struct nctempchar1 *nctemp3988;
static struct nctempchar1 nctemp3989 = {{ 9}, (char*)"exprlist\0"};
nctemp3988=&nctemp3989;
nctempchar1* nctemp3986= nctemp3988;
int nctemp3990=LibeStrcmp(nctemp3981,nctemp3986);
int nctemp3978 = (nctemp3990 ==0);
if(nctemp3978)
{
struct tree* nctemp3993= p;
nctempchar1* nctemp3995=PtreeGetdef(nctemp3993);
return nctemp3995;
}
}
struct symbol* nctemp4000= tp;
int nctemp4002=SymGetrank(nctemp4000);
rank =nctemp4002;
struct tree* nctemp4007= p;
struct tree* nctemp4009=PtreeMvchild(nctemp4007);
p =nctemp4009;
struct tree* nctemp4014= p;
struct tree* nctemp4016=PtreeMvchild(nctemp4014);
p =nctemp4016;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp4017 = (i ==0);
if(nctemp4017)
{
struct tree* nctemp4026= p;
nctempchar1* nctemp4028=CodeExpr(nctemp4026);
temp2=nctemp4028;
struct tree* nctemp4030= p;
struct tree* nctemp4034= p;
nctempchar1* nctemp4036=PtreeGetype(nctemp4034);
nctempchar1* nctemp4032= nctemp4036;
int nctemp4037=CodeEs(nctemp4030,nctemp4032);
struct tree* nctemp4039= p;
struct nctempchar1 *nctemp4043;
static struct nctempchar1 nctemp4044 = {{ 2}, (char*)" \0"};
nctemp4043=&nctemp4044;
nctempchar1* nctemp4041= nctemp4043;
int nctemp4045=CodeEs(nctemp4039,nctemp4041);
struct tree* nctemp4047= p;
nctempchar1* nctemp4049= temp;
int nctemp4052=CodeEs(nctemp4047,nctemp4049);
struct tree* nctemp4054= p;
struct nctempchar1 *nctemp4058;
static struct nctempchar1 nctemp4059 = {{ 2}, (char*)"=\0"};
nctemp4058=&nctemp4059;
nctempchar1* nctemp4056= nctemp4058;
int nctemp4060=CodeEs(nctemp4054,nctemp4056);
struct tree* nctemp4062= p;
nctempchar1* nctemp4064= temp2;
int nctemp4067=CodeEs(nctemp4062,nctemp4064);
struct tree* nctemp4069= p;
struct nctempchar1 *nctemp4073;
static struct nctempchar1 nctemp4074 = {{ 4}, (char*)";\n\0"};
nctemp4073=&nctemp4074;
nctempchar1* nctemp4071= nctemp4073;
int nctemp4075=CodeEs(nctemp4069,nctemp4071);
int nctemp4077=CodeArraycheck();
if(nctemp4077)
{
struct tree* nctemp4081= p;
int nctemp4083=PtreeGetline(nctemp4081);
int nctemp4079= nctemp4083;
nctempchar1* nctemp4084= qual;
nctempchar1* nctemp4087= sel;
nctempchar1* nctemp4090= name;
nctempchar1* nctemp4093= temp2;
int nctemp4096= i;
int nctemp4098=CodeArrayex(nctemp4079,nctemp4084,nctemp4087,nctemp4090,nctemp4093,nctemp4096);
}
}
else{
struct tree* nctemp4104= sp;
nctempchar1* nctemp4106=CodeExpr(nctemp4104);
temp2=nctemp4106;
struct tree* nctemp4108= p;
nctempchar1* nctemp4110= temp;
int nctemp4113=CodeEs(nctemp4108,nctemp4110);
struct tree* nctemp4115= p;
struct nctempchar1 *nctemp4119;
static struct nctempchar1 nctemp4120 = {{ 2}, (char*)"=\0"};
nctemp4119=&nctemp4120;
nctempchar1* nctemp4117= nctemp4119;
int nctemp4121=CodeEs(nctemp4115,nctemp4117);
struct tree* nctemp4123= p;
nctempchar1* nctemp4125= temp2;
int nctemp4128=CodeEs(nctemp4123,nctemp4125);
struct tree* nctemp4130= p;
struct nctempchar1 *nctemp4134;
static struct nctempchar1 nctemp4135 = {{ 2}, (char*)"*\0"};
nctemp4134=&nctemp4135;
nctempchar1* nctemp4132= nctemp4134;
int nctemp4136=CodeEs(nctemp4130,nctemp4132);
nctempchar1 *nctemp4138 =qual;
int nctemp4137 =(nctemp4138!=0);
if(nctemp4137)
{
struct tree* nctemp4143= p;
nctempchar1* nctemp4145= qual;
int nctemp4148=CodeEs(nctemp4143,nctemp4145);
}
nctempchar1 *nctemp4150 =sel;
int nctemp4149 =(nctemp4150!=0);
if(nctemp4149)
{
struct tree* nctemp4155= p;
nctempchar1* nctemp4157= sel;
int nctemp4160=CodeEs(nctemp4155,nctemp4157);
}
struct tree* nctemp4162= p;
nctempchar1* nctemp4164= name;
int nctemp4167=CodeEs(nctemp4162,nctemp4164);
struct tree* nctemp4169= p;
struct nctempchar1 *nctemp4173;
static struct nctempchar1 nctemp4174 = {{ 4}, (char*)"->d\0"};
nctemp4173=&nctemp4174;
nctempchar1* nctemp4171= nctemp4173;
int nctemp4175=CodeEs(nctemp4169,nctemp4171);
struct tree* nctemp4177= p;
struct nctempchar1 *nctemp4181;
static struct nctempchar1 nctemp4182 = {{ 2}, (char*)"[\0"};
nctemp4181=&nctemp4182;
nctempchar1* nctemp4179= nctemp4181;
int nctemp4183=CodeEs(nctemp4177,nctemp4179);
int nctemp4190 = i - 1;
int nctemp4185= nctemp4190;
int nctemp4191=CodeEd(nctemp4185);
struct tree* nctemp4193= p;
struct nctempchar1 *nctemp4197;
static struct nctempchar1 nctemp4198 = {{ 2}, (char*)"]\0"};
nctemp4197=&nctemp4198;
nctempchar1* nctemp4195= nctemp4197;
int nctemp4199=CodeEs(nctemp4193,nctemp4195);
struct tree* nctemp4201= p;
struct nctempchar1 *nctemp4205;
static struct nctempchar1 nctemp4206 = {{ 2}, (char*)"+\0"};
nctemp4205=&nctemp4206;
nctempchar1* nctemp4203= nctemp4205;
int nctemp4207=CodeEs(nctemp4201,nctemp4203);
struct tree* nctemp4209= p;
nctempchar1* nctemp4211= temp;
int nctemp4214=CodeEs(nctemp4209,nctemp4211);
struct tree* nctemp4216= p;
struct nctempchar1 *nctemp4220;
static struct nctempchar1 nctemp4221 = {{ 4}, (char*)";\n\0"};
nctemp4220=&nctemp4221;
nctempchar1* nctemp4218= nctemp4220;
int nctemp4222=CodeEs(nctemp4216,nctemp4218);
int nctemp4224=CodeArraycheck();
if(nctemp4224)
{
struct tree* nctemp4228= p;
int nctemp4230=PtreeGetline(nctemp4228);
int nctemp4226= nctemp4230;
nctempchar1* nctemp4231= qual;
nctempchar1* nctemp4234= sel;
nctempchar1* nctemp4237= name;
nctempchar1* nctemp4240= temp2;
int nctemp4243= i;
int nctemp4245=CodeArrayex(nctemp4226,nctemp4231,nctemp4234,nctemp4237,nctemp4240,nctemp4243);
}
}
int nctemp4246 = (sp !=0);
if(nctemp4246)
{
struct tree* nctemp4254= sp;
struct tree* nctemp4256=PtreeMvsister(nctemp4254);
sp =nctemp4256;
}
}
nctempchar1* nctemp4267= name;
int nctemp4270=LibeStrlen(nctemp4267);
nctempchar1* nctemp4272= temp;
int nctemp4275=LibeStrlen(nctemp4272);
int nctemp4276 = nctemp4270 + nctemp4275;
int nctemp4278 = nctemp4276 + 6;
size =nctemp4278;
int nctemp4285=size;
nctempchar1 *nctemp4284;
nctemp4284=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4284->d[0]=size;
nctemp4284->a=(char *)RunMalloc(sizeof(char)*nctemp4285);
rval=nctemp4284;
nctempchar1* nctemp4289= name;
nctempchar1* nctemp4292= rval;
int nctemp4295=LibeStrcpy(nctemp4289,nctemp4292);
struct nctempchar1 *nctemp4299;
static struct nctempchar1 nctemp4300 = {{ 4}, (char*)"->a\0"};
nctemp4299=&nctemp4300;
nctempchar1* nctemp4297= nctemp4299;
nctempchar1* nctemp4301= rval;
int nctemp4304=LibeStrcat(nctemp4297,nctemp4301);
struct nctempchar1 *nctemp4308;
static struct nctempchar1 nctemp4309 = {{ 2}, (char*)"[\0"};
nctemp4308=&nctemp4309;
nctempchar1* nctemp4306= nctemp4308;
nctempchar1* nctemp4310= rval;
int nctemp4313=LibeStrcat(nctemp4306,nctemp4310);
nctempchar1* nctemp4315= temp;
nctempchar1* nctemp4318= rval;
int nctemp4321=LibeStrcat(nctemp4315,nctemp4318);
struct nctempchar1 *nctemp4325;
static struct nctempchar1 nctemp4326 = {{ 2}, (char*)"]\0"};
nctemp4325=&nctemp4326;
nctempchar1* nctemp4323= nctemp4325;
nctempchar1* nctemp4327= rval;
int nctemp4330=LibeStrcat(nctemp4323,nctemp4327);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4337= qual;
int nctemp4340=LibeStrlen(nctemp4337);
lq =nctemp4340;
nctempchar1* nctemp4345= ident;
int nctemp4348=LibeStrlen(nctemp4345);
li =nctemp4348;
int nctemp4363 = lq + li;
int nctemp4365 = nctemp4363 + 2;
int nctemp4355=nctemp4365;
nctempchar1 *nctemp4354;
nctemp4354=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4373 = lq + li;
int nctemp4375 = nctemp4373 + 2;
nctemp4354->d[0]=nctemp4375;
nctemp4354->a=(char *)RunMalloc(sizeof(char)*nctemp4355);
name=nctemp4354;
nctempchar1* nctemp4377= qual;
nctempchar1* nctemp4380= name;
int nctemp4383=LibeStrcpy(nctemp4377,nctemp4380);
struct nctempchar1 *nctemp4387;
static struct nctempchar1 nctemp4388 = {{ 2}, (char*)".\0"};
nctemp4387=&nctemp4388;
nctempchar1* nctemp4385= nctemp4387;
nctempchar1* nctemp4389= name;
int nctemp4392=LibeStrcat(nctemp4385,nctemp4389);
nctempchar1* nctemp4394= ident;
nctempchar1* nctemp4397= name;
int nctemp4400=LibeStrcat(nctemp4394,nctemp4397);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4407= qual;
int nctemp4410=LibeStrlen(nctemp4407);
lq =nctemp4410;
nctempchar1* nctemp4415= ident;
int nctemp4418=LibeStrlen(nctemp4415);
li =nctemp4418;
int nctemp4433 = lq + li;
int nctemp4435 = nctemp4433 + 3;
int nctemp4425=nctemp4435;
nctempchar1 *nctemp4424;
nctemp4424=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4443 = lq + li;
int nctemp4445 = nctemp4443 + 3;
nctemp4424->d[0]=nctemp4445;
nctemp4424->a=(char *)RunMalloc(sizeof(char)*nctemp4425);
name=nctemp4424;
nctempchar1* nctemp4447= qual;
nctempchar1* nctemp4450= name;
int nctemp4453=LibeStrcpy(nctemp4447,nctemp4450);
struct nctempchar1 *nctemp4457;
static struct nctempchar1 nctemp4458 = {{ 3}, (char*)"->\0"};
nctemp4457=&nctemp4458;
nctempchar1* nctemp4455= nctemp4457;
nctempchar1* nctemp4459= name;
int nctemp4462=LibeStrcat(nctemp4455,nctemp4459);
nctempchar1* nctemp4464= ident;
nctempchar1* nctemp4467= name;
int nctemp4470=LibeStrcat(nctemp4464,nctemp4467);
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
struct tree* nctemp4478= p;
nctempchar1* nctemp4480=PtreeGetstruct(nctemp4478);
nctempchar1* nctemp4476= nctemp4480;
struct nctempchar1 *nctemp4483;
static struct nctempchar1 nctemp4484 = {{ 7}, (char*)"struct\0"};
nctemp4483=&nctemp4484;
nctempchar1* nctemp4481= nctemp4483;
int nctemp4485=LibeStrcmp(nctemp4476,nctemp4481);
int nctemp4473 = (nctemp4485 ==1);
if(nctemp4473)
{
struct tree* nctemp4492= p;
nctempchar1* nctemp4494=PtreeGetarray(nctemp4492);
nctempchar1* nctemp4490= nctemp4494;
struct nctempchar1 *nctemp4497;
static struct nctempchar1 nctemp4498 = {{ 6}, (char*)"array\0"};
nctemp4497=&nctemp4498;
nctempchar1* nctemp4495= nctemp4497;
int nctemp4499=LibeStrcmp(nctemp4490,nctemp4495);
int nctemp4487 = (nctemp4499 ==1);
if(nctemp4487)
{
struct tree* nctemp4506= p;
nctempchar1* nctemp4508= qual;
struct nctempchar1 *nctemp4513;
static struct nctempchar1 nctemp4514 = {{ 2}, (char*)".\0"};
nctemp4513=&nctemp4514;
nctempchar1* nctemp4511= nctemp4513;
nctempchar1* nctemp4515=CodeArray(nctemp4506,nctemp4508,nctemp4511);
qual=nctemp4515;
struct tree* nctemp4520= p;
struct tree* nctemp4522=PtreeMvchild(nctemp4520);
np =nctemp4522;
int nctemp4523 = (np ==0);
if(nctemp4523)
{
return qual;
}
struct tree* nctemp4533= np;
struct tree* nctemp4535=PtreeMvsister(nctemp4533);
np =nctemp4535;
int nctemp4536 = (np ==0);
if(nctemp4536)
{
return qual;
}
}
else{
struct tree* nctemp4547= p;
nctempchar1* nctemp4549=PtreeGetdef(nctemp4547);
qual=nctemp4549;
struct tree* nctemp4557= p;
struct tree* nctemp4559=PtreeMvchild(nctemp4557);
np =nctemp4559;
int nctemp4550 = (np ==0);
if(nctemp4550)
{
return qual;
}
}
struct tree* nctemp4568= np;
nctempchar1* nctemp4570=PtreeGetarray(nctemp4568);
nctempchar1* nctemp4566= nctemp4570;
struct nctempchar1 *nctemp4573;
static struct nctempchar1 nctemp4574 = {{ 6}, (char*)"array\0"};
nctemp4573=&nctemp4574;
nctempchar1* nctemp4571= nctemp4573;
int nctemp4575=LibeStrcmp(nctemp4566,nctemp4571);
int nctemp4563 = (nctemp4575 ==1);
if(nctemp4563)
{
struct symbol* nctemp4581=SymGetltp();
tp =nctemp4581;
struct symbol* nctemp4586=SymGetetp();
up =nctemp4586;
struct tree* nctemp4593= p;
nctempchar1* nctemp4595=PtreeGetdef(nctemp4593);
nctempchar1* nctemp4591= nctemp4595;
struct symbol* nctemp4596=SymLook(nctemp4591);
uup =nctemp4596;
struct symbol* nctemp4603= uup;
nctempchar1* nctemp4605=SymGetype(nctemp4603);
nctempchar1* nctemp4601= nctemp4605;
struct symbol* nctemp4606=SymLook(nctemp4601);
uup =nctemp4606;
struct symbol* nctemp4610= uup;
struct symbol* nctemp4612=SymGetable(nctemp4610);
struct symbol* nctemp4608= nctemp4612;
int nctemp4613=SymSetltp(nctemp4608);
struct tree* nctemp4619= p;
nctempchar1* nctemp4621=PtreeGetarray(nctemp4619);
nctempchar1* nctemp4617= nctemp4621;
struct nctempchar1 *nctemp4624;
static struct nctempchar1 nctemp4625 = {{ 6}, (char*)"array\0"};
nctemp4624=&nctemp4625;
nctempchar1* nctemp4622= nctemp4624;
int nctemp4626=LibeStrcmp(nctemp4617,nctemp4622);
int nctemp4614 = (nctemp4626 ==1);
if(nctemp4614)
{
struct tree* nctemp4633= np;
nctempchar1* nctemp4635= qual;
struct nctempchar1 *nctemp4640;
static struct nctempchar1 nctemp4641 = {{ 2}, (char*)".\0"};
nctemp4640=&nctemp4641;
nctempchar1* nctemp4638= nctemp4640;
nctempchar1* nctemp4642=CodeArray(nctemp4633,nctemp4635,nctemp4638);
name=nctemp4642;
}
else{
struct tree* nctemp4648= np;
nctempchar1* nctemp4650= qual;
struct nctempchar1 *nctemp4655;
static struct nctempchar1 nctemp4656 = {{ 3}, (char*)"->\0"};
nctemp4655=&nctemp4656;
nctempchar1* nctemp4653= nctemp4655;
nctempchar1* nctemp4657=CodeArray(nctemp4648,nctemp4650,nctemp4653);
name=nctemp4657;
}
struct symbol* nctemp4659= tp;
int nctemp4661=SymSetltp(nctemp4659);
struct symbol* nctemp4663= up;
int nctemp4665=SymSetetp(nctemp4663);
}
else{
struct tree* nctemp4671= np;
nctempchar1* nctemp4673=PtreeGetdef(nctemp4671);
name=nctemp4673;
}
struct tree* nctemp4679= p;
nctempchar1* nctemp4681=PtreeGetarray(nctemp4679);
nctempchar1* nctemp4677= nctemp4681;
struct nctempchar1 *nctemp4684;
static struct nctempchar1 nctemp4685 = {{ 6}, (char*)"array\0"};
nctemp4684=&nctemp4685;
nctempchar1* nctemp4682= nctemp4684;
int nctemp4686=LibeStrcmp(nctemp4677,nctemp4682);
int nctemp4674 = (nctemp4686 ==1);
if(nctemp4674)
{
nctempchar1* nctemp4689= qual;
nctempchar1* nctemp4692= name;
nctempchar1* nctemp4695=CodeQident(nctemp4689,nctemp4692);
return nctemp4695;
}
else{
nctempchar1* nctemp4697= qual;
nctempchar1* nctemp4700= name;
nctempchar1* nctemp4703=CodeQident2(nctemp4697,nctemp4700);
return nctemp4703;
}
}
else{
struct tree* nctemp4709= p;
nctempchar1* nctemp4711=PtreeGetarray(nctemp4709);
nctempchar1* nctemp4707= nctemp4711;
struct nctempchar1 *nctemp4714;
static struct nctempchar1 nctemp4715 = {{ 6}, (char*)"array\0"};
nctemp4714=&nctemp4715;
nctempchar1* nctemp4712= nctemp4714;
int nctemp4716=LibeStrcmp(nctemp4707,nctemp4712);
int nctemp4704 = (nctemp4716 ==1);
if(nctemp4704)
{
name  = 0;
qual  = 0;
struct tree* nctemp4723= p;
nctempchar1* nctemp4725= qual;
nctempchar1* nctemp4728= name;
nctempchar1* nctemp4731=CodeArray(nctemp4723,nctemp4725,nctemp4728);
qual=nctemp4731;
return qual;
}
else{
struct tree* nctemp4735= p;
nctempchar1* nctemp4737=PtreeGetdef(nctemp4735);
return nctemp4737;
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
nctempchar1* nctemp4743=CodeMktemp();
pointer=nctemp4743;
nctempchar1* nctemp4749=CodeMktemp();
totdim=nctemp4749;
struct tree* nctemp4754= p;
struct tree* nctemp4756=PtreeMvchild(nctemp4754);
p =nctemp4756;
struct tree* nctemp4762= p;
nctempchar1* nctemp4764=PtreeGetdef(nctemp4762);
type=nctemp4764;
struct tree* nctemp4770= p;
nctempchar1* nctemp4772=PtreeGetstruct(nctemp4770);
structflag=nctemp4772;
struct tree* nctemp4778= p;
nctempchar1* nctemp4780=PtreeGetarray(nctemp4778);
arrayflag=nctemp4780;
struct tree* nctemp4786= p;
nctempchar1* nctemp4788=PtreeGetarray(nctemp4786);
nctempchar1* nctemp4784= nctemp4788;
struct nctempchar1 *nctemp4791;
static struct nctempchar1 nctemp4792 = {{ 6}, (char*)"array\0"};
nctemp4791=&nctemp4792;
nctempchar1* nctemp4789= nctemp4791;
int nctemp4793=LibeStrcmp(nctemp4784,nctemp4789);
int nctemp4781 = (nctemp4793 ==1);
if(nctemp4781)
{
struct tree* nctemp4799= p;
struct tree* nctemp4801=PtreeMvchild(nctemp4799);
p =nctemp4801;
struct tree* nctemp4806= p;
struct tree* nctemp4808=PtreeMvchild(nctemp4806);
p =nctemp4808;
struct tree* nctemp4813= p;
struct tree* nctemp4815=PtreeMvchild(nctemp4813);
p =nctemp4815;
struct tree* nctemp4820= p;
struct tree* nctemp4822=PtreeMvchild(nctemp4820);
p =nctemp4822;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4830= p;
struct tree* nctemp4832=PtreeMvsister(nctemp4830);
p =nctemp4832;
int nctemp4823 = (p !=0);
int nctemp4834=nctemp4823;
while(nctemp4834)
{{
rank = (rank + 1);
}
struct tree* nctemp4842= p;
struct tree* nctemp4844=PtreeMvsister(nctemp4842);
p =nctemp4844;
int nctemp4835 = (p !=0);
nctemp4834=nctemp4835;}int nctemp4846 = (rank > 4);
if(nctemp4846)
{
struct nctempchar1 *nctemp4853;
static struct nctempchar1 nctemp4854 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4853=&nctemp4854;
nctempchar1* nctemp4851= nctemp4853;
int nctemp4855=CodeError(nctemp4851);
}
p = sp;
i = 0;
int nctemp4856 = (p !=0);
int nctemp4860=nctemp4856;
while(nctemp4860)
{{
struct tree* nctemp4866= p;
nctempchar1* nctemp4868=CodeExpr(nctemp4866);
dim=nctemp4868;
int nctemp4869 = (i ==0);
if(nctemp4869)
{
struct tree* nctemp4874= p;
struct tree* nctemp4878= p;
nctempchar1* nctemp4880=PtreeGetype(nctemp4878);
nctempchar1* nctemp4876= nctemp4880;
int nctemp4881=CodeEs(nctemp4874,nctemp4876);
struct tree* nctemp4883= p;
struct nctempchar1 *nctemp4887;
static struct nctempchar1 nctemp4888 = {{ 2}, (char*)" \0"};
nctemp4887=&nctemp4888;
nctempchar1* nctemp4885= nctemp4887;
int nctemp4889=CodeEs(nctemp4883,nctemp4885);
struct tree* nctemp4891= p;
nctempchar1* nctemp4893= totdim;
int nctemp4896=CodeEs(nctemp4891,nctemp4893);
struct tree* nctemp4898= p;
struct nctempchar1 *nctemp4902;
static struct nctempchar1 nctemp4903 = {{ 2}, (char*)"=\0"};
nctemp4902=&nctemp4903;
nctempchar1* nctemp4900= nctemp4902;
int nctemp4904=CodeEs(nctemp4898,nctemp4900);
struct tree* nctemp4906= p;
nctempchar1* nctemp4908= dim;
int nctemp4911=CodeEs(nctemp4906,nctemp4908);
}
else{
struct tree* nctemp4913= p;
nctempchar1* nctemp4915= totdim;
int nctemp4918=CodeEs(nctemp4913,nctemp4915);
struct tree* nctemp4920= p;
struct nctempchar1 *nctemp4924;
static struct nctempchar1 nctemp4925 = {{ 2}, (char*)"=\0"};
nctemp4924=&nctemp4925;
nctempchar1* nctemp4922= nctemp4924;
int nctemp4926=CodeEs(nctemp4920,nctemp4922);
struct tree* nctemp4928= p;
nctempchar1* nctemp4930= totdim;
int nctemp4933=CodeEs(nctemp4928,nctemp4930);
struct tree* nctemp4935= p;
struct nctempchar1 *nctemp4939;
static struct nctempchar1 nctemp4940 = {{ 2}, (char*)"*\0"};
nctemp4939=&nctemp4940;
nctempchar1* nctemp4937= nctemp4939;
int nctemp4941=CodeEs(nctemp4935,nctemp4937);
struct tree* nctemp4943= p;
nctempchar1* nctemp4945= dim;
int nctemp4948=CodeEs(nctemp4943,nctemp4945);
}
struct tree* nctemp4950= p;
struct nctempchar1 *nctemp4954;
static struct nctempchar1 nctemp4955 = {{ 4}, (char*)";\n\0"};
nctemp4954=&nctemp4955;
nctempchar1* nctemp4952= nctemp4954;
int nctemp4956=CodeEs(nctemp4950,nctemp4952);
i = (i + 1);
struct tree* nctemp4961= p;
struct tree* nctemp4963=PtreeMvsister(nctemp4961);
p =nctemp4963;
}
int nctemp4964 = (p !=0);
nctemp4860=nctemp4964;}}
nctempchar1* nctemp4974= structflag;
struct nctempchar1 *nctemp4979;
static struct nctempchar1 nctemp4980 = {{ 7}, (char*)"struct\0"};
nctemp4979=&nctemp4980;
nctempchar1* nctemp4977= nctemp4979;
int nctemp4981=LibeStrcmp(nctemp4974,nctemp4977);
int nctemp4971 = (nctemp4981 ==1);
nctempchar1* nctemp4987= arrayflag;
struct nctempchar1 *nctemp4992;
static struct nctempchar1 nctemp4993 = {{ 6}, (char*)"array\0"};
nctemp4992=&nctemp4993;
nctempchar1* nctemp4990= nctemp4992;
int nctemp4994=LibeStrcmp(nctemp4987,nctemp4990);
int nctemp4984 = (nctemp4994 ==0);
int nctemp4968 = (nctemp4971 && nctemp4984);
if(nctemp4968)
{
struct tree* nctemp4997= p;
struct nctempchar1 *nctemp5001;
static struct nctempchar1 nctemp5002 = {{ 8}, (char*)"struct \0"};
nctemp5001=&nctemp5002;
nctempchar1* nctemp4999= nctemp5001;
int nctemp5003=CodeEs(nctemp4997,nctemp4999);
struct tree* nctemp5005= p;
nctempchar1* nctemp5007= type;
int nctemp5010=CodeEs(nctemp5005,nctemp5007);
struct tree* nctemp5012= p;
struct nctempchar1 *nctemp5016;
static struct nctempchar1 nctemp5017 = {{ 3}, (char*)" *\0"};
nctemp5016=&nctemp5017;
nctempchar1* nctemp5014= nctemp5016;
int nctemp5018=CodeEs(nctemp5012,nctemp5014);
struct tree* nctemp5020= p;
nctempchar1* nctemp5022= pointer;
int nctemp5025=CodeEs(nctemp5020,nctemp5022);
struct tree* nctemp5027= p;
struct nctempchar1 *nctemp5031;
static struct nctempchar1 nctemp5032 = {{ 2}, (char*)"=\0"};
nctemp5031=&nctemp5032;
nctempchar1* nctemp5029= nctemp5031;
int nctemp5033=CodeEs(nctemp5027,nctemp5029);
struct tree* nctemp5035= p;
struct nctempchar1 *nctemp5039;
static struct nctempchar1 nctemp5040 = {{ 2}, (char*)"(\0"};
nctemp5039=&nctemp5040;
nctempchar1* nctemp5037= nctemp5039;
int nctemp5041=CodeEs(nctemp5035,nctemp5037);
struct tree* nctemp5043= p;
struct nctempchar1 *nctemp5047;
static struct nctempchar1 nctemp5048 = {{ 8}, (char*)"struct \0"};
nctemp5047=&nctemp5048;
nctempchar1* nctemp5045= nctemp5047;
int nctemp5049=CodeEs(nctemp5043,nctemp5045);
struct tree* nctemp5051= p;
nctempchar1* nctemp5053= type;
int nctemp5056=CodeEs(nctemp5051,nctemp5053);
struct tree* nctemp5058= p;
struct nctempchar1 *nctemp5062;
static struct nctempchar1 nctemp5063 = {{ 3}, (char*)"*)\0"};
nctemp5062=&nctemp5063;
nctempchar1* nctemp5060= nctemp5062;
int nctemp5064=CodeEs(nctemp5058,nctemp5060);
struct tree* nctemp5066= p;
struct nctempchar1 *nctemp5070;
static struct nctempchar1 nctemp5071 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5070=&nctemp5071;
nctempchar1* nctemp5068= nctemp5070;
int nctemp5072=CodeEs(nctemp5066,nctemp5068);
struct tree* nctemp5074= p;
struct nctempchar1 *nctemp5078;
static struct nctempchar1 nctemp5079 = {{ 8}, (char*)"sizeof(\0"};
nctemp5078=&nctemp5079;
nctempchar1* nctemp5076= nctemp5078;
int nctemp5080=CodeEs(nctemp5074,nctemp5076);
struct tree* nctemp5082= p;
struct nctempchar1 *nctemp5086;
static struct nctempchar1 nctemp5087 = {{ 8}, (char*)"struct \0"};
nctemp5086=&nctemp5087;
nctempchar1* nctemp5084= nctemp5086;
int nctemp5088=CodeEs(nctemp5082,nctemp5084);
struct tree* nctemp5090= p;
nctempchar1* nctemp5092= type;
int nctemp5095=CodeEs(nctemp5090,nctemp5092);
struct tree* nctemp5097= p;
struct nctempchar1 *nctemp5101;
static struct nctempchar1 nctemp5102 = {{ 6}, (char*)"));\n\0"};
nctemp5101=&nctemp5102;
nctempchar1* nctemp5099= nctemp5101;
int nctemp5103=CodeEs(nctemp5097,nctemp5099);
}
nctempchar1* nctemp5110= structflag;
struct nctempchar1 *nctemp5115;
static struct nctempchar1 nctemp5116 = {{ 7}, (char*)"struct\0"};
nctemp5115=&nctemp5116;
nctempchar1* nctemp5113= nctemp5115;
int nctemp5117=LibeStrcmp(nctemp5110,nctemp5113);
int nctemp5107 = (nctemp5117 ==1);
nctempchar1* nctemp5123= arrayflag;
struct nctempchar1 *nctemp5128;
static struct nctempchar1 nctemp5129 = {{ 6}, (char*)"array\0"};
nctemp5128=&nctemp5129;
nctempchar1* nctemp5126= nctemp5128;
int nctemp5130=LibeStrcmp(nctemp5123,nctemp5126);
int nctemp5120 = (nctemp5130 ==1);
int nctemp5104 = (nctemp5107 && nctemp5120);
if(nctemp5104)
{
struct tree* nctemp5133= p;
struct nctempchar1 *nctemp5137;
static struct nctempchar1 nctemp5138 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5137=&nctemp5138;
nctempchar1* nctemp5135= nctemp5137;
int nctemp5139=CodeEs(nctemp5133,nctemp5135);
struct tree* nctemp5141= p;
nctempchar1* nctemp5143= type;
int nctemp5146=CodeEs(nctemp5141,nctemp5143);
int nctemp5148= rank;
int nctemp5150=CodeEd(nctemp5148);
struct tree* nctemp5152= p;
struct nctempchar1 *nctemp5156;
static struct nctempchar1 nctemp5157 = {{ 3}, (char*)" *\0"};
nctemp5156=&nctemp5157;
nctempchar1* nctemp5154= nctemp5156;
int nctemp5158=CodeEs(nctemp5152,nctemp5154);
struct tree* nctemp5160= p;
nctempchar1* nctemp5162= pointer;
int nctemp5165=CodeEs(nctemp5160,nctemp5162);
struct tree* nctemp5167= p;
struct nctempchar1 *nctemp5171;
static struct nctempchar1 nctemp5172 = {{ 4}, (char*)";\n\0"};
nctemp5171=&nctemp5172;
nctempchar1* nctemp5169= nctemp5171;
int nctemp5173=CodeEs(nctemp5167,nctemp5169);
struct tree* nctemp5175= p;
nctempchar1* nctemp5177= pointer;
int nctemp5180=CodeEs(nctemp5175,nctemp5177);
struct tree* nctemp5182= p;
struct nctempchar1 *nctemp5186;
static struct nctempchar1 nctemp5187 = {{ 2}, (char*)"=\0"};
nctemp5186=&nctemp5187;
nctempchar1* nctemp5184= nctemp5186;
int nctemp5188=CodeEs(nctemp5182,nctemp5184);
struct tree* nctemp5190= p;
struct nctempchar1 *nctemp5194;
static struct nctempchar1 nctemp5195 = {{ 2}, (char*)"(\0"};
nctemp5194=&nctemp5195;
nctempchar1* nctemp5192= nctemp5194;
int nctemp5196=CodeEs(nctemp5190,nctemp5192);
struct tree* nctemp5198= p;
struct nctempchar1 *nctemp5202;
static struct nctempchar1 nctemp5203 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5202=&nctemp5203;
nctempchar1* nctemp5200= nctemp5202;
int nctemp5204=CodeEs(nctemp5198,nctemp5200);
struct tree* nctemp5206= p;
nctempchar1* nctemp5208= type;
int nctemp5211=CodeEs(nctemp5206,nctemp5208);
int nctemp5213= rank;
int nctemp5215=CodeEd(nctemp5213);
struct tree* nctemp5217= p;
struct nctempchar1 *nctemp5221;
static struct nctempchar1 nctemp5222 = {{ 3}, (char*)"*)\0"};
nctemp5221=&nctemp5222;
nctempchar1* nctemp5219= nctemp5221;
int nctemp5223=CodeEs(nctemp5217,nctemp5219);
struct tree* nctemp5225= p;
struct nctempchar1 *nctemp5229;
static struct nctempchar1 nctemp5230 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5229=&nctemp5230;
nctempchar1* nctemp5227= nctemp5229;
int nctemp5231=CodeEs(nctemp5225,nctemp5227);
struct tree* nctemp5233= p;
struct nctempchar1 *nctemp5237;
static struct nctempchar1 nctemp5238 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5237=&nctemp5238;
nctempchar1* nctemp5235= nctemp5237;
int nctemp5239=CodeEs(nctemp5233,nctemp5235);
struct tree* nctemp5241= p;
nctempchar1* nctemp5243= type;
int nctemp5246=CodeEs(nctemp5241,nctemp5243);
int nctemp5248= rank;
int nctemp5250=CodeEd(nctemp5248);
struct tree* nctemp5252= p;
struct nctempchar1 *nctemp5256;
static struct nctempchar1 nctemp5257 = {{ 6}, (char*)"));\n\0"};
nctemp5256=&nctemp5257;
nctempchar1* nctemp5254= nctemp5256;
int nctemp5258=CodeEs(nctemp5252,nctemp5254);
i = 0;
p = sp;
int nctemp5259 = (p !=0);
int nctemp5263=nctemp5259;
while(nctemp5263)
{{
struct tree* nctemp5269= sp;
nctempchar1* nctemp5271=CodeExpr(nctemp5269);
dim=nctemp5271;
struct tree* nctemp5273= sp;
nctempchar1* nctemp5275= pointer;
int nctemp5278=CodeEs(nctemp5273,nctemp5275);
struct tree* nctemp5280= sp;
struct nctempchar1 *nctemp5284;
static struct nctempchar1 nctemp5285 = {{ 4}, (char*)"->d\0"};
nctemp5284=&nctemp5285;
nctempchar1* nctemp5282= nctemp5284;
int nctemp5286=CodeEs(nctemp5280,nctemp5282);
struct tree* nctemp5288= sp;
struct nctempchar1 *nctemp5292;
static struct nctempchar1 nctemp5293 = {{ 2}, (char*)"[\0"};
nctemp5292=&nctemp5293;
nctempchar1* nctemp5290= nctemp5292;
int nctemp5294=CodeEs(nctemp5288,nctemp5290);
int nctemp5296= i;
int nctemp5298=CodeEd(nctemp5296);
struct tree* nctemp5300= sp;
struct nctempchar1 *nctemp5304;
static struct nctempchar1 nctemp5305 = {{ 3}, (char*)"]=\0"};
nctemp5304=&nctemp5305;
nctempchar1* nctemp5302= nctemp5304;
int nctemp5306=CodeEs(nctemp5300,nctemp5302);
struct tree* nctemp5308= sp;
nctempchar1* nctemp5310= dim;
int nctemp5313=CodeEs(nctemp5308,nctemp5310);
struct tree* nctemp5315= sp;
struct nctempchar1 *nctemp5319;
static struct nctempchar1 nctemp5320 = {{ 4}, (char*)";\n\0"};
nctemp5319=&nctemp5320;
nctempchar1* nctemp5317= nctemp5319;
int nctemp5321=CodeEs(nctemp5315,nctemp5317);
i = (i + 1);
struct tree* nctemp5326= p;
struct tree* nctemp5328=PtreeMvsister(nctemp5326);
p =nctemp5328;
}
int nctemp5329 = (p !=0);
nctemp5263=nctemp5329;}struct tree* nctemp5334= sp;
nctempchar1* nctemp5336= pointer;
int nctemp5339=CodeEs(nctemp5334,nctemp5336);
struct tree* nctemp5341= sp;
struct nctempchar1 *nctemp5345;
static struct nctempchar1 nctemp5346 = {{ 4}, (char*)"->a\0"};
nctemp5345=&nctemp5346;
nctempchar1* nctemp5343= nctemp5345;
int nctemp5347=CodeEs(nctemp5341,nctemp5343);
struct tree* nctemp5349= sp;
struct nctempchar1 *nctemp5353;
static struct nctempchar1 nctemp5354 = {{ 2}, (char*)"=\0"};
nctemp5353=&nctemp5354;
nctempchar1* nctemp5351= nctemp5353;
int nctemp5355=CodeEs(nctemp5349,nctemp5351);
struct tree* nctemp5357= sp;
struct nctempchar1 *nctemp5361;
static struct nctempchar1 nctemp5362 = {{ 9}, (char*)"(struct \0"};
nctemp5361=&nctemp5362;
nctempchar1* nctemp5359= nctemp5361;
int nctemp5363=CodeEs(nctemp5357,nctemp5359);
struct tree* nctemp5365= sp;
nctempchar1* nctemp5367= type;
int nctemp5370=CodeEs(nctemp5365,nctemp5367);
struct tree* nctemp5372= sp;
struct nctempchar1 *nctemp5376;
static struct nctempchar1 nctemp5377 = {{ 3}, (char*)"*)\0"};
nctemp5376=&nctemp5377;
nctempchar1* nctemp5374= nctemp5376;
int nctemp5378=CodeEs(nctemp5372,nctemp5374);
struct tree* nctemp5380= sp;
struct nctempchar1 *nctemp5384;
static struct nctempchar1 nctemp5385 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5384=&nctemp5385;
nctempchar1* nctemp5382= nctemp5384;
int nctemp5386=CodeEs(nctemp5380,nctemp5382);
struct tree* nctemp5388= sp;
struct nctempchar1 *nctemp5392;
static struct nctempchar1 nctemp5393 = {{ 8}, (char*)"struct \0"};
nctemp5392=&nctemp5393;
nctempchar1* nctemp5390= nctemp5392;
int nctemp5394=CodeEs(nctemp5388,nctemp5390);
struct tree* nctemp5396= sp;
nctempchar1* nctemp5398= type;
int nctemp5401=CodeEs(nctemp5396,nctemp5398);
struct tree* nctemp5403= sp;
struct nctempchar1 *nctemp5407;
static struct nctempchar1 nctemp5408 = {{ 2}, (char*)")\0"};
nctemp5407=&nctemp5408;
nctempchar1* nctemp5405= nctemp5407;
int nctemp5409=CodeEs(nctemp5403,nctemp5405);
struct tree* nctemp5411= sp;
struct nctempchar1 *nctemp5415;
static struct nctempchar1 nctemp5416 = {{ 2}, (char*)"*\0"};
nctemp5415=&nctemp5416;
nctempchar1* nctemp5413= nctemp5415;
int nctemp5417=CodeEs(nctemp5411,nctemp5413);
struct tree* nctemp5419= sp;
nctempchar1* nctemp5421= totdim;
int nctemp5424=CodeEs(nctemp5419,nctemp5421);
struct tree* nctemp5426= sp;
struct nctempchar1 *nctemp5430;
static struct nctempchar1 nctemp5431 = {{ 5}, (char*)");\n\0"};
nctemp5430=&nctemp5431;
nctempchar1* nctemp5428= nctemp5430;
int nctemp5432=CodeEs(nctemp5426,nctemp5428);
}
nctempchar1* nctemp5439= structflag;
struct nctempchar1 *nctemp5444;
static struct nctempchar1 nctemp5445 = {{ 7}, (char*)"struct\0"};
nctemp5444=&nctemp5445;
nctempchar1* nctemp5442= nctemp5444;
int nctemp5446=LibeStrcmp(nctemp5439,nctemp5442);
int nctemp5436 = (nctemp5446 ==0);
nctempchar1* nctemp5452= arrayflag;
struct nctempchar1 *nctemp5457;
static struct nctempchar1 nctemp5458 = {{ 6}, (char*)"array\0"};
nctemp5457=&nctemp5458;
nctempchar1* nctemp5455= nctemp5457;
int nctemp5459=LibeStrcmp(nctemp5452,nctemp5455);
int nctemp5449 = (nctemp5459 ==1);
int nctemp5433 = (nctemp5436 && nctemp5449);
if(nctemp5433)
{
int nctemp5462= 4;
int nctemp5464=LibeFlush(nctemp5462);
struct tree* nctemp5466= sp;
struct nctempchar1 *nctemp5470;
static struct nctempchar1 nctemp5471 = {{ 7}, (char*)"nctemp\0"};
nctemp5470=&nctemp5471;
nctempchar1* nctemp5468= nctemp5470;
int nctemp5472=CodeEs(nctemp5466,nctemp5468);
struct tree* nctemp5474= sp;
nctempchar1* nctemp5476= type;
int nctemp5479=CodeEs(nctemp5474,nctemp5476);
int nctemp5481= rank;
int nctemp5483=CodeEd(nctemp5481);
struct tree* nctemp5485= sp;
struct nctempchar1 *nctemp5489;
static struct nctempchar1 nctemp5490 = {{ 3}, (char*)" *\0"};
nctemp5489=&nctemp5490;
nctempchar1* nctemp5487= nctemp5489;
int nctemp5491=CodeEs(nctemp5485,nctemp5487);
struct tree* nctemp5493= sp;
nctempchar1* nctemp5495= pointer;
int nctemp5498=CodeEs(nctemp5493,nctemp5495);
struct tree* nctemp5500= sp;
struct nctempchar1 *nctemp5504;
static struct nctempchar1 nctemp5505 = {{ 4}, (char*)";\n\0"};
nctemp5504=&nctemp5505;
nctempchar1* nctemp5502= nctemp5504;
int nctemp5506=CodeEs(nctemp5500,nctemp5502);
p = top;
i = 0;
struct tree* nctemp5508= p;
nctempchar1* nctemp5510= pointer;
int nctemp5513=CodeEs(nctemp5508,nctemp5510);
struct tree* nctemp5515= p;
struct nctempchar1 *nctemp5519;
static struct nctempchar1 nctemp5520 = {{ 2}, (char*)"=\0"};
nctemp5519=&nctemp5520;
nctempchar1* nctemp5517= nctemp5519;
int nctemp5521=CodeEs(nctemp5515,nctemp5517);
struct tree* nctemp5523= p;
struct nctempchar1 *nctemp5527;
static struct nctempchar1 nctemp5528 = {{ 2}, (char*)"(\0"};
nctemp5527=&nctemp5528;
nctempchar1* nctemp5525= nctemp5527;
int nctemp5529=CodeEs(nctemp5523,nctemp5525);
struct tree* nctemp5531= p;
struct nctempchar1 *nctemp5535;
static struct nctempchar1 nctemp5536 = {{ 7}, (char*)"nctemp\0"};
nctemp5535=&nctemp5536;
nctempchar1* nctemp5533= nctemp5535;
int nctemp5537=CodeEs(nctemp5531,nctemp5533);
struct tree* nctemp5539= p;
nctempchar1* nctemp5541= type;
int nctemp5544=CodeEs(nctemp5539,nctemp5541);
int nctemp5546= rank;
int nctemp5548=CodeEd(nctemp5546);
struct tree* nctemp5550= p;
struct nctempchar1 *nctemp5554;
static struct nctempchar1 nctemp5555 = {{ 3}, (char*)"*)\0"};
nctemp5554=&nctemp5555;
nctempchar1* nctemp5552= nctemp5554;
int nctemp5556=CodeEs(nctemp5550,nctemp5552);
struct tree* nctemp5558= p;
struct nctempchar1 *nctemp5562;
static struct nctempchar1 nctemp5563 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5562=&nctemp5563;
nctempchar1* nctemp5560= nctemp5562;
int nctemp5564=CodeEs(nctemp5558,nctemp5560);
struct tree* nctemp5566= p;
struct nctempchar1 *nctemp5570;
static struct nctempchar1 nctemp5571 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5570=&nctemp5571;
nctempchar1* nctemp5568= nctemp5570;
int nctemp5572=CodeEs(nctemp5566,nctemp5568);
struct tree* nctemp5574= p;
nctempchar1* nctemp5576= type;
int nctemp5579=CodeEs(nctemp5574,nctemp5576);
int nctemp5581= rank;
int nctemp5583=CodeEd(nctemp5581);
struct tree* nctemp5585= p;
struct nctempchar1 *nctemp5589;
static struct nctempchar1 nctemp5590 = {{ 6}, (char*)"));\n\0"};
nctemp5589=&nctemp5590;
nctempchar1* nctemp5587= nctemp5589;
int nctemp5591=CodeEs(nctemp5585,nctemp5587);
int nctemp5592 = (p !=0);
int nctemp5596=nctemp5592;
while(nctemp5596)
{{
struct tree* nctemp5602= p;
nctempchar1* nctemp5604=CodeExpr(nctemp5602);
dim=nctemp5604;
struct tree* nctemp5606= p;
nctempchar1* nctemp5608= pointer;
int nctemp5611=CodeEs(nctemp5606,nctemp5608);
struct tree* nctemp5613= p;
struct nctempchar1 *nctemp5617;
static struct nctempchar1 nctemp5618 = {{ 4}, (char*)"->d\0"};
nctemp5617=&nctemp5618;
nctempchar1* nctemp5615= nctemp5617;
int nctemp5619=CodeEs(nctemp5613,nctemp5615);
struct tree* nctemp5621= p;
struct nctempchar1 *nctemp5625;
static struct nctempchar1 nctemp5626 = {{ 2}, (char*)"[\0"};
nctemp5625=&nctemp5626;
nctempchar1* nctemp5623= nctemp5625;
int nctemp5627=CodeEs(nctemp5621,nctemp5623);
int nctemp5629= i;
int nctemp5631=CodeEd(nctemp5629);
struct tree* nctemp5633= p;
struct nctempchar1 *nctemp5637;
static struct nctempchar1 nctemp5638 = {{ 3}, (char*)"]=\0"};
nctemp5637=&nctemp5638;
nctempchar1* nctemp5635= nctemp5637;
int nctemp5639=CodeEs(nctemp5633,nctemp5635);
struct tree* nctemp5641= p;
nctempchar1* nctemp5643= dim;
int nctemp5646=CodeEs(nctemp5641,nctemp5643);
struct tree* nctemp5648= p;
struct nctempchar1 *nctemp5652;
static struct nctempchar1 nctemp5653 = {{ 4}, (char*)";\n\0"};
nctemp5652=&nctemp5653;
nctempchar1* nctemp5650= nctemp5652;
int nctemp5654=CodeEs(nctemp5648,nctemp5650);
i = (i + 1);
struct tree* nctemp5659= p;
struct tree* nctemp5661=PtreeMvsister(nctemp5659);
p =nctemp5661;
}
int nctemp5662 = (p !=0);
nctemp5596=nctemp5662;}p = top;
struct tree* nctemp5667= p;
nctempchar1* nctemp5669= pointer;
int nctemp5672=CodeEs(nctemp5667,nctemp5669);
struct tree* nctemp5674= p;
struct nctempchar1 *nctemp5678;
static struct nctempchar1 nctemp5679 = {{ 4}, (char*)"->a\0"};
nctemp5678=&nctemp5679;
nctempchar1* nctemp5676= nctemp5678;
int nctemp5680=CodeEs(nctemp5674,nctemp5676);
struct tree* nctemp5682= p;
struct nctempchar1 *nctemp5686;
static struct nctempchar1 nctemp5687 = {{ 3}, (char*)"=(\0"};
nctemp5686=&nctemp5687;
nctempchar1* nctemp5684= nctemp5686;
int nctemp5688=CodeEs(nctemp5682,nctemp5684);
struct tree* nctemp5690= p;
nctempchar1* nctemp5692= type;
int nctemp5695=CodeEs(nctemp5690,nctemp5692);
struct tree* nctemp5697= p;
struct nctempchar1 *nctemp5701;
static struct nctempchar1 nctemp5702 = {{ 4}, (char*)" *)\0"};
nctemp5701=&nctemp5702;
nctempchar1* nctemp5699= nctemp5701;
int nctemp5703=CodeEs(nctemp5697,nctemp5699);
struct tree* nctemp5705= p;
struct nctempchar1 *nctemp5709;
static struct nctempchar1 nctemp5710 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5709=&nctemp5710;
nctempchar1* nctemp5707= nctemp5709;
int nctemp5711=CodeEs(nctemp5705,nctemp5707);
struct tree* nctemp5713= p;
nctempchar1* nctemp5715= type;
int nctemp5718=CodeEs(nctemp5713,nctemp5715);
struct tree* nctemp5720= p;
struct nctempchar1 *nctemp5724;
static struct nctempchar1 nctemp5725 = {{ 2}, (char*)")\0"};
nctemp5724=&nctemp5725;
nctempchar1* nctemp5722= nctemp5724;
int nctemp5726=CodeEs(nctemp5720,nctemp5722);
struct tree* nctemp5728= p;
struct nctempchar1 *nctemp5732;
static struct nctempchar1 nctemp5733 = {{ 2}, (char*)"*\0"};
nctemp5732=&nctemp5733;
nctempchar1* nctemp5730= nctemp5732;
int nctemp5734=CodeEs(nctemp5728,nctemp5730);
struct tree* nctemp5736= p;
nctempchar1* nctemp5738= totdim;
int nctemp5741=CodeEs(nctemp5736,nctemp5738);
struct tree* nctemp5743= p;
struct nctempchar1 *nctemp5747;
static struct nctempchar1 nctemp5748 = {{ 5}, (char*)");\n\0"};
nctemp5747=&nctemp5748;
nctempchar1* nctemp5745= nctemp5747;
int nctemp5749=CodeEs(nctemp5743,nctemp5745);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5756= p;
struct tree* nctemp5758=PtreeMvchild(nctemp5756);
p =nctemp5758;
struct tree* nctemp5763= p;
struct tree* nctemp5765=PtreeMvchild(nctemp5763);
p =nctemp5765;
struct tree* nctemp5771= p;
nctempchar1* nctemp5773=CodeBinexpr(nctemp5771);
tmp=nctemp5773;
struct tree* nctemp5777= p;
nctempchar1* nctemp5779=PtreeGetref(nctemp5777);
nctempchar1* nctemp5775= nctemp5779;
struct nctempchar1 *nctemp5782;
static struct nctempchar1 nctemp5783 = {{ 5}, (char*)"aref\0"};
nctemp5782=&nctemp5783;
nctempchar1* nctemp5780= nctemp5782;
int nctemp5784=LibeStrcmp(nctemp5775,nctemp5780);
if(nctemp5784)
{
struct tree* nctemp5786= p;
struct nctempchar1 *nctemp5790;
static struct nctempchar1 nctemp5791 = {{ 9}, (char*)"RunFree(\0"};
nctemp5790=&nctemp5791;
nctempchar1* nctemp5788= nctemp5790;
int nctemp5792=CodeEs(nctemp5786,nctemp5788);
struct tree* nctemp5794= p;
nctempchar1* nctemp5796= tmp;
int nctemp5799=CodeEs(nctemp5794,nctemp5796);
struct tree* nctemp5801= p;
struct nctempchar1 *nctemp5805;
static struct nctempchar1 nctemp5806 = {{ 8}, (char*)"->a);\n\0"};
nctemp5805=&nctemp5806;
nctempchar1* nctemp5803= nctemp5805;
int nctemp5807=CodeEs(nctemp5801,nctemp5803);
struct tree* nctemp5809= p;
struct nctempchar1 *nctemp5813;
static struct nctempchar1 nctemp5814 = {{ 9}, (char*)"RunFree(\0"};
nctemp5813=&nctemp5814;
nctempchar1* nctemp5811= nctemp5813;
int nctemp5815=CodeEs(nctemp5809,nctemp5811);
struct tree* nctemp5817= p;
nctempchar1* nctemp5819= tmp;
int nctemp5822=CodeEs(nctemp5817,nctemp5819);
struct tree* nctemp5824= p;
struct nctempchar1 *nctemp5828;
static struct nctempchar1 nctemp5829 = {{ 5}, (char*)");\n\0"};
nctemp5828=&nctemp5829;
nctempchar1* nctemp5826= nctemp5828;
int nctemp5830=CodeEs(nctemp5824,nctemp5826);
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
nctempchar1* nctemp5838=CodeMktemp();
tempr=nctemp5838;
struct tree* nctemp5843= p;
struct tree* nctemp5845=PtreeMvchild(nctemp5843);
np =nctemp5845;
struct tree* nctemp5851= np;
nctempchar1* nctemp5853=CodeExpr(nctemp5851);
temp=nctemp5853;
struct tree* nctemp5858= np;
struct tree* nctemp5860=PtreeMvsister(nctemp5858);
sp =nctemp5860;
struct tree* nctemp5866= sp;
nctempchar1* nctemp5868=CodeExpr(nctemp5866);
index=nctemp5868;
struct tree* nctemp5870= p;
struct tree* nctemp5874= p;
nctempchar1* nctemp5876=PtreeGetype(nctemp5874);
nctempchar1* nctemp5872= nctemp5876;
int nctemp5877=CodeEs(nctemp5870,nctemp5872);
struct tree* nctemp5879= p;
struct nctempchar1 *nctemp5883;
static struct nctempchar1 nctemp5884 = {{ 2}, (char*)" \0"};
nctemp5883=&nctemp5884;
nctempchar1* nctemp5881= nctemp5883;
int nctemp5885=CodeEs(nctemp5879,nctemp5881);
struct tree* nctemp5887= p;
nctempchar1* nctemp5889= tempr;
int nctemp5892=CodeEs(nctemp5887,nctemp5889);
struct tree* nctemp5894= p;
struct nctempchar1 *nctemp5898;
static struct nctempchar1 nctemp5899 = {{ 2}, (char*)"=\0"};
nctemp5898=&nctemp5899;
nctempchar1* nctemp5896= nctemp5898;
int nctemp5900=CodeEs(nctemp5894,nctemp5896);
struct tree* nctemp5902= p;
nctempchar1* nctemp5904= temp;
int nctemp5907=CodeEs(nctemp5902,nctemp5904);
struct tree* nctemp5909= p;
struct nctempchar1 *nctemp5913;
static struct nctempchar1 nctemp5914 = {{ 4}, (char*)"->d\0"};
nctemp5913=&nctemp5914;
nctempchar1* nctemp5911= nctemp5913;
int nctemp5915=CodeEs(nctemp5909,nctemp5911);
struct tree* nctemp5917= p;
struct nctempchar1 *nctemp5921;
static struct nctempchar1 nctemp5922 = {{ 2}, (char*)"[\0"};
nctemp5921=&nctemp5922;
nctempchar1* nctemp5919= nctemp5921;
int nctemp5923=CodeEs(nctemp5917,nctemp5919);
struct tree* nctemp5925= p;
nctempchar1* nctemp5927= index;
int nctemp5930=CodeEs(nctemp5925,nctemp5927);
struct tree* nctemp5932= p;
struct nctempchar1 *nctemp5936;
static struct nctempchar1 nctemp5937 = {{ 3}, (char*)"];\0"};
nctemp5936=&nctemp5937;
nctempchar1* nctemp5934= nctemp5936;
int nctemp5938=CodeEs(nctemp5932,nctemp5934);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5946=CodeMktemp();
tempr=nctemp5946;
struct tree* nctemp5951= p;
struct tree* nctemp5953=PtreeMvchild(nctemp5951);
np =nctemp5953;
struct tree* nctemp5958= np;
struct tree* nctemp5960=PtreeMvchild(nctemp5958);
np =nctemp5960;
struct tree* nctemp5966= np;
nctempchar1* nctemp5968=CodeExpr(nctemp5966);
q=nctemp5968;
struct tree* nctemp5973= np;
struct tree* nctemp5975=PtreeMvsister(nctemp5973);
sp =nctemp5975;
struct tree* nctemp5981= sp;
nctempchar1* nctemp5983=CodeExpr(nctemp5981);
r=nctemp5983;
struct tree* nctemp5985= p;
struct tree* nctemp5989= p;
nctempchar1* nctemp5991=PtreeGetype(nctemp5989);
nctempchar1* nctemp5987= nctemp5991;
int nctemp5992=CodeEs(nctemp5985,nctemp5987);
struct tree* nctemp5994= p;
struct nctempchar1 *nctemp5998;
static struct nctempchar1 nctemp5999 = {{ 2}, (char*)" \0"};
nctemp5998=&nctemp5999;
nctempchar1* nctemp5996= nctemp5998;
int nctemp6000=CodeEs(nctemp5994,nctemp5996);
struct tree* nctemp6002= p;
nctempchar1* nctemp6004= tempr;
int nctemp6007=CodeEs(nctemp6002,nctemp6004);
struct tree* nctemp6009= p;
struct nctempchar1 *nctemp6013;
static struct nctempchar1 nctemp6014 = {{ 3}, (char*)".r\0"};
nctemp6013=&nctemp6014;
nctempchar1* nctemp6011= nctemp6013;
int nctemp6015=CodeEs(nctemp6009,nctemp6011);
struct tree* nctemp6017= p;
struct nctempchar1 *nctemp6021;
static struct nctempchar1 nctemp6022 = {{ 3}, (char*)" =\0"};
nctemp6021=&nctemp6022;
nctempchar1* nctemp6019= nctemp6021;
int nctemp6023=CodeEs(nctemp6017,nctemp6019);
struct tree* nctemp6025= p;
nctempchar1* nctemp6027= q;
int nctemp6030=CodeEs(nctemp6025,nctemp6027);
struct tree* nctemp6032= p;
struct nctempchar1 *nctemp6036;
static struct nctempchar1 nctemp6037 = {{ 2}, (char*)";\0"};
nctemp6036=&nctemp6037;
nctempchar1* nctemp6034= nctemp6036;
int nctemp6038=CodeEs(nctemp6032,nctemp6034);
struct tree* nctemp6040= p;
struct tree* nctemp6044= p;
nctempchar1* nctemp6046=PtreeGetype(nctemp6044);
nctempchar1* nctemp6042= nctemp6046;
int nctemp6047=CodeEs(nctemp6040,nctemp6042);
struct tree* nctemp6049= p;
struct nctempchar1 *nctemp6053;
static struct nctempchar1 nctemp6054 = {{ 2}, (char*)" \0"};
nctemp6053=&nctemp6054;
nctempchar1* nctemp6051= nctemp6053;
int nctemp6055=CodeEs(nctemp6049,nctemp6051);
struct tree* nctemp6057= p;
nctempchar1* nctemp6059= tempr;
int nctemp6062=CodeEs(nctemp6057,nctemp6059);
struct tree* nctemp6064= p;
struct nctempchar1 *nctemp6068;
static struct nctempchar1 nctemp6069 = {{ 3}, (char*)".i\0"};
nctemp6068=&nctemp6069;
nctempchar1* nctemp6066= nctemp6068;
int nctemp6070=CodeEs(nctemp6064,nctemp6066);
struct tree* nctemp6072= p;
struct nctempchar1 *nctemp6076;
static struct nctempchar1 nctemp6077 = {{ 2}, (char*)"=\0"};
nctemp6076=&nctemp6077;
nctempchar1* nctemp6074= nctemp6076;
int nctemp6078=CodeEs(nctemp6072,nctemp6074);
struct tree* nctemp6080= p;
nctempchar1* nctemp6082= r;
int nctemp6085=CodeEs(nctemp6080,nctemp6082);
struct tree* nctemp6087= p;
struct nctempchar1 *nctemp6091;
static struct nctempchar1 nctemp6092 = {{ 2}, (char*)";\0"};
nctemp6091=&nctemp6092;
nctempchar1* nctemp6089= nctemp6091;
int nctemp6093=CodeEs(nctemp6087,nctemp6089);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6101=CodeMktemp();
tempr=nctemp6101;
struct tree* nctemp6106= p;
struct tree* nctemp6108=PtreeMvchild(nctemp6106);
np =nctemp6108;
struct tree* nctemp6114= np;
nctempchar1* nctemp6116=CodeExpr(nctemp6114);
q=nctemp6116;
struct tree* nctemp6118= p;
struct tree* nctemp6122= p;
nctempchar1* nctemp6124=PtreeGetype(nctemp6122);
nctempchar1* nctemp6120= nctemp6124;
int nctemp6125=CodeEs(nctemp6118,nctemp6120);
struct tree* nctemp6127= p;
struct nctempchar1 *nctemp6131;
static struct nctempchar1 nctemp6132 = {{ 2}, (char*)" \0"};
nctemp6131=&nctemp6132;
nctempchar1* nctemp6129= nctemp6131;
int nctemp6133=CodeEs(nctemp6127,nctemp6129);
struct tree* nctemp6135= p;
nctempchar1* nctemp6137= tempr;
int nctemp6140=CodeEs(nctemp6135,nctemp6137);
struct tree* nctemp6142= p;
struct nctempchar1 *nctemp6146;
static struct nctempchar1 nctemp6147 = {{ 3}, (char*)" =\0"};
nctemp6146=&nctemp6147;
nctempchar1* nctemp6144= nctemp6146;
int nctemp6148=CodeEs(nctemp6142,nctemp6144);
struct tree* nctemp6150= p;
nctempchar1* nctemp6152= q;
int nctemp6155=CodeEs(nctemp6150,nctemp6152);
struct tree* nctemp6157= p;
struct nctempchar1 *nctemp6161;
static struct nctempchar1 nctemp6162 = {{ 5}, (char*)".i  \0"};
nctemp6161=&nctemp6162;
nctempchar1* nctemp6159= nctemp6161;
int nctemp6163=CodeEs(nctemp6157,nctemp6159);
struct tree* nctemp6165= p;
struct nctempchar1 *nctemp6169;
static struct nctempchar1 nctemp6170 = {{ 4}, (char*)";\n\0"};
nctemp6169=&nctemp6170;
nctempchar1* nctemp6167= nctemp6169;
int nctemp6171=CodeEs(nctemp6165,nctemp6167);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6178= p;
struct tree* nctemp6180=PtreeMvchild(nctemp6178);
np =nctemp6180;
struct tree* nctemp6186= np;
nctempchar1* nctemp6188=CodeExpr(nctemp6186);
q=nctemp6188;
nctempchar1* nctemp6194=CodeMktemp();
tmp=nctemp6194;
struct tree* nctemp6196= p;
struct tree* nctemp6200= p;
nctempchar1* nctemp6202=PtreeGetype(nctemp6200);
nctempchar1* nctemp6198= nctemp6202;
int nctemp6203=CodeEs(nctemp6196,nctemp6198);
struct tree* nctemp6205= p;
struct nctempchar1 *nctemp6209;
static struct nctempchar1 nctemp6210 = {{ 2}, (char*)" \0"};
nctemp6209=&nctemp6210;
nctempchar1* nctemp6207= nctemp6209;
int nctemp6211=CodeEs(nctemp6205,nctemp6207);
struct tree* nctemp6213= p;
nctempchar1* nctemp6215= tmp;
int nctemp6218=CodeEs(nctemp6213,nctemp6215);
struct tree* nctemp6220= p;
struct nctempchar1 *nctemp6224;
static struct nctempchar1 nctemp6225 = {{ 3}, (char*)" =\0"};
nctemp6224=&nctemp6225;
nctempchar1* nctemp6222= nctemp6224;
int nctemp6226=CodeEs(nctemp6220,nctemp6222);
struct tree* nctemp6228= p;
nctempchar1* nctemp6230= q;
int nctemp6233=CodeEs(nctemp6228,nctemp6230);
struct tree* nctemp6235= p;
struct nctempchar1 *nctemp6239;
static struct nctempchar1 nctemp6240 = {{ 5}, (char*)".r  \0"};
nctemp6239=&nctemp6240;
nctempchar1* nctemp6237= nctemp6239;
int nctemp6241=CodeEs(nctemp6235,nctemp6237);
struct tree* nctemp6243= p;
struct nctempchar1 *nctemp6247;
static struct nctempchar1 nctemp6248 = {{ 4}, (char*)";\n\0"};
nctemp6247=&nctemp6248;
nctempchar1* nctemp6245= nctemp6247;
int nctemp6249=CodeEs(nctemp6243,nctemp6245);
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
struct tree* nctemp6258= p;
nctempchar1* nctemp6260=PtreeGetdef(nctemp6258);
nctempchar1* nctemp6256= nctemp6260;
struct symbol* nctemp6263=SymGetetp();
struct symbol* nctemp6261= nctemp6263;
struct symbol* nctemp6264=SymLookup(nctemp6256,nctemp6261);
tp =nctemp6264;
struct tree* nctemp6269= p;
struct tree* nctemp6271=PtreeMvchild(nctemp6269);
sp =nctemp6271;
int nctemp6272 = (sp !=0);
if(nctemp6272)
{
struct tree* nctemp6281= sp;
nctempchar1* nctemp6283=PtreeGetname(nctemp6281);
nctempchar1* nctemp6279= nctemp6283;
struct nctempchar1 *nctemp6286;
static struct nctempchar1 nctemp6287 = {{ 9}, (char*)"exprlist\0"};
nctemp6286=&nctemp6287;
nctempchar1* nctemp6284= nctemp6286;
int nctemp6288=LibeStrcmp(nctemp6279,nctemp6284);
int nctemp6276 = (nctemp6288 ==1);
if(nctemp6276)
{
struct tree* nctemp6294= sp;
struct tree* nctemp6296=PtreeMvchild(nctemp6294);
sp =nctemp6296;
}
}
int nctemp6297 = (sp !=0);
int nctemp6301=nctemp6297;
while(nctemp6301)
{{
nctempchar1* nctemp6307=CodeMktemp();
ntemp=nctemp6307;
struct tree* nctemp6309= sp;
nctempchar1* nctemp6311= ntemp;
int nctemp6314=PtreeSetempr(nctemp6309,nctemp6311);
struct tree* nctemp6320= sp;
nctempchar1* nctemp6322=CodeExpr(nctemp6320);
temp=nctemp6322;
struct tree* nctemp6328= sp;
nctempchar1* nctemp6330=PtreeGetref(nctemp6328);
nctempchar1* nctemp6326= nctemp6330;
struct nctempchar1 *nctemp6333;
static struct nctempchar1 nctemp6334 = {{ 5}, (char*)"aref\0"};
nctemp6333=&nctemp6334;
nctempchar1* nctemp6331= nctemp6333;
int nctemp6335=LibeStrcmp(nctemp6326,nctemp6331);
int nctemp6323 = (nctemp6335 ==1);
if(nctemp6323)
{
struct tree* nctemp6338= sp;
struct nctempchar1 *nctemp6342;
static struct nctempchar1 nctemp6343 = {{ 7}, (char*)"nctemp\0"};
nctemp6342=&nctemp6343;
nctempchar1* nctemp6340= nctemp6342;
int nctemp6344=CodeEs(nctemp6338,nctemp6340);
struct tree* nctemp6346= sp;
struct tree* nctemp6350= sp;
nctempchar1* nctemp6352=PtreeGetype(nctemp6350);
nctempchar1* nctemp6348= nctemp6352;
int nctemp6353=CodeEs(nctemp6346,nctemp6348);
struct tree* nctemp6357= sp;
int nctemp6359=PtreeGetrank(nctemp6357);
int nctemp6355= nctemp6359;
int nctemp6360=CodeEd(nctemp6355);
struct tree* nctemp6362= sp;
struct nctempchar1 *nctemp6366;
static struct nctempchar1 nctemp6367 = {{ 2}, (char*)"*\0"};
nctemp6366=&nctemp6367;
nctempchar1* nctemp6364= nctemp6366;
int nctemp6368=CodeEs(nctemp6362,nctemp6364);
}
else{
struct tree* nctemp6374= sp;
nctempchar1* nctemp6376=PtreeGetref(nctemp6374);
nctempchar1* nctemp6372= nctemp6376;
struct nctempchar1 *nctemp6379;
static struct nctempchar1 nctemp6380 = {{ 5}, (char*)"sref\0"};
nctemp6379=&nctemp6380;
nctempchar1* nctemp6377= nctemp6379;
int nctemp6381=LibeStrcmp(nctemp6372,nctemp6377);
int nctemp6369 = (nctemp6381 ==1);
if(nctemp6369)
{
struct tree* nctemp6384= sp;
struct nctempchar1 *nctemp6388;
static struct nctempchar1 nctemp6389 = {{ 8}, (char*)"struct \0"};
nctemp6388=&nctemp6389;
nctempchar1* nctemp6386= nctemp6388;
int nctemp6390=CodeEs(nctemp6384,nctemp6386);
struct tree* nctemp6392= sp;
struct tree* nctemp6396= sp;
nctempchar1* nctemp6398=PtreeGetype(nctemp6396);
nctempchar1* nctemp6394= nctemp6398;
int nctemp6399=CodeEs(nctemp6392,nctemp6394);
struct tree* nctemp6401= sp;
struct nctempchar1 *nctemp6405;
static struct nctempchar1 nctemp6406 = {{ 2}, (char*)"*\0"};
nctemp6405=&nctemp6406;
nctempchar1* nctemp6403= nctemp6405;
int nctemp6407=CodeEs(nctemp6401,nctemp6403);
}
else{
struct tree* nctemp6409= sp;
struct tree* nctemp6413= sp;
nctempchar1* nctemp6415=PtreeGetype(nctemp6413);
nctempchar1* nctemp6411= nctemp6415;
int nctemp6416=CodeEs(nctemp6409,nctemp6411);
}
}
struct tree* nctemp6418= sp;
struct nctempchar1 *nctemp6422;
static struct nctempchar1 nctemp6423 = {{ 2}, (char*)" \0"};
nctemp6422=&nctemp6423;
nctempchar1* nctemp6420= nctemp6422;
int nctemp6424=CodeEs(nctemp6418,nctemp6420);
struct tree* nctemp6426= sp;
nctempchar1* nctemp6428= ntemp;
int nctemp6431=CodeEs(nctemp6426,nctemp6428);
struct tree* nctemp6433= sp;
struct nctempchar1 *nctemp6437;
static struct nctempchar1 nctemp6438 = {{ 3}, (char*)"= \0"};
nctemp6437=&nctemp6438;
nctempchar1* nctemp6435= nctemp6437;
int nctemp6439=CodeEs(nctemp6433,nctemp6435);
struct tree* nctemp6441= sp;
nctempchar1* nctemp6443= temp;
int nctemp6446=CodeEs(nctemp6441,nctemp6443);
struct tree* nctemp6448= sp;
struct nctempchar1 *nctemp6452;
static struct nctempchar1 nctemp6453 = {{ 4}, (char*)";\n\0"};
nctemp6452=&nctemp6453;
nctempchar1* nctemp6450= nctemp6452;
int nctemp6454=CodeEs(nctemp6448,nctemp6450);
struct tree* nctemp6459= sp;
struct tree* nctemp6461=PtreeMvsister(nctemp6459);
sp =nctemp6461;
}
int nctemp6462 = (sp !=0);
nctemp6301=nctemp6462;}nctempchar1* nctemp6471=CodeMktemp();
ntemp=nctemp6471;
struct tree* nctemp6477= p;
nctempchar1* nctemp6479=PtreeGetref(nctemp6477);
nctempchar1* nctemp6475= nctemp6479;
struct nctempchar1 *nctemp6482;
static struct nctempchar1 nctemp6483 = {{ 5}, (char*)"aref\0"};
nctemp6482=&nctemp6483;
nctempchar1* nctemp6480= nctemp6482;
int nctemp6484=LibeStrcmp(nctemp6475,nctemp6480);
int nctemp6472 = (nctemp6484 ==1);
if(nctemp6472)
{
struct tree* nctemp6487= p;
struct nctempchar1 *nctemp6491;
static struct nctempchar1 nctemp6492 = {{ 7}, (char*)"nctemp\0"};
nctemp6491=&nctemp6492;
nctempchar1* nctemp6489= nctemp6491;
int nctemp6493=CodeEs(nctemp6487,nctemp6489);
struct tree* nctemp6495= p;
struct tree* nctemp6499= p;
nctempchar1* nctemp6501=PtreeGetype(nctemp6499);
nctempchar1* nctemp6497= nctemp6501;
int nctemp6502=CodeEs(nctemp6495,nctemp6497);
struct tree* nctemp6506= p;
int nctemp6508=PtreeGetrank(nctemp6506);
int nctemp6504= nctemp6508;
int nctemp6509=CodeEd(nctemp6504);
struct tree* nctemp6511= p;
struct nctempchar1 *nctemp6515;
static struct nctempchar1 nctemp6516 = {{ 2}, (char*)"*\0"};
nctemp6515=&nctemp6516;
nctempchar1* nctemp6513= nctemp6515;
int nctemp6517=CodeEs(nctemp6511,nctemp6513);
}
else{
struct tree* nctemp6523= p;
nctempchar1* nctemp6525=PtreeGetref(nctemp6523);
nctempchar1* nctemp6521= nctemp6525;
struct nctempchar1 *nctemp6528;
static struct nctempchar1 nctemp6529 = {{ 5}, (char*)"sref\0"};
nctemp6528=&nctemp6529;
nctempchar1* nctemp6526= nctemp6528;
int nctemp6530=LibeStrcmp(nctemp6521,nctemp6526);
int nctemp6518 = (nctemp6530 ==1);
if(nctemp6518)
{
struct tree* nctemp6533= p;
struct nctempchar1 *nctemp6537;
static struct nctempchar1 nctemp6538 = {{ 8}, (char*)"struct \0"};
nctemp6537=&nctemp6538;
nctempchar1* nctemp6535= nctemp6537;
int nctemp6539=CodeEs(nctemp6533,nctemp6535);
struct tree* nctemp6541= p;
struct tree* nctemp6545= p;
nctempchar1* nctemp6547=PtreeGetype(nctemp6545);
nctempchar1* nctemp6543= nctemp6547;
int nctemp6548=CodeEs(nctemp6541,nctemp6543);
struct tree* nctemp6550= p;
struct nctempchar1 *nctemp6554;
static struct nctempchar1 nctemp6555 = {{ 2}, (char*)"*\0"};
nctemp6554=&nctemp6555;
nctempchar1* nctemp6552= nctemp6554;
int nctemp6556=CodeEs(nctemp6550,nctemp6552);
}
else{
struct tree* nctemp6558= p;
struct tree* nctemp6562= p;
nctempchar1* nctemp6564=PtreeGetype(nctemp6562);
nctempchar1* nctemp6560= nctemp6564;
int nctemp6565=CodeEs(nctemp6558,nctemp6560);
}
}
struct tree* nctemp6567= p;
struct nctempchar1 *nctemp6571;
static struct nctempchar1 nctemp6572 = {{ 2}, (char*)" \0"};
nctemp6571=&nctemp6572;
nctempchar1* nctemp6569= nctemp6571;
int nctemp6573=CodeEs(nctemp6567,nctemp6569);
struct tree* nctemp6575= p;
nctempchar1* nctemp6577= ntemp;
int nctemp6580=CodeEs(nctemp6575,nctemp6577);
struct tree* nctemp6582= p;
struct nctempchar1 *nctemp6586;
static struct nctempchar1 nctemp6587 = {{ 2}, (char*)"=\0"};
nctemp6586=&nctemp6587;
nctempchar1* nctemp6584= nctemp6586;
int nctemp6588=CodeEs(nctemp6582,nctemp6584);
struct tree* nctemp6590= p;
struct symbol* nctemp6594= tp;
nctempchar1* nctemp6596=SymGetname(nctemp6594);
nctempchar1* nctemp6592= nctemp6596;
int nctemp6597=CodeEs(nctemp6590,nctemp6592);
struct tree* nctemp6599= p;
struct nctempchar1 *nctemp6603;
static struct nctempchar1 nctemp6604 = {{ 2}, (char*)"(\0"};
nctemp6603=&nctemp6604;
nctempchar1* nctemp6601= nctemp6603;
int nctemp6605=CodeEs(nctemp6599,nctemp6601);
struct tree* nctemp6610= p;
struct tree* nctemp6612=PtreeMvchild(nctemp6610);
sp =nctemp6612;
int nctemp6613 = (sp !=0);
if(nctemp6613)
{
struct tree* nctemp6621= sp;
struct tree* nctemp6623=PtreeMvchild(nctemp6621);
sp =nctemp6623;
}
int nctemp6624 = (sp !=0);
int nctemp6628=nctemp6624;
while(nctemp6628)
{{
struct tree* nctemp6630= p;
struct tree* nctemp6634= sp;
nctempchar1* nctemp6636=PtreeGetempr(nctemp6634);
nctempchar1* nctemp6632= nctemp6636;
int nctemp6637=CodeEs(nctemp6630,nctemp6632);
struct tree* nctemp6645= sp;
struct tree* nctemp6647=PtreeMvsister(nctemp6645);
sp =nctemp6647;
int nctemp6638 = (sp !=0);
if(nctemp6638)
{
struct tree* nctemp6650= p;
struct nctempchar1 *nctemp6654;
static struct nctempchar1 nctemp6655 = {{ 2}, (char*)",\0"};
nctemp6654=&nctemp6655;
nctempchar1* nctemp6652= nctemp6654;
int nctemp6656=CodeEs(nctemp6650,nctemp6652);
}
noargs = (noargs + 1);
}
int nctemp6657 = (sp !=0);
nctemp6628=nctemp6657;}struct tree* nctemp6662= p;
struct nctempchar1 *nctemp6666;
static struct nctempchar1 nctemp6667 = {{ 5}, (char*)");\n\0"};
nctemp6666=&nctemp6667;
nctempchar1* nctemp6664= nctemp6666;
int nctemp6668=CodeEs(nctemp6662,nctemp6664);
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
nctempchar1* nctemp6676=CodeMktemp();
pointer=nctemp6676;
nctempchar1* nctemp6682=CodeMktemp();
descr=nctemp6682;
struct tree* nctemp6688= p;
nctempchar1* nctemp6690=PtreeGetype(nctemp6688);
type=nctemp6690;
struct tree* nctemp6696= p;
nctempchar1* nctemp6698=PtreeGetname(nctemp6696);
nctempchar1* nctemp6694= nctemp6698;
struct nctempchar1 *nctemp6701;
static struct nctempchar1 nctemp6702 = {{ 5}, (char*)"cast\0"};
nctemp6701=&nctemp6702;
nctempchar1* nctemp6699= nctemp6701;
int nctemp6703=LibeStrcmp(nctemp6694,nctemp6699);
int nctemp6691 = (nctemp6703 ==1);
if(nctemp6691)
{
struct tree* nctemp6709= p;
struct tree* nctemp6711=PtreeMvchild(nctemp6709);
np =nctemp6711;
struct tree* nctemp6716= np;
struct tree* nctemp6718=PtreeMvsister(nctemp6716);
sp =nctemp6718;
struct tree* nctemp6724= sp;
nctempchar1* nctemp6726=CodeExpr(nctemp6724);
expr=nctemp6726;
struct tree* nctemp6732= np;
nctempchar1* nctemp6734=PtreeGetref(nctemp6732);
nctempchar1* nctemp6730= nctemp6734;
struct nctempchar1 *nctemp6737;
static struct nctempchar1 nctemp6738 = {{ 5}, (char*)"sref\0"};
nctemp6737=&nctemp6738;
nctempchar1* nctemp6735= nctemp6737;
int nctemp6739=LibeStrcmp(nctemp6730,nctemp6735);
int nctemp6727 = (nctemp6739 ==1);
if(nctemp6727)
{
nctempchar1* nctemp6746=CodeMktemp();
tmp=nctemp6746;
struct tree* nctemp6748= p;
nctempchar1* nctemp6750= type;
int nctemp6753=CodeEs(nctemp6748,nctemp6750);
struct tree* nctemp6755= p;
struct nctempchar1 *nctemp6759;
static struct nctempchar1 nctemp6760 = {{ 2}, (char*)" \0"};
nctemp6759=&nctemp6760;
nctempchar1* nctemp6757= nctemp6759;
int nctemp6761=CodeEs(nctemp6755,nctemp6757);
struct tree* nctemp6763= p;
nctempchar1* nctemp6765= tmp;
int nctemp6768=CodeEs(nctemp6763,nctemp6765);
struct tree* nctemp6770= p;
struct nctempchar1 *nctemp6774;
static struct nctempchar1 nctemp6775 = {{ 2}, (char*)"=\0"};
nctemp6774=&nctemp6775;
nctempchar1* nctemp6772= nctemp6774;
int nctemp6776=CodeEs(nctemp6770,nctemp6772);
struct tree* nctemp6778= p;
struct nctempchar1 *nctemp6782;
static struct nctempchar1 nctemp6783 = {{ 9}, (char*)"(struct \0"};
nctemp6782=&nctemp6783;
nctempchar1* nctemp6780= nctemp6782;
int nctemp6784=CodeEs(nctemp6778,nctemp6780);
struct tree* nctemp6786= p;
struct tree* nctemp6790= np;
nctempchar1* nctemp6792=PtreeGetype(nctemp6790);
nctempchar1* nctemp6788= nctemp6792;
int nctemp6793=CodeEs(nctemp6786,nctemp6788);
struct tree* nctemp6795= p;
struct nctempchar1 *nctemp6799;
static struct nctempchar1 nctemp6800 = {{ 4}, (char*)"*)(\0"};
nctemp6799=&nctemp6800;
nctempchar1* nctemp6797= nctemp6799;
int nctemp6801=CodeEs(nctemp6795,nctemp6797);
struct tree* nctemp6803= p;
nctempchar1* nctemp6805= expr;
int nctemp6808=CodeEs(nctemp6803,nctemp6805);
struct tree* nctemp6810= p;
struct nctempchar1 *nctemp6814;
static struct nctempchar1 nctemp6815 = {{ 5}, (char*)");\n\0"};
nctemp6814=&nctemp6815;
nctempchar1* nctemp6812= nctemp6814;
int nctemp6816=CodeEs(nctemp6810,nctemp6812);
}
else{
struct tree* nctemp6822= np;
nctempchar1* nctemp6824=PtreeGetref(nctemp6822);
nctempchar1* nctemp6820= nctemp6824;
struct nctempchar1 *nctemp6827;
static struct nctempchar1 nctemp6828 = {{ 5}, (char*)"aref\0"};
nctemp6827=&nctemp6828;
nctempchar1* nctemp6825= nctemp6827;
int nctemp6829=LibeStrcmp(nctemp6820,nctemp6825);
int nctemp6817 = (nctemp6829 ==1);
if(nctemp6817)
{
struct tree* nctemp6835= np;
struct tree* nctemp6837=PtreeMvchild(nctemp6835);
np =nctemp6837;
struct tree* nctemp6842= np;
struct tree* nctemp6844=PtreeMvchild(nctemp6842);
np =nctemp6844;
struct tree* nctemp6849= np;
struct tree* nctemp6851=PtreeMvchild(nctemp6849);
np =nctemp6851;
struct tree* nctemp6856= np;
struct tree* nctemp6858=PtreeMvchild(nctemp6856);
np =nctemp6858;
tp = np;
rank = 1;
struct tree* nctemp6866= np;
struct tree* nctemp6868=PtreeMvsister(nctemp6866);
np =nctemp6868;
int nctemp6859 = (np !=0);
int nctemp6870=nctemp6859;
while(nctemp6870)
{{
rank = (rank + 1);
}
struct tree* nctemp6878= np;
struct tree* nctemp6880=PtreeMvsister(nctemp6878);
np =nctemp6880;
int nctemp6871 = (np !=0);
nctemp6870=nctemp6871;}int nctemp6882 = (rank > 4);
if(nctemp6882)
{
struct nctempchar1 *nctemp6889;
static struct nctempchar1 nctemp6890 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6889=&nctemp6890;
nctempchar1* nctemp6887= nctemp6889;
int nctemp6891=CodeError(nctemp6887);
}
p = tp;
struct tree* nctemp6893= p;
struct nctempchar1 *nctemp6897;
static struct nctempchar1 nctemp6898 = {{ 7}, (char*)"nctemp\0"};
nctemp6897=&nctemp6898;
nctempchar1* nctemp6895= nctemp6897;
int nctemp6899=CodeEs(nctemp6893,nctemp6895);
struct tree* nctemp6901= p;
nctempchar1* nctemp6903= type;
int nctemp6906=CodeEs(nctemp6901,nctemp6903);
int nctemp6908= rank;
int nctemp6910=CodeEd(nctemp6908);
struct tree* nctemp6912= p;
struct nctempchar1 *nctemp6916;
static struct nctempchar1 nctemp6917 = {{ 2}, (char*)" \0"};
nctemp6916=&nctemp6917;
nctempchar1* nctemp6914= nctemp6916;
int nctemp6918=CodeEs(nctemp6912,nctemp6914);
struct tree* nctemp6920= sp;
nctempchar1* nctemp6922= descr;
int nctemp6925=CodeEs(nctemp6920,nctemp6922);
struct tree* nctemp6927= sp;
struct nctempchar1 *nctemp6931;
static struct nctempchar1 nctemp6932 = {{ 4}, (char*)";\n\0"};
nctemp6931=&nctemp6932;
nctempchar1* nctemp6929= nctemp6931;
int nctemp6933=CodeEs(nctemp6927,nctemp6929);
struct tree* nctemp6935= p;
struct nctempchar1 *nctemp6939;
static struct nctempchar1 nctemp6940 = {{ 7}, (char*)"nctemp\0"};
nctemp6939=&nctemp6940;
nctempchar1* nctemp6937= nctemp6939;
int nctemp6941=CodeEs(nctemp6935,nctemp6937);
struct tree* nctemp6943= p;
nctempchar1* nctemp6945= type;
int nctemp6948=CodeEs(nctemp6943,nctemp6945);
int nctemp6950= rank;
int nctemp6952=CodeEd(nctemp6950);
struct tree* nctemp6954= p;
struct nctempchar1 *nctemp6958;
static struct nctempchar1 nctemp6959 = {{ 3}, (char*)" *\0"};
nctemp6958=&nctemp6959;
nctempchar1* nctemp6956= nctemp6958;
int nctemp6960=CodeEs(nctemp6954,nctemp6956);
struct tree* nctemp6962= sp;
nctempchar1* nctemp6964= pointer;
int nctemp6967=CodeEs(nctemp6962,nctemp6964);
struct tree* nctemp6969= p;
struct nctempchar1 *nctemp6973;
static struct nctempchar1 nctemp6974 = {{ 4}, (char*)";\n\0"};
nctemp6973=&nctemp6974;
nctempchar1* nctemp6971= nctemp6973;
int nctemp6975=CodeEs(nctemp6969,nctemp6971);
struct tree* nctemp6977= sp;
nctempchar1* nctemp6979= descr;
int nctemp6982=CodeEs(nctemp6977,nctemp6979);
struct tree* nctemp6984= sp;
struct nctempchar1 *nctemp6988;
static struct nctempchar1 nctemp6989 = {{ 2}, (char*)"=\0"};
nctemp6988=&nctemp6989;
nctempchar1* nctemp6986= nctemp6988;
int nctemp6990=CodeEs(nctemp6984,nctemp6986);
struct tree* nctemp6992= sp;
struct nctempchar1 *nctemp6996;
static struct nctempchar1 nctemp6997 = {{ 3}, (char*)"*(\0"};
nctemp6996=&nctemp6997;
nctempchar1* nctemp6994= nctemp6996;
int nctemp6998=CodeEs(nctemp6992,nctemp6994);
struct tree* nctemp7000= p;
struct nctempchar1 *nctemp7004;
static struct nctempchar1 nctemp7005 = {{ 7}, (char*)"nctemp\0"};
nctemp7004=&nctemp7005;
nctempchar1* nctemp7002= nctemp7004;
int nctemp7006=CodeEs(nctemp7000,nctemp7002);
struct tree* nctemp7008= sp;
nctempchar1* nctemp7010= type;
int nctemp7013=CodeEs(nctemp7008,nctemp7010);
int nctemp7015= rank;
int nctemp7017=CodeEd(nctemp7015);
struct tree* nctemp7019= sp;
struct nctempchar1 *nctemp7023;
static struct nctempchar1 nctemp7024 = {{ 4}, (char*)"*)(\0"};
nctemp7023=&nctemp7024;
nctempchar1* nctemp7021= nctemp7023;
int nctemp7025=CodeEs(nctemp7019,nctemp7021);
struct tree* nctemp7027= sp;
nctempchar1* nctemp7029= expr;
int nctemp7032=CodeEs(nctemp7027,nctemp7029);
struct tree* nctemp7034= sp;
struct nctempchar1 *nctemp7038;
static struct nctempchar1 nctemp7039 = {{ 5}, (char*)");\n\0"};
nctemp7038=&nctemp7039;
nctempchar1* nctemp7036= nctemp7038;
int nctemp7040=CodeEs(nctemp7034,nctemp7036);
p = tp;
i = 0;
int nctemp7041 = (p !=0);
int nctemp7045=nctemp7041;
while(nctemp7045)
{{
struct tree* nctemp7051= p;
nctempchar1* nctemp7053=CodeExpr(nctemp7051);
dim=nctemp7053;
struct tree* nctemp7055= sp;
nctempchar1* nctemp7057= descr;
int nctemp7060=CodeEs(nctemp7055,nctemp7057);
struct tree* nctemp7062= sp;
struct nctempchar1 *nctemp7066;
static struct nctempchar1 nctemp7067 = {{ 3}, (char*)".d\0"};
nctemp7066=&nctemp7067;
nctempchar1* nctemp7064= nctemp7066;
int nctemp7068=CodeEs(nctemp7062,nctemp7064);
struct tree* nctemp7070= sp;
struct nctempchar1 *nctemp7074;
static struct nctempchar1 nctemp7075 = {{ 2}, (char*)"[\0"};
nctemp7074=&nctemp7075;
nctempchar1* nctemp7072= nctemp7074;
int nctemp7076=CodeEs(nctemp7070,nctemp7072);
int nctemp7078= i;
int nctemp7080=CodeEd(nctemp7078);
struct tree* nctemp7082= sp;
struct nctempchar1 *nctemp7086;
static struct nctempchar1 nctemp7087 = {{ 3}, (char*)"]=\0"};
nctemp7086=&nctemp7087;
nctempchar1* nctemp7084= nctemp7086;
int nctemp7088=CodeEs(nctemp7082,nctemp7084);
struct tree* nctemp7090= sp;
nctempchar1* nctemp7092= dim;
int nctemp7095=CodeEs(nctemp7090,nctemp7092);
struct tree* nctemp7097= sp;
struct nctempchar1 *nctemp7101;
static struct nctempchar1 nctemp7102 = {{ 4}, (char*)";\n\0"};
nctemp7101=&nctemp7102;
nctempchar1* nctemp7099= nctemp7101;
int nctemp7103=CodeEs(nctemp7097,nctemp7099);
i = (i + 1);
struct tree* nctemp7108= p;
struct tree* nctemp7110=PtreeMvsister(nctemp7108);
p =nctemp7110;
}
int nctemp7111 = (p !=0);
nctemp7045=nctemp7111;}struct tree* nctemp7116= sp;
nctempchar1* nctemp7118= pointer;
int nctemp7121=CodeEs(nctemp7116,nctemp7118);
struct tree* nctemp7123= sp;
struct nctempchar1 *nctemp7127;
static struct nctempchar1 nctemp7128 = {{ 3}, (char*)"=&\0"};
nctemp7127=&nctemp7128;
nctempchar1* nctemp7125= nctemp7127;
int nctemp7129=CodeEs(nctemp7123,nctemp7125);
struct tree* nctemp7131= sp;
nctempchar1* nctemp7133= descr;
int nctemp7136=CodeEs(nctemp7131,nctemp7133);
struct tree* nctemp7138= sp;
struct nctempchar1 *nctemp7142;
static struct nctempchar1 nctemp7143 = {{ 4}, (char*)";\n\0"};
nctemp7142=&nctemp7143;
nctempchar1* nctemp7140= nctemp7142;
int nctemp7144=CodeEs(nctemp7138,nctemp7140);
}
else{
struct tree* nctemp7146= p;
nctempchar1* nctemp7148= type;
int nctemp7151=CodeEs(nctemp7146,nctemp7148);
struct tree* nctemp7153= p;
struct nctempchar1 *nctemp7157;
static struct nctempchar1 nctemp7158 = {{ 2}, (char*)" \0"};
nctemp7157=&nctemp7158;
nctempchar1* nctemp7155= nctemp7157;
int nctemp7159=CodeEs(nctemp7153,nctemp7155);
struct tree* nctemp7161= p;
nctempchar1* nctemp7163= pointer;
int nctemp7166=CodeEs(nctemp7161,nctemp7163);
struct tree* nctemp7168= p;
struct nctempchar1 *nctemp7172;
static struct nctempchar1 nctemp7173 = {{ 2}, (char*)"=\0"};
nctemp7172=&nctemp7173;
nctempchar1* nctemp7170= nctemp7172;
int nctemp7174=CodeEs(nctemp7168,nctemp7170);
struct tree* nctemp7176= p;
struct nctempchar1 *nctemp7180;
static struct nctempchar1 nctemp7181 = {{ 2}, (char*)"(\0"};
nctemp7180=&nctemp7181;
nctempchar1* nctemp7178= nctemp7180;
int nctemp7182=CodeEs(nctemp7176,nctemp7178);
struct tree* nctemp7184= p;
struct tree* nctemp7188= np;
nctempchar1* nctemp7190=PtreeGetype(nctemp7188);
nctempchar1* nctemp7186= nctemp7190;
int nctemp7191=CodeEs(nctemp7184,nctemp7186);
struct tree* nctemp7193= p;
struct nctempchar1 *nctemp7197;
static struct nctempchar1 nctemp7198 = {{ 3}, (char*)")(\0"};
nctemp7197=&nctemp7198;
nctempchar1* nctemp7195= nctemp7197;
int nctemp7199=CodeEs(nctemp7193,nctemp7195);
struct tree* nctemp7201= p;
nctempchar1* nctemp7203= expr;
int nctemp7206=CodeEs(nctemp7201,nctemp7203);
struct tree* nctemp7208= p;
struct nctempchar1 *nctemp7212;
static struct nctempchar1 nctemp7213 = {{ 5}, (char*)");\n\0"};
nctemp7212=&nctemp7213;
nctempchar1* nctemp7210= nctemp7212;
int nctemp7214=CodeEs(nctemp7208,nctemp7210);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7222= p;
nctempchar1* nctemp7224=PtreeGetname(nctemp7222);
nctempchar1* nctemp7220= nctemp7224;
struct nctempchar1 *nctemp7227;
static struct nctempchar1 nctemp7228 = {{ 11}, (char*)"identifier\0"};
nctemp7227=&nctemp7228;
nctempchar1* nctemp7225= nctemp7227;
int nctemp7229=LibeStrcmp(nctemp7220,nctemp7225);
int nctemp7217 = (nctemp7229 ==1);
if(nctemp7217)
{
struct tree* nctemp7232= p;
nctempchar1* nctemp7234=CodeIdent(nctemp7232);
return nctemp7234;
}
else{
struct tree* nctemp7240= p;
nctempchar1* nctemp7242=PtreeGetname(nctemp7240);
nctempchar1* nctemp7238= nctemp7242;
struct nctempchar1 *nctemp7245;
static struct nctempchar1 nctemp7246 = {{ 4}, (char*)"new\0"};
nctemp7245=&nctemp7246;
nctempchar1* nctemp7243= nctemp7245;
int nctemp7247=LibeStrcmp(nctemp7238,nctemp7243);
int nctemp7235 = (nctemp7247 ==1);
if(nctemp7235)
{
struct tree* nctemp7250= p;
nctempchar1* nctemp7252=CodeNew(nctemp7250);
return nctemp7252;
}
else{
struct tree* nctemp7258= p;
nctempchar1* nctemp7260=PtreeGetname(nctemp7258);
nctempchar1* nctemp7256= nctemp7260;
struct nctempchar1 *nctemp7263;
static struct nctempchar1 nctemp7264 = {{ 7}, (char*)"delete\0"};
nctemp7263=&nctemp7264;
nctempchar1* nctemp7261= nctemp7263;
int nctemp7265=LibeStrcmp(nctemp7256,nctemp7261);
int nctemp7253 = (nctemp7265 ==1);
if(nctemp7253)
{
struct tree* nctemp7268= p;
nctempchar1* nctemp7270=CodeDelete(nctemp7268);
return nctemp7270;
}
else{
struct tree* nctemp7276= p;
nctempchar1* nctemp7278=PtreeGetname(nctemp7276);
nctempchar1* nctemp7274= nctemp7278;
struct nctempchar1 *nctemp7281;
static struct nctempchar1 nctemp7282 = {{ 4}, (char*)"len\0"};
nctemp7281=&nctemp7282;
nctempchar1* nctemp7279= nctemp7281;
int nctemp7283=LibeStrcmp(nctemp7274,nctemp7279);
int nctemp7271 = (nctemp7283 ==1);
if(nctemp7271)
{
struct tree* nctemp7286= p;
nctempchar1* nctemp7288=CodeLen(nctemp7286);
return nctemp7288;
}
else{
struct tree* nctemp7294= p;
nctempchar1* nctemp7296=PtreeGetname(nctemp7294);
nctempchar1* nctemp7292= nctemp7296;
struct nctempchar1 *nctemp7299;
static struct nctempchar1 nctemp7300 = {{ 6}, (char*)"cmplx\0"};
nctemp7299=&nctemp7300;
nctempchar1* nctemp7297= nctemp7299;
int nctemp7301=LibeStrcmp(nctemp7292,nctemp7297);
int nctemp7289 = (nctemp7301 ==1);
if(nctemp7289)
{
struct tree* nctemp7304= p;
nctempchar1* nctemp7306=CodeCmplx(nctemp7304);
return nctemp7306;
}
else{
struct tree* nctemp7312= p;
nctempchar1* nctemp7314=PtreeGetname(nctemp7312);
nctempchar1* nctemp7310= nctemp7314;
struct nctempchar1 *nctemp7317;
static struct nctempchar1 nctemp7318 = {{ 3}, (char*)"im\0"};
nctemp7317=&nctemp7318;
nctempchar1* nctemp7315= nctemp7317;
int nctemp7319=LibeStrcmp(nctemp7310,nctemp7315);
int nctemp7307 = (nctemp7319 ==1);
if(nctemp7307)
{
struct tree* nctemp7322= p;
nctempchar1* nctemp7324=CodeIm(nctemp7322);
return nctemp7324;
}
else{
struct tree* nctemp7330= p;
nctempchar1* nctemp7332=PtreeGetname(nctemp7330);
nctempchar1* nctemp7328= nctemp7332;
struct nctempchar1 *nctemp7335;
static struct nctempchar1 nctemp7336 = {{ 3}, (char*)"re\0"};
nctemp7335=&nctemp7336;
nctempchar1* nctemp7333= nctemp7335;
int nctemp7337=LibeStrcmp(nctemp7328,nctemp7333);
int nctemp7325 = (nctemp7337 ==1);
if(nctemp7325)
{
struct tree* nctemp7340= p;
nctempchar1* nctemp7342=CodeRe(nctemp7340);
return nctemp7342;
}
else{
struct tree* nctemp7348= p;
nctempchar1* nctemp7350=PtreeGetname(nctemp7348);
nctempchar1* nctemp7346= nctemp7350;
struct nctempchar1 *nctemp7353;
static struct nctempchar1 nctemp7354 = {{ 6}, (char*)"fcall\0"};
nctemp7353=&nctemp7354;
nctempchar1* nctemp7351= nctemp7353;
int nctemp7355=LibeStrcmp(nctemp7346,nctemp7351);
int nctemp7343 = (nctemp7355 ==1);
if(nctemp7343)
{
struct tree* nctemp7358= p;
nctempchar1* nctemp7360=CodeFcall(nctemp7358);
return nctemp7360;
}
else{
struct tree* nctemp7366= p;
nctempchar1* nctemp7368=PtreeGetname(nctemp7366);
nctempchar1* nctemp7364= nctemp7368;
struct nctempchar1 *nctemp7371;
static struct nctempchar1 nctemp7372 = {{ 5}, (char*)"cast\0"};
nctemp7371=&nctemp7372;
nctempchar1* nctemp7369= nctemp7371;
int nctemp7373=LibeStrcmp(nctemp7364,nctemp7369);
int nctemp7361 = (nctemp7373 ==1);
if(nctemp7361)
{
struct tree* nctemp7376= p;
nctempchar1* nctemp7378=CodeCast(nctemp7376);
return nctemp7378;
}
else{
struct tree* nctemp7384= p;
nctempchar1* nctemp7386=PtreeGetname(nctemp7384);
nctempchar1* nctemp7382= nctemp7386;
struct nctempchar1 *nctemp7389;
static struct nctempchar1 nctemp7390 = {{ 10}, (char*)"iconstant\0"};
nctemp7389=&nctemp7390;
nctempchar1* nctemp7387= nctemp7389;
int nctemp7391=LibeStrcmp(nctemp7382,nctemp7387);
int nctemp7379 = (nctemp7391 ==1);
if(nctemp7379)
{
struct tree* nctemp7394= p;
nctempchar1* nctemp7396=PtreeGetdef(nctemp7394);
return nctemp7396;
}
else{
struct tree* nctemp7402= p;
nctempchar1* nctemp7404=PtreeGetname(nctemp7402);
nctempchar1* nctemp7400= nctemp7404;
struct nctempchar1 *nctemp7407;
static struct nctempchar1 nctemp7408 = {{ 10}, (char*)"rconstant\0"};
nctemp7407=&nctemp7408;
nctempchar1* nctemp7405= nctemp7407;
int nctemp7409=LibeStrcmp(nctemp7400,nctemp7405);
int nctemp7397 = (nctemp7409 ==1);
if(nctemp7397)
{
struct tree* nctemp7412= p;
nctempchar1* nctemp7414=PtreeGetdef(nctemp7412);
return nctemp7414;
}
else{
struct tree* nctemp7420= p;
nctempchar1* nctemp7422=PtreeGetname(nctemp7420);
nctempchar1* nctemp7418= nctemp7422;
struct nctempchar1 *nctemp7425;
static struct nctempchar1 nctemp7426 = {{ 10}, (char*)"sconstant\0"};
nctemp7425=&nctemp7426;
nctempchar1* nctemp7423= nctemp7425;
int nctemp7427=LibeStrcmp(nctemp7418,nctemp7423);
int nctemp7415 = (nctemp7427 ==1);
if(nctemp7415)
{
struct tree* nctemp7430= p;
nctempchar1* nctemp7432=CodeSconstant(nctemp7430);
return nctemp7432;
}
else{
struct tree* nctemp7434= p;
nctempchar1* nctemp7436=CodeBinexpr(nctemp7434);
return nctemp7436;
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
nctempchar1* nctemp7442=CodeMktemp();
tempr=nctemp7442;
struct tree* nctemp7448= p;
nctempchar1* nctemp7450=PtreeGetname(nctemp7448);
nctempchar1* nctemp7446= nctemp7450;
struct nctempchar1 *nctemp7453;
static struct nctempchar1 nctemp7454 = {{ 7}, (char*)"unexpr\0"};
nctemp7453=&nctemp7454;
nctempchar1* nctemp7451= nctemp7453;
int nctemp7455=LibeStrcmp(nctemp7446,nctemp7451);
int nctemp7443 = (nctemp7455 ==1);
if(nctemp7443)
{
struct tree* nctemp7462= p;
nctempchar1* nctemp7464=PtreeGetype(nctemp7462);
nctempchar1* nctemp7460= nctemp7464;
struct nctempchar1 *nctemp7467;
static struct nctempchar1 nctemp7468 = {{ 8}, (char*)"complex\0"};
nctemp7467=&nctemp7468;
nctempchar1* nctemp7465= nctemp7467;
int nctemp7469=LibeStrcmp(nctemp7460,nctemp7465);
int nctemp7457 = (nctemp7469 ==1);
if(nctemp7457)
{
struct tree* nctemp7478= p;
struct tree* nctemp7480=PtreeMvchild(nctemp7478);
struct tree* nctemp7476= nctemp7480;
nctempchar1* nctemp7481=CodePrimexpr(nctemp7476);
tmp=nctemp7481;
struct tree* nctemp7483= p;
struct nctempchar1 *nctemp7487;
static struct nctempchar1 nctemp7488 = {{ 4}, (char*)";\n\0"};
nctemp7487=&nctemp7488;
nctempchar1* nctemp7485= nctemp7487;
int nctemp7489=CodeEs(nctemp7483,nctemp7485);
struct tree* nctemp7491= p;
nctempchar1* nctemp7493= tempr;
int nctemp7496=CodeEs(nctemp7491,nctemp7493);
struct tree* nctemp7498= p;
struct nctempchar1 *nctemp7502;
static struct nctempchar1 nctemp7503 = {{ 3}, (char*)".r\0"};
nctemp7502=&nctemp7503;
nctempchar1* nctemp7500= nctemp7502;
int nctemp7504=CodeEs(nctemp7498,nctemp7500);
struct tree* nctemp7506= p;
struct nctempchar1 *nctemp7510;
static struct nctempchar1 nctemp7511 = {{ 4}, (char*)"= -\0"};
nctemp7510=&nctemp7511;
nctempchar1* nctemp7508= nctemp7510;
int nctemp7512=CodeEs(nctemp7506,nctemp7508);
struct tree* nctemp7514= p;
nctempchar1* nctemp7516= tmp;
int nctemp7519=CodeEs(nctemp7514,nctemp7516);
struct tree* nctemp7521= p;
struct nctempchar1 *nctemp7525;
static struct nctempchar1 nctemp7526 = {{ 3}, (char*)".r\0"};
nctemp7525=&nctemp7526;
nctempchar1* nctemp7523= nctemp7525;
int nctemp7527=CodeEs(nctemp7521,nctemp7523);
struct tree* nctemp7529= p;
struct nctempchar1 *nctemp7533;
static struct nctempchar1 nctemp7534 = {{ 4}, (char*)";\n\0"};
nctemp7533=&nctemp7534;
nctempchar1* nctemp7531= nctemp7533;
int nctemp7535=CodeEs(nctemp7529,nctemp7531);
struct tree* nctemp7537= p;
nctempchar1* nctemp7539= tempr;
int nctemp7542=CodeEs(nctemp7537,nctemp7539);
struct tree* nctemp7544= p;
struct nctempchar1 *nctemp7548;
static struct nctempchar1 nctemp7549 = {{ 3}, (char*)".i\0"};
nctemp7548=&nctemp7549;
nctempchar1* nctemp7546= nctemp7548;
int nctemp7550=CodeEs(nctemp7544,nctemp7546);
struct tree* nctemp7552= p;
struct nctempchar1 *nctemp7556;
static struct nctempchar1 nctemp7557 = {{ 4}, (char*)"= -\0"};
nctemp7556=&nctemp7557;
nctempchar1* nctemp7554= nctemp7556;
int nctemp7558=CodeEs(nctemp7552,nctemp7554);
struct tree* nctemp7560= p;
nctempchar1* nctemp7562= tmp;
int nctemp7565=CodeEs(nctemp7560,nctemp7562);
struct tree* nctemp7567= p;
struct nctempchar1 *nctemp7571;
static struct nctempchar1 nctemp7572 = {{ 3}, (char*)".i\0"};
nctemp7571=&nctemp7572;
nctempchar1* nctemp7569= nctemp7571;
int nctemp7573=CodeEs(nctemp7567,nctemp7569);
struct tree* nctemp7575= p;
struct nctempchar1 *nctemp7579;
static struct nctempchar1 nctemp7580 = {{ 4}, (char*)";\n\0"};
nctemp7579=&nctemp7580;
nctempchar1* nctemp7577= nctemp7579;
int nctemp7581=CodeEs(nctemp7575,nctemp7577);
return tempr;
}
else{
struct tree* nctemp7591= p;
struct tree* nctemp7593=PtreeMvchild(nctemp7591);
struct tree* nctemp7589= nctemp7593;
nctempchar1* nctemp7594=CodePrimexpr(nctemp7589);
tmp=nctemp7594;
struct tree* nctemp7596= p;
struct tree* nctemp7600= p;
nctempchar1* nctemp7602=PtreeGetype(nctemp7600);
nctempchar1* nctemp7598= nctemp7602;
int nctemp7603=CodeEs(nctemp7596,nctemp7598);
struct tree* nctemp7605= p;
struct nctempchar1 *nctemp7609;
static struct nctempchar1 nctemp7610 = {{ 2}, (char*)" \0"};
nctemp7609=&nctemp7610;
nctempchar1* nctemp7607= nctemp7609;
int nctemp7611=CodeEs(nctemp7605,nctemp7607);
struct tree* nctemp7613= p;
nctempchar1* nctemp7615= tempr;
int nctemp7618=CodeEs(nctemp7613,nctemp7615);
struct tree* nctemp7620= p;
struct nctempchar1 *nctemp7624;
static struct nctempchar1 nctemp7625 = {{ 4}, (char*)"= -\0"};
nctemp7624=&nctemp7625;
nctempchar1* nctemp7622= nctemp7624;
int nctemp7626=CodeEs(nctemp7620,nctemp7622);
struct tree* nctemp7628= p;
nctempchar1* nctemp7630= tmp;
int nctemp7633=CodeEs(nctemp7628,nctemp7630);
struct tree* nctemp7635= p;
struct nctempchar1 *nctemp7639;
static struct nctempchar1 nctemp7640 = {{ 4}, (char*)";\n\0"};
nctemp7639=&nctemp7640;
nctempchar1* nctemp7637= nctemp7639;
int nctemp7641=CodeEs(nctemp7635,nctemp7637);
return tempr;
}
}
else{
struct tree* nctemp7645= p;
nctempchar1* nctemp7647=CodePrimexpr(nctemp7645);
return nctemp7647;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7653= p;
nctempchar1* nctemp7655=PtreeGetype(nctemp7653);
type=nctemp7655;
nctempchar1* nctemp7661=CodeMktemp();
tempr=nctemp7661;
struct tree* nctemp7667= p;
nctempchar1* nctemp7669=PtreeGetdef(nctemp7667);
opr=nctemp7669;
nctempchar1* nctemp7673= type;
struct nctempchar1 *nctemp7678;
static struct nctempchar1 nctemp7679 = {{ 8}, (char*)"complex\0"};
nctemp7678=&nctemp7679;
nctempchar1* nctemp7676= nctemp7678;
int nctemp7680=LibeStrcmp(nctemp7673,nctemp7676);
int nctemp7670 = (nctemp7680 ==1);
if(nctemp7670)
{
nctempchar1* nctemp7688= opr;
struct nctempchar1 *nctemp7693;
static struct nctempchar1 nctemp7694 = {{ 2}, (char*)"+\0"};
nctemp7693=&nctemp7694;
nctempchar1* nctemp7691= nctemp7693;
int nctemp7695=LibeStrcmp(nctemp7688,nctemp7691);
int nctemp7685 = (nctemp7695 ==1);
nctempchar1* nctemp7701= opr;
struct nctempchar1 *nctemp7706;
static struct nctempchar1 nctemp7707 = {{ 2}, (char*)"-\0"};
nctemp7706=&nctemp7707;
nctempchar1* nctemp7704= nctemp7706;
int nctemp7708=LibeStrcmp(nctemp7701,nctemp7704);
int nctemp7698 = (nctemp7708 ==1);
int nctemp7682 = (nctemp7685 || nctemp7698);
if(nctemp7682)
{
struct tree* nctemp7711= p;
nctempchar1* nctemp7713= type;
int nctemp7716=CodeEs(nctemp7711,nctemp7713);
struct tree* nctemp7718= p;
struct nctempchar1 *nctemp7722;
static struct nctempchar1 nctemp7723 = {{ 2}, (char*)" \0"};
nctemp7722=&nctemp7723;
nctempchar1* nctemp7720= nctemp7722;
int nctemp7724=CodeEs(nctemp7718,nctemp7720);
struct tree* nctemp7726= p;
nctempchar1* nctemp7728= tempr;
int nctemp7731=CodeEs(nctemp7726,nctemp7728);
struct tree* nctemp7733= p;
struct nctempchar1 *nctemp7737;
static struct nctempchar1 nctemp7738 = {{ 3}, (char*)".r\0"};
nctemp7737=&nctemp7738;
nctempchar1* nctemp7735= nctemp7737;
int nctemp7739=CodeEs(nctemp7733,nctemp7735);
struct tree* nctemp7741= p;
struct nctempchar1 *nctemp7745;
static struct nctempchar1 nctemp7746 = {{ 4}, (char*)" = \0"};
nctemp7745=&nctemp7746;
nctempchar1* nctemp7743= nctemp7745;
int nctemp7747=CodeEs(nctemp7741,nctemp7743);
struct tree* nctemp7749= p;
nctempchar1* nctemp7751= lval;
int nctemp7754=CodeEs(nctemp7749,nctemp7751);
struct tree* nctemp7756= p;
struct nctempchar1 *nctemp7760;
static struct nctempchar1 nctemp7761 = {{ 3}, (char*)".r\0"};
nctemp7760=&nctemp7761;
nctempchar1* nctemp7758= nctemp7760;
int nctemp7762=CodeEs(nctemp7756,nctemp7758);
struct tree* nctemp7764= p;
struct nctempchar1 *nctemp7768;
static struct nctempchar1 nctemp7769 = {{ 2}, (char*)" \0"};
nctemp7768=&nctemp7769;
nctempchar1* nctemp7766= nctemp7768;
int nctemp7770=CodeEs(nctemp7764,nctemp7766);
struct tree* nctemp7772= p;
struct tree* nctemp7776= p;
nctempchar1* nctemp7778=PtreeGetdef(nctemp7776);
nctempchar1* nctemp7774= nctemp7778;
int nctemp7779=CodeEs(nctemp7772,nctemp7774);
struct tree* nctemp7781= p;
struct nctempchar1 *nctemp7785;
static struct nctempchar1 nctemp7786 = {{ 2}, (char*)" \0"};
nctemp7785=&nctemp7786;
nctempchar1* nctemp7783= nctemp7785;
int nctemp7787=CodeEs(nctemp7781,nctemp7783);
struct tree* nctemp7789= p;
nctempchar1* nctemp7791= rval;
int nctemp7794=CodeEs(nctemp7789,nctemp7791);
struct tree* nctemp7796= p;
struct nctempchar1 *nctemp7800;
static struct nctempchar1 nctemp7801 = {{ 3}, (char*)".r\0"};
nctemp7800=&nctemp7801;
nctempchar1* nctemp7798= nctemp7800;
int nctemp7802=CodeEs(nctemp7796,nctemp7798);
struct tree* nctemp7804= p;
struct nctempchar1 *nctemp7808;
static struct nctempchar1 nctemp7809 = {{ 4}, (char*)";\n\0"};
nctemp7808=&nctemp7809;
nctempchar1* nctemp7806= nctemp7808;
int nctemp7810=CodeEs(nctemp7804,nctemp7806);
struct tree* nctemp7812= p;
nctempchar1* nctemp7814= type;
int nctemp7817=CodeEs(nctemp7812,nctemp7814);
struct tree* nctemp7819= p;
struct nctempchar1 *nctemp7823;
static struct nctempchar1 nctemp7824 = {{ 2}, (char*)" \0"};
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
static struct nctempchar1 nctemp7847 = {{ 4}, (char*)" = \0"};
nctemp7846=&nctemp7847;
nctempchar1* nctemp7844= nctemp7846;
int nctemp7848=CodeEs(nctemp7842,nctemp7844);
struct tree* nctemp7850= p;
nctempchar1* nctemp7852= lval;
int nctemp7855=CodeEs(nctemp7850,nctemp7852);
struct tree* nctemp7857= p;
struct nctempchar1 *nctemp7861;
static struct nctempchar1 nctemp7862 = {{ 3}, (char*)".i\0"};
nctemp7861=&nctemp7862;
nctempchar1* nctemp7859= nctemp7861;
int nctemp7863=CodeEs(nctemp7857,nctemp7859);
struct tree* nctemp7865= p;
struct nctempchar1 *nctemp7869;
static struct nctempchar1 nctemp7870 = {{ 2}, (char*)" \0"};
nctemp7869=&nctemp7870;
nctempchar1* nctemp7867= nctemp7869;
int nctemp7871=CodeEs(nctemp7865,nctemp7867);
struct tree* nctemp7873= p;
struct tree* nctemp7877= p;
nctempchar1* nctemp7879=PtreeGetdef(nctemp7877);
nctempchar1* nctemp7875= nctemp7879;
int nctemp7880=CodeEs(nctemp7873,nctemp7875);
struct tree* nctemp7882= p;
struct nctempchar1 *nctemp7886;
static struct nctempchar1 nctemp7887 = {{ 2}, (char*)" \0"};
nctemp7886=&nctemp7887;
nctempchar1* nctemp7884= nctemp7886;
int nctemp7888=CodeEs(nctemp7882,nctemp7884);
struct tree* nctemp7890= p;
nctempchar1* nctemp7892= rval;
int nctemp7895=CodeEs(nctemp7890,nctemp7892);
struct tree* nctemp7897= p;
struct nctempchar1 *nctemp7901;
static struct nctempchar1 nctemp7902 = {{ 3}, (char*)".i\0"};
nctemp7901=&nctemp7902;
nctempchar1* nctemp7899= nctemp7901;
int nctemp7903=CodeEs(nctemp7897,nctemp7899);
struct tree* nctemp7905= p;
struct nctempchar1 *nctemp7909;
static struct nctempchar1 nctemp7910 = {{ 4}, (char*)";\n\0"};
nctemp7909=&nctemp7910;
nctempchar1* nctemp7907= nctemp7909;
int nctemp7911=CodeEs(nctemp7905,nctemp7907);
}
else{
nctempchar1* nctemp7915= opr;
struct nctempchar1 *nctemp7920;
static struct nctempchar1 nctemp7921 = {{ 2}, (char*)"*\0"};
nctemp7920=&nctemp7921;
nctempchar1* nctemp7918= nctemp7920;
int nctemp7922=LibeStrcmp(nctemp7915,nctemp7918);
int nctemp7912 = (nctemp7922 ==1);
if(nctemp7912)
{
struct tree* nctemp7925= p;
nctempchar1* nctemp7927= type;
int nctemp7930=CodeEs(nctemp7925,nctemp7927);
struct tree* nctemp7932= p;
struct nctempchar1 *nctemp7936;
static struct nctempchar1 nctemp7937 = {{ 2}, (char*)" \0"};
nctemp7936=&nctemp7937;
nctempchar1* nctemp7934= nctemp7936;
int nctemp7938=CodeEs(nctemp7932,nctemp7934);
struct tree* nctemp7940= p;
nctempchar1* nctemp7942= tempr;
int nctemp7945=CodeEs(nctemp7940,nctemp7942);
struct tree* nctemp7947= p;
struct nctempchar1 *nctemp7951;
static struct nctempchar1 nctemp7952 = {{ 3}, (char*)".r\0"};
nctemp7951=&nctemp7952;
nctempchar1* nctemp7949= nctemp7951;
int nctemp7953=CodeEs(nctemp7947,nctemp7949);
struct tree* nctemp7955= p;
struct nctempchar1 *nctemp7959;
static struct nctempchar1 nctemp7960 = {{ 4}, (char*)" = \0"};
nctemp7959=&nctemp7960;
nctempchar1* nctemp7957= nctemp7959;
int nctemp7961=CodeEs(nctemp7955,nctemp7957);
struct tree* nctemp7963= p;
nctempchar1* nctemp7965= lval;
int nctemp7968=CodeEs(nctemp7963,nctemp7965);
struct tree* nctemp7970= p;
struct nctempchar1 *nctemp7974;
static struct nctempchar1 nctemp7975 = {{ 3}, (char*)".r\0"};
nctemp7974=&nctemp7975;
nctempchar1* nctemp7972= nctemp7974;
int nctemp7976=CodeEs(nctemp7970,nctemp7972);
struct tree* nctemp7978= p;
struct nctempchar1 *nctemp7982;
static struct nctempchar1 nctemp7983 = {{ 2}, (char*)"*\0"};
nctemp7982=&nctemp7983;
nctempchar1* nctemp7980= nctemp7982;
int nctemp7984=CodeEs(nctemp7978,nctemp7980);
struct tree* nctemp7986= p;
nctempchar1* nctemp7988= rval;
int nctemp7991=CodeEs(nctemp7986,nctemp7988);
struct tree* nctemp7993= p;
struct nctempchar1 *nctemp7997;
static struct nctempchar1 nctemp7998 = {{ 3}, (char*)".r\0"};
nctemp7997=&nctemp7998;
nctempchar1* nctemp7995= nctemp7997;
int nctemp7999=CodeEs(nctemp7993,nctemp7995);
struct tree* nctemp8001= p;
struct nctempchar1 *nctemp8005;
static struct nctempchar1 nctemp8006 = {{ 2}, (char*)"-\0"};
nctemp8005=&nctemp8006;
nctempchar1* nctemp8003= nctemp8005;
int nctemp8007=CodeEs(nctemp8001,nctemp8003);
struct tree* nctemp8009= p;
nctempchar1* nctemp8011= lval;
int nctemp8014=CodeEs(nctemp8009,nctemp8011);
struct tree* nctemp8016= p;
struct nctempchar1 *nctemp8020;
static struct nctempchar1 nctemp8021 = {{ 3}, (char*)".i\0"};
nctemp8020=&nctemp8021;
nctempchar1* nctemp8018= nctemp8020;
int nctemp8022=CodeEs(nctemp8016,nctemp8018);
struct tree* nctemp8024= p;
struct nctempchar1 *nctemp8028;
static struct nctempchar1 nctemp8029 = {{ 2}, (char*)"*\0"};
nctemp8028=&nctemp8029;
nctempchar1* nctemp8026= nctemp8028;
int nctemp8030=CodeEs(nctemp8024,nctemp8026);
struct tree* nctemp8032= p;
nctempchar1* nctemp8034= rval;
int nctemp8037=CodeEs(nctemp8032,nctemp8034);
struct tree* nctemp8039= p;
struct nctempchar1 *nctemp8043;
static struct nctempchar1 nctemp8044 = {{ 3}, (char*)".i\0"};
nctemp8043=&nctemp8044;
nctempchar1* nctemp8041= nctemp8043;
int nctemp8045=CodeEs(nctemp8039,nctemp8041);
struct tree* nctemp8047= p;
struct nctempchar1 *nctemp8051;
static struct nctempchar1 nctemp8052 = {{ 4}, (char*)";\n\0"};
nctemp8051=&nctemp8052;
nctempchar1* nctemp8049= nctemp8051;
int nctemp8053=CodeEs(nctemp8047,nctemp8049);
struct tree* nctemp8055= p;
nctempchar1* nctemp8057= type;
int nctemp8060=CodeEs(nctemp8055,nctemp8057);
struct tree* nctemp8062= p;
struct nctempchar1 *nctemp8066;
static struct nctempchar1 nctemp8067 = {{ 2}, (char*)" \0"};
nctemp8066=&nctemp8067;
nctempchar1* nctemp8064= nctemp8066;
int nctemp8068=CodeEs(nctemp8062,nctemp8064);
struct tree* nctemp8070= p;
nctempchar1* nctemp8072= tempr;
int nctemp8075=CodeEs(nctemp8070,nctemp8072);
struct tree* nctemp8077= p;
struct nctempchar1 *nctemp8081;
static struct nctempchar1 nctemp8082 = {{ 3}, (char*)".i\0"};
nctemp8081=&nctemp8082;
nctempchar1* nctemp8079= nctemp8081;
int nctemp8083=CodeEs(nctemp8077,nctemp8079);
struct tree* nctemp8085= p;
struct nctempchar1 *nctemp8089;
static struct nctempchar1 nctemp8090 = {{ 4}, (char*)" = \0"};
nctemp8089=&nctemp8090;
nctempchar1* nctemp8087= nctemp8089;
int nctemp8091=CodeEs(nctemp8085,nctemp8087);
struct tree* nctemp8093= p;
nctempchar1* nctemp8095= lval;
int nctemp8098=CodeEs(nctemp8093,nctemp8095);
struct tree* nctemp8100= p;
struct nctempchar1 *nctemp8104;
static struct nctempchar1 nctemp8105 = {{ 3}, (char*)".i\0"};
nctemp8104=&nctemp8105;
nctempchar1* nctemp8102= nctemp8104;
int nctemp8106=CodeEs(nctemp8100,nctemp8102);
struct tree* nctemp8108= p;
struct nctempchar1 *nctemp8112;
static struct nctempchar1 nctemp8113 = {{ 2}, (char*)"*\0"};
nctemp8112=&nctemp8113;
nctempchar1* nctemp8110= nctemp8112;
int nctemp8114=CodeEs(nctemp8108,nctemp8110);
struct tree* nctemp8116= p;
nctempchar1* nctemp8118= rval;
int nctemp8121=CodeEs(nctemp8116,nctemp8118);
struct tree* nctemp8123= p;
struct nctempchar1 *nctemp8127;
static struct nctempchar1 nctemp8128 = {{ 3}, (char*)".r\0"};
nctemp8127=&nctemp8128;
nctempchar1* nctemp8125= nctemp8127;
int nctemp8129=CodeEs(nctemp8123,nctemp8125);
struct tree* nctemp8131= p;
struct nctempchar1 *nctemp8135;
static struct nctempchar1 nctemp8136 = {{ 2}, (char*)"+\0"};
nctemp8135=&nctemp8136;
nctempchar1* nctemp8133= nctemp8135;
int nctemp8137=CodeEs(nctemp8131,nctemp8133);
struct tree* nctemp8139= p;
nctempchar1* nctemp8141= lval;
int nctemp8144=CodeEs(nctemp8139,nctemp8141);
struct tree* nctemp8146= p;
struct nctempchar1 *nctemp8150;
static struct nctempchar1 nctemp8151 = {{ 3}, (char*)".r\0"};
nctemp8150=&nctemp8151;
nctempchar1* nctemp8148= nctemp8150;
int nctemp8152=CodeEs(nctemp8146,nctemp8148);
struct tree* nctemp8154= p;
struct nctempchar1 *nctemp8158;
static struct nctempchar1 nctemp8159 = {{ 2}, (char*)"*\0"};
nctemp8158=&nctemp8159;
nctempchar1* nctemp8156= nctemp8158;
int nctemp8160=CodeEs(nctemp8154,nctemp8156);
struct tree* nctemp8162= p;
nctempchar1* nctemp8164= rval;
int nctemp8167=CodeEs(nctemp8162,nctemp8164);
struct tree* nctemp8169= p;
struct nctempchar1 *nctemp8173;
static struct nctempchar1 nctemp8174 = {{ 3}, (char*)".i\0"};
nctemp8173=&nctemp8174;
nctempchar1* nctemp8171= nctemp8173;
int nctemp8175=CodeEs(nctemp8169,nctemp8171);
struct tree* nctemp8177= p;
struct nctempchar1 *nctemp8181;
static struct nctempchar1 nctemp8182 = {{ 4}, (char*)";\n\0"};
nctemp8181=&nctemp8182;
nctempchar1* nctemp8179= nctemp8181;
int nctemp8183=CodeEs(nctemp8177,nctemp8179);
}
else{
nctempchar1* nctemp8187= opr;
struct nctempchar1 *nctemp8192;
static struct nctempchar1 nctemp8193 = {{ 2}, (char*)"/\0"};
nctemp8192=&nctemp8193;
nctempchar1* nctemp8190= nctemp8192;
int nctemp8194=LibeStrcmp(nctemp8187,nctemp8190);
int nctemp8184 = (nctemp8194 ==1);
if(nctemp8184)
{
struct tree* nctemp8197= p;
nctempchar1* nctemp8199= type;
int nctemp8202=CodeEs(nctemp8197,nctemp8199);
struct tree* nctemp8204= p;
struct nctempchar1 *nctemp8208;
static struct nctempchar1 nctemp8209 = {{ 2}, (char*)" \0"};
nctemp8208=&nctemp8209;
nctempchar1* nctemp8206= nctemp8208;
int nctemp8210=CodeEs(nctemp8204,nctemp8206);
struct tree* nctemp8212= p;
nctempchar1* nctemp8214= tempr;
int nctemp8217=CodeEs(nctemp8212,nctemp8214);
struct tree* nctemp8219= p;
struct nctempchar1 *nctemp8223;
static struct nctempchar1 nctemp8224 = {{ 3}, (char*)".r\0"};
nctemp8223=&nctemp8224;
nctempchar1* nctemp8221= nctemp8223;
int nctemp8225=CodeEs(nctemp8219,nctemp8221);
struct tree* nctemp8227= p;
struct nctempchar1 *nctemp8231;
static struct nctempchar1 nctemp8232 = {{ 4}, (char*)" = \0"};
nctemp8231=&nctemp8232;
nctempchar1* nctemp8229= nctemp8231;
int nctemp8233=CodeEs(nctemp8227,nctemp8229);
struct tree* nctemp8235= p;
struct nctempchar1 *nctemp8239;
static struct nctempchar1 nctemp8240 = {{ 2}, (char*)"(\0"};
nctemp8239=&nctemp8240;
nctempchar1* nctemp8237= nctemp8239;
int nctemp8241=CodeEs(nctemp8235,nctemp8237);
struct tree* nctemp8243= p;
nctempchar1* nctemp8245= lval;
int nctemp8248=CodeEs(nctemp8243,nctemp8245);
struct tree* nctemp8250= p;
struct nctempchar1 *nctemp8254;
static struct nctempchar1 nctemp8255 = {{ 3}, (char*)".r\0"};
nctemp8254=&nctemp8255;
nctempchar1* nctemp8252= nctemp8254;
int nctemp8256=CodeEs(nctemp8250,nctemp8252);
struct tree* nctemp8258= p;
struct nctempchar1 *nctemp8262;
static struct nctempchar1 nctemp8263 = {{ 2}, (char*)"*\0"};
nctemp8262=&nctemp8263;
nctempchar1* nctemp8260= nctemp8262;
int nctemp8264=CodeEs(nctemp8258,nctemp8260);
struct tree* nctemp8266= p;
nctempchar1* nctemp8268= rval;
int nctemp8271=CodeEs(nctemp8266,nctemp8268);
struct tree* nctemp8273= p;
struct nctempchar1 *nctemp8277;
static struct nctempchar1 nctemp8278 = {{ 3}, (char*)".r\0"};
nctemp8277=&nctemp8278;
nctempchar1* nctemp8275= nctemp8277;
int nctemp8279=CodeEs(nctemp8273,nctemp8275);
struct tree* nctemp8281= p;
struct nctempchar1 *nctemp8285;
static struct nctempchar1 nctemp8286 = {{ 2}, (char*)"+\0"};
nctemp8285=&nctemp8286;
nctempchar1* nctemp8283= nctemp8285;
int nctemp8287=CodeEs(nctemp8281,nctemp8283);
struct tree* nctemp8289= p;
nctempchar1* nctemp8291= lval;
int nctemp8294=CodeEs(nctemp8289,nctemp8291);
struct tree* nctemp8296= p;
struct nctempchar1 *nctemp8300;
static struct nctempchar1 nctemp8301 = {{ 3}, (char*)".i\0"};
nctemp8300=&nctemp8301;
nctempchar1* nctemp8298= nctemp8300;
int nctemp8302=CodeEs(nctemp8296,nctemp8298);
struct tree* nctemp8304= p;
struct nctempchar1 *nctemp8308;
static struct nctempchar1 nctemp8309 = {{ 2}, (char*)"*\0"};
nctemp8308=&nctemp8309;
nctempchar1* nctemp8306= nctemp8308;
int nctemp8310=CodeEs(nctemp8304,nctemp8306);
struct tree* nctemp8312= p;
nctempchar1* nctemp8314= rval;
int nctemp8317=CodeEs(nctemp8312,nctemp8314);
struct tree* nctemp8319= p;
struct nctempchar1 *nctemp8323;
static struct nctempchar1 nctemp8324 = {{ 3}, (char*)".i\0"};
nctemp8323=&nctemp8324;
nctempchar1* nctemp8321= nctemp8323;
int nctemp8325=CodeEs(nctemp8319,nctemp8321);
struct tree* nctemp8327= p;
struct nctempchar1 *nctemp8331;
static struct nctempchar1 nctemp8332 = {{ 4}, (char*)")/(\0"};
nctemp8331=&nctemp8332;
nctempchar1* nctemp8329= nctemp8331;
int nctemp8333=CodeEs(nctemp8327,nctemp8329);
struct tree* nctemp8335= p;
nctempchar1* nctemp8337= rval;
int nctemp8340=CodeEs(nctemp8335,nctemp8337);
struct tree* nctemp8342= p;
struct nctempchar1 *nctemp8346;
static struct nctempchar1 nctemp8347 = {{ 3}, (char*)".r\0"};
nctemp8346=&nctemp8347;
nctempchar1* nctemp8344= nctemp8346;
int nctemp8348=CodeEs(nctemp8342,nctemp8344);
struct tree* nctemp8350= p;
struct nctempchar1 *nctemp8354;
static struct nctempchar1 nctemp8355 = {{ 2}, (char*)"*\0"};
nctemp8354=&nctemp8355;
nctempchar1* nctemp8352= nctemp8354;
int nctemp8356=CodeEs(nctemp8350,nctemp8352);
struct tree* nctemp8358= p;
nctempchar1* nctemp8360= rval;
int nctemp8363=CodeEs(nctemp8358,nctemp8360);
struct tree* nctemp8365= p;
struct nctempchar1 *nctemp8369;
static struct nctempchar1 nctemp8370 = {{ 3}, (char*)".r\0"};
nctemp8369=&nctemp8370;
nctempchar1* nctemp8367= nctemp8369;
int nctemp8371=CodeEs(nctemp8365,nctemp8367);
struct tree* nctemp8373= p;
struct nctempchar1 *nctemp8377;
static struct nctempchar1 nctemp8378 = {{ 2}, (char*)"+\0"};
nctemp8377=&nctemp8378;
nctempchar1* nctemp8375= nctemp8377;
int nctemp8379=CodeEs(nctemp8373,nctemp8375);
struct tree* nctemp8381= p;
nctempchar1* nctemp8383= rval;
int nctemp8386=CodeEs(nctemp8381,nctemp8383);
struct tree* nctemp8388= p;
struct nctempchar1 *nctemp8392;
static struct nctempchar1 nctemp8393 = {{ 3}, (char*)".i\0"};
nctemp8392=&nctemp8393;
nctempchar1* nctemp8390= nctemp8392;
int nctemp8394=CodeEs(nctemp8388,nctemp8390);
struct tree* nctemp8396= p;
struct nctempchar1 *nctemp8400;
static struct nctempchar1 nctemp8401 = {{ 2}, (char*)"*\0"};
nctemp8400=&nctemp8401;
nctempchar1* nctemp8398= nctemp8400;
int nctemp8402=CodeEs(nctemp8396,nctemp8398);
struct tree* nctemp8404= p;
nctempchar1* nctemp8406= rval;
int nctemp8409=CodeEs(nctemp8404,nctemp8406);
struct tree* nctemp8411= p;
struct nctempchar1 *nctemp8415;
static struct nctempchar1 nctemp8416 = {{ 3}, (char*)".i\0"};
nctemp8415=&nctemp8416;
nctempchar1* nctemp8413= nctemp8415;
int nctemp8417=CodeEs(nctemp8411,nctemp8413);
struct tree* nctemp8419= p;
struct nctempchar1 *nctemp8423;
static struct nctempchar1 nctemp8424 = {{ 5}, (char*)");\n\0"};
nctemp8423=&nctemp8424;
nctempchar1* nctemp8421= nctemp8423;
int nctemp8425=CodeEs(nctemp8419,nctemp8421);
struct tree* nctemp8427= p;
nctempchar1* nctemp8429= type;
int nctemp8432=CodeEs(nctemp8427,nctemp8429);
struct tree* nctemp8434= p;
struct nctempchar1 *nctemp8438;
static struct nctempchar1 nctemp8439 = {{ 2}, (char*)" \0"};
nctemp8438=&nctemp8439;
nctempchar1* nctemp8436= nctemp8438;
int nctemp8440=CodeEs(nctemp8434,nctemp8436);
struct tree* nctemp8442= p;
nctempchar1* nctemp8444= tempr;
int nctemp8447=CodeEs(nctemp8442,nctemp8444);
struct tree* nctemp8449= p;
struct nctempchar1 *nctemp8453;
static struct nctempchar1 nctemp8454 = {{ 3}, (char*)".i\0"};
nctemp8453=&nctemp8454;
nctempchar1* nctemp8451= nctemp8453;
int nctemp8455=CodeEs(nctemp8449,nctemp8451);
struct tree* nctemp8457= p;
struct nctempchar1 *nctemp8461;
static struct nctempchar1 nctemp8462 = {{ 4}, (char*)" = \0"};
nctemp8461=&nctemp8462;
nctempchar1* nctemp8459= nctemp8461;
int nctemp8463=CodeEs(nctemp8457,nctemp8459);
struct tree* nctemp8465= p;
struct nctempchar1 *nctemp8469;
static struct nctempchar1 nctemp8470 = {{ 2}, (char*)"(\0"};
nctemp8469=&nctemp8470;
nctempchar1* nctemp8467= nctemp8469;
int nctemp8471=CodeEs(nctemp8465,nctemp8467);
struct tree* nctemp8473= p;
nctempchar1* nctemp8475= lval;
int nctemp8478=CodeEs(nctemp8473,nctemp8475);
struct tree* nctemp8480= p;
struct nctempchar1 *nctemp8484;
static struct nctempchar1 nctemp8485 = {{ 3}, (char*)".i\0"};
nctemp8484=&nctemp8485;
nctempchar1* nctemp8482= nctemp8484;
int nctemp8486=CodeEs(nctemp8480,nctemp8482);
struct tree* nctemp8488= p;
struct nctempchar1 *nctemp8492;
static struct nctempchar1 nctemp8493 = {{ 2}, (char*)"*\0"};
nctemp8492=&nctemp8493;
nctempchar1* nctemp8490= nctemp8492;
int nctemp8494=CodeEs(nctemp8488,nctemp8490);
struct tree* nctemp8496= p;
nctempchar1* nctemp8498= rval;
int nctemp8501=CodeEs(nctemp8496,nctemp8498);
struct tree* nctemp8503= p;
struct nctempchar1 *nctemp8507;
static struct nctempchar1 nctemp8508 = {{ 3}, (char*)".r\0"};
nctemp8507=&nctemp8508;
nctempchar1* nctemp8505= nctemp8507;
int nctemp8509=CodeEs(nctemp8503,nctemp8505);
struct tree* nctemp8511= p;
struct nctempchar1 *nctemp8515;
static struct nctempchar1 nctemp8516 = {{ 2}, (char*)"-\0"};
nctemp8515=&nctemp8516;
nctempchar1* nctemp8513= nctemp8515;
int nctemp8517=CodeEs(nctemp8511,nctemp8513);
struct tree* nctemp8519= p;
nctempchar1* nctemp8521= lval;
int nctemp8524=CodeEs(nctemp8519,nctemp8521);
struct tree* nctemp8526= p;
struct nctempchar1 *nctemp8530;
static struct nctempchar1 nctemp8531 = {{ 3}, (char*)".r\0"};
nctemp8530=&nctemp8531;
nctempchar1* nctemp8528= nctemp8530;
int nctemp8532=CodeEs(nctemp8526,nctemp8528);
struct tree* nctemp8534= p;
struct nctempchar1 *nctemp8538;
static struct nctempchar1 nctemp8539 = {{ 2}, (char*)"*\0"};
nctemp8538=&nctemp8539;
nctempchar1* nctemp8536= nctemp8538;
int nctemp8540=CodeEs(nctemp8534,nctemp8536);
struct tree* nctemp8542= p;
nctempchar1* nctemp8544= rval;
int nctemp8547=CodeEs(nctemp8542,nctemp8544);
struct tree* nctemp8549= p;
struct nctempchar1 *nctemp8553;
static struct nctempchar1 nctemp8554 = {{ 3}, (char*)".i\0"};
nctemp8553=&nctemp8554;
nctempchar1* nctemp8551= nctemp8553;
int nctemp8555=CodeEs(nctemp8549,nctemp8551);
struct tree* nctemp8557= p;
struct nctempchar1 *nctemp8561;
static struct nctempchar1 nctemp8562 = {{ 4}, (char*)")/(\0"};
nctemp8561=&nctemp8562;
nctempchar1* nctemp8559= nctemp8561;
int nctemp8563=CodeEs(nctemp8557,nctemp8559);
struct tree* nctemp8565= p;
nctempchar1* nctemp8567= rval;
int nctemp8570=CodeEs(nctemp8565,nctemp8567);
struct tree* nctemp8572= p;
struct nctempchar1 *nctemp8576;
static struct nctempchar1 nctemp8577 = {{ 3}, (char*)".r\0"};
nctemp8576=&nctemp8577;
nctempchar1* nctemp8574= nctemp8576;
int nctemp8578=CodeEs(nctemp8572,nctemp8574);
struct tree* nctemp8580= p;
struct nctempchar1 *nctemp8584;
static struct nctempchar1 nctemp8585 = {{ 2}, (char*)"*\0"};
nctemp8584=&nctemp8585;
nctempchar1* nctemp8582= nctemp8584;
int nctemp8586=CodeEs(nctemp8580,nctemp8582);
struct tree* nctemp8588= p;
nctempchar1* nctemp8590= rval;
int nctemp8593=CodeEs(nctemp8588,nctemp8590);
struct tree* nctemp8595= p;
struct nctempchar1 *nctemp8599;
static struct nctempchar1 nctemp8600 = {{ 3}, (char*)".r\0"};
nctemp8599=&nctemp8600;
nctempchar1* nctemp8597= nctemp8599;
int nctemp8601=CodeEs(nctemp8595,nctemp8597);
struct tree* nctemp8603= p;
struct nctempchar1 *nctemp8607;
static struct nctempchar1 nctemp8608 = {{ 2}, (char*)"+\0"};
nctemp8607=&nctemp8608;
nctempchar1* nctemp8605= nctemp8607;
int nctemp8609=CodeEs(nctemp8603,nctemp8605);
struct tree* nctemp8611= p;
nctempchar1* nctemp8613= rval;
int nctemp8616=CodeEs(nctemp8611,nctemp8613);
struct tree* nctemp8618= p;
struct nctempchar1 *nctemp8622;
static struct nctempchar1 nctemp8623 = {{ 3}, (char*)".i\0"};
nctemp8622=&nctemp8623;
nctempchar1* nctemp8620= nctemp8622;
int nctemp8624=CodeEs(nctemp8618,nctemp8620);
struct tree* nctemp8626= p;
struct nctempchar1 *nctemp8630;
static struct nctempchar1 nctemp8631 = {{ 2}, (char*)"*\0"};
nctemp8630=&nctemp8631;
nctempchar1* nctemp8628= nctemp8630;
int nctemp8632=CodeEs(nctemp8626,nctemp8628);
struct tree* nctemp8634= p;
nctempchar1* nctemp8636= rval;
int nctemp8639=CodeEs(nctemp8634,nctemp8636);
struct tree* nctemp8641= p;
struct nctempchar1 *nctemp8645;
static struct nctempchar1 nctemp8646 = {{ 3}, (char*)".i\0"};
nctemp8645=&nctemp8646;
nctempchar1* nctemp8643= nctemp8645;
int nctemp8647=CodeEs(nctemp8641,nctemp8643);
struct tree* nctemp8649= p;
struct nctempchar1 *nctemp8653;
static struct nctempchar1 nctemp8654 = {{ 5}, (char*)");\n\0"};
nctemp8653=&nctemp8654;
nctempchar1* nctemp8651= nctemp8653;
int nctemp8655=CodeEs(nctemp8649,nctemp8651);
}
}
}
}
else{
struct tree* nctemp8657= p;
nctempchar1* nctemp8659= type;
int nctemp8662=CodeEs(nctemp8657,nctemp8659);
struct tree* nctemp8664= p;
struct nctempchar1 *nctemp8668;
static struct nctempchar1 nctemp8669 = {{ 2}, (char*)" \0"};
nctemp8668=&nctemp8669;
nctempchar1* nctemp8666= nctemp8668;
int nctemp8670=CodeEs(nctemp8664,nctemp8666);
struct tree* nctemp8672= p;
nctempchar1* nctemp8674= tempr;
int nctemp8677=CodeEs(nctemp8672,nctemp8674);
struct tree* nctemp8679= p;
struct nctempchar1 *nctemp8683;
static struct nctempchar1 nctemp8684 = {{ 4}, (char*)" = \0"};
nctemp8683=&nctemp8684;
nctempchar1* nctemp8681= nctemp8683;
int nctemp8685=CodeEs(nctemp8679,nctemp8681);
struct tree* nctemp8687= p;
nctempchar1* nctemp8689= lval;
int nctemp8692=CodeEs(nctemp8687,nctemp8689);
struct tree* nctemp8694= p;
struct nctempchar1 *nctemp8698;
static struct nctempchar1 nctemp8699 = {{ 2}, (char*)" \0"};
nctemp8698=&nctemp8699;
nctempchar1* nctemp8696= nctemp8698;
int nctemp8700=CodeEs(nctemp8694,nctemp8696);
struct tree* nctemp8702= p;
struct tree* nctemp8706= p;
nctempchar1* nctemp8708=PtreeGetdef(nctemp8706);
nctempchar1* nctemp8704= nctemp8708;
int nctemp8709=CodeEs(nctemp8702,nctemp8704);
struct tree* nctemp8711= p;
struct nctempchar1 *nctemp8715;
static struct nctempchar1 nctemp8716 = {{ 2}, (char*)" \0"};
nctemp8715=&nctemp8716;
nctempchar1* nctemp8713= nctemp8715;
int nctemp8717=CodeEs(nctemp8711,nctemp8713);
struct tree* nctemp8719= p;
nctempchar1* nctemp8721= rval;
int nctemp8724=CodeEs(nctemp8719,nctemp8721);
struct tree* nctemp8726= p;
struct nctempchar1 *nctemp8730;
static struct nctempchar1 nctemp8731 = {{ 4}, (char*)";\n\0"};
nctemp8730=&nctemp8731;
nctempchar1* nctemp8728= nctemp8730;
int nctemp8732=CodeEs(nctemp8726,nctemp8728);
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
struct tree* nctemp8740= p;
nctempchar1* nctemp8742=PtreeGetname(nctemp8740);
nctempchar1* nctemp8738= nctemp8742;
struct nctempchar1 *nctemp8745;
static struct nctempchar1 nctemp8746 = {{ 8}, (char*)"binexpr\0"};
nctemp8745=&nctemp8746;
nctempchar1* nctemp8743= nctemp8745;
int nctemp8747=LibeStrcmp(nctemp8738,nctemp8743);
int nctemp8735 = (nctemp8747 ==1);
if(nctemp8735)
{
struct tree* nctemp8754= p;
nctempchar1* nctemp8756=PtreeGetype(nctemp8754);
type=nctemp8756;
nctempchar1* nctemp8762=CodeMktemp();
tempr=nctemp8762;
nctempchar1* nctemp8768=CodeMktemp();
tempi=nctemp8768;
struct tree* nctemp8773= p;
struct tree* nctemp8775=PtreeMvchild(nctemp8773);
np =nctemp8775;
struct tree* nctemp8781= np;
nctempchar1* nctemp8783=CodeUnexpr(nctemp8781);
lval=nctemp8783;
struct tree* nctemp8791= np;
struct tree* nctemp8793=PtreeMvsister(nctemp8791);
struct tree* nctemp8789= nctemp8793;
nctempchar1* nctemp8794=CodeUnexpr(nctemp8789);
rval=nctemp8794;
struct tree* nctemp8809= p;
nctempchar1* nctemp8811=PtreeGetdef(nctemp8809);
nctempchar1* nctemp8807= nctemp8811;
struct nctempchar1 *nctemp8814;
static struct nctempchar1 nctemp8815 = {{ 2}, (char*)"+\0"};
nctemp8814=&nctemp8815;
nctempchar1* nctemp8812= nctemp8814;
int nctemp8816=LibeStrcmp(nctemp8807,nctemp8812);
int nctemp8804 = (nctemp8816 ==1);
struct tree* nctemp8824= p;
nctempchar1* nctemp8826=PtreeGetdef(nctemp8824);
nctempchar1* nctemp8822= nctemp8826;
struct nctempchar1 *nctemp8829;
static struct nctempchar1 nctemp8830 = {{ 2}, (char*)"-\0"};
nctemp8829=&nctemp8830;
nctempchar1* nctemp8827= nctemp8829;
int nctemp8831=LibeStrcmp(nctemp8822,nctemp8827);
int nctemp8819 = (nctemp8831 ==1);
int nctemp8801 = (nctemp8804 || nctemp8819);
struct tree* nctemp8839= p;
nctempchar1* nctemp8841=PtreeGetdef(nctemp8839);
nctempchar1* nctemp8837= nctemp8841;
struct nctempchar1 *nctemp8844;
static struct nctempchar1 nctemp8845 = {{ 2}, (char*)"*\0"};
nctemp8844=&nctemp8845;
nctempchar1* nctemp8842= nctemp8844;
int nctemp8846=LibeStrcmp(nctemp8837,nctemp8842);
int nctemp8834 = (nctemp8846 ==1);
int nctemp8798 = (nctemp8801 || nctemp8834);
struct tree* nctemp8854= p;
nctempchar1* nctemp8856=PtreeGetdef(nctemp8854);
nctempchar1* nctemp8852= nctemp8856;
struct nctempchar1 *nctemp8859;
static struct nctempchar1 nctemp8860 = {{ 2}, (char*)"/\0"};
nctemp8859=&nctemp8860;
nctempchar1* nctemp8857= nctemp8859;
int nctemp8861=LibeStrcmp(nctemp8852,nctemp8857);
int nctemp8849 = (nctemp8861 ==1);
int nctemp8795 = (nctemp8798 || nctemp8849);
if(nctemp8795)
{
struct tree* nctemp8864= p;
nctempchar1* nctemp8866= lval;
nctempchar1* nctemp8869= rval;
nctempchar1* nctemp8872=CodeAddexpr(nctemp8864,nctemp8866,nctemp8869);
return nctemp8872;
}
else{
struct tree* nctemp8878= p;
nctempchar1* nctemp8880=PtreeGetdef(nctemp8878);
nctempchar1* nctemp8876= nctemp8880;
struct nctempchar1 *nctemp8883;
static struct nctempchar1 nctemp8884 = {{ 2}, (char*)"=\0"};
nctemp8883=&nctemp8884;
nctempchar1* nctemp8881= nctemp8883;
int nctemp8885=LibeStrcmp(nctemp8876,nctemp8881);
int nctemp8873 = (nctemp8885 ==1);
if(nctemp8873)
{
struct tree* nctemp8898= p;
nctempchar1* nctemp8900=PtreeGetype(nctemp8898);
nctempchar1* nctemp8896= nctemp8900;
struct nctempchar1 *nctemp8903;
static struct nctempchar1 nctemp8904 = {{ 8}, (char*)"complex\0"};
nctemp8903=&nctemp8904;
nctempchar1* nctemp8901= nctemp8903;
int nctemp8905=LibeStrcmp(nctemp8896,nctemp8901);
int nctemp8893 = (nctemp8905 ==1);
struct tree* nctemp8913= p;
nctempchar1* nctemp8915=PtreeGetref(nctemp8913);
nctempchar1* nctemp8911= nctemp8915;
struct nctempchar1 *nctemp8918;
static struct nctempchar1 nctemp8919 = {{ 5}, (char*)"aref\0"};
nctemp8918=&nctemp8919;
nctempchar1* nctemp8916= nctemp8918;
int nctemp8920=LibeStrcmp(nctemp8911,nctemp8916);
int nctemp8908 = (nctemp8920 ==0);
int nctemp8890 = (nctemp8893 && nctemp8908);
struct tree* nctemp8928= p;
nctempchar1* nctemp8930=PtreeGetref(nctemp8928);
nctempchar1* nctemp8926= nctemp8930;
struct nctempchar1 *nctemp8933;
static struct nctempchar1 nctemp8934 = {{ 5}, (char*)"sref\0"};
nctemp8933=&nctemp8934;
nctempchar1* nctemp8931= nctemp8933;
int nctemp8935=LibeStrcmp(nctemp8926,nctemp8931);
int nctemp8923 = (nctemp8935 ==0);
int nctemp8887 = (nctemp8890 && nctemp8923);
if(nctemp8887)
{
struct tree* nctemp8938= p;
nctempchar1* nctemp8940= lval;
int nctemp8943=CodeEs(nctemp8938,nctemp8940);
struct tree* nctemp8945= p;
struct nctempchar1 *nctemp8949;
static struct nctempchar1 nctemp8950 = {{ 4}, (char*)".r \0"};
nctemp8949=&nctemp8950;
nctempchar1* nctemp8947= nctemp8949;
int nctemp8951=CodeEs(nctemp8945,nctemp8947);
struct tree* nctemp8953= p;
struct nctempchar1 *nctemp8957;
static struct nctempchar1 nctemp8958 = {{ 2}, (char*)"=\0"};
nctemp8957=&nctemp8958;
nctempchar1* nctemp8955= nctemp8957;
int nctemp8959=CodeEs(nctemp8953,nctemp8955);
struct tree* nctemp8961= p;
nctempchar1* nctemp8963= rval;
int nctemp8966=CodeEs(nctemp8961,nctemp8963);
struct tree* nctemp8968= p;
struct nctempchar1 *nctemp8972;
static struct nctempchar1 nctemp8973 = {{ 3}, (char*)".r\0"};
nctemp8972=&nctemp8973;
nctempchar1* nctemp8970= nctemp8972;
int nctemp8974=CodeEs(nctemp8968,nctemp8970);
struct tree* nctemp8976= p;
struct nctempchar1 *nctemp8980;
static struct nctempchar1 nctemp8981 = {{ 4}, (char*)";\n\0"};
nctemp8980=&nctemp8981;
nctempchar1* nctemp8978= nctemp8980;
int nctemp8982=CodeEs(nctemp8976,nctemp8978);
struct tree* nctemp8984= p;
nctempchar1* nctemp8986= lval;
int nctemp8989=CodeEs(nctemp8984,nctemp8986);
struct tree* nctemp8991= p;
struct nctempchar1 *nctemp8995;
static struct nctempchar1 nctemp8996 = {{ 3}, (char*)".i\0"};
nctemp8995=&nctemp8996;
nctempchar1* nctemp8993= nctemp8995;
int nctemp8997=CodeEs(nctemp8991,nctemp8993);
struct tree* nctemp8999= p;
struct nctempchar1 *nctemp9003;
static struct nctempchar1 nctemp9004 = {{ 2}, (char*)"=\0"};
nctemp9003=&nctemp9004;
nctempchar1* nctemp9001= nctemp9003;
int nctemp9005=CodeEs(nctemp8999,nctemp9001);
struct tree* nctemp9007= p;
nctempchar1* nctemp9009= rval;
int nctemp9012=CodeEs(nctemp9007,nctemp9009);
struct tree* nctemp9014= p;
struct nctempchar1 *nctemp9018;
static struct nctempchar1 nctemp9019 = {{ 3}, (char*)".i\0"};
nctemp9018=&nctemp9019;
nctempchar1* nctemp9016= nctemp9018;
int nctemp9020=CodeEs(nctemp9014,nctemp9016);
struct tree* nctemp9022= p;
struct nctempchar1 *nctemp9026;
static struct nctempchar1 nctemp9027 = {{ 4}, (char*)";\n\0"};
nctemp9026=&nctemp9027;
nctempchar1* nctemp9024= nctemp9026;
int nctemp9028=CodeEs(nctemp9022,nctemp9024);
return lval;
}
else{
struct tree* nctemp9036= np;
nctempchar1* nctemp9038=PtreeGetref(nctemp9036);
nctempchar1* nctemp9034= nctemp9038;
struct nctempchar1 *nctemp9041;
static struct nctempchar1 nctemp9042 = {{ 5}, (char*)"aref\0"};
nctemp9041=&nctemp9042;
nctempchar1* nctemp9039= nctemp9041;
int nctemp9043=LibeStrcmp(nctemp9034,nctemp9039);
int nctemp9031 = (nctemp9043 ==1);
if(nctemp9031)
{
struct tree* nctemp9052= np;
struct tree* nctemp9054=PtreeMvsister(nctemp9052);
struct tree* nctemp9050= nctemp9054;
nctempchar1* nctemp9055=PtreeGetname(nctemp9050);
nctempchar1* nctemp9048= nctemp9055;
struct nctempchar1 *nctemp9058;
static struct nctempchar1 nctemp9059 = {{ 10}, (char*)"iconstant\0"};
nctemp9058=&nctemp9059;
nctempchar1* nctemp9056= nctemp9058;
int nctemp9060=LibeStrcmp(nctemp9048,nctemp9056);
struct tree* nctemp9066= np;
struct tree* nctemp9068=PtreeMvsister(nctemp9066);
struct tree* nctemp9064= nctemp9068;
nctempchar1* nctemp9069=PtreeGetdef(nctemp9064);
nctempchar1* nctemp9062= nctemp9069;
struct nctempchar1 *nctemp9072;
static struct nctempchar1 nctemp9073 = {{ 2}, (char*)"0\0"};
nctemp9072=&nctemp9073;
nctempchar1* nctemp9070= nctemp9072;
int nctemp9074=LibeStrcmp(nctemp9062,nctemp9070);
int nctemp9045 = (nctemp9060 && nctemp9074);
if(nctemp9045)
{
struct tree* nctemp9076= p;
nctempchar1* nctemp9078= lval;
int nctemp9081=CodeEs(nctemp9076,nctemp9078);
struct tree* nctemp9083= p;
struct nctempchar1 *nctemp9087;
static struct nctempchar1 nctemp9088 = {{ 3}, (char*)"=(\0"};
nctemp9087=&nctemp9088;
nctempchar1* nctemp9085= nctemp9087;
int nctemp9089=CodeEs(nctemp9083,nctemp9085);
struct tree* nctemp9091= p;
nctempchar1* nctemp9093= rval;
int nctemp9096=CodeEs(nctemp9091,nctemp9093);
struct tree* nctemp9098= p;
struct nctempchar1 *nctemp9102;
static struct nctempchar1 nctemp9103 = {{ 5}, (char*)");\n\0"};
nctemp9102=&nctemp9103;
nctempchar1* nctemp9100= nctemp9102;
int nctemp9104=CodeEs(nctemp9098,nctemp9100);
return lval;
}
else{
struct tree* nctemp9108= p;
nctempchar1* nctemp9110= lval;
int nctemp9113=CodeEs(nctemp9108,nctemp9110);
struct tree* nctemp9115= p;
struct nctempchar1 *nctemp9119;
static struct nctempchar1 nctemp9120 = {{ 2}, (char*)"=\0"};
nctemp9119=&nctemp9120;
nctempchar1* nctemp9117= nctemp9119;
int nctemp9121=CodeEs(nctemp9115,nctemp9117);
struct tree* nctemp9123= p;
nctempchar1* nctemp9125= rval;
int nctemp9128=CodeEs(nctemp9123,nctemp9125);
struct tree* nctemp9130= p;
struct nctempchar1 *nctemp9134;
static struct nctempchar1 nctemp9135 = {{ 4}, (char*)";\n\0"};
nctemp9134=&nctemp9135;
nctempchar1* nctemp9132= nctemp9134;
int nctemp9136=CodeEs(nctemp9130,nctemp9132);
return lval;
}
}
else{
struct tree* nctemp9140= p;
nctempchar1* nctemp9142= lval;
int nctemp9145=CodeEs(nctemp9140,nctemp9142);
struct tree* nctemp9147= p;
struct nctempchar1 *nctemp9151;
static struct nctempchar1 nctemp9152 = {{ 2}, (char*)" \0"};
nctemp9151=&nctemp9152;
nctempchar1* nctemp9149= nctemp9151;
int nctemp9153=CodeEs(nctemp9147,nctemp9149);
struct tree* nctemp9155= p;
struct nctempchar1 *nctemp9159;
static struct nctempchar1 nctemp9160 = {{ 2}, (char*)"=\0"};
nctemp9159=&nctemp9160;
nctempchar1* nctemp9157= nctemp9159;
int nctemp9161=CodeEs(nctemp9155,nctemp9157);
struct tree* nctemp9163= p;
nctempchar1* nctemp9165= rval;
int nctemp9168=CodeEs(nctemp9163,nctemp9165);
struct tree* nctemp9170= p;
struct nctempchar1 *nctemp9174;
static struct nctempchar1 nctemp9175 = {{ 4}, (char*)";\n\0"};
nctemp9174=&nctemp9175;
nctempchar1* nctemp9172= nctemp9174;
int nctemp9176=CodeEs(nctemp9170,nctemp9172);
return lval;
}
}
}
else{
struct tree* nctemp9187= p;
nctempchar1* nctemp9189=PtreeGetdef(nctemp9187);
nctempchar1* nctemp9185= nctemp9189;
struct nctempchar1 *nctemp9192;
static struct nctempchar1 nctemp9193 = {{ 3}, (char*)"==\0"};
nctemp9192=&nctemp9193;
nctempchar1* nctemp9190= nctemp9192;
int nctemp9194=LibeStrcmp(nctemp9185,nctemp9190);
int nctemp9182 = (nctemp9194 ==1);
struct tree* nctemp9202= p;
nctempchar1* nctemp9204=PtreeGetdef(nctemp9202);
nctempchar1* nctemp9200= nctemp9204;
struct nctempchar1 *nctemp9207;
static struct nctempchar1 nctemp9208 = {{ 3}, (char*)"!=\0"};
nctemp9207=&nctemp9208;
nctempchar1* nctemp9205= nctemp9207;
int nctemp9209=LibeStrcmp(nctemp9200,nctemp9205);
int nctemp9197 = (nctemp9209 ==1);
int nctemp9179 = (nctemp9182 || nctemp9197);
if(nctemp9179)
{
struct tree* nctemp9216= np;
nctempchar1* nctemp9218=PtreeGetref(nctemp9216);
nctempchar1* nctemp9214= nctemp9218;
struct nctempchar1 *nctemp9221;
static struct nctempchar1 nctemp9222 = {{ 5}, (char*)"aref\0"};
nctemp9221=&nctemp9222;
nctempchar1* nctemp9219= nctemp9221;
int nctemp9223=LibeStrcmp(nctemp9214,nctemp9219);
int nctemp9211 = (nctemp9223 ==1);
if(nctemp9211)
{
sp = np;
struct tree* nctemp9232= np;
struct tree* nctemp9234=PtreeMvsister(nctemp9232);
struct tree* nctemp9230= nctemp9234;
nctempchar1* nctemp9235=PtreeGetname(nctemp9230);
nctempchar1* nctemp9228= nctemp9235;
struct nctempchar1 *nctemp9238;
static struct nctempchar1 nctemp9239 = {{ 10}, (char*)"iconstant\0"};
nctemp9238=&nctemp9239;
nctempchar1* nctemp9236= nctemp9238;
int nctemp9240=LibeStrcmp(nctemp9228,nctemp9236);
struct tree* nctemp9246= np;
struct tree* nctemp9248=PtreeMvsister(nctemp9246);
struct tree* nctemp9244= nctemp9248;
nctempchar1* nctemp9249=PtreeGetdef(nctemp9244);
nctempchar1* nctemp9242= nctemp9249;
struct nctempchar1 *nctemp9252;
static struct nctempchar1 nctemp9253 = {{ 2}, (char*)"0\0"};
nctemp9252=&nctemp9253;
nctempchar1* nctemp9250= nctemp9252;
int nctemp9254=LibeStrcmp(nctemp9242,nctemp9250);
int nctemp9225 = (nctemp9240 && nctemp9254);
if(nctemp9225)
{
struct tree* nctemp9256= p;
struct nctempchar1 *nctemp9260;
static struct nctempchar1 nctemp9261 = {{ 7}, (char*)"nctemp\0"};
nctemp9260=&nctemp9261;
nctempchar1* nctemp9258= nctemp9260;
int nctemp9262=CodeEs(nctemp9256,nctemp9258);
struct tree* nctemp9264= p;
struct tree* nctemp9268= sp;
nctempchar1* nctemp9270=PtreeGetype(nctemp9268);
nctempchar1* nctemp9266= nctemp9270;
int nctemp9271=CodeEs(nctemp9264,nctemp9266);
struct tree* nctemp9275= sp;
int nctemp9277=PtreeGetrank(nctemp9275);
int nctemp9273= nctemp9277;
int nctemp9278=CodeEd(nctemp9273);
struct tree* nctemp9280= p;
struct nctempchar1 *nctemp9284;
static struct nctempchar1 nctemp9285 = {{ 3}, (char*)" *\0"};
nctemp9284=&nctemp9285;
nctempchar1* nctemp9282= nctemp9284;
int nctemp9286=CodeEs(nctemp9280,nctemp9282);
struct tree* nctemp9288= p;
nctempchar1* nctemp9290= tempi;
int nctemp9293=CodeEs(nctemp9288,nctemp9290);
struct tree* nctemp9295= p;
struct nctempchar1 *nctemp9299;
static struct nctempchar1 nctemp9300 = {{ 3}, (char*)" =\0"};
nctemp9299=&nctemp9300;
nctempchar1* nctemp9297= nctemp9299;
int nctemp9301=CodeEs(nctemp9295,nctemp9297);
struct tree* nctemp9303= p;
nctempchar1* nctemp9305= lval;
int nctemp9308=CodeEs(nctemp9303,nctemp9305);
struct tree* nctemp9310= p;
struct nctempchar1 *nctemp9314;
static struct nctempchar1 nctemp9315 = {{ 4}, (char*)";\n\0"};
nctemp9314=&nctemp9315;
nctempchar1* nctemp9312= nctemp9314;
int nctemp9316=CodeEs(nctemp9310,nctemp9312);
struct tree* nctemp9318= p;
nctempchar1* nctemp9320= type;
int nctemp9323=CodeEs(nctemp9318,nctemp9320);
struct tree* nctemp9325= p;
struct nctempchar1 *nctemp9329;
static struct nctempchar1 nctemp9330 = {{ 2}, (char*)" \0"};
nctemp9329=&nctemp9330;
nctempchar1* nctemp9327= nctemp9329;
int nctemp9331=CodeEs(nctemp9325,nctemp9327);
struct tree* nctemp9333= p;
nctempchar1* nctemp9335= tempr;
int nctemp9338=CodeEs(nctemp9333,nctemp9335);
struct tree* nctemp9340= p;
struct nctempchar1 *nctemp9344;
static struct nctempchar1 nctemp9345 = {{ 4}, (char*)" =(\0"};
nctemp9344=&nctemp9345;
nctempchar1* nctemp9342= nctemp9344;
int nctemp9346=CodeEs(nctemp9340,nctemp9342);
struct tree* nctemp9348= p;
nctempchar1* nctemp9350= tempi;
int nctemp9353=CodeEs(nctemp9348,nctemp9350);
struct tree* nctemp9355= p;
struct tree* nctemp9359= p;
nctempchar1* nctemp9361=PtreeGetdef(nctemp9359);
nctempchar1* nctemp9357= nctemp9361;
int nctemp9362=CodeEs(nctemp9355,nctemp9357);
struct tree* nctemp9364= p;
nctempchar1* nctemp9366= rval;
int nctemp9369=CodeEs(nctemp9364,nctemp9366);
struct tree* nctemp9371= p;
struct nctempchar1 *nctemp9375;
static struct nctempchar1 nctemp9376 = {{ 5}, (char*)");\n\0"};
nctemp9375=&nctemp9376;
nctempchar1* nctemp9373= nctemp9375;
int nctemp9377=CodeEs(nctemp9371,nctemp9373);
return tempr;
}
else{
struct tree* nctemp9381= p;
nctempchar1* nctemp9383= type;
int nctemp9386=CodeEs(nctemp9381,nctemp9383);
struct tree* nctemp9388= p;
struct nctempchar1 *nctemp9392;
static struct nctempchar1 nctemp9393 = {{ 2}, (char*)" \0"};
nctemp9392=&nctemp9393;
nctempchar1* nctemp9390= nctemp9392;
int nctemp9394=CodeEs(nctemp9388,nctemp9390);
struct tree* nctemp9396= p;
nctempchar1* nctemp9398= tempr;
int nctemp9401=CodeEs(nctemp9396,nctemp9398);
struct tree* nctemp9403= p;
struct nctempchar1 *nctemp9407;
static struct nctempchar1 nctemp9408 = {{ 5}, (char*)" = (\0"};
nctemp9407=&nctemp9408;
nctempchar1* nctemp9405= nctemp9407;
int nctemp9409=CodeEs(nctemp9403,nctemp9405);
struct tree* nctemp9411= p;
nctempchar1* nctemp9413= lval;
int nctemp9416=CodeEs(nctemp9411,nctemp9413);
struct tree* nctemp9418= p;
struct tree* nctemp9422= p;
nctempchar1* nctemp9424=PtreeGetdef(nctemp9422);
nctempchar1* nctemp9420= nctemp9424;
int nctemp9425=CodeEs(nctemp9418,nctemp9420);
struct tree* nctemp9427= p;
nctempchar1* nctemp9429= rval;
int nctemp9432=CodeEs(nctemp9427,nctemp9429);
struct tree* nctemp9434= p;
struct nctempchar1 *nctemp9438;
static struct nctempchar1 nctemp9439 = {{ 5}, (char*)");\n\0"};
nctemp9438=&nctemp9439;
nctempchar1* nctemp9436= nctemp9438;
int nctemp9440=CodeEs(nctemp9434,nctemp9436);
return lval;
}
}
else{
struct tree* nctemp9444= p;
nctempchar1* nctemp9446= type;
int nctemp9449=CodeEs(nctemp9444,nctemp9446);
struct tree* nctemp9451= p;
struct nctempchar1 *nctemp9455;
static struct nctempchar1 nctemp9456 = {{ 2}, (char*)" \0"};
nctemp9455=&nctemp9456;
nctempchar1* nctemp9453= nctemp9455;
int nctemp9457=CodeEs(nctemp9451,nctemp9453);
struct tree* nctemp9459= p;
nctempchar1* nctemp9461= tempr;
int nctemp9464=CodeEs(nctemp9459,nctemp9461);
struct tree* nctemp9466= p;
struct nctempchar1 *nctemp9470;
static struct nctempchar1 nctemp9471 = {{ 5}, (char*)" = (\0"};
nctemp9470=&nctemp9471;
nctempchar1* nctemp9468= nctemp9470;
int nctemp9472=CodeEs(nctemp9466,nctemp9468);
struct tree* nctemp9474= p;
nctempchar1* nctemp9476= lval;
int nctemp9479=CodeEs(nctemp9474,nctemp9476);
struct tree* nctemp9481= p;
struct nctempchar1 *nctemp9485;
static struct nctempchar1 nctemp9486 = {{ 2}, (char*)" \0"};
nctemp9485=&nctemp9486;
nctempchar1* nctemp9483= nctemp9485;
int nctemp9487=CodeEs(nctemp9481,nctemp9483);
struct tree* nctemp9489= p;
struct tree* nctemp9493= p;
nctempchar1* nctemp9495=PtreeGetdef(nctemp9493);
nctempchar1* nctemp9491= nctemp9495;
int nctemp9496=CodeEs(nctemp9489,nctemp9491);
struct tree* nctemp9498= p;
nctempchar1* nctemp9500= rval;
int nctemp9503=CodeEs(nctemp9498,nctemp9500);
struct tree* nctemp9505= p;
struct nctempchar1 *nctemp9509;
static struct nctempchar1 nctemp9510 = {{ 5}, (char*)");\n\0"};
nctemp9509=&nctemp9510;
nctempchar1* nctemp9507= nctemp9509;
int nctemp9511=CodeEs(nctemp9505,nctemp9507);
return tempr;
}
}
else{
struct tree* nctemp9515= p;
nctempchar1* nctemp9517= type;
int nctemp9520=CodeEs(nctemp9515,nctemp9517);
struct tree* nctemp9522= p;
struct nctempchar1 *nctemp9526;
static struct nctempchar1 nctemp9527 = {{ 2}, (char*)" \0"};
nctemp9526=&nctemp9527;
nctempchar1* nctemp9524= nctemp9526;
int nctemp9528=CodeEs(nctemp9522,nctemp9524);
struct tree* nctemp9530= p;
nctempchar1* nctemp9532= tempr;
int nctemp9535=CodeEs(nctemp9530,nctemp9532);
struct tree* nctemp9537= p;
struct nctempchar1 *nctemp9541;
static struct nctempchar1 nctemp9542 = {{ 5}, (char*)" = (\0"};
nctemp9541=&nctemp9542;
nctempchar1* nctemp9539= nctemp9541;
int nctemp9543=CodeEs(nctemp9537,nctemp9539);
struct tree* nctemp9545= p;
nctempchar1* nctemp9547= lval;
int nctemp9550=CodeEs(nctemp9545,nctemp9547);
struct tree* nctemp9552= p;
struct nctempchar1 *nctemp9556;
static struct nctempchar1 nctemp9557 = {{ 2}, (char*)" \0"};
nctemp9556=&nctemp9557;
nctempchar1* nctemp9554= nctemp9556;
int nctemp9558=CodeEs(nctemp9552,nctemp9554);
struct tree* nctemp9560= p;
struct tree* nctemp9564= p;
nctempchar1* nctemp9566=PtreeGetdef(nctemp9564);
nctempchar1* nctemp9562= nctemp9566;
int nctemp9567=CodeEs(nctemp9560,nctemp9562);
struct tree* nctemp9569= p;
struct nctempchar1 *nctemp9573;
static struct nctempchar1 nctemp9574 = {{ 2}, (char*)" \0"};
nctemp9573=&nctemp9574;
nctempchar1* nctemp9571= nctemp9573;
int nctemp9575=CodeEs(nctemp9569,nctemp9571);
struct tree* nctemp9577= p;
nctempchar1* nctemp9579= rval;
int nctemp9582=CodeEs(nctemp9577,nctemp9579);
struct tree* nctemp9584= p;
struct nctempchar1 *nctemp9588;
static struct nctempchar1 nctemp9589 = {{ 5}, (char*)");\n\0"};
nctemp9588=&nctemp9589;
nctempchar1* nctemp9586= nctemp9588;
int nctemp9590=CodeEs(nctemp9584,nctemp9586);
return tempr;
}
}
}
}
else{
struct tree* nctemp9594= p;
nctempchar1* nctemp9596=CodeUnexpr(nctemp9594);
return nctemp9596;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9598= p;
nctempchar1* nctemp9600= name;
int nctemp9603=CodeEs(nctemp9598,nctemp9600);
struct tree* nctemp9605= p;
struct nctempchar1 *nctemp9609;
static struct nctempchar1 nctemp9610 = {{ 5}, (char*)"->d[\0"};
nctemp9609=&nctemp9610;
nctempchar1* nctemp9607= nctemp9609;
int nctemp9611=CodeEs(nctemp9605,nctemp9607);
int nctemp9613= j;
int nctemp9615=CodeEd(nctemp9613);
struct tree* nctemp9617= p;
struct nctempchar1 *nctemp9621;
static struct nctempchar1 nctemp9622 = {{ 2}, (char*)"]\0"};
nctemp9621=&nctemp9622;
nctempchar1* nctemp9619= nctemp9621;
int nctemp9623=CodeEs(nctemp9617,nctemp9619);
struct tree* nctemp9625= p;
struct nctempchar1 *nctemp9629;
static struct nctempchar1 nctemp9630 = {{ 2}, (char*)"*\0"};
nctemp9629=&nctemp9630;
nctempchar1* nctemp9627= nctemp9629;
int nctemp9631=CodeEs(nctemp9625,nctemp9627);
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
struct tree* nctemp9638= p;
nctempchar1* nctemp9640=PtreeGetdef(nctemp9638);
name=nctemp9640;
nctempchar1* nctemp9645= name;
struct symbol* nctemp9648=SymLook(nctemp9645);
tp =nctemp9648;
int nctemp9649 = (tp ==0);
if(nctemp9649)
{
nctempchar1* nctemp9654= name;
int nctemp9657=CodeError(nctemp9654);
}
struct symbol* nctemp9662= tp;
int nctemp9664=SymGetrank(nctemp9662);
rank =nctemp9664;
struct tree* nctemp9669= p;
struct tree* nctemp9671=PtreeMvchild(nctemp9669);
sp =nctemp9671;
int nctemp9672 = (sp ==0);
if(nctemp9672)
{
struct tree* nctemp9677= p;
struct tree* nctemp9681= p;
nctempchar1* nctemp9683=PtreeGetdef(nctemp9681);
nctempchar1* nctemp9679= nctemp9683;
int nctemp9684=CodeEs(nctemp9677,nctemp9679);
return 1;
}
else{
struct tree* nctemp9691= sp;
nctempchar1* nctemp9693=PtreeGetname(nctemp9691);
nctempchar1* nctemp9689= nctemp9693;
struct nctempchar1 *nctemp9696;
static struct nctempchar1 nctemp9697 = {{ 9}, (char*)"exprlist\0"};
nctemp9696=&nctemp9697;
nctempchar1* nctemp9694= nctemp9696;
int nctemp9698=LibeStrcmp(nctemp9689,nctemp9694);
int nctemp9686 = (nctemp9698 ==0);
if(nctemp9686)
{
struct tree* nctemp9701= p;
struct tree* nctemp9705= p;
nctempchar1* nctemp9707=PtreeGetdef(nctemp9705);
nctempchar1* nctemp9703= nctemp9707;
int nctemp9708=CodeEs(nctemp9701,nctemp9703);
return 1;
}
}
p = sp;
struct tree* nctemp9714= p;
struct tree* nctemp9716=PtreeMvchild(nctemp9714);
p =nctemp9716;
struct tree* nctemp9718= p;
nctempchar1* nctemp9720= name;
int nctemp9723=CodeEs(nctemp9718,nctemp9720);
struct tree* nctemp9725= p;
struct nctempchar1 *nctemp9729;
static struct nctempchar1 nctemp9730 = {{ 4}, (char*)"->a\0"};
nctemp9729=&nctemp9730;
nctempchar1* nctemp9727= nctemp9729;
int nctemp9731=CodeEs(nctemp9725,nctemp9727);
struct tree* nctemp9733= p;
struct nctempchar1 *nctemp9737;
static struct nctempchar1 nctemp9738 = {{ 2}, (char*)"[\0"};
nctemp9737=&nctemp9738;
nctempchar1* nctemp9735= nctemp9737;
int nctemp9739=CodeEs(nctemp9733,nctemp9735);
q = p;
nctempchar1 *nctemp9741 =qname;
int nctemp9740 =(nctemp9741!=0);
if(nctemp9740)
{
nctempchar1* nctemp9750= qname;
nctempchar1* nctemp9753= name;
nctempchar1* nctemp9756=LibeStradd(nctemp9750,nctemp9753);
qname=nctemp9756;
}
else{
nctempchar1* nctemp9762= name;
nctempchar1* nctemp9765=LibeStrsave(nctemp9762);
qname=nctemp9765;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9766 = (i ==0);
if(nctemp9766)
{
struct tree* nctemp9771= q;
int nctemp9773=CodeSexpr(nctemp9771);
}
else{
struct tree* nctemp9778= q;
struct tree* nctemp9780=PtreeMvsister(nctemp9778);
q =nctemp9780;
struct tree* nctemp9782= p;
struct nctempchar1 *nctemp9786;
static struct nctempchar1 nctemp9787 = {{ 2}, (char*)"+\0"};
nctemp9786=&nctemp9787;
nctempchar1* nctemp9784= nctemp9786;
int nctemp9788=CodeEs(nctemp9782,nctemp9784);
struct tree* nctemp9790= p;
nctempchar1* nctemp9792= qname;
int nctemp9800 = i + 1;
int nctemp9795= nctemp9800;
int nctemp9801=CodeDimprod(nctemp9790,nctemp9792,nctemp9795);
struct tree* nctemp9803= p;
struct nctempchar1 *nctemp9807;
static struct nctempchar1 nctemp9808 = {{ 2}, (char*)"(\0"};
nctemp9807=&nctemp9808;
nctempchar1* nctemp9805= nctemp9807;
int nctemp9809=CodeEs(nctemp9803,nctemp9805);
struct tree* nctemp9811= q;
int nctemp9813=CodeSexpr(nctemp9811);
struct tree* nctemp9815= p;
struct nctempchar1 *nctemp9819;
static struct nctempchar1 nctemp9820 = {{ 2}, (char*)")\0"};
nctemp9819=&nctemp9820;
nctempchar1* nctemp9817= nctemp9819;
int nctemp9821=CodeEs(nctemp9815,nctemp9817);
}
}
struct tree* nctemp9823= p;
struct nctempchar1 *nctemp9827;
static struct nctempchar1 nctemp9828 = {{ 2}, (char*)"]\0"};
nctemp9827=&nctemp9828;
nctempchar1* nctemp9825= nctemp9827;
int nctemp9829=CodeEs(nctemp9823,nctemp9825);
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
struct tree* nctemp9839= p;
nctempchar1* nctemp9841=PtreeGetarray(nctemp9839);
nctempchar1* nctemp9837= nctemp9841;
struct nctempchar1 *nctemp9844;
static struct nctempchar1 nctemp9845 = {{ 6}, (char*)"array\0"};
nctemp9844=&nctemp9845;
nctempchar1* nctemp9842= nctemp9844;
int nctemp9846=LibeStrcmp(nctemp9837,nctemp9842);
int nctemp9834 = (nctemp9846 ==1);
if(nctemp9834)
{
struct tree* nctemp9849= p;
nctempchar1* nctemp9851= qname;
int nctemp9854=CodeSarray(nctemp9849,nctemp9851);
struct tree* nctemp9859= p;
struct tree* nctemp9861=PtreeMvchild(nctemp9859);
np =nctemp9861;
int nctemp9862 = (np ==0);
if(nctemp9862)
{
return 1;
}
struct tree* nctemp9871= np;
struct tree* nctemp9873=PtreeMvsister(nctemp9871);
sp =nctemp9873;
int nctemp9874 = (sp ==0);
if(nctemp9874)
{
return 1;
}
struct tree* nctemp9880= p;
struct nctempchar1 *nctemp9884;
static struct nctempchar1 nctemp9885 = {{ 2}, (char*)".\0"};
nctemp9884=&nctemp9885;
nctempchar1* nctemp9882= nctemp9884;
int nctemp9886=CodeEs(nctemp9880,nctemp9882);
struct tree* nctemp9894= p;
nctempchar1* nctemp9896=PtreeGetdef(nctemp9894);
nctempchar1* nctemp9892= nctemp9896;
struct nctempchar1 *nctemp9899;
static struct nctempchar1 nctemp9900 = {{ 2}, (char*)".\0"};
nctemp9899=&nctemp9900;
nctempchar1* nctemp9897= nctemp9899;
nctempchar1* nctemp9901=LibeStradd(nctemp9892,nctemp9897);
qname=nctemp9901;
}
else{
struct tree* nctemp9903= p;
struct tree* nctemp9907= p;
nctempchar1* nctemp9909=PtreeGetdef(nctemp9907);
nctempchar1* nctemp9905= nctemp9909;
int nctemp9910=CodeEs(nctemp9903,nctemp9905);
struct tree* nctemp9918= p;
nctempchar1* nctemp9920=PtreeGetdef(nctemp9918);
nctempchar1* nctemp9916= nctemp9920;
struct nctempchar1 *nctemp9923;
static struct nctempchar1 nctemp9924 = {{ 3}, (char*)"->\0"};
nctemp9923=&nctemp9924;
nctempchar1* nctemp9921= nctemp9923;
nctempchar1* nctemp9925=LibeStradd(nctemp9916,nctemp9921);
qname=nctemp9925;
struct tree* nctemp9930= p;
struct tree* nctemp9932=PtreeMvchild(nctemp9930);
sp =nctemp9932;
int nctemp9933 = (sp ==0);
if(nctemp9933)
{
return 1;
}
struct tree* nctemp9939= p;
struct nctempchar1 *nctemp9943;
static struct nctempchar1 nctemp9944 = {{ 3}, (char*)"->\0"};
nctemp9943=&nctemp9944;
nctempchar1* nctemp9941= nctemp9943;
int nctemp9945=CodeEs(nctemp9939,nctemp9941);
}
struct tree* nctemp9951= sp;
nctempchar1* nctemp9953=PtreeGetarray(nctemp9951);
nctempchar1* nctemp9949= nctemp9953;
struct nctempchar1 *nctemp9956;
static struct nctempchar1 nctemp9957 = {{ 6}, (char*)"array\0"};
nctemp9956=&nctemp9957;
nctempchar1* nctemp9954= nctemp9956;
int nctemp9958=LibeStrcmp(nctemp9949,nctemp9954);
int nctemp9946 = (nctemp9958 ==1);
if(nctemp9946)
{
struct symbol* nctemp9964=SymGetltp();
tp =nctemp9964;
struct symbol* nctemp9969=SymGetetp();
up =nctemp9969;
struct tree* nctemp9976= p;
nctempchar1* nctemp9978=PtreeGetdef(nctemp9976);
nctempchar1* nctemp9974= nctemp9978;
struct symbol* nctemp9979=SymLook(nctemp9974);
uup =nctemp9979;
struct symbol* nctemp9986= uup;
nctempchar1* nctemp9988=SymGetype(nctemp9986);
nctempchar1* nctemp9984= nctemp9988;
struct symbol* nctemp9989=SymLook(nctemp9984);
uup =nctemp9989;
struct symbol* nctemp9993= uup;
struct symbol* nctemp9995=SymGetable(nctemp9993);
struct symbol* nctemp9991= nctemp9995;
int nctemp9996=SymSetltp(nctemp9991);
struct tree* nctemp9998= sp;
nctempchar1* nctemp10000= qname;
int nctemp10003=CodeSarray(nctemp9998,nctemp10000);
RunFree(qname->a);
RunFree(qname);
struct symbol* nctemp10008= tp;
int nctemp10010=SymSetltp(nctemp10008);
struct symbol* nctemp10012= up;
int nctemp10014=SymSetetp(nctemp10012);
}
else{
struct tree* nctemp10016= p;
struct tree* nctemp10020= sp;
nctempchar1* nctemp10022=PtreeGetdef(nctemp10020);
nctempchar1* nctemp10018= nctemp10022;
int nctemp10023=CodeEs(nctemp10016,nctemp10018);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10030= p;
nctempchar1* nctemp10032=PtreeGetstruct(nctemp10030);
nctempchar1* nctemp10028= nctemp10032;
struct nctempchar1 *nctemp10035;
static struct nctempchar1 nctemp10036 = {{ 7}, (char*)"struct\0"};
nctemp10035=&nctemp10036;
nctempchar1* nctemp10033= nctemp10035;
int nctemp10037=LibeStrcmp(nctemp10028,nctemp10033);
int nctemp10025 = (nctemp10037 ==1);
if(nctemp10025)
{
struct tree* nctemp10040= p;
int nctemp10042=CodeIdstruct(nctemp10040);
}
else{
struct tree* nctemp10048= p;
nctempchar1* nctemp10050=PtreeGetarray(nctemp10048);
nctempchar1* nctemp10046= nctemp10050;
struct nctempchar1 *nctemp10053;
static struct nctempchar1 nctemp10054 = {{ 6}, (char*)"array\0"};
nctemp10053=&nctemp10054;
nctempchar1* nctemp10051= nctemp10053;
int nctemp10055=LibeStrcmp(nctemp10046,nctemp10051);
int nctemp10043 = (nctemp10055 ==1);
if(nctemp10043)
{
struct tree* nctemp10058= p;
nctempchar1* nctemp10060= qname;
int nctemp10063=CodeSarray(nctemp10058,nctemp10060);
return 1;
}
else{
struct tree* nctemp10066= p;
struct tree* nctemp10070= p;
nctempchar1* nctemp10072=PtreeGetdef(nctemp10070);
nctempchar1* nctemp10068= nctemp10072;
int nctemp10073=CodeEs(nctemp10066,nctemp10068);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10082= p;
nctempchar1* nctemp10084=PtreeGetdef(nctemp10082);
nctempchar1* nctemp10080= nctemp10084;
struct symbol* nctemp10087=SymGetetp();
struct symbol* nctemp10085= nctemp10087;
struct symbol* nctemp10088=SymLookup(nctemp10080,nctemp10085);
tp =nctemp10088;
struct tree* nctemp10093= p;
struct tree* nctemp10095=PtreeMvchild(nctemp10093);
sp =nctemp10095;
int nctemp10096 = (sp !=0);
if(nctemp10096)
{
struct tree* nctemp10105= sp;
nctempchar1* nctemp10107=PtreeGetname(nctemp10105);
nctempchar1* nctemp10103= nctemp10107;
struct nctempchar1 *nctemp10110;
static struct nctempchar1 nctemp10111 = {{ 9}, (char*)"exprlist\0"};
nctemp10110=&nctemp10111;
nctempchar1* nctemp10108= nctemp10110;
int nctemp10112=LibeStrcmp(nctemp10103,nctemp10108);
int nctemp10100 = (nctemp10112 ==1);
if(nctemp10100)
{
struct tree* nctemp10118= sp;
struct tree* nctemp10120=PtreeMvchild(nctemp10118);
sp =nctemp10120;
}
}
struct tree* nctemp10122= p;
struct symbol* nctemp10126= tp;
nctempchar1* nctemp10128=SymGetname(nctemp10126);
nctempchar1* nctemp10124= nctemp10128;
int nctemp10129=CodeEs(nctemp10122,nctemp10124);
struct tree* nctemp10131= p;
struct nctempchar1 *nctemp10135;
static struct nctempchar1 nctemp10136 = {{ 2}, (char*)"(\0"};
nctemp10135=&nctemp10136;
nctempchar1* nctemp10133= nctemp10135;
int nctemp10137=CodeEs(nctemp10131,nctemp10133);
int nctemp10138 = (sp !=0);
int nctemp10142=nctemp10138;
while(nctemp10142)
{{
struct tree* nctemp10144= sp;
int nctemp10146=CodeSexpr(nctemp10144);
struct tree* nctemp10154= sp;
struct tree* nctemp10156=PtreeMvsister(nctemp10154);
sp =nctemp10156;
int nctemp10147 = (sp !=0);
if(nctemp10147)
{
struct tree* nctemp10159= p;
struct nctempchar1 *nctemp10163;
static struct nctempchar1 nctemp10164 = {{ 2}, (char*)",\0"};
nctemp10163=&nctemp10164;
nctempchar1* nctemp10161= nctemp10163;
int nctemp10165=CodeEs(nctemp10159,nctemp10161);
}
}
int nctemp10166 = (sp !=0);
nctemp10142=nctemp10166;}struct tree* nctemp10171= p;
struct nctempchar1 *nctemp10175;
static struct nctempchar1 nctemp10176 = {{ 2}, (char*)")\0"};
nctemp10175=&nctemp10176;
nctempchar1* nctemp10173= nctemp10175;
int nctemp10177=CodeEs(nctemp10171,nctemp10173);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10184= p;
nctempchar1* nctemp10186=PtreeGetname(nctemp10184);
nctempchar1* nctemp10182= nctemp10186;
struct nctempchar1 *nctemp10189;
static struct nctempchar1 nctemp10190 = {{ 5}, (char*)"cast\0"};
nctemp10189=&nctemp10190;
nctempchar1* nctemp10187= nctemp10189;
int nctemp10191=LibeStrcmp(nctemp10182,nctemp10187);
int nctemp10179 = (nctemp10191 ==1);
if(nctemp10179)
{
struct tree* nctemp10197= p;
struct tree* nctemp10199=PtreeMvchild(nctemp10197);
np =nctemp10199;
struct tree* nctemp10204= np;
struct tree* nctemp10206=PtreeMvsister(nctemp10204);
sp =nctemp10206;
struct tree* nctemp10208= p;
struct nctempchar1 *nctemp10212;
static struct nctempchar1 nctemp10213 = {{ 2}, (char*)"(\0"};
nctemp10212=&nctemp10213;
nctempchar1* nctemp10210= nctemp10212;
int nctemp10214=CodeEs(nctemp10208,nctemp10210);
struct tree* nctemp10220= np;
nctempchar1* nctemp10222=PtreeGetstruct(nctemp10220);
nctempchar1* nctemp10218= nctemp10222;
struct nctempchar1 *nctemp10225;
static struct nctempchar1 nctemp10226 = {{ 7}, (char*)"struct\0"};
nctemp10225=&nctemp10226;
nctempchar1* nctemp10223= nctemp10225;
int nctemp10227=LibeStrcmp(nctemp10218,nctemp10223);
int nctemp10215 = (nctemp10227 ==1);
if(nctemp10215)
{
struct tree* nctemp10230= p;
struct nctempchar1 *nctemp10234;
static struct nctempchar1 nctemp10235 = {{ 8}, (char*)"struct \0"};
nctemp10234=&nctemp10235;
nctempchar1* nctemp10232= nctemp10234;
int nctemp10236=CodeEs(nctemp10230,nctemp10232);
}
struct tree* nctemp10238= p;
struct tree* nctemp10242= np;
nctempchar1* nctemp10244=PtreeGetdef(nctemp10242);
nctempchar1* nctemp10240= nctemp10244;
int nctemp10245=CodeEs(nctemp10238,nctemp10240);
struct tree* nctemp10251= np;
nctempchar1* nctemp10253=PtreeGetstruct(nctemp10251);
nctempchar1* nctemp10249= nctemp10253;
struct nctempchar1 *nctemp10256;
static struct nctempchar1 nctemp10257 = {{ 6}, (char*)"array\0"};
nctemp10256=&nctemp10257;
nctempchar1* nctemp10254= nctemp10256;
int nctemp10258=LibeStrcmp(nctemp10249,nctemp10254);
int nctemp10246 = (nctemp10258 ==1);
if(nctemp10246)
{
struct tree* nctemp10261= p;
struct nctempchar1 *nctemp10265;
static struct nctempchar1 nctemp10266 = {{ 2}, (char*)"*\0"};
nctemp10265=&nctemp10266;
nctempchar1* nctemp10263= nctemp10265;
int nctemp10267=CodeEs(nctemp10261,nctemp10263);
}
struct tree* nctemp10269= p;
struct nctempchar1 *nctemp10273;
static struct nctempchar1 nctemp10274 = {{ 3}, (char*)")(\0"};
nctemp10273=&nctemp10274;
nctempchar1* nctemp10271= nctemp10273;
int nctemp10275=CodeEs(nctemp10269,nctemp10271);
struct tree* nctemp10277= sp;
int nctemp10279=CodeSexpr(nctemp10277);
struct tree* nctemp10281= p;
struct nctempchar1 *nctemp10285;
static struct nctempchar1 nctemp10286 = {{ 2}, (char*)")\0"};
nctemp10285=&nctemp10286;
nctempchar1* nctemp10283= nctemp10285;
int nctemp10287=CodeEs(nctemp10281,nctemp10283);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10294= p;
nctempchar1* nctemp10296=PtreeGetname(nctemp10294);
nctempchar1* nctemp10292= nctemp10296;
struct nctempchar1 *nctemp10299;
static struct nctempchar1 nctemp10300 = {{ 11}, (char*)"identifier\0"};
nctemp10299=&nctemp10300;
nctempchar1* nctemp10297= nctemp10299;
int nctemp10301=LibeStrcmp(nctemp10292,nctemp10297);
int nctemp10289 = (nctemp10301 ==1);
if(nctemp10289)
{
struct tree* nctemp10304= p;
int nctemp10306=CodeSident(nctemp10304);
}
else{
struct tree* nctemp10312= p;
nctempchar1* nctemp10314=PtreeGetname(nctemp10312);
nctempchar1* nctemp10310= nctemp10314;
struct nctempchar1 *nctemp10317;
static struct nctempchar1 nctemp10318 = {{ 6}, (char*)"fcall\0"};
nctemp10317=&nctemp10318;
nctempchar1* nctemp10315= nctemp10317;
int nctemp10319=LibeStrcmp(nctemp10310,nctemp10315);
int nctemp10307 = (nctemp10319 ==1);
if(nctemp10307)
{
struct tree* nctemp10322= p;
int nctemp10324=CodeSfcall(nctemp10322);
}
else{
struct tree* nctemp10330= p;
nctempchar1* nctemp10332=PtreeGetname(nctemp10330);
nctempchar1* nctemp10328= nctemp10332;
struct nctempchar1 *nctemp10335;
static struct nctempchar1 nctemp10336 = {{ 5}, (char*)"cast\0"};
nctemp10335=&nctemp10336;
nctempchar1* nctemp10333= nctemp10335;
int nctemp10337=LibeStrcmp(nctemp10328,nctemp10333);
int nctemp10325 = (nctemp10337 ==1);
if(nctemp10325)
{
struct tree* nctemp10340= p;
int nctemp10342=CodeScast(nctemp10340);
}
else{
struct tree* nctemp10348= p;
nctempchar1* nctemp10350=PtreeGetname(nctemp10348);
nctempchar1* nctemp10346= nctemp10350;
struct nctempchar1 *nctemp10353;
static struct nctempchar1 nctemp10354 = {{ 10}, (char*)"iconstant\0"};
nctemp10353=&nctemp10354;
nctempchar1* nctemp10351= nctemp10353;
int nctemp10355=LibeStrcmp(nctemp10346,nctemp10351);
int nctemp10343 = (nctemp10355 ==1);
if(nctemp10343)
{
struct tree* nctemp10358= p;
struct tree* nctemp10362= p;
nctempchar1* nctemp10364=PtreeGetdef(nctemp10362);
nctempchar1* nctemp10360= nctemp10364;
int nctemp10365=CodeEs(nctemp10358,nctemp10360);
}
else{
struct tree* nctemp10371= p;
nctempchar1* nctemp10373=PtreeGetname(nctemp10371);
nctempchar1* nctemp10369= nctemp10373;
struct nctempchar1 *nctemp10376;
static struct nctempchar1 nctemp10377 = {{ 10}, (char*)"sconstant\0"};
nctemp10376=&nctemp10377;
nctempchar1* nctemp10374= nctemp10376;
int nctemp10378=LibeStrcmp(nctemp10369,nctemp10374);
int nctemp10366 = (nctemp10378 ==1);
if(nctemp10366)
{
struct tree* nctemp10381= p;
struct tree* nctemp10385= p;
nctempchar1* nctemp10387=PtreeGetdef(nctemp10385);
nctempchar1* nctemp10383= nctemp10387;
int nctemp10388=CodeEs(nctemp10381,nctemp10383);
}
else{
struct tree* nctemp10394= p;
nctempchar1* nctemp10396=PtreeGetname(nctemp10394);
nctempchar1* nctemp10392= nctemp10396;
struct nctempchar1 *nctemp10399;
static struct nctempchar1 nctemp10400 = {{ 10}, (char*)"rconstant\0"};
nctemp10399=&nctemp10400;
nctempchar1* nctemp10397= nctemp10399;
int nctemp10401=LibeStrcmp(nctemp10392,nctemp10397);
int nctemp10389 = (nctemp10401 ==1);
if(nctemp10389)
{
struct tree* nctemp10404= p;
struct tree* nctemp10408= p;
nctempchar1* nctemp10410=PtreeGetdef(nctemp10408);
nctempchar1* nctemp10406= nctemp10410;
int nctemp10411=CodeEs(nctemp10404,nctemp10406);
}
else{
struct tree* nctemp10413= p;
struct nctempchar1 *nctemp10417;
static struct nctempchar1 nctemp10418 = {{ 2}, (char*)"(\0"};
nctemp10417=&nctemp10418;
nctempchar1* nctemp10415= nctemp10417;
int nctemp10419=CodeEs(nctemp10413,nctemp10415);
struct tree* nctemp10421= p;
int nctemp10423=CodeSbinexpr(nctemp10421);
struct tree* nctemp10425= p;
struct nctempchar1 *nctemp10429;
static struct nctempchar1 nctemp10430 = {{ 2}, (char*)")\0"};
nctemp10429=&nctemp10430;
nctempchar1* nctemp10427= nctemp10429;
int nctemp10431=CodeEs(nctemp10425,nctemp10427);
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
struct tree* nctemp10438= p;
nctempchar1* nctemp10440=PtreeGetname(nctemp10438);
nctempchar1* nctemp10436= nctemp10440;
struct nctempchar1 *nctemp10443;
static struct nctempchar1 nctemp10444 = {{ 7}, (char*)"unexpr\0"};
nctemp10443=&nctemp10444;
nctempchar1* nctemp10441= nctemp10443;
int nctemp10445=LibeStrcmp(nctemp10436,nctemp10441);
int nctemp10433 = (nctemp10445 ==1);
if(nctemp10433)
{
struct tree* nctemp10448= p;
struct nctempchar1 *nctemp10452;
static struct nctempchar1 nctemp10453 = {{ 3}, (char*)" -\0"};
nctemp10452=&nctemp10453;
nctempchar1* nctemp10450= nctemp10452;
int nctemp10454=CodeEs(nctemp10448,nctemp10450);
struct tree* nctemp10458= p;
struct tree* nctemp10460=PtreeMvchild(nctemp10458);
struct tree* nctemp10456= nctemp10460;
int nctemp10461=CodeSprimexpr(nctemp10456);
}
else{
struct tree* nctemp10463= p;
int nctemp10465=CodeSprimexpr(nctemp10463);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10472= p;
nctempchar1* nctemp10474=PtreeGetname(nctemp10472);
nctempchar1* nctemp10470= nctemp10474;
struct nctempchar1 *nctemp10477;
static struct nctempchar1 nctemp10478 = {{ 8}, (char*)"binexpr\0"};
nctemp10477=&nctemp10478;
nctempchar1* nctemp10475= nctemp10477;
int nctemp10479=LibeStrcmp(nctemp10470,nctemp10475);
int nctemp10467 = (nctemp10479 ==1);
if(nctemp10467)
{
struct tree* nctemp10485= p;
struct tree* nctemp10487=PtreeMvchild(nctemp10485);
np =nctemp10487;
struct tree* nctemp10489= np;
int nctemp10491=CodeSunexpr(nctemp10489);
struct tree* nctemp10503= p;
nctempchar1* nctemp10505=PtreeGetdef(nctemp10503);
nctempchar1* nctemp10501= nctemp10505;
struct nctempchar1 *nctemp10508;
static struct nctempchar1 nctemp10509 = {{ 2}, (char*)"=\0"};
nctemp10508=&nctemp10509;
nctempchar1* nctemp10506= nctemp10508;
int nctemp10510=LibeStrcmp(nctemp10501,nctemp10506);
int nctemp10498 = (nctemp10510 ==1);
struct tree* nctemp10518= p;
nctempchar1* nctemp10520=PtreeGetdef(nctemp10518);
nctempchar1* nctemp10516= nctemp10520;
struct nctempchar1 *nctemp10523;
static struct nctempchar1 nctemp10524 = {{ 3}, (char*)"==\0"};
nctemp10523=&nctemp10524;
nctempchar1* nctemp10521= nctemp10523;
int nctemp10525=LibeStrcmp(nctemp10516,nctemp10521);
int nctemp10513 = (nctemp10525 ==1);
int nctemp10495 = (nctemp10498 || nctemp10513);
struct tree* nctemp10533= p;
nctempchar1* nctemp10535=PtreeGetdef(nctemp10533);
nctempchar1* nctemp10531= nctemp10535;
struct nctempchar1 *nctemp10538;
static struct nctempchar1 nctemp10539 = {{ 3}, (char*)"!=\0"};
nctemp10538=&nctemp10539;
nctempchar1* nctemp10536= nctemp10538;
int nctemp10540=LibeStrcmp(nctemp10531,nctemp10536);
int nctemp10528 = (nctemp10540 ==1);
int nctemp10492 = (nctemp10495 || nctemp10528);
if(nctemp10492)
{
struct tree* nctemp10547= np;
nctempchar1* nctemp10549=PtreeGetref(nctemp10547);
nctempchar1* nctemp10545= nctemp10549;
struct nctempchar1 *nctemp10552;
static struct nctempchar1 nctemp10553 = {{ 5}, (char*)"aref\0"};
nctemp10552=&nctemp10553;
nctempchar1* nctemp10550= nctemp10552;
int nctemp10554=LibeStrcmp(nctemp10545,nctemp10550);
int nctemp10542 = (nctemp10554 ==1);
if(nctemp10542)
{
struct tree* nctemp10563= np;
struct tree* nctemp10565=PtreeMvsister(nctemp10563);
struct tree* nctemp10561= nctemp10565;
nctempchar1* nctemp10566=PtreeGetname(nctemp10561);
nctempchar1* nctemp10559= nctemp10566;
struct nctempchar1 *nctemp10569;
static struct nctempchar1 nctemp10570 = {{ 10}, (char*)"iconstant\0"};
nctemp10569=&nctemp10570;
nctempchar1* nctemp10567= nctemp10569;
int nctemp10571=LibeStrcmp(nctemp10559,nctemp10567);
struct tree* nctemp10577= np;
struct tree* nctemp10579=PtreeMvsister(nctemp10577);
struct tree* nctemp10575= nctemp10579;
nctempchar1* nctemp10580=PtreeGetdef(nctemp10575);
nctempchar1* nctemp10573= nctemp10580;
struct nctempchar1 *nctemp10583;
static struct nctempchar1 nctemp10584 = {{ 2}, (char*)"0\0"};
nctemp10583=&nctemp10584;
nctempchar1* nctemp10581= nctemp10583;
int nctemp10585=LibeStrcmp(nctemp10573,nctemp10581);
int nctemp10556 = (nctemp10571 && nctemp10585);
if(nctemp10556)
{
struct tree* nctemp10587= p;
struct nctempchar1 *nctemp10591;
static struct nctempchar1 nctemp10592 = {{ 2}, (char*)" \0"};
nctemp10591=&nctemp10592;
nctempchar1* nctemp10589= nctemp10591;
int nctemp10593=CodeEs(nctemp10587,nctemp10589);
}
}
}
struct tree* nctemp10595= p;
struct nctempchar1 *nctemp10599;
static struct nctempchar1 nctemp10600 = {{ 2}, (char*)" \0"};
nctemp10599=&nctemp10600;
nctempchar1* nctemp10597= nctemp10599;
int nctemp10601=CodeEs(nctemp10595,nctemp10597);
struct tree* nctemp10603= p;
struct tree* nctemp10607= p;
nctempchar1* nctemp10609=PtreeGetdef(nctemp10607);
nctempchar1* nctemp10605= nctemp10609;
int nctemp10610=CodeEs(nctemp10603,nctemp10605);
struct tree* nctemp10612= p;
struct nctempchar1 *nctemp10616;
static struct nctempchar1 nctemp10617 = {{ 2}, (char*)" \0"};
nctemp10616=&nctemp10617;
nctempchar1* nctemp10614= nctemp10616;
int nctemp10618=CodeEs(nctemp10612,nctemp10614);
struct tree* nctemp10622= np;
struct tree* nctemp10624=PtreeMvsister(nctemp10622);
struct tree* nctemp10620= nctemp10624;
int nctemp10625=CodeSunexpr(nctemp10620);
}
else{
struct tree* nctemp10627= p;
int nctemp10629=CodeSunexpr(nctemp10627);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp10635= p;
struct tree* nctemp10637=PtreeMvchild(nctemp10635);
sp =nctemp10637;
struct tree* nctemp10639= sp;
int nctemp10641=CodeSbinexpr(nctemp10639);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10647= p;
struct tree* nctemp10649=PtreeMvchild(nctemp10647);
sp =nctemp10649;
struct tree* nctemp10655= sp;
nctempchar1* nctemp10657=CodeBinexpr(nctemp10655);
rval=nctemp10657;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10664= p;
struct tree* nctemp10666=PtreeMvchild(nctemp10664);
p =nctemp10666;
struct tree* nctemp10668= p;
struct nctempchar1 *nctemp10672;
static struct nctempchar1 nctemp10673 = {{ 5}, (char*)"for(\0"};
nctemp10672=&nctemp10673;
nctempchar1* nctemp10670= nctemp10672;
int nctemp10674=CodeEs(nctemp10668,nctemp10670);
struct tree* nctemp10676= p;
int nctemp10678=CodeSexpr(nctemp10676);
struct tree* nctemp10680= p;
struct nctempchar1 *nctemp10684;
static struct nctempchar1 nctemp10685 = {{ 2}, (char*)";\0"};
nctemp10684=&nctemp10685;
nctempchar1* nctemp10682= nctemp10684;
int nctemp10686=CodeEs(nctemp10680,nctemp10682);
struct tree* nctemp10691= p;
struct tree* nctemp10693=PtreeMvsister(nctemp10691);
p =nctemp10693;
struct tree* nctemp10695= p;
int nctemp10697=CodeSexpr(nctemp10695);
struct tree* nctemp10699= p;
struct nctempchar1 *nctemp10703;
static struct nctempchar1 nctemp10704 = {{ 2}, (char*)";\0"};
nctemp10703=&nctemp10704;
nctempchar1* nctemp10701= nctemp10703;
int nctemp10705=CodeEs(nctemp10699,nctemp10701);
struct tree* nctemp10710= p;
struct tree* nctemp10712=PtreeMvsister(nctemp10710);
p =nctemp10712;
struct tree* nctemp10714= p;
int nctemp10716=CodeSexpr(nctemp10714);
struct tree* nctemp10718= p;
struct nctempchar1 *nctemp10722;
static struct nctempchar1 nctemp10723 = {{ 2}, (char*)")\0"};
nctemp10722=&nctemp10723;
nctempchar1* nctemp10720= nctemp10722;
int nctemp10724=CodeEs(nctemp10718,nctemp10720);
struct tree* nctemp10729= p;
struct tree* nctemp10731=PtreeMvsister(nctemp10729);
p =nctemp10731;
struct tree* nctemp10733= p;
int nctemp10735=CodeStmnt(nctemp10733);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10741= p;
struct tree* nctemp10743=PtreeMvchild(nctemp10741);
p =nctemp10743;
sp = p;
struct tree* nctemp10749= sp;
nctempchar1* nctemp10751=CodeExpr(nctemp10749);
cond=nctemp10751;
nctempchar1* nctemp10757=CodeMktemp();
tmp=nctemp10757;
struct tree* nctemp10759= p;
struct tree* nctemp10763= sp;
nctempchar1* nctemp10765=PtreeGetype(nctemp10763);
nctempchar1* nctemp10761= nctemp10765;
int nctemp10766=CodeEs(nctemp10759,nctemp10761);
struct tree* nctemp10768= p;
struct nctempchar1 *nctemp10772;
static struct nctempchar1 nctemp10773 = {{ 2}, (char*)" \0"};
nctemp10772=&nctemp10773;
nctempchar1* nctemp10770= nctemp10772;
int nctemp10774=CodeEs(nctemp10768,nctemp10770);
struct tree* nctemp10776= p;
nctempchar1* nctemp10778= tmp;
int nctemp10781=CodeEs(nctemp10776,nctemp10778);
struct tree* nctemp10783= p;
struct nctempchar1 *nctemp10787;
static struct nctempchar1 nctemp10788 = {{ 2}, (char*)"=\0"};
nctemp10787=&nctemp10788;
nctempchar1* nctemp10785= nctemp10787;
int nctemp10789=CodeEs(nctemp10783,nctemp10785);
struct tree* nctemp10791= p;
nctempchar1* nctemp10793= cond;
int nctemp10796=CodeEs(nctemp10791,nctemp10793);
struct tree* nctemp10798= p;
struct nctempchar1 *nctemp10802;
static struct nctempchar1 nctemp10803 = {{ 4}, (char*)";\n\0"};
nctemp10802=&nctemp10803;
nctempchar1* nctemp10800= nctemp10802;
int nctemp10804=CodeEs(nctemp10798,nctemp10800);
struct tree* nctemp10806= p;
struct nctempchar1 *nctemp10810;
static struct nctempchar1 nctemp10811 = {{ 7}, (char*)"while(\0"};
nctemp10810=&nctemp10811;
nctempchar1* nctemp10808= nctemp10810;
int nctemp10812=CodeEs(nctemp10806,nctemp10808);
struct tree* nctemp10814= p;
nctempchar1* nctemp10816= tmp;
int nctemp10819=CodeEs(nctemp10814,nctemp10816);
struct tree* nctemp10821= p;
struct nctempchar1 *nctemp10825;
static struct nctempchar1 nctemp10826 = {{ 4}, (char*)")\n\0"};
nctemp10825=&nctemp10826;
nctempchar1* nctemp10823= nctemp10825;
int nctemp10827=CodeEs(nctemp10821,nctemp10823);
struct tree* nctemp10829= p;
struct nctempchar1 *nctemp10833;
static struct nctempchar1 nctemp10834 = {{ 2}, (char*)"{\0"};
nctemp10833=&nctemp10834;
nctempchar1* nctemp10831= nctemp10833;
int nctemp10835=CodeEs(nctemp10829,nctemp10831);
struct tree* nctemp10840= p;
struct tree* nctemp10842=PtreeMvsister(nctemp10840);
p =nctemp10842;
struct tree* nctemp10844= p;
int nctemp10846=CodeStmnt(nctemp10844);
struct tree* nctemp10852= sp;
nctempchar1* nctemp10854=CodeExpr(nctemp10852);
cond2=nctemp10854;
struct tree* nctemp10856= p;
nctempchar1* nctemp10858= tmp;
int nctemp10861=CodeEs(nctemp10856,nctemp10858);
struct tree* nctemp10863= p;
struct nctempchar1 *nctemp10867;
static struct nctempchar1 nctemp10868 = {{ 2}, (char*)"=\0"};
nctemp10867=&nctemp10868;
nctempchar1* nctemp10865= nctemp10867;
int nctemp10869=CodeEs(nctemp10863,nctemp10865);
struct tree* nctemp10871= p;
nctempchar1* nctemp10873= cond2;
int nctemp10876=CodeEs(nctemp10871,nctemp10873);
struct tree* nctemp10878= p;
struct nctempchar1 *nctemp10882;
static struct nctempchar1 nctemp10883 = {{ 2}, (char*)";\0"};
nctemp10882=&nctemp10883;
nctempchar1* nctemp10880= nctemp10882;
int nctemp10884=CodeEs(nctemp10878,nctemp10880);
struct tree* nctemp10886= p;
struct nctempchar1 *nctemp10890;
static struct nctempchar1 nctemp10891 = {{ 2}, (char*)"}\0"};
nctemp10890=&nctemp10891;
nctempchar1* nctemp10888= nctemp10890;
int nctemp10892=CodeEs(nctemp10886,nctemp10888);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10898= p;
struct tree* nctemp10900=PtreeMvchild(nctemp10898);
p =nctemp10900;
struct tree* nctemp10902= p;
nctempchar1* nctemp10904=CodeExpr(nctemp10902);
struct tree* nctemp10909= p;
struct tree* nctemp10911=PtreeMvsister(nctemp10909);
p =nctemp10911;
np = p;
struct tree* nctemp10917= p;
nctempchar1* nctemp10919=CodeExpr(nctemp10917);
cond=nctemp10919;
struct tree* nctemp10921= p;
struct nctempchar1 *nctemp10925;
static struct nctempchar1 nctemp10926 = {{ 7}, (char*)"while(\0"};
nctemp10925=&nctemp10926;
nctempchar1* nctemp10923= nctemp10925;
int nctemp10927=CodeEs(nctemp10921,nctemp10923);
struct tree* nctemp10929= p;
nctempchar1* nctemp10931= cond;
int nctemp10934=CodeEs(nctemp10929,nctemp10931);
struct tree* nctemp10936= p;
struct nctempchar1 *nctemp10940;
static struct nctempchar1 nctemp10941 = {{ 5}, (char*)"){\n\0"};
nctemp10940=&nctemp10941;
nctempchar1* nctemp10938= nctemp10940;
int nctemp10942=CodeEs(nctemp10936,nctemp10938);
struct tree* nctemp10947= p;
struct tree* nctemp10949=PtreeMvsister(nctemp10947);
p =nctemp10949;
sp = p;
struct tree* nctemp10954= p;
struct tree* nctemp10956=PtreeMvsister(nctemp10954);
p =nctemp10956;
struct tree* nctemp10958= p;
int nctemp10960=CodeStmnt(nctemp10958);
struct tree* nctemp10962= sp;
nctempchar1* nctemp10964=CodeExpr(nctemp10962);
struct tree* nctemp10970= np;
nctempchar1* nctemp10972=CodeExpr(nctemp10970);
tmp=nctemp10972;
struct tree* nctemp10974= p;
nctempchar1* nctemp10976= cond;
int nctemp10979=CodeEs(nctemp10974,nctemp10976);
struct tree* nctemp10981= p;
struct nctempchar1 *nctemp10985;
static struct nctempchar1 nctemp10986 = {{ 2}, (char*)"=\0"};
nctemp10985=&nctemp10986;
nctempchar1* nctemp10983= nctemp10985;
int nctemp10987=CodeEs(nctemp10981,nctemp10983);
struct tree* nctemp10989= p;
nctempchar1* nctemp10991= tmp;
int nctemp10994=CodeEs(nctemp10989,nctemp10991);
struct tree* nctemp10996= p;
struct nctempchar1 *nctemp11000;
static struct nctempchar1 nctemp11001 = {{ 4}, (char*)";\n\0"};
nctemp11000=&nctemp11001;
nctempchar1* nctemp10998= nctemp11000;
int nctemp11002=CodeEs(nctemp10996,nctemp10998);
struct tree* nctemp11004= p;
struct nctempchar1 *nctemp11008;
static struct nctempchar1 nctemp11009 = {{ 4}, (char*)"}\n\0"};
nctemp11008=&nctemp11009;
nctempchar1* nctemp11006= nctemp11008;
int nctemp11010=CodeEs(nctemp11004,nctemp11006);
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
int nctemp11012 = (p ==0);
if(nctemp11012)
{
return 1;
}
struct tree* nctemp11021= p;
struct tree* nctemp11023=PtreeMvsister(nctemp11021);
p =nctemp11023;
struct tree* nctemp11025= p;
int nctemp11027= level;
int nctemp11029= rank;
int nctemp11031=CodeParallelfor(nctemp11025,nctemp11027,nctemp11029);
struct tree* nctemp11036= sp;
struct tree* nctemp11038=PtreeMvchild(nctemp11036);
rp =nctemp11038;
struct tree* nctemp11043= rp;
struct tree* nctemp11045=PtreeMvchild(nctemp11043);
qp =nctemp11045;
struct tree* nctemp11050= qp;
struct tree* nctemp11052=PtreeMvchild(nctemp11050);
qp =nctemp11052;
struct tree* nctemp11058= qp;
nctempchar1* nctemp11060=PtreeGetdef(nctemp11058);
index=nctemp11060;
struct tree* nctemp11068= qp;
struct tree* nctemp11070=PtreeMvsister(nctemp11068);
struct tree* nctemp11066= nctemp11070;
nctempchar1* nctemp11071=CodeBinexpr(nctemp11066);
init=nctemp11071;
struct tree* nctemp11076= rp;
struct tree* nctemp11078=PtreeMvsister(nctemp11076);
rrp =nctemp11078;
struct tree* nctemp11084= rrp;
nctempchar1* nctemp11086=CodeExpr(nctemp11084);
cond=nctemp11086;
int nctemp11087 = (level ==rank);
if(nctemp11087)
{
struct tree* nctemp11092= p;
struct nctempchar1 *nctemp11096;
static struct nctempchar1 nctemp11097 = {{ 54}, (char*)"\n #pragma omp target teams distribute parallel for\n\0"};
nctemp11096=&nctemp11097;
nctempchar1* nctemp11094= nctemp11096;
int nctemp11098=CodeEs(nctemp11092,nctemp11094);
}
struct tree* nctemp11100= rp;
struct nctempchar1 *nctemp11104;
static struct nctempchar1 nctemp11105 = {{ 5}, (char*)"for(\0"};
nctemp11104=&nctemp11105;
nctempchar1* nctemp11102= nctemp11104;
int nctemp11106=CodeEs(nctemp11100,nctemp11102);
struct tree* nctemp11108= rp;
nctempchar1* nctemp11110= index;
int nctemp11113=CodeEs(nctemp11108,nctemp11110);
struct tree* nctemp11115= rp;
struct nctempchar1 *nctemp11119;
static struct nctempchar1 nctemp11120 = {{ 2}, (char*)"=\0"};
nctemp11119=&nctemp11120;
nctempchar1* nctemp11117= nctemp11119;
int nctemp11121=CodeEs(nctemp11115,nctemp11117);
struct tree* nctemp11123= rp;
nctempchar1* nctemp11125= init;
int nctemp11128=CodeEs(nctemp11123,nctemp11125);
struct tree* nctemp11130= rp;
struct nctempchar1 *nctemp11134;
static struct nctempchar1 nctemp11135 = {{ 2}, (char*)";\0"};
nctemp11134=&nctemp11135;
nctempchar1* nctemp11132= nctemp11134;
int nctemp11136=CodeEs(nctemp11130,nctemp11132);
struct tree* nctemp11141= rp;
struct tree* nctemp11143=PtreeMvsister(nctemp11141);
rp =nctemp11143;
struct tree* nctemp11145= rp;
nctempchar1* nctemp11147= index;
int nctemp11150=CodeEs(nctemp11145,nctemp11147);
struct tree* nctemp11152= rp;
struct nctempchar1 *nctemp11156;
static struct nctempchar1 nctemp11157 = {{ 2}, (char*)"<\0"};
nctemp11156=&nctemp11157;
nctempchar1* nctemp11154= nctemp11156;
int nctemp11158=CodeEs(nctemp11152,nctemp11154);
struct tree* nctemp11160= p;
nctempchar1* nctemp11162= cond;
int nctemp11165=CodeEs(nctemp11160,nctemp11162);
struct tree* nctemp11167= rp;
struct nctempchar1 *nctemp11171;
static struct nctempchar1 nctemp11172 = {{ 2}, (char*)";\0"};
nctemp11171=&nctemp11172;
nctempchar1* nctemp11169= nctemp11171;
int nctemp11173=CodeEs(nctemp11167,nctemp11169);
struct tree* nctemp11181= rp;
struct tree* nctemp11183=PtreeMvsister(nctemp11181);
rp =nctemp11183;
int nctemp11174 = (rp !=0);
if(nctemp11174)
{
struct tree* nctemp11186= rp;
nctempchar1* nctemp11188= index;
int nctemp11191=CodeEs(nctemp11186,nctemp11188);
struct tree* nctemp11193= rp;
struct nctempchar1 *nctemp11197;
static struct nctempchar1 nctemp11198 = {{ 3}, (char*)"++\0"};
nctemp11197=&nctemp11198;
nctempchar1* nctemp11195= nctemp11197;
int nctemp11199=CodeEs(nctemp11193,nctemp11195);
}
else{
struct tree* nctemp11201= rp;
nctempchar1* nctemp11203= index;
int nctemp11206=CodeEs(nctemp11201,nctemp11203);
struct tree* nctemp11208= rp;
struct nctempchar1 *nctemp11212;
static struct nctempchar1 nctemp11213 = {{ 3}, (char*)"++\0"};
nctemp11212=&nctemp11213;
nctempchar1* nctemp11210= nctemp11212;
int nctemp11214=CodeEs(nctemp11208,nctemp11210);
}
struct tree* nctemp11216= rp;
struct nctempchar1 *nctemp11220;
static struct nctempchar1 nctemp11221 = {{ 3}, (char*)"){\0"};
nctemp11220=&nctemp11221;
nctempchar1* nctemp11218= nctemp11220;
int nctemp11222=CodeEs(nctemp11216,nctemp11218);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11228= sp;
int nctemp11230=PtreeGetrank(nctemp11228);
rank =nctemp11230;
struct tree* nctemp11235= p;
struct tree* nctemp11237=PtreeMvchild(nctemp11235);
p =nctemp11237;
struct tree* nctemp11242= p;
struct tree* nctemp11244=PtreeMvchild(nctemp11242);
p =nctemp11244;
struct tree* nctemp11246= p;
int nctemp11248= 0;
int nctemp11250= rank;
int nctemp11252=CodeParallelfor(nctemp11246,nctemp11248,nctemp11250);
struct tree* nctemp11257= sp;
struct tree* nctemp11259=PtreeMvchild(nctemp11257);
sp =nctemp11259;
struct tree* nctemp11264= sp;
struct tree* nctemp11266=PtreeMvsister(nctemp11264);
sp =nctemp11266;
struct tree* nctemp11268= sp;
int nctemp11270=CodeStmnt(nctemp11268);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11272= sp;
struct nctempchar1 *nctemp11276;
static struct nctempchar1 nctemp11277 = {{ 2}, (char*)"}\0"};
nctemp11276=&nctemp11277;
nctempchar1* nctemp11274= nctemp11276;
int nctemp11278=CodeEs(nctemp11272,nctemp11274);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11281= p;
struct nctempchar1 *nctemp11285;
static struct nctempchar1 nctemp11286 = {{ 13}, (char*)"int nctempno\0"};
nctemp11285=&nctemp11286;
nctempchar1* nctemp11283= nctemp11285;
int nctemp11287=CodeEs(nctemp11281,nctemp11283);
struct tree* nctemp11289= p;
struct nctempchar1 *nctemp11293;
static struct nctempchar1 nctemp11294 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11293=&nctemp11294;
nctempchar1* nctemp11291= nctemp11293;
int nctemp11295=CodeEs(nctemp11289,nctemp11291);
struct nctempchar1 *nctemp11297;
static struct nctempchar1 nctemp11298 = {{ 9}, (char*)"nctempno\0"};
nctemp11297=&nctemp11298;
return nctemp11297;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11303= p;
struct tree* nctemp11305=PtreeMvchild(nctemp11303);
p =nctemp11305;
struct tree* nctemp11310= p;
struct tree* nctemp11312=PtreeMvchild(nctemp11310);
p =nctemp11312;
struct tree* nctemp11317= p;
struct tree* nctemp11319=PtreeMvchild(nctemp11317);
p =nctemp11319;
struct tree* nctemp11321= p;
nctempchar1* nctemp11323=PtreeGetdef(nctemp11321);
return nctemp11323;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11328= p;
struct tree* nctemp11330=PtreeMvsister(nctemp11328);
p =nctemp11330;
}
struct tree* nctemp11332= p;
nctempchar1* nctemp11334=CodeParidx(nctemp11332);
return nctemp11334;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11339= p;
struct tree* nctemp11341=PtreeMvchild(nctemp11339);
p =nctemp11341;
struct tree* nctemp11347= p;
nctempchar1* nctemp11349=CodeExpr(nctemp11347);
tmp=nctemp11349;
nctempchar1* nctemp11355=CodeMktemp();
temp=nctemp11355;
struct tree* nctemp11357= p;
struct nctempchar1 *nctemp11361;
static struct nctempchar1 nctemp11362 = {{ 5}, (char*)"int \0"};
nctemp11361=&nctemp11362;
nctempchar1* nctemp11359= nctemp11361;
int nctemp11363=CodeEs(nctemp11357,nctemp11359);
struct tree* nctemp11365= p;
nctempchar1* nctemp11367= temp;
int nctemp11370=CodeEs(nctemp11365,nctemp11367);
struct tree* nctemp11372= p;
struct nctempchar1 *nctemp11376;
static struct nctempchar1 nctemp11377 = {{ 2}, (char*)"=\0"};
nctemp11376=&nctemp11377;
nctempchar1* nctemp11374= nctemp11376;
int nctemp11378=CodeEs(nctemp11372,nctemp11374);
struct tree* nctemp11380= p;
nctempchar1* nctemp11382= tmp;
int nctemp11385=CodeEs(nctemp11380,nctemp11382);
struct tree* nctemp11387= p;
struct nctempchar1 *nctemp11391;
static struct nctempchar1 nctemp11392 = {{ 4}, (char*)";\n\0"};
nctemp11391=&nctemp11392;
nctempchar1* nctemp11389= nctemp11391;
int nctemp11393=CodeEs(nctemp11387,nctemp11389);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11400= p;
struct tree* nctemp11402=PtreeMvchild(nctemp11400);
p =nctemp11402;
struct tree* nctemp11407= p;
struct tree* nctemp11409=PtreeMvsister(nctemp11407);
p =nctemp11409;
struct tree* nctemp11411= p;
nctempchar1* nctemp11413=CodeExpr(nctemp11411);
return nctemp11413;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11418= p;
struct tree* nctemp11420=PtreeMvsister(nctemp11418);
p =nctemp11420;
}
struct tree* nctemp11422= p;
nctempchar1* nctemp11424=CodeParllim(nctemp11422);
return nctemp11424;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11429= p;
struct tree* nctemp11431=PtreeMvsister(nctemp11429);
p =nctemp11431;
}
struct tree* nctemp11433= p;
nctempchar1* nctemp11435=CodeParulim(nctemp11433);
return nctemp11435;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11441=CodeMktemp();
tmp1=nctemp11441;
struct tree* nctemp11447= p;
nctempchar1* nctemp11449=CodeParulim(nctemp11447);
tmp2=nctemp11449;
struct tree* nctemp11455= p;
nctempchar1* nctemp11457=CodeParllim(nctemp11455);
tmp3=nctemp11457;
struct tree* nctemp11459= p;
struct nctempchar1 *nctemp11463;
static struct nctempchar1 nctemp11464 = {{ 5}, (char*)"int \0"};
nctemp11463=&nctemp11464;
nctempchar1* nctemp11461= nctemp11463;
int nctemp11465=CodeEs(nctemp11459,nctemp11461);
struct tree* nctemp11467= p;
nctempchar1* nctemp11469= tmp1;
int nctemp11472=CodeEs(nctemp11467,nctemp11469);
struct tree* nctemp11474= p;
struct nctempchar1 *nctemp11478;
static struct nctempchar1 nctemp11479 = {{ 2}, (char*)"=\0"};
nctemp11478=&nctemp11479;
nctempchar1* nctemp11476= nctemp11478;
int nctemp11480=CodeEs(nctemp11474,nctemp11476);
struct tree* nctemp11482= p;
nctempchar1* nctemp11484= tmp2;
int nctemp11487=CodeEs(nctemp11482,nctemp11484);
struct tree* nctemp11489= p;
struct nctempchar1 *nctemp11493;
static struct nctempchar1 nctemp11494 = {{ 2}, (char*)"-\0"};
nctemp11493=&nctemp11494;
nctempchar1* nctemp11491= nctemp11493;
int nctemp11495=CodeEs(nctemp11489,nctemp11491);
struct tree* nctemp11497= p;
nctempchar1* nctemp11499= tmp3;
int nctemp11502=CodeEs(nctemp11497,nctemp11499);
struct tree* nctemp11504= p;
struct nctempchar1 *nctemp11508;
static struct nctempchar1 nctemp11509 = {{ 4}, (char*)";\n\0"};
nctemp11508=&nctemp11509;
nctempchar1* nctemp11506= nctemp11508;
int nctemp11510=CodeEs(nctemp11504,nctemp11506);
nctempchar1* nctemp11514= tmp3;
nctempchar1* nctemp11517= llim;
int nctemp11520=LibeStrcpy(nctemp11514,nctemp11517);
int nctemp11511 = (nctemp11520 ==0);
if(nctemp11511)
{
struct nctempchar1 *nctemp11525;
static struct nctempchar1 nctemp11526 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11525=&nctemp11526;
nctempchar1* nctemp11523= nctemp11525;
int nctemp11527=CodeError(nctemp11523);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11534= p;
struct tree* nctemp11536=PtreeMvsister(nctemp11534);
p =nctemp11536;
}
struct tree* nctemp11542= p;
nctempchar1* nctemp11544= llim;
nctempchar1* nctemp11547=CodeParlen(nctemp11542,nctemp11544);
tmp=nctemp11547;
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
int nctemp11554=m->d[0];r =nctemp11554;
nctempchar1* nctemp11563=CodeMktemp();
nsize=nctemp11563;
struct tree* nctemp11565= p;
struct nctempchar1 *nctemp11569;
static struct nctempchar1 nctemp11570 = {{ 5}, (char*)"int \0"};
nctemp11569=&nctemp11570;
nctempchar1* nctemp11567= nctemp11569;
int nctemp11571=CodeEs(nctemp11565,nctemp11567);
struct tree* nctemp11573= p;
nctempchar1* nctemp11575= nsize;
int nctemp11578=CodeEs(nctemp11573,nctemp11575);
struct tree* nctemp11580= p;
struct nctempchar1 *nctemp11584;
static struct nctempchar1 nctemp11585 = {{ 2}, (char*)"=\0"};
nctemp11584=&nctemp11585;
nctempchar1* nctemp11582= nctemp11584;
int nctemp11586=CodeEs(nctemp11580,nctemp11582);
for(i = 0;i < r;i = (i + 1)){
int nctemp11595 = r - 1;
int nctemp11587 = (i ==nctemp11595);
if(nctemp11587)
{
struct tree* nctemp11597= p;
int nctemp11601=i;
nctempchar1* nctemp11599= m->a[nctemp11601].s;
int nctemp11604=CodeEs(nctemp11597,nctemp11599);
struct tree* nctemp11606= p;
struct nctempchar1 *nctemp11610;
static struct nctempchar1 nctemp11611 = {{ 4}, (char*)";\n\0"};
nctemp11610=&nctemp11611;
nctempchar1* nctemp11608= nctemp11610;
int nctemp11612=CodeEs(nctemp11606,nctemp11608);
}
else{
struct tree* nctemp11614= p;
int nctemp11618=i;
nctempchar1* nctemp11616= m->a[nctemp11618].s;
int nctemp11621=CodeEs(nctemp11614,nctemp11616);
struct tree* nctemp11623= p;
struct nctempchar1 *nctemp11627;
static struct nctempchar1 nctemp11628 = {{ 2}, (char*)"*\0"};
nctemp11627=&nctemp11628;
nctempchar1* nctemp11625= nctemp11627;
int nctemp11629=CodeEs(nctemp11623,nctemp11625);
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
int nctemp11633= 1;
int nctemp11635=CodeSetparallel(nctemp11633);
sp = p;
struct tree* nctemp11640= p;
int nctemp11642=PtreeGetrank(nctemp11640);
rank =nctemp11642;
int nctemp11649=rank;
struct nctempcharr1 *nctemp11648;
nctemp11648=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11648->d[0]=rank;
nctemp11648->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11649);
m=nctemp11648;
int nctemp11658=rank;
struct nctempcharr1 *nctemp11657;
nctemp11657=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11657->d[0]=rank;
nctemp11657->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11658);
i=nctemp11657;
int nctemp11667=rank;
struct nctempcharr1 *nctemp11666;
nctemp11666=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11666->d[0]=rank;
nctemp11666->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11667);
nl=nctemp11666;
struct tree* nctemp11674= p;
struct tree* nctemp11676=PtreeMvchild(nctemp11674);
p =nctemp11676;
struct tree* nctemp11681= p;
struct tree* nctemp11683=PtreeMvchild(nctemp11681);
slice =nctemp11683;
struct tree* nctemp11685= p;
struct nctempchar1 *nctemp11689;
static struct nctempchar1 nctemp11690 = {{ 4}, (char*)"{\n\0"};
nctemp11689=&nctemp11690;
nctempchar1* nctemp11687= nctemp11689;
int nctemp11691=CodeEs(nctemp11685,nctemp11687);
struct tree* nctemp11697= slice;
nctempchar1* nctemp11699=CodeParprocno(nctemp11697);
pno=nctemp11699;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11703=l;
struct tree* nctemp11707= slice;
int nctemp11714 = l + 1;
int nctemp11709= nctemp11714;
nctempchar1* nctemp11715=CodeParidxrank(nctemp11707,nctemp11709);
i->a[nctemp11703].s=nctemp11715;
int nctemp11719=l;
int nctemp11724=4096;
nctempchar1 *nctemp11723;
nctemp11723=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11723->d[0]=4096;
nctemp11723->a=(char *)RunMalloc(sizeof(char)*nctemp11724);
nl->a[nctemp11719].s=nctemp11723;
int nctemp11730=l;
struct tree* nctemp11734= slice;
int nctemp11741 = l + 1;
int nctemp11736= nctemp11741;
int nctemp11744=l;
nctempchar1* nctemp11742= nl->a[nctemp11744].s;
nctempchar1* nctemp11747=CodeParlenrank(nctemp11734,nctemp11736,nctemp11742);
m->a[nctemp11730].s=nctemp11747;
}
struct tree* nctemp11753= p;
nctempcharr1* nctemp11755= m;
nctempchar1* nctemp11758=CodeParnsize(nctemp11753,nctemp11755);
nmax=nctemp11758;
struct tree* nctemp11760= p;
struct nctempchar1 *nctemp11764;
static struct nctempchar1 nctemp11765 = {{ 5}, (char*)"for(\0"};
nctemp11764=&nctemp11765;
nctempchar1* nctemp11762= nctemp11764;
int nctemp11766=CodeEs(nctemp11760,nctemp11762);
struct tree* nctemp11768= p;
nctempchar1* nctemp11770= pno;
int nctemp11773=CodeEs(nctemp11768,nctemp11770);
struct tree* nctemp11775= p;
struct nctempchar1 *nctemp11779;
static struct nctempchar1 nctemp11780 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11779=&nctemp11780;
nctempchar1* nctemp11777= nctemp11779;
int nctemp11781=CodeEs(nctemp11775,nctemp11777);
struct tree* nctemp11783= p;
nctempchar1* nctemp11785= pno;
int nctemp11788=CodeEs(nctemp11783,nctemp11785);
struct tree* nctemp11790= p;
struct nctempchar1 *nctemp11794;
static struct nctempchar1 nctemp11795 = {{ 2}, (char*)"<\0"};
nctemp11794=&nctemp11795;
nctempchar1* nctemp11792= nctemp11794;
int nctemp11796=CodeEs(nctemp11790,nctemp11792);
struct tree* nctemp11798= p;
nctempchar1* nctemp11800= nmax;
int nctemp11803=CodeEs(nctemp11798,nctemp11800);
struct tree* nctemp11805= p;
struct nctempchar1 *nctemp11809;
static struct nctempchar1 nctemp11810 = {{ 2}, (char*)";\0"};
nctemp11809=&nctemp11810;
nctempchar1* nctemp11807= nctemp11809;
int nctemp11811=CodeEs(nctemp11805,nctemp11807);
struct tree* nctemp11813= p;
nctempchar1* nctemp11815= pno;
int nctemp11818=CodeEs(nctemp11813,nctemp11815);
struct tree* nctemp11820= p;
struct nctempchar1 *nctemp11824;
static struct nctempchar1 nctemp11825 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11824=&nctemp11825;
nctempchar1* nctemp11822= nctemp11824;
int nctemp11826=CodeEs(nctemp11820,nctemp11822);
struct tree* nctemp11828= p;
struct nctempchar1 *nctemp11832;
static struct nctempchar1 nctemp11833 = {{ 5}, (char*)"){\n\0"};
nctemp11832=&nctemp11833;
nctempchar1* nctemp11830= nctemp11832;
int nctemp11834=CodeEs(nctemp11828,nctemp11830);
struct nctempchar1 *nctemp11842;
static struct nctempchar1 nctemp11843 = {{ 2}, (char*)"1\0"};
nctemp11842=&nctemp11843;
nctempchar1* nctemp11840= nctemp11842;
nctempchar1* nctemp11844=LibeStrsave(nctemp11840);
qk=nctemp11844;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11853 = rank - 1;
int nctemp11845 = (l ==nctemp11853);
if(nctemp11845)
{
struct tree* nctemp11855= p;
int nctemp11859=l;
nctempchar1* nctemp11857= i->a[nctemp11859].s;
int nctemp11862=CodeEs(nctemp11855,nctemp11857);
struct tree* nctemp11864= p;
struct nctempchar1 *nctemp11868;
static struct nctempchar1 nctemp11869 = {{ 2}, (char*)"=\0"};
nctemp11868=&nctemp11869;
nctempchar1* nctemp11866= nctemp11868;
int nctemp11870=CodeEs(nctemp11864,nctemp11866);
struct tree* nctemp11872= p;
struct nctempchar1 *nctemp11876;
static struct nctempchar1 nctemp11877 = {{ 2}, (char*)"(\0"};
nctemp11876=&nctemp11877;
nctempchar1* nctemp11874= nctemp11876;
int nctemp11878=CodeEs(nctemp11872,nctemp11874);
struct tree* nctemp11880= p;
nctempchar1* nctemp11882= pno;
int nctemp11885=CodeEs(nctemp11880,nctemp11882);
struct tree* nctemp11887= p;
struct nctempchar1 *nctemp11891;
static struct nctempchar1 nctemp11892 = {{ 2}, (char*)"/\0"};
nctemp11891=&nctemp11892;
nctempchar1* nctemp11889= nctemp11891;
int nctemp11893=CodeEs(nctemp11887,nctemp11889);
struct tree* nctemp11895= p;
struct nctempchar1 *nctemp11899;
static struct nctempchar1 nctemp11900 = {{ 2}, (char*)"(\0"};
nctemp11899=&nctemp11900;
nctempchar1* nctemp11897= nctemp11899;
int nctemp11901=CodeEs(nctemp11895,nctemp11897);
struct tree* nctemp11903= p;
nctempchar1* nctemp11905= qk;
int nctemp11908=CodeEs(nctemp11903,nctemp11905);
struct tree* nctemp11910= p;
struct nctempchar1 *nctemp11914;
static struct nctempchar1 nctemp11915 = {{ 2}, (char*)")\0"};
nctemp11914=&nctemp11915;
nctempchar1* nctemp11912= nctemp11914;
int nctemp11916=CodeEs(nctemp11910,nctemp11912);
struct tree* nctemp11918= p;
struct nctempchar1 *nctemp11922;
static struct nctempchar1 nctemp11923 = {{ 2}, (char*)")\0"};
nctemp11922=&nctemp11923;
nctempchar1* nctemp11920= nctemp11922;
int nctemp11924=CodeEs(nctemp11918,nctemp11920);
struct tree* nctemp11926= p;
struct nctempchar1 *nctemp11930;
static struct nctempchar1 nctemp11931 = {{ 2}, (char*)"+\0"};
nctemp11930=&nctemp11931;
nctempchar1* nctemp11928= nctemp11930;
int nctemp11932=CodeEs(nctemp11926,nctemp11928);
struct tree* nctemp11934= p;
int nctemp11938=l;
nctempchar1* nctemp11936= nl->a[nctemp11938].s;
int nctemp11941=CodeEs(nctemp11934,nctemp11936);
int nctemp11944=l;
RunFree(nl->a[nctemp11944].s->a);
RunFree(nl->a[nctemp11944].s);
struct tree* nctemp11948= p;
struct nctempchar1 *nctemp11952;
static struct nctempchar1 nctemp11953 = {{ 4}, (char*)";\n\0"};
nctemp11952=&nctemp11953;
nctempchar1* nctemp11950= nctemp11952;
int nctemp11954=CodeEs(nctemp11948,nctemp11950);
}
else{
struct tree* nctemp11956= p;
int nctemp11960=l;
nctempchar1* nctemp11958= i->a[nctemp11960].s;
int nctemp11963=CodeEs(nctemp11956,nctemp11958);
struct tree* nctemp11965= p;
struct nctempchar1 *nctemp11969;
static struct nctempchar1 nctemp11970 = {{ 2}, (char*)"=\0"};
nctemp11969=&nctemp11970;
nctempchar1* nctemp11967= nctemp11969;
int nctemp11971=CodeEs(nctemp11965,nctemp11967);
struct tree* nctemp11973= p;
struct nctempchar1 *nctemp11977;
static struct nctempchar1 nctemp11978 = {{ 2}, (char*)"(\0"};
nctemp11977=&nctemp11978;
nctempchar1* nctemp11975= nctemp11977;
int nctemp11979=CodeEs(nctemp11973,nctemp11975);
struct tree* nctemp11981= p;
nctempchar1* nctemp11983= pno;
int nctemp11986=CodeEs(nctemp11981,nctemp11983);
struct tree* nctemp11988= p;
struct nctempchar1 *nctemp11992;
static struct nctempchar1 nctemp11993 = {{ 2}, (char*)"/\0"};
nctemp11992=&nctemp11993;
nctempchar1* nctemp11990= nctemp11992;
int nctemp11994=CodeEs(nctemp11988,nctemp11990);
struct tree* nctemp11996= p;
struct nctempchar1 *nctemp12000;
static struct nctempchar1 nctemp12001 = {{ 2}, (char*)"(\0"};
nctemp12000=&nctemp12001;
nctempchar1* nctemp11998= nctemp12000;
int nctemp12002=CodeEs(nctemp11996,nctemp11998);
struct tree* nctemp12004= p;
nctempchar1* nctemp12006= qk;
int nctemp12009=CodeEs(nctemp12004,nctemp12006);
struct tree* nctemp12011= p;
struct nctempchar1 *nctemp12015;
static struct nctempchar1 nctemp12016 = {{ 2}, (char*)")\0"};
nctemp12015=&nctemp12016;
nctempchar1* nctemp12013= nctemp12015;
int nctemp12017=CodeEs(nctemp12011,nctemp12013);
struct tree* nctemp12019= p;
struct nctempchar1 *nctemp12023;
static struct nctempchar1 nctemp12024 = {{ 2}, (char*)")\0"};
nctemp12023=&nctemp12024;
nctempchar1* nctemp12021= nctemp12023;
int nctemp12025=CodeEs(nctemp12019,nctemp12021);
struct tree* nctemp12027= p;
struct nctempchar1 *nctemp12031;
static struct nctempchar1 nctemp12032 = {{ 2}, (char*)"%\0"};
nctemp12031=&nctemp12032;
nctempchar1* nctemp12029= nctemp12031;
int nctemp12033=CodeEs(nctemp12027,nctemp12029);
struct tree* nctemp12035= p;
int nctemp12039=l;
nctempchar1* nctemp12037= m->a[nctemp12039].s;
int nctemp12042=CodeEs(nctemp12035,nctemp12037);
struct tree* nctemp12044= p;
struct nctempchar1 *nctemp12048;
static struct nctempchar1 nctemp12049 = {{ 2}, (char*)"+\0"};
nctemp12048=&nctemp12049;
nctempchar1* nctemp12046= nctemp12048;
int nctemp12050=CodeEs(nctemp12044,nctemp12046);
struct tree* nctemp12052= p;
int nctemp12056=l;
nctempchar1* nctemp12054= nl->a[nctemp12056].s;
int nctemp12059=CodeEs(nctemp12052,nctemp12054);
int nctemp12062=l;
RunFree(nl->a[nctemp12062].s->a);
RunFree(nl->a[nctemp12062].s);
struct tree* nctemp12066= p;
struct nctempchar1 *nctemp12070;
static struct nctempchar1 nctemp12071 = {{ 4}, (char*)";\n\0"};
nctemp12070=&nctemp12071;
nctempchar1* nctemp12068= nctemp12070;
int nctemp12072=CodeEs(nctemp12066,nctemp12068);
}
nctempchar1* nctemp12078= qk;
struct nctempchar1 *nctemp12083;
static struct nctempchar1 nctemp12084 = {{ 2}, (char*)"*\0"};
nctemp12083=&nctemp12084;
nctempchar1* nctemp12081= nctemp12083;
nctempchar1* nctemp12085=LibeStradd(nctemp12078,nctemp12081);
tmp=nctemp12085;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12094= qk;
int nctemp12099=l;
nctempchar1* nctemp12097= m->a[nctemp12099].s;
nctempchar1* nctemp12102=LibeStradd(nctemp12094,nctemp12097);
tmp=nctemp12102;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12110= sp;
struct tree* nctemp12112=PtreeMvchild(nctemp12110);
p =nctemp12112;
struct tree* nctemp12117= p;
struct tree* nctemp12119=PtreeMvsister(nctemp12117);
p =nctemp12119;
struct tree* nctemp12121= p;
int nctemp12123=CodeCompstmnt(nctemp12121);
struct tree* nctemp12125= p;
struct nctempchar1 *nctemp12129;
static struct nctempchar1 nctemp12130 = {{ 4}, (char*)"}\n\0"};
nctemp12129=&nctemp12130;
nctempchar1* nctemp12127= nctemp12129;
int nctemp12131=CodeEs(nctemp12125,nctemp12127);
struct tree* nctemp12133= p;
struct nctempchar1 *nctemp12137;
static struct nctempchar1 nctemp12138 = {{ 4}, (char*)"}\n\0"};
nctemp12137=&nctemp12138;
nctempchar1* nctemp12135= nctemp12137;
int nctemp12139=CodeEs(nctemp12133,nctemp12135);
int nctemp12141= 0;
int nctemp12143=CodeSetparallel(nctemp12141);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12151=CodeGetarch();
int nctemp12148 = (nctemp12151 ==1);
int nctemp12157=CodeGetarch();
int nctemp12154 = (nctemp12157 ==4);
int nctemp12145 = (nctemp12148 || nctemp12154);
if(nctemp12145)
{
struct tree* nctemp12160= p;
int nctemp12162=CodeParallelstmntcpu(nctemp12160);
}
else{
int nctemp12166=CodeGetarch();
int nctemp12163 = (nctemp12166 ==2);
if(nctemp12163)
{
struct tree* nctemp12169= p;
int nctemp12171=CodeParallelstmntgpu(nctemp12169);
}
else{
int nctemp12175=CodeGetarch();
int nctemp12172 = (nctemp12175 ==3);
if(nctemp12172)
{
struct tree* nctemp12178= p;
int nctemp12180=CodeParallelstmntgpu(nctemp12178);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12186= p;
struct tree* nctemp12188=PtreeMvchild(nctemp12186);
p =nctemp12188;
struct tree* nctemp12194= p;
nctempchar1* nctemp12196=CodeExpr(nctemp12194);
cond=nctemp12196;
struct tree* nctemp12198= p;
struct nctempchar1 *nctemp12202;
static struct nctempchar1 nctemp12203 = {{ 4}, (char*)"if(\0"};
nctemp12202=&nctemp12203;
nctempchar1* nctemp12200= nctemp12202;
int nctemp12204=CodeEs(nctemp12198,nctemp12200);
struct tree* nctemp12206= p;
nctempchar1* nctemp12208= cond;
int nctemp12211=CodeEs(nctemp12206,nctemp12208);
struct tree* nctemp12213= p;
struct nctempchar1 *nctemp12217;
static struct nctempchar1 nctemp12218 = {{ 4}, (char*)")\n\0"};
nctemp12217=&nctemp12218;
nctempchar1* nctemp12215= nctemp12217;
int nctemp12219=CodeEs(nctemp12213,nctemp12215);
struct tree* nctemp12224= p;
struct tree* nctemp12226=PtreeMvsister(nctemp12224);
p =nctemp12226;
struct tree* nctemp12228= p;
int nctemp12230=CodeStmnt(nctemp12228);
struct tree* nctemp12238= p;
struct tree* nctemp12240=PtreeMvsister(nctemp12238);
p =nctemp12240;
int nctemp12231 = (p !=0);
if(nctemp12231)
{
struct tree* nctemp12247= p;
nctempchar1* nctemp12249=PtreeGetname(nctemp12247);
nctempchar1* nctemp12245= nctemp12249;
struct nctempchar1 *nctemp12252;
static struct nctempchar1 nctemp12253 = {{ 5}, (char*)"else\0"};
nctemp12252=&nctemp12253;
nctempchar1* nctemp12250= nctemp12252;
int nctemp12254=LibeStrcmp(nctemp12245,nctemp12250);
int nctemp12242 = (nctemp12254 ==1);
if(nctemp12242)
{
struct tree* nctemp12260= p;
struct tree* nctemp12262=PtreeMvchild(nctemp12260);
p =nctemp12262;
struct tree* nctemp12264= p;
struct nctempchar1 *nctemp12268;
static struct nctempchar1 nctemp12269 = {{ 5}, (char*)"else\0"};
nctemp12268=&nctemp12269;
nctempchar1* nctemp12266= nctemp12268;
int nctemp12270=CodeEs(nctemp12264,nctemp12266);
struct tree* nctemp12272= p;
int nctemp12274=CodeStmnt(nctemp12272);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12280= p;
struct tree* nctemp12282=PtreeMvchild(nctemp12280);
np =nctemp12282;
struct tree* nctemp12288= np;
nctempchar1* nctemp12290=CodeExpr(nctemp12288);
rval=nctemp12290;
struct tree* nctemp12292= np;
struct nctempchar1 *nctemp12296;
static struct nctempchar1 nctemp12297 = {{ 8}, (char*)"return \0"};
nctemp12296=&nctemp12297;
nctempchar1* nctemp12294= nctemp12296;
int nctemp12298=CodeEs(nctemp12292,nctemp12294);
struct tree* nctemp12300= np;
nctempchar1* nctemp12302= rval;
int nctemp12305=CodeEs(nctemp12300,nctemp12302);
struct tree* nctemp12307= np;
struct nctempchar1 *nctemp12311;
static struct nctempchar1 nctemp12312 = {{ 4}, (char*)";\n\0"};
nctemp12311=&nctemp12312;
nctempchar1* nctemp12309= nctemp12311;
int nctemp12313=CodeEs(nctemp12307,nctemp12309);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12316= p;
struct nctempchar1 *nctemp12320;
static struct nctempchar1 nctemp12321 = {{ 4}, (char*)"{\n\0"};
nctemp12320=&nctemp12321;
nctempchar1* nctemp12318= nctemp12320;
int nctemp12322=CodeEs(nctemp12316,nctemp12318);
struct tree* nctemp12327= p;
struct tree* nctemp12329=PtreeMvchild(nctemp12327);
p =nctemp12329;
int nctemp12330 = (p ==0);
if(nctemp12330)
{
struct tree* nctemp12335= sp;
struct nctempchar1 *nctemp12339;
static struct nctempchar1 nctemp12340 = {{ 4}, (char*)"}\n\0"};
nctemp12339=&nctemp12340;
nctempchar1* nctemp12337= nctemp12339;
int nctemp12341=CodeEs(nctemp12335,nctemp12337);
return 1;
}
struct tree* nctemp12344= p;
struct symbol* nctemp12348=SymGetltp();
struct symbol* nctemp12346= nctemp12348;
int nctemp12349=CodeDeclarations(nctemp12344,nctemp12346);
struct tree* nctemp12355= p;
nctempchar1* nctemp12357=PtreeGetname(nctemp12355);
nctempchar1* nctemp12353= nctemp12357;
struct nctempchar1 *nctemp12360;
static struct nctempchar1 nctemp12361 = {{ 13}, (char*)"declarations\0"};
nctemp12360=&nctemp12361;
nctempchar1* nctemp12358= nctemp12360;
int nctemp12362=LibeStrcmp(nctemp12353,nctemp12358);
int nctemp12350 = (nctemp12362 ==1);
if(nctemp12350)
{
struct tree* nctemp12368= p;
struct tree* nctemp12370=PtreeMvsister(nctemp12368);
p =nctemp12370;
}
int nctemp12371 = (p !=0);
int nctemp12375=nctemp12371;
while(nctemp12375)
{{
struct tree* nctemp12381= p;
nctempchar1* nctemp12383=PtreeGetname(nctemp12381);
nctempchar1* nctemp12379= nctemp12383;
struct nctempchar1 *nctemp12386;
static struct nctempchar1 nctemp12387 = {{ 5}, (char*)"expr\0"};
nctemp12386=&nctemp12387;
nctempchar1* nctemp12384= nctemp12386;
int nctemp12388=LibeStrcmp(nctemp12379,nctemp12384);
int nctemp12376 = (nctemp12388 ==1);
if(nctemp12376)
{
int nctemp12393=CodeGetbreak();
int nctemp12390 = (nctemp12393 ==1);
if(nctemp12390)
{
struct tree* nctemp12396= p;
nctempchar1* nctemp12398=CodeExpr(nctemp12396);
}
else{
struct tree* nctemp12402= p;
int nctemp12404=PtreeGetsimple(nctemp12402);
int nctemp12399 = (nctemp12404 ==1);
if(nctemp12399)
{
struct tree* nctemp12407= p;
int nctemp12409=CodeSexpr(nctemp12407);
struct tree* nctemp12411= p;
struct nctempchar1 *nctemp12415;
static struct nctempchar1 nctemp12416 = {{ 4}, (char*)";\n\0"};
nctemp12415=&nctemp12416;
nctempchar1* nctemp12413= nctemp12415;
int nctemp12417=CodeEs(nctemp12411,nctemp12413);
}
else{
struct tree* nctemp12419= p;
nctempchar1* nctemp12421=CodeExpr(nctemp12419);
}
}
}
struct tree* nctemp12427= p;
nctempchar1* nctemp12429=PtreeGetname(nctemp12427);
nctempchar1* nctemp12425= nctemp12429;
struct nctempchar1 *nctemp12432;
static struct nctempchar1 nctemp12433 = {{ 6}, (char*)"while\0"};
nctemp12432=&nctemp12433;
nctempchar1* nctemp12430= nctemp12432;
int nctemp12434=LibeStrcmp(nctemp12425,nctemp12430);
int nctemp12422 = (nctemp12434 ==1);
if(nctemp12422)
{
struct tree* nctemp12437= p;
int nctemp12439=CodeWhilestmnt(nctemp12437);
}
struct tree* nctemp12445= p;
nctempchar1* nctemp12447=PtreeGetname(nctemp12445);
nctempchar1* nctemp12443= nctemp12447;
struct nctempchar1 *nctemp12450;
static struct nctempchar1 nctemp12451 = {{ 4}, (char*)"for\0"};
nctemp12450=&nctemp12451;
nctempchar1* nctemp12448= nctemp12450;
int nctemp12452=LibeStrcmp(nctemp12443,nctemp12448);
int nctemp12440 = (nctemp12452 ==1);
if(nctemp12440)
{
struct tree* nctemp12458= p;
struct tree* nctemp12460=PtreeMvchild(nctemp12458);
q =nctemp12460;
struct tree* nctemp12465= q;
struct tree* nctemp12467=PtreeMvsister(nctemp12465);
r =nctemp12467;
struct tree* nctemp12474= q;
int nctemp12476=PtreeGetsimple(nctemp12474);
struct tree* nctemp12478= r;
int nctemp12480=PtreeGetsimple(nctemp12478);
int nctemp12471 = (nctemp12476 && nctemp12480);
struct tree* nctemp12484= r;
struct tree* nctemp12486=PtreeMvsister(nctemp12484);
struct tree* nctemp12482= nctemp12486;
int nctemp12487=PtreeGetsimple(nctemp12482);
int nctemp12468 = (nctemp12471 && nctemp12487);
if(nctemp12468)
{
struct tree* nctemp12489= p;
int nctemp12491=CodeSforstmnt(nctemp12489);
}
else{
struct tree* nctemp12493= q;
int nctemp12495= 0;
int nctemp12497=PtreeSetsimple(nctemp12493,nctemp12495);
struct tree* nctemp12499= r;
int nctemp12501= 0;
int nctemp12503=PtreeSetsimple(nctemp12499,nctemp12501);
struct tree* nctemp12507= r;
struct tree* nctemp12509=PtreeMvsister(nctemp12507);
struct tree* nctemp12505= nctemp12509;
int nctemp12510= 0;
int nctemp12512=PtreeSetsimple(nctemp12505,nctemp12510);
struct tree* nctemp12514= p;
int nctemp12516=CodeForstmnt(nctemp12514);
}
}
struct tree* nctemp12522= p;
nctempchar1* nctemp12524=PtreeGetname(nctemp12522);
nctempchar1* nctemp12520= nctemp12524;
struct nctempchar1 *nctemp12527;
static struct nctempchar1 nctemp12528 = {{ 9}, (char*)"parallel\0"};
nctemp12527=&nctemp12528;
nctempchar1* nctemp12525= nctemp12527;
int nctemp12529=LibeStrcmp(nctemp12520,nctemp12525);
int nctemp12517 = (nctemp12529 ==1);
if(nctemp12517)
{
struct tree* nctemp12532= p;
int nctemp12534=CodeParallelstmnt(nctemp12532);
}
struct tree* nctemp12540= p;
nctempchar1* nctemp12542=PtreeGetname(nctemp12540);
nctempchar1* nctemp12538= nctemp12542;
struct nctempchar1 *nctemp12545;
static struct nctempchar1 nctemp12546 = {{ 3}, (char*)"if\0"};
nctemp12545=&nctemp12546;
nctempchar1* nctemp12543= nctemp12545;
int nctemp12547=LibeStrcmp(nctemp12538,nctemp12543);
int nctemp12535 = (nctemp12547 ==1);
if(nctemp12535)
{
struct tree* nctemp12550= p;
int nctemp12552=CodeIfstmnt(nctemp12550);
}
struct tree* nctemp12558= p;
nctempchar1* nctemp12560=PtreeGetname(nctemp12558);
nctempchar1* nctemp12556= nctemp12560;
struct nctempchar1 *nctemp12563;
static struct nctempchar1 nctemp12564 = {{ 7}, (char*)"return\0"};
nctemp12563=&nctemp12564;
nctempchar1* nctemp12561= nctemp12563;
int nctemp12565=LibeStrcmp(nctemp12556,nctemp12561);
int nctemp12553 = (nctemp12565 ==1);
if(nctemp12553)
{
struct tree* nctemp12568= p;
int nctemp12570=CodeReturnstmnt(nctemp12568);
}
struct tree* nctemp12575= p;
struct tree* nctemp12577=PtreeMvsister(nctemp12575);
p =nctemp12577;
}
int nctemp12578 = (p !=0);
nctemp12375=nctemp12578;}struct tree* nctemp12583= sp;
struct nctempchar1 *nctemp12587;
static struct nctempchar1 nctemp12588 = {{ 4}, (char*)"}\n\0"};
nctemp12587=&nctemp12588;
nctempchar1* nctemp12585= nctemp12587;
int nctemp12589=CodeEs(nctemp12583,nctemp12585);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12592= p;
struct nctempchar1 *nctemp12596;
static struct nctempchar1 nctemp12597 = {{ 4}, (char*)"{\n\0"};
nctemp12596=&nctemp12597;
nctempchar1* nctemp12594= nctemp12596;
int nctemp12598=CodeEs(nctemp12592,nctemp12594);
struct tree* nctemp12604= p;
nctempchar1* nctemp12606=PtreeGetname(nctemp12604);
nctempchar1* nctemp12602= nctemp12606;
struct nctempchar1 *nctemp12609;
static struct nctempchar1 nctemp12610 = {{ 10}, (char*)"compstmnt\0"};
nctemp12609=&nctemp12610;
nctempchar1* nctemp12607= nctemp12609;
int nctemp12611=LibeStrcmp(nctemp12602,nctemp12607);
int nctemp12599 = (nctemp12611 ==1);
if(nctemp12599)
{
struct tree* nctemp12617= p;
struct tree* nctemp12619=PtreeMvchild(nctemp12617);
p =nctemp12619;
struct tree* nctemp12621= p;
struct symbol* nctemp12625=SymGetltp();
struct symbol* nctemp12623= nctemp12625;
int nctemp12626=CodeDeclarations(nctemp12621,nctemp12623);
struct tree* nctemp12632= p;
nctempchar1* nctemp12634=PtreeGetname(nctemp12632);
nctempchar1* nctemp12630= nctemp12634;
struct nctempchar1 *nctemp12637;
static struct nctempchar1 nctemp12638 = {{ 13}, (char*)"declarations\0"};
nctemp12637=&nctemp12638;
nctempchar1* nctemp12635= nctemp12637;
int nctemp12639=LibeStrcmp(nctemp12630,nctemp12635);
int nctemp12627 = (nctemp12639 ==1);
if(nctemp12627)
{
struct tree* nctemp12645= p;
struct tree* nctemp12647=PtreeMvsister(nctemp12645);
p =nctemp12647;
}
}
int nctemp12648 = (p !=0);
int nctemp12652=nctemp12648;
while(nctemp12652)
{{
struct tree* nctemp12658= p;
nctempchar1* nctemp12660=PtreeGetname(nctemp12658);
nctempchar1* nctemp12656= nctemp12660;
struct nctempchar1 *nctemp12663;
static struct nctempchar1 nctemp12664 = {{ 10}, (char*)"compstmnt\0"};
nctemp12663=&nctemp12664;
nctempchar1* nctemp12661= nctemp12663;
int nctemp12665=LibeStrcmp(nctemp12656,nctemp12661);
int nctemp12653 = (nctemp12665 ==1);
if(nctemp12653)
{
struct tree* nctemp12668= p;
int nctemp12670=CodeCompstmnt(nctemp12668);
}
struct tree* nctemp12676= p;
nctempchar1* nctemp12678=PtreeGetname(nctemp12676);
nctempchar1* nctemp12674= nctemp12678;
struct nctempchar1 *nctemp12681;
static struct nctempchar1 nctemp12682 = {{ 5}, (char*)"expr\0"};
nctemp12681=&nctemp12682;
nctempchar1* nctemp12679= nctemp12681;
int nctemp12683=LibeStrcmp(nctemp12674,nctemp12679);
int nctemp12671 = (nctemp12683 ==1);
if(nctemp12671)
{
int nctemp12688=CodeGetbreak();
int nctemp12685 = (nctemp12688 ==1);
if(nctemp12685)
{
struct tree* nctemp12691= p;
nctempchar1* nctemp12693=CodeExpr(nctemp12691);
}
else{
struct tree* nctemp12697= p;
int nctemp12699=PtreeGetsimple(nctemp12697);
int nctemp12694 = (nctemp12699 ==1);
if(nctemp12694)
{
struct tree* nctemp12702= p;
int nctemp12704=CodeSexpr(nctemp12702);
struct tree* nctemp12706= p;
struct nctempchar1 *nctemp12710;
static struct nctempchar1 nctemp12711 = {{ 4}, (char*)";\n\0"};
nctemp12710=&nctemp12711;
nctempchar1* nctemp12708= nctemp12710;
int nctemp12712=CodeEs(nctemp12706,nctemp12708);
}
else{
struct tree* nctemp12714= p;
nctempchar1* nctemp12716=CodeExpr(nctemp12714);
}
}
}
struct tree* nctemp12722= p;
nctempchar1* nctemp12724=PtreeGetname(nctemp12722);
nctempchar1* nctemp12720= nctemp12724;
struct nctempchar1 *nctemp12727;
static struct nctempchar1 nctemp12728 = {{ 6}, (char*)"while\0"};
nctemp12727=&nctemp12728;
nctempchar1* nctemp12725= nctemp12727;
int nctemp12729=LibeStrcmp(nctemp12720,nctemp12725);
int nctemp12717 = (nctemp12729 ==1);
if(nctemp12717)
{
struct tree* nctemp12732= p;
int nctemp12734=CodeWhilestmnt(nctemp12732);
}
struct tree* nctemp12740= p;
nctempchar1* nctemp12742=PtreeGetname(nctemp12740);
nctempchar1* nctemp12738= nctemp12742;
struct nctempchar1 *nctemp12745;
static struct nctempchar1 nctemp12746 = {{ 4}, (char*)"for\0"};
nctemp12745=&nctemp12746;
nctempchar1* nctemp12743= nctemp12745;
int nctemp12747=LibeStrcmp(nctemp12738,nctemp12743);
int nctemp12735 = (nctemp12747 ==1);
if(nctemp12735)
{
struct tree* nctemp12753= p;
struct tree* nctemp12755=PtreeMvchild(nctemp12753);
q =nctemp12755;
struct tree* nctemp12760= q;
struct tree* nctemp12762=PtreeMvsister(nctemp12760);
r =nctemp12762;
struct tree* nctemp12769= q;
int nctemp12771=PtreeGetsimple(nctemp12769);
struct tree* nctemp12773= r;
int nctemp12775=PtreeGetsimple(nctemp12773);
int nctemp12766 = (nctemp12771 && nctemp12775);
struct tree* nctemp12779= r;
struct tree* nctemp12781=PtreeMvsister(nctemp12779);
struct tree* nctemp12777= nctemp12781;
int nctemp12782=PtreeGetsimple(nctemp12777);
int nctemp12763 = (nctemp12766 && nctemp12782);
if(nctemp12763)
{
struct tree* nctemp12784= p;
int nctemp12786=CodeSforstmnt(nctemp12784);
}
else{
struct tree* nctemp12788= q;
int nctemp12790= 0;
int nctemp12792=PtreeSetsimple(nctemp12788,nctemp12790);
struct tree* nctemp12794= r;
int nctemp12796= 0;
int nctemp12798=PtreeSetsimple(nctemp12794,nctemp12796);
struct tree* nctemp12802= r;
struct tree* nctemp12804=PtreeMvsister(nctemp12802);
struct tree* nctemp12800= nctemp12804;
int nctemp12805= 0;
int nctemp12807=PtreeSetsimple(nctemp12800,nctemp12805);
struct tree* nctemp12809= p;
int nctemp12811=CodeForstmnt(nctemp12809);
}
}
struct tree* nctemp12817= p;
nctempchar1* nctemp12819=PtreeGetname(nctemp12817);
nctempchar1* nctemp12815= nctemp12819;
struct nctempchar1 *nctemp12822;
static struct nctempchar1 nctemp12823 = {{ 9}, (char*)"parallel\0"};
nctemp12822=&nctemp12823;
nctempchar1* nctemp12820= nctemp12822;
int nctemp12824=LibeStrcmp(nctemp12815,nctemp12820);
int nctemp12812 = (nctemp12824 ==1);
if(nctemp12812)
{
struct tree* nctemp12827= p;
int nctemp12829=CodeParallelstmnt(nctemp12827);
}
struct tree* nctemp12835= p;
nctempchar1* nctemp12837=PtreeGetname(nctemp12835);
nctempchar1* nctemp12833= nctemp12837;
struct nctempchar1 *nctemp12840;
static struct nctempchar1 nctemp12841 = {{ 3}, (char*)"if\0"};
nctemp12840=&nctemp12841;
nctempchar1* nctemp12838= nctemp12840;
int nctemp12842=LibeStrcmp(nctemp12833,nctemp12838);
int nctemp12830 = (nctemp12842 ==1);
if(nctemp12830)
{
struct tree* nctemp12845= p;
int nctemp12847=CodeIfstmnt(nctemp12845);
}
struct tree* nctemp12853= p;
nctempchar1* nctemp12855=PtreeGetname(nctemp12853);
nctempchar1* nctemp12851= nctemp12855;
struct nctempchar1 *nctemp12858;
static struct nctempchar1 nctemp12859 = {{ 7}, (char*)"return\0"};
nctemp12858=&nctemp12859;
nctempchar1* nctemp12856= nctemp12858;
int nctemp12860=LibeStrcmp(nctemp12851,nctemp12856);
int nctemp12848 = (nctemp12860 ==1);
if(nctemp12848)
{
struct tree* nctemp12863= p;
int nctemp12865=CodeReturnstmnt(nctemp12863);
}
struct tree* nctemp12870= p;
struct tree* nctemp12872=PtreeMvsister(nctemp12870);
p =nctemp12872;
}
int nctemp12873 = (p !=0);
nctemp12652=nctemp12873;}struct tree* nctemp12878= sp;
struct nctempchar1 *nctemp12882;
static struct nctempchar1 nctemp12883 = {{ 4}, (char*)"}\n\0"};
nctemp12882=&nctemp12883;
nctempchar1* nctemp12880= nctemp12882;
int nctemp12884=CodeEs(nctemp12878,nctemp12880);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12887= p;
nctempchar1* nctemp12889= pointer;
int nctemp12892=CodeEs(nctemp12887,nctemp12889);
struct tree* nctemp12894= p;
struct nctempchar1 *nctemp12898;
static struct nctempchar1 nctemp12899 = {{ 2}, (char*)"=\0"};
nctemp12898=&nctemp12899;
nctempchar1* nctemp12896= nctemp12898;
int nctemp12900=CodeEs(nctemp12894,nctemp12896);
struct tree* nctemp12902= p;
struct nctempchar1 *nctemp12906;
static struct nctempchar1 nctemp12907 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12906=&nctemp12907;
nctempchar1* nctemp12904= nctemp12906;
int nctemp12908=CodeEs(nctemp12902,nctemp12904);
struct tree* nctemp12910= p;
struct nctempchar1 *nctemp12914;
static struct nctempchar1 nctemp12915 = {{ 8}, (char*)"sizeof(\0"};
nctemp12914=&nctemp12915;
nctempchar1* nctemp12912= nctemp12914;
int nctemp12916=CodeEs(nctemp12910,nctemp12912);
struct tree* nctemp12918= p;
nctempchar1* nctemp12920= pointer;
int nctemp12923=CodeEs(nctemp12918,nctemp12920);
struct tree* nctemp12925= p;
struct nctempchar1 *nctemp12929;
static struct nctempchar1 nctemp12930 = {{ 6}, (char*)"));\n\0"};
nctemp12929=&nctemp12930;
nctempchar1* nctemp12927= nctemp12929;
int nctemp12931=CodeEs(nctemp12925,nctemp12927);
return 1;
}
nctempchar1 * CodeDims (nctempchar1 *type,int rank)
{
nctempchar1 *extension;
nctempchar1 *str;
nctempchar1 *tmp;
nctempchar1 *funcname;
nctempchar1* nctemp12936= type;
struct nctempchar1 *nctemp12941;
static struct nctempchar1 nctemp12942 = {{ 6}, (char*)"float\0"};
nctemp12941=&nctemp12942;
nctempchar1* nctemp12939= nctemp12941;
int nctemp12943=LibeStrcmp(nctemp12936,nctemp12939);
int nctemp12933 = (nctemp12943 ==1);
if(nctemp12933)
{
struct nctempchar1 *nctemp12950;
static struct nctempchar1 nctemp12951 = {{ 3}, (char*)"df\0"};
nctemp12950=&nctemp12951;
extension=nctemp12950;
}
else{
nctempchar1* nctemp12955= type;
struct nctempchar1 *nctemp12960;
static struct nctempchar1 nctemp12961 = {{ 4}, (char*)"int\0"};
nctemp12960=&nctemp12961;
nctempchar1* nctemp12958= nctemp12960;
int nctemp12962=LibeStrcmp(nctemp12955,nctemp12958);
int nctemp12952 = (nctemp12962 ==1);
if(nctemp12952)
{
struct nctempchar1 *nctemp12969;
static struct nctempchar1 nctemp12970 = {{ 3}, (char*)"di\0"};
nctemp12969=&nctemp12970;
extension=nctemp12969;
}
else{
nctempchar1* nctemp12974= type;
struct nctempchar1 *nctemp12979;
static struct nctempchar1 nctemp12980 = {{ 5}, (char*)"char\0"};
nctemp12979=&nctemp12980;
nctempchar1* nctemp12977= nctemp12979;
int nctemp12981=LibeStrcmp(nctemp12974,nctemp12977);
int nctemp12971 = (nctemp12981 ==1);
if(nctemp12971)
{
int nctemp12983 = (rank > 1);
if(nctemp12983)
{
struct nctempchar1 *nctemp12990;
static struct nctempchar1 nctemp12991 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp12990=&nctemp12991;
nctempchar1* nctemp12988= nctemp12990;
int nctemp12992=CodeError(nctemp12988);
}
else{
struct nctempchar1 *nctemp12998;
static struct nctempchar1 nctemp12999 = {{ 3}, (char*)"dc\0"};
nctemp12998=&nctemp12999;
extension=nctemp12998;
}
}
else{
struct nctempchar1 *nctemp13003;
static struct nctempchar1 nctemp13004 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13003=&nctemp13004;
nctempchar1* nctemp13001= nctemp13003;
int nctemp13005=CodeError(nctemp13001);
}
}
}
struct nctempchar1 *nctemp13013;
static struct nctempchar1 nctemp13014 = {{ 2}, (char*)" \0"};
nctemp13013=&nctemp13014;
nctempchar1* nctemp13011= nctemp13013;
nctempchar1* nctemp13015=LibeStrsave(nctemp13011);
str=nctemp13015;
int nctemp13017= rank;
nctempchar1* nctemp13019= str;
int nctemp13022=LibeItoa(nctemp13017,nctemp13019);
struct nctempchar1 *nctemp13030;
static struct nctempchar1 nctemp13031 = {{ 5}, (char*)"Dims\0"};
nctemp13030=&nctemp13031;
nctempchar1* nctemp13028= nctemp13030;
nctempchar1* nctemp13032= str;
nctempchar1* nctemp13035=LibeStradd(nctemp13028,nctemp13032);
tmp=nctemp13035;
nctempchar1* nctemp13041= tmp;
nctempchar1* nctemp13044= extension;
nctempchar1* nctemp13047=LibeStradd(nctemp13041,nctemp13044);
funcname=nctemp13047;
RunFree(tmp->a);
RunFree(tmp);
return funcname;
}
nctempchar1 * CodeStorefunc (nctempchar1 *type,int rank)
{
nctempchar1 *extension;
nctempchar1 *str;
nctempchar1 *tmp;
nctempchar1 *funcname;
nctempchar1* nctemp13056= type;
struct nctempchar1 *nctemp13061;
static struct nctempchar1 nctemp13062 = {{ 6}, (char*)"float\0"};
nctemp13061=&nctemp13062;
nctempchar1* nctemp13059= nctemp13061;
int nctemp13063=LibeStrcmp(nctemp13056,nctemp13059);
int nctemp13053 = (nctemp13063 ==1);
if(nctemp13053)
{
struct nctempchar1 *nctemp13070;
static struct nctempchar1 nctemp13071 = {{ 3}, (char*)"df\0"};
nctemp13070=&nctemp13071;
extension=nctemp13070;
}
else{
nctempchar1* nctemp13075= type;
struct nctempchar1 *nctemp13080;
static struct nctempchar1 nctemp13081 = {{ 4}, (char*)"int\0"};
nctemp13080=&nctemp13081;
nctempchar1* nctemp13078= nctemp13080;
int nctemp13082=LibeStrcmp(nctemp13075,nctemp13078);
int nctemp13072 = (nctemp13082 ==1);
if(nctemp13072)
{
struct nctempchar1 *nctemp13089;
static struct nctempchar1 nctemp13090 = {{ 3}, (char*)"di\0"};
nctemp13089=&nctemp13090;
extension=nctemp13089;
}
else{
nctempchar1* nctemp13094= type;
struct nctempchar1 *nctemp13099;
static struct nctempchar1 nctemp13100 = {{ 5}, (char*)"char\0"};
nctemp13099=&nctemp13100;
nctempchar1* nctemp13097= nctemp13099;
int nctemp13101=LibeStrcmp(nctemp13094,nctemp13097);
int nctemp13091 = (nctemp13101 ==1);
if(nctemp13091)
{
int nctemp13103 = (rank > 1);
if(nctemp13103)
{
struct nctempchar1 *nctemp13110;
static struct nctempchar1 nctemp13111 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp13110=&nctemp13111;
nctempchar1* nctemp13108= nctemp13110;
int nctemp13112=CodeError(nctemp13108);
}
else{
struct nctempchar1 *nctemp13118;
static struct nctempchar1 nctemp13119 = {{ 3}, (char*)"dc\0"};
nctemp13118=&nctemp13119;
extension=nctemp13118;
}
}
else{
struct nctempchar1 *nctemp13123;
static struct nctempchar1 nctemp13124 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13123=&nctemp13124;
nctempchar1* nctemp13121= nctemp13123;
int nctemp13125=CodeError(nctemp13121);
}
}
}
struct nctempchar1 *nctemp13133;
static struct nctempchar1 nctemp13134 = {{ 2}, (char*)" \0"};
nctemp13133=&nctemp13134;
nctempchar1* nctemp13131= nctemp13133;
nctempchar1* nctemp13135=LibeStrsave(nctemp13131);
str=nctemp13135;
int nctemp13137= rank;
nctempchar1* nctemp13139= str;
int nctemp13142=LibeItoa(nctemp13137,nctemp13139);
struct nctempchar1 *nctemp13150;
static struct nctempchar1 nctemp13151 = {{ 4}, (char*)"eps\0"};
nctemp13150=&nctemp13151;
nctempchar1* nctemp13148= nctemp13150;
nctempchar1* nctemp13152= str;
nctempchar1* nctemp13155=LibeStradd(nctemp13148,nctemp13152);
tmp=nctemp13155;
nctempchar1* nctemp13161= tmp;
nctempchar1* nctemp13164= extension;
nctempchar1* nctemp13167=LibeStradd(nctemp13161,nctemp13164);
funcname=nctemp13167;
RunFree(tmp->a);
RunFree(tmp);
return funcname;
}
int CodeCrerval (struct tree* p,int rank,nctempchar1 *type)
{
struct tree* nctemp13174= p;
int nctemp13176=CodeEind(nctemp13174);
nctempchar1* nctemp13178= type;
struct nctempchar1 *nctemp13183;
static struct nctempchar1 nctemp13184 = {{ 4}, (char*)"int\0"};
nctemp13183=&nctemp13184;
nctempchar1* nctemp13181= nctemp13183;
int nctemp13185=LibeStrcmp(nctemp13178,nctemp13181);
if(nctemp13185)
{
struct tree* nctemp13187= p;
struct nctempchar1 *nctemp13191;
static struct nctempchar1 nctemp13192 = {{ 29}, (char*)"rval=pyeps.Izeros(pyeps.Dims\0"};
nctemp13191=&nctemp13192;
nctempchar1* nctemp13189= nctemp13191;
int nctemp13193=CodeEs(nctemp13187,nctemp13189);
int nctemp13195= rank;
int nctemp13197=CodeEd(nctemp13195);
struct tree* nctemp13199= p;
struct nctempchar1 *nctemp13203;
static struct nctempchar1 nctemp13204 = {{ 13}, (char*)"di(r_val))\n\0"};
nctemp13203=&nctemp13204;
nctempchar1* nctemp13201= nctemp13203;
int nctemp13205=CodeEs(nctemp13199,nctemp13201);
return 1;
}
else{
nctempchar1* nctemp13208= type;
struct nctempchar1 *nctemp13213;
static struct nctempchar1 nctemp13214 = {{ 6}, (char*)"float\0"};
nctemp13213=&nctemp13214;
nctempchar1* nctemp13211= nctemp13213;
int nctemp13215=LibeStrcmp(nctemp13208,nctemp13211);
if(nctemp13215)
{
struct tree* nctemp13217= p;
struct nctempchar1 *nctemp13221;
static struct nctempchar1 nctemp13222 = {{ 29}, (char*)"rval=pyeps.Fzeros(pyeps.Dims\0"};
nctemp13221=&nctemp13222;
nctempchar1* nctemp13219= nctemp13221;
int nctemp13223=CodeEs(nctemp13217,nctemp13219);
int nctemp13225= rank;
int nctemp13227=CodeEd(nctemp13225);
struct tree* nctemp13229= p;
struct nctempchar1 *nctemp13233;
static struct nctempchar1 nctemp13234 = {{ 13}, (char*)"df(r_val))\n\0"};
nctemp13233=&nctemp13234;
nctempchar1* nctemp13231= nctemp13233;
int nctemp13235=CodeEs(nctemp13229,nctemp13231);
return 1;
}
else{
return 1;
}
}
}
nctempchar1 * CodeGetfunc (nctempchar1 *type,int rank)
{
nctempchar1 *extension;
nctempchar1 *str;
nctempchar1 *tmp;
nctempchar1 *funcname;
nctempchar1* nctemp13241= type;
struct nctempchar1 *nctemp13246;
static struct nctempchar1 nctemp13247 = {{ 6}, (char*)"float\0"};
nctemp13246=&nctemp13247;
nctempchar1* nctemp13244= nctemp13246;
int nctemp13248=LibeStrcmp(nctemp13241,nctemp13244);
int nctemp13238 = (nctemp13248 ==1);
if(nctemp13238)
{
struct nctempchar1 *nctemp13255;
static struct nctempchar1 nctemp13256 = {{ 3}, (char*)"df\0"};
nctemp13255=&nctemp13256;
extension=nctemp13255;
}
else{
nctempchar1* nctemp13260= type;
struct nctempchar1 *nctemp13265;
static struct nctempchar1 nctemp13266 = {{ 4}, (char*)"int\0"};
nctemp13265=&nctemp13266;
nctempchar1* nctemp13263= nctemp13265;
int nctemp13267=LibeStrcmp(nctemp13260,nctemp13263);
int nctemp13257 = (nctemp13267 ==1);
if(nctemp13257)
{
struct nctempchar1 *nctemp13274;
static struct nctempchar1 nctemp13275 = {{ 3}, (char*)"di\0"};
nctemp13274=&nctemp13275;
extension=nctemp13274;
}
else{
nctempchar1* nctemp13279= type;
struct nctempchar1 *nctemp13284;
static struct nctempchar1 nctemp13285 = {{ 5}, (char*)"char\0"};
nctemp13284=&nctemp13285;
nctempchar1* nctemp13282= nctemp13284;
int nctemp13286=LibeStrcmp(nctemp13279,nctemp13282);
int nctemp13276 = (nctemp13286 ==1);
if(nctemp13276)
{
int nctemp13288 = (rank > 1);
if(nctemp13288)
{
struct nctempchar1 *nctemp13295;
static struct nctempchar1 nctemp13296 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp13295=&nctemp13296;
nctempchar1* nctemp13293= nctemp13295;
int nctemp13297=CodeError(nctemp13293);
}
else{
struct nctempchar1 *nctemp13303;
static struct nctempchar1 nctemp13304 = {{ 3}, (char*)"dc\0"};
nctemp13303=&nctemp13304;
extension=nctemp13303;
}
}
else{
struct nctempchar1 *nctemp13308;
static struct nctempchar1 nctemp13309 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13308=&nctemp13309;
nctempchar1* nctemp13306= nctemp13308;
int nctemp13310=CodeError(nctemp13306);
}
}
}
struct nctempchar1 *nctemp13318;
static struct nctempchar1 nctemp13319 = {{ 2}, (char*)" \0"};
nctemp13318=&nctemp13319;
nctempchar1* nctemp13316= nctemp13318;
nctempchar1* nctemp13320=LibeStrsave(nctemp13316);
str=nctemp13320;
int nctemp13322= rank;
nctempchar1* nctemp13324= str;
int nctemp13327=LibeItoa(nctemp13322,nctemp13324);
struct nctempchar1 *nctemp13335;
static struct nctempchar1 nctemp13336 = {{ 4}, (char*)"num\0"};
nctemp13335=&nctemp13336;
nctempchar1* nctemp13333= nctemp13335;
nctempchar1* nctemp13337= str;
nctempchar1* nctemp13340=LibeStradd(nctemp13333,nctemp13337);
tmp=nctemp13340;
nctempchar1* nctemp13346= tmp;
nctempchar1* nctemp13349= extension;
nctempchar1* nctemp13352=LibeStradd(nctemp13346,nctemp13349);
funcname=nctemp13352;
RunFree(tmp->a);
RunFree(tmp);
return funcname;
}
int CodePyreturn (struct tree* functionode)
{
int rank;
nctempchar1 *type;
struct tree* nctemp13366= functionode;
nctempchar1* nctemp13368=PtreeGetstruct(nctemp13366);
nctempchar1* nctemp13364= nctemp13368;
struct nctempchar1 *nctemp13371;
static struct nctempchar1 nctemp13372 = {{ 7}, (char*)"struct\0"};
nctemp13371=&nctemp13372;
nctempchar1* nctemp13369= nctemp13371;
int nctemp13373=LibeStrcmp(nctemp13364,nctemp13369);
int nctemp13361 = (nctemp13373 ==0);
struct tree* nctemp13381= functionode;
nctempchar1* nctemp13383=PtreeGetarray(nctemp13381);
nctempchar1* nctemp13379= nctemp13383;
struct nctempchar1 *nctemp13386;
static struct nctempchar1 nctemp13387 = {{ 6}, (char*)"array\0"};
nctemp13386=&nctemp13387;
nctempchar1* nctemp13384= nctemp13386;
int nctemp13388=LibeStrcmp(nctemp13379,nctemp13384);
int nctemp13376 = (nctemp13388 ==1);
int nctemp13358 = (nctemp13361 && nctemp13376);
if(nctemp13358)
{
struct tree* nctemp13394= functionode;
int nctemp13396=PtreeGetrank(nctemp13394);
rank =nctemp13396;
struct tree* nctemp13402= functionode;
nctempchar1* nctemp13404=PtreeGetype(nctemp13402);
type=nctemp13404;
struct tree* nctemp13406= functionode;
int nctemp13408=CodeEind(nctemp13406);
nctempchar1* nctemp13412= type;
struct nctempchar1 *nctemp13417;
static struct nctempchar1 nctemp13418 = {{ 5}, (char*)"char\0"};
nctemp13417=&nctemp13418;
nctempchar1* nctemp13415= nctemp13417;
int nctemp13419=LibeStrcmp(nctemp13412,nctemp13415);
int nctemp13409 = (nctemp13419 ==1);
if(nctemp13409)
{
struct tree* nctemp13422= functionode;
struct nctempchar1 *nctemp13426;
static struct nctempchar1 nctemp13427 = {{ 12}, (char*)"rval=pyeps.\0"};
nctemp13426=&nctemp13427;
nctempchar1* nctemp13424= nctemp13426;
int nctemp13428=CodeEs(nctemp13422,nctemp13424);
struct tree* nctemp13430= functionode;
nctempchar1* nctemp13434= type;
int nctemp13437= rank;
nctempchar1* nctemp13439=CodeGetfunc(nctemp13434,nctemp13437);
nctempchar1* nctemp13432= nctemp13439;
int nctemp13440=CodeEs(nctemp13430,nctemp13432);
struct tree* nctemp13442= functionode;
struct nctempchar1 *nctemp13446;
static struct nctempchar1 nctemp13447 = {{ 16}, (char*)"(pylib,r_val)\n\0"};
nctemp13446=&nctemp13447;
nctempchar1* nctemp13444= nctemp13446;
int nctemp13448=CodeEs(nctemp13442,nctemp13444);
}
else{
struct tree* nctemp13450= functionode;
struct nctempchar1 *nctemp13454;
static struct nctempchar1 nctemp13455 = {{ 12}, (char*)"rval=pyeps.\0"};
nctemp13454=&nctemp13455;
nctempchar1* nctemp13452= nctemp13454;
int nctemp13456=CodeEs(nctemp13450,nctemp13452);
struct tree* nctemp13458= functionode;
nctempchar1* nctemp13462= type;
int nctemp13465= rank;
nctempchar1* nctemp13467=CodeGetfunc(nctemp13462,nctemp13465);
nctempchar1* nctemp13460= nctemp13467;
int nctemp13468=CodeEs(nctemp13458,nctemp13460);
struct tree* nctemp13470= functionode;
struct nctempchar1 *nctemp13474;
static struct nctempchar1 nctemp13475 = {{ 10}, (char*)"(r_val)\n\0"};
nctemp13474=&nctemp13475;
nctempchar1* nctemp13472= nctemp13474;
int nctemp13476=CodeEs(nctemp13470,nctemp13472);
}
}
else{
struct tree* nctemp13478= functionode;
int nctemp13480=CodeEind(nctemp13478);
struct tree* nctemp13482= functionode;
struct nctempchar1 *nctemp13486;
static struct nctempchar1 nctemp13487 = {{ 13}, (char*)"rval=r_val\n\0"};
nctemp13486=&nctemp13487;
nctempchar1* nctemp13484= nctemp13486;
int nctemp13488=CodeEs(nctemp13482,nctemp13484);
}
return 1;
}
int CodePyreturntype (struct tree* functionode)
{
nctempchar1 *fname;
nctempchar1 *farray;
nctempchar1 *rtype;
nctempchar1 *fstruct;
struct tree* nctemp13495= functionode;
nctempchar1* nctemp13497=PtreeGetdef(nctemp13495);
fname=nctemp13497;
struct tree* nctemp13503= functionode;
nctempchar1* nctemp13505=PtreeGetarray(nctemp13503);
farray=nctemp13505;
struct tree* nctemp13511= functionode;
nctempchar1* nctemp13513=PtreeGetype(nctemp13511);
rtype=nctemp13513;
struct tree* nctemp13519= functionode;
nctempchar1* nctemp13521=PtreeGetstruct(nctemp13519);
fstruct=nctemp13521;
struct tree* nctemp13523= functionode;
int nctemp13525=CodeEind(nctemp13523);
struct tree* nctemp13527= functionode;
struct nctempchar1 *nctemp13531;
static struct nctempchar1 nctemp13532 = {{ 7}, (char*)"pylib.\0"};
nctemp13531=&nctemp13532;
nctempchar1* nctemp13529= nctemp13531;
int nctemp13533=CodeEs(nctemp13527,nctemp13529);
struct tree* nctemp13535= functionode;
nctempchar1* nctemp13537= fname;
int nctemp13540=CodeEs(nctemp13535,nctemp13537);
struct tree* nctemp13542= functionode;
struct nctempchar1 *nctemp13546;
static struct nctempchar1 nctemp13547 = {{ 10}, (char*)".restype=\0"};
nctemp13546=&nctemp13547;
nctempchar1* nctemp13544= nctemp13546;
int nctemp13548=CodeEs(nctemp13542,nctemp13544);
nctempchar1* nctemp13555= farray;
struct nctempchar1 *nctemp13560;
static struct nctempchar1 nctemp13561 = {{ 6}, (char*)"array\0"};
nctemp13560=&nctemp13561;
nctempchar1* nctemp13558= nctemp13560;
int nctemp13562=LibeStrcmp(nctemp13555,nctemp13558);
int nctemp13552 = (nctemp13562 ==0);
nctempchar1* nctemp13568= fstruct;
struct nctempchar1 *nctemp13573;
static struct nctempchar1 nctemp13574 = {{ 7}, (char*)"struct\0"};
nctemp13573=&nctemp13574;
nctempchar1* nctemp13571= nctemp13573;
int nctemp13575=LibeStrcmp(nctemp13568,nctemp13571);
int nctemp13565 = (nctemp13575 ==0);
int nctemp13549 = (nctemp13552 && nctemp13565);
if(nctemp13549)
{
struct tree* nctemp13578= functionode;
nctempchar1* nctemp13580= rtype;
int nctemp13583=CodeEs(nctemp13578,nctemp13580);
struct tree* nctemp13585= functionode;
struct nctempchar1 *nctemp13589;
static struct nctempchar1 nctemp13590 = {{ 3}, (char*)"\n\0"};
nctemp13589=&nctemp13590;
nctempchar1* nctemp13587= nctemp13589;
int nctemp13591=CodeEs(nctemp13585,nctemp13587);
}
else{
struct tree* nctemp13593= functionode;
struct nctempchar1 *nctemp13597;
static struct nctempchar1 nctemp13598 = {{ 11}, (char*)"c_void_p\n\0"};
nctemp13597=&nctemp13598;
nctempchar1* nctemp13595= nctemp13597;
int nctemp13599=CodeEs(nctemp13593,nctemp13595);
}
return 1;
}
int CodeFdefwrapperpy (struct tree* p)
{
int fdcout;
struct tree* functionode;
nctempchar1 *fname;
nctempchar1 *rtype;
nctempchar1 *farray;
nctempchar1 *fstruct;
struct tree* arglist;
int noarg;
struct symbol* tp;
struct symbol* functable;
struct symbol* tbl;
nctempchar1 *name;
nctempchar1 *type;
int rank;
nctempchar1 *storefunc;
nctempchar1 *getfunc;
int nctemp13605=CodeGetfdout();
fdcout =nctemp13605;
int nctemp13609=CodeGetfdpython();
int nctemp13607= nctemp13609;
int nctemp13610=CodeSetfdout(nctemp13607);
struct tree* nctemp13615= p;
struct tree* nctemp13617=PtreeMvchild(nctemp13615);
p =nctemp13617;
struct tree* nctemp13623= p;
nctempchar1* nctemp13625=PtreeGetname(nctemp13623);
nctempchar1* nctemp13621= nctemp13625;
struct nctempchar1 *nctemp13628;
static struct nctempchar1 nctemp13629 = {{ 10}, (char*)"arrayargs\0"};
nctemp13628=&nctemp13629;
nctempchar1* nctemp13626= nctemp13628;
int nctemp13630=LibeStrcmp(nctemp13621,nctemp13626);
int nctemp13618 = (nctemp13630 ==1);
if(nctemp13618)
{
struct tree* nctemp13636= p;
struct tree* nctemp13638=PtreeMvsister(nctemp13636);
p =nctemp13638;
}
functionode = p;
struct tree* nctemp13644= p;
nctempchar1* nctemp13646=PtreeGetdef(nctemp13644);
fname=nctemp13646;
struct tree* nctemp13648= p;
struct nctempchar1 *nctemp13652;
static struct nctempchar1 nctemp13653 = {{ 5}, (char*)"def \0"};
nctemp13652=&nctemp13653;
nctempchar1* nctemp13650= nctemp13652;
int nctemp13654=CodeEs(nctemp13648,nctemp13650);
struct tree* nctemp13656= p;
nctempchar1* nctemp13658= fname;
int nctemp13661=CodeEs(nctemp13656,nctemp13658);
struct tree* nctemp13667= p;
nctempchar1* nctemp13669=PtreeGetype(nctemp13667);
rtype=nctemp13669;
struct tree* nctemp13675= p;
nctempchar1* nctemp13677=PtreeGetarray(nctemp13675);
farray=nctemp13677;
struct tree* nctemp13683= p;
nctempchar1* nctemp13685=PtreeGetstruct(nctemp13683);
fstruct=nctemp13685;
struct tree* nctemp13690= functionode;
struct tree* nctemp13692=PtreeMvchild(nctemp13690);
arglist =nctemp13692;
struct tree* nctemp13698= arglist;
nctempchar1* nctemp13700=PtreeGetname(nctemp13698);
nctempchar1* nctemp13696= nctemp13700;
struct nctempchar1 *nctemp13703;
static struct nctempchar1 nctemp13704 = {{ 8}, (char*)"arglist\0"};
nctemp13703=&nctemp13704;
nctempchar1* nctemp13701= nctemp13703;
int nctemp13705=LibeStrcmp(nctemp13696,nctemp13701);
int nctemp13693 = (nctemp13705 ==0);
if(nctemp13693)
{
noarg = 1;
}
else{
noarg = 0;
}
int nctemp13707 = (noarg ==1);
if(nctemp13707)
{
struct tree* nctemp13712= p;
struct nctempchar1 *nctemp13716;
static struct nctempchar1 nctemp13717 = {{ 7}, (char*)"() :\n\0"};
nctemp13716=&nctemp13717;
nctempchar1* nctemp13714= nctemp13716;
int nctemp13718=CodeEs(nctemp13712,nctemp13714);
struct tree* nctemp13720= functionode;
int nctemp13722=CodePyreturntype(nctemp13720);
struct tree* nctemp13724= p;
int nctemp13726=CodeEind(nctemp13724);
struct tree* nctemp13728= p;
struct nctempchar1 *nctemp13732;
static struct nctempchar1 nctemp13733 = {{ 13}, (char*)"r_val=pylib.\0"};
nctemp13732=&nctemp13733;
nctempchar1* nctemp13730= nctemp13732;
int nctemp13734=CodeEs(nctemp13728,nctemp13730);
struct tree* nctemp13736= p;
nctempchar1* nctemp13738= fname;
int nctemp13741=CodeEs(nctemp13736,nctemp13738);
struct tree* nctemp13743= p;
struct nctempchar1 *nctemp13747;
static struct nctempchar1 nctemp13748 = {{ 5}, (char*)"()\n\0"};
nctemp13747=&nctemp13748;
nctempchar1* nctemp13745= nctemp13747;
int nctemp13749=CodeEs(nctemp13743,nctemp13745);
struct tree* nctemp13751= functionode;
int nctemp13753=CodePyreturn(nctemp13751);
struct tree* nctemp13755= p;
int nctemp13757=CodeEind(nctemp13755);
struct tree* nctemp13759= p;
struct nctempchar1 *nctemp13763;
static struct nctempchar1 nctemp13764 = {{ 14}, (char*)"return rval\n\0"};
nctemp13763=&nctemp13764;
nctempchar1* nctemp13761= nctemp13763;
int nctemp13765=CodeEs(nctemp13759,nctemp13761);
int nctemp13767= fdcout;
int nctemp13769=CodeSetfdout(nctemp13767);
return 1;
}
else{
struct tree* nctemp13772= p;
struct nctempchar1 *nctemp13776;
static struct nctempchar1 nctemp13777 = {{ 2}, (char*)"(\0"};
nctemp13776=&nctemp13777;
nctempchar1* nctemp13774= nctemp13776;
int nctemp13778=CodeEs(nctemp13772,nctemp13774);
}
struct symbol* nctemp13783=SymGetetp();
tp =nctemp13783;
struct tree* nctemp13790= p;
nctempchar1* nctemp13792=PtreeGetdef(nctemp13790);
nctempchar1* nctemp13788= nctemp13792;
struct symbol* nctemp13793= tp;
struct symbol* nctemp13795=SymLookup(nctemp13788,nctemp13793);
tp =nctemp13795;
struct symbol* nctemp13800= tp;
struct symbol* nctemp13802=SymGetable(nctemp13800);
tp =nctemp13802;
functable = tp;
struct nctempchar1 *nctemp13809;
static struct nctempchar1 nctemp13810 = {{ 9}, (char*)"#arglist\0"};
nctemp13809=&nctemp13810;
nctempchar1* nctemp13807= nctemp13809;
struct symbol* nctemp13811= tp;
struct symbol* nctemp13813=SymLookup(nctemp13807,nctemp13811);
tp =nctemp13813;
struct symbol* nctemp13818= tp;
struct symbol* nctemp13820=SymGetable(nctemp13818);
tp =nctemp13820;
tbl = tp;
tp = tbl;
struct symbol* nctemp13828= tp;
struct symbol* nctemp13830=SymMvnext(nctemp13828);
tp =nctemp13830;
int nctemp13821 = (tp !=0);
int nctemp13832=nctemp13821;
while(nctemp13832)
{{
struct tree* nctemp13834= p;
struct symbol* nctemp13838= tp;
nctempchar1* nctemp13840=SymGetname(nctemp13838);
nctempchar1* nctemp13836= nctemp13840;
int nctemp13841=CodeEs(nctemp13834,nctemp13836);
struct symbol* nctemp13845= tp;
struct symbol* nctemp13847=SymMvnext(nctemp13845);
int nctemp13842 = (nctemp13847 !=0);
if(nctemp13842)
{
struct tree* nctemp13850= p;
struct nctempchar1 *nctemp13854;
static struct nctempchar1 nctemp13855 = {{ 2}, (char*)",\0"};
nctemp13854=&nctemp13855;
nctempchar1* nctemp13852= nctemp13854;
int nctemp13856=CodeEs(nctemp13850,nctemp13852);
}
}
struct symbol* nctemp13864= tp;
struct symbol* nctemp13866=SymMvnext(nctemp13864);
tp =nctemp13866;
int nctemp13857 = (tp !=0);
nctemp13832=nctemp13857;}struct tree* nctemp13869= p;
struct nctempchar1 *nctemp13873;
static struct nctempchar1 nctemp13874 = {{ 2}, (char*)")\0"};
nctemp13873=&nctemp13874;
nctempchar1* nctemp13871= nctemp13873;
int nctemp13875=CodeEs(nctemp13869,nctemp13871);
struct tree* nctemp13877= p;
struct nctempchar1 *nctemp13881;
static struct nctempchar1 nctemp13882 = {{ 2}, (char*)":\0"};
nctemp13881=&nctemp13882;
nctempchar1* nctemp13879= nctemp13881;
int nctemp13883=CodeEs(nctemp13877,nctemp13879);
struct tree* nctemp13885= p;
struct nctempchar1 *nctemp13889;
static struct nctempchar1 nctemp13890 = {{ 3}, (char*)"\n\0"};
nctemp13889=&nctemp13890;
nctempchar1* nctemp13887= nctemp13889;
int nctemp13891=CodeEs(nctemp13885,nctemp13887);
struct tree* nctemp13893= p;
int nctemp13895=CodeEind(nctemp13893);
struct tree* nctemp13897= p;
struct nctempchar1 *nctemp13901;
static struct nctempchar1 nctemp13902 = {{ 21}, (char*)"pylib=config.pylib\n\0"};
nctemp13901=&nctemp13902;
nctempchar1* nctemp13899= nctemp13901;
int nctemp13903=CodeEs(nctemp13897,nctemp13899);
tp = tbl;
struct tree* nctemp13905= p;
int nctemp13907=CodeEind(nctemp13905);
struct tree* nctemp13909= p;
struct nctempchar1 *nctemp13913;
static struct nctempchar1 nctemp13914 = {{ 7}, (char*)"pylib.\0"};
nctemp13913=&nctemp13914;
nctempchar1* nctemp13911= nctemp13913;
int nctemp13915=CodeEs(nctemp13909,nctemp13911);
struct tree* nctemp13917= p;
nctempchar1* nctemp13919= fname;
int nctemp13922=CodeEs(nctemp13917,nctemp13919);
struct tree* nctemp13924= p;
struct nctempchar1 *nctemp13928;
static struct nctempchar1 nctemp13929 = {{ 13}, (char*)".argtypes =[\0"};
nctemp13928=&nctemp13929;
nctempchar1* nctemp13926= nctemp13928;
int nctemp13930=CodeEs(nctemp13924,nctemp13926);
struct symbol* nctemp13938= tp;
struct symbol* nctemp13940=SymMvnext(nctemp13938);
tp =nctemp13940;
int nctemp13931 = (tp !=0);
int nctemp13942=nctemp13931;
while(nctemp13942)
{{
struct symbol* nctemp13948= tp;
nctempchar1* nctemp13950=SymGetarray(nctemp13948);
nctempchar1* nctemp13946= nctemp13950;
struct nctempchar1 *nctemp13953;
static struct nctempchar1 nctemp13954 = {{ 6}, (char*)"array\0"};
nctemp13953=&nctemp13954;
nctempchar1* nctemp13951= nctemp13953;
int nctemp13955=LibeStrcmp(nctemp13946,nctemp13951);
int nctemp13943 = (nctemp13955 ==1);
if(nctemp13943)
{
struct tree* nctemp13958= p;
struct nctempchar1 *nctemp13962;
static struct nctempchar1 nctemp13963 = {{ 9}, (char*)"c_void_p\0"};
nctemp13962=&nctemp13963;
nctempchar1* nctemp13960= nctemp13962;
int nctemp13964=CodeEs(nctemp13958,nctemp13960);
}
else{
struct symbol* nctemp13970= tp;
nctempchar1* nctemp13972=SymGetstruct(nctemp13970);
nctempchar1* nctemp13968= nctemp13972;
struct nctempchar1 *nctemp13975;
static struct nctempchar1 nctemp13976 = {{ 7}, (char*)"struct\0"};
nctemp13975=&nctemp13976;
nctempchar1* nctemp13973= nctemp13975;
int nctemp13977=LibeStrcmp(nctemp13968,nctemp13973);
int nctemp13965 = (nctemp13977 ==1);
if(nctemp13965)
{
struct tree* nctemp13980= p;
struct nctempchar1 *nctemp13984;
static struct nctempchar1 nctemp13985 = {{ 9}, (char*)"c_void_p\0"};
nctemp13984=&nctemp13985;
nctempchar1* nctemp13982= nctemp13984;
int nctemp13986=CodeEs(nctemp13980,nctemp13982);
}
else{
struct tree* nctemp13988= p;
struct nctempchar1 *nctemp13992;
static struct nctempchar1 nctemp13993 = {{ 3}, (char*)"c_\0"};
nctemp13992=&nctemp13993;
nctempchar1* nctemp13990= nctemp13992;
int nctemp13994=CodeEs(nctemp13988,nctemp13990);
struct tree* nctemp13996= p;
struct symbol* nctemp14000= tp;
nctempchar1* nctemp14002=SymGetype(nctemp14000);
nctempchar1* nctemp13998= nctemp14002;
int nctemp14003=CodeEs(nctemp13996,nctemp13998);
}
}
struct symbol* nctemp14007= tp;
struct symbol* nctemp14009=SymMvnext(nctemp14007);
int nctemp14004 = (nctemp14009 !=0);
if(nctemp14004)
{
struct tree* nctemp14012= p;
struct nctempchar1 *nctemp14016;
static struct nctempchar1 nctemp14017 = {{ 2}, (char*)",\0"};
nctemp14016=&nctemp14017;
nctempchar1* nctemp14014= nctemp14016;
int nctemp14018=CodeEs(nctemp14012,nctemp14014);
}
}
struct symbol* nctemp14026= tp;
struct symbol* nctemp14028=SymMvnext(nctemp14026);
tp =nctemp14028;
int nctemp14019 = (tp !=0);
nctemp13942=nctemp14019;}struct tree* nctemp14031= p;
struct nctempchar1 *nctemp14035;
static struct nctempchar1 nctemp14036 = {{ 2}, (char*)"]\0"};
nctemp14035=&nctemp14036;
nctempchar1* nctemp14033= nctemp14035;
int nctemp14037=CodeEs(nctemp14031,nctemp14033);
struct tree* nctemp14039= p;
struct nctempchar1 *nctemp14043;
static struct nctempchar1 nctemp14044 = {{ 3}, (char*)"\n\0"};
nctemp14043=&nctemp14044;
nctempchar1* nctemp14041= nctemp14043;
int nctemp14045=CodeEs(nctemp14039,nctemp14041);
struct tree* nctemp14047= functionode;
int nctemp14049=CodePyreturntype(nctemp14047);
tp = tbl;
struct symbol* nctemp14057= tp;
struct symbol* nctemp14059=SymMvnext(nctemp14057);
tp =nctemp14059;
int nctemp14050 = (tp !=0);
int nctemp14061=nctemp14050;
while(nctemp14061)
{{
struct symbol* nctemp14070= tp;
nctempchar1* nctemp14072=SymGetarray(nctemp14070);
nctempchar1* nctemp14068= nctemp14072;
struct nctempchar1 *nctemp14075;
static struct nctempchar1 nctemp14076 = {{ 6}, (char*)"array\0"};
nctemp14075=&nctemp14076;
nctempchar1* nctemp14073= nctemp14075;
int nctemp14077=LibeStrcmp(nctemp14068,nctemp14073);
int nctemp14065 = (nctemp14077 ==1);
struct symbol* nctemp14085= tp;
nctempchar1* nctemp14087=SymGetstruct(nctemp14085);
nctempchar1* nctemp14083= nctemp14087;
struct nctempchar1 *nctemp14090;
static struct nctempchar1 nctemp14091 = {{ 7}, (char*)"struct\0"};
nctemp14090=&nctemp14091;
nctempchar1* nctemp14088= nctemp14090;
int nctemp14092=LibeStrcmp(nctemp14083,nctemp14088);
int nctemp14080 = (nctemp14092 ==0);
int nctemp14062 = (nctemp14065 && nctemp14080);
if(nctemp14062)
{
struct symbol* nctemp14099= tp;
nctempchar1* nctemp14101=SymGetname(nctemp14099);
name=nctemp14101;
struct symbol* nctemp14107= tp;
nctempchar1* nctemp14109=SymGetype(nctemp14107);
type=nctemp14109;
struct symbol* nctemp14114= tp;
int nctemp14116=SymGetrank(nctemp14114);
rank =nctemp14116;
nctempchar1* nctemp14122= type;
int nctemp14125= rank;
nctempchar1* nctemp14127=CodeStorefunc(nctemp14122,nctemp14125);
storefunc=nctemp14127;
struct tree* nctemp14129= p;
int nctemp14131=CodeEind(nctemp14129);
struct tree* nctemp14133= p;
nctempchar1* nctemp14135= name;
int nctemp14138=CodeEs(nctemp14133,nctemp14135);
struct tree* nctemp14140= p;
struct nctempchar1 *nctemp14144;
static struct nctempchar1 nctemp14145 = {{ 6}, (char*)"_eps=\0"};
nctemp14144=&nctemp14145;
nctempchar1* nctemp14142= nctemp14144;
int nctemp14146=CodeEs(nctemp14140,nctemp14142);
struct tree* nctemp14148= p;
struct nctempchar1 *nctemp14152;
static struct nctempchar1 nctemp14153 = {{ 7}, (char*)"pyeps.\0"};
nctemp14152=&nctemp14153;
nctempchar1* nctemp14150= nctemp14152;
int nctemp14154=CodeEs(nctemp14148,nctemp14150);
struct tree* nctemp14156= p;
nctempchar1* nctemp14158= storefunc;
int nctemp14161=CodeEs(nctemp14156,nctemp14158);
struct tree* nctemp14163= p;
struct nctempchar1 *nctemp14167;
static struct nctempchar1 nctemp14168 = {{ 2}, (char*)"(\0"};
nctemp14167=&nctemp14168;
nctempchar1* nctemp14165= nctemp14167;
int nctemp14169=CodeEs(nctemp14163,nctemp14165);
struct tree* nctemp14171= p;
nctempchar1* nctemp14173= name;
int nctemp14176=CodeEs(nctemp14171,nctemp14173);
struct tree* nctemp14178= p;
struct nctempchar1 *nctemp14182;
static struct nctempchar1 nctemp14183 = {{ 2}, (char*)")\0"};
nctemp14182=&nctemp14183;
nctempchar1* nctemp14180= nctemp14182;
int nctemp14184=CodeEs(nctemp14178,nctemp14180);
struct tree* nctemp14186= p;
struct nctempchar1 *nctemp14190;
static struct nctempchar1 nctemp14191 = {{ 3}, (char*)"\n\0"};
nctemp14190=&nctemp14191;
nctempchar1* nctemp14188= nctemp14190;
int nctemp14192=CodeEs(nctemp14186,nctemp14188);
}
}
struct symbol* nctemp14200= tp;
struct symbol* nctemp14202=SymMvnext(nctemp14200);
tp =nctemp14202;
int nctemp14193 = (tp !=0);
nctemp14061=nctemp14193;}tp = tbl;
struct tree* nctemp14205= p;
int nctemp14207=CodeEind(nctemp14205);
struct tree* nctemp14209= p;
struct nctempchar1 *nctemp14213;
static struct nctempchar1 nctemp14214 = {{ 13}, (char*)"r_val=pylib.\0"};
nctemp14213=&nctemp14214;
nctempchar1* nctemp14211= nctemp14213;
int nctemp14215=CodeEs(nctemp14209,nctemp14211);
struct tree* nctemp14217= p;
nctempchar1* nctemp14219= fname;
int nctemp14222=CodeEs(nctemp14217,nctemp14219);
struct tree* nctemp14224= p;
struct nctempchar1 *nctemp14228;
static struct nctempchar1 nctemp14229 = {{ 2}, (char*)"(\0"};
nctemp14228=&nctemp14229;
nctempchar1* nctemp14226= nctemp14228;
int nctemp14230=CodeEs(nctemp14224,nctemp14226);
struct symbol* nctemp14238= tp;
struct symbol* nctemp14240=SymMvnext(nctemp14238);
tp =nctemp14240;
int nctemp14231 = (tp !=0);
int nctemp14242=nctemp14231;
while(nctemp14242)
{{
struct symbol* nctemp14251= tp;
nctempchar1* nctemp14253=SymGetarray(nctemp14251);
nctempchar1* nctemp14249= nctemp14253;
struct nctempchar1 *nctemp14256;
static struct nctempchar1 nctemp14257 = {{ 6}, (char*)"array\0"};
nctemp14256=&nctemp14257;
nctempchar1* nctemp14254= nctemp14256;
int nctemp14258=LibeStrcmp(nctemp14249,nctemp14254);
int nctemp14246 = (nctemp14258 ==1);
struct symbol* nctemp14266= tp;
nctempchar1* nctemp14268=SymGetstruct(nctemp14266);
nctempchar1* nctemp14264= nctemp14268;
struct nctempchar1 *nctemp14271;
static struct nctempchar1 nctemp14272 = {{ 7}, (char*)"struct\0"};
nctemp14271=&nctemp14272;
nctempchar1* nctemp14269= nctemp14271;
int nctemp14273=LibeStrcmp(nctemp14264,nctemp14269);
int nctemp14261 = (nctemp14273 ==0);
int nctemp14243 = (nctemp14246 && nctemp14261);
if(nctemp14243)
{
struct symbol* nctemp14280= tp;
nctempchar1* nctemp14282=SymGetname(nctemp14280);
name=nctemp14282;
struct tree* nctemp14284= p;
nctempchar1* nctemp14286= name;
int nctemp14289=CodeEs(nctemp14284,nctemp14286);
struct tree* nctemp14291= p;
struct nctempchar1 *nctemp14295;
static struct nctempchar1 nctemp14296 = {{ 5}, (char*)"_eps\0"};
nctemp14295=&nctemp14296;
nctempchar1* nctemp14293= nctemp14295;
int nctemp14297=CodeEs(nctemp14291,nctemp14293);
}
else{
struct tree* nctemp14299= p;
struct symbol* nctemp14303= tp;
nctempchar1* nctemp14305=SymGetname(nctemp14303);
nctempchar1* nctemp14301= nctemp14305;
int nctemp14306=CodeEs(nctemp14299,nctemp14301);
}
struct symbol* nctemp14310= tp;
struct symbol* nctemp14312=SymMvnext(nctemp14310);
int nctemp14307 = (nctemp14312 !=0);
if(nctemp14307)
{
struct tree* nctemp14315= p;
struct nctempchar1 *nctemp14319;
static struct nctempchar1 nctemp14320 = {{ 2}, (char*)",\0"};
nctemp14319=&nctemp14320;
nctempchar1* nctemp14317= nctemp14319;
int nctemp14321=CodeEs(nctemp14315,nctemp14317);
}
}
struct symbol* nctemp14329= tp;
struct symbol* nctemp14331=SymMvnext(nctemp14329);
tp =nctemp14331;
int nctemp14322 = (tp !=0);
nctemp14242=nctemp14322;}struct tree* nctemp14334= p;
struct nctempchar1 *nctemp14338;
static struct nctempchar1 nctemp14339 = {{ 2}, (char*)")\0"};
nctemp14338=&nctemp14339;
nctempchar1* nctemp14336= nctemp14338;
int nctemp14340=CodeEs(nctemp14334,nctemp14336);
struct tree* nctemp14342= p;
struct nctempchar1 *nctemp14346;
static struct nctempchar1 nctemp14347 = {{ 3}, (char*)"\n\0"};
nctemp14346=&nctemp14347;
nctempchar1* nctemp14344= nctemp14346;
int nctemp14348=CodeEs(nctemp14342,nctemp14344);
tp = tbl;
struct symbol* nctemp14356= tp;
struct symbol* nctemp14358=SymMvnext(nctemp14356);
tp =nctemp14358;
int nctemp14349 = (tp !=0);
int nctemp14360=nctemp14349;
while(nctemp14360)
{{
struct symbol* nctemp14369= tp;
nctempchar1* nctemp14371=SymGetarray(nctemp14369);
nctempchar1* nctemp14367= nctemp14371;
struct nctempchar1 *nctemp14374;
static struct nctempchar1 nctemp14375 = {{ 6}, (char*)"array\0"};
nctemp14374=&nctemp14375;
nctempchar1* nctemp14372= nctemp14374;
int nctemp14376=LibeStrcmp(nctemp14367,nctemp14372);
int nctemp14364 = (nctemp14376 ==1);
struct symbol* nctemp14384= tp;
nctempchar1* nctemp14386=SymGetstruct(nctemp14384);
nctempchar1* nctemp14382= nctemp14386;
struct nctempchar1 *nctemp14389;
static struct nctempchar1 nctemp14390 = {{ 7}, (char*)"struct\0"};
nctemp14389=&nctemp14390;
nctempchar1* nctemp14387= nctemp14389;
int nctemp14391=LibeStrcmp(nctemp14382,nctemp14387);
int nctemp14379 = (nctemp14391 ==0);
int nctemp14361 = (nctemp14364 && nctemp14379);
if(nctemp14361)
{
struct symbol* nctemp14398= tp;
nctempchar1* nctemp14400=SymGetname(nctemp14398);
name=nctemp14400;
struct symbol* nctemp14406= tp;
nctempchar1* nctemp14408=SymGetype(nctemp14406);
type=nctemp14408;
struct symbol* nctemp14413= tp;
int nctemp14415=SymGetrank(nctemp14413);
rank =nctemp14415;
nctempchar1* nctemp14421= type;
int nctemp14424= rank;
nctempchar1* nctemp14426=CodeGetfunc(nctemp14421,nctemp14424);
getfunc=nctemp14426;
struct tree* nctemp14428= p;
int nctemp14430=CodeEind(nctemp14428);
struct tree* nctemp14432= p;
nctempchar1* nctemp14434= name;
int nctemp14437=CodeEs(nctemp14432,nctemp14434);
struct tree* nctemp14439= p;
struct nctempchar1 *nctemp14443;
static struct nctempchar1 nctemp14444 = {{ 2}, (char*)"=\0"};
nctemp14443=&nctemp14444;
nctempchar1* nctemp14441= nctemp14443;
int nctemp14445=CodeEs(nctemp14439,nctemp14441);
struct tree* nctemp14447= p;
struct nctempchar1 *nctemp14451;
static struct nctempchar1 nctemp14452 = {{ 7}, (char*)"pyeps.\0"};
nctemp14451=&nctemp14452;
nctempchar1* nctemp14449= nctemp14451;
int nctemp14453=CodeEs(nctemp14447,nctemp14449);
struct tree* nctemp14455= p;
nctempchar1* nctemp14457= getfunc;
int nctemp14460=CodeEs(nctemp14455,nctemp14457);
struct tree* nctemp14462= p;
struct nctempchar1 *nctemp14466;
static struct nctempchar1 nctemp14467 = {{ 2}, (char*)"(\0"};
nctemp14466=&nctemp14467;
nctempchar1* nctemp14464= nctemp14466;
int nctemp14468=CodeEs(nctemp14462,nctemp14464);
struct tree* nctemp14470= p;
nctempchar1* nctemp14472= name;
int nctemp14475=CodeEs(nctemp14470,nctemp14472);
struct tree* nctemp14477= p;
struct nctempchar1 *nctemp14481;
static struct nctempchar1 nctemp14482 = {{ 5}, (char*)"_eps\0"};
nctemp14481=&nctemp14482;
nctempchar1* nctemp14479= nctemp14481;
int nctemp14483=CodeEs(nctemp14477,nctemp14479);
struct tree* nctemp14485= p;
struct nctempchar1 *nctemp14489;
static struct nctempchar1 nctemp14490 = {{ 4}, (char*)")\n\0"};
nctemp14489=&nctemp14490;
nctempchar1* nctemp14487= nctemp14489;
int nctemp14491=CodeEs(nctemp14485,nctemp14487);
}
}
struct symbol* nctemp14499= tp;
struct symbol* nctemp14501=SymMvnext(nctemp14499);
tp =nctemp14501;
int nctemp14492 = (tp !=0);
nctemp14360=nctemp14492;}struct tree* nctemp14504= functionode;
int nctemp14506=CodePyreturn(nctemp14504);
struct tree* nctemp14508= p;
int nctemp14510=CodeEind(nctemp14508);
struct tree* nctemp14512= p;
struct nctempchar1 *nctemp14516;
static struct nctempchar1 nctemp14517 = {{ 14}, (char*)"return rval\n\0"};
nctemp14516=&nctemp14517;
nctempchar1* nctemp14514= nctemp14516;
int nctemp14518=CodeEs(nctemp14512,nctemp14514);
int nctemp14520= fdcout;
int nctemp14522=CodeSetfdout(nctemp14520);
}
int CodeFdef (struct tree* p)
{
int nctemp14529=CodeGetarch();
int nctemp14526 = (nctemp14529 ==1);
int nctemp14535=CodeGetarch();
int nctemp14532 = (nctemp14535 ==4);
int nctemp14523 = (nctemp14526 || nctemp14532);
if(nctemp14523)
{
struct tree* nctemp14538= p;
int nctemp14540=CodeFdefcpu(nctemp14538);
int nctemp14544=CodeGetpython();
int nctemp14541 = (nctemp14544 ==1);
if(nctemp14541)
{
struct tree* nctemp14547= p;
int nctemp14549=CodeFdefwrapperpy(nctemp14547);
}
}
else{
int nctemp14553=CodeGetarch();
int nctemp14550 = (nctemp14553 ==2);
if(nctemp14550)
{
struct tree* nctemp14562= p;
struct tree* nctemp14564=PtreeMvchild(nctemp14562);
struct tree* nctemp14560= nctemp14564;
nctempchar1* nctemp14565=PtreeGetparallel(nctemp14560);
nctempchar1* nctemp14558= nctemp14565;
struct nctempchar1 *nctemp14568;
static struct nctempchar1 nctemp14569 = {{ 9}, (char*)"parallel\0"};
nctemp14568=&nctemp14569;
nctempchar1* nctemp14566= nctemp14568;
int nctemp14570=LibeStrcmp(nctemp14558,nctemp14566);
int nctemp14555 = (nctemp14570 ==1);
if(nctemp14555)
{
struct tree* nctemp14573= p;
int nctemp14575=CodeFdefgpu(nctemp14573);
struct tree* nctemp14577= p;
int nctemp14579=CodeFdewrappergpu(nctemp14577);
int nctemp14583=CodeGetpython();
int nctemp14580 = (nctemp14583 ==1);
if(nctemp14580)
{
struct tree* nctemp14586= p;
int nctemp14588=CodeFdefwrapperpy(nctemp14586);
}
}
else{
struct tree* nctemp14590= p;
int nctemp14592=CodeFdefcpu(nctemp14590);
int nctemp14596=CodeGetpython();
int nctemp14593 = (nctemp14596 ==1);
if(nctemp14593)
{
struct tree* nctemp14599= p;
int nctemp14601=CodeFdefwrapperpy(nctemp14599);
}
}
}
else{
int nctemp14605=CodeGetarch();
int nctemp14602 = (nctemp14605 ==3);
if(nctemp14602)
{
struct tree* nctemp14612= p;
nctempchar1* nctemp14614=PtreeGetparallel(nctemp14612);
nctempchar1* nctemp14610= nctemp14614;
struct nctempchar1 *nctemp14617;
static struct nctempchar1 nctemp14618 = {{ 9}, (char*)"parallel\0"};
nctemp14617=&nctemp14618;
nctempchar1* nctemp14615= nctemp14617;
int nctemp14619=LibeStrcmp(nctemp14610,nctemp14615);
int nctemp14607 = (nctemp14619 ==1);
if(nctemp14607)
{
struct tree* nctemp14622= p;
int nctemp14624=CodeFdefgpu(nctemp14622);
struct tree* nctemp14626= p;
int nctemp14628=CodeFdewrappergpu(nctemp14626);
int nctemp14632=CodeGetpython();
int nctemp14629 = (nctemp14632 ==1);
if(nctemp14629)
{
struct tree* nctemp14635= p;
int nctemp14637=CodeFdefwrapperpy(nctemp14635);
}
}
else{
struct tree* nctemp14639= p;
int nctemp14641=CodeFdefcpu(nctemp14639);
int nctemp14645=CodeGetpython();
int nctemp14642 = (nctemp14645 ==1);
if(nctemp14642)
{
struct tree* nctemp14648= p;
int nctemp14650=CodeFdefwrapperpy(nctemp14648);
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
struct nctempchar1 *nctemp14658;
static struct nctempchar1 nctemp14659 = {{ 6}, (char*)"dummy\0"};
nctemp14658=&nctemp14659;
nctempchar1* nctemp14656= nctemp14658;
struct nctempchar1 *nctemp14662;
static struct nctempchar1 nctemp14663 = {{ 6}, (char*)"dummy\0"};
nctemp14662=&nctemp14663;
nctempchar1* nctemp14660= nctemp14662;
struct tree* nctemp14664=PtreeMknode(nctemp14656,nctemp14660);
p =nctemp14664;
struct tree* nctemp14666= p;
int nctemp14668= 1;
int nctemp14670=PtreeSetline(nctemp14666,nctemp14668);
struct tree* nctemp14672= p;
struct nctempchar1 *nctemp14676;
static struct nctempchar1 nctemp14677 = {{ 34}, (char*)"//  Translated by epsc  version: \0"};
nctemp14676=&nctemp14677;
nctempchar1* nctemp14674= nctemp14676;
int nctemp14678=CodeEs(nctemp14672,nctemp14674);
struct tree* nctemp14680= p;
nctempchar1* nctemp14684=LibeDate();
nctempchar1* nctemp14682= nctemp14684;
int nctemp14685=CodeEs(nctemp14680,nctemp14682);
struct tree* nctemp14687= p;
struct nctempchar1 *nctemp14691;
static struct nctempchar1 nctemp14692 = {{ 3}, (char*)"\n\0"};
nctemp14691=&nctemp14692;
nctempchar1* nctemp14689= nctemp14691;
int nctemp14693=CodeEs(nctemp14687,nctemp14689);
struct tree* nctemp14695= p;
int nctemp14697= 2;
int nctemp14699=PtreeSetline(nctemp14695,nctemp14697);
struct tree* nctemp14701= p;
int nctemp14703= 3;
int nctemp14705=PtreeSetline(nctemp14701,nctemp14703);
struct tree* nctemp14707= p;
int nctemp14709= 4;
int nctemp14711=PtreeSetline(nctemp14707,nctemp14709);
struct tree* nctemp14713= p;
struct nctempchar1 *nctemp14717;
static struct nctempchar1 nctemp14718 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp14717=&nctemp14718;
nctempchar1* nctemp14715= nctemp14717;
int nctemp14719=CodeEs(nctemp14713,nctemp14715);
struct tree* nctemp14721= p;
struct nctempchar1 *nctemp14725;
static struct nctempchar1 nctemp14726 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14725=&nctemp14726;
nctempchar1* nctemp14723= nctemp14725;
int nctemp14727=CodeEs(nctemp14721,nctemp14723);
struct tree* nctemp14729= p;
struct nctempchar1 *nctemp14733;
static struct nctempchar1 nctemp14734 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp14733=&nctemp14734;
nctempchar1* nctemp14731= nctemp14733;
int nctemp14735=CodeEs(nctemp14729,nctemp14731);
struct tree* nctemp14737= p;
struct nctempchar1 *nctemp14741;
static struct nctempchar1 nctemp14742 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14741=&nctemp14742;
nctempchar1* nctemp14739= nctemp14741;
int nctemp14743=CodeEs(nctemp14737,nctemp14739);
struct tree* nctemp14745= p;
int nctemp14747= 3;
int nctemp14749=PtreeSetline(nctemp14745,nctemp14747);
struct tree* nctemp14751= p;
struct nctempchar1 *nctemp14755;
static struct nctempchar1 nctemp14756 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14755=&nctemp14756;
nctempchar1* nctemp14753= nctemp14755;
int nctemp14757=CodeEs(nctemp14751,nctemp14753);
struct tree* nctemp14759= p;
int nctemp14761= 5;
int nctemp14763=PtreeSetline(nctemp14759,nctemp14761);
struct tree* nctemp14765= p;
struct nctempchar1 *nctemp14769;
static struct nctempchar1 nctemp14770 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14769=&nctemp14770;
nctempchar1* nctemp14767= nctemp14769;
int nctemp14771=CodeEs(nctemp14765,nctemp14767);
struct tree* nctemp14773= p;
int nctemp14775= 7;
int nctemp14777=PtreeSetline(nctemp14773,nctemp14775);
struct tree* nctemp14779= p;
struct nctempchar1 *nctemp14783;
static struct nctempchar1 nctemp14784 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14783=&nctemp14784;
nctempchar1* nctemp14781= nctemp14783;
int nctemp14785=CodeEs(nctemp14779,nctemp14781);
struct tree* nctemp14787= p;
int nctemp14789= 7;
int nctemp14791=PtreeSetline(nctemp14787,nctemp14789);
struct tree* nctemp14793= p;
struct nctempchar1 *nctemp14797;
static struct nctempchar1 nctemp14798 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14797=&nctemp14798;
nctempchar1* nctemp14795= nctemp14797;
int nctemp14799=CodeEs(nctemp14793,nctemp14795);
struct tree* nctemp14801= p;
int nctemp14803= 8;
int nctemp14805=PtreeSetline(nctemp14801,nctemp14803);
int nctemp14809=CodeArraycheck();
int nctemp14806 = (nctemp14809 ==1);
if(nctemp14806)
{
struct tree* nctemp14812= p;
struct nctempchar1 *nctemp14816;
static struct nctempchar1 nctemp14817 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp14816=&nctemp14817;
nctempchar1* nctemp14814= nctemp14816;
int nctemp14818=CodeEs(nctemp14812,nctemp14814);
struct tree* nctemp14820= p;
struct nctempchar1 *nctemp14824;
static struct nctempchar1 nctemp14825 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp14824=&nctemp14825;
nctempchar1* nctemp14822= nctemp14824;
int nctemp14826=CodeEs(nctemp14820,nctemp14822);
struct tree* nctemp14828= p;
int nctemp14830= 8;
int nctemp14832=PtreeSetline(nctemp14828,nctemp14830);
}
struct tree* nctemp14834= p;
struct nctempchar1 *nctemp14838;
static struct nctempchar1 nctemp14839 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14838=&nctemp14839;
nctempchar1* nctemp14836= nctemp14838;
int nctemp14840=CodeEs(nctemp14834,nctemp14836);
struct tree* nctemp14842= p;
int nctemp14844= 10;
int nctemp14846=PtreeSetline(nctemp14842,nctemp14844);
struct tree* nctemp14848= p;
struct nctempchar1 *nctemp14852;
static struct nctempchar1 nctemp14853 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14852=&nctemp14853;
nctempchar1* nctemp14850= nctemp14852;
int nctemp14854=CodeEs(nctemp14848,nctemp14850);
struct tree* nctemp14856= p;
int nctemp14858= 10;
int nctemp14860=PtreeSetline(nctemp14856,nctemp14858);
struct tree* nctemp14862= p;
struct nctempchar1 *nctemp14866;
static struct nctempchar1 nctemp14867 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14866=&nctemp14867;
nctempchar1* nctemp14864= nctemp14866;
int nctemp14868=CodeEs(nctemp14862,nctemp14864);
struct tree* nctemp14870= p;
int nctemp14872= 12;
int nctemp14874=PtreeSetline(nctemp14870,nctemp14872);
struct tree* nctemp14876= p;
struct nctempchar1 *nctemp14880;
static struct nctempchar1 nctemp14881 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14880=&nctemp14881;
nctempchar1* nctemp14878= nctemp14880;
int nctemp14882=CodeEs(nctemp14876,nctemp14878);
struct tree* nctemp14884= p;
int nctemp14886= 13;
int nctemp14888=PtreeSetline(nctemp14884,nctemp14886);
struct tree* nctemp14890= p;
struct nctempchar1 *nctemp14894;
static struct nctempchar1 nctemp14895 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14894=&nctemp14895;
nctempchar1* nctemp14892= nctemp14894;
int nctemp14896=CodeEs(nctemp14890,nctemp14892);
struct tree* nctemp14898= p;
int nctemp14900= 14;
int nctemp14902=PtreeSetline(nctemp14898,nctemp14900);
struct tree* nctemp14904= p;
struct nctempchar1 *nctemp14908;
static struct nctempchar1 nctemp14909 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14908=&nctemp14909;
nctempchar1* nctemp14906= nctemp14908;
int nctemp14910=CodeEs(nctemp14904,nctemp14906);
struct tree* nctemp14912= p;
int nctemp14914= 15;
int nctemp14916=PtreeSetline(nctemp14912,nctemp14914);
struct tree* nctemp14918= p;
struct nctempchar1 *nctemp14922;
static struct nctempchar1 nctemp14923 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14922=&nctemp14923;
nctempchar1* nctemp14920= nctemp14922;
int nctemp14924=CodeEs(nctemp14918,nctemp14920);
struct tree* nctemp14926= p;
int nctemp14928= 16;
int nctemp14930=PtreeSetline(nctemp14926,nctemp14928);
struct tree* nctemp14932= p;
struct nctempchar1 *nctemp14936;
static struct nctempchar1 nctemp14937 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14936=&nctemp14937;
nctempchar1* nctemp14934= nctemp14936;
int nctemp14938=CodeEs(nctemp14932,nctemp14934);
struct tree* nctemp14940= p;
int nctemp14942= 17;
int nctemp14944=PtreeSetline(nctemp14940,nctemp14942);
struct tree* nctemp14946= p;
struct nctempchar1 *nctemp14950;
static struct nctempchar1 nctemp14951 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14950=&nctemp14951;
nctempchar1* nctemp14948= nctemp14950;
int nctemp14952=CodeEs(nctemp14946,nctemp14948);
struct tree* nctemp14954= p;
int nctemp14956= 18;
int nctemp14958=PtreeSetline(nctemp14954,nctemp14956);
struct tree* nctemp14960= p;
struct nctempchar1 *nctemp14964;
static struct nctempchar1 nctemp14965 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14964=&nctemp14965;
nctempchar1* nctemp14962= nctemp14964;
int nctemp14966=CodeEs(nctemp14960,nctemp14962);
struct tree* nctemp14968= p;
int nctemp14970= 19;
int nctemp14972=PtreeSetline(nctemp14968,nctemp14970);
struct tree* nctemp14974= p;
struct nctempchar1 *nctemp14978;
static struct nctempchar1 nctemp14979 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14978=&nctemp14979;
nctempchar1* nctemp14976= nctemp14978;
int nctemp14980=CodeEs(nctemp14974,nctemp14976);
struct tree* nctemp14982= p;
int nctemp14984= 20;
int nctemp14986=PtreeSetline(nctemp14982,nctemp14984);
struct tree* nctemp14988= p;
struct nctempchar1 *nctemp14992;
static struct nctempchar1 nctemp14993 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14992=&nctemp14993;
nctempchar1* nctemp14990= nctemp14992;
int nctemp14994=CodeEs(nctemp14988,nctemp14990);
struct tree* nctemp14996= p;
struct nctempchar1 *nctemp15000;
static struct nctempchar1 nctemp15001 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15000=&nctemp15001;
nctempchar1* nctemp14998= nctemp15000;
int nctemp15002=CodeEs(nctemp14996,nctemp14998);
struct tree* nctemp15004= p;
struct nctempchar1 *nctemp15008;
static struct nctempchar1 nctemp15009 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15008=&nctemp15009;
nctempchar1* nctemp15006= nctemp15008;
int nctemp15010=CodeEs(nctemp15004,nctemp15006);
struct tree* nctemp15012= p;
struct nctempchar1 *nctemp15016;
static struct nctempchar1 nctemp15017 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp15016=&nctemp15017;
nctempchar1* nctemp15014= nctemp15016;
int nctemp15018=CodeEs(nctemp15012,nctemp15014);
struct tree* nctemp15020= p;
struct nctempchar1 *nctemp15024;
static struct nctempchar1 nctemp15025 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp15024=&nctemp15025;
nctempchar1* nctemp15022= nctemp15024;
int nctemp15026=CodeEs(nctemp15020,nctemp15022);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp15034;
static struct nctempchar1 nctemp15035 = {{ 6}, (char*)"dummy\0"};
nctemp15034=&nctemp15035;
nctempchar1* nctemp15032= nctemp15034;
struct nctempchar1 *nctemp15038;
static struct nctempchar1 nctemp15039 = {{ 6}, (char*)"dummy\0"};
nctemp15038=&nctemp15039;
nctempchar1* nctemp15036= nctemp15038;
struct tree* nctemp15040=PtreeMknode(nctemp15032,nctemp15036);
p =nctemp15040;
struct tree* nctemp15042= p;
int nctemp15044= 1;
int nctemp15046=PtreeSetline(nctemp15042,nctemp15044);
struct tree* nctemp15048= p;
struct nctempchar1 *nctemp15052;
static struct nctempchar1 nctemp15053 = {{ 24}, (char*)"//  Translated by eps\n\0"};
nctemp15052=&nctemp15053;
nctempchar1* nctemp15050= nctemp15052;
int nctemp15054=CodeEs(nctemp15048,nctemp15050);
struct tree* nctemp15056= p;
int nctemp15058= 2;
int nctemp15060=PtreeSetline(nctemp15056,nctemp15058);
struct tree* nctemp15062= p;
int nctemp15064= 3;
int nctemp15066=PtreeSetline(nctemp15062,nctemp15064);
struct tree* nctemp15068= p;
struct nctempchar1 *nctemp15072;
static struct nctempchar1 nctemp15073 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp15072=&nctemp15073;
nctempchar1* nctemp15070= nctemp15072;
int nctemp15074=CodeEs(nctemp15068,nctemp15070);
struct tree* nctemp15076= p;
struct nctempchar1 *nctemp15080;
static struct nctempchar1 nctemp15081 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp15080=&nctemp15081;
nctempchar1* nctemp15078= nctemp15080;
int nctemp15082=CodeEs(nctemp15076,nctemp15078);
struct tree* nctemp15084= p;
int nctemp15086= 3;
int nctemp15088=PtreeSetline(nctemp15084,nctemp15086);
struct tree* nctemp15090= p;
struct nctempchar1 *nctemp15094;
static struct nctempchar1 nctemp15095 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp15094=&nctemp15095;
nctempchar1* nctemp15092= nctemp15094;
int nctemp15096=CodeEs(nctemp15090,nctemp15092);
struct tree* nctemp15098= p;
int nctemp15100= 5;
int nctemp15102=PtreeSetline(nctemp15098,nctemp15100);
struct tree* nctemp15104= p;
struct nctempchar1 *nctemp15108;
static struct nctempchar1 nctemp15109 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp15108=&nctemp15109;
nctempchar1* nctemp15106= nctemp15108;
int nctemp15110=CodeEs(nctemp15104,nctemp15106);
struct tree* nctemp15112= p;
int nctemp15114= 7;
int nctemp15116=PtreeSetline(nctemp15112,nctemp15114);
struct tree* nctemp15118= p;
struct nctempchar1 *nctemp15122;
static struct nctempchar1 nctemp15123 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp15122=&nctemp15123;
nctempchar1* nctemp15120= nctemp15122;
int nctemp15124=CodeEs(nctemp15118,nctemp15120);
struct tree* nctemp15126= p;
int nctemp15128= 7;
int nctemp15130=PtreeSetline(nctemp15126,nctemp15128);
struct tree* nctemp15132= p;
struct nctempchar1 *nctemp15136;
static struct nctempchar1 nctemp15137 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp15136=&nctemp15137;
nctempchar1* nctemp15134= nctemp15136;
int nctemp15138=CodeEs(nctemp15132,nctemp15134);
struct tree* nctemp15140= p;
int nctemp15142= 8;
int nctemp15144=PtreeSetline(nctemp15140,nctemp15142);
int nctemp15148=CodeArraycheck();
int nctemp15145 = (nctemp15148 ==1);
if(nctemp15145)
{
struct tree* nctemp15151= p;
struct nctempchar1 *nctemp15155;
static struct nctempchar1 nctemp15156 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp15155=&nctemp15156;
nctempchar1* nctemp15153= nctemp15155;
int nctemp15157=CodeEs(nctemp15151,nctemp15153);
struct tree* nctemp15159= p;
struct nctempchar1 *nctemp15163;
static struct nctempchar1 nctemp15164 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp15163=&nctemp15164;
nctempchar1* nctemp15161= nctemp15163;
int nctemp15165=CodeEs(nctemp15159,nctemp15161);
struct tree* nctemp15167= p;
int nctemp15169= 8;
int nctemp15171=PtreeSetline(nctemp15167,nctemp15169);
}
struct tree* nctemp15173= p;
struct nctempchar1 *nctemp15177;
static struct nctempchar1 nctemp15178 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp15177=&nctemp15178;
nctempchar1* nctemp15175= nctemp15177;
int nctemp15179=CodeEs(nctemp15173,nctemp15175);
struct tree* nctemp15181= p;
int nctemp15183= 10;
int nctemp15185=PtreeSetline(nctemp15181,nctemp15183);
struct tree* nctemp15187= p;
struct nctempchar1 *nctemp15191;
static struct nctempchar1 nctemp15192 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp15191=&nctemp15192;
nctempchar1* nctemp15189= nctemp15191;
int nctemp15193=CodeEs(nctemp15187,nctemp15189);
struct tree* nctemp15195= p;
int nctemp15197= 10;
int nctemp15199=PtreeSetline(nctemp15195,nctemp15197);
struct tree* nctemp15201= p;
struct nctempchar1 *nctemp15205;
static struct nctempchar1 nctemp15206 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp15205=&nctemp15206;
nctempchar1* nctemp15203= nctemp15205;
int nctemp15207=CodeEs(nctemp15201,nctemp15203);
struct tree* nctemp15209= p;
int nctemp15211= 12;
int nctemp15213=PtreeSetline(nctemp15209,nctemp15211);
struct tree* nctemp15215= p;
struct nctempchar1 *nctemp15219;
static struct nctempchar1 nctemp15220 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp15219=&nctemp15220;
nctempchar1* nctemp15217= nctemp15219;
int nctemp15221=CodeEs(nctemp15215,nctemp15217);
struct tree* nctemp15223= p;
int nctemp15225= 13;
int nctemp15227=PtreeSetline(nctemp15223,nctemp15225);
struct tree* nctemp15229= p;
struct nctempchar1 *nctemp15233;
static struct nctempchar1 nctemp15234 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp15233=&nctemp15234;
nctempchar1* nctemp15231= nctemp15233;
int nctemp15235=CodeEs(nctemp15229,nctemp15231);
struct tree* nctemp15237= p;
int nctemp15239= 14;
int nctemp15241=PtreeSetline(nctemp15237,nctemp15239);
struct tree* nctemp15243= p;
struct nctempchar1 *nctemp15247;
static struct nctempchar1 nctemp15248 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp15247=&nctemp15248;
nctempchar1* nctemp15245= nctemp15247;
int nctemp15249=CodeEs(nctemp15243,nctemp15245);
struct tree* nctemp15251= p;
int nctemp15253= 15;
int nctemp15255=PtreeSetline(nctemp15251,nctemp15253);
struct tree* nctemp15257= p;
struct nctempchar1 *nctemp15261;
static struct nctempchar1 nctemp15262 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp15261=&nctemp15262;
nctempchar1* nctemp15259= nctemp15261;
int nctemp15263=CodeEs(nctemp15257,nctemp15259);
struct tree* nctemp15265= p;
int nctemp15267= 16;
int nctemp15269=PtreeSetline(nctemp15265,nctemp15267);
struct tree* nctemp15271= p;
struct nctempchar1 *nctemp15275;
static struct nctempchar1 nctemp15276 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp15275=&nctemp15276;
nctempchar1* nctemp15273= nctemp15275;
int nctemp15277=CodeEs(nctemp15271,nctemp15273);
struct tree* nctemp15279= p;
int nctemp15281= 17;
int nctemp15283=PtreeSetline(nctemp15279,nctemp15281);
struct tree* nctemp15285= p;
struct nctempchar1 *nctemp15289;
static struct nctempchar1 nctemp15290 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp15289=&nctemp15290;
nctempchar1* nctemp15287= nctemp15289;
int nctemp15291=CodeEs(nctemp15285,nctemp15287);
struct tree* nctemp15293= p;
int nctemp15295= 18;
int nctemp15297=PtreeSetline(nctemp15293,nctemp15295);
struct tree* nctemp15299= p;
struct nctempchar1 *nctemp15303;
static struct nctempchar1 nctemp15304 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp15303=&nctemp15304;
nctempchar1* nctemp15301= nctemp15303;
int nctemp15305=CodeEs(nctemp15299,nctemp15301);
struct tree* nctemp15307= p;
int nctemp15309= 19;
int nctemp15311=PtreeSetline(nctemp15307,nctemp15309);
struct tree* nctemp15313= p;
struct nctempchar1 *nctemp15317;
static struct nctempchar1 nctemp15318 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp15317=&nctemp15318;
nctempchar1* nctemp15315= nctemp15317;
int nctemp15319=CodeEs(nctemp15313,nctemp15315);
struct tree* nctemp15321= p;
int nctemp15323= 20;
int nctemp15325=PtreeSetline(nctemp15321,nctemp15323);
struct tree* nctemp15327= p;
struct nctempchar1 *nctemp15331;
static struct nctempchar1 nctemp15332 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp15331=&nctemp15332;
nctempchar1* nctemp15329= nctemp15331;
int nctemp15333=CodeEs(nctemp15327,nctemp15329);
struct tree* nctemp15335= p;
struct nctempchar1 *nctemp15339;
static struct nctempchar1 nctemp15340 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp15339=&nctemp15340;
nctempchar1* nctemp15337= nctemp15339;
int nctemp15341=CodeEs(nctemp15335,nctemp15337);
struct tree* nctemp15343= p;
struct nctempchar1 *nctemp15347;
static struct nctempchar1 nctemp15348 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15347=&nctemp15348;
nctempchar1* nctemp15345= nctemp15347;
int nctemp15349=CodeEs(nctemp15343,nctemp15345);
struct tree* nctemp15351= p;
struct nctempchar1 *nctemp15355;
static struct nctempchar1 nctemp15356 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15355=&nctemp15356;
nctempchar1* nctemp15353= nctemp15355;
int nctemp15357=CodeEs(nctemp15351,nctemp15353);
struct tree* nctemp15359= p;
struct nctempchar1 *nctemp15363;
static struct nctempchar1 nctemp15364 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp15363=&nctemp15364;
nctempchar1* nctemp15361= nctemp15363;
int nctemp15365=CodeEs(nctemp15359,nctemp15361);
struct tree* nctemp15367= p;
struct nctempchar1 *nctemp15371;
static struct nctempchar1 nctemp15372 = {{ 3}, (char*)"\n\0"};
nctemp15371=&nctemp15372;
nctempchar1* nctemp15369= nctemp15371;
int nctemp15373=CodeEs(nctemp15367,nctemp15369);
struct tree* nctemp15375= p;
struct nctempchar1 *nctemp15379;
static struct nctempchar1 nctemp15380 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp15379=&nctemp15380;
nctempchar1* nctemp15377= nctemp15379;
int nctemp15381=CodeEs(nctemp15375,nctemp15377);
struct tree* nctemp15383= p;
struct nctempchar1 *nctemp15387;
static struct nctempchar1 nctemp15388 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp15387=&nctemp15388;
nctempchar1* nctemp15385= nctemp15387;
int nctemp15389=CodeEs(nctemp15383,nctemp15385);
struct tree* nctemp15391= p;
struct nctempchar1 *nctemp15395;
static struct nctempchar1 nctemp15396 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp15395=&nctemp15396;
nctempchar1* nctemp15393= nctemp15395;
int nctemp15397=CodeEs(nctemp15391,nctemp15393);
struct tree* nctemp15399= p;
struct nctempchar1 *nctemp15403;
static struct nctempchar1 nctemp15404 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp15403=&nctemp15404;
nctempchar1* nctemp15401= nctemp15403;
int nctemp15405=CodeEs(nctemp15399,nctemp15401);
struct tree* nctemp15407= p;
struct nctempchar1 *nctemp15411;
static struct nctempchar1 nctemp15412 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp15411=&nctemp15412;
nctempchar1* nctemp15409= nctemp15411;
int nctemp15413=CodeEs(nctemp15407,nctemp15409);
struct tree* nctemp15415= p;
struct nctempchar1 *nctemp15419;
static struct nctempchar1 nctemp15420 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp15419=&nctemp15420;
nctempchar1* nctemp15417= nctemp15419;
int nctemp15421=CodeEs(nctemp15415,nctemp15417);
struct tree* nctemp15423= p;
struct nctempchar1 *nctemp15427;
static struct nctempchar1 nctemp15428 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp15427=&nctemp15428;
nctempchar1* nctemp15425= nctemp15427;
int nctemp15429=CodeEs(nctemp15423,nctemp15425);
struct tree* nctemp15431= p;
struct nctempchar1 *nctemp15435;
static struct nctempchar1 nctemp15436 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp15435=&nctemp15436;
nctempchar1* nctemp15433= nctemp15435;
int nctemp15437=CodeEs(nctemp15431,nctemp15433);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp15445;
static struct nctempchar1 nctemp15446 = {{ 6}, (char*)"dummy\0"};
nctemp15445=&nctemp15446;
nctempchar1* nctemp15443= nctemp15445;
struct nctempchar1 *nctemp15449;
static struct nctempchar1 nctemp15450 = {{ 6}, (char*)"dummy\0"};
nctemp15449=&nctemp15450;
nctempchar1* nctemp15447= nctemp15449;
struct tree* nctemp15451=PtreeMknode(nctemp15443,nctemp15447);
p =nctemp15451;
struct tree* nctemp15453= p;
int nctemp15455= 1;
int nctemp15457=PtreeSetline(nctemp15453,nctemp15455);
struct tree* nctemp15459= p;
struct nctempchar1 *nctemp15463;
static struct nctempchar1 nctemp15464 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp15463=&nctemp15464;
nctempchar1* nctemp15461= nctemp15463;
int nctemp15465=CodeEs(nctemp15459,nctemp15461);
struct tree* nctemp15467= p;
int nctemp15469= 2;
int nctemp15471=PtreeSetline(nctemp15467,nctemp15469);
struct tree* nctemp15473= p;
int nctemp15475= 3;
int nctemp15477=PtreeSetline(nctemp15473,nctemp15475);
struct tree* nctemp15479= p;
struct nctempchar1 *nctemp15483;
static struct nctempchar1 nctemp15484 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp15483=&nctemp15484;
nctempchar1* nctemp15481= nctemp15483;
int nctemp15485=CodeEs(nctemp15479,nctemp15481);
struct tree* nctemp15487= p;
int nctemp15489= 3;
int nctemp15491=PtreeSetline(nctemp15487,nctemp15489);
struct tree* nctemp15493= p;
struct nctempchar1 *nctemp15497;
static struct nctempchar1 nctemp15498 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp15497=&nctemp15498;
nctempchar1* nctemp15495= nctemp15497;
int nctemp15499=CodeEs(nctemp15493,nctemp15495);
struct tree* nctemp15501= p;
int nctemp15503= 5;
int nctemp15505=PtreeSetline(nctemp15501,nctemp15503);
struct tree* nctemp15507= p;
struct nctempchar1 *nctemp15511;
static struct nctempchar1 nctemp15512 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp15511=&nctemp15512;
nctempchar1* nctemp15509= nctemp15511;
int nctemp15513=CodeEs(nctemp15507,nctemp15509);
struct tree* nctemp15515= p;
int nctemp15517= 7;
int nctemp15519=PtreeSetline(nctemp15515,nctemp15517);
struct tree* nctemp15521= p;
struct nctempchar1 *nctemp15525;
static struct nctempchar1 nctemp15526 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp15525=&nctemp15526;
nctempchar1* nctemp15523= nctemp15525;
int nctemp15527=CodeEs(nctemp15521,nctemp15523);
struct tree* nctemp15529= p;
int nctemp15531= 7;
int nctemp15533=PtreeSetline(nctemp15529,nctemp15531);
struct tree* nctemp15535= p;
struct nctempchar1 *nctemp15539;
static struct nctempchar1 nctemp15540 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp15539=&nctemp15540;
nctempchar1* nctemp15537= nctemp15539;
int nctemp15541=CodeEs(nctemp15535,nctemp15537);
struct tree* nctemp15543= p;
int nctemp15545= 8;
int nctemp15547=PtreeSetline(nctemp15543,nctemp15545);
int nctemp15551=CodeArraycheck();
int nctemp15548 = (nctemp15551 ==1);
if(nctemp15548)
{
struct tree* nctemp15554= p;
struct nctempchar1 *nctemp15558;
static struct nctempchar1 nctemp15559 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp15558=&nctemp15559;
nctempchar1* nctemp15556= nctemp15558;
int nctemp15560=CodeEs(nctemp15554,nctemp15556);
struct tree* nctemp15562= p;
int nctemp15564= 8;
int nctemp15566=PtreeSetline(nctemp15562,nctemp15564);
}
struct tree* nctemp15568= p;
struct nctempchar1 *nctemp15572;
static struct nctempchar1 nctemp15573 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp15572=&nctemp15573;
nctempchar1* nctemp15570= nctemp15572;
int nctemp15574=CodeEs(nctemp15568,nctemp15570);
struct tree* nctemp15576= p;
int nctemp15578= 10;
int nctemp15580=PtreeSetline(nctemp15576,nctemp15578);
struct tree* nctemp15582= p;
struct nctempchar1 *nctemp15586;
static struct nctempchar1 nctemp15587 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp15586=&nctemp15587;
nctempchar1* nctemp15584= nctemp15586;
int nctemp15588=CodeEs(nctemp15582,nctemp15584);
struct tree* nctemp15590= p;
int nctemp15592= 10;
int nctemp15594=PtreeSetline(nctemp15590,nctemp15592);
struct tree* nctemp15596= p;
struct nctempchar1 *nctemp15600;
static struct nctempchar1 nctemp15601 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp15600=&nctemp15601;
nctempchar1* nctemp15598= nctemp15600;
int nctemp15602=CodeEs(nctemp15596,nctemp15598);
struct tree* nctemp15604= p;
int nctemp15606= 12;
int nctemp15608=PtreeSetline(nctemp15604,nctemp15606);
struct tree* nctemp15610= p;
struct nctempchar1 *nctemp15614;
static struct nctempchar1 nctemp15615 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp15614=&nctemp15615;
nctempchar1* nctemp15612= nctemp15614;
int nctemp15616=CodeEs(nctemp15610,nctemp15612);
struct tree* nctemp15618= p;
int nctemp15620= 13;
int nctemp15622=PtreeSetline(nctemp15618,nctemp15620);
struct tree* nctemp15624= p;
struct nctempchar1 *nctemp15628;
static struct nctempchar1 nctemp15629 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp15628=&nctemp15629;
nctempchar1* nctemp15626= nctemp15628;
int nctemp15630=CodeEs(nctemp15624,nctemp15626);
struct tree* nctemp15632= p;
int nctemp15634= 14;
int nctemp15636=PtreeSetline(nctemp15632,nctemp15634);
struct tree* nctemp15638= p;
struct nctempchar1 *nctemp15642;
static struct nctempchar1 nctemp15643 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp15642=&nctemp15643;
nctempchar1* nctemp15640= nctemp15642;
int nctemp15644=CodeEs(nctemp15638,nctemp15640);
struct tree* nctemp15646= p;
int nctemp15648= 15;
int nctemp15650=PtreeSetline(nctemp15646,nctemp15648);
struct tree* nctemp15652= p;
struct nctempchar1 *nctemp15656;
static struct nctempchar1 nctemp15657 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp15656=&nctemp15657;
nctempchar1* nctemp15654= nctemp15656;
int nctemp15658=CodeEs(nctemp15652,nctemp15654);
struct tree* nctemp15660= p;
int nctemp15662= 16;
int nctemp15664=PtreeSetline(nctemp15660,nctemp15662);
struct tree* nctemp15666= p;
struct nctempchar1 *nctemp15670;
static struct nctempchar1 nctemp15671 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp15670=&nctemp15671;
nctempchar1* nctemp15668= nctemp15670;
int nctemp15672=CodeEs(nctemp15666,nctemp15668);
struct tree* nctemp15674= p;
int nctemp15676= 17;
int nctemp15678=PtreeSetline(nctemp15674,nctemp15676);
struct tree* nctemp15680= p;
struct nctempchar1 *nctemp15684;
static struct nctempchar1 nctemp15685 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp15684=&nctemp15685;
nctempchar1* nctemp15682= nctemp15684;
int nctemp15686=CodeEs(nctemp15680,nctemp15682);
struct tree* nctemp15688= p;
int nctemp15690= 18;
int nctemp15692=PtreeSetline(nctemp15688,nctemp15690);
struct tree* nctemp15694= p;
struct nctempchar1 *nctemp15698;
static struct nctempchar1 nctemp15699 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp15698=&nctemp15699;
nctempchar1* nctemp15696= nctemp15698;
int nctemp15700=CodeEs(nctemp15694,nctemp15696);
struct tree* nctemp15702= p;
int nctemp15704= 19;
int nctemp15706=PtreeSetline(nctemp15702,nctemp15704);
struct tree* nctemp15708= p;
struct nctempchar1 *nctemp15712;
static struct nctempchar1 nctemp15713 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp15712=&nctemp15713;
nctempchar1* nctemp15710= nctemp15712;
int nctemp15714=CodeEs(nctemp15708,nctemp15710);
struct tree* nctemp15716= p;
int nctemp15718= 20;
int nctemp15720=PtreeSetline(nctemp15716,nctemp15718);
struct tree* nctemp15722= p;
struct nctempchar1 *nctemp15726;
static struct nctempchar1 nctemp15727 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp15726=&nctemp15727;
nctempchar1* nctemp15724= nctemp15726;
int nctemp15728=CodeEs(nctemp15722,nctemp15724);
struct tree* nctemp15730= p;
struct nctempchar1 *nctemp15734;
static struct nctempchar1 nctemp15735 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp15734=&nctemp15735;
nctempchar1* nctemp15732= nctemp15734;
int nctemp15736=CodeEs(nctemp15730,nctemp15732);
struct tree* nctemp15738= p;
struct nctempchar1 *nctemp15742;
static struct nctempchar1 nctemp15743 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15742=&nctemp15743;
nctempchar1* nctemp15740= nctemp15742;
int nctemp15744=CodeEs(nctemp15738,nctemp15740);
struct tree* nctemp15746= p;
struct nctempchar1 *nctemp15750;
static struct nctempchar1 nctemp15751 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15750=&nctemp15751;
nctempchar1* nctemp15748= nctemp15750;
int nctemp15752=CodeEs(nctemp15746,nctemp15748);
struct tree* nctemp15754= p;
struct nctempchar1 *nctemp15758;
static struct nctempchar1 nctemp15759 = {{ 4}, (char*)"}\n\0"};
nctemp15758=&nctemp15759;
nctempchar1* nctemp15756= nctemp15758;
int nctemp15760=CodeEs(nctemp15754,nctemp15756);
struct tree* nctemp15762= p;
struct nctempchar1 *nctemp15766;
static struct nctempchar1 nctemp15767 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp15766=&nctemp15767;
nctempchar1* nctemp15764= nctemp15766;
int nctemp15768=CodeEs(nctemp15762,nctemp15764);
struct tree* nctemp15770= p;
struct nctempchar1 *nctemp15774;
static struct nctempchar1 nctemp15775 = {{ 3}, (char*)"\n\0"};
nctemp15774=&nctemp15775;
nctempchar1* nctemp15772= nctemp15774;
int nctemp15776=CodeEs(nctemp15770,nctemp15772);
struct tree* nctemp15778= p;
struct nctempchar1 *nctemp15782;
static struct nctempchar1 nctemp15783 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp15782=&nctemp15783;
nctempchar1* nctemp15780= nctemp15782;
int nctemp15784=CodeEs(nctemp15778,nctemp15780);
struct tree* nctemp15786= p;
struct nctempchar1 *nctemp15790;
static struct nctempchar1 nctemp15791 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp15790=&nctemp15791;
nctempchar1* nctemp15788= nctemp15790;
int nctemp15792=CodeEs(nctemp15786,nctemp15788);
struct tree* nctemp15794= p;
struct nctempchar1 *nctemp15798;
static struct nctempchar1 nctemp15799 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp15798=&nctemp15799;
nctempchar1* nctemp15796= nctemp15798;
int nctemp15800=CodeEs(nctemp15794,nctemp15796);
struct tree* nctemp15802= p;
struct nctempchar1 *nctemp15806;
static struct nctempchar1 nctemp15807 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp15806=&nctemp15807;
nctempchar1* nctemp15804= nctemp15806;
int nctemp15808=CodeEs(nctemp15802,nctemp15804);
struct tree* nctemp15810= p;
struct nctempchar1 *nctemp15814;
static struct nctempchar1 nctemp15815 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp15814=&nctemp15815;
nctempchar1* nctemp15812= nctemp15814;
int nctemp15816=CodeEs(nctemp15810,nctemp15812);
return 1;
}
int CodePreamble ()
{
int nctemp15824=CodeGetarch();
int nctemp15821 = (nctemp15824 ==1);
int nctemp15830=CodeGetarch();
int nctemp15827 = (nctemp15830 ==4);
int nctemp15818 = (nctemp15821 || nctemp15827);
if(nctemp15818)
{
int nctemp15833=CodePreamblecpu();
return 1;
}
else{
int nctemp15838=CodeGetarch();
int nctemp15835 = (nctemp15838 ==2);
if(nctemp15835)
{
int nctemp15841=CodePreamblecuda();
return 1;
}
else{
int nctemp15846=CodeGetarch();
int nctemp15843 = (nctemp15846 ==3);
if(nctemp15843)
{
int nctemp15849=CodePreamblehip();
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
struct nctempchar1 *nctemp15858;
static struct nctempchar1 nctemp15859 = {{ 6}, (char*)"dummy\0"};
nctemp15858=&nctemp15859;
nctempchar1* nctemp15856= nctemp15858;
struct nctempchar1 *nctemp15862;
static struct nctempchar1 nctemp15863 = {{ 6}, (char*)"dummy\0"};
nctemp15862=&nctemp15863;
nctempchar1* nctemp15860= nctemp15862;
struct tree* nctemp15864=PtreeMknode(nctemp15856,nctemp15860);
p =nctemp15864;
int nctemp15868=CodeGetarch();
int nctemp15865 = (nctemp15868 ==2);
if(nctemp15865)
{
struct tree* nctemp15871= p;
struct nctempchar1 *nctemp15875;
static struct nctempchar1 nctemp15876 = {{ 3}, (char*)"};\0"};
nctemp15875=&nctemp15876;
nctempchar1* nctemp15873= nctemp15875;
int nctemp15877=CodeEs(nctemp15871,nctemp15873);
}
int nctemp15881=CodeGetarch();
int nctemp15878 = (nctemp15881 ==3);
if(nctemp15878)
{
struct tree* nctemp15884= p;
struct nctempchar1 *nctemp15888;
static struct nctempchar1 nctemp15889 = {{ 3}, (char*)"};\0"};
nctemp15888=&nctemp15889;
nctempchar1* nctemp15886= nctemp15888;
int nctemp15890=CodeEs(nctemp15884,nctemp15886);
}
return 1;
}
