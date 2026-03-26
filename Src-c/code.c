//  Translated by epsc  version: Thu Mar 26 16:05:47 2026

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
static struct nctempchar1 nctemp11098 = {{ 54}, (char*)"\n #pragma omp target teams distribute parallel for\n\0"};
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
static struct nctempchar1 nctemp11199 = {{ 3}, (char*)"++\0"};
nctemp11198=&nctemp11199;
nctempchar1* nctemp11196= nctemp11198;
int nctemp11200=CodeEs(nctemp11194,nctemp11196);
}
else{
struct tree* nctemp11202= rp;
nctempchar1* nctemp11204= index;
int nctemp11207=CodeEs(nctemp11202,nctemp11204);
struct tree* nctemp11209= rp;
struct nctempchar1 *nctemp11213;
static struct nctempchar1 nctemp11214 = {{ 3}, (char*)"++\0"};
nctemp11213=&nctemp11214;
nctempchar1* nctemp11211= nctemp11213;
int nctemp11215=CodeEs(nctemp11209,nctemp11211);
}
struct tree* nctemp11217= rp;
struct nctempchar1 *nctemp11221;
static struct nctempchar1 nctemp11222 = {{ 3}, (char*)"){\0"};
nctemp11221=&nctemp11222;
nctempchar1* nctemp11219= nctemp11221;
int nctemp11223=CodeEs(nctemp11217,nctemp11219);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11229= sp;
int nctemp11231=PtreeGetrank(nctemp11229);
rank =nctemp11231;
struct tree* nctemp11236= p;
struct tree* nctemp11238=PtreeMvchild(nctemp11236);
p =nctemp11238;
struct tree* nctemp11243= p;
struct tree* nctemp11245=PtreeMvchild(nctemp11243);
p =nctemp11245;
struct tree* nctemp11247= p;
int nctemp11249= 0;
int nctemp11251= rank;
int nctemp11253=CodeParallelfor(nctemp11247,nctemp11249,nctemp11251);
struct tree* nctemp11258= sp;
struct tree* nctemp11260=PtreeMvchild(nctemp11258);
sp =nctemp11260;
struct tree* nctemp11265= sp;
struct tree* nctemp11267=PtreeMvsister(nctemp11265);
sp =nctemp11267;
struct tree* nctemp11269= sp;
int nctemp11271=CodeStmnt(nctemp11269);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11273= sp;
struct nctempchar1 *nctemp11277;
static struct nctempchar1 nctemp11278 = {{ 2}, (char*)"}\0"};
nctemp11277=&nctemp11278;
nctempchar1* nctemp11275= nctemp11277;
int nctemp11279=CodeEs(nctemp11273,nctemp11275);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11282= p;
struct nctempchar1 *nctemp11286;
static struct nctempchar1 nctemp11287 = {{ 13}, (char*)"int nctempno\0"};
nctemp11286=&nctemp11287;
nctempchar1* nctemp11284= nctemp11286;
int nctemp11288=CodeEs(nctemp11282,nctemp11284);
struct tree* nctemp11290= p;
struct nctempchar1 *nctemp11294;
static struct nctempchar1 nctemp11295 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11294=&nctemp11295;
nctempchar1* nctemp11292= nctemp11294;
int nctemp11296=CodeEs(nctemp11290,nctemp11292);
struct nctempchar1 *nctemp11298;
static struct nctempchar1 nctemp11299 = {{ 9}, (char*)"nctempno\0"};
nctemp11298=&nctemp11299;
return nctemp11298;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11304= p;
struct tree* nctemp11306=PtreeMvchild(nctemp11304);
p =nctemp11306;
struct tree* nctemp11311= p;
struct tree* nctemp11313=PtreeMvchild(nctemp11311);
p =nctemp11313;
struct tree* nctemp11318= p;
struct tree* nctemp11320=PtreeMvchild(nctemp11318);
p =nctemp11320;
struct tree* nctemp11322= p;
nctempchar1* nctemp11324=PtreeGetdef(nctemp11322);
return nctemp11324;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11329= p;
struct tree* nctemp11331=PtreeMvsister(nctemp11329);
p =nctemp11331;
}
struct tree* nctemp11333= p;
nctempchar1* nctemp11335=CodeParidx(nctemp11333);
return nctemp11335;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11340= p;
struct tree* nctemp11342=PtreeMvchild(nctemp11340);
p =nctemp11342;
struct tree* nctemp11348= p;
nctempchar1* nctemp11350=CodeExpr(nctemp11348);
tmp=nctemp11350;
nctempchar1* nctemp11356=CodeMktemp();
temp=nctemp11356;
struct tree* nctemp11358= p;
struct nctempchar1 *nctemp11362;
static struct nctempchar1 nctemp11363 = {{ 5}, (char*)"int \0"};
nctemp11362=&nctemp11363;
nctempchar1* nctemp11360= nctemp11362;
int nctemp11364=CodeEs(nctemp11358,nctemp11360);
struct tree* nctemp11366= p;
nctempchar1* nctemp11368= temp;
int nctemp11371=CodeEs(nctemp11366,nctemp11368);
struct tree* nctemp11373= p;
struct nctempchar1 *nctemp11377;
static struct nctempchar1 nctemp11378 = {{ 2}, (char*)"=\0"};
nctemp11377=&nctemp11378;
nctempchar1* nctemp11375= nctemp11377;
int nctemp11379=CodeEs(nctemp11373,nctemp11375);
struct tree* nctemp11381= p;
nctempchar1* nctemp11383= tmp;
int nctemp11386=CodeEs(nctemp11381,nctemp11383);
struct tree* nctemp11388= p;
struct nctempchar1 *nctemp11392;
static struct nctempchar1 nctemp11393 = {{ 4}, (char*)";\n\0"};
nctemp11392=&nctemp11393;
nctempchar1* nctemp11390= nctemp11392;
int nctemp11394=CodeEs(nctemp11388,nctemp11390);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11401= p;
struct tree* nctemp11403=PtreeMvchild(nctemp11401);
p =nctemp11403;
struct tree* nctemp11408= p;
struct tree* nctemp11410=PtreeMvsister(nctemp11408);
p =nctemp11410;
struct tree* nctemp11412= p;
nctempchar1* nctemp11414=CodeExpr(nctemp11412);
return nctemp11414;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11419= p;
struct tree* nctemp11421=PtreeMvsister(nctemp11419);
p =nctemp11421;
}
struct tree* nctemp11423= p;
nctempchar1* nctemp11425=CodeParllim(nctemp11423);
return nctemp11425;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11430= p;
struct tree* nctemp11432=PtreeMvsister(nctemp11430);
p =nctemp11432;
}
struct tree* nctemp11434= p;
nctempchar1* nctemp11436=CodeParulim(nctemp11434);
return nctemp11436;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11442=CodeMktemp();
tmp1=nctemp11442;
struct tree* nctemp11448= p;
nctempchar1* nctemp11450=CodeParulim(nctemp11448);
tmp2=nctemp11450;
struct tree* nctemp11456= p;
nctempchar1* nctemp11458=CodeParllim(nctemp11456);
tmp3=nctemp11458;
struct tree* nctemp11460= p;
struct nctempchar1 *nctemp11464;
static struct nctempchar1 nctemp11465 = {{ 5}, (char*)"int \0"};
nctemp11464=&nctemp11465;
nctempchar1* nctemp11462= nctemp11464;
int nctemp11466=CodeEs(nctemp11460,nctemp11462);
struct tree* nctemp11468= p;
nctempchar1* nctemp11470= tmp1;
int nctemp11473=CodeEs(nctemp11468,nctemp11470);
struct tree* nctemp11475= p;
struct nctempchar1 *nctemp11479;
static struct nctempchar1 nctemp11480 = {{ 2}, (char*)"=\0"};
nctemp11479=&nctemp11480;
nctempchar1* nctemp11477= nctemp11479;
int nctemp11481=CodeEs(nctemp11475,nctemp11477);
struct tree* nctemp11483= p;
nctempchar1* nctemp11485= tmp2;
int nctemp11488=CodeEs(nctemp11483,nctemp11485);
struct tree* nctemp11490= p;
struct nctempchar1 *nctemp11494;
static struct nctempchar1 nctemp11495 = {{ 2}, (char*)"-\0"};
nctemp11494=&nctemp11495;
nctempchar1* nctemp11492= nctemp11494;
int nctemp11496=CodeEs(nctemp11490,nctemp11492);
struct tree* nctemp11498= p;
nctempchar1* nctemp11500= tmp3;
int nctemp11503=CodeEs(nctemp11498,nctemp11500);
struct tree* nctemp11505= p;
struct nctempchar1 *nctemp11509;
static struct nctempchar1 nctemp11510 = {{ 4}, (char*)";\n\0"};
nctemp11509=&nctemp11510;
nctempchar1* nctemp11507= nctemp11509;
int nctemp11511=CodeEs(nctemp11505,nctemp11507);
nctempchar1* nctemp11515= tmp3;
nctempchar1* nctemp11518= llim;
int nctemp11521=LibeStrcpy(nctemp11515,nctemp11518);
int nctemp11512 = (nctemp11521 ==0);
if(nctemp11512)
{
struct nctempchar1 *nctemp11526;
static struct nctempchar1 nctemp11527 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11526=&nctemp11527;
nctempchar1* nctemp11524= nctemp11526;
int nctemp11528=CodeError(nctemp11524);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11535= p;
struct tree* nctemp11537=PtreeMvsister(nctemp11535);
p =nctemp11537;
}
struct tree* nctemp11543= p;
nctempchar1* nctemp11545= llim;
nctempchar1* nctemp11548=CodeParlen(nctemp11543,nctemp11545);
tmp=nctemp11548;
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
int nctemp11555=m->d[0];r =nctemp11555;
nctempchar1* nctemp11564=CodeMktemp();
nsize=nctemp11564;
struct tree* nctemp11566= p;
struct nctempchar1 *nctemp11570;
static struct nctempchar1 nctemp11571 = {{ 5}, (char*)"int \0"};
nctemp11570=&nctemp11571;
nctempchar1* nctemp11568= nctemp11570;
int nctemp11572=CodeEs(nctemp11566,nctemp11568);
struct tree* nctemp11574= p;
nctempchar1* nctemp11576= nsize;
int nctemp11579=CodeEs(nctemp11574,nctemp11576);
struct tree* nctemp11581= p;
struct nctempchar1 *nctemp11585;
static struct nctempchar1 nctemp11586 = {{ 2}, (char*)"=\0"};
nctemp11585=&nctemp11586;
nctempchar1* nctemp11583= nctemp11585;
int nctemp11587=CodeEs(nctemp11581,nctemp11583);
for(i = 0;i < r;i = (i + 1)){
int nctemp11596 = r - 1;
int nctemp11588 = (i ==nctemp11596);
if(nctemp11588)
{
struct tree* nctemp11598= p;
int nctemp11602=i;
nctempchar1* nctemp11600= m->a[nctemp11602].s;
int nctemp11605=CodeEs(nctemp11598,nctemp11600);
struct tree* nctemp11607= p;
struct nctempchar1 *nctemp11611;
static struct nctempchar1 nctemp11612 = {{ 4}, (char*)";\n\0"};
nctemp11611=&nctemp11612;
nctempchar1* nctemp11609= nctemp11611;
int nctemp11613=CodeEs(nctemp11607,nctemp11609);
}
else{
struct tree* nctemp11615= p;
int nctemp11619=i;
nctempchar1* nctemp11617= m->a[nctemp11619].s;
int nctemp11622=CodeEs(nctemp11615,nctemp11617);
struct tree* nctemp11624= p;
struct nctempchar1 *nctemp11628;
static struct nctempchar1 nctemp11629 = {{ 2}, (char*)"*\0"};
nctemp11628=&nctemp11629;
nctempchar1* nctemp11626= nctemp11628;
int nctemp11630=CodeEs(nctemp11624,nctemp11626);
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
int nctemp11634= 1;
int nctemp11636=CodeSetparallel(nctemp11634);
sp = p;
struct tree* nctemp11641= p;
int nctemp11643=PtreeGetrank(nctemp11641);
rank =nctemp11643;
int nctemp11650=rank;
struct nctempcharr1 *nctemp11649;
nctemp11649=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11649->d[0]=rank;
nctemp11649->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11650);
m=nctemp11649;
int nctemp11659=rank;
struct nctempcharr1 *nctemp11658;
nctemp11658=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11658->d[0]=rank;
nctemp11658->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11659);
i=nctemp11658;
int nctemp11668=rank;
struct nctempcharr1 *nctemp11667;
nctemp11667=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11667->d[0]=rank;
nctemp11667->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11668);
nl=nctemp11667;
struct tree* nctemp11675= p;
struct tree* nctemp11677=PtreeMvchild(nctemp11675);
p =nctemp11677;
struct tree* nctemp11682= p;
struct tree* nctemp11684=PtreeMvchild(nctemp11682);
slice =nctemp11684;
struct tree* nctemp11686= p;
struct nctempchar1 *nctemp11690;
static struct nctempchar1 nctemp11691 = {{ 4}, (char*)"{\n\0"};
nctemp11690=&nctemp11691;
nctempchar1* nctemp11688= nctemp11690;
int nctemp11692=CodeEs(nctemp11686,nctemp11688);
struct tree* nctemp11698= slice;
nctempchar1* nctemp11700=CodeParprocno(nctemp11698);
pno=nctemp11700;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11704=l;
struct tree* nctemp11708= slice;
int nctemp11715 = l + 1;
int nctemp11710= nctemp11715;
nctempchar1* nctemp11716=CodeParidxrank(nctemp11708,nctemp11710);
i->a[nctemp11704].s=nctemp11716;
int nctemp11720=l;
int nctemp11725=4096;
nctempchar1 *nctemp11724;
nctemp11724=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11724->d[0]=4096;
nctemp11724->a=(char *)RunMalloc(sizeof(char)*nctemp11725);
nl->a[nctemp11720].s=nctemp11724;
int nctemp11731=l;
struct tree* nctemp11735= slice;
int nctemp11742 = l + 1;
int nctemp11737= nctemp11742;
int nctemp11745=l;
nctempchar1* nctemp11743= nl->a[nctemp11745].s;
nctempchar1* nctemp11748=CodeParlenrank(nctemp11735,nctemp11737,nctemp11743);
m->a[nctemp11731].s=nctemp11748;
}
struct tree* nctemp11754= p;
nctempcharr1* nctemp11756= m;
nctempchar1* nctemp11759=CodeParnsize(nctemp11754,nctemp11756);
nmax=nctemp11759;
struct tree* nctemp11761= p;
struct nctempchar1 *nctemp11765;
static struct nctempchar1 nctemp11766 = {{ 5}, (char*)"for(\0"};
nctemp11765=&nctemp11766;
nctempchar1* nctemp11763= nctemp11765;
int nctemp11767=CodeEs(nctemp11761,nctemp11763);
struct tree* nctemp11769= p;
nctempchar1* nctemp11771= pno;
int nctemp11774=CodeEs(nctemp11769,nctemp11771);
struct tree* nctemp11776= p;
struct nctempchar1 *nctemp11780;
static struct nctempchar1 nctemp11781 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11780=&nctemp11781;
nctempchar1* nctemp11778= nctemp11780;
int nctemp11782=CodeEs(nctemp11776,nctemp11778);
struct tree* nctemp11784= p;
nctempchar1* nctemp11786= pno;
int nctemp11789=CodeEs(nctemp11784,nctemp11786);
struct tree* nctemp11791= p;
struct nctempchar1 *nctemp11795;
static struct nctempchar1 nctemp11796 = {{ 2}, (char*)"<\0"};
nctemp11795=&nctemp11796;
nctempchar1* nctemp11793= nctemp11795;
int nctemp11797=CodeEs(nctemp11791,nctemp11793);
struct tree* nctemp11799= p;
nctempchar1* nctemp11801= nmax;
int nctemp11804=CodeEs(nctemp11799,nctemp11801);
struct tree* nctemp11806= p;
struct nctempchar1 *nctemp11810;
static struct nctempchar1 nctemp11811 = {{ 2}, (char*)";\0"};
nctemp11810=&nctemp11811;
nctempchar1* nctemp11808= nctemp11810;
int nctemp11812=CodeEs(nctemp11806,nctemp11808);
struct tree* nctemp11814= p;
nctempchar1* nctemp11816= pno;
int nctemp11819=CodeEs(nctemp11814,nctemp11816);
struct tree* nctemp11821= p;
struct nctempchar1 *nctemp11825;
static struct nctempchar1 nctemp11826 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11825=&nctemp11826;
nctempchar1* nctemp11823= nctemp11825;
int nctemp11827=CodeEs(nctemp11821,nctemp11823);
struct tree* nctemp11829= p;
struct nctempchar1 *nctemp11833;
static struct nctempchar1 nctemp11834 = {{ 5}, (char*)"){\n\0"};
nctemp11833=&nctemp11834;
nctempchar1* nctemp11831= nctemp11833;
int nctemp11835=CodeEs(nctemp11829,nctemp11831);
struct nctempchar1 *nctemp11843;
static struct nctempchar1 nctemp11844 = {{ 2}, (char*)"1\0"};
nctemp11843=&nctemp11844;
nctempchar1* nctemp11841= nctemp11843;
nctempchar1* nctemp11845=LibeStrsave(nctemp11841);
qk=nctemp11845;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11854 = rank - 1;
int nctemp11846 = (l ==nctemp11854);
if(nctemp11846)
{
struct tree* nctemp11856= p;
int nctemp11860=l;
nctempchar1* nctemp11858= i->a[nctemp11860].s;
int nctemp11863=CodeEs(nctemp11856,nctemp11858);
struct tree* nctemp11865= p;
struct nctempchar1 *nctemp11869;
static struct nctempchar1 nctemp11870 = {{ 2}, (char*)"=\0"};
nctemp11869=&nctemp11870;
nctempchar1* nctemp11867= nctemp11869;
int nctemp11871=CodeEs(nctemp11865,nctemp11867);
struct tree* nctemp11873= p;
struct nctempchar1 *nctemp11877;
static struct nctempchar1 nctemp11878 = {{ 2}, (char*)"(\0"};
nctemp11877=&nctemp11878;
nctempchar1* nctemp11875= nctemp11877;
int nctemp11879=CodeEs(nctemp11873,nctemp11875);
struct tree* nctemp11881= p;
nctempchar1* nctemp11883= pno;
int nctemp11886=CodeEs(nctemp11881,nctemp11883);
struct tree* nctemp11888= p;
struct nctempchar1 *nctemp11892;
static struct nctempchar1 nctemp11893 = {{ 2}, (char*)"/\0"};
nctemp11892=&nctemp11893;
nctempchar1* nctemp11890= nctemp11892;
int nctemp11894=CodeEs(nctemp11888,nctemp11890);
struct tree* nctemp11896= p;
struct nctempchar1 *nctemp11900;
static struct nctempchar1 nctemp11901 = {{ 2}, (char*)"(\0"};
nctemp11900=&nctemp11901;
nctempchar1* nctemp11898= nctemp11900;
int nctemp11902=CodeEs(nctemp11896,nctemp11898);
struct tree* nctemp11904= p;
nctempchar1* nctemp11906= qk;
int nctemp11909=CodeEs(nctemp11904,nctemp11906);
struct tree* nctemp11911= p;
struct nctempchar1 *nctemp11915;
static struct nctempchar1 nctemp11916 = {{ 2}, (char*)")\0"};
nctemp11915=&nctemp11916;
nctempchar1* nctemp11913= nctemp11915;
int nctemp11917=CodeEs(nctemp11911,nctemp11913);
struct tree* nctemp11919= p;
struct nctempchar1 *nctemp11923;
static struct nctempchar1 nctemp11924 = {{ 2}, (char*)")\0"};
nctemp11923=&nctemp11924;
nctempchar1* nctemp11921= nctemp11923;
int nctemp11925=CodeEs(nctemp11919,nctemp11921);
struct tree* nctemp11927= p;
struct nctempchar1 *nctemp11931;
static struct nctempchar1 nctemp11932 = {{ 2}, (char*)"+\0"};
nctemp11931=&nctemp11932;
nctempchar1* nctemp11929= nctemp11931;
int nctemp11933=CodeEs(nctemp11927,nctemp11929);
struct tree* nctemp11935= p;
int nctemp11939=l;
nctempchar1* nctemp11937= nl->a[nctemp11939].s;
int nctemp11942=CodeEs(nctemp11935,nctemp11937);
int nctemp11945=l;
RunFree(nl->a[nctemp11945].s->a);
RunFree(nl->a[nctemp11945].s);
struct tree* nctemp11949= p;
struct nctempchar1 *nctemp11953;
static struct nctempchar1 nctemp11954 = {{ 4}, (char*)";\n\0"};
nctemp11953=&nctemp11954;
nctempchar1* nctemp11951= nctemp11953;
int nctemp11955=CodeEs(nctemp11949,nctemp11951);
}
else{
struct tree* nctemp11957= p;
int nctemp11961=l;
nctempchar1* nctemp11959= i->a[nctemp11961].s;
int nctemp11964=CodeEs(nctemp11957,nctemp11959);
struct tree* nctemp11966= p;
struct nctempchar1 *nctemp11970;
static struct nctempchar1 nctemp11971 = {{ 2}, (char*)"=\0"};
nctemp11970=&nctemp11971;
nctempchar1* nctemp11968= nctemp11970;
int nctemp11972=CodeEs(nctemp11966,nctemp11968);
struct tree* nctemp11974= p;
struct nctempchar1 *nctemp11978;
static struct nctempchar1 nctemp11979 = {{ 2}, (char*)"(\0"};
nctemp11978=&nctemp11979;
nctempchar1* nctemp11976= nctemp11978;
int nctemp11980=CodeEs(nctemp11974,nctemp11976);
struct tree* nctemp11982= p;
nctempchar1* nctemp11984= pno;
int nctemp11987=CodeEs(nctemp11982,nctemp11984);
struct tree* nctemp11989= p;
struct nctempchar1 *nctemp11993;
static struct nctempchar1 nctemp11994 = {{ 2}, (char*)"/\0"};
nctemp11993=&nctemp11994;
nctempchar1* nctemp11991= nctemp11993;
int nctemp11995=CodeEs(nctemp11989,nctemp11991);
struct tree* nctemp11997= p;
struct nctempchar1 *nctemp12001;
static struct nctempchar1 nctemp12002 = {{ 2}, (char*)"(\0"};
nctemp12001=&nctemp12002;
nctempchar1* nctemp11999= nctemp12001;
int nctemp12003=CodeEs(nctemp11997,nctemp11999);
struct tree* nctemp12005= p;
nctempchar1* nctemp12007= qk;
int nctemp12010=CodeEs(nctemp12005,nctemp12007);
struct tree* nctemp12012= p;
struct nctempchar1 *nctemp12016;
static struct nctempchar1 nctemp12017 = {{ 2}, (char*)")\0"};
nctemp12016=&nctemp12017;
nctempchar1* nctemp12014= nctemp12016;
int nctemp12018=CodeEs(nctemp12012,nctemp12014);
struct tree* nctemp12020= p;
struct nctempchar1 *nctemp12024;
static struct nctempchar1 nctemp12025 = {{ 2}, (char*)")\0"};
nctemp12024=&nctemp12025;
nctempchar1* nctemp12022= nctemp12024;
int nctemp12026=CodeEs(nctemp12020,nctemp12022);
struct tree* nctemp12028= p;
struct nctempchar1 *nctemp12032;
static struct nctempchar1 nctemp12033 = {{ 2}, (char*)"%\0"};
nctemp12032=&nctemp12033;
nctempchar1* nctemp12030= nctemp12032;
int nctemp12034=CodeEs(nctemp12028,nctemp12030);
struct tree* nctemp12036= p;
int nctemp12040=l;
nctempchar1* nctemp12038= m->a[nctemp12040].s;
int nctemp12043=CodeEs(nctemp12036,nctemp12038);
struct tree* nctemp12045= p;
struct nctempchar1 *nctemp12049;
static struct nctempchar1 nctemp12050 = {{ 2}, (char*)"+\0"};
nctemp12049=&nctemp12050;
nctempchar1* nctemp12047= nctemp12049;
int nctemp12051=CodeEs(nctemp12045,nctemp12047);
struct tree* nctemp12053= p;
int nctemp12057=l;
nctempchar1* nctemp12055= nl->a[nctemp12057].s;
int nctemp12060=CodeEs(nctemp12053,nctemp12055);
int nctemp12063=l;
RunFree(nl->a[nctemp12063].s->a);
RunFree(nl->a[nctemp12063].s);
struct tree* nctemp12067= p;
struct nctempchar1 *nctemp12071;
static struct nctempchar1 nctemp12072 = {{ 4}, (char*)";\n\0"};
nctemp12071=&nctemp12072;
nctempchar1* nctemp12069= nctemp12071;
int nctemp12073=CodeEs(nctemp12067,nctemp12069);
}
nctempchar1* nctemp12079= qk;
struct nctempchar1 *nctemp12084;
static struct nctempchar1 nctemp12085 = {{ 2}, (char*)"*\0"};
nctemp12084=&nctemp12085;
nctempchar1* nctemp12082= nctemp12084;
nctempchar1* nctemp12086=LibeStradd(nctemp12079,nctemp12082);
tmp=nctemp12086;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12095= qk;
int nctemp12100=l;
nctempchar1* nctemp12098= m->a[nctemp12100].s;
nctempchar1* nctemp12103=LibeStradd(nctemp12095,nctemp12098);
tmp=nctemp12103;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12111= sp;
struct tree* nctemp12113=PtreeMvchild(nctemp12111);
p =nctemp12113;
struct tree* nctemp12118= p;
struct tree* nctemp12120=PtreeMvsister(nctemp12118);
p =nctemp12120;
struct tree* nctemp12122= p;
int nctemp12124=CodeCompstmnt(nctemp12122);
struct tree* nctemp12126= p;
struct nctempchar1 *nctemp12130;
static struct nctempchar1 nctemp12131 = {{ 4}, (char*)"}\n\0"};
nctemp12130=&nctemp12131;
nctempchar1* nctemp12128= nctemp12130;
int nctemp12132=CodeEs(nctemp12126,nctemp12128);
struct tree* nctemp12134= p;
struct nctempchar1 *nctemp12138;
static struct nctempchar1 nctemp12139 = {{ 4}, (char*)"}\n\0"};
nctemp12138=&nctemp12139;
nctempchar1* nctemp12136= nctemp12138;
int nctemp12140=CodeEs(nctemp12134,nctemp12136);
int nctemp12142= 0;
int nctemp12144=CodeSetparallel(nctemp12142);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12152=CodeGetarch();
int nctemp12149 = (nctemp12152 ==1);
int nctemp12158=CodeGetarch();
int nctemp12155 = (nctemp12158 ==4);
int nctemp12146 = (nctemp12149 || nctemp12155);
if(nctemp12146)
{
struct tree* nctemp12161= p;
int nctemp12163=CodeParallelstmntcpu(nctemp12161);
}
else{
int nctemp12167=CodeGetarch();
int nctemp12164 = (nctemp12167 ==2);
if(nctemp12164)
{
struct tree* nctemp12170= p;
int nctemp12172=CodeParallelstmntgpu(nctemp12170);
}
else{
int nctemp12176=CodeGetarch();
int nctemp12173 = (nctemp12176 ==3);
if(nctemp12173)
{
struct tree* nctemp12179= p;
int nctemp12181=CodeParallelstmntgpu(nctemp12179);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12187= p;
struct tree* nctemp12189=PtreeMvchild(nctemp12187);
p =nctemp12189;
struct tree* nctemp12195= p;
nctempchar1* nctemp12197=CodeExpr(nctemp12195);
cond=nctemp12197;
struct tree* nctemp12199= p;
struct nctempchar1 *nctemp12203;
static struct nctempchar1 nctemp12204 = {{ 4}, (char*)"if(\0"};
nctemp12203=&nctemp12204;
nctempchar1* nctemp12201= nctemp12203;
int nctemp12205=CodeEs(nctemp12199,nctemp12201);
struct tree* nctemp12207= p;
nctempchar1* nctemp12209= cond;
int nctemp12212=CodeEs(nctemp12207,nctemp12209);
struct tree* nctemp12214= p;
struct nctempchar1 *nctemp12218;
static struct nctempchar1 nctemp12219 = {{ 4}, (char*)")\n\0"};
nctemp12218=&nctemp12219;
nctempchar1* nctemp12216= nctemp12218;
int nctemp12220=CodeEs(nctemp12214,nctemp12216);
struct tree* nctemp12225= p;
struct tree* nctemp12227=PtreeMvsister(nctemp12225);
p =nctemp12227;
struct tree* nctemp12229= p;
int nctemp12231=CodeStmnt(nctemp12229);
struct tree* nctemp12239= p;
struct tree* nctemp12241=PtreeMvsister(nctemp12239);
p =nctemp12241;
int nctemp12232 = (p !=0);
if(nctemp12232)
{
struct tree* nctemp12248= p;
nctempchar1* nctemp12250=PtreeGetname(nctemp12248);
nctempchar1* nctemp12246= nctemp12250;
struct nctempchar1 *nctemp12253;
static struct nctempchar1 nctemp12254 = {{ 5}, (char*)"else\0"};
nctemp12253=&nctemp12254;
nctempchar1* nctemp12251= nctemp12253;
int nctemp12255=LibeStrcmp(nctemp12246,nctemp12251);
int nctemp12243 = (nctemp12255 ==1);
if(nctemp12243)
{
struct tree* nctemp12261= p;
struct tree* nctemp12263=PtreeMvchild(nctemp12261);
p =nctemp12263;
struct tree* nctemp12265= p;
struct nctempchar1 *nctemp12269;
static struct nctempchar1 nctemp12270 = {{ 5}, (char*)"else\0"};
nctemp12269=&nctemp12270;
nctempchar1* nctemp12267= nctemp12269;
int nctemp12271=CodeEs(nctemp12265,nctemp12267);
struct tree* nctemp12273= p;
int nctemp12275=CodeStmnt(nctemp12273);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12281= p;
struct tree* nctemp12283=PtreeMvchild(nctemp12281);
np =nctemp12283;
struct tree* nctemp12289= np;
nctempchar1* nctemp12291=CodeExpr(nctemp12289);
rval=nctemp12291;
struct tree* nctemp12293= np;
struct nctempchar1 *nctemp12297;
static struct nctempchar1 nctemp12298 = {{ 8}, (char*)"return \0"};
nctemp12297=&nctemp12298;
nctempchar1* nctemp12295= nctemp12297;
int nctemp12299=CodeEs(nctemp12293,nctemp12295);
struct tree* nctemp12301= np;
nctempchar1* nctemp12303= rval;
int nctemp12306=CodeEs(nctemp12301,nctemp12303);
struct tree* nctemp12308= np;
struct nctempchar1 *nctemp12312;
static struct nctempchar1 nctemp12313 = {{ 4}, (char*)";\n\0"};
nctemp12312=&nctemp12313;
nctempchar1* nctemp12310= nctemp12312;
int nctemp12314=CodeEs(nctemp12308,nctemp12310);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12317= p;
struct nctempchar1 *nctemp12321;
static struct nctempchar1 nctemp12322 = {{ 4}, (char*)"{\n\0"};
nctemp12321=&nctemp12322;
nctempchar1* nctemp12319= nctemp12321;
int nctemp12323=CodeEs(nctemp12317,nctemp12319);
struct tree* nctemp12328= p;
struct tree* nctemp12330=PtreeMvchild(nctemp12328);
p =nctemp12330;
int nctemp12331 = (p ==0);
if(nctemp12331)
{
struct tree* nctemp12336= sp;
struct nctempchar1 *nctemp12340;
static struct nctempchar1 nctemp12341 = {{ 4}, (char*)"}\n\0"};
nctemp12340=&nctemp12341;
nctempchar1* nctemp12338= nctemp12340;
int nctemp12342=CodeEs(nctemp12336,nctemp12338);
return 1;
}
struct tree* nctemp12345= p;
struct symbol* nctemp12349=SymGetltp();
struct symbol* nctemp12347= nctemp12349;
int nctemp12350=CodeDeclarations(nctemp12345,nctemp12347);
struct tree* nctemp12356= p;
nctempchar1* nctemp12358=PtreeGetname(nctemp12356);
nctempchar1* nctemp12354= nctemp12358;
struct nctempchar1 *nctemp12361;
static struct nctempchar1 nctemp12362 = {{ 13}, (char*)"declarations\0"};
nctemp12361=&nctemp12362;
nctempchar1* nctemp12359= nctemp12361;
int nctemp12363=LibeStrcmp(nctemp12354,nctemp12359);
int nctemp12351 = (nctemp12363 ==1);
if(nctemp12351)
{
struct tree* nctemp12369= p;
struct tree* nctemp12371=PtreeMvsister(nctemp12369);
p =nctemp12371;
}
int nctemp12372 = (p !=0);
int nctemp12376=nctemp12372;
while(nctemp12376)
{{
struct tree* nctemp12382= p;
nctempchar1* nctemp12384=PtreeGetname(nctemp12382);
nctempchar1* nctemp12380= nctemp12384;
struct nctempchar1 *nctemp12387;
static struct nctempchar1 nctemp12388 = {{ 5}, (char*)"expr\0"};
nctemp12387=&nctemp12388;
nctempchar1* nctemp12385= nctemp12387;
int nctemp12389=LibeStrcmp(nctemp12380,nctemp12385);
int nctemp12377 = (nctemp12389 ==1);
if(nctemp12377)
{
int nctemp12394=CodeGetbreak();
int nctemp12391 = (nctemp12394 ==1);
if(nctemp12391)
{
struct tree* nctemp12397= p;
nctempchar1* nctemp12399=CodeExpr(nctemp12397);
}
else{
struct tree* nctemp12403= p;
int nctemp12405=PtreeGetsimple(nctemp12403);
int nctemp12400 = (nctemp12405 ==1);
if(nctemp12400)
{
struct tree* nctemp12408= p;
int nctemp12410=CodeSexpr(nctemp12408);
struct tree* nctemp12412= p;
struct nctempchar1 *nctemp12416;
static struct nctempchar1 nctemp12417 = {{ 4}, (char*)";\n\0"};
nctemp12416=&nctemp12417;
nctempchar1* nctemp12414= nctemp12416;
int nctemp12418=CodeEs(nctemp12412,nctemp12414);
}
else{
struct tree* nctemp12420= p;
nctempchar1* nctemp12422=CodeExpr(nctemp12420);
}
}
}
struct tree* nctemp12428= p;
nctempchar1* nctemp12430=PtreeGetname(nctemp12428);
nctempchar1* nctemp12426= nctemp12430;
struct nctempchar1 *nctemp12433;
static struct nctempchar1 nctemp12434 = {{ 6}, (char*)"while\0"};
nctemp12433=&nctemp12434;
nctempchar1* nctemp12431= nctemp12433;
int nctemp12435=LibeStrcmp(nctemp12426,nctemp12431);
int nctemp12423 = (nctemp12435 ==1);
if(nctemp12423)
{
struct tree* nctemp12438= p;
int nctemp12440=CodeWhilestmnt(nctemp12438);
}
struct tree* nctemp12446= p;
nctempchar1* nctemp12448=PtreeGetname(nctemp12446);
nctempchar1* nctemp12444= nctemp12448;
struct nctempchar1 *nctemp12451;
static struct nctempchar1 nctemp12452 = {{ 4}, (char*)"for\0"};
nctemp12451=&nctemp12452;
nctempchar1* nctemp12449= nctemp12451;
int nctemp12453=LibeStrcmp(nctemp12444,nctemp12449);
int nctemp12441 = (nctemp12453 ==1);
if(nctemp12441)
{
struct tree* nctemp12459= p;
struct tree* nctemp12461=PtreeMvchild(nctemp12459);
q =nctemp12461;
struct tree* nctemp12466= q;
struct tree* nctemp12468=PtreeMvsister(nctemp12466);
r =nctemp12468;
struct tree* nctemp12475= q;
int nctemp12477=PtreeGetsimple(nctemp12475);
struct tree* nctemp12479= r;
int nctemp12481=PtreeGetsimple(nctemp12479);
int nctemp12472 = (nctemp12477 && nctemp12481);
struct tree* nctemp12485= r;
struct tree* nctemp12487=PtreeMvsister(nctemp12485);
struct tree* nctemp12483= nctemp12487;
int nctemp12488=PtreeGetsimple(nctemp12483);
int nctemp12469 = (nctemp12472 && nctemp12488);
if(nctemp12469)
{
struct tree* nctemp12490= p;
int nctemp12492=CodeSforstmnt(nctemp12490);
}
else{
struct tree* nctemp12494= q;
int nctemp12496= 0;
int nctemp12498=PtreeSetsimple(nctemp12494,nctemp12496);
struct tree* nctemp12500= r;
int nctemp12502= 0;
int nctemp12504=PtreeSetsimple(nctemp12500,nctemp12502);
struct tree* nctemp12508= r;
struct tree* nctemp12510=PtreeMvsister(nctemp12508);
struct tree* nctemp12506= nctemp12510;
int nctemp12511= 0;
int nctemp12513=PtreeSetsimple(nctemp12506,nctemp12511);
struct tree* nctemp12515= p;
int nctemp12517=CodeForstmnt(nctemp12515);
}
}
struct tree* nctemp12523= p;
nctempchar1* nctemp12525=PtreeGetname(nctemp12523);
nctempchar1* nctemp12521= nctemp12525;
struct nctempchar1 *nctemp12528;
static struct nctempchar1 nctemp12529 = {{ 9}, (char*)"parallel\0"};
nctemp12528=&nctemp12529;
nctempchar1* nctemp12526= nctemp12528;
int nctemp12530=LibeStrcmp(nctemp12521,nctemp12526);
int nctemp12518 = (nctemp12530 ==1);
if(nctemp12518)
{
struct tree* nctemp12533= p;
int nctemp12535=CodeParallelstmnt(nctemp12533);
}
struct tree* nctemp12541= p;
nctempchar1* nctemp12543=PtreeGetname(nctemp12541);
nctempchar1* nctemp12539= nctemp12543;
struct nctempchar1 *nctemp12546;
static struct nctempchar1 nctemp12547 = {{ 3}, (char*)"if\0"};
nctemp12546=&nctemp12547;
nctempchar1* nctemp12544= nctemp12546;
int nctemp12548=LibeStrcmp(nctemp12539,nctemp12544);
int nctemp12536 = (nctemp12548 ==1);
if(nctemp12536)
{
struct tree* nctemp12551= p;
int nctemp12553=CodeIfstmnt(nctemp12551);
}
struct tree* nctemp12559= p;
nctempchar1* nctemp12561=PtreeGetname(nctemp12559);
nctempchar1* nctemp12557= nctemp12561;
struct nctempchar1 *nctemp12564;
static struct nctempchar1 nctemp12565 = {{ 7}, (char*)"return\0"};
nctemp12564=&nctemp12565;
nctempchar1* nctemp12562= nctemp12564;
int nctemp12566=LibeStrcmp(nctemp12557,nctemp12562);
int nctemp12554 = (nctemp12566 ==1);
if(nctemp12554)
{
struct tree* nctemp12569= p;
int nctemp12571=CodeReturnstmnt(nctemp12569);
}
struct tree* nctemp12576= p;
struct tree* nctemp12578=PtreeMvsister(nctemp12576);
p =nctemp12578;
}
int nctemp12579 = (p !=0);
nctemp12376=nctemp12579;}struct tree* nctemp12584= sp;
struct nctempchar1 *nctemp12588;
static struct nctempchar1 nctemp12589 = {{ 4}, (char*)"}\n\0"};
nctemp12588=&nctemp12589;
nctempchar1* nctemp12586= nctemp12588;
int nctemp12590=CodeEs(nctemp12584,nctemp12586);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12593= p;
struct nctempchar1 *nctemp12597;
static struct nctempchar1 nctemp12598 = {{ 4}, (char*)"{\n\0"};
nctemp12597=&nctemp12598;
nctempchar1* nctemp12595= nctemp12597;
int nctemp12599=CodeEs(nctemp12593,nctemp12595);
struct tree* nctemp12605= p;
nctempchar1* nctemp12607=PtreeGetname(nctemp12605);
nctempchar1* nctemp12603= nctemp12607;
struct nctempchar1 *nctemp12610;
static struct nctempchar1 nctemp12611 = {{ 10}, (char*)"compstmnt\0"};
nctemp12610=&nctemp12611;
nctempchar1* nctemp12608= nctemp12610;
int nctemp12612=LibeStrcmp(nctemp12603,nctemp12608);
int nctemp12600 = (nctemp12612 ==1);
if(nctemp12600)
{
struct tree* nctemp12618= p;
struct tree* nctemp12620=PtreeMvchild(nctemp12618);
p =nctemp12620;
struct tree* nctemp12622= p;
struct symbol* nctemp12626=SymGetltp();
struct symbol* nctemp12624= nctemp12626;
int nctemp12627=CodeDeclarations(nctemp12622,nctemp12624);
struct tree* nctemp12633= p;
nctempchar1* nctemp12635=PtreeGetname(nctemp12633);
nctempchar1* nctemp12631= nctemp12635;
struct nctempchar1 *nctemp12638;
static struct nctempchar1 nctemp12639 = {{ 13}, (char*)"declarations\0"};
nctemp12638=&nctemp12639;
nctempchar1* nctemp12636= nctemp12638;
int nctemp12640=LibeStrcmp(nctemp12631,nctemp12636);
int nctemp12628 = (nctemp12640 ==1);
if(nctemp12628)
{
struct tree* nctemp12646= p;
struct tree* nctemp12648=PtreeMvsister(nctemp12646);
p =nctemp12648;
}
}
int nctemp12649 = (p !=0);
int nctemp12653=nctemp12649;
while(nctemp12653)
{{
struct tree* nctemp12659= p;
nctempchar1* nctemp12661=PtreeGetname(nctemp12659);
nctempchar1* nctemp12657= nctemp12661;
struct nctempchar1 *nctemp12664;
static struct nctempchar1 nctemp12665 = {{ 10}, (char*)"compstmnt\0"};
nctemp12664=&nctemp12665;
nctempchar1* nctemp12662= nctemp12664;
int nctemp12666=LibeStrcmp(nctemp12657,nctemp12662);
int nctemp12654 = (nctemp12666 ==1);
if(nctemp12654)
{
struct tree* nctemp12669= p;
int nctemp12671=CodeCompstmnt(nctemp12669);
}
struct tree* nctemp12677= p;
nctempchar1* nctemp12679=PtreeGetname(nctemp12677);
nctempchar1* nctemp12675= nctemp12679;
struct nctempchar1 *nctemp12682;
static struct nctempchar1 nctemp12683 = {{ 5}, (char*)"expr\0"};
nctemp12682=&nctemp12683;
nctempchar1* nctemp12680= nctemp12682;
int nctemp12684=LibeStrcmp(nctemp12675,nctemp12680);
int nctemp12672 = (nctemp12684 ==1);
if(nctemp12672)
{
int nctemp12689=CodeGetbreak();
int nctemp12686 = (nctemp12689 ==1);
if(nctemp12686)
{
struct tree* nctemp12692= p;
nctempchar1* nctemp12694=CodeExpr(nctemp12692);
}
else{
struct tree* nctemp12698= p;
int nctemp12700=PtreeGetsimple(nctemp12698);
int nctemp12695 = (nctemp12700 ==1);
if(nctemp12695)
{
struct tree* nctemp12703= p;
int nctemp12705=CodeSexpr(nctemp12703);
struct tree* nctemp12707= p;
struct nctempchar1 *nctemp12711;
static struct nctempchar1 nctemp12712 = {{ 4}, (char*)";\n\0"};
nctemp12711=&nctemp12712;
nctempchar1* nctemp12709= nctemp12711;
int nctemp12713=CodeEs(nctemp12707,nctemp12709);
}
else{
struct tree* nctemp12715= p;
nctempchar1* nctemp12717=CodeExpr(nctemp12715);
}
}
}
struct tree* nctemp12723= p;
nctempchar1* nctemp12725=PtreeGetname(nctemp12723);
nctempchar1* nctemp12721= nctemp12725;
struct nctempchar1 *nctemp12728;
static struct nctempchar1 nctemp12729 = {{ 6}, (char*)"while\0"};
nctemp12728=&nctemp12729;
nctempchar1* nctemp12726= nctemp12728;
int nctemp12730=LibeStrcmp(nctemp12721,nctemp12726);
int nctemp12718 = (nctemp12730 ==1);
if(nctemp12718)
{
struct tree* nctemp12733= p;
int nctemp12735=CodeWhilestmnt(nctemp12733);
}
struct tree* nctemp12741= p;
nctempchar1* nctemp12743=PtreeGetname(nctemp12741);
nctempchar1* nctemp12739= nctemp12743;
struct nctempchar1 *nctemp12746;
static struct nctempchar1 nctemp12747 = {{ 4}, (char*)"for\0"};
nctemp12746=&nctemp12747;
nctempchar1* nctemp12744= nctemp12746;
int nctemp12748=LibeStrcmp(nctemp12739,nctemp12744);
int nctemp12736 = (nctemp12748 ==1);
if(nctemp12736)
{
struct tree* nctemp12754= p;
struct tree* nctemp12756=PtreeMvchild(nctemp12754);
q =nctemp12756;
struct tree* nctemp12761= q;
struct tree* nctemp12763=PtreeMvsister(nctemp12761);
r =nctemp12763;
struct tree* nctemp12770= q;
int nctemp12772=PtreeGetsimple(nctemp12770);
struct tree* nctemp12774= r;
int nctemp12776=PtreeGetsimple(nctemp12774);
int nctemp12767 = (nctemp12772 && nctemp12776);
struct tree* nctemp12780= r;
struct tree* nctemp12782=PtreeMvsister(nctemp12780);
struct tree* nctemp12778= nctemp12782;
int nctemp12783=PtreeGetsimple(nctemp12778);
int nctemp12764 = (nctemp12767 && nctemp12783);
if(nctemp12764)
{
struct tree* nctemp12785= p;
int nctemp12787=CodeSforstmnt(nctemp12785);
}
else{
struct tree* nctemp12789= q;
int nctemp12791= 0;
int nctemp12793=PtreeSetsimple(nctemp12789,nctemp12791);
struct tree* nctemp12795= r;
int nctemp12797= 0;
int nctemp12799=PtreeSetsimple(nctemp12795,nctemp12797);
struct tree* nctemp12803= r;
struct tree* nctemp12805=PtreeMvsister(nctemp12803);
struct tree* nctemp12801= nctemp12805;
int nctemp12806= 0;
int nctemp12808=PtreeSetsimple(nctemp12801,nctemp12806);
struct tree* nctemp12810= p;
int nctemp12812=CodeForstmnt(nctemp12810);
}
}
struct tree* nctemp12818= p;
nctempchar1* nctemp12820=PtreeGetname(nctemp12818);
nctempchar1* nctemp12816= nctemp12820;
struct nctempchar1 *nctemp12823;
static struct nctempchar1 nctemp12824 = {{ 9}, (char*)"parallel\0"};
nctemp12823=&nctemp12824;
nctempchar1* nctemp12821= nctemp12823;
int nctemp12825=LibeStrcmp(nctemp12816,nctemp12821);
int nctemp12813 = (nctemp12825 ==1);
if(nctemp12813)
{
struct tree* nctemp12828= p;
int nctemp12830=CodeParallelstmnt(nctemp12828);
}
struct tree* nctemp12836= p;
nctempchar1* nctemp12838=PtreeGetname(nctemp12836);
nctempchar1* nctemp12834= nctemp12838;
struct nctempchar1 *nctemp12841;
static struct nctempchar1 nctemp12842 = {{ 3}, (char*)"if\0"};
nctemp12841=&nctemp12842;
nctempchar1* nctemp12839= nctemp12841;
int nctemp12843=LibeStrcmp(nctemp12834,nctemp12839);
int nctemp12831 = (nctemp12843 ==1);
if(nctemp12831)
{
struct tree* nctemp12846= p;
int nctemp12848=CodeIfstmnt(nctemp12846);
}
struct tree* nctemp12854= p;
nctempchar1* nctemp12856=PtreeGetname(nctemp12854);
nctempchar1* nctemp12852= nctemp12856;
struct nctempchar1 *nctemp12859;
static struct nctempchar1 nctemp12860 = {{ 7}, (char*)"return\0"};
nctemp12859=&nctemp12860;
nctempchar1* nctemp12857= nctemp12859;
int nctemp12861=LibeStrcmp(nctemp12852,nctemp12857);
int nctemp12849 = (nctemp12861 ==1);
if(nctemp12849)
{
struct tree* nctemp12864= p;
int nctemp12866=CodeReturnstmnt(nctemp12864);
}
struct tree* nctemp12871= p;
struct tree* nctemp12873=PtreeMvsister(nctemp12871);
p =nctemp12873;
}
int nctemp12874 = (p !=0);
nctemp12653=nctemp12874;}struct tree* nctemp12879= sp;
struct nctempchar1 *nctemp12883;
static struct nctempchar1 nctemp12884 = {{ 4}, (char*)"}\n\0"};
nctemp12883=&nctemp12884;
nctempchar1* nctemp12881= nctemp12883;
int nctemp12885=CodeEs(nctemp12879,nctemp12881);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12888= p;
nctempchar1* nctemp12890= pointer;
int nctemp12893=CodeEs(nctemp12888,nctemp12890);
struct tree* nctemp12895= p;
struct nctempchar1 *nctemp12899;
static struct nctempchar1 nctemp12900 = {{ 2}, (char*)"=\0"};
nctemp12899=&nctemp12900;
nctempchar1* nctemp12897= nctemp12899;
int nctemp12901=CodeEs(nctemp12895,nctemp12897);
struct tree* nctemp12903= p;
struct nctempchar1 *nctemp12907;
static struct nctempchar1 nctemp12908 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12907=&nctemp12908;
nctempchar1* nctemp12905= nctemp12907;
int nctemp12909=CodeEs(nctemp12903,nctemp12905);
struct tree* nctemp12911= p;
struct nctempchar1 *nctemp12915;
static struct nctempchar1 nctemp12916 = {{ 8}, (char*)"sizeof(\0"};
nctemp12915=&nctemp12916;
nctempchar1* nctemp12913= nctemp12915;
int nctemp12917=CodeEs(nctemp12911,nctemp12913);
struct tree* nctemp12919= p;
nctempchar1* nctemp12921= pointer;
int nctemp12924=CodeEs(nctemp12919,nctemp12921);
struct tree* nctemp12926= p;
struct nctempchar1 *nctemp12930;
static struct nctempchar1 nctemp12931 = {{ 6}, (char*)"));\n\0"};
nctemp12930=&nctemp12931;
nctempchar1* nctemp12928= nctemp12930;
int nctemp12932=CodeEs(nctemp12926,nctemp12928);
return 1;
}
nctempchar1 * CodeDims (nctempchar1 *type,int rank)
{
nctempchar1 *extension;
nctempchar1 *str;
nctempchar1 *tmp;
nctempchar1 *funcname;
nctempchar1* nctemp12937= type;
struct nctempchar1 *nctemp12942;
static struct nctempchar1 nctemp12943 = {{ 6}, (char*)"float\0"};
nctemp12942=&nctemp12943;
nctempchar1* nctemp12940= nctemp12942;
int nctemp12944=LibeStrcmp(nctemp12937,nctemp12940);
int nctemp12934 = (nctemp12944 ==1);
if(nctemp12934)
{
struct nctempchar1 *nctemp12951;
static struct nctempchar1 nctemp12952 = {{ 3}, (char*)"df\0"};
nctemp12951=&nctemp12952;
extension=nctemp12951;
}
else{
nctempchar1* nctemp12956= type;
struct nctempchar1 *nctemp12961;
static struct nctempchar1 nctemp12962 = {{ 4}, (char*)"int\0"};
nctemp12961=&nctemp12962;
nctempchar1* nctemp12959= nctemp12961;
int nctemp12963=LibeStrcmp(nctemp12956,nctemp12959);
int nctemp12953 = (nctemp12963 ==1);
if(nctemp12953)
{
struct nctempchar1 *nctemp12970;
static struct nctempchar1 nctemp12971 = {{ 3}, (char*)"di\0"};
nctemp12970=&nctemp12971;
extension=nctemp12970;
}
else{
nctempchar1* nctemp12975= type;
struct nctempchar1 *nctemp12980;
static struct nctempchar1 nctemp12981 = {{ 5}, (char*)"char\0"};
nctemp12980=&nctemp12981;
nctempchar1* nctemp12978= nctemp12980;
int nctemp12982=LibeStrcmp(nctemp12975,nctemp12978);
int nctemp12972 = (nctemp12982 ==1);
if(nctemp12972)
{
int nctemp12984 = (rank > 1);
if(nctemp12984)
{
struct nctempchar1 *nctemp12991;
static struct nctempchar1 nctemp12992 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp12991=&nctemp12992;
nctempchar1* nctemp12989= nctemp12991;
int nctemp12993=CodeError(nctemp12989);
}
else{
struct nctempchar1 *nctemp12999;
static struct nctempchar1 nctemp13000 = {{ 3}, (char*)"dc\0"};
nctemp12999=&nctemp13000;
extension=nctemp12999;
}
}
else{
struct nctempchar1 *nctemp13004;
static struct nctempchar1 nctemp13005 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13004=&nctemp13005;
nctempchar1* nctemp13002= nctemp13004;
int nctemp13006=CodeError(nctemp13002);
}
}
}
struct nctempchar1 *nctemp13014;
static struct nctempchar1 nctemp13015 = {{ 2}, (char*)" \0"};
nctemp13014=&nctemp13015;
nctempchar1* nctemp13012= nctemp13014;
nctempchar1* nctemp13016=LibeStrsave(nctemp13012);
str=nctemp13016;
int nctemp13018= rank;
nctempchar1* nctemp13020= str;
int nctemp13023=LibeItoa(nctemp13018,nctemp13020);
struct nctempchar1 *nctemp13031;
static struct nctempchar1 nctemp13032 = {{ 5}, (char*)"Dims\0"};
nctemp13031=&nctemp13032;
nctempchar1* nctemp13029= nctemp13031;
nctempchar1* nctemp13033= str;
nctempchar1* nctemp13036=LibeStradd(nctemp13029,nctemp13033);
tmp=nctemp13036;
nctempchar1* nctemp13042= tmp;
nctempchar1* nctemp13045= extension;
nctempchar1* nctemp13048=LibeStradd(nctemp13042,nctemp13045);
funcname=nctemp13048;
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
nctempchar1* nctemp13057= type;
struct nctempchar1 *nctemp13062;
static struct nctempchar1 nctemp13063 = {{ 6}, (char*)"float\0"};
nctemp13062=&nctemp13063;
nctempchar1* nctemp13060= nctemp13062;
int nctemp13064=LibeStrcmp(nctemp13057,nctemp13060);
int nctemp13054 = (nctemp13064 ==1);
if(nctemp13054)
{
struct nctempchar1 *nctemp13071;
static struct nctempchar1 nctemp13072 = {{ 3}, (char*)"df\0"};
nctemp13071=&nctemp13072;
extension=nctemp13071;
}
else{
nctempchar1* nctemp13076= type;
struct nctempchar1 *nctemp13081;
static struct nctempchar1 nctemp13082 = {{ 4}, (char*)"int\0"};
nctemp13081=&nctemp13082;
nctempchar1* nctemp13079= nctemp13081;
int nctemp13083=LibeStrcmp(nctemp13076,nctemp13079);
int nctemp13073 = (nctemp13083 ==1);
if(nctemp13073)
{
struct nctempchar1 *nctemp13090;
static struct nctempchar1 nctemp13091 = {{ 3}, (char*)"di\0"};
nctemp13090=&nctemp13091;
extension=nctemp13090;
}
else{
nctempchar1* nctemp13095= type;
struct nctempchar1 *nctemp13100;
static struct nctempchar1 nctemp13101 = {{ 5}, (char*)"char\0"};
nctemp13100=&nctemp13101;
nctempchar1* nctemp13098= nctemp13100;
int nctemp13102=LibeStrcmp(nctemp13095,nctemp13098);
int nctemp13092 = (nctemp13102 ==1);
if(nctemp13092)
{
int nctemp13104 = (rank > 1);
if(nctemp13104)
{
struct nctempchar1 *nctemp13111;
static struct nctempchar1 nctemp13112 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp13111=&nctemp13112;
nctempchar1* nctemp13109= nctemp13111;
int nctemp13113=CodeError(nctemp13109);
}
else{
struct nctempchar1 *nctemp13119;
static struct nctempchar1 nctemp13120 = {{ 3}, (char*)"dc\0"};
nctemp13119=&nctemp13120;
extension=nctemp13119;
}
}
else{
struct nctempchar1 *nctemp13124;
static struct nctempchar1 nctemp13125 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13124=&nctemp13125;
nctempchar1* nctemp13122= nctemp13124;
int nctemp13126=CodeError(nctemp13122);
}
}
}
struct nctempchar1 *nctemp13134;
static struct nctempchar1 nctemp13135 = {{ 2}, (char*)" \0"};
nctemp13134=&nctemp13135;
nctempchar1* nctemp13132= nctemp13134;
nctempchar1* nctemp13136=LibeStrsave(nctemp13132);
str=nctemp13136;
int nctemp13138= rank;
nctempchar1* nctemp13140= str;
int nctemp13143=LibeItoa(nctemp13138,nctemp13140);
struct nctempchar1 *nctemp13151;
static struct nctempchar1 nctemp13152 = {{ 4}, (char*)"eps\0"};
nctemp13151=&nctemp13152;
nctempchar1* nctemp13149= nctemp13151;
nctempchar1* nctemp13153= str;
nctempchar1* nctemp13156=LibeStradd(nctemp13149,nctemp13153);
tmp=nctemp13156;
nctempchar1* nctemp13162= tmp;
nctempchar1* nctemp13165= extension;
nctempchar1* nctemp13168=LibeStradd(nctemp13162,nctemp13165);
funcname=nctemp13168;
RunFree(tmp->a);
RunFree(tmp);
return funcname;
}
int CodeCrerval (struct tree* p,int rank,nctempchar1 *type)
{
struct tree* nctemp13175= p;
int nctemp13177=CodeEind(nctemp13175);
nctempchar1* nctemp13179= type;
struct nctempchar1 *nctemp13184;
static struct nctempchar1 nctemp13185 = {{ 4}, (char*)"int\0"};
nctemp13184=&nctemp13185;
nctempchar1* nctemp13182= nctemp13184;
int nctemp13186=LibeStrcmp(nctemp13179,nctemp13182);
if(nctemp13186)
{
struct tree* nctemp13188= p;
struct nctempchar1 *nctemp13192;
static struct nctempchar1 nctemp13193 = {{ 29}, (char*)"rval=pyeps.Izeros(pyeps.Dims\0"};
nctemp13192=&nctemp13193;
nctempchar1* nctemp13190= nctemp13192;
int nctemp13194=CodeEs(nctemp13188,nctemp13190);
int nctemp13196= rank;
int nctemp13198=CodeEd(nctemp13196);
struct tree* nctemp13200= p;
struct nctempchar1 *nctemp13204;
static struct nctempchar1 nctemp13205 = {{ 13}, (char*)"di(r_val))\n\0"};
nctemp13204=&nctemp13205;
nctempchar1* nctemp13202= nctemp13204;
int nctemp13206=CodeEs(nctemp13200,nctemp13202);
return 1;
}
else{
nctempchar1* nctemp13209= type;
struct nctempchar1 *nctemp13214;
static struct nctempchar1 nctemp13215 = {{ 6}, (char*)"float\0"};
nctemp13214=&nctemp13215;
nctempchar1* nctemp13212= nctemp13214;
int nctemp13216=LibeStrcmp(nctemp13209,nctemp13212);
if(nctemp13216)
{
struct tree* nctemp13218= p;
struct nctempchar1 *nctemp13222;
static struct nctempchar1 nctemp13223 = {{ 29}, (char*)"rval=pyeps.Fzeros(pyeps.Dims\0"};
nctemp13222=&nctemp13223;
nctempchar1* nctemp13220= nctemp13222;
int nctemp13224=CodeEs(nctemp13218,nctemp13220);
int nctemp13226= rank;
int nctemp13228=CodeEd(nctemp13226);
struct tree* nctemp13230= p;
struct nctempchar1 *nctemp13234;
static struct nctempchar1 nctemp13235 = {{ 13}, (char*)"df(r_val))\n\0"};
nctemp13234=&nctemp13235;
nctempchar1* nctemp13232= nctemp13234;
int nctemp13236=CodeEs(nctemp13230,nctemp13232);
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
nctempchar1* nctemp13242= type;
struct nctempchar1 *nctemp13247;
static struct nctempchar1 nctemp13248 = {{ 6}, (char*)"float\0"};
nctemp13247=&nctemp13248;
nctempchar1* nctemp13245= nctemp13247;
int nctemp13249=LibeStrcmp(nctemp13242,nctemp13245);
int nctemp13239 = (nctemp13249 ==1);
if(nctemp13239)
{
struct nctempchar1 *nctemp13256;
static struct nctempchar1 nctemp13257 = {{ 3}, (char*)"df\0"};
nctemp13256=&nctemp13257;
extension=nctemp13256;
}
else{
nctempchar1* nctemp13261= type;
struct nctempchar1 *nctemp13266;
static struct nctempchar1 nctemp13267 = {{ 4}, (char*)"int\0"};
nctemp13266=&nctemp13267;
nctempchar1* nctemp13264= nctemp13266;
int nctemp13268=LibeStrcmp(nctemp13261,nctemp13264);
int nctemp13258 = (nctemp13268 ==1);
if(nctemp13258)
{
struct nctempchar1 *nctemp13275;
static struct nctempchar1 nctemp13276 = {{ 3}, (char*)"di\0"};
nctemp13275=&nctemp13276;
extension=nctemp13275;
}
else{
nctempchar1* nctemp13280= type;
struct nctempchar1 *nctemp13285;
static struct nctempchar1 nctemp13286 = {{ 5}, (char*)"char\0"};
nctemp13285=&nctemp13286;
nctempchar1* nctemp13283= nctemp13285;
int nctemp13287=LibeStrcmp(nctemp13280,nctemp13283);
int nctemp13277 = (nctemp13287 ==1);
if(nctemp13277)
{
int nctemp13289 = (rank > 1);
if(nctemp13289)
{
struct nctempchar1 *nctemp13296;
static struct nctempchar1 nctemp13297 = {{ 58}, (char*)"Multidimensional char arrays are not supported for python\0"};
nctemp13296=&nctemp13297;
nctempchar1* nctemp13294= nctemp13296;
int nctemp13298=CodeError(nctemp13294);
}
else{
struct nctempchar1 *nctemp13304;
static struct nctempchar1 nctemp13305 = {{ 3}, (char*)"dc\0"};
nctemp13304=&nctemp13305;
extension=nctemp13304;
}
}
else{
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 30}, (char*)"Type not supported for Python\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeError(nctemp13307);
}
}
}
struct nctempchar1 *nctemp13319;
static struct nctempchar1 nctemp13320 = {{ 2}, (char*)" \0"};
nctemp13319=&nctemp13320;
nctempchar1* nctemp13317= nctemp13319;
nctempchar1* nctemp13321=LibeStrsave(nctemp13317);
str=nctemp13321;
int nctemp13323= rank;
nctempchar1* nctemp13325= str;
int nctemp13328=LibeItoa(nctemp13323,nctemp13325);
struct nctempchar1 *nctemp13336;
static struct nctempchar1 nctemp13337 = {{ 4}, (char*)"num\0"};
nctemp13336=&nctemp13337;
nctempchar1* nctemp13334= nctemp13336;
nctempchar1* nctemp13338= str;
nctempchar1* nctemp13341=LibeStradd(nctemp13334,nctemp13338);
tmp=nctemp13341;
nctempchar1* nctemp13347= tmp;
nctempchar1* nctemp13350= extension;
nctempchar1* nctemp13353=LibeStradd(nctemp13347,nctemp13350);
funcname=nctemp13353;
RunFree(tmp->a);
RunFree(tmp);
return funcname;
}
int CodePyreturn (struct tree* functionode)
{
int rank;
nctempchar1 *type;
struct tree* nctemp13367= functionode;
nctempchar1* nctemp13369=PtreeGetstruct(nctemp13367);
nctempchar1* nctemp13365= nctemp13369;
struct nctempchar1 *nctemp13372;
static struct nctempchar1 nctemp13373 = {{ 7}, (char*)"struct\0"};
nctemp13372=&nctemp13373;
nctempchar1* nctemp13370= nctemp13372;
int nctemp13374=LibeStrcmp(nctemp13365,nctemp13370);
int nctemp13362 = (nctemp13374 ==0);
struct tree* nctemp13382= functionode;
nctempchar1* nctemp13384=PtreeGetarray(nctemp13382);
nctempchar1* nctemp13380= nctemp13384;
struct nctempchar1 *nctemp13387;
static struct nctempchar1 nctemp13388 = {{ 6}, (char*)"array\0"};
nctemp13387=&nctemp13388;
nctempchar1* nctemp13385= nctemp13387;
int nctemp13389=LibeStrcmp(nctemp13380,nctemp13385);
int nctemp13377 = (nctemp13389 ==1);
int nctemp13359 = (nctemp13362 && nctemp13377);
if(nctemp13359)
{
struct tree* nctemp13395= functionode;
int nctemp13397=PtreeGetrank(nctemp13395);
rank =nctemp13397;
struct tree* nctemp13403= functionode;
nctempchar1* nctemp13405=PtreeGetype(nctemp13403);
type=nctemp13405;
struct tree* nctemp13407= functionode;
int nctemp13409=CodeEind(nctemp13407);
nctempchar1* nctemp13413= type;
struct nctempchar1 *nctemp13418;
static struct nctempchar1 nctemp13419 = {{ 5}, (char*)"char\0"};
nctemp13418=&nctemp13419;
nctempchar1* nctemp13416= nctemp13418;
int nctemp13420=LibeStrcmp(nctemp13413,nctemp13416);
int nctemp13410 = (nctemp13420 ==1);
if(nctemp13410)
{
struct tree* nctemp13423= functionode;
struct nctempchar1 *nctemp13427;
static struct nctempchar1 nctemp13428 = {{ 12}, (char*)"rval=pyeps.\0"};
nctemp13427=&nctemp13428;
nctempchar1* nctemp13425= nctemp13427;
int nctemp13429=CodeEs(nctemp13423,nctemp13425);
struct tree* nctemp13431= functionode;
nctempchar1* nctemp13435= type;
int nctemp13438= rank;
nctempchar1* nctemp13440=CodeGetfunc(nctemp13435,nctemp13438);
nctempchar1* nctemp13433= nctemp13440;
int nctemp13441=CodeEs(nctemp13431,nctemp13433);
struct tree* nctemp13443= functionode;
struct nctempchar1 *nctemp13447;
static struct nctempchar1 nctemp13448 = {{ 16}, (char*)"(pylib,r_val)\n\0"};
nctemp13447=&nctemp13448;
nctempchar1* nctemp13445= nctemp13447;
int nctemp13449=CodeEs(nctemp13443,nctemp13445);
}
else{
struct tree* nctemp13451= functionode;
struct nctempchar1 *nctemp13455;
static struct nctempchar1 nctemp13456 = {{ 12}, (char*)"rval=pyeps.\0"};
nctemp13455=&nctemp13456;
nctempchar1* nctemp13453= nctemp13455;
int nctemp13457=CodeEs(nctemp13451,nctemp13453);
struct tree* nctemp13459= functionode;
nctempchar1* nctemp13463= type;
int nctemp13466= rank;
nctempchar1* nctemp13468=CodeGetfunc(nctemp13463,nctemp13466);
nctempchar1* nctemp13461= nctemp13468;
int nctemp13469=CodeEs(nctemp13459,nctemp13461);
struct tree* nctemp13471= functionode;
struct nctempchar1 *nctemp13475;
static struct nctempchar1 nctemp13476 = {{ 10}, (char*)"(r_val)\n\0"};
nctemp13475=&nctemp13476;
nctempchar1* nctemp13473= nctemp13475;
int nctemp13477=CodeEs(nctemp13471,nctemp13473);
}
}
else{
struct tree* nctemp13479= functionode;
int nctemp13481=CodeEind(nctemp13479);
struct tree* nctemp13483= functionode;
struct nctempchar1 *nctemp13487;
static struct nctempchar1 nctemp13488 = {{ 13}, (char*)"rval=r_val\n\0"};
nctemp13487=&nctemp13488;
nctempchar1* nctemp13485= nctemp13487;
int nctemp13489=CodeEs(nctemp13483,nctemp13485);
}
return 1;
}
int CodePyreturntype (struct tree* functionode)
{
nctempchar1 *fname;
nctempchar1 *farray;
nctempchar1 *rtype;
nctempchar1 *fstruct;
struct tree* nctemp13496= functionode;
nctempchar1* nctemp13498=PtreeGetdef(nctemp13496);
fname=nctemp13498;
struct tree* nctemp13504= functionode;
nctempchar1* nctemp13506=PtreeGetarray(nctemp13504);
farray=nctemp13506;
struct tree* nctemp13512= functionode;
nctempchar1* nctemp13514=PtreeGetype(nctemp13512);
rtype=nctemp13514;
struct tree* nctemp13520= functionode;
nctempchar1* nctemp13522=PtreeGetstruct(nctemp13520);
fstruct=nctemp13522;
struct tree* nctemp13524= functionode;
int nctemp13526=CodeEind(nctemp13524);
struct tree* nctemp13528= functionode;
struct nctempchar1 *nctemp13532;
static struct nctempchar1 nctemp13533 = {{ 7}, (char*)"pylib.\0"};
nctemp13532=&nctemp13533;
nctempchar1* nctemp13530= nctemp13532;
int nctemp13534=CodeEs(nctemp13528,nctemp13530);
struct tree* nctemp13536= functionode;
nctempchar1* nctemp13538= fname;
int nctemp13541=CodeEs(nctemp13536,nctemp13538);
struct tree* nctemp13543= functionode;
struct nctempchar1 *nctemp13547;
static struct nctempchar1 nctemp13548 = {{ 10}, (char*)".restype=\0"};
nctemp13547=&nctemp13548;
nctempchar1* nctemp13545= nctemp13547;
int nctemp13549=CodeEs(nctemp13543,nctemp13545);
nctempchar1* nctemp13556= farray;
struct nctempchar1 *nctemp13561;
static struct nctempchar1 nctemp13562 = {{ 6}, (char*)"array\0"};
nctemp13561=&nctemp13562;
nctempchar1* nctemp13559= nctemp13561;
int nctemp13563=LibeStrcmp(nctemp13556,nctemp13559);
int nctemp13553 = (nctemp13563 ==0);
nctempchar1* nctemp13569= fstruct;
struct nctempchar1 *nctemp13574;
static struct nctempchar1 nctemp13575 = {{ 7}, (char*)"struct\0"};
nctemp13574=&nctemp13575;
nctempchar1* nctemp13572= nctemp13574;
int nctemp13576=LibeStrcmp(nctemp13569,nctemp13572);
int nctemp13566 = (nctemp13576 ==0);
int nctemp13550 = (nctemp13553 && nctemp13566);
if(nctemp13550)
{
struct tree* nctemp13579= functionode;
nctempchar1* nctemp13581= rtype;
int nctemp13584=CodeEs(nctemp13579,nctemp13581);
struct tree* nctemp13586= functionode;
struct nctempchar1 *nctemp13590;
static struct nctempchar1 nctemp13591 = {{ 3}, (char*)"\n\0"};
nctemp13590=&nctemp13591;
nctempchar1* nctemp13588= nctemp13590;
int nctemp13592=CodeEs(nctemp13586,nctemp13588);
}
else{
struct tree* nctemp13594= functionode;
struct nctempchar1 *nctemp13598;
static struct nctempchar1 nctemp13599 = {{ 11}, (char*)"c_void_p\n\0"};
nctemp13598=&nctemp13599;
nctempchar1* nctemp13596= nctemp13598;
int nctemp13600=CodeEs(nctemp13594,nctemp13596);
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
int nctemp13606=CodeGetfdout();
fdcout =nctemp13606;
int nctemp13610=CodeGetfdpython();
int nctemp13608= nctemp13610;
int nctemp13611=CodeSetfdout(nctemp13608);
struct tree* nctemp13616= p;
struct tree* nctemp13618=PtreeMvchild(nctemp13616);
p =nctemp13618;
struct tree* nctemp13624= p;
nctempchar1* nctemp13626=PtreeGetname(nctemp13624);
nctempchar1* nctemp13622= nctemp13626;
struct nctempchar1 *nctemp13629;
static struct nctempchar1 nctemp13630 = {{ 10}, (char*)"arrayargs\0"};
nctemp13629=&nctemp13630;
nctempchar1* nctemp13627= nctemp13629;
int nctemp13631=LibeStrcmp(nctemp13622,nctemp13627);
int nctemp13619 = (nctemp13631 ==1);
if(nctemp13619)
{
struct tree* nctemp13637= p;
struct tree* nctemp13639=PtreeMvsister(nctemp13637);
p =nctemp13639;
}
functionode = p;
struct tree* nctemp13645= p;
nctempchar1* nctemp13647=PtreeGetdef(nctemp13645);
fname=nctemp13647;
struct tree* nctemp13649= p;
struct nctempchar1 *nctemp13653;
static struct nctempchar1 nctemp13654 = {{ 5}, (char*)"def \0"};
nctemp13653=&nctemp13654;
nctempchar1* nctemp13651= nctemp13653;
int nctemp13655=CodeEs(nctemp13649,nctemp13651);
struct tree* nctemp13657= p;
nctempchar1* nctemp13659= fname;
int nctemp13662=CodeEs(nctemp13657,nctemp13659);
struct tree* nctemp13668= p;
nctempchar1* nctemp13670=PtreeGetype(nctemp13668);
rtype=nctemp13670;
struct tree* nctemp13676= p;
nctempchar1* nctemp13678=PtreeGetarray(nctemp13676);
farray=nctemp13678;
struct tree* nctemp13684= p;
nctempchar1* nctemp13686=PtreeGetstruct(nctemp13684);
fstruct=nctemp13686;
struct tree* nctemp13691= functionode;
struct tree* nctemp13693=PtreeMvchild(nctemp13691);
arglist =nctemp13693;
struct tree* nctemp13699= arglist;
nctempchar1* nctemp13701=PtreeGetname(nctemp13699);
nctempchar1* nctemp13697= nctemp13701;
struct nctempchar1 *nctemp13704;
static struct nctempchar1 nctemp13705 = {{ 8}, (char*)"arglist\0"};
nctemp13704=&nctemp13705;
nctempchar1* nctemp13702= nctemp13704;
int nctemp13706=LibeStrcmp(nctemp13697,nctemp13702);
int nctemp13694 = (nctemp13706 ==0);
if(nctemp13694)
{
noarg = 1;
}
else{
noarg = 0;
}
int nctemp13708 = (noarg ==1);
if(nctemp13708)
{
struct tree* nctemp13713= p;
struct nctempchar1 *nctemp13717;
static struct nctempchar1 nctemp13718 = {{ 7}, (char*)"() :\n\0"};
nctemp13717=&nctemp13718;
nctempchar1* nctemp13715= nctemp13717;
int nctemp13719=CodeEs(nctemp13713,nctemp13715);
struct tree* nctemp13721= functionode;
int nctemp13723=CodePyreturntype(nctemp13721);
struct tree* nctemp13725= p;
int nctemp13727=CodeEind(nctemp13725);
struct tree* nctemp13729= p;
struct nctempchar1 *nctemp13733;
static struct nctempchar1 nctemp13734 = {{ 13}, (char*)"r_val=pylib.\0"};
nctemp13733=&nctemp13734;
nctempchar1* nctemp13731= nctemp13733;
int nctemp13735=CodeEs(nctemp13729,nctemp13731);
struct tree* nctemp13737= p;
nctempchar1* nctemp13739= fname;
int nctemp13742=CodeEs(nctemp13737,nctemp13739);
struct tree* nctemp13744= p;
struct nctempchar1 *nctemp13748;
static struct nctempchar1 nctemp13749 = {{ 5}, (char*)"()\n\0"};
nctemp13748=&nctemp13749;
nctempchar1* nctemp13746= nctemp13748;
int nctemp13750=CodeEs(nctemp13744,nctemp13746);
struct tree* nctemp13752= functionode;
int nctemp13754=CodePyreturn(nctemp13752);
struct tree* nctemp13756= p;
int nctemp13758=CodeEind(nctemp13756);
struct tree* nctemp13760= p;
struct nctempchar1 *nctemp13764;
static struct nctempchar1 nctemp13765 = {{ 14}, (char*)"return rval\n\0"};
nctemp13764=&nctemp13765;
nctempchar1* nctemp13762= nctemp13764;
int nctemp13766=CodeEs(nctemp13760,nctemp13762);
int nctemp13768= fdcout;
int nctemp13770=CodeSetfdout(nctemp13768);
return 1;
}
else{
struct tree* nctemp13773= p;
struct nctempchar1 *nctemp13777;
static struct nctempchar1 nctemp13778 = {{ 2}, (char*)"(\0"};
nctemp13777=&nctemp13778;
nctempchar1* nctemp13775= nctemp13777;
int nctemp13779=CodeEs(nctemp13773,nctemp13775);
}
struct symbol* nctemp13784=SymGetetp();
tp =nctemp13784;
struct tree* nctemp13791= p;
nctempchar1* nctemp13793=PtreeGetdef(nctemp13791);
nctempchar1* nctemp13789= nctemp13793;
struct symbol* nctemp13794= tp;
struct symbol* nctemp13796=SymLookup(nctemp13789,nctemp13794);
tp =nctemp13796;
struct symbol* nctemp13801= tp;
struct symbol* nctemp13803=SymGetable(nctemp13801);
tp =nctemp13803;
functable = tp;
struct nctempchar1 *nctemp13810;
static struct nctempchar1 nctemp13811 = {{ 9}, (char*)"#arglist\0"};
nctemp13810=&nctemp13811;
nctempchar1* nctemp13808= nctemp13810;
struct symbol* nctemp13812= tp;
struct symbol* nctemp13814=SymLookup(nctemp13808,nctemp13812);
tp =nctemp13814;
struct symbol* nctemp13819= tp;
struct symbol* nctemp13821=SymGetable(nctemp13819);
tp =nctemp13821;
tbl = tp;
tp = tbl;
struct symbol* nctemp13829= tp;
struct symbol* nctemp13831=SymMvnext(nctemp13829);
tp =nctemp13831;
int nctemp13822 = (tp !=0);
int nctemp13833=nctemp13822;
while(nctemp13833)
{{
struct tree* nctemp13835= p;
struct symbol* nctemp13839= tp;
nctempchar1* nctemp13841=SymGetname(nctemp13839);
nctempchar1* nctemp13837= nctemp13841;
int nctemp13842=CodeEs(nctemp13835,nctemp13837);
struct symbol* nctemp13846= tp;
struct symbol* nctemp13848=SymMvnext(nctemp13846);
int nctemp13843 = (nctemp13848 !=0);
if(nctemp13843)
{
struct tree* nctemp13851= p;
struct nctempchar1 *nctemp13855;
static struct nctempchar1 nctemp13856 = {{ 2}, (char*)",\0"};
nctemp13855=&nctemp13856;
nctempchar1* nctemp13853= nctemp13855;
int nctemp13857=CodeEs(nctemp13851,nctemp13853);
}
}
struct symbol* nctemp13865= tp;
struct symbol* nctemp13867=SymMvnext(nctemp13865);
tp =nctemp13867;
int nctemp13858 = (tp !=0);
nctemp13833=nctemp13858;}struct tree* nctemp13870= p;
struct nctempchar1 *nctemp13874;
static struct nctempchar1 nctemp13875 = {{ 2}, (char*)")\0"};
nctemp13874=&nctemp13875;
nctempchar1* nctemp13872= nctemp13874;
int nctemp13876=CodeEs(nctemp13870,nctemp13872);
struct tree* nctemp13878= p;
struct nctempchar1 *nctemp13882;
static struct nctempchar1 nctemp13883 = {{ 2}, (char*)":\0"};
nctemp13882=&nctemp13883;
nctempchar1* nctemp13880= nctemp13882;
int nctemp13884=CodeEs(nctemp13878,nctemp13880);
struct tree* nctemp13886= p;
struct nctempchar1 *nctemp13890;
static struct nctempchar1 nctemp13891 = {{ 3}, (char*)"\n\0"};
nctemp13890=&nctemp13891;
nctempchar1* nctemp13888= nctemp13890;
int nctemp13892=CodeEs(nctemp13886,nctemp13888);
struct tree* nctemp13894= p;
int nctemp13896=CodeEind(nctemp13894);
struct tree* nctemp13898= p;
struct nctempchar1 *nctemp13902;
static struct nctempchar1 nctemp13903 = {{ 21}, (char*)"pylib=config.pylib\n\0"};
nctemp13902=&nctemp13903;
nctempchar1* nctemp13900= nctemp13902;
int nctemp13904=CodeEs(nctemp13898,nctemp13900);
tp = tbl;
struct tree* nctemp13906= p;
int nctemp13908=CodeEind(nctemp13906);
struct tree* nctemp13910= p;
struct nctempchar1 *nctemp13914;
static struct nctempchar1 nctemp13915 = {{ 7}, (char*)"pylib.\0"};
nctemp13914=&nctemp13915;
nctempchar1* nctemp13912= nctemp13914;
int nctemp13916=CodeEs(nctemp13910,nctemp13912);
struct tree* nctemp13918= p;
nctempchar1* nctemp13920= fname;
int nctemp13923=CodeEs(nctemp13918,nctemp13920);
struct tree* nctemp13925= p;
struct nctempchar1 *nctemp13929;
static struct nctempchar1 nctemp13930 = {{ 13}, (char*)".argtypes =[\0"};
nctemp13929=&nctemp13930;
nctempchar1* nctemp13927= nctemp13929;
int nctemp13931=CodeEs(nctemp13925,nctemp13927);
struct symbol* nctemp13939= tp;
struct symbol* nctemp13941=SymMvnext(nctemp13939);
tp =nctemp13941;
int nctemp13932 = (tp !=0);
int nctemp13943=nctemp13932;
while(nctemp13943)
{{
struct symbol* nctemp13949= tp;
nctempchar1* nctemp13951=SymGetarray(nctemp13949);
nctempchar1* nctemp13947= nctemp13951;
struct nctempchar1 *nctemp13954;
static struct nctempchar1 nctemp13955 = {{ 6}, (char*)"array\0"};
nctemp13954=&nctemp13955;
nctempchar1* nctemp13952= nctemp13954;
int nctemp13956=LibeStrcmp(nctemp13947,nctemp13952);
int nctemp13944 = (nctemp13956 ==1);
if(nctemp13944)
{
struct tree* nctemp13959= p;
struct nctempchar1 *nctemp13963;
static struct nctempchar1 nctemp13964 = {{ 9}, (char*)"c_void_p\0"};
nctemp13963=&nctemp13964;
nctempchar1* nctemp13961= nctemp13963;
int nctemp13965=CodeEs(nctemp13959,nctemp13961);
}
else{
struct symbol* nctemp13971= tp;
nctempchar1* nctemp13973=SymGetstruct(nctemp13971);
nctempchar1* nctemp13969= nctemp13973;
struct nctempchar1 *nctemp13976;
static struct nctempchar1 nctemp13977 = {{ 7}, (char*)"struct\0"};
nctemp13976=&nctemp13977;
nctempchar1* nctemp13974= nctemp13976;
int nctemp13978=LibeStrcmp(nctemp13969,nctemp13974);
int nctemp13966 = (nctemp13978 ==1);
if(nctemp13966)
{
struct tree* nctemp13981= p;
struct nctempchar1 *nctemp13985;
static struct nctempchar1 nctemp13986 = {{ 9}, (char*)"c_void_p\0"};
nctemp13985=&nctemp13986;
nctempchar1* nctemp13983= nctemp13985;
int nctemp13987=CodeEs(nctemp13981,nctemp13983);
}
else{
struct tree* nctemp13989= p;
struct nctempchar1 *nctemp13993;
static struct nctempchar1 nctemp13994 = {{ 3}, (char*)"c_\0"};
nctemp13993=&nctemp13994;
nctempchar1* nctemp13991= nctemp13993;
int nctemp13995=CodeEs(nctemp13989,nctemp13991);
struct tree* nctemp13997= p;
struct symbol* nctemp14001= tp;
nctempchar1* nctemp14003=SymGetype(nctemp14001);
nctempchar1* nctemp13999= nctemp14003;
int nctemp14004=CodeEs(nctemp13997,nctemp13999);
}
}
struct symbol* nctemp14008= tp;
struct symbol* nctemp14010=SymMvnext(nctemp14008);
int nctemp14005 = (nctemp14010 !=0);
if(nctemp14005)
{
struct tree* nctemp14013= p;
struct nctempchar1 *nctemp14017;
static struct nctempchar1 nctemp14018 = {{ 2}, (char*)",\0"};
nctemp14017=&nctemp14018;
nctempchar1* nctemp14015= nctemp14017;
int nctemp14019=CodeEs(nctemp14013,nctemp14015);
}
}
struct symbol* nctemp14027= tp;
struct symbol* nctemp14029=SymMvnext(nctemp14027);
tp =nctemp14029;
int nctemp14020 = (tp !=0);
nctemp13943=nctemp14020;}struct tree* nctemp14032= p;
struct nctempchar1 *nctemp14036;
static struct nctempchar1 nctemp14037 = {{ 2}, (char*)"]\0"};
nctemp14036=&nctemp14037;
nctempchar1* nctemp14034= nctemp14036;
int nctemp14038=CodeEs(nctemp14032,nctemp14034);
struct tree* nctemp14040= p;
struct nctempchar1 *nctemp14044;
static struct nctempchar1 nctemp14045 = {{ 3}, (char*)"\n\0"};
nctemp14044=&nctemp14045;
nctempchar1* nctemp14042= nctemp14044;
int nctemp14046=CodeEs(nctemp14040,nctemp14042);
struct tree* nctemp14048= functionode;
int nctemp14050=CodePyreturntype(nctemp14048);
tp = tbl;
struct symbol* nctemp14058= tp;
struct symbol* nctemp14060=SymMvnext(nctemp14058);
tp =nctemp14060;
int nctemp14051 = (tp !=0);
int nctemp14062=nctemp14051;
while(nctemp14062)
{{
struct symbol* nctemp14071= tp;
nctempchar1* nctemp14073=SymGetarray(nctemp14071);
nctempchar1* nctemp14069= nctemp14073;
struct nctempchar1 *nctemp14076;
static struct nctempchar1 nctemp14077 = {{ 6}, (char*)"array\0"};
nctemp14076=&nctemp14077;
nctempchar1* nctemp14074= nctemp14076;
int nctemp14078=LibeStrcmp(nctemp14069,nctemp14074);
int nctemp14066 = (nctemp14078 ==1);
struct symbol* nctemp14086= tp;
nctempchar1* nctemp14088=SymGetstruct(nctemp14086);
nctempchar1* nctemp14084= nctemp14088;
struct nctempchar1 *nctemp14091;
static struct nctempchar1 nctemp14092 = {{ 7}, (char*)"struct\0"};
nctemp14091=&nctemp14092;
nctempchar1* nctemp14089= nctemp14091;
int nctemp14093=LibeStrcmp(nctemp14084,nctemp14089);
int nctemp14081 = (nctemp14093 ==0);
int nctemp14063 = (nctemp14066 && nctemp14081);
if(nctemp14063)
{
struct symbol* nctemp14100= tp;
nctempchar1* nctemp14102=SymGetname(nctemp14100);
name=nctemp14102;
struct symbol* nctemp14108= tp;
nctempchar1* nctemp14110=SymGetype(nctemp14108);
type=nctemp14110;
struct symbol* nctemp14115= tp;
int nctemp14117=SymGetrank(nctemp14115);
rank =nctemp14117;
nctempchar1* nctemp14123= type;
int nctemp14126= rank;
nctempchar1* nctemp14128=CodeStorefunc(nctemp14123,nctemp14126);
storefunc=nctemp14128;
struct tree* nctemp14130= p;
int nctemp14132=CodeEind(nctemp14130);
struct tree* nctemp14134= p;
nctempchar1* nctemp14136= name;
int nctemp14139=CodeEs(nctemp14134,nctemp14136);
struct tree* nctemp14141= p;
struct nctempchar1 *nctemp14145;
static struct nctempchar1 nctemp14146 = {{ 6}, (char*)"_eps=\0"};
nctemp14145=&nctemp14146;
nctempchar1* nctemp14143= nctemp14145;
int nctemp14147=CodeEs(nctemp14141,nctemp14143);
struct tree* nctemp14149= p;
struct nctempchar1 *nctemp14153;
static struct nctempchar1 nctemp14154 = {{ 7}, (char*)"pyeps.\0"};
nctemp14153=&nctemp14154;
nctempchar1* nctemp14151= nctemp14153;
int nctemp14155=CodeEs(nctemp14149,nctemp14151);
struct tree* nctemp14157= p;
nctempchar1* nctemp14159= storefunc;
int nctemp14162=CodeEs(nctemp14157,nctemp14159);
struct tree* nctemp14164= p;
struct nctempchar1 *nctemp14168;
static struct nctempchar1 nctemp14169 = {{ 2}, (char*)"(\0"};
nctemp14168=&nctemp14169;
nctempchar1* nctemp14166= nctemp14168;
int nctemp14170=CodeEs(nctemp14164,nctemp14166);
struct tree* nctemp14172= p;
nctempchar1* nctemp14174= name;
int nctemp14177=CodeEs(nctemp14172,nctemp14174);
struct tree* nctemp14179= p;
struct nctempchar1 *nctemp14183;
static struct nctempchar1 nctemp14184 = {{ 2}, (char*)")\0"};
nctemp14183=&nctemp14184;
nctempchar1* nctemp14181= nctemp14183;
int nctemp14185=CodeEs(nctemp14179,nctemp14181);
struct tree* nctemp14187= p;
struct nctempchar1 *nctemp14191;
static struct nctempchar1 nctemp14192 = {{ 3}, (char*)"\n\0"};
nctemp14191=&nctemp14192;
nctempchar1* nctemp14189= nctemp14191;
int nctemp14193=CodeEs(nctemp14187,nctemp14189);
}
}
struct symbol* nctemp14201= tp;
struct symbol* nctemp14203=SymMvnext(nctemp14201);
tp =nctemp14203;
int nctemp14194 = (tp !=0);
nctemp14062=nctemp14194;}tp = tbl;
struct tree* nctemp14206= p;
int nctemp14208=CodeEind(nctemp14206);
struct tree* nctemp14210= p;
struct nctempchar1 *nctemp14214;
static struct nctempchar1 nctemp14215 = {{ 13}, (char*)"r_val=pylib.\0"};
nctemp14214=&nctemp14215;
nctempchar1* nctemp14212= nctemp14214;
int nctemp14216=CodeEs(nctemp14210,nctemp14212);
struct tree* nctemp14218= p;
nctempchar1* nctemp14220= fname;
int nctemp14223=CodeEs(nctemp14218,nctemp14220);
struct tree* nctemp14225= p;
struct nctempchar1 *nctemp14229;
static struct nctempchar1 nctemp14230 = {{ 2}, (char*)"(\0"};
nctemp14229=&nctemp14230;
nctempchar1* nctemp14227= nctemp14229;
int nctemp14231=CodeEs(nctemp14225,nctemp14227);
struct symbol* nctemp14239= tp;
struct symbol* nctemp14241=SymMvnext(nctemp14239);
tp =nctemp14241;
int nctemp14232 = (tp !=0);
int nctemp14243=nctemp14232;
while(nctemp14243)
{{
struct symbol* nctemp14252= tp;
nctempchar1* nctemp14254=SymGetarray(nctemp14252);
nctempchar1* nctemp14250= nctemp14254;
struct nctempchar1 *nctemp14257;
static struct nctempchar1 nctemp14258 = {{ 6}, (char*)"array\0"};
nctemp14257=&nctemp14258;
nctempchar1* nctemp14255= nctemp14257;
int nctemp14259=LibeStrcmp(nctemp14250,nctemp14255);
int nctemp14247 = (nctemp14259 ==1);
struct symbol* nctemp14267= tp;
nctempchar1* nctemp14269=SymGetstruct(nctemp14267);
nctempchar1* nctemp14265= nctemp14269;
struct nctempchar1 *nctemp14272;
static struct nctempchar1 nctemp14273 = {{ 7}, (char*)"struct\0"};
nctemp14272=&nctemp14273;
nctempchar1* nctemp14270= nctemp14272;
int nctemp14274=LibeStrcmp(nctemp14265,nctemp14270);
int nctemp14262 = (nctemp14274 ==0);
int nctemp14244 = (nctemp14247 && nctemp14262);
if(nctemp14244)
{
struct symbol* nctemp14281= tp;
nctempchar1* nctemp14283=SymGetname(nctemp14281);
name=nctemp14283;
struct tree* nctemp14285= p;
nctempchar1* nctemp14287= name;
int nctemp14290=CodeEs(nctemp14285,nctemp14287);
struct tree* nctemp14292= p;
struct nctempchar1 *nctemp14296;
static struct nctempchar1 nctemp14297 = {{ 5}, (char*)"_eps\0"};
nctemp14296=&nctemp14297;
nctempchar1* nctemp14294= nctemp14296;
int nctemp14298=CodeEs(nctemp14292,nctemp14294);
}
else{
struct tree* nctemp14300= p;
struct symbol* nctemp14304= tp;
nctempchar1* nctemp14306=SymGetname(nctemp14304);
nctempchar1* nctemp14302= nctemp14306;
int nctemp14307=CodeEs(nctemp14300,nctemp14302);
}
struct symbol* nctemp14311= tp;
struct symbol* nctemp14313=SymMvnext(nctemp14311);
int nctemp14308 = (nctemp14313 !=0);
if(nctemp14308)
{
struct tree* nctemp14316= p;
struct nctempchar1 *nctemp14320;
static struct nctempchar1 nctemp14321 = {{ 2}, (char*)",\0"};
nctemp14320=&nctemp14321;
nctempchar1* nctemp14318= nctemp14320;
int nctemp14322=CodeEs(nctemp14316,nctemp14318);
}
}
struct symbol* nctemp14330= tp;
struct symbol* nctemp14332=SymMvnext(nctemp14330);
tp =nctemp14332;
int nctemp14323 = (tp !=0);
nctemp14243=nctemp14323;}struct tree* nctemp14335= p;
struct nctempchar1 *nctemp14339;
static struct nctempchar1 nctemp14340 = {{ 2}, (char*)")\0"};
nctemp14339=&nctemp14340;
nctempchar1* nctemp14337= nctemp14339;
int nctemp14341=CodeEs(nctemp14335,nctemp14337);
struct tree* nctemp14343= p;
struct nctempchar1 *nctemp14347;
static struct nctempchar1 nctemp14348 = {{ 3}, (char*)"\n\0"};
nctemp14347=&nctemp14348;
nctempchar1* nctemp14345= nctemp14347;
int nctemp14349=CodeEs(nctemp14343,nctemp14345);
tp = tbl;
struct symbol* nctemp14357= tp;
struct symbol* nctemp14359=SymMvnext(nctemp14357);
tp =nctemp14359;
int nctemp14350 = (tp !=0);
int nctemp14361=nctemp14350;
while(nctemp14361)
{{
struct symbol* nctemp14370= tp;
nctempchar1* nctemp14372=SymGetarray(nctemp14370);
nctempchar1* nctemp14368= nctemp14372;
struct nctempchar1 *nctemp14375;
static struct nctempchar1 nctemp14376 = {{ 6}, (char*)"array\0"};
nctemp14375=&nctemp14376;
nctempchar1* nctemp14373= nctemp14375;
int nctemp14377=LibeStrcmp(nctemp14368,nctemp14373);
int nctemp14365 = (nctemp14377 ==1);
struct symbol* nctemp14385= tp;
nctempchar1* nctemp14387=SymGetstruct(nctemp14385);
nctempchar1* nctemp14383= nctemp14387;
struct nctempchar1 *nctemp14390;
static struct nctempchar1 nctemp14391 = {{ 7}, (char*)"struct\0"};
nctemp14390=&nctemp14391;
nctempchar1* nctemp14388= nctemp14390;
int nctemp14392=LibeStrcmp(nctemp14383,nctemp14388);
int nctemp14380 = (nctemp14392 ==0);
int nctemp14362 = (nctemp14365 && nctemp14380);
if(nctemp14362)
{
struct symbol* nctemp14399= tp;
nctempchar1* nctemp14401=SymGetname(nctemp14399);
name=nctemp14401;
struct symbol* nctemp14407= tp;
nctempchar1* nctemp14409=SymGetype(nctemp14407);
type=nctemp14409;
struct symbol* nctemp14414= tp;
int nctemp14416=SymGetrank(nctemp14414);
rank =nctemp14416;
nctempchar1* nctemp14422= type;
int nctemp14425= rank;
nctempchar1* nctemp14427=CodeGetfunc(nctemp14422,nctemp14425);
getfunc=nctemp14427;
struct tree* nctemp14429= p;
int nctemp14431=CodeEind(nctemp14429);
struct tree* nctemp14433= p;
nctempchar1* nctemp14435= name;
int nctemp14438=CodeEs(nctemp14433,nctemp14435);
struct tree* nctemp14440= p;
struct nctempchar1 *nctemp14444;
static struct nctempchar1 nctemp14445 = {{ 2}, (char*)"=\0"};
nctemp14444=&nctemp14445;
nctempchar1* nctemp14442= nctemp14444;
int nctemp14446=CodeEs(nctemp14440,nctemp14442);
struct tree* nctemp14448= p;
struct nctempchar1 *nctemp14452;
static struct nctempchar1 nctemp14453 = {{ 7}, (char*)"pyeps.\0"};
nctemp14452=&nctemp14453;
nctempchar1* nctemp14450= nctemp14452;
int nctemp14454=CodeEs(nctemp14448,nctemp14450);
struct tree* nctemp14456= p;
nctempchar1* nctemp14458= getfunc;
int nctemp14461=CodeEs(nctemp14456,nctemp14458);
struct tree* nctemp14463= p;
struct nctempchar1 *nctemp14467;
static struct nctempchar1 nctemp14468 = {{ 2}, (char*)"(\0"};
nctemp14467=&nctemp14468;
nctempchar1* nctemp14465= nctemp14467;
int nctemp14469=CodeEs(nctemp14463,nctemp14465);
struct tree* nctemp14471= p;
nctempchar1* nctemp14473= name;
int nctemp14476=CodeEs(nctemp14471,nctemp14473);
struct tree* nctemp14478= p;
struct nctempchar1 *nctemp14482;
static struct nctempchar1 nctemp14483 = {{ 5}, (char*)"_eps\0"};
nctemp14482=&nctemp14483;
nctempchar1* nctemp14480= nctemp14482;
int nctemp14484=CodeEs(nctemp14478,nctemp14480);
struct tree* nctemp14486= p;
struct nctempchar1 *nctemp14490;
static struct nctempchar1 nctemp14491 = {{ 4}, (char*)")\n\0"};
nctemp14490=&nctemp14491;
nctempchar1* nctemp14488= nctemp14490;
int nctemp14492=CodeEs(nctemp14486,nctemp14488);
}
}
struct symbol* nctemp14500= tp;
struct symbol* nctemp14502=SymMvnext(nctemp14500);
tp =nctemp14502;
int nctemp14493 = (tp !=0);
nctemp14361=nctemp14493;}struct tree* nctemp14505= functionode;
int nctemp14507=CodePyreturn(nctemp14505);
struct tree* nctemp14509= p;
int nctemp14511=CodeEind(nctemp14509);
struct tree* nctemp14513= p;
struct nctempchar1 *nctemp14517;
static struct nctempchar1 nctemp14518 = {{ 14}, (char*)"return rval\n\0"};
nctemp14517=&nctemp14518;
nctempchar1* nctemp14515= nctemp14517;
int nctemp14519=CodeEs(nctemp14513,nctemp14515);
int nctemp14521= fdcout;
int nctemp14523=CodeSetfdout(nctemp14521);
}
int CodeFdef (struct tree* p)
{
int nctemp14530=CodeGetarch();
int nctemp14527 = (nctemp14530 ==1);
int nctemp14536=CodeGetarch();
int nctemp14533 = (nctemp14536 ==4);
int nctemp14524 = (nctemp14527 || nctemp14533);
if(nctemp14524)
{
struct tree* nctemp14539= p;
int nctemp14541=CodeFdefcpu(nctemp14539);
int nctemp14545=CodeGetpython();
int nctemp14542 = (nctemp14545 ==1);
if(nctemp14542)
{
struct tree* nctemp14548= p;
int nctemp14550=CodeFdefwrapperpy(nctemp14548);
}
}
else{
int nctemp14554=CodeGetarch();
int nctemp14551 = (nctemp14554 ==2);
if(nctemp14551)
{
struct tree* nctemp14563= p;
struct tree* nctemp14565=PtreeMvchild(nctemp14563);
struct tree* nctemp14561= nctemp14565;
nctempchar1* nctemp14566=PtreeGetparallel(nctemp14561);
nctempchar1* nctemp14559= nctemp14566;
struct nctempchar1 *nctemp14569;
static struct nctempchar1 nctemp14570 = {{ 9}, (char*)"parallel\0"};
nctemp14569=&nctemp14570;
nctempchar1* nctemp14567= nctemp14569;
int nctemp14571=LibeStrcmp(nctemp14559,nctemp14567);
int nctemp14556 = (nctemp14571 ==1);
if(nctemp14556)
{
struct tree* nctemp14574= p;
int nctemp14576=CodeFdefgpu(nctemp14574);
struct tree* nctemp14578= p;
int nctemp14580=CodeFdewrappergpu(nctemp14578);
int nctemp14584=CodeGetpython();
int nctemp14581 = (nctemp14584 ==1);
if(nctemp14581)
{
struct tree* nctemp14587= p;
int nctemp14589=CodeFdefwrapperpy(nctemp14587);
}
}
else{
struct tree* nctemp14591= p;
int nctemp14593=CodeFdefcpu(nctemp14591);
int nctemp14597=CodeGetpython();
int nctemp14594 = (nctemp14597 ==1);
if(nctemp14594)
{
struct tree* nctemp14600= p;
int nctemp14602=CodeFdefwrapperpy(nctemp14600);
}
}
}
else{
int nctemp14606=CodeGetarch();
int nctemp14603 = (nctemp14606 ==3);
if(nctemp14603)
{
struct tree* nctemp14613= p;
nctempchar1* nctemp14615=PtreeGetparallel(nctemp14613);
nctempchar1* nctemp14611= nctemp14615;
struct nctempchar1 *nctemp14618;
static struct nctempchar1 nctemp14619 = {{ 9}, (char*)"parallel\0"};
nctemp14618=&nctemp14619;
nctempchar1* nctemp14616= nctemp14618;
int nctemp14620=LibeStrcmp(nctemp14611,nctemp14616);
int nctemp14608 = (nctemp14620 ==1);
if(nctemp14608)
{
struct tree* nctemp14623= p;
int nctemp14625=CodeFdefgpu(nctemp14623);
struct tree* nctemp14627= p;
int nctemp14629=CodeFdewrappergpu(nctemp14627);
int nctemp14633=CodeGetpython();
int nctemp14630 = (nctemp14633 ==1);
if(nctemp14630)
{
struct tree* nctemp14636= p;
int nctemp14638=CodeFdefwrapperpy(nctemp14636);
}
}
else{
struct tree* nctemp14640= p;
int nctemp14642=CodeFdefcpu(nctemp14640);
int nctemp14646=CodeGetpython();
int nctemp14643 = (nctemp14646 ==1);
if(nctemp14643)
{
struct tree* nctemp14649= p;
int nctemp14651=CodeFdefwrapperpy(nctemp14649);
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
struct nctempchar1 *nctemp14659;
static struct nctempchar1 nctemp14660 = {{ 6}, (char*)"dummy\0"};
nctemp14659=&nctemp14660;
nctempchar1* nctemp14657= nctemp14659;
struct nctempchar1 *nctemp14663;
static struct nctempchar1 nctemp14664 = {{ 6}, (char*)"dummy\0"};
nctemp14663=&nctemp14664;
nctempchar1* nctemp14661= nctemp14663;
struct tree* nctemp14665=PtreeMknode(nctemp14657,nctemp14661);
p =nctemp14665;
struct tree* nctemp14667= p;
int nctemp14669= 1;
int nctemp14671=PtreeSetline(nctemp14667,nctemp14669);
struct tree* nctemp14673= p;
struct nctempchar1 *nctemp14677;
static struct nctempchar1 nctemp14678 = {{ 34}, (char*)"//  Translated by epsc  version: \0"};
nctemp14677=&nctemp14678;
nctempchar1* nctemp14675= nctemp14677;
int nctemp14679=CodeEs(nctemp14673,nctemp14675);
struct tree* nctemp14681= p;
nctempchar1* nctemp14685=LibeDate();
nctempchar1* nctemp14683= nctemp14685;
int nctemp14686=CodeEs(nctemp14681,nctemp14683);
struct tree* nctemp14688= p;
struct nctempchar1 *nctemp14692;
static struct nctempchar1 nctemp14693 = {{ 3}, (char*)"\n\0"};
nctemp14692=&nctemp14693;
nctempchar1* nctemp14690= nctemp14692;
int nctemp14694=CodeEs(nctemp14688,nctemp14690);
struct tree* nctemp14696= p;
int nctemp14698= 2;
int nctemp14700=PtreeSetline(nctemp14696,nctemp14698);
struct tree* nctemp14702= p;
int nctemp14704= 3;
int nctemp14706=PtreeSetline(nctemp14702,nctemp14704);
struct tree* nctemp14708= p;
int nctemp14710= 4;
int nctemp14712=PtreeSetline(nctemp14708,nctemp14710);
struct tree* nctemp14714= p;
struct nctempchar1 *nctemp14718;
static struct nctempchar1 nctemp14719 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp14718=&nctemp14719;
nctempchar1* nctemp14716= nctemp14718;
int nctemp14720=CodeEs(nctemp14714,nctemp14716);
struct tree* nctemp14722= p;
struct nctempchar1 *nctemp14726;
static struct nctempchar1 nctemp14727 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14726=&nctemp14727;
nctempchar1* nctemp14724= nctemp14726;
int nctemp14728=CodeEs(nctemp14722,nctemp14724);
struct tree* nctemp14730= p;
struct nctempchar1 *nctemp14734;
static struct nctempchar1 nctemp14735 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp14734=&nctemp14735;
nctempchar1* nctemp14732= nctemp14734;
int nctemp14736=CodeEs(nctemp14730,nctemp14732);
struct tree* nctemp14738= p;
struct nctempchar1 *nctemp14742;
static struct nctempchar1 nctemp14743 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14742=&nctemp14743;
nctempchar1* nctemp14740= nctemp14742;
int nctemp14744=CodeEs(nctemp14738,nctemp14740);
struct tree* nctemp14746= p;
int nctemp14748= 3;
int nctemp14750=PtreeSetline(nctemp14746,nctemp14748);
struct tree* nctemp14752= p;
struct nctempchar1 *nctemp14756;
static struct nctempchar1 nctemp14757 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14756=&nctemp14757;
nctempchar1* nctemp14754= nctemp14756;
int nctemp14758=CodeEs(nctemp14752,nctemp14754);
struct tree* nctemp14760= p;
int nctemp14762= 5;
int nctemp14764=PtreeSetline(nctemp14760,nctemp14762);
struct tree* nctemp14766= p;
struct nctempchar1 *nctemp14770;
static struct nctempchar1 nctemp14771 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14770=&nctemp14771;
nctempchar1* nctemp14768= nctemp14770;
int nctemp14772=CodeEs(nctemp14766,nctemp14768);
struct tree* nctemp14774= p;
int nctemp14776= 7;
int nctemp14778=PtreeSetline(nctemp14774,nctemp14776);
struct tree* nctemp14780= p;
struct nctempchar1 *nctemp14784;
static struct nctempchar1 nctemp14785 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14784=&nctemp14785;
nctempchar1* nctemp14782= nctemp14784;
int nctemp14786=CodeEs(nctemp14780,nctemp14782);
struct tree* nctemp14788= p;
int nctemp14790= 7;
int nctemp14792=PtreeSetline(nctemp14788,nctemp14790);
struct tree* nctemp14794= p;
struct nctempchar1 *nctemp14798;
static struct nctempchar1 nctemp14799 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14798=&nctemp14799;
nctempchar1* nctemp14796= nctemp14798;
int nctemp14800=CodeEs(nctemp14794,nctemp14796);
struct tree* nctemp14802= p;
int nctemp14804= 8;
int nctemp14806=PtreeSetline(nctemp14802,nctemp14804);
int nctemp14810=CodeArraycheck();
int nctemp14807 = (nctemp14810 ==1);
if(nctemp14807)
{
struct tree* nctemp14813= p;
struct nctempchar1 *nctemp14817;
static struct nctempchar1 nctemp14818 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp14817=&nctemp14818;
nctempchar1* nctemp14815= nctemp14817;
int nctemp14819=CodeEs(nctemp14813,nctemp14815);
struct tree* nctemp14821= p;
struct nctempchar1 *nctemp14825;
static struct nctempchar1 nctemp14826 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp14825=&nctemp14826;
nctempchar1* nctemp14823= nctemp14825;
int nctemp14827=CodeEs(nctemp14821,nctemp14823);
struct tree* nctemp14829= p;
int nctemp14831= 8;
int nctemp14833=PtreeSetline(nctemp14829,nctemp14831);
}
struct tree* nctemp14835= p;
struct nctempchar1 *nctemp14839;
static struct nctempchar1 nctemp14840 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14839=&nctemp14840;
nctempchar1* nctemp14837= nctemp14839;
int nctemp14841=CodeEs(nctemp14835,nctemp14837);
struct tree* nctemp14843= p;
int nctemp14845= 10;
int nctemp14847=PtreeSetline(nctemp14843,nctemp14845);
struct tree* nctemp14849= p;
struct nctempchar1 *nctemp14853;
static struct nctempchar1 nctemp14854 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14853=&nctemp14854;
nctempchar1* nctemp14851= nctemp14853;
int nctemp14855=CodeEs(nctemp14849,nctemp14851);
struct tree* nctemp14857= p;
int nctemp14859= 10;
int nctemp14861=PtreeSetline(nctemp14857,nctemp14859);
struct tree* nctemp14863= p;
struct nctempchar1 *nctemp14867;
static struct nctempchar1 nctemp14868 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14867=&nctemp14868;
nctempchar1* nctemp14865= nctemp14867;
int nctemp14869=CodeEs(nctemp14863,nctemp14865);
struct tree* nctemp14871= p;
int nctemp14873= 12;
int nctemp14875=PtreeSetline(nctemp14871,nctemp14873);
struct tree* nctemp14877= p;
struct nctempchar1 *nctemp14881;
static struct nctempchar1 nctemp14882 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14881=&nctemp14882;
nctempchar1* nctemp14879= nctemp14881;
int nctemp14883=CodeEs(nctemp14877,nctemp14879);
struct tree* nctemp14885= p;
int nctemp14887= 13;
int nctemp14889=PtreeSetline(nctemp14885,nctemp14887);
struct tree* nctemp14891= p;
struct nctempchar1 *nctemp14895;
static struct nctempchar1 nctemp14896 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14895=&nctemp14896;
nctempchar1* nctemp14893= nctemp14895;
int nctemp14897=CodeEs(nctemp14891,nctemp14893);
struct tree* nctemp14899= p;
int nctemp14901= 14;
int nctemp14903=PtreeSetline(nctemp14899,nctemp14901);
struct tree* nctemp14905= p;
struct nctempchar1 *nctemp14909;
static struct nctempchar1 nctemp14910 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14909=&nctemp14910;
nctempchar1* nctemp14907= nctemp14909;
int nctemp14911=CodeEs(nctemp14905,nctemp14907);
struct tree* nctemp14913= p;
int nctemp14915= 15;
int nctemp14917=PtreeSetline(nctemp14913,nctemp14915);
struct tree* nctemp14919= p;
struct nctempchar1 *nctemp14923;
static struct nctempchar1 nctemp14924 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14923=&nctemp14924;
nctempchar1* nctemp14921= nctemp14923;
int nctemp14925=CodeEs(nctemp14919,nctemp14921);
struct tree* nctemp14927= p;
int nctemp14929= 16;
int nctemp14931=PtreeSetline(nctemp14927,nctemp14929);
struct tree* nctemp14933= p;
struct nctempchar1 *nctemp14937;
static struct nctempchar1 nctemp14938 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14937=&nctemp14938;
nctempchar1* nctemp14935= nctemp14937;
int nctemp14939=CodeEs(nctemp14933,nctemp14935);
struct tree* nctemp14941= p;
int nctemp14943= 17;
int nctemp14945=PtreeSetline(nctemp14941,nctemp14943);
struct tree* nctemp14947= p;
struct nctempchar1 *nctemp14951;
static struct nctempchar1 nctemp14952 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14951=&nctemp14952;
nctempchar1* nctemp14949= nctemp14951;
int nctemp14953=CodeEs(nctemp14947,nctemp14949);
struct tree* nctemp14955= p;
int nctemp14957= 18;
int nctemp14959=PtreeSetline(nctemp14955,nctemp14957);
struct tree* nctemp14961= p;
struct nctempchar1 *nctemp14965;
static struct nctempchar1 nctemp14966 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14965=&nctemp14966;
nctempchar1* nctemp14963= nctemp14965;
int nctemp14967=CodeEs(nctemp14961,nctemp14963);
struct tree* nctemp14969= p;
int nctemp14971= 19;
int nctemp14973=PtreeSetline(nctemp14969,nctemp14971);
struct tree* nctemp14975= p;
struct nctempchar1 *nctemp14979;
static struct nctempchar1 nctemp14980 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14979=&nctemp14980;
nctempchar1* nctemp14977= nctemp14979;
int nctemp14981=CodeEs(nctemp14975,nctemp14977);
struct tree* nctemp14983= p;
int nctemp14985= 20;
int nctemp14987=PtreeSetline(nctemp14983,nctemp14985);
struct tree* nctemp14989= p;
struct nctempchar1 *nctemp14993;
static struct nctempchar1 nctemp14994 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14993=&nctemp14994;
nctempchar1* nctemp14991= nctemp14993;
int nctemp14995=CodeEs(nctemp14989,nctemp14991);
struct tree* nctemp14997= p;
struct nctempchar1 *nctemp15001;
static struct nctempchar1 nctemp15002 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15001=&nctemp15002;
nctempchar1* nctemp14999= nctemp15001;
int nctemp15003=CodeEs(nctemp14997,nctemp14999);
struct tree* nctemp15005= p;
struct nctempchar1 *nctemp15009;
static struct nctempchar1 nctemp15010 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15009=&nctemp15010;
nctempchar1* nctemp15007= nctemp15009;
int nctemp15011=CodeEs(nctemp15005,nctemp15007);
struct tree* nctemp15013= p;
struct nctempchar1 *nctemp15017;
static struct nctempchar1 nctemp15018 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp15017=&nctemp15018;
nctempchar1* nctemp15015= nctemp15017;
int nctemp15019=CodeEs(nctemp15013,nctemp15015);
struct tree* nctemp15021= p;
struct nctempchar1 *nctemp15025;
static struct nctempchar1 nctemp15026 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp15025=&nctemp15026;
nctempchar1* nctemp15023= nctemp15025;
int nctemp15027=CodeEs(nctemp15021,nctemp15023);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp15035;
static struct nctempchar1 nctemp15036 = {{ 6}, (char*)"dummy\0"};
nctemp15035=&nctemp15036;
nctempchar1* nctemp15033= nctemp15035;
struct nctempchar1 *nctemp15039;
static struct nctempchar1 nctemp15040 = {{ 6}, (char*)"dummy\0"};
nctemp15039=&nctemp15040;
nctempchar1* nctemp15037= nctemp15039;
struct tree* nctemp15041=PtreeMknode(nctemp15033,nctemp15037);
p =nctemp15041;
struct tree* nctemp15043= p;
int nctemp15045= 1;
int nctemp15047=PtreeSetline(nctemp15043,nctemp15045);
struct tree* nctemp15049= p;
struct nctempchar1 *nctemp15053;
static struct nctempchar1 nctemp15054 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp15053=&nctemp15054;
nctempchar1* nctemp15051= nctemp15053;
int nctemp15055=CodeEs(nctemp15049,nctemp15051);
struct tree* nctemp15057= p;
int nctemp15059= 2;
int nctemp15061=PtreeSetline(nctemp15057,nctemp15059);
struct tree* nctemp15063= p;
int nctemp15065= 3;
int nctemp15067=PtreeSetline(nctemp15063,nctemp15065);
struct tree* nctemp15069= p;
struct nctempchar1 *nctemp15073;
static struct nctempchar1 nctemp15074 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp15073=&nctemp15074;
nctempchar1* nctemp15071= nctemp15073;
int nctemp15075=CodeEs(nctemp15069,nctemp15071);
struct tree* nctemp15077= p;
struct nctempchar1 *nctemp15081;
static struct nctempchar1 nctemp15082 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp15081=&nctemp15082;
nctempchar1* nctemp15079= nctemp15081;
int nctemp15083=CodeEs(nctemp15077,nctemp15079);
struct tree* nctemp15085= p;
int nctemp15087= 3;
int nctemp15089=PtreeSetline(nctemp15085,nctemp15087);
struct tree* nctemp15091= p;
struct nctempchar1 *nctemp15095;
static struct nctempchar1 nctemp15096 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp15095=&nctemp15096;
nctempchar1* nctemp15093= nctemp15095;
int nctemp15097=CodeEs(nctemp15091,nctemp15093);
struct tree* nctemp15099= p;
int nctemp15101= 5;
int nctemp15103=PtreeSetline(nctemp15099,nctemp15101);
struct tree* nctemp15105= p;
struct nctempchar1 *nctemp15109;
static struct nctempchar1 nctemp15110 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp15109=&nctemp15110;
nctempchar1* nctemp15107= nctemp15109;
int nctemp15111=CodeEs(nctemp15105,nctemp15107);
struct tree* nctemp15113= p;
int nctemp15115= 7;
int nctemp15117=PtreeSetline(nctemp15113,nctemp15115);
struct tree* nctemp15119= p;
struct nctempchar1 *nctemp15123;
static struct nctempchar1 nctemp15124 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp15123=&nctemp15124;
nctempchar1* nctemp15121= nctemp15123;
int nctemp15125=CodeEs(nctemp15119,nctemp15121);
struct tree* nctemp15127= p;
int nctemp15129= 7;
int nctemp15131=PtreeSetline(nctemp15127,nctemp15129);
struct tree* nctemp15133= p;
struct nctempchar1 *nctemp15137;
static struct nctempchar1 nctemp15138 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp15137=&nctemp15138;
nctempchar1* nctemp15135= nctemp15137;
int nctemp15139=CodeEs(nctemp15133,nctemp15135);
struct tree* nctemp15141= p;
int nctemp15143= 8;
int nctemp15145=PtreeSetline(nctemp15141,nctemp15143);
int nctemp15149=CodeArraycheck();
int nctemp15146 = (nctemp15149 ==1);
if(nctemp15146)
{
struct tree* nctemp15152= p;
struct nctempchar1 *nctemp15156;
static struct nctempchar1 nctemp15157 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp15156=&nctemp15157;
nctempchar1* nctemp15154= nctemp15156;
int nctemp15158=CodeEs(nctemp15152,nctemp15154);
struct tree* nctemp15160= p;
struct nctempchar1 *nctemp15164;
static struct nctempchar1 nctemp15165 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp15164=&nctemp15165;
nctempchar1* nctemp15162= nctemp15164;
int nctemp15166=CodeEs(nctemp15160,nctemp15162);
struct tree* nctemp15168= p;
int nctemp15170= 8;
int nctemp15172=PtreeSetline(nctemp15168,nctemp15170);
}
struct tree* nctemp15174= p;
struct nctempchar1 *nctemp15178;
static struct nctempchar1 nctemp15179 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp15178=&nctemp15179;
nctempchar1* nctemp15176= nctemp15178;
int nctemp15180=CodeEs(nctemp15174,nctemp15176);
struct tree* nctemp15182= p;
int nctemp15184= 10;
int nctemp15186=PtreeSetline(nctemp15182,nctemp15184);
struct tree* nctemp15188= p;
struct nctempchar1 *nctemp15192;
static struct nctempchar1 nctemp15193 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp15192=&nctemp15193;
nctempchar1* nctemp15190= nctemp15192;
int nctemp15194=CodeEs(nctemp15188,nctemp15190);
struct tree* nctemp15196= p;
int nctemp15198= 10;
int nctemp15200=PtreeSetline(nctemp15196,nctemp15198);
struct tree* nctemp15202= p;
struct nctempchar1 *nctemp15206;
static struct nctempchar1 nctemp15207 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp15206=&nctemp15207;
nctempchar1* nctemp15204= nctemp15206;
int nctemp15208=CodeEs(nctemp15202,nctemp15204);
struct tree* nctemp15210= p;
int nctemp15212= 12;
int nctemp15214=PtreeSetline(nctemp15210,nctemp15212);
struct tree* nctemp15216= p;
struct nctempchar1 *nctemp15220;
static struct nctempchar1 nctemp15221 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp15220=&nctemp15221;
nctempchar1* nctemp15218= nctemp15220;
int nctemp15222=CodeEs(nctemp15216,nctemp15218);
struct tree* nctemp15224= p;
int nctemp15226= 13;
int nctemp15228=PtreeSetline(nctemp15224,nctemp15226);
struct tree* nctemp15230= p;
struct nctempchar1 *nctemp15234;
static struct nctempchar1 nctemp15235 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp15234=&nctemp15235;
nctempchar1* nctemp15232= nctemp15234;
int nctemp15236=CodeEs(nctemp15230,nctemp15232);
struct tree* nctemp15238= p;
int nctemp15240= 14;
int nctemp15242=PtreeSetline(nctemp15238,nctemp15240);
struct tree* nctemp15244= p;
struct nctempchar1 *nctemp15248;
static struct nctempchar1 nctemp15249 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp15248=&nctemp15249;
nctempchar1* nctemp15246= nctemp15248;
int nctemp15250=CodeEs(nctemp15244,nctemp15246);
struct tree* nctemp15252= p;
int nctemp15254= 15;
int nctemp15256=PtreeSetline(nctemp15252,nctemp15254);
struct tree* nctemp15258= p;
struct nctempchar1 *nctemp15262;
static struct nctempchar1 nctemp15263 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp15262=&nctemp15263;
nctempchar1* nctemp15260= nctemp15262;
int nctemp15264=CodeEs(nctemp15258,nctemp15260);
struct tree* nctemp15266= p;
int nctemp15268= 16;
int nctemp15270=PtreeSetline(nctemp15266,nctemp15268);
struct tree* nctemp15272= p;
struct nctempchar1 *nctemp15276;
static struct nctempchar1 nctemp15277 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp15276=&nctemp15277;
nctempchar1* nctemp15274= nctemp15276;
int nctemp15278=CodeEs(nctemp15272,nctemp15274);
struct tree* nctemp15280= p;
int nctemp15282= 17;
int nctemp15284=PtreeSetline(nctemp15280,nctemp15282);
struct tree* nctemp15286= p;
struct nctempchar1 *nctemp15290;
static struct nctempchar1 nctemp15291 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp15290=&nctemp15291;
nctempchar1* nctemp15288= nctemp15290;
int nctemp15292=CodeEs(nctemp15286,nctemp15288);
struct tree* nctemp15294= p;
int nctemp15296= 18;
int nctemp15298=PtreeSetline(nctemp15294,nctemp15296);
struct tree* nctemp15300= p;
struct nctempchar1 *nctemp15304;
static struct nctempchar1 nctemp15305 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp15304=&nctemp15305;
nctempchar1* nctemp15302= nctemp15304;
int nctemp15306=CodeEs(nctemp15300,nctemp15302);
struct tree* nctemp15308= p;
int nctemp15310= 19;
int nctemp15312=PtreeSetline(nctemp15308,nctemp15310);
struct tree* nctemp15314= p;
struct nctempchar1 *nctemp15318;
static struct nctempchar1 nctemp15319 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp15318=&nctemp15319;
nctempchar1* nctemp15316= nctemp15318;
int nctemp15320=CodeEs(nctemp15314,nctemp15316);
struct tree* nctemp15322= p;
int nctemp15324= 20;
int nctemp15326=PtreeSetline(nctemp15322,nctemp15324);
struct tree* nctemp15328= p;
struct nctempchar1 *nctemp15332;
static struct nctempchar1 nctemp15333 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp15332=&nctemp15333;
nctempchar1* nctemp15330= nctemp15332;
int nctemp15334=CodeEs(nctemp15328,nctemp15330);
struct tree* nctemp15336= p;
struct nctempchar1 *nctemp15340;
static struct nctempchar1 nctemp15341 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp15340=&nctemp15341;
nctempchar1* nctemp15338= nctemp15340;
int nctemp15342=CodeEs(nctemp15336,nctemp15338);
struct tree* nctemp15344= p;
struct nctempchar1 *nctemp15348;
static struct nctempchar1 nctemp15349 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15348=&nctemp15349;
nctempchar1* nctemp15346= nctemp15348;
int nctemp15350=CodeEs(nctemp15344,nctemp15346);
struct tree* nctemp15352= p;
struct nctempchar1 *nctemp15356;
static struct nctempchar1 nctemp15357 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15356=&nctemp15357;
nctempchar1* nctemp15354= nctemp15356;
int nctemp15358=CodeEs(nctemp15352,nctemp15354);
struct tree* nctemp15360= p;
struct nctempchar1 *nctemp15364;
static struct nctempchar1 nctemp15365 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp15364=&nctemp15365;
nctempchar1* nctemp15362= nctemp15364;
int nctemp15366=CodeEs(nctemp15360,nctemp15362);
struct tree* nctemp15368= p;
struct nctempchar1 *nctemp15372;
static struct nctempchar1 nctemp15373 = {{ 3}, (char*)"\n\0"};
nctemp15372=&nctemp15373;
nctempchar1* nctemp15370= nctemp15372;
int nctemp15374=CodeEs(nctemp15368,nctemp15370);
struct tree* nctemp15376= p;
struct nctempchar1 *nctemp15380;
static struct nctempchar1 nctemp15381 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp15380=&nctemp15381;
nctempchar1* nctemp15378= nctemp15380;
int nctemp15382=CodeEs(nctemp15376,nctemp15378);
struct tree* nctemp15384= p;
struct nctempchar1 *nctemp15388;
static struct nctempchar1 nctemp15389 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp15388=&nctemp15389;
nctempchar1* nctemp15386= nctemp15388;
int nctemp15390=CodeEs(nctemp15384,nctemp15386);
struct tree* nctemp15392= p;
struct nctempchar1 *nctemp15396;
static struct nctempchar1 nctemp15397 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp15396=&nctemp15397;
nctempchar1* nctemp15394= nctemp15396;
int nctemp15398=CodeEs(nctemp15392,nctemp15394);
struct tree* nctemp15400= p;
struct nctempchar1 *nctemp15404;
static struct nctempchar1 nctemp15405 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp15404=&nctemp15405;
nctempchar1* nctemp15402= nctemp15404;
int nctemp15406=CodeEs(nctemp15400,nctemp15402);
struct tree* nctemp15408= p;
struct nctempchar1 *nctemp15412;
static struct nctempchar1 nctemp15413 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp15412=&nctemp15413;
nctempchar1* nctemp15410= nctemp15412;
int nctemp15414=CodeEs(nctemp15408,nctemp15410);
struct tree* nctemp15416= p;
struct nctempchar1 *nctemp15420;
static struct nctempchar1 nctemp15421 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp15420=&nctemp15421;
nctempchar1* nctemp15418= nctemp15420;
int nctemp15422=CodeEs(nctemp15416,nctemp15418);
struct tree* nctemp15424= p;
struct nctempchar1 *nctemp15428;
static struct nctempchar1 nctemp15429 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp15428=&nctemp15429;
nctempchar1* nctemp15426= nctemp15428;
int nctemp15430=CodeEs(nctemp15424,nctemp15426);
struct tree* nctemp15432= p;
struct nctempchar1 *nctemp15436;
static struct nctempchar1 nctemp15437 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp15436=&nctemp15437;
nctempchar1* nctemp15434= nctemp15436;
int nctemp15438=CodeEs(nctemp15432,nctemp15434);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp15446;
static struct nctempchar1 nctemp15447 = {{ 6}, (char*)"dummy\0"};
nctemp15446=&nctemp15447;
nctempchar1* nctemp15444= nctemp15446;
struct nctempchar1 *nctemp15450;
static struct nctempchar1 nctemp15451 = {{ 6}, (char*)"dummy\0"};
nctemp15450=&nctemp15451;
nctempchar1* nctemp15448= nctemp15450;
struct tree* nctemp15452=PtreeMknode(nctemp15444,nctemp15448);
p =nctemp15452;
struct tree* nctemp15454= p;
int nctemp15456= 1;
int nctemp15458=PtreeSetline(nctemp15454,nctemp15456);
struct tree* nctemp15460= p;
struct nctempchar1 *nctemp15464;
static struct nctempchar1 nctemp15465 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp15464=&nctemp15465;
nctempchar1* nctemp15462= nctemp15464;
int nctemp15466=CodeEs(nctemp15460,nctemp15462);
struct tree* nctemp15468= p;
int nctemp15470= 2;
int nctemp15472=PtreeSetline(nctemp15468,nctemp15470);
struct tree* nctemp15474= p;
int nctemp15476= 3;
int nctemp15478=PtreeSetline(nctemp15474,nctemp15476);
struct tree* nctemp15480= p;
struct nctempchar1 *nctemp15484;
static struct nctempchar1 nctemp15485 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp15484=&nctemp15485;
nctempchar1* nctemp15482= nctemp15484;
int nctemp15486=CodeEs(nctemp15480,nctemp15482);
struct tree* nctemp15488= p;
int nctemp15490= 3;
int nctemp15492=PtreeSetline(nctemp15488,nctemp15490);
struct tree* nctemp15494= p;
struct nctempchar1 *nctemp15498;
static struct nctempchar1 nctemp15499 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp15498=&nctemp15499;
nctempchar1* nctemp15496= nctemp15498;
int nctemp15500=CodeEs(nctemp15494,nctemp15496);
struct tree* nctemp15502= p;
int nctemp15504= 5;
int nctemp15506=PtreeSetline(nctemp15502,nctemp15504);
struct tree* nctemp15508= p;
struct nctempchar1 *nctemp15512;
static struct nctempchar1 nctemp15513 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp15512=&nctemp15513;
nctempchar1* nctemp15510= nctemp15512;
int nctemp15514=CodeEs(nctemp15508,nctemp15510);
struct tree* nctemp15516= p;
int nctemp15518= 7;
int nctemp15520=PtreeSetline(nctemp15516,nctemp15518);
struct tree* nctemp15522= p;
struct nctempchar1 *nctemp15526;
static struct nctempchar1 nctemp15527 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp15526=&nctemp15527;
nctempchar1* nctemp15524= nctemp15526;
int nctemp15528=CodeEs(nctemp15522,nctemp15524);
struct tree* nctemp15530= p;
int nctemp15532= 7;
int nctemp15534=PtreeSetline(nctemp15530,nctemp15532);
struct tree* nctemp15536= p;
struct nctempchar1 *nctemp15540;
static struct nctempchar1 nctemp15541 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp15540=&nctemp15541;
nctempchar1* nctemp15538= nctemp15540;
int nctemp15542=CodeEs(nctemp15536,nctemp15538);
struct tree* nctemp15544= p;
int nctemp15546= 8;
int nctemp15548=PtreeSetline(nctemp15544,nctemp15546);
int nctemp15552=CodeArraycheck();
int nctemp15549 = (nctemp15552 ==1);
if(nctemp15549)
{
struct tree* nctemp15555= p;
struct nctempchar1 *nctemp15559;
static struct nctempchar1 nctemp15560 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp15559=&nctemp15560;
nctempchar1* nctemp15557= nctemp15559;
int nctemp15561=CodeEs(nctemp15555,nctemp15557);
struct tree* nctemp15563= p;
int nctemp15565= 8;
int nctemp15567=PtreeSetline(nctemp15563,nctemp15565);
}
struct tree* nctemp15569= p;
struct nctempchar1 *nctemp15573;
static struct nctempchar1 nctemp15574 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp15573=&nctemp15574;
nctempchar1* nctemp15571= nctemp15573;
int nctemp15575=CodeEs(nctemp15569,nctemp15571);
struct tree* nctemp15577= p;
int nctemp15579= 10;
int nctemp15581=PtreeSetline(nctemp15577,nctemp15579);
struct tree* nctemp15583= p;
struct nctempchar1 *nctemp15587;
static struct nctempchar1 nctemp15588 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp15587=&nctemp15588;
nctempchar1* nctemp15585= nctemp15587;
int nctemp15589=CodeEs(nctemp15583,nctemp15585);
struct tree* nctemp15591= p;
int nctemp15593= 10;
int nctemp15595=PtreeSetline(nctemp15591,nctemp15593);
struct tree* nctemp15597= p;
struct nctempchar1 *nctemp15601;
static struct nctempchar1 nctemp15602 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp15601=&nctemp15602;
nctempchar1* nctemp15599= nctemp15601;
int nctemp15603=CodeEs(nctemp15597,nctemp15599);
struct tree* nctemp15605= p;
int nctemp15607= 12;
int nctemp15609=PtreeSetline(nctemp15605,nctemp15607);
struct tree* nctemp15611= p;
struct nctempchar1 *nctemp15615;
static struct nctempchar1 nctemp15616 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp15615=&nctemp15616;
nctempchar1* nctemp15613= nctemp15615;
int nctemp15617=CodeEs(nctemp15611,nctemp15613);
struct tree* nctemp15619= p;
int nctemp15621= 13;
int nctemp15623=PtreeSetline(nctemp15619,nctemp15621);
struct tree* nctemp15625= p;
struct nctempchar1 *nctemp15629;
static struct nctempchar1 nctemp15630 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp15629=&nctemp15630;
nctempchar1* nctemp15627= nctemp15629;
int nctemp15631=CodeEs(nctemp15625,nctemp15627);
struct tree* nctemp15633= p;
int nctemp15635= 14;
int nctemp15637=PtreeSetline(nctemp15633,nctemp15635);
struct tree* nctemp15639= p;
struct nctempchar1 *nctemp15643;
static struct nctempchar1 nctemp15644 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp15643=&nctemp15644;
nctempchar1* nctemp15641= nctemp15643;
int nctemp15645=CodeEs(nctemp15639,nctemp15641);
struct tree* nctemp15647= p;
int nctemp15649= 15;
int nctemp15651=PtreeSetline(nctemp15647,nctemp15649);
struct tree* nctemp15653= p;
struct nctempchar1 *nctemp15657;
static struct nctempchar1 nctemp15658 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp15657=&nctemp15658;
nctempchar1* nctemp15655= nctemp15657;
int nctemp15659=CodeEs(nctemp15653,nctemp15655);
struct tree* nctemp15661= p;
int nctemp15663= 16;
int nctemp15665=PtreeSetline(nctemp15661,nctemp15663);
struct tree* nctemp15667= p;
struct nctempchar1 *nctemp15671;
static struct nctempchar1 nctemp15672 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp15671=&nctemp15672;
nctempchar1* nctemp15669= nctemp15671;
int nctemp15673=CodeEs(nctemp15667,nctemp15669);
struct tree* nctemp15675= p;
int nctemp15677= 17;
int nctemp15679=PtreeSetline(nctemp15675,nctemp15677);
struct tree* nctemp15681= p;
struct nctempchar1 *nctemp15685;
static struct nctempchar1 nctemp15686 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp15685=&nctemp15686;
nctempchar1* nctemp15683= nctemp15685;
int nctemp15687=CodeEs(nctemp15681,nctemp15683);
struct tree* nctemp15689= p;
int nctemp15691= 18;
int nctemp15693=PtreeSetline(nctemp15689,nctemp15691);
struct tree* nctemp15695= p;
struct nctempchar1 *nctemp15699;
static struct nctempchar1 nctemp15700 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp15699=&nctemp15700;
nctempchar1* nctemp15697= nctemp15699;
int nctemp15701=CodeEs(nctemp15695,nctemp15697);
struct tree* nctemp15703= p;
int nctemp15705= 19;
int nctemp15707=PtreeSetline(nctemp15703,nctemp15705);
struct tree* nctemp15709= p;
struct nctempchar1 *nctemp15713;
static struct nctempchar1 nctemp15714 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp15713=&nctemp15714;
nctempchar1* nctemp15711= nctemp15713;
int nctemp15715=CodeEs(nctemp15709,nctemp15711);
struct tree* nctemp15717= p;
int nctemp15719= 20;
int nctemp15721=PtreeSetline(nctemp15717,nctemp15719);
struct tree* nctemp15723= p;
struct nctempchar1 *nctemp15727;
static struct nctempchar1 nctemp15728 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp15727=&nctemp15728;
nctempchar1* nctemp15725= nctemp15727;
int nctemp15729=CodeEs(nctemp15723,nctemp15725);
struct tree* nctemp15731= p;
struct nctempchar1 *nctemp15735;
static struct nctempchar1 nctemp15736 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp15735=&nctemp15736;
nctempchar1* nctemp15733= nctemp15735;
int nctemp15737=CodeEs(nctemp15731,nctemp15733);
struct tree* nctemp15739= p;
struct nctempchar1 *nctemp15743;
static struct nctempchar1 nctemp15744 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp15743=&nctemp15744;
nctempchar1* nctemp15741= nctemp15743;
int nctemp15745=CodeEs(nctemp15739,nctemp15741);
struct tree* nctemp15747= p;
struct nctempchar1 *nctemp15751;
static struct nctempchar1 nctemp15752 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp15751=&nctemp15752;
nctempchar1* nctemp15749= nctemp15751;
int nctemp15753=CodeEs(nctemp15747,nctemp15749);
struct tree* nctemp15755= p;
struct nctempchar1 *nctemp15759;
static struct nctempchar1 nctemp15760 = {{ 4}, (char*)"}\n\0"};
nctemp15759=&nctemp15760;
nctempchar1* nctemp15757= nctemp15759;
int nctemp15761=CodeEs(nctemp15755,nctemp15757);
struct tree* nctemp15763= p;
struct nctempchar1 *nctemp15767;
static struct nctempchar1 nctemp15768 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp15767=&nctemp15768;
nctempchar1* nctemp15765= nctemp15767;
int nctemp15769=CodeEs(nctemp15763,nctemp15765);
struct tree* nctemp15771= p;
struct nctempchar1 *nctemp15775;
static struct nctempchar1 nctemp15776 = {{ 3}, (char*)"\n\0"};
nctemp15775=&nctemp15776;
nctempchar1* nctemp15773= nctemp15775;
int nctemp15777=CodeEs(nctemp15771,nctemp15773);
struct tree* nctemp15779= p;
struct nctempchar1 *nctemp15783;
static struct nctempchar1 nctemp15784 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp15783=&nctemp15784;
nctempchar1* nctemp15781= nctemp15783;
int nctemp15785=CodeEs(nctemp15779,nctemp15781);
struct tree* nctemp15787= p;
struct nctempchar1 *nctemp15791;
static struct nctempchar1 nctemp15792 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp15791=&nctemp15792;
nctempchar1* nctemp15789= nctemp15791;
int nctemp15793=CodeEs(nctemp15787,nctemp15789);
struct tree* nctemp15795= p;
struct nctempchar1 *nctemp15799;
static struct nctempchar1 nctemp15800 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp15799=&nctemp15800;
nctempchar1* nctemp15797= nctemp15799;
int nctemp15801=CodeEs(nctemp15795,nctemp15797);
struct tree* nctemp15803= p;
struct nctempchar1 *nctemp15807;
static struct nctempchar1 nctemp15808 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp15807=&nctemp15808;
nctempchar1* nctemp15805= nctemp15807;
int nctemp15809=CodeEs(nctemp15803,nctemp15805);
struct tree* nctemp15811= p;
struct nctempchar1 *nctemp15815;
static struct nctempchar1 nctemp15816 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp15815=&nctemp15816;
nctempchar1* nctemp15813= nctemp15815;
int nctemp15817=CodeEs(nctemp15811,nctemp15813);
return 1;
}
int CodePreamble ()
{
int nctemp15825=CodeGetarch();
int nctemp15822 = (nctemp15825 ==1);
int nctemp15831=CodeGetarch();
int nctemp15828 = (nctemp15831 ==4);
int nctemp15819 = (nctemp15822 || nctemp15828);
if(nctemp15819)
{
int nctemp15834=CodePreamblecpu();
return 1;
}
else{
int nctemp15839=CodeGetarch();
int nctemp15836 = (nctemp15839 ==2);
if(nctemp15836)
{
int nctemp15842=CodePreamblecuda();
return 1;
}
else{
int nctemp15847=CodeGetarch();
int nctemp15844 = (nctemp15847 ==3);
if(nctemp15844)
{
int nctemp15850=CodePreamblehip();
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
struct nctempchar1 *nctemp15859;
static struct nctempchar1 nctemp15860 = {{ 6}, (char*)"dummy\0"};
nctemp15859=&nctemp15860;
nctempchar1* nctemp15857= nctemp15859;
struct nctempchar1 *nctemp15863;
static struct nctempchar1 nctemp15864 = {{ 6}, (char*)"dummy\0"};
nctemp15863=&nctemp15864;
nctempchar1* nctemp15861= nctemp15863;
struct tree* nctemp15865=PtreeMknode(nctemp15857,nctemp15861);
p =nctemp15865;
int nctemp15869=CodeGetarch();
int nctemp15866 = (nctemp15869 ==2);
if(nctemp15866)
{
struct tree* nctemp15872= p;
struct nctempchar1 *nctemp15876;
static struct nctempchar1 nctemp15877 = {{ 3}, (char*)"};\0"};
nctemp15876=&nctemp15877;
nctempchar1* nctemp15874= nctemp15876;
int nctemp15878=CodeEs(nctemp15872,nctemp15874);
}
int nctemp15882=CodeGetarch();
int nctemp15879 = (nctemp15882 ==3);
if(nctemp15879)
{
struct tree* nctemp15885= p;
struct nctempchar1 *nctemp15889;
static struct nctempchar1 nctemp15890 = {{ 3}, (char*)"};\0"};
nctemp15889=&nctemp15890;
nctempchar1* nctemp15887= nctemp15889;
int nctemp15891=CodeEs(nctemp15885,nctemp15887);
}
return 1;
}
