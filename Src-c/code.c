//  Translated by epsc  version: Fri Jan  2 16:12:14 2026

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
int nctemp26=16;
nctempchar1 *nctemp25;
nctemp25=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp25->d[0]=16;
nctemp25->a=(char *)RunMalloc(sizeof(char)*nctemp26);
s1=nctemp25;
int nctemp35=16;
nctempchar1 *nctemp34;
nctemp34=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp34->d[0]=16;
nctemp34->a=(char *)RunMalloc(sizeof(char)*nctemp35);
s2=nctemp34;
struct nctempchar1 *nctemp41;
static struct nctempchar1 nctemp42 = {{ 7}, (char*)"nctemp\0"};
nctemp41=&nctemp42;
nctempchar1* nctemp39= nctemp41;
nctempchar1* nctemp43= s2;
int nctemp46=LibeStrcpy(nctemp39,nctemp43);
int nctemp50= -1;
int nctemp47 = (cntrl ==nctemp50);
if(nctemp47)
{
CodeAddress = 0;
}
else{
CodeAddress = (CodeAddress + 1);
}
int nctemp51 = (CodeAddress > 999999);
if(nctemp51)
{
struct nctempchar1 *nctemp58;
static struct nctempchar1 nctemp59 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp58=&nctemp59;
nctempchar1* nctemp56= nctemp58;
int nctemp60=CodeError(nctemp56);
}
int nctemp62= CodeAddress;
nctempchar1* nctemp64= s1;
int nctemp67=LibeItoa(nctemp62,nctemp64);
nctempchar1* nctemp69= s1;
nctempchar1* nctemp72= s2;
int nctemp75=LibeStrcat(nctemp69,nctemp72);
return s2;
}
int CodeInit ()
{
int nctemp79= 0;
int nctemp81=CodeSetparallel(nctemp79);
CodeLine = 0;
int nctemp84= -1;
int nctemp83= nctemp84;
nctempchar1* nctemp85=CodeItemp(nctemp83);
CodeBreak = 0;
int nctemp87= 1;
int nctemp89=CodeSetarch(nctemp87);
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
int nctemp98=CodeGetfdout();
fdo =nctemp98;
int nctemp102=CodeDebug();
int nctemp99 = (nctemp102 ==1);
if(nctemp99)
{
int nctemp104 = (p !=0);
if(nctemp104)
{
struct tree* nctemp111= p;
int nctemp113=PtreeGetline(nctemp111);
int nctemp108 = (nctemp113 !=CodeLine);
if(nctemp108)
{
int nctemp116= fdo;
struct nctempchar1 *nctemp120;
static struct nctempchar1 nctemp121 = {{ 3}, (char*)"\n\0"};
nctemp120=&nctemp121;
nctempchar1* nctemp118= nctemp120;
int nctemp122=LibePuts(nctemp116,nctemp118);
int nctemp124= fdo;
struct nctempchar1 *nctemp128;
static struct nctempchar1 nctemp129 = {{ 7}, (char*)"#line \0"};
nctemp128=&nctemp129;
nctempchar1* nctemp126= nctemp128;
int nctemp130=LibePuts(nctemp124,nctemp126);
int nctemp132= fdo;
struct tree* nctemp136= p;
int nctemp138=PtreeGetline(nctemp136);
int nctemp134= nctemp138;
int nctemp139=LibePuti(nctemp132,nctemp134);
int nctemp141= fdo;
struct nctempchar1 *nctemp145;
static struct nctempchar1 nctemp146 = {{ 3}, (char*)"  \0"};
nctemp145=&nctemp146;
nctempchar1* nctemp143= nctemp145;
int nctemp147=LibePuts(nctemp141,nctemp143);
int nctemp149= fdo;
int nctemp151= 34;
int nctemp153=LibePutc(nctemp149,nctemp151);
struct tree* nctemp159= p;
nctempchar1* nctemp161=PtreeGetfile(nctemp159);
f=nctemp161;
int nctemp163= fdo;
nctempchar1* nctemp165= f;
int nctemp168=LibePuts(nctemp163,nctemp165);
int nctemp170= fdo;
int nctemp172= 34;
int nctemp174=LibePutc(nctemp170,nctemp172);
int nctemp176= fdo;
struct nctempchar1 *nctemp180;
static struct nctempchar1 nctemp181 = {{ 3}, (char*)"\n\0"};
nctemp180=&nctemp181;
nctempchar1* nctemp178= nctemp180;
int nctemp182=LibePuts(nctemp176,nctemp178);
struct tree* nctemp187= p;
int nctemp189=PtreeGetline(nctemp187);
CodeLine =nctemp189;
}
}
}
int nctemp191= fdo;
nctempchar1* nctemp193= s;
int nctemp196=LibePuts(nctemp191,nctemp193);
int nctemp198= fdo;
int nctemp200=LibeFlush(nctemp198);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp206=CodeGetfdout();
fdo =nctemp206;
int nctemp208= fdo;
int nctemp210= d;
int nctemp212=LibePuti(nctemp208,nctemp210);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp218=CodeGetfdout();
fdo =nctemp218;
int nctemp220= fdo;
int nctemp222= d;
int nctemp224=LibePutc(nctemp220,nctemp222);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp230=CodeGetfdout();
fdo =nctemp230;
nctempchar1* nctemp235= s;
int nctemp238=LibeStrlen(nctemp235);
l =nctemp238;
for(i = 1;i < (l - 1);i = (i + 1)){
int nctemp240= fdo;
int nctemp247=i;
int nctemp244=(int)(s->a[nctemp247]);
int nctemp242= nctemp244;
int nctemp249=LibePutc(nctemp240,nctemp242);
}
int nctemp251= fdo;
int nctemp253=LibeFlush(nctemp251);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp260= tp;
nctempchar1* nctemp262=SymGetype(nctemp260);
nctempchar1* nctemp258= nctemp262;
struct nctempchar1 *nctemp265;
static struct nctempchar1 nctemp266 = {{ 10}, (char*)"rconstant\0"};
nctemp265=&nctemp266;
nctempchar1* nctemp263= nctemp265;
int nctemp267=LibeStrcmp(nctemp258,nctemp263);
int nctemp255 = (nctemp267 ==1);
if(nctemp255)
{
return 1;
}
struct symbol* nctemp275= tp;
nctempchar1* nctemp277=SymGetype(nctemp275);
nctempchar1* nctemp273= nctemp277;
struct nctempchar1 *nctemp280;
static struct nctempchar1 nctemp281 = {{ 10}, (char*)"iconstant\0"};
nctemp280=&nctemp281;
nctempchar1* nctemp278= nctemp280;
int nctemp282=LibeStrcmp(nctemp273,nctemp278);
int nctemp270 = (nctemp282 ==1);
if(nctemp270)
{
return 1;
}
struct symbol* nctemp290= tp;
nctempchar1* nctemp292=SymGetype(nctemp290);
nctempchar1* nctemp288= nctemp292;
struct nctempchar1 *nctemp295;
static struct nctempchar1 nctemp296 = {{ 10}, (char*)"sconstant\0"};
nctemp295=&nctemp296;
nctempchar1* nctemp293= nctemp295;
int nctemp297=LibeStrcmp(nctemp288,nctemp293);
int nctemp285 = (nctemp297 ==1);
if(nctemp285)
{
return 1;
}
struct symbol* nctemp305= tp;
nctempchar1* nctemp307=SymGetstruct(nctemp305);
nctempchar1* nctemp303= nctemp307;
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 10}, (char*)"structdef\0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
int nctemp312=LibeStrcmp(nctemp303,nctemp308);
int nctemp300 = (nctemp312 ==1);
if(nctemp300)
{
struct tree* nctemp315= p;
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 8}, (char*)"struct \0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=CodeEs(nctemp315,nctemp317);
}
struct symbol* nctemp327= tp;
nctempchar1* nctemp329=SymGetstruct(nctemp327);
nctempchar1* nctemp325= nctemp329;
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 7}, (char*)"struct\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
int nctemp334=LibeStrcmp(nctemp325,nctemp330);
int nctemp322 = (nctemp334 ==1);
if(nctemp322)
{
struct symbol* nctemp341= tp;
nctempchar1* nctemp343=SymGetarray(nctemp341);
nctempchar1* nctemp339= nctemp343;
struct nctempchar1 *nctemp346;
static struct nctempchar1 nctemp347 = {{ 6}, (char*)"array\0"};
nctemp346=&nctemp347;
nctempchar1* nctemp344= nctemp346;
int nctemp348=LibeStrcmp(nctemp339,nctemp344);
int nctemp336 = (nctemp348 ==1);
if(nctemp336)
{
struct symbol* nctemp355= tp;
nctempchar1* nctemp357=SymGetglobal(nctemp355);
nctempchar1* nctemp353= nctemp357;
struct nctempchar1 *nctemp360;
static struct nctempchar1 nctemp361 = {{ 7}, (char*)"global\0"};
nctemp360=&nctemp361;
nctempchar1* nctemp358= nctemp360;
int nctemp362=LibeStrcmp(nctemp353,nctemp358);
int nctemp350 = (nctemp362 ==1);
if(nctemp350)
{
struct tree* nctemp365= p;
struct nctempchar1 *nctemp369;
static struct nctempchar1 nctemp370 = {{ 8}, (char*)"static \0"};
nctemp369=&nctemp370;
nctempchar1* nctemp367= nctemp369;
int nctemp371=CodeEs(nctemp365,nctemp367);
}
struct tree* nctemp373= p;
struct nctempchar1 *nctemp377;
static struct nctempchar1 nctemp378 = {{ 14}, (char*)"struct nctemp\0"};
nctemp377=&nctemp378;
nctempchar1* nctemp375= nctemp377;
int nctemp379=CodeEs(nctemp373,nctemp375);
struct tree* nctemp381= p;
struct symbol* nctemp385= tp;
nctempchar1* nctemp387=SymGetype(nctemp385);
nctempchar1* nctemp383= nctemp387;
int nctemp388=CodeEs(nctemp381,nctemp383);
struct symbol* nctemp392= tp;
int nctemp394=SymGetrank(nctemp392);
int nctemp390= nctemp394;
int nctemp395=CodeEd(nctemp390);
struct tree* nctemp397= p;
struct nctempchar1 *nctemp401;
static struct nctempchar1 nctemp402 = {{ 3}, (char*)" *\0"};
nctemp401=&nctemp402;
nctempchar1* nctemp399= nctemp401;
int nctemp403=CodeEs(nctemp397,nctemp399);
struct tree* nctemp405= p;
struct symbol* nctemp409= tp;
nctempchar1* nctemp411=SymGetname(nctemp409);
nctempchar1* nctemp407= nctemp411;
int nctemp412=CodeEs(nctemp405,nctemp407);
}
else{
struct symbol* nctemp418= tp;
nctempchar1* nctemp420=SymGetglobal(nctemp418);
nctempchar1* nctemp416= nctemp420;
struct nctempchar1 *nctemp423;
static struct nctempchar1 nctemp424 = {{ 7}, (char*)"global\0"};
nctemp423=&nctemp424;
nctempchar1* nctemp421= nctemp423;
int nctemp425=LibeStrcmp(nctemp416,nctemp421);
int nctemp413 = (nctemp425 ==1);
if(nctemp413)
{
struct tree* nctemp428= p;
struct nctempchar1 *nctemp432;
static struct nctempchar1 nctemp433 = {{ 8}, (char*)"static \0"};
nctemp432=&nctemp433;
nctempchar1* nctemp430= nctemp432;
int nctemp434=CodeEs(nctemp428,nctemp430);
}
struct tree* nctemp436= p;
struct nctempchar1 *nctemp440;
static struct nctempchar1 nctemp441 = {{ 8}, (char*)"struct \0"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
int nctemp442=CodeEs(nctemp436,nctemp438);
struct tree* nctemp444= p;
struct symbol* nctemp448= tp;
nctempchar1* nctemp450=SymGetype(nctemp448);
nctempchar1* nctemp446= nctemp450;
int nctemp451=CodeEs(nctemp444,nctemp446);
struct tree* nctemp453= p;
struct nctempchar1 *nctemp457;
static struct nctempchar1 nctemp458 = {{ 2}, (char*)"*\0"};
nctemp457=&nctemp458;
nctempchar1* nctemp455= nctemp457;
int nctemp459=CodeEs(nctemp453,nctemp455);
struct tree* nctemp461= p;
struct nctempchar1 *nctemp465;
static struct nctempchar1 nctemp466 = {{ 2}, (char*)" \0"};
nctemp465=&nctemp466;
nctempchar1* nctemp463= nctemp465;
int nctemp467=CodeEs(nctemp461,nctemp463);
struct tree* nctemp469= p;
struct symbol* nctemp473= tp;
nctempchar1* nctemp475=SymGetname(nctemp473);
nctempchar1* nctemp471= nctemp475;
int nctemp476=CodeEs(nctemp469,nctemp471);
}
}
else{
struct symbol* nctemp482= tp;
nctempchar1* nctemp484=SymGetarray(nctemp482);
nctempchar1* nctemp480= nctemp484;
struct nctempchar1 *nctemp487;
static struct nctempchar1 nctemp488 = {{ 6}, (char*)"array\0"};
nctemp487=&nctemp488;
nctempchar1* nctemp485= nctemp487;
int nctemp489=LibeStrcmp(nctemp480,nctemp485);
int nctemp477 = (nctemp489 ==1);
if(nctemp477)
{
struct symbol* nctemp496= tp;
nctempchar1* nctemp498=SymGetglobal(nctemp496);
nctempchar1* nctemp494= nctemp498;
struct nctempchar1 *nctemp501;
static struct nctempchar1 nctemp502 = {{ 7}, (char*)"global\0"};
nctemp501=&nctemp502;
nctempchar1* nctemp499= nctemp501;
int nctemp503=LibeStrcmp(nctemp494,nctemp499);
int nctemp491 = (nctemp503 ==1);
if(nctemp491)
{
struct tree* nctemp506= p;
struct nctempchar1 *nctemp510;
static struct nctempchar1 nctemp511 = {{ 8}, (char*)"static \0"};
nctemp510=&nctemp511;
nctempchar1* nctemp508= nctemp510;
int nctemp512=CodeEs(nctemp506,nctemp508);
}
struct tree* nctemp514= p;
struct nctempchar1 *nctemp518;
static struct nctempchar1 nctemp519 = {{ 7}, (char*)"nctemp\0"};
nctemp518=&nctemp519;
nctempchar1* nctemp516= nctemp518;
int nctemp520=CodeEs(nctemp514,nctemp516);
struct tree* nctemp522= p;
struct symbol* nctemp526= tp;
nctempchar1* nctemp528=SymGetype(nctemp526);
nctempchar1* nctemp524= nctemp528;
int nctemp529=CodeEs(nctemp522,nctemp524);
struct symbol* nctemp533= tp;
int nctemp535=SymGetrank(nctemp533);
int nctemp531= nctemp535;
int nctemp536=CodeEd(nctemp531);
struct tree* nctemp538= p;
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 3}, (char*)" *\0"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
int nctemp544=CodeEs(nctemp538,nctemp540);
struct tree* nctemp546= p;
struct symbol* nctemp550= tp;
nctempchar1* nctemp552=SymGetname(nctemp550);
nctempchar1* nctemp548= nctemp552;
int nctemp553=CodeEs(nctemp546,nctemp548);
}
else{
struct symbol* nctemp559= tp;
nctempchar1* nctemp561=SymGetglobal(nctemp559);
nctempchar1* nctemp557= nctemp561;
struct nctempchar1 *nctemp564;
static struct nctempchar1 nctemp565 = {{ 7}, (char*)"global\0"};
nctemp564=&nctemp565;
nctempchar1* nctemp562= nctemp564;
int nctemp566=LibeStrcmp(nctemp557,nctemp562);
int nctemp554 = (nctemp566 ==1);
if(nctemp554)
{
struct tree* nctemp569= p;
struct nctempchar1 *nctemp573;
static struct nctempchar1 nctemp574 = {{ 8}, (char*)"static \0"};
nctemp573=&nctemp574;
nctempchar1* nctemp571= nctemp573;
int nctemp575=CodeEs(nctemp569,nctemp571);
}
struct tree* nctemp577= p;
struct symbol* nctemp581= tp;
nctempchar1* nctemp583=SymGetype(nctemp581);
nctempchar1* nctemp579= nctemp583;
int nctemp584=CodeEs(nctemp577,nctemp579);
struct tree* nctemp586= p;
struct nctempchar1 *nctemp590;
static struct nctempchar1 nctemp591 = {{ 2}, (char*)" \0"};
nctemp590=&nctemp591;
nctempchar1* nctemp588= nctemp590;
int nctemp592=CodeEs(nctemp586,nctemp588);
struct tree* nctemp594= p;
struct symbol* nctemp598= tp;
nctempchar1* nctemp600=SymGetname(nctemp598);
nctempchar1* nctemp596= nctemp600;
int nctemp601=CodeEs(nctemp594,nctemp596);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp603 = (tp !=0);
int nctemp607=nctemp603;
while(nctemp607)
{{
struct tree* nctemp609= p;
struct symbol* nctemp611= tp;
int nctemp613=CodeIdeclaration(nctemp609,nctemp611);
struct tree* nctemp615= p;
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 4}, (char*)";\n\0"};
nctemp619=&nctemp620;
nctempchar1* nctemp617= nctemp619;
int nctemp621=CodeEs(nctemp615,nctemp617);
struct symbol* nctemp626= tp;
struct symbol* nctemp628=SymMvnext(nctemp626);
tp =nctemp628;
}
int nctemp629 = (tp !=0);
nctemp607=nctemp629;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp635= p;
struct nctempchar1 *nctemp639;
static struct nctempchar1 nctemp640 = {{ 8}, (char*)"struct \0"};
nctemp639=&nctemp640;
nctempchar1* nctemp637= nctemp639;
int nctemp641=CodeEs(nctemp635,nctemp637);
struct tree* nctemp643= p;
struct symbol* nctemp647= tp;
nctempchar1* nctemp649=SymGetype(nctemp647);
nctempchar1* nctemp645= nctemp649;
int nctemp650=CodeEs(nctemp643,nctemp645);
struct tree* nctemp652= p;
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 3}, (char*)" {\0"};
nctemp656=&nctemp657;
nctempchar1* nctemp654= nctemp656;
int nctemp658=CodeEs(nctemp652,nctemp654);
struct symbol* nctemp663= tp;
struct symbol* nctemp665=SymGetable(nctemp663);
up =nctemp665;
struct symbol* nctemp670= up;
struct symbol* nctemp672=SymMvnext(nctemp670);
up =nctemp672;
struct tree* nctemp674= p;
struct symbol* nctemp676= up;
int nctemp678=CodeIdeclarations(nctemp674,nctemp676);
struct tree* nctemp680= p;
struct nctempchar1 *nctemp684;
static struct nctempchar1 nctemp685 = {{ 5}, (char*)"};\n\0"};
nctemp684=&nctemp685;
nctempchar1* nctemp682= nctemp684;
int nctemp686=CodeEs(nctemp680,nctemp682);
struct tree* nctemp688= p;
struct nctempchar1 *nctemp692;
static struct nctempchar1 nctemp693 = {{ 16}, (char*)"typedef struct \0"};
nctemp692=&nctemp693;
nctempchar1* nctemp690= nctemp692;
int nctemp694=CodeEs(nctemp688,nctemp690);
struct tree* nctemp696= p;
struct nctempchar1 *nctemp700;
static struct nctempchar1 nctemp701 = {{ 7}, (char*)"nctemp\0"};
nctemp700=&nctemp701;
nctempchar1* nctemp698= nctemp700;
int nctemp702=CodeEs(nctemp696,nctemp698);
struct tree* nctemp704= p;
struct symbol* nctemp708= tp;
nctempchar1* nctemp710=SymGetype(nctemp708);
nctempchar1* nctemp706= nctemp710;
int nctemp711=CodeEs(nctemp704,nctemp706);
struct tree* nctemp713= p;
struct nctempchar1 *nctemp717;
static struct nctempchar1 nctemp718 = {{ 2}, (char*)"1\0"};
nctemp717=&nctemp718;
nctempchar1* nctemp715= nctemp717;
int nctemp719=CodeEs(nctemp713,nctemp715);
struct tree* nctemp721= p;
struct nctempchar1 *nctemp725;
static struct nctempchar1 nctemp726 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp725=&nctemp726;
nctempchar1* nctemp723= nctemp725;
int nctemp727=CodeEs(nctemp721,nctemp723);
struct tree* nctemp729= p;
struct symbol* nctemp733= tp;
nctempchar1* nctemp735=SymGetype(nctemp733);
nctempchar1* nctemp731= nctemp735;
int nctemp736=CodeEs(nctemp729,nctemp731);
struct tree* nctemp738= p;
struct nctempchar1 *nctemp742;
static struct nctempchar1 nctemp743 = {{ 6}, (char*)" *a; \0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
int nctemp744=CodeEs(nctemp738,nctemp740);
struct tree* nctemp746= p;
struct nctempchar1 *nctemp750;
static struct nctempchar1 nctemp751 = {{ 3}, (char*)"} \0"};
nctemp750=&nctemp751;
nctempchar1* nctemp748= nctemp750;
int nctemp752=CodeEs(nctemp746,nctemp748);
struct tree* nctemp754= p;
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 7}, (char*)"nctemp\0"};
nctemp758=&nctemp759;
nctempchar1* nctemp756= nctemp758;
int nctemp760=CodeEs(nctemp754,nctemp756);
struct tree* nctemp762= p;
struct symbol* nctemp766= tp;
nctempchar1* nctemp768=SymGetype(nctemp766);
nctempchar1* nctemp764= nctemp768;
int nctemp769=CodeEs(nctemp762,nctemp764);
struct tree* nctemp771= p;
struct nctempchar1 *nctemp775;
static struct nctempchar1 nctemp776 = {{ 2}, (char*)"1\0"};
nctemp775=&nctemp776;
nctempchar1* nctemp773= nctemp775;
int nctemp777=CodeEs(nctemp771,nctemp773);
struct tree* nctemp779= p;
struct nctempchar1 *nctemp783;
static struct nctempchar1 nctemp784 = {{ 4}, (char*)";\n\0"};
nctemp783=&nctemp784;
nctempchar1* nctemp781= nctemp783;
int nctemp785=CodeEs(nctemp779,nctemp781);
struct tree* nctemp787= p;
struct nctempchar1 *nctemp791;
static struct nctempchar1 nctemp792 = {{ 8}, (char*)"struct \0"};
nctemp791=&nctemp792;
nctempchar1* nctemp789= nctemp791;
int nctemp793=CodeEs(nctemp787,nctemp789);
struct tree* nctemp795= p;
struct nctempchar1 *nctemp799;
static struct nctempchar1 nctemp800 = {{ 7}, (char*)"nctemp\0"};
nctemp799=&nctemp800;
nctempchar1* nctemp797= nctemp799;
int nctemp801=CodeEs(nctemp795,nctemp797);
struct tree* nctemp803= p;
struct symbol* nctemp807= tp;
nctempchar1* nctemp809=SymGetype(nctemp807);
nctempchar1* nctemp805= nctemp809;
int nctemp810=CodeEs(nctemp803,nctemp805);
struct tree* nctemp812= p;
struct nctempchar1 *nctemp816;
static struct nctempchar1 nctemp817 = {{ 2}, (char*)"2\0"};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
int nctemp818=CodeEs(nctemp812,nctemp814);
struct tree* nctemp820= p;
struct nctempchar1 *nctemp824;
static struct nctempchar1 nctemp825 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp824=&nctemp825;
nctempchar1* nctemp822= nctemp824;
int nctemp826=CodeEs(nctemp820,nctemp822);
struct tree* nctemp828= p;
struct symbol* nctemp832= tp;
nctempchar1* nctemp834=SymGetype(nctemp832);
nctempchar1* nctemp830= nctemp834;
int nctemp835=CodeEs(nctemp828,nctemp830);
struct tree* nctemp837= p;
struct nctempchar1 *nctemp841;
static struct nctempchar1 nctemp842 = {{ 6}, (char*)" *a; \0"};
nctemp841=&nctemp842;
nctempchar1* nctemp839= nctemp841;
int nctemp843=CodeEs(nctemp837,nctemp839);
struct tree* nctemp845= p;
struct nctempchar1 *nctemp849;
static struct nctempchar1 nctemp850 = {{ 3}, (char*)"} \0"};
nctemp849=&nctemp850;
nctempchar1* nctemp847= nctemp849;
int nctemp851=CodeEs(nctemp845,nctemp847);
struct tree* nctemp853= p;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 4}, (char*)";\n\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
int nctemp859=CodeEs(nctemp853,nctemp855);
struct tree* nctemp861= p;
struct nctempchar1 *nctemp865;
static struct nctempchar1 nctemp866 = {{ 8}, (char*)"struct \0"};
nctemp865=&nctemp866;
nctempchar1* nctemp863= nctemp865;
int nctemp867=CodeEs(nctemp861,nctemp863);
struct tree* nctemp869= p;
struct nctempchar1 *nctemp873;
static struct nctempchar1 nctemp874 = {{ 7}, (char*)"nctemp\0"};
nctemp873=&nctemp874;
nctempchar1* nctemp871= nctemp873;
int nctemp875=CodeEs(nctemp869,nctemp871);
struct tree* nctemp877= p;
struct symbol* nctemp881= tp;
nctempchar1* nctemp883=SymGetype(nctemp881);
nctempchar1* nctemp879= nctemp883;
int nctemp884=CodeEs(nctemp877,nctemp879);
struct tree* nctemp886= p;
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 2}, (char*)"3\0"};
nctemp890=&nctemp891;
nctempchar1* nctemp888= nctemp890;
int nctemp892=CodeEs(nctemp886,nctemp888);
struct tree* nctemp894= p;
struct nctempchar1 *nctemp898;
static struct nctempchar1 nctemp899 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp898=&nctemp899;
nctempchar1* nctemp896= nctemp898;
int nctemp900=CodeEs(nctemp894,nctemp896);
struct tree* nctemp902= p;
struct symbol* nctemp906= tp;
nctempchar1* nctemp908=SymGetype(nctemp906);
nctempchar1* nctemp904= nctemp908;
int nctemp909=CodeEs(nctemp902,nctemp904);
struct tree* nctemp911= p;
struct nctempchar1 *nctemp915;
static struct nctempchar1 nctemp916 = {{ 6}, (char*)" *a; \0"};
nctemp915=&nctemp916;
nctempchar1* nctemp913= nctemp915;
int nctemp917=CodeEs(nctemp911,nctemp913);
struct tree* nctemp919= p;
struct nctempchar1 *nctemp923;
static struct nctempchar1 nctemp924 = {{ 3}, (char*)"} \0"};
nctemp923=&nctemp924;
nctempchar1* nctemp921= nctemp923;
int nctemp925=CodeEs(nctemp919,nctemp921);
struct tree* nctemp927= p;
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 4}, (char*)";\n\0"};
nctemp931=&nctemp932;
nctempchar1* nctemp929= nctemp931;
int nctemp933=CodeEs(nctemp927,nctemp929);
struct tree* nctemp935= p;
struct nctempchar1 *nctemp939;
static struct nctempchar1 nctemp940 = {{ 8}, (char*)"struct \0"};
nctemp939=&nctemp940;
nctempchar1* nctemp937= nctemp939;
int nctemp941=CodeEs(nctemp935,nctemp937);
struct tree* nctemp943= p;
struct nctempchar1 *nctemp947;
static struct nctempchar1 nctemp948 = {{ 7}, (char*)"nctemp\0"};
nctemp947=&nctemp948;
nctempchar1* nctemp945= nctemp947;
int nctemp949=CodeEs(nctemp943,nctemp945);
struct tree* nctemp951= p;
struct symbol* nctemp955= tp;
nctempchar1* nctemp957=SymGetype(nctemp955);
nctempchar1* nctemp953= nctemp957;
int nctemp958=CodeEs(nctemp951,nctemp953);
struct tree* nctemp960= p;
struct nctempchar1 *nctemp964;
static struct nctempchar1 nctemp965 = {{ 2}, (char*)"4\0"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
int nctemp966=CodeEs(nctemp960,nctemp962);
struct tree* nctemp968= p;
struct nctempchar1 *nctemp972;
static struct nctempchar1 nctemp973 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp972=&nctemp973;
nctempchar1* nctemp970= nctemp972;
int nctemp974=CodeEs(nctemp968,nctemp970);
struct tree* nctemp976= p;
struct symbol* nctemp980= tp;
nctempchar1* nctemp982=SymGetype(nctemp980);
nctempchar1* nctemp978= nctemp982;
int nctemp983=CodeEs(nctemp976,nctemp978);
struct tree* nctemp985= p;
struct nctempchar1 *nctemp989;
static struct nctempchar1 nctemp990 = {{ 6}, (char*)" *a; \0"};
nctemp989=&nctemp990;
nctempchar1* nctemp987= nctemp989;
int nctemp991=CodeEs(nctemp985,nctemp987);
struct tree* nctemp993= p;
struct nctempchar1 *nctemp997;
static struct nctempchar1 nctemp998 = {{ 3}, (char*)"} \0"};
nctemp997=&nctemp998;
nctempchar1* nctemp995= nctemp997;
int nctemp999=CodeEs(nctemp993,nctemp995);
struct tree* nctemp1001= p;
struct nctempchar1 *nctemp1005;
static struct nctempchar1 nctemp1006 = {{ 4}, (char*)";\n\0"};
nctemp1005=&nctemp1006;
nctempchar1* nctemp1003= nctemp1005;
int nctemp1007=CodeEs(nctemp1001,nctemp1003);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp1014= tp;
nctempchar1* nctemp1016=SymGetstruct(nctemp1014);
nctempchar1* nctemp1012= nctemp1016;
struct nctempchar1 *nctemp1019;
static struct nctempchar1 nctemp1020 = {{ 7}, (char*)"struct\0"};
nctemp1019=&nctemp1020;
nctempchar1* nctemp1017= nctemp1019;
int nctemp1021=LibeStrcmp(nctemp1012,nctemp1017);
int nctemp1009 = (nctemp1021 ==1);
if(nctemp1009)
{
struct tree* nctemp1024= p;
struct nctempchar1 *nctemp1028;
static struct nctempchar1 nctemp1029 = {{ 8}, (char*)"struct \0"};
nctemp1028=&nctemp1029;
nctempchar1* nctemp1026= nctemp1028;
int nctemp1030=CodeEs(nctemp1024,nctemp1026);
}
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
struct tree* nctemp1046= p;
struct nctempchar1 *nctemp1050;
static struct nctempchar1 nctemp1051 = {{ 7}, (char*)"nctemp\0"};
nctemp1050=&nctemp1051;
nctempchar1* nctemp1048= nctemp1050;
int nctemp1052=CodeEs(nctemp1046,nctemp1048);
}
struct tree* nctemp1054= p;
struct symbol* nctemp1058= tp;
nctempchar1* nctemp1060=SymGetype(nctemp1058);
nctempchar1* nctemp1056= nctemp1060;
int nctemp1061=CodeEs(nctemp1054,nctemp1056);
struct symbol* nctemp1067= tp;
nctempchar1* nctemp1069=SymGetarray(nctemp1067);
nctempchar1* nctemp1065= nctemp1069;
struct nctempchar1 *nctemp1072;
static struct nctempchar1 nctemp1073 = {{ 6}, (char*)"array\0"};
nctemp1072=&nctemp1073;
nctempchar1* nctemp1070= nctemp1072;
int nctemp1074=LibeStrcmp(nctemp1065,nctemp1070);
int nctemp1062 = (nctemp1074 ==1);
if(nctemp1062)
{
struct symbol* nctemp1079= tp;
int nctemp1081=SymGetrank(nctemp1079);
int nctemp1077= nctemp1081;
int nctemp1082=CodeEd(nctemp1077);
struct tree* nctemp1084= p;
struct nctempchar1 *nctemp1088;
static struct nctempchar1 nctemp1089 = {{ 3}, (char*)" *\0"};
nctemp1088=&nctemp1089;
nctempchar1* nctemp1086= nctemp1088;
int nctemp1090=CodeEs(nctemp1084,nctemp1086);
}
struct symbol* nctemp1096= tp;
nctempchar1* nctemp1098=SymGetstruct(nctemp1096);
nctempchar1* nctemp1094= nctemp1098;
struct nctempchar1 *nctemp1101;
static struct nctempchar1 nctemp1102 = {{ 7}, (char*)"struct\0"};
nctemp1101=&nctemp1102;
nctempchar1* nctemp1099= nctemp1101;
int nctemp1103=LibeStrcmp(nctemp1094,nctemp1099);
int nctemp1091 = (nctemp1103 ==1);
if(nctemp1091)
{
struct tree* nctemp1106= p;
struct nctempchar1 *nctemp1110;
static struct nctempchar1 nctemp1111 = {{ 2}, (char*)"*\0"};
nctemp1110=&nctemp1111;
nctempchar1* nctemp1108= nctemp1110;
int nctemp1112=CodeEs(nctemp1106,nctemp1108);
}
struct tree* nctemp1114= p;
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 2}, (char*)" \0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
int nctemp1120=CodeEs(nctemp1114,nctemp1116);
struct tree* nctemp1122= p;
struct symbol* nctemp1126= tp;
nctempchar1* nctemp1128=SymGetname(nctemp1126);
nctempchar1* nctemp1124= nctemp1128;
int nctemp1129=CodeEs(nctemp1122,nctemp1124);
struct tree* nctemp1131= p;
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 3}, (char*)" (\0"};
nctemp1135=&nctemp1136;
nctempchar1* nctemp1133= nctemp1135;
int nctemp1137=CodeEs(nctemp1131,nctemp1133);
struct symbol* nctemp1142= tp;
struct symbol* nctemp1144=SymGetable(nctemp1142);
tp =nctemp1144;
int nctemp1145 = (tp ==0);
if(nctemp1145)
{
struct tree* nctemp1150= p;
struct nctempchar1 *nctemp1154;
static struct nctempchar1 nctemp1155 = {{ 5}, (char*)");\n\0"};
nctemp1154=&nctemp1155;
nctempchar1* nctemp1152= nctemp1154;
int nctemp1156=CodeEs(nctemp1150,nctemp1152);
return 1;
}
struct symbol* nctemp1162= tp;
struct symbol* nctemp1164=SymMvnext(nctemp1162);
tp =nctemp1164;
struct symbol* nctemp1169= tp;
struct symbol* nctemp1171=SymGetable(nctemp1169);
tp =nctemp1171;
int nctemp1172 = (tp ==0);
if(nctemp1172)
{
return 1;
}
struct symbol* nctemp1181= tp;
struct symbol* nctemp1183=SymMvnext(nctemp1181);
tp =nctemp1183;
int nctemp1184 = (tp !=0);
int nctemp1188=nctemp1184;
while(nctemp1188)
{{
struct tree* nctemp1190= p;
struct symbol* nctemp1192= tp;
int nctemp1194=CodeIdeclaration(nctemp1190,nctemp1192);
struct symbol* nctemp1199= tp;
struct symbol* nctemp1201=SymMvnext(nctemp1199);
tp =nctemp1201;
int nctemp1202 = (tp !=0);
if(nctemp1202)
{
struct tree* nctemp1207= p;
struct nctempchar1 *nctemp1211;
static struct nctempchar1 nctemp1212 = {{ 2}, (char*)",\0"};
nctemp1211=&nctemp1212;
nctempchar1* nctemp1209= nctemp1211;
int nctemp1213=CodeEs(nctemp1207,nctemp1209);
}
else{
struct tree* nctemp1215= p;
struct nctempchar1 *nctemp1219;
static struct nctempchar1 nctemp1220 = {{ 5}, (char*)");\n\0"};
nctemp1219=&nctemp1220;
nctempchar1* nctemp1217= nctemp1219;
int nctemp1221=CodeEs(nctemp1215,nctemp1217);
}
}
int nctemp1222 = (tp !=0);
nctemp1188=nctemp1222;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1232= p;
nctempchar1* nctemp1234=PtreeGetdef(nctemp1232);
module=nctemp1234;
struct symbol* nctemp1239= tp;
struct symbol* nctemp1241=SymMvnext(nctemp1239);
tp =nctemp1241;
int nctemp1242 = (tp !=0);
int nctemp1246=nctemp1242;
while(nctemp1246)
{{
struct symbol* nctemp1252= tp;
nctempchar1* nctemp1254=SymGetmodule(nctemp1252);
nctempchar1* nctemp1250= nctemp1254;
nctempchar1* nctemp1255= module;
int nctemp1258=LibeStrcmp(nctemp1250,nctemp1255);
int nctemp1247 = (nctemp1258 ==1);
if(nctemp1247)
{
struct symbol* nctemp1265= tp;
nctempchar1* nctemp1267=SymGetstruct(nctemp1265);
nctempchar1* nctemp1263= nctemp1267;
struct nctempchar1 *nctemp1270;
static struct nctempchar1 nctemp1271 = {{ 10}, (char*)"structdef\0"};
nctemp1270=&nctemp1271;
nctempchar1* nctemp1268= nctemp1270;
int nctemp1272=LibeStrcmp(nctemp1263,nctemp1268);
int nctemp1260 = (nctemp1272 ==1);
if(nctemp1260)
{
struct tree* nctemp1275= p;
struct symbol* nctemp1277= tp;
int nctemp1279=CodeStructdefsym(nctemp1275,nctemp1277);
}
else{
struct symbol* nctemp1285= tp;
nctempchar1* nctemp1287=SymGetfunc(nctemp1285);
nctempchar1* nctemp1283= nctemp1287;
struct nctempchar1 *nctemp1290;
static struct nctempchar1 nctemp1291 = {{ 5}, (char*)"fdef\0"};
nctemp1290=&nctemp1291;
nctempchar1* nctemp1288= nctemp1290;
int nctemp1292=LibeStrcmp(nctemp1283,nctemp1288);
int nctemp1280 = (nctemp1292 ==1);
if(nctemp1280)
{
struct tree* nctemp1295= p;
struct symbol* nctemp1297= tp;
int nctemp1299=CodeFdefcpusym(nctemp1295,nctemp1297);
}
}
}
struct symbol* nctemp1304= tp;
struct symbol* nctemp1306=SymMvnext(nctemp1304);
tp =nctemp1306;
}
int nctemp1307 = (tp !=0);
nctemp1246=nctemp1307;}return 1;
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
struct tree* nctemp1317= p;
nctempchar1* nctemp1319=PtreeGetarray(nctemp1317);
nctempchar1* nctemp1315= nctemp1319;
struct nctempchar1 *nctemp1322;
static struct nctempchar1 nctemp1323 = {{ 6}, (char*)"array\0"};
nctemp1322=&nctemp1323;
nctempchar1* nctemp1320= nctemp1322;
int nctemp1324=LibeStrcmp(nctemp1315,nctemp1320);
int nctemp1312 = (nctemp1324 ==1);
if(nctemp1312)
{
struct tree* nctemp1330= p;
struct tree* nctemp1332=PtreeMvchild(nctemp1330);
p =nctemp1332;
struct tree* nctemp1337= p;
struct tree* nctemp1339=PtreeMvsister(nctemp1337);
p =nctemp1339;
struct tree* nctemp1345= p;
nctempchar1* nctemp1347=PtreeGetforw(nctemp1345);
nctempchar1* nctemp1343= nctemp1347;
struct nctempchar1 *nctemp1350;
static struct nctempchar1 nctemp1351 = {{ 5}, (char*)"forw\0"};
nctemp1350=&nctemp1351;
nctempchar1* nctemp1348= nctemp1350;
int nctemp1352=LibeStrcmp(nctemp1343,nctemp1348);
int nctemp1340 = (nctemp1352 ==1);
if(nctemp1340)
{
forw = 1;
}
}
else{
struct tree* nctemp1358= p;
struct tree* nctemp1360=PtreeMvchild(nctemp1358);
p =nctemp1360;
struct tree* nctemp1366= p;
nctempchar1* nctemp1368=PtreeGetforw(nctemp1366);
nctempchar1* nctemp1364= nctemp1368;
struct nctempchar1 *nctemp1371;
static struct nctempchar1 nctemp1372 = {{ 5}, (char*)"forw\0"};
nctemp1371=&nctemp1372;
nctempchar1* nctemp1369= nctemp1371;
int nctemp1373=LibeStrcmp(nctemp1364,nctemp1369);
int nctemp1361 = (nctemp1373 ==1);
if(nctemp1361)
{
forw = 1;
}
}
struct tree* nctemp1381= p;
nctempchar1* nctemp1383=PtreeGetdef(nctemp1381);
nctempchar1* nctemp1379= nctemp1383;
struct symbol* nctemp1386=SymGetetp();
struct symbol* nctemp1384= nctemp1386;
struct symbol* nctemp1387=SymLookup(nctemp1379,nctemp1384);
tp =nctemp1387;
struct symbol* nctemp1393= tp;
nctempchar1* nctemp1395=SymGetstruct(nctemp1393);
nctempchar1* nctemp1391= nctemp1395;
struct nctempchar1 *nctemp1398;
static struct nctempchar1 nctemp1399 = {{ 7}, (char*)"struct\0"};
nctemp1398=&nctemp1399;
nctempchar1* nctemp1396= nctemp1398;
int nctemp1400=LibeStrcmp(nctemp1391,nctemp1396);
int nctemp1388 = (nctemp1400 ==1);
if(nctemp1388)
{
struct tree* nctemp1403= p;
struct nctempchar1 *nctemp1407;
static struct nctempchar1 nctemp1408 = {{ 8}, (char*)"struct \0"};
nctemp1407=&nctemp1408;
nctempchar1* nctemp1405= nctemp1407;
int nctemp1409=CodeEs(nctemp1403,nctemp1405);
}
struct symbol* nctemp1415= tp;
nctempchar1* nctemp1417=SymGetarray(nctemp1415);
nctempchar1* nctemp1413= nctemp1417;
struct nctempchar1 *nctemp1420;
static struct nctempchar1 nctemp1421 = {{ 6}, (char*)"array\0"};
nctemp1420=&nctemp1421;
nctempchar1* nctemp1418= nctemp1420;
int nctemp1422=LibeStrcmp(nctemp1413,nctemp1418);
int nctemp1410 = (nctemp1422 ==1);
if(nctemp1410)
{
struct tree* nctemp1425= p;
struct nctempchar1 *nctemp1429;
static struct nctempchar1 nctemp1430 = {{ 7}, (char*)"nctemp\0"};
nctemp1429=&nctemp1430;
nctempchar1* nctemp1427= nctemp1429;
int nctemp1431=CodeEs(nctemp1425,nctemp1427);
}
struct tree* nctemp1433= p;
struct symbol* nctemp1437= tp;
nctempchar1* nctemp1439=SymGetype(nctemp1437);
nctempchar1* nctemp1435= nctemp1439;
int nctemp1440=CodeEs(nctemp1433,nctemp1435);
struct symbol* nctemp1446= tp;
nctempchar1* nctemp1448=SymGetarray(nctemp1446);
nctempchar1* nctemp1444= nctemp1448;
struct nctempchar1 *nctemp1451;
static struct nctempchar1 nctemp1452 = {{ 6}, (char*)"array\0"};
nctemp1451=&nctemp1452;
nctempchar1* nctemp1449= nctemp1451;
int nctemp1453=LibeStrcmp(nctemp1444,nctemp1449);
int nctemp1441 = (nctemp1453 ==1);
if(nctemp1441)
{
struct symbol* nctemp1458= tp;
int nctemp1460=SymGetrank(nctemp1458);
int nctemp1456= nctemp1460;
int nctemp1461=CodeEd(nctemp1456);
struct tree* nctemp1463= p;
struct nctempchar1 *nctemp1467;
static struct nctempchar1 nctemp1468 = {{ 3}, (char*)" *\0"};
nctemp1467=&nctemp1468;
nctempchar1* nctemp1465= nctemp1467;
int nctemp1469=CodeEs(nctemp1463,nctemp1465);
}
struct symbol* nctemp1475= tp;
nctempchar1* nctemp1477=SymGetstruct(nctemp1475);
nctempchar1* nctemp1473= nctemp1477;
struct nctempchar1 *nctemp1480;
static struct nctempchar1 nctemp1481 = {{ 7}, (char*)"struct\0"};
nctemp1480=&nctemp1481;
nctempchar1* nctemp1478= nctemp1480;
int nctemp1482=LibeStrcmp(nctemp1473,nctemp1478);
int nctemp1470 = (nctemp1482 ==1);
if(nctemp1470)
{
struct tree* nctemp1485= p;
struct nctempchar1 *nctemp1489;
static struct nctempchar1 nctemp1490 = {{ 2}, (char*)"*\0"};
nctemp1489=&nctemp1490;
nctempchar1* nctemp1487= nctemp1489;
int nctemp1491=CodeEs(nctemp1485,nctemp1487);
}
struct tree* nctemp1493= p;
struct nctempchar1 *nctemp1497;
static struct nctempchar1 nctemp1498 = {{ 2}, (char*)" \0"};
nctemp1497=&nctemp1498;
nctempchar1* nctemp1495= nctemp1497;
int nctemp1499=CodeEs(nctemp1493,nctemp1495);
struct tree* nctemp1501= p;
struct symbol* nctemp1505= tp;
nctempchar1* nctemp1507=SymGetname(nctemp1505);
nctempchar1* nctemp1503= nctemp1507;
int nctemp1508=CodeEs(nctemp1501,nctemp1503);
struct tree* nctemp1510= p;
struct nctempchar1 *nctemp1514;
static struct nctempchar1 nctemp1515 = {{ 3}, (char*)" (\0"};
nctemp1514=&nctemp1515;
nctempchar1* nctemp1512= nctemp1514;
int nctemp1516=CodeEs(nctemp1510,nctemp1512);
struct tree* nctemp1520= p;
struct tree* nctemp1522=PtreeMvchild(nctemp1520);
int nctemp1517 = (nctemp1522 !=0);
if(nctemp1517)
{
struct tree* nctemp1528= p;
struct tree* nctemp1530=PtreeMvchild(nctemp1528);
p =nctemp1530;
}
struct tree* nctemp1536= p;
nctempchar1* nctemp1538=PtreeGetname(nctemp1536);
nctempchar1* nctemp1534= nctemp1538;
struct nctempchar1 *nctemp1541;
static struct nctempchar1 nctemp1542 = {{ 8}, (char*)"arglist\0"};
nctemp1541=&nctemp1542;
nctempchar1* nctemp1539= nctemp1541;
int nctemp1543=LibeStrcmp(nctemp1534,nctemp1539);
int nctemp1531 = (nctemp1543 ==1);
if(nctemp1531)
{
struct symbol* nctemp1549= tp;
struct symbol* nctemp1551=SymGetable(nctemp1549);
tp =nctemp1551;
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 9}, (char*)"#arglist\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
struct symbol* nctemp1560= tp;
struct symbol* nctemp1562=SymLookup(nctemp1556,nctemp1560);
tp =nctemp1562;
struct symbol* nctemp1567= tp;
struct symbol* nctemp1569=SymGetable(nctemp1567);
tp =nctemp1569;
struct symbol* nctemp1577= tp;
struct symbol* nctemp1579=SymMvnext(nctemp1577);
tp =nctemp1579;
int nctemp1570 = (tp !=0);
int nctemp1581=nctemp1570;
while(nctemp1581)
{{
struct tree* nctemp1583= p;
struct symbol* nctemp1585= tp;
int nctemp1587=CodeIdeclaration(nctemp1583,nctemp1585);
struct symbol* nctemp1591= tp;
struct symbol* nctemp1593=SymMvnext(nctemp1591);
int nctemp1588 = (nctemp1593 !=0);
if(nctemp1588)
{
struct tree* nctemp1596= p;
struct nctempchar1 *nctemp1600;
static struct nctempchar1 nctemp1601 = {{ 2}, (char*)",\0"};
nctemp1600=&nctemp1601;
nctempchar1* nctemp1598= nctemp1600;
int nctemp1602=CodeEs(nctemp1596,nctemp1598);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1610= tp;
struct symbol* nctemp1612=SymMvnext(nctemp1610);
tp =nctemp1612;
int nctemp1603 = (tp !=0);
nctemp1581=nctemp1603;}}
struct tree* nctemp1615= p;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 4}, (char*)")\n\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
int nctemp1621=CodeEs(nctemp1615,nctemp1617);
int nctemp1622 = (forw ==1);
if(nctemp1622)
{
struct tree* nctemp1627= p;
struct nctempchar1 *nctemp1631;
static struct nctempchar1 nctemp1632 = {{ 4}, (char*)";\n\0"};
nctemp1631=&nctemp1632;
nctempchar1* nctemp1629= nctemp1631;
int nctemp1633=CodeEs(nctemp1627,nctemp1629);
return 1;
}
struct tree* nctemp1638= p;
struct tree* nctemp1640=PtreeMvsister(nctemp1638);
int nctemp1635 = (nctemp1640 !=0);
if(nctemp1635)
{
struct tree* nctemp1645= p;
struct tree* nctemp1647=PtreeMvsister(nctemp1645);
struct tree* nctemp1643= nctemp1647;
int nctemp1648=CodeCompstmnt(nctemp1643);
}
else{
struct tree* nctemp1650= p;
int nctemp1652=CodeCompstmnt(nctemp1650);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1660= p;
nctempchar1* nctemp1662=PtreeGetdef(nctemp1660);
nctempchar1* nctemp1658= nctemp1662;
struct symbol* nctemp1665=SymGetetp();
struct symbol* nctemp1663= nctemp1665;
struct symbol* nctemp1666=SymLookup(nctemp1658,nctemp1663);
tp =nctemp1666;
struct symbol* nctemp1670= tp;
struct symbol* nctemp1672=SymGetable(nctemp1670);
struct symbol* nctemp1668= nctemp1672;
int nctemp1673=SymSetltp(nctemp1668);
struct tree* nctemp1675= p;
struct nctempchar1 *nctemp1679;
static struct nctempchar1 nctemp1680 = {{ 12}, (char*)"__global__ \0"};
nctemp1679=&nctemp1680;
nctempchar1* nctemp1677= nctemp1679;
int nctemp1681=CodeEs(nctemp1675,nctemp1677);
struct tree* nctemp1683= p;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 5}, (char*)"void\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=CodeEs(nctemp1683,nctemp1685);
struct symbol* nctemp1695= tp;
nctempchar1* nctemp1697=SymGetarray(nctemp1695);
nctempchar1* nctemp1693= nctemp1697;
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 6}, (char*)"array\0"};
nctemp1700=&nctemp1701;
nctempchar1* nctemp1698= nctemp1700;
int nctemp1702=LibeStrcmp(nctemp1693,nctemp1698);
int nctemp1690 = (nctemp1702 ==1);
if(nctemp1690)
{
struct symbol* nctemp1707= tp;
int nctemp1709=SymGetrank(nctemp1707);
int nctemp1705= nctemp1709;
int nctemp1710=CodeEd(nctemp1705);
}
struct symbol* nctemp1716= tp;
nctempchar1* nctemp1718=SymGetstruct(nctemp1716);
nctempchar1* nctemp1714= nctemp1718;
struct nctempchar1 *nctemp1721;
static struct nctempchar1 nctemp1722 = {{ 7}, (char*)"struct\0"};
nctemp1721=&nctemp1722;
nctempchar1* nctemp1719= nctemp1721;
int nctemp1723=LibeStrcmp(nctemp1714,nctemp1719);
int nctemp1711 = (nctemp1723 ==1);
if(nctemp1711)
{
struct tree* nctemp1726= p;
struct nctempchar1 *nctemp1730;
static struct nctempchar1 nctemp1731 = {{ 2}, (char*)"*\0"};
nctemp1730=&nctemp1731;
nctempchar1* nctemp1728= nctemp1730;
int nctemp1732=CodeEs(nctemp1726,nctemp1728);
}
struct tree* nctemp1734= p;
struct nctempchar1 *nctemp1738;
static struct nctempchar1 nctemp1739 = {{ 2}, (char*)" \0"};
nctemp1738=&nctemp1739;
nctempchar1* nctemp1736= nctemp1738;
int nctemp1740=CodeEs(nctemp1734,nctemp1736);
struct tree* nctemp1742= p;
struct nctempchar1 *nctemp1746;
static struct nctempchar1 nctemp1747 = {{ 8}, (char*)"kernel_\0"};
nctemp1746=&nctemp1747;
nctempchar1* nctemp1744= nctemp1746;
int nctemp1748=CodeEs(nctemp1742,nctemp1744);
struct tree* nctemp1750= p;
struct symbol* nctemp1754= tp;
nctempchar1* nctemp1756=SymGetname(nctemp1754);
nctempchar1* nctemp1752= nctemp1756;
int nctemp1757=CodeEs(nctemp1750,nctemp1752);
struct tree* nctemp1759= p;
struct nctempchar1 *nctemp1763;
static struct nctempchar1 nctemp1764 = {{ 3}, (char*)" (\0"};
nctemp1763=&nctemp1764;
nctempchar1* nctemp1761= nctemp1763;
int nctemp1765=CodeEs(nctemp1759,nctemp1761);
struct tree* nctemp1770= p;
struct tree* nctemp1772=PtreeMvchild(nctemp1770);
p =nctemp1772;
struct tree* nctemp1778= p;
nctempchar1* nctemp1780=PtreeGetname(nctemp1778);
nctempchar1* nctemp1776= nctemp1780;
struct nctempchar1 *nctemp1783;
static struct nctempchar1 nctemp1784 = {{ 8}, (char*)"arglist\0"};
nctemp1783=&nctemp1784;
nctempchar1* nctemp1781= nctemp1783;
int nctemp1785=LibeStrcmp(nctemp1776,nctemp1781);
int nctemp1773 = (nctemp1785 ==1);
if(nctemp1773)
{
struct symbol* nctemp1791= tp;
struct symbol* nctemp1793=SymGetable(nctemp1791);
tp =nctemp1793;
struct nctempchar1 *nctemp1800;
static struct nctempchar1 nctemp1801 = {{ 9}, (char*)"#arglist\0"};
nctemp1800=&nctemp1801;
nctempchar1* nctemp1798= nctemp1800;
struct symbol* nctemp1802= tp;
struct symbol* nctemp1804=SymLookup(nctemp1798,nctemp1802);
tp =nctemp1804;
struct symbol* nctemp1809= tp;
struct symbol* nctemp1811=SymGetable(nctemp1809);
tp =nctemp1811;
struct symbol* nctemp1819= tp;
struct symbol* nctemp1821=SymMvnext(nctemp1819);
tp =nctemp1821;
int nctemp1812 = (tp !=0);
int nctemp1823=nctemp1812;
while(nctemp1823)
{{
struct tree* nctemp1825= p;
struct symbol* nctemp1827= tp;
int nctemp1829=CodeIdeclaration(nctemp1825,nctemp1827);
struct symbol* nctemp1833= tp;
struct symbol* nctemp1835=SymMvnext(nctemp1833);
int nctemp1830 = (nctemp1835 !=0);
if(nctemp1830)
{
struct tree* nctemp1838= p;
struct nctempchar1 *nctemp1842;
static struct nctempchar1 nctemp1843 = {{ 2}, (char*)",\0"};
nctemp1842=&nctemp1843;
nctempchar1* nctemp1840= nctemp1842;
int nctemp1844=CodeEs(nctemp1838,nctemp1840);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1852= tp;
struct symbol* nctemp1854=SymMvnext(nctemp1852);
tp =nctemp1854;
int nctemp1845 = (tp !=0);
nctemp1823=nctemp1845;}}
struct tree* nctemp1857= p;
struct nctempchar1 *nctemp1861;
static struct nctempchar1 nctemp1862 = {{ 5}, (char*)");\n\0"};
nctemp1861=&nctemp1862;
nctempchar1* nctemp1859= nctemp1861;
int nctemp1863=CodeEs(nctemp1857,nctemp1859);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1870= p;
nctempchar1* nctemp1872=PtreeGetarray(nctemp1870);
nctempchar1* nctemp1868= nctemp1872;
struct nctempchar1 *nctemp1875;
static struct nctempchar1 nctemp1876 = {{ 6}, (char*)"array\0"};
nctemp1875=&nctemp1876;
nctempchar1* nctemp1873= nctemp1875;
int nctemp1877=LibeStrcmp(nctemp1868,nctemp1873);
int nctemp1865 = (nctemp1877 ==1);
if(nctemp1865)
{
struct tree* nctemp1883= p;
struct tree* nctemp1885=PtreeMvchild(nctemp1883);
p =nctemp1885;
struct tree* nctemp1890= p;
struct tree* nctemp1892=PtreeMvsister(nctemp1890);
p =nctemp1892;
struct tree* nctemp1898= p;
nctempchar1* nctemp1900=PtreeGetforw(nctemp1898);
nctempchar1* nctemp1896= nctemp1900;
struct nctempchar1 *nctemp1903;
static struct nctempchar1 nctemp1904 = {{ 5}, (char*)"forw\0"};
nctemp1903=&nctemp1904;
nctempchar1* nctemp1901= nctemp1903;
int nctemp1905=LibeStrcmp(nctemp1896,nctemp1901);
int nctemp1893 = (nctemp1905 ==1);
if(nctemp1893)
{
forw = 1;
}
}
else{
struct tree* nctemp1911= p;
struct tree* nctemp1913=PtreeMvchild(nctemp1911);
p =nctemp1913;
struct tree* nctemp1919= p;
nctempchar1* nctemp1921=PtreeGetforw(nctemp1919);
nctempchar1* nctemp1917= nctemp1921;
struct nctempchar1 *nctemp1924;
static struct nctempchar1 nctemp1925 = {{ 5}, (char*)"forw\0"};
nctemp1924=&nctemp1925;
nctempchar1* nctemp1922= nctemp1924;
int nctemp1926=LibeStrcmp(nctemp1917,nctemp1922);
int nctemp1914 = (nctemp1926 ==1);
if(nctemp1914)
{
forw = 1;
}
}
struct tree* nctemp1934= p;
nctempchar1* nctemp1936=PtreeGetdef(nctemp1934);
nctempchar1* nctemp1932= nctemp1936;
struct symbol* nctemp1939=SymGetetp();
struct symbol* nctemp1937= nctemp1939;
struct symbol* nctemp1940=SymLookup(nctemp1932,nctemp1937);
tp =nctemp1940;
struct tree* nctemp1942= p;
struct nctempchar1 *nctemp1946;
static struct nctempchar1 nctemp1947 = {{ 11}, (char*)"__global__\0"};
nctemp1946=&nctemp1947;
nctempchar1* nctemp1944= nctemp1946;
int nctemp1948=CodeEs(nctemp1942,nctemp1944);
struct tree* nctemp1950= p;
struct nctempchar1 *nctemp1954;
static struct nctempchar1 nctemp1955 = {{ 6}, (char*)" void\0"};
nctemp1954=&nctemp1955;
nctempchar1* nctemp1952= nctemp1954;
int nctemp1956=CodeEs(nctemp1950,nctemp1952);
struct tree* nctemp1958= p;
struct nctempchar1 *nctemp1962;
static struct nctempchar1 nctemp1963 = {{ 2}, (char*)" \0"};
nctemp1962=&nctemp1963;
nctempchar1* nctemp1960= nctemp1962;
int nctemp1964=CodeEs(nctemp1958,nctemp1960);
struct tree* nctemp1966= p;
struct nctempchar1 *nctemp1970;
static struct nctempchar1 nctemp1971 = {{ 8}, (char*)"kernel_\0"};
nctemp1970=&nctemp1971;
nctempchar1* nctemp1968= nctemp1970;
int nctemp1972=CodeEs(nctemp1966,nctemp1968);
struct tree* nctemp1974= p;
struct symbol* nctemp1978= tp;
nctempchar1* nctemp1980=SymGetname(nctemp1978);
nctempchar1* nctemp1976= nctemp1980;
int nctemp1981=CodeEs(nctemp1974,nctemp1976);
struct tree* nctemp1983= p;
struct nctempchar1 *nctemp1987;
static struct nctempchar1 nctemp1988 = {{ 3}, (char*)" (\0"};
nctemp1987=&nctemp1988;
nctempchar1* nctemp1985= nctemp1987;
int nctemp1989=CodeEs(nctemp1983,nctemp1985);
struct tree* nctemp1993= p;
struct tree* nctemp1995=PtreeMvchild(nctemp1993);
int nctemp1990 = (nctemp1995 !=0);
if(nctemp1990)
{
struct tree* nctemp2001= p;
struct tree* nctemp2003=PtreeMvchild(nctemp2001);
p =nctemp2003;
}
struct tree* nctemp2009= p;
nctempchar1* nctemp2011=PtreeGetname(nctemp2009);
nctempchar1* nctemp2007= nctemp2011;
struct nctempchar1 *nctemp2014;
static struct nctempchar1 nctemp2015 = {{ 8}, (char*)"arglist\0"};
nctemp2014=&nctemp2015;
nctempchar1* nctemp2012= nctemp2014;
int nctemp2016=LibeStrcmp(nctemp2007,nctemp2012);
int nctemp2004 = (nctemp2016 ==1);
if(nctemp2004)
{
struct symbol* nctemp2022= tp;
struct symbol* nctemp2024=SymGetable(nctemp2022);
tp =nctemp2024;
struct nctempchar1 *nctemp2031;
static struct nctempchar1 nctemp2032 = {{ 9}, (char*)"#arglist\0"};
nctemp2031=&nctemp2032;
nctempchar1* nctemp2029= nctemp2031;
struct symbol* nctemp2033= tp;
struct symbol* nctemp2035=SymLookup(nctemp2029,nctemp2033);
tp =nctemp2035;
struct symbol* nctemp2040= tp;
struct symbol* nctemp2042=SymGetable(nctemp2040);
tp =nctemp2042;
struct symbol* nctemp2050= tp;
struct symbol* nctemp2052=SymMvnext(nctemp2050);
tp =nctemp2052;
int nctemp2043 = (tp !=0);
int nctemp2054=nctemp2043;
while(nctemp2054)
{{
struct tree* nctemp2056= p;
struct symbol* nctemp2058= tp;
int nctemp2060=CodeIdeclaration(nctemp2056,nctemp2058);
struct symbol* nctemp2064= tp;
struct symbol* nctemp2066=SymMvnext(nctemp2064);
int nctemp2061 = (nctemp2066 !=0);
if(nctemp2061)
{
struct tree* nctemp2069= p;
struct nctempchar1 *nctemp2073;
static struct nctempchar1 nctemp2074 = {{ 2}, (char*)",\0"};
nctemp2073=&nctemp2074;
nctempchar1* nctemp2071= nctemp2073;
int nctemp2075=CodeEs(nctemp2069,nctemp2071);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2083= tp;
struct symbol* nctemp2085=SymMvnext(nctemp2083);
tp =nctemp2085;
int nctemp2076 = (tp !=0);
nctemp2054=nctemp2076;}}
struct tree* nctemp2088= p;
struct nctempchar1 *nctemp2092;
static struct nctempchar1 nctemp2093 = {{ 4}, (char*)")\n\0"};
nctemp2092=&nctemp2093;
nctempchar1* nctemp2090= nctemp2092;
int nctemp2094=CodeEs(nctemp2088,nctemp2090);
int nctemp2095 = (forw ==1);
if(nctemp2095)
{
struct tree* nctemp2100= p;
struct nctempchar1 *nctemp2104;
static struct nctempchar1 nctemp2105 = {{ 4}, (char*)";\n\0"};
nctemp2104=&nctemp2105;
nctempchar1* nctemp2102= nctemp2104;
int nctemp2106=CodeEs(nctemp2100,nctemp2102);
return 1;
}
struct tree* nctemp2111= p;
struct tree* nctemp2113=PtreeMvsister(nctemp2111);
int nctemp2108 = (nctemp2113 !=0);
if(nctemp2108)
{
struct tree* nctemp2118= p;
struct tree* nctemp2120=PtreeMvsister(nctemp2118);
struct tree* nctemp2116= nctemp2120;
int nctemp2121=CodeCompstmnt(nctemp2116);
}
else{
struct tree* nctemp2123= p;
int nctemp2125=CodeCompstmnt(nctemp2123);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2131= p;
struct tree* nctemp2133=PtreeMvchild(nctemp2131);
p =nctemp2133;
noarg = 0;
struct tree* nctemp2140= p;
nctempchar1* nctemp2142=PtreeGetdef(nctemp2140);
nctempchar1* nctemp2138= nctemp2142;
struct symbol* nctemp2145=SymGetetp();
struct symbol* nctemp2143= nctemp2145;
struct symbol* nctemp2146=SymLookup(nctemp2138,nctemp2143);
tp =nctemp2146;
struct symbol* nctemp2150= tp;
struct symbol* nctemp2152=SymGetable(nctemp2150);
struct symbol* nctemp2148= nctemp2152;
int nctemp2153=SymSetltp(nctemp2148);
struct symbol* nctemp2159= tp;
nctempchar1* nctemp2161=SymGetstruct(nctemp2159);
nctempchar1* nctemp2157= nctemp2161;
struct nctempchar1 *nctemp2164;
static struct nctempchar1 nctemp2165 = {{ 7}, (char*)"struct\0"};
nctemp2164=&nctemp2165;
nctempchar1* nctemp2162= nctemp2164;
int nctemp2166=LibeStrcmp(nctemp2157,nctemp2162);
int nctemp2154 = (nctemp2166 ==1);
if(nctemp2154)
{
struct tree* nctemp2169= p;
struct nctempchar1 *nctemp2173;
static struct nctempchar1 nctemp2174 = {{ 8}, (char*)"struct \0"};
nctemp2173=&nctemp2174;
nctempchar1* nctemp2171= nctemp2173;
int nctemp2175=CodeEs(nctemp2169,nctemp2171);
}
struct symbol* nctemp2181= tp;
nctempchar1* nctemp2183=SymGetarray(nctemp2181);
nctempchar1* nctemp2179= nctemp2183;
struct nctempchar1 *nctemp2186;
static struct nctempchar1 nctemp2187 = {{ 6}, (char*)"array\0"};
nctemp2186=&nctemp2187;
nctempchar1* nctemp2184= nctemp2186;
int nctemp2188=LibeStrcmp(nctemp2179,nctemp2184);
int nctemp2176 = (nctemp2188 ==1);
if(nctemp2176)
{
struct tree* nctemp2191= p;
struct nctempchar1 *nctemp2195;
static struct nctempchar1 nctemp2196 = {{ 7}, (char*)"nctemp\0"};
nctemp2195=&nctemp2196;
nctempchar1* nctemp2193= nctemp2195;
int nctemp2197=CodeEs(nctemp2191,nctemp2193);
}
struct tree* nctemp2199= p;
struct symbol* nctemp2203= tp;
nctempchar1* nctemp2205=SymGetype(nctemp2203);
nctempchar1* nctemp2201= nctemp2205;
int nctemp2206=CodeEs(nctemp2199,nctemp2201);
struct symbol* nctemp2212= tp;
nctempchar1* nctemp2214=SymGetarray(nctemp2212);
nctempchar1* nctemp2210= nctemp2214;
struct nctempchar1 *nctemp2217;
static struct nctempchar1 nctemp2218 = {{ 6}, (char*)"array\0"};
nctemp2217=&nctemp2218;
nctempchar1* nctemp2215= nctemp2217;
int nctemp2219=LibeStrcmp(nctemp2210,nctemp2215);
int nctemp2207 = (nctemp2219 ==1);
if(nctemp2207)
{
struct symbol* nctemp2224= tp;
int nctemp2226=SymGetrank(nctemp2224);
int nctemp2222= nctemp2226;
int nctemp2227=CodeEd(nctemp2222);
}
struct symbol* nctemp2233= tp;
nctempchar1* nctemp2235=SymGetstruct(nctemp2233);
nctempchar1* nctemp2231= nctemp2235;
struct nctempchar1 *nctemp2238;
static struct nctempchar1 nctemp2239 = {{ 7}, (char*)"struct\0"};
nctemp2238=&nctemp2239;
nctempchar1* nctemp2236= nctemp2238;
int nctemp2240=LibeStrcmp(nctemp2231,nctemp2236);
int nctemp2228 = (nctemp2240 ==1);
if(nctemp2228)
{
struct tree* nctemp2243= p;
struct nctempchar1 *nctemp2247;
static struct nctempchar1 nctemp2248 = {{ 2}, (char*)"*\0"};
nctemp2247=&nctemp2248;
nctempchar1* nctemp2245= nctemp2247;
int nctemp2249=CodeEs(nctemp2243,nctemp2245);
}
top = p;
toptp = tp;
struct tree* nctemp2251= p;
struct nctempchar1 *nctemp2255;
static struct nctempchar1 nctemp2256 = {{ 2}, (char*)" \0"};
nctemp2255=&nctemp2256;
nctempchar1* nctemp2253= nctemp2255;
int nctemp2257=CodeEs(nctemp2251,nctemp2253);
struct tree* nctemp2259= p;
struct symbol* nctemp2263= tp;
nctempchar1* nctemp2265=SymGetname(nctemp2263);
nctempchar1* nctemp2261= nctemp2265;
int nctemp2266=CodeEs(nctemp2259,nctemp2261);
struct tree* nctemp2268= p;
struct nctempchar1 *nctemp2272;
static struct nctempchar1 nctemp2273 = {{ 3}, (char*)" (\0"};
nctemp2272=&nctemp2273;
nctempchar1* nctemp2270= nctemp2272;
int nctemp2274=CodeEs(nctemp2268,nctemp2270);
struct tree* nctemp2279= p;
struct tree* nctemp2281=PtreeMvchild(nctemp2279);
p =nctemp2281;
struct tree* nctemp2287= p;
nctempchar1* nctemp2289=PtreeGetname(nctemp2287);
nctempchar1* nctemp2285= nctemp2289;
struct nctempchar1 *nctemp2292;
static struct nctempchar1 nctemp2293 = {{ 8}, (char*)"arglist\0"};
nctemp2292=&nctemp2293;
nctempchar1* nctemp2290= nctemp2292;
int nctemp2294=LibeStrcmp(nctemp2285,nctemp2290);
int nctemp2282 = (nctemp2294 ==1);
if(nctemp2282)
{
struct symbol* nctemp2300= tp;
struct symbol* nctemp2302=SymGetable(nctemp2300);
tp =nctemp2302;
struct nctempchar1 *nctemp2309;
static struct nctempchar1 nctemp2310 = {{ 9}, (char*)"#arglist\0"};
nctemp2309=&nctemp2310;
nctempchar1* nctemp2307= nctemp2309;
struct symbol* nctemp2311= tp;
struct symbol* nctemp2313=SymLookup(nctemp2307,nctemp2311);
tp =nctemp2313;
struct symbol* nctemp2318= tp;
struct symbol* nctemp2320=SymGetable(nctemp2318);
tp =nctemp2320;
struct symbol* nctemp2328= tp;
struct symbol* nctemp2330=SymMvnext(nctemp2328);
tp =nctemp2330;
int nctemp2321 = (tp !=0);
int nctemp2332=nctemp2321;
while(nctemp2332)
{{
struct tree* nctemp2334= p;
struct symbol* nctemp2336= tp;
int nctemp2338=CodeIdeclaration(nctemp2334,nctemp2336);
struct symbol* nctemp2342= tp;
struct symbol* nctemp2344=SymMvnext(nctemp2342);
int nctemp2339 = (nctemp2344 !=0);
if(nctemp2339)
{
struct tree* nctemp2347= p;
struct nctempchar1 *nctemp2351;
static struct nctempchar1 nctemp2352 = {{ 2}, (char*)",\0"};
nctemp2351=&nctemp2352;
nctempchar1* nctemp2349= nctemp2351;
int nctemp2353=CodeEs(nctemp2347,nctemp2349);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2361= tp;
struct symbol* nctemp2363=SymMvnext(nctemp2361);
tp =nctemp2363;
int nctemp2354 = (tp !=0);
nctemp2332=nctemp2354;}}
struct tree* nctemp2366= p;
struct nctempchar1 *nctemp2370;
static struct nctempchar1 nctemp2371 = {{ 4}, (char*)")\n\0"};
nctemp2370=&nctemp2371;
nctempchar1* nctemp2368= nctemp2370;
int nctemp2372=CodeEs(nctemp2366,nctemp2368);
struct tree* nctemp2374= p;
struct nctempchar1 *nctemp2378;
static struct nctempchar1 nctemp2379 = {{ 4}, (char*)"{\n\0"};
nctemp2378=&nctemp2379;
nctempchar1* nctemp2376= nctemp2378;
int nctemp2380=CodeEs(nctemp2374,nctemp2376);
p = top;
tp = toptp;
struct tree* nctemp2382= p;
struct nctempchar1 *nctemp2386;
static struct nctempchar1 nctemp2387 = {{ 10}, (char*)"  kernel_\0"};
nctemp2386=&nctemp2387;
nctempchar1* nctemp2384= nctemp2386;
int nctemp2388=CodeEs(nctemp2382,nctemp2384);
struct tree* nctemp2390= p;
struct symbol* nctemp2394= tp;
nctempchar1* nctemp2396=SymGetname(nctemp2394);
nctempchar1* nctemp2392= nctemp2396;
int nctemp2397=CodeEs(nctemp2390,nctemp2392);
struct tree* nctemp2399= p;
struct nctempchar1 *nctemp2403;
static struct nctempchar1 nctemp2404 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2403=&nctemp2404;
nctempchar1* nctemp2401= nctemp2403;
int nctemp2405=CodeEs(nctemp2399,nctemp2401);
struct tree* nctemp2410= p;
struct tree* nctemp2412=PtreeMvchild(nctemp2410);
p =nctemp2412;
struct tree* nctemp2418= p;
nctempchar1* nctemp2420=PtreeGetname(nctemp2418);
nctempchar1* nctemp2416= nctemp2420;
struct nctempchar1 *nctemp2423;
static struct nctempchar1 nctemp2424 = {{ 8}, (char*)"arglist\0"};
nctemp2423=&nctemp2424;
nctempchar1* nctemp2421= nctemp2423;
int nctemp2425=LibeStrcmp(nctemp2416,nctemp2421);
int nctemp2413 = (nctemp2425 ==1);
if(nctemp2413)
{
struct symbol* nctemp2431= tp;
struct symbol* nctemp2433=SymGetable(nctemp2431);
tp =nctemp2433;
struct nctempchar1 *nctemp2440;
static struct nctempchar1 nctemp2441 = {{ 9}, (char*)"#arglist\0"};
nctemp2440=&nctemp2441;
nctempchar1* nctemp2438= nctemp2440;
struct symbol* nctemp2442= tp;
struct symbol* nctemp2444=SymLookup(nctemp2438,nctemp2442);
tp =nctemp2444;
struct symbol* nctemp2449= tp;
struct symbol* nctemp2451=SymGetable(nctemp2449);
tp =nctemp2451;
struct symbol* nctemp2459= tp;
struct symbol* nctemp2461=SymMvnext(nctemp2459);
tp =nctemp2461;
int nctemp2452 = (tp !=0);
int nctemp2463=nctemp2452;
while(nctemp2463)
{{
struct tree* nctemp2465= p;
struct symbol* nctemp2469= tp;
nctempchar1* nctemp2471=SymGetname(nctemp2469);
nctempchar1* nctemp2467= nctemp2471;
int nctemp2472=CodeEs(nctemp2465,nctemp2467);
struct symbol* nctemp2476= tp;
struct symbol* nctemp2478=SymMvnext(nctemp2476);
int nctemp2473 = (nctemp2478 !=0);
if(nctemp2473)
{
struct tree* nctemp2481= p;
struct nctempchar1 *nctemp2485;
static struct nctempchar1 nctemp2486 = {{ 2}, (char*)",\0"};
nctemp2485=&nctemp2486;
nctempchar1* nctemp2483= nctemp2485;
int nctemp2487=CodeEs(nctemp2481,nctemp2483);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2495= tp;
struct symbol* nctemp2497=SymMvnext(nctemp2495);
tp =nctemp2497;
int nctemp2488 = (tp !=0);
nctemp2463=nctemp2488;}}
struct tree* nctemp2500= p;
struct nctempchar1 *nctemp2504;
static struct nctempchar1 nctemp2505 = {{ 5}, (char*)");\n\0"};
nctemp2504=&nctemp2505;
nctempchar1* nctemp2502= nctemp2504;
int nctemp2506=CodeEs(nctemp2500,nctemp2502);
struct tree* nctemp2508= p;
struct nctempchar1 *nctemp2512;
static struct nctempchar1 nctemp2513 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2512=&nctemp2513;
nctempchar1* nctemp2510= nctemp2512;
int nctemp2514=CodeEs(nctemp2508,nctemp2510);
struct tree* nctemp2516= p;
struct nctempchar1 *nctemp2520;
static struct nctempchar1 nctemp2521 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
int nctemp2522=CodeEs(nctemp2516,nctemp2518);
struct tree* nctemp2524= p;
struct nctempchar1 *nctemp2528;
static struct nctempchar1 nctemp2529 = {{ 4}, (char*)"}\n\0"};
nctemp2528=&nctemp2529;
nctempchar1* nctemp2526= nctemp2528;
int nctemp2530=CodeEs(nctemp2524,nctemp2526);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2536= tp;
struct symbol* nctemp2538=SymMvnext(nctemp2536);
tp =nctemp2538;
int nctemp2539 = (tp !=0);
int nctemp2543=nctemp2539;
while(nctemp2543)
{{
struct nctempchar1 *nctemp2549;
static struct nctempchar1 nctemp2550 = {{ 9}, (char*)"#arglist\0"};
nctemp2549=&nctemp2550;
nctempchar1* nctemp2547= nctemp2549;
struct symbol* nctemp2553= tp;
nctempchar1* nctemp2555=SymGetname(nctemp2553);
nctempchar1* nctemp2551= nctemp2555;
int nctemp2556=LibeStrcmp(nctemp2547,nctemp2551);
int nctemp2544 = (nctemp2556 ==0);
if(nctemp2544)
{
struct symbol* nctemp2561= tp;
int nctemp2563=SymGetemit(nctemp2561);
int nctemp2558 = (nctemp2563 ==1);
if(nctemp2558)
{
struct symbol* nctemp2570= tp;
nctempchar1* nctemp2572=SymGetstruct(nctemp2570);
nctempchar1* nctemp2568= nctemp2572;
struct nctempchar1 *nctemp2575;
static struct nctempchar1 nctemp2576 = {{ 10}, (char*)"structdef\0"};
nctemp2575=&nctemp2576;
nctempchar1* nctemp2573= nctemp2575;
int nctemp2577=LibeStrcmp(nctemp2568,nctemp2573);
int nctemp2565 = (nctemp2577 ==1);
if(nctemp2565)
{
struct tree* nctemp2580= p;
struct symbol* nctemp2582= tp;
int nctemp2584=CodeStructdef(nctemp2580,nctemp2582);
}
else{
struct symbol* nctemp2590= tp;
nctempchar1* nctemp2592=SymGetfunc(nctemp2590);
nctempchar1* nctemp2588= nctemp2592;
struct nctempchar1 *nctemp2595;
static struct nctempchar1 nctemp2596 = {{ 5}, (char*)"fdef\0"};
nctemp2595=&nctemp2596;
nctempchar1* nctemp2593= nctemp2595;
int nctemp2597=LibeStrcmp(nctemp2588,nctemp2593);
int nctemp2585 = (nctemp2597 ==1);
if(nctemp2585)
{
struct tree* nctemp2600= p;
int nctemp2602=CodeFdef(nctemp2600);
}
else{
struct symbol* nctemp2608= tp;
nctempchar1* nctemp2610=SymGetname(nctemp2608);
nctempchar1* nctemp2606= nctemp2610;
struct nctempchar1 *nctemp2613;
static struct nctempchar1 nctemp2614 = {{ 6}, (char*)"#self\0"};
nctemp2613=&nctemp2614;
nctempchar1* nctemp2611= nctemp2613;
int nctemp2615=LibeStrcmp(nctemp2606,nctemp2611);
int nctemp2603 = (nctemp2615 ==0);
if(nctemp2603)
{
struct tree* nctemp2618= p;
struct symbol* nctemp2620= tp;
int nctemp2622=CodeIdeclaration(nctemp2618,nctemp2620);
struct tree* nctemp2624= p;
struct nctempchar1 *nctemp2628;
static struct nctempchar1 nctemp2629 = {{ 4}, (char*)";\n\0"};
nctemp2628=&nctemp2629;
nctempchar1* nctemp2626= nctemp2628;
int nctemp2630=CodeEs(nctemp2624,nctemp2626);
}
}
}
struct symbol* nctemp2632= tp;
int nctemp2634= 0;
int nctemp2636=SymSetemit(nctemp2632,nctemp2634);
}
}
struct symbol* nctemp2641= tp;
struct symbol* nctemp2643=SymMvnext(nctemp2641);
tp =nctemp2643;
}
int nctemp2644 = (tp !=0);
nctemp2543=nctemp2644;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2649 = (p !=0);
if(nctemp2649)
{
struct tree* nctemp2657= p;
struct tree* nctemp2659=PtreeMvchild(nctemp2657);
np =nctemp2659;
}
else{
np = p;
}
struct tree* nctemp2661= np;
struct symbol* nctemp2663= tp;
int nctemp2665=CodeGdeclarations(nctemp2661,nctemp2663);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2671= p;
struct tree* nctemp2673=PtreeMvchild(nctemp2671);
np =nctemp2673;
struct tree* nctemp2677= np;
nctempchar1* nctemp2679=PtreeGetname(nctemp2677);
nctempchar1* nctemp2675= nctemp2679;
struct nctempchar1 *nctemp2682;
static struct nctempchar1 nctemp2683 = {{ 7}, (char*)"import\0"};
nctemp2682=&nctemp2683;
nctempchar1* nctemp2680= nctemp2682;
int nctemp2684=LibeStrcmp(nctemp2675,nctemp2680);
if(nctemp2684)
{
struct tree* nctemp2686= np;
struct symbol* nctemp2688= tp;
int nctemp2690=CodeImport(nctemp2686,nctemp2688);
}
struct tree* nctemp2692= p;
struct symbol* nctemp2694= tp;
int nctemp2696=CodeDeclarations(nctemp2692,nctemp2694);
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
int nctemp2703= 0;
nctempchar1* nctemp2705=CodeItemp(nctemp2703);
return nctemp2705;
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
nctempchar1* nctemp2712=CodeMktemp();
temp=nctemp2712;
nctempchar1* nctemp2717= temp;
struct symbol* nctemp2722=SymGetltp();
struct symbol* nctemp2720= nctemp2722;
struct symbol* nctemp2723=SymMkname(nctemp2717,nctemp2720);
tp =nctemp2723;
struct symbol* nctemp2725= tp;
nctempchar1* nctemp2727= type;
int nctemp2730=SymSetype(nctemp2725,nctemp2727);
struct symbol* nctemp2732= tp;
int nctemp2734= 0;
int nctemp2736=SymSetemit(nctemp2732,nctemp2734);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2743= name;
struct symbol* nctemp2748=SymGetltp();
struct symbol* nctemp2746= nctemp2748;
struct symbol* nctemp2749=SymMkname(nctemp2743,nctemp2746);
tp =nctemp2749;
struct symbol* nctemp2751= tp;
nctempchar1* nctemp2753= type;
int nctemp2756=SymSetype(nctemp2751,nctemp2753);
struct symbol* nctemp2758= tp;
int nctemp2760= 0;
int nctemp2762=SymSetemit(nctemp2758,nctemp2760);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2769=CodeMktemp();
tmp=nctemp2769;
nctempchar1* nctemp2774= tmp;
struct symbol* nctemp2779=SymGetltp();
struct symbol* nctemp2777= nctemp2779;
struct symbol* nctemp2780=SymMkname(nctemp2774,nctemp2777);
sp =nctemp2780;
struct symbol* nctemp2782= sp;
int nctemp2784= 1;
int nctemp2786=SymSetrank(nctemp2782,nctemp2784);
struct symbol* nctemp2788= sp;
struct nctempchar1 *nctemp2792;
static struct nctempchar1 nctemp2793 = {{ 5}, (char*)"char\0"};
nctemp2792=&nctemp2793;
nctempchar1* nctemp2790= nctemp2792;
int nctemp2794=SymSetype(nctemp2788,nctemp2790);
struct symbol* nctemp2796= sp;
struct nctempchar1 *nctemp2800;
static struct nctempchar1 nctemp2801 = {{ 6}, (char*)"array\0"};
nctemp2800=&nctemp2801;
nctempchar1* nctemp2798= nctemp2800;
int nctemp2802=SymSetarray(nctemp2796,nctemp2798);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2810=CodeMktemp();
tmp2=nctemp2810;
struct tree* nctemp2812= p;
struct nctempchar1 *nctemp2816;
static struct nctempchar1 nctemp2817 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2816=&nctemp2817;
nctempchar1* nctemp2814= nctemp2816;
int nctemp2818=CodeEs(nctemp2812,nctemp2814);
struct tree* nctemp2820= p;
nctempchar1* nctemp2822= tmp2;
int nctemp2825=CodeEs(nctemp2820,nctemp2822);
struct tree* nctemp2827= p;
struct nctempchar1 *nctemp2831;
static struct nctempchar1 nctemp2832 = {{ 4}, (char*)";\n\0"};
nctemp2831=&nctemp2832;
nctempchar1* nctemp2829= nctemp2831;
int nctemp2833=CodeEs(nctemp2827,nctemp2829);
nctempchar1* nctemp2839=CodeMktemp();
tmp=nctemp2839;
struct tree* nctemp2841= p;
struct nctempchar1 *nctemp2845;
static struct nctempchar1 nctemp2846 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2845=&nctemp2846;
nctempchar1* nctemp2843= nctemp2845;
int nctemp2847=CodeEs(nctemp2841,nctemp2843);
struct tree* nctemp2849= p;
nctempchar1* nctemp2851= tmp;
int nctemp2854=CodeEs(nctemp2849,nctemp2851);
struct tree* nctemp2856= p;
struct nctempchar1 *nctemp2860;
static struct nctempchar1 nctemp2861 = {{ 4}, (char*)" = \0"};
nctemp2860=&nctemp2861;
nctempchar1* nctemp2858= nctemp2860;
int nctemp2862=CodeEs(nctemp2856,nctemp2858);
struct tree* nctemp2864= p;
struct nctempchar1 *nctemp2868;
static struct nctempchar1 nctemp2869 = {{ 4}, (char*)"{{ \0"};
nctemp2868=&nctemp2869;
nctempchar1* nctemp2866= nctemp2868;
int nctemp2870=CodeEs(nctemp2864,nctemp2866);
struct tree* nctemp2880= p;
nctempchar1* nctemp2882=PtreeGetdef(nctemp2880);
nctempchar1* nctemp2878= nctemp2882;
int nctemp2883=LibeStrlen(nctemp2878);
int nctemp2885 = nctemp2883 - 1;
l =nctemp2885;
int nctemp2887= l;
int nctemp2889=CodeEd(nctemp2887);
struct tree* nctemp2891= p;
struct nctempchar1 *nctemp2895;
static struct nctempchar1 nctemp2896 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2895=&nctemp2896;
nctempchar1* nctemp2893= nctemp2895;
int nctemp2897=CodeEs(nctemp2891,nctemp2893);
int nctemp2899= 34;
int nctemp2901=CodeEc(nctemp2899);
struct tree* nctemp2905= p;
nctempchar1* nctemp2907=PtreeGetdef(nctemp2905);
nctempchar1* nctemp2903= nctemp2907;
int nctemp2908=CodeEsr(nctemp2903);
int nctemp2910= 92;
int nctemp2912=CodeEc(nctemp2910);
int nctemp2914= 48;
int nctemp2916=CodeEc(nctemp2914);
int nctemp2918= 34;
int nctemp2920=CodeEc(nctemp2918);
struct tree* nctemp2922= p;
struct nctempchar1 *nctemp2926;
static struct nctempchar1 nctemp2927 = {{ 5}, (char*)"};\n\0"};
nctemp2926=&nctemp2927;
nctempchar1* nctemp2924= nctemp2926;
int nctemp2928=CodeEs(nctemp2922,nctemp2924);
struct tree* nctemp2930= p;
nctempchar1* nctemp2932= tmp2;
int nctemp2935=CodeEs(nctemp2930,nctemp2932);
struct tree* nctemp2937= p;
struct nctempchar1 *nctemp2941;
static struct nctempchar1 nctemp2942 = {{ 3}, (char*)"=&\0"};
nctemp2941=&nctemp2942;
nctempchar1* nctemp2939= nctemp2941;
int nctemp2943=CodeEs(nctemp2937,nctemp2939);
struct tree* nctemp2945= p;
nctempchar1* nctemp2947= tmp;
int nctemp2950=CodeEs(nctemp2945,nctemp2947);
struct tree* nctemp2952= p;
struct nctempchar1 *nctemp2956;
static struct nctempchar1 nctemp2957 = {{ 4}, (char*)";\n\0"};
nctemp2956=&nctemp2957;
nctempchar1* nctemp2954= nctemp2956;
int nctemp2958=CodeEs(nctemp2952,nctemp2954);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2962= p;
struct nctempchar1 *nctemp2966;
static struct nctempchar1 nctemp2967 = {{ 8}, (char*)"struct \0"};
nctemp2966=&nctemp2967;
nctempchar1* nctemp2964= nctemp2966;
int nctemp2968=CodeEs(nctemp2962,nctemp2964);
struct tree* nctemp2970= p;
struct symbol* nctemp2974= tp;
nctempchar1* nctemp2976=SymGetype(nctemp2974);
nctempchar1* nctemp2972= nctemp2976;
int nctemp2977=CodeEs(nctemp2970,nctemp2972);
struct tree* nctemp2979= p;
struct nctempchar1 *nctemp2983;
static struct nctempchar1 nctemp2984 = {{ 3}, (char*)" {\0"};
nctemp2983=&nctemp2984;
nctempchar1* nctemp2981= nctemp2983;
int nctemp2985=CodeEs(nctemp2979,nctemp2981);
struct symbol* nctemp2990= tp;
struct symbol* nctemp2992=SymGetable(nctemp2990);
up =nctemp2992;
struct symbol* nctemp2997= up;
struct symbol* nctemp2999=SymMvnext(nctemp2997);
up =nctemp2999;
struct tree* nctemp3001= p;
struct symbol* nctemp3003= up;
int nctemp3005=CodeIdeclarations(nctemp3001,nctemp3003);
struct tree* nctemp3007= p;
struct nctempchar1 *nctemp3011;
static struct nctempchar1 nctemp3012 = {{ 5}, (char*)"};\n\0"};
nctemp3011=&nctemp3012;
nctempchar1* nctemp3009= nctemp3011;
int nctemp3013=CodeEs(nctemp3007,nctemp3009);
struct tree* nctemp3015= p;
struct nctempchar1 *nctemp3019;
static struct nctempchar1 nctemp3020 = {{ 16}, (char*)"typedef struct \0"};
nctemp3019=&nctemp3020;
nctempchar1* nctemp3017= nctemp3019;
int nctemp3021=CodeEs(nctemp3015,nctemp3017);
struct tree* nctemp3023= p;
struct nctempchar1 *nctemp3027;
static struct nctempchar1 nctemp3028 = {{ 7}, (char*)"nctemp\0"};
nctemp3027=&nctemp3028;
nctempchar1* nctemp3025= nctemp3027;
int nctemp3029=CodeEs(nctemp3023,nctemp3025);
struct tree* nctemp3031= p;
struct symbol* nctemp3035= tp;
nctempchar1* nctemp3037=SymGetype(nctemp3035);
nctempchar1* nctemp3033= nctemp3037;
int nctemp3038=CodeEs(nctemp3031,nctemp3033);
struct tree* nctemp3040= p;
struct nctempchar1 *nctemp3044;
static struct nctempchar1 nctemp3045 = {{ 2}, (char*)"1\0"};
nctemp3044=&nctemp3045;
nctempchar1* nctemp3042= nctemp3044;
int nctemp3046=CodeEs(nctemp3040,nctemp3042);
struct tree* nctemp3048= p;
struct nctempchar1 *nctemp3052;
static struct nctempchar1 nctemp3053 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3052=&nctemp3053;
nctempchar1* nctemp3050= nctemp3052;
int nctemp3054=CodeEs(nctemp3048,nctemp3050);
struct tree* nctemp3056= p;
struct symbol* nctemp3060= tp;
nctempchar1* nctemp3062=SymGetype(nctemp3060);
nctempchar1* nctemp3058= nctemp3062;
int nctemp3063=CodeEs(nctemp3056,nctemp3058);
struct tree* nctemp3065= p;
struct nctempchar1 *nctemp3069;
static struct nctempchar1 nctemp3070 = {{ 6}, (char*)" *a; \0"};
nctemp3069=&nctemp3070;
nctempchar1* nctemp3067= nctemp3069;
int nctemp3071=CodeEs(nctemp3065,nctemp3067);
struct tree* nctemp3073= p;
struct nctempchar1 *nctemp3077;
static struct nctempchar1 nctemp3078 = {{ 3}, (char*)"} \0"};
nctemp3077=&nctemp3078;
nctempchar1* nctemp3075= nctemp3077;
int nctemp3079=CodeEs(nctemp3073,nctemp3075);
struct tree* nctemp3081= p;
struct nctempchar1 *nctemp3085;
static struct nctempchar1 nctemp3086 = {{ 7}, (char*)"nctemp\0"};
nctemp3085=&nctemp3086;
nctempchar1* nctemp3083= nctemp3085;
int nctemp3087=CodeEs(nctemp3081,nctemp3083);
struct tree* nctemp3089= p;
struct symbol* nctemp3093= tp;
nctempchar1* nctemp3095=SymGetype(nctemp3093);
nctempchar1* nctemp3091= nctemp3095;
int nctemp3096=CodeEs(nctemp3089,nctemp3091);
struct tree* nctemp3098= p;
struct nctempchar1 *nctemp3102;
static struct nctempchar1 nctemp3103 = {{ 2}, (char*)"1\0"};
nctemp3102=&nctemp3103;
nctempchar1* nctemp3100= nctemp3102;
int nctemp3104=CodeEs(nctemp3098,nctemp3100);
struct tree* nctemp3106= p;
struct nctempchar1 *nctemp3110;
static struct nctempchar1 nctemp3111 = {{ 4}, (char*)";\n\0"};
nctemp3110=&nctemp3111;
nctempchar1* nctemp3108= nctemp3110;
int nctemp3112=CodeEs(nctemp3106,nctemp3108);
struct tree* nctemp3114= p;
struct nctempchar1 *nctemp3118;
static struct nctempchar1 nctemp3119 = {{ 8}, (char*)"struct \0"};
nctemp3118=&nctemp3119;
nctempchar1* nctemp3116= nctemp3118;
int nctemp3120=CodeEs(nctemp3114,nctemp3116);
struct tree* nctemp3122= p;
struct nctempchar1 *nctemp3126;
static struct nctempchar1 nctemp3127 = {{ 7}, (char*)"nctemp\0"};
nctemp3126=&nctemp3127;
nctempchar1* nctemp3124= nctemp3126;
int nctemp3128=CodeEs(nctemp3122,nctemp3124);
struct tree* nctemp3130= p;
struct symbol* nctemp3134= tp;
nctempchar1* nctemp3136=SymGetype(nctemp3134);
nctempchar1* nctemp3132= nctemp3136;
int nctemp3137=CodeEs(nctemp3130,nctemp3132);
struct tree* nctemp3139= p;
struct nctempchar1 *nctemp3143;
static struct nctempchar1 nctemp3144 = {{ 2}, (char*)"2\0"};
nctemp3143=&nctemp3144;
nctempchar1* nctemp3141= nctemp3143;
int nctemp3145=CodeEs(nctemp3139,nctemp3141);
struct tree* nctemp3147= p;
struct nctempchar1 *nctemp3151;
static struct nctempchar1 nctemp3152 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3151=&nctemp3152;
nctempchar1* nctemp3149= nctemp3151;
int nctemp3153=CodeEs(nctemp3147,nctemp3149);
struct tree* nctemp3155= p;
struct symbol* nctemp3159= tp;
nctempchar1* nctemp3161=SymGetype(nctemp3159);
nctempchar1* nctemp3157= nctemp3161;
int nctemp3162=CodeEs(nctemp3155,nctemp3157);
struct tree* nctemp3164= p;
struct nctempchar1 *nctemp3168;
static struct nctempchar1 nctemp3169 = {{ 6}, (char*)" *a; \0"};
nctemp3168=&nctemp3169;
nctempchar1* nctemp3166= nctemp3168;
int nctemp3170=CodeEs(nctemp3164,nctemp3166);
struct tree* nctemp3172= p;
struct nctempchar1 *nctemp3176;
static struct nctempchar1 nctemp3177 = {{ 3}, (char*)"} \0"};
nctemp3176=&nctemp3177;
nctempchar1* nctemp3174= nctemp3176;
int nctemp3178=CodeEs(nctemp3172,nctemp3174);
struct tree* nctemp3180= p;
struct nctempchar1 *nctemp3184;
static struct nctempchar1 nctemp3185 = {{ 4}, (char*)";\n\0"};
nctemp3184=&nctemp3185;
nctempchar1* nctemp3182= nctemp3184;
int nctemp3186=CodeEs(nctemp3180,nctemp3182);
struct tree* nctemp3188= p;
struct nctempchar1 *nctemp3192;
static struct nctempchar1 nctemp3193 = {{ 8}, (char*)"struct \0"};
nctemp3192=&nctemp3193;
nctempchar1* nctemp3190= nctemp3192;
int nctemp3194=CodeEs(nctemp3188,nctemp3190);
struct tree* nctemp3196= p;
struct nctempchar1 *nctemp3200;
static struct nctempchar1 nctemp3201 = {{ 7}, (char*)"nctemp\0"};
nctemp3200=&nctemp3201;
nctempchar1* nctemp3198= nctemp3200;
int nctemp3202=CodeEs(nctemp3196,nctemp3198);
struct tree* nctemp3204= p;
struct symbol* nctemp3208= tp;
nctempchar1* nctemp3210=SymGetype(nctemp3208);
nctempchar1* nctemp3206= nctemp3210;
int nctemp3211=CodeEs(nctemp3204,nctemp3206);
struct tree* nctemp3213= p;
struct nctempchar1 *nctemp3217;
static struct nctempchar1 nctemp3218 = {{ 2}, (char*)"3\0"};
nctemp3217=&nctemp3218;
nctempchar1* nctemp3215= nctemp3217;
int nctemp3219=CodeEs(nctemp3213,nctemp3215);
struct tree* nctemp3221= p;
struct nctempchar1 *nctemp3225;
static struct nctempchar1 nctemp3226 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3225=&nctemp3226;
nctempchar1* nctemp3223= nctemp3225;
int nctemp3227=CodeEs(nctemp3221,nctemp3223);
struct tree* nctemp3229= p;
struct symbol* nctemp3233= tp;
nctempchar1* nctemp3235=SymGetype(nctemp3233);
nctempchar1* nctemp3231= nctemp3235;
int nctemp3236=CodeEs(nctemp3229,nctemp3231);
struct tree* nctemp3238= p;
struct nctempchar1 *nctemp3242;
static struct nctempchar1 nctemp3243 = {{ 6}, (char*)" *a; \0"};
nctemp3242=&nctemp3243;
nctempchar1* nctemp3240= nctemp3242;
int nctemp3244=CodeEs(nctemp3238,nctemp3240);
struct tree* nctemp3246= p;
struct nctempchar1 *nctemp3250;
static struct nctempchar1 nctemp3251 = {{ 3}, (char*)"} \0"};
nctemp3250=&nctemp3251;
nctempchar1* nctemp3248= nctemp3250;
int nctemp3252=CodeEs(nctemp3246,nctemp3248);
struct tree* nctemp3254= p;
struct nctempchar1 *nctemp3258;
static struct nctempchar1 nctemp3259 = {{ 4}, (char*)";\n\0"};
nctemp3258=&nctemp3259;
nctempchar1* nctemp3256= nctemp3258;
int nctemp3260=CodeEs(nctemp3254,nctemp3256);
struct tree* nctemp3262= p;
struct nctempchar1 *nctemp3266;
static struct nctempchar1 nctemp3267 = {{ 8}, (char*)"struct \0"};
nctemp3266=&nctemp3267;
nctempchar1* nctemp3264= nctemp3266;
int nctemp3268=CodeEs(nctemp3262,nctemp3264);
struct tree* nctemp3270= p;
struct nctempchar1 *nctemp3274;
static struct nctempchar1 nctemp3275 = {{ 7}, (char*)"nctemp\0"};
nctemp3274=&nctemp3275;
nctempchar1* nctemp3272= nctemp3274;
int nctemp3276=CodeEs(nctemp3270,nctemp3272);
struct tree* nctemp3278= p;
struct symbol* nctemp3282= tp;
nctempchar1* nctemp3284=SymGetype(nctemp3282);
nctempchar1* nctemp3280= nctemp3284;
int nctemp3285=CodeEs(nctemp3278,nctemp3280);
struct tree* nctemp3287= p;
struct nctempchar1 *nctemp3291;
static struct nctempchar1 nctemp3292 = {{ 2}, (char*)"4\0"};
nctemp3291=&nctemp3292;
nctempchar1* nctemp3289= nctemp3291;
int nctemp3293=CodeEs(nctemp3287,nctemp3289);
struct tree* nctemp3295= p;
struct nctempchar1 *nctemp3299;
static struct nctempchar1 nctemp3300 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3299=&nctemp3300;
nctempchar1* nctemp3297= nctemp3299;
int nctemp3301=CodeEs(nctemp3295,nctemp3297);
struct tree* nctemp3303= p;
struct symbol* nctemp3307= tp;
nctempchar1* nctemp3309=SymGetype(nctemp3307);
nctempchar1* nctemp3305= nctemp3309;
int nctemp3310=CodeEs(nctemp3303,nctemp3305);
struct tree* nctemp3312= p;
struct nctempchar1 *nctemp3316;
static struct nctempchar1 nctemp3317 = {{ 6}, (char*)" *a; \0"};
nctemp3316=&nctemp3317;
nctempchar1* nctemp3314= nctemp3316;
int nctemp3318=CodeEs(nctemp3312,nctemp3314);
struct tree* nctemp3320= p;
struct nctempchar1 *nctemp3324;
static struct nctempchar1 nctemp3325 = {{ 3}, (char*)"} \0"};
nctemp3324=&nctemp3325;
nctempchar1* nctemp3322= nctemp3324;
int nctemp3326=CodeEs(nctemp3320,nctemp3322);
struct tree* nctemp3328= p;
struct nctempchar1 *nctemp3332;
static struct nctempchar1 nctemp3333 = {{ 4}, (char*)";\n\0"};
nctemp3332=&nctemp3333;
nctempchar1* nctemp3330= nctemp3332;
int nctemp3334=CodeEs(nctemp3328,nctemp3330);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3341= tp;
nctempchar1* nctemp3343=SymGetstruct(nctemp3341);
nctempchar1* nctemp3339= nctemp3343;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 7}, (char*)"struct\0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=LibeStrcmp(nctemp3339,nctemp3344);
int nctemp3336 = (nctemp3348 ==1);
if(nctemp3336)
{
struct tree* nctemp3351= p;
struct nctempchar1 *nctemp3355;
static struct nctempchar1 nctemp3356 = {{ 8}, (char*)"struct \0"};
nctemp3355=&nctemp3356;
nctempchar1* nctemp3353= nctemp3355;
int nctemp3357=CodeEs(nctemp3351,nctemp3353);
}
struct symbol* nctemp3363= tp;
nctempchar1* nctemp3365=SymGetarray(nctemp3363);
nctempchar1* nctemp3361= nctemp3365;
struct nctempchar1 *nctemp3368;
static struct nctempchar1 nctemp3369 = {{ 6}, (char*)"array\0"};
nctemp3368=&nctemp3369;
nctempchar1* nctemp3366= nctemp3368;
int nctemp3370=LibeStrcmp(nctemp3361,nctemp3366);
int nctemp3358 = (nctemp3370 ==1);
if(nctemp3358)
{
struct tree* nctemp3373= p;
struct nctempchar1 *nctemp3377;
static struct nctempchar1 nctemp3378 = {{ 7}, (char*)"nctemp\0"};
nctemp3377=&nctemp3378;
nctempchar1* nctemp3375= nctemp3377;
int nctemp3379=CodeEs(nctemp3373,nctemp3375);
}
struct tree* nctemp3381= p;
struct symbol* nctemp3385= tp;
nctempchar1* nctemp3387=SymGetype(nctemp3385);
nctempchar1* nctemp3383= nctemp3387;
int nctemp3388=CodeEs(nctemp3381,nctemp3383);
struct symbol* nctemp3394= tp;
nctempchar1* nctemp3396=SymGetarray(nctemp3394);
nctempchar1* nctemp3392= nctemp3396;
struct nctempchar1 *nctemp3399;
static struct nctempchar1 nctemp3400 = {{ 6}, (char*)"array\0"};
nctemp3399=&nctemp3400;
nctempchar1* nctemp3397= nctemp3399;
int nctemp3401=LibeStrcmp(nctemp3392,nctemp3397);
int nctemp3389 = (nctemp3401 ==1);
if(nctemp3389)
{
struct symbol* nctemp3406= tp;
int nctemp3408=SymGetrank(nctemp3406);
int nctemp3404= nctemp3408;
int nctemp3409=CodeEd(nctemp3404);
struct tree* nctemp3411= p;
struct nctempchar1 *nctemp3415;
static struct nctempchar1 nctemp3416 = {{ 2}, (char*)"*\0"};
nctemp3415=&nctemp3416;
nctempchar1* nctemp3413= nctemp3415;
int nctemp3417=CodeEs(nctemp3411,nctemp3413);
}
struct symbol* nctemp3423= tp;
nctempchar1* nctemp3425=SymGetstruct(nctemp3423);
nctempchar1* nctemp3421= nctemp3425;
struct nctempchar1 *nctemp3428;
static struct nctempchar1 nctemp3429 = {{ 7}, (char*)"struct\0"};
nctemp3428=&nctemp3429;
nctempchar1* nctemp3426= nctemp3428;
int nctemp3430=LibeStrcmp(nctemp3421,nctemp3426);
int nctemp3418 = (nctemp3430 ==1);
if(nctemp3418)
{
struct tree* nctemp3433= p;
struct nctempchar1 *nctemp3437;
static struct nctempchar1 nctemp3438 = {{ 2}, (char*)"*\0"};
nctemp3437=&nctemp3438;
nctempchar1* nctemp3435= nctemp3437;
int nctemp3439=CodeEs(nctemp3433,nctemp3435);
}
struct tree* nctemp3441= p;
struct nctempchar1 *nctemp3445;
static struct nctempchar1 nctemp3446 = {{ 2}, (char*)" \0"};
nctemp3445=&nctemp3446;
nctempchar1* nctemp3443= nctemp3445;
int nctemp3447=CodeEs(nctemp3441,nctemp3443);
struct tree* nctemp3449= p;
struct symbol* nctemp3453= tp;
nctempchar1* nctemp3455=SymGetname(nctemp3453);
nctempchar1* nctemp3451= nctemp3455;
int nctemp3456=CodeEs(nctemp3449,nctemp3451);
struct tree* nctemp3458= p;
struct nctempchar1 *nctemp3462;
static struct nctempchar1 nctemp3463 = {{ 3}, (char*)" (\0"};
nctemp3462=&nctemp3463;
nctempchar1* nctemp3460= nctemp3462;
int nctemp3464=CodeEs(nctemp3458,nctemp3460);
struct symbol* nctemp3469= tp;
struct symbol* nctemp3471=SymGetable(nctemp3469);
tp =nctemp3471;
struct nctempchar1 *nctemp3478;
static struct nctempchar1 nctemp3479 = {{ 9}, (char*)"#arglist\0"};
nctemp3478=&nctemp3479;
nctempchar1* nctemp3476= nctemp3478;
struct symbol* nctemp3480= tp;
struct symbol* nctemp3482=SymLookup(nctemp3476,nctemp3480);
tp =nctemp3482;
struct symbol* nctemp3487= tp;
struct symbol* nctemp3489=SymGetable(nctemp3487);
tp =nctemp3489;
noargs = 0;
struct symbol* nctemp3497= tp;
struct symbol* nctemp3499=SymMvnext(nctemp3497);
tp =nctemp3499;
int nctemp3490 = (tp !=0);
int nctemp3501=nctemp3490;
while(nctemp3501)
{{
struct tree* nctemp3503= p;
struct symbol* nctemp3505= tp;
int nctemp3507=CodeIdeclaration(nctemp3503,nctemp3505);
struct symbol* nctemp3511= tp;
struct symbol* nctemp3513=SymMvnext(nctemp3511);
int nctemp3508 = (nctemp3513 !=0);
if(nctemp3508)
{
struct tree* nctemp3516= p;
struct nctempchar1 *nctemp3520;
static struct nctempchar1 nctemp3521 = {{ 2}, (char*)",\0"};
nctemp3520=&nctemp3521;
nctempchar1* nctemp3518= nctemp3520;
int nctemp3522=CodeEs(nctemp3516,nctemp3518);
}
noargs = (noargs + 1);
}
struct symbol* nctemp3530= tp;
struct symbol* nctemp3532=SymMvnext(nctemp3530);
tp =nctemp3532;
int nctemp3523 = (tp !=0);
nctemp3501=nctemp3523;}struct tree* nctemp3535= p;
struct nctempchar1 *nctemp3539;
static struct nctempchar1 nctemp3540 = {{ 5}, (char*)");\n\0"};
nctemp3539=&nctemp3540;
nctempchar1* nctemp3537= nctemp3539;
int nctemp3541=CodeEs(nctemp3535,nctemp3537);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3547= p;
struct tree* nctemp3549=PtreeMvchild(nctemp3547);
np =nctemp3549;
int nctemp3550 = (np !=0);
int nctemp3554=nctemp3550;
while(nctemp3554)
{{
struct tree* nctemp3560= np;
nctempchar1* nctemp3562=PtreeGetname(nctemp3560);
nctempchar1* nctemp3558= nctemp3562;
struct nctempchar1 *nctemp3565;
static struct nctempchar1 nctemp3566 = {{ 5}, (char*)"fdef\0"};
nctemp3565=&nctemp3566;
nctempchar1* nctemp3563= nctemp3565;
int nctemp3567=LibeStrcmp(nctemp3558,nctemp3563);
int nctemp3555 = (nctemp3567 ==1);
if(nctemp3555)
{
struct tree* nctemp3570= np;
int nctemp3572=CodeFdef(nctemp3570);
}
struct tree* nctemp3577= np;
struct tree* nctemp3579=PtreeMvsister(nctemp3577);
np =nctemp3579;
}
int nctemp3580 = (np !=0);
nctemp3554=nctemp3580;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3585 = (p !=0);
int nctemp3589=nctemp3585;
while(nctemp3589)
{{
struct tree* nctemp3598= p;
nctempchar1* nctemp3600=PtreeGetname(nctemp3598);
nctempchar1* nctemp3596= nctemp3600;
struct nctempchar1 *nctemp3603;
static struct nctempchar1 nctemp3604 = {{ 5}, (char*)"type\0"};
nctemp3603=&nctemp3604;
nctempchar1* nctemp3601= nctemp3603;
int nctemp3605=LibeStrcmp(nctemp3596,nctemp3601);
int nctemp3593 = (nctemp3605 ==1);
struct tree* nctemp3613= p;
nctempchar1* nctemp3615=PtreeGetname(nctemp3613);
nctempchar1* nctemp3611= nctemp3615;
struct nctempchar1 *nctemp3618;
static struct nctempchar1 nctemp3619 = {{ 7}, (char*)"struct\0"};
nctemp3618=&nctemp3619;
nctempchar1* nctemp3616= nctemp3618;
int nctemp3620=LibeStrcmp(nctemp3611,nctemp3616);
int nctemp3608 = (nctemp3620 ==1);
int nctemp3590 = (nctemp3593 || nctemp3608);
if(nctemp3590)
{
struct tree* nctemp3623= p;
int nctemp3625=CodeWdeclaration(nctemp3623);
}
struct tree* nctemp3630= p;
struct tree* nctemp3632=PtreeMvsister(nctemp3630);
p =nctemp3632;
}
int nctemp3633 = (p !=0);
nctemp3589=nctemp3633;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3644;
static struct nctempchar1 nctemp3645 = {{ 6}, (char*)"dummy\0"};
nctemp3644=&nctemp3645;
nctempchar1* nctemp3642= nctemp3644;
struct nctempchar1 *nctemp3648;
static struct nctempchar1 nctemp3649 = {{ 6}, (char*)"dummy\0"};
nctemp3648=&nctemp3649;
nctempchar1* nctemp3646= nctemp3648;
struct tree* nctemp3650=PtreeMknode(nctemp3642,nctemp3646);
p =nctemp3650;
struct tree* nctemp3652= p;
int nctemp3654= line;
int nctemp3656=PtreeSetline(nctemp3652,nctemp3654);
qname = name;
nctempchar1 *nctemp3658 =qual;
int nctemp3657 =(nctemp3658!=0);
if(nctemp3657)
{
nctempchar1* nctemp3667= qual;
struct nctempchar1 *nctemp3672;
static struct nctempchar1 nctemp3673 = {{ 3}, (char*)"->\0"};
nctemp3672=&nctemp3673;
nctempchar1* nctemp3670= nctemp3672;
nctempchar1* nctemp3674=LibeStradd(nctemp3667,nctemp3670);
tmp=nctemp3674;
nctempchar1* nctemp3680= tmp;
nctempchar1* nctemp3683= name;
nctempchar1* nctemp3686=LibeStradd(nctemp3680,nctemp3683);
qname=nctemp3686;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3691= p;
struct nctempchar1 *nctemp3695;
static struct nctempchar1 nctemp3696 = {{ 7}, (char*)"if((0>\0"};
nctemp3695=&nctemp3696;
nctempchar1* nctemp3693= nctemp3695;
int nctemp3697=CodeEs(nctemp3691,nctemp3693);
struct tree* nctemp3699= p;
nctempchar1* nctemp3701= ival;
int nctemp3704=CodeEs(nctemp3699,nctemp3701);
struct tree* nctemp3706= p;
struct nctempchar1 *nctemp3710;
static struct nctempchar1 nctemp3711 = {{ 5}, (char*)")||(\0"};
nctemp3710=&nctemp3711;
nctempchar1* nctemp3708= nctemp3710;
int nctemp3712=CodeEs(nctemp3706,nctemp3708);
struct tree* nctemp3714= p;
nctempchar1* nctemp3716= ival;
int nctemp3719=CodeEs(nctemp3714,nctemp3716);
struct tree* nctemp3721= p;
struct nctempchar1 *nctemp3725;
static struct nctempchar1 nctemp3726 = {{ 3}, (char*)">=\0"};
nctemp3725=&nctemp3726;
nctempchar1* nctemp3723= nctemp3725;
int nctemp3727=CodeEs(nctemp3721,nctemp3723);
nctempchar1 *nctemp3729 =qual;
int nctemp3728 =(nctemp3729!=0);
if(nctemp3728)
{
struct tree* nctemp3734= p;
nctempchar1* nctemp3736= qual;
int nctemp3739=CodeEs(nctemp3734,nctemp3736);
struct tree* nctemp3741= p;
nctempchar1* nctemp3743= sel;
int nctemp3746=CodeEs(nctemp3741,nctemp3743);
}
struct tree* nctemp3748= p;
nctempchar1* nctemp3750= name;
int nctemp3753=CodeEs(nctemp3748,nctemp3750);
struct tree* nctemp3755= p;
struct nctempchar1 *nctemp3759;
static struct nctempchar1 nctemp3760 = {{ 5}, (char*)"->d[\0"};
nctemp3759=&nctemp3760;
nctempchar1* nctemp3757= nctemp3759;
int nctemp3761=CodeEs(nctemp3755,nctemp3757);
int nctemp3763= index;
int nctemp3765=CodeEd(nctemp3763);
struct tree* nctemp3767= p;
struct nctempchar1 *nctemp3771;
static struct nctempchar1 nctemp3772 = {{ 7}, (char*)"])){\n\0"};
nctemp3771=&nctemp3772;
nctempchar1* nctemp3769= nctemp3771;
int nctemp3773=CodeEs(nctemp3767,nctemp3769);
struct tree* nctemp3775= p;
struct nctempchar1 *nctemp3779;
static struct nctempchar1 nctemp3780 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3779=&nctemp3780;
nctempchar1* nctemp3777= nctemp3779;
int nctemp3781=CodeEs(nctemp3775,nctemp3777);
struct tree* nctemp3783= p;
nctempchar1* nctemp3787=ScanGetfile();
nctempchar1* nctemp3785= nctemp3787;
int nctemp3788=CodeEs(nctemp3783,nctemp3785);
struct tree* nctemp3790= p;
struct nctempchar1 *nctemp3794;
static struct nctempchar1 nctemp3795 = {{ 2}, (char*)" \0"};
nctemp3794=&nctemp3795;
nctempchar1* nctemp3792= nctemp3794;
int nctemp3796=CodeEs(nctemp3790,nctemp3792);
struct tree* nctemp3798= p;
nctempchar1* nctemp3800= qname;
int nctemp3803=CodeEs(nctemp3798,nctemp3800);
struct tree* nctemp3805= p;
struct nctempchar1 *nctemp3809;
static struct nctempchar1 nctemp3810 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3809=&nctemp3810;
nctempchar1* nctemp3807= nctemp3809;
int nctemp3811=CodeEs(nctemp3805,nctemp3807);
struct tree* nctemp3813= p;
struct nctempchar1 *nctemp3817;
static struct nctempchar1 nctemp3818 = {{ 6}, (char*)" \" ,\0"};
nctemp3817=&nctemp3818;
nctempchar1* nctemp3815= nctemp3817;
int nctemp3819=CodeEs(nctemp3813,nctemp3815);
int nctemp3821= line;
int nctemp3823=CodeEd(nctemp3821);
struct tree* nctemp3825= p;
struct nctempchar1 *nctemp3829;
static struct nctempchar1 nctemp3830 = {{ 2}, (char*)",\0"};
nctemp3829=&nctemp3830;
nctempchar1* nctemp3827= nctemp3829;
int nctemp3831=CodeEs(nctemp3825,nctemp3827);
struct tree* nctemp3833= p;
nctempchar1* nctemp3835= ival;
int nctemp3838=CodeEs(nctemp3833,nctemp3835);
struct tree* nctemp3840= p;
struct nctempchar1 *nctemp3844;
static struct nctempchar1 nctemp3845 = {{ 2}, (char*)",\0"};
nctemp3844=&nctemp3845;
nctempchar1* nctemp3842= nctemp3844;
int nctemp3846=CodeEs(nctemp3840,nctemp3842);
int nctemp3848= index;
int nctemp3850=CodeEd(nctemp3848);
struct tree* nctemp3852= p;
struct nctempchar1 *nctemp3856;
static struct nctempchar1 nctemp3857 = {{ 2}, (char*)",\0"};
nctemp3856=&nctemp3857;
nctempchar1* nctemp3854= nctemp3856;
int nctemp3858=CodeEs(nctemp3852,nctemp3854);
struct tree* nctemp3860= p;
nctempchar1* nctemp3862= qname;
int nctemp3865=CodeEs(nctemp3860,nctemp3862);
struct tree* nctemp3867= p;
struct nctempchar1 *nctemp3871;
static struct nctempchar1 nctemp3872 = {{ 5}, (char*)"->d[\0"};
nctemp3871=&nctemp3872;
nctempchar1* nctemp3869= nctemp3871;
int nctemp3873=CodeEs(nctemp3867,nctemp3869);
int nctemp3875= index;
int nctemp3877=CodeEd(nctemp3875);
struct tree* nctemp3879= p;
struct nctempchar1 *nctemp3883;
static struct nctempchar1 nctemp3884 = {{ 4}, (char*)"]-1\0"};
nctemp3883=&nctemp3884;
nctempchar1* nctemp3881= nctemp3883;
int nctemp3885=CodeEs(nctemp3879,nctemp3881);
struct tree* nctemp3887= p;
struct nctempchar1 *nctemp3891;
static struct nctempchar1 nctemp3892 = {{ 3}, (char*)");\0"};
nctemp3891=&nctemp3892;
nctempchar1* nctemp3889= nctemp3891;
int nctemp3893=CodeEs(nctemp3887,nctemp3889);
struct tree* nctemp3895= p;
struct nctempchar1 *nctemp3899;
static struct nctempchar1 nctemp3900 = {{ 6}, (char*)"\n}\n\0"};
nctemp3899=&nctemp3900;
nctempchar1* nctemp3897= nctemp3899;
int nctemp3901=CodeEs(nctemp3895,nctemp3897);
nctempchar1 *nctemp3903 =qual;
int nctemp3902 =(nctemp3903!=0);
if(nctemp3902)
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
struct tree* nctemp3916= p;
nctempchar1* nctemp3918=PtreeGetdef(nctemp3916);
name=nctemp3918;
nctempchar1* nctemp3924=CodeMktemp();
temp=nctemp3924;
nctempchar1* nctemp3929= name;
struct symbol* nctemp3932=SymLook(nctemp3929);
tp =nctemp3932;
int nctemp3933 = (tp ==0);
if(nctemp3933)
{
nctempchar1* nctemp3938= name;
int nctemp3941=CodeError(nctemp3938);
}
struct tree* nctemp3946= p;
struct tree* nctemp3948=PtreeMvchild(nctemp3946);
sp =nctemp3948;
int nctemp3949 = (sp ==0);
if(nctemp3949)
{
struct tree* nctemp3954= p;
nctempchar1* nctemp3956=PtreeGetdef(nctemp3954);
return nctemp3956;
}
else{
struct tree* nctemp3962= sp;
nctempchar1* nctemp3964=PtreeGetname(nctemp3962);
nctempchar1* nctemp3960= nctemp3964;
struct nctempchar1 *nctemp3967;
static struct nctempchar1 nctemp3968 = {{ 9}, (char*)"exprlist\0"};
nctemp3967=&nctemp3968;
nctempchar1* nctemp3965= nctemp3967;
int nctemp3969=LibeStrcmp(nctemp3960,nctemp3965);
int nctemp3957 = (nctemp3969 ==0);
if(nctemp3957)
{
struct tree* nctemp3972= p;
nctempchar1* nctemp3974=PtreeGetdef(nctemp3972);
return nctemp3974;
}
}
struct symbol* nctemp3979= tp;
int nctemp3981=SymGetrank(nctemp3979);
rank =nctemp3981;
struct tree* nctemp3986= p;
struct tree* nctemp3988=PtreeMvchild(nctemp3986);
p =nctemp3988;
struct tree* nctemp3993= p;
struct tree* nctemp3995=PtreeMvchild(nctemp3993);
p =nctemp3995;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp3996 = (i ==0);
if(nctemp3996)
{
struct tree* nctemp4005= p;
nctempchar1* nctemp4007=CodeExpr(nctemp4005);
temp2=nctemp4007;
struct tree* nctemp4009= p;
struct tree* nctemp4013= p;
nctempchar1* nctemp4015=PtreeGetype(nctemp4013);
nctempchar1* nctemp4011= nctemp4015;
int nctemp4016=CodeEs(nctemp4009,nctemp4011);
struct tree* nctemp4018= p;
struct nctempchar1 *nctemp4022;
static struct nctempchar1 nctemp4023 = {{ 2}, (char*)" \0"};
nctemp4022=&nctemp4023;
nctempchar1* nctemp4020= nctemp4022;
int nctemp4024=CodeEs(nctemp4018,nctemp4020);
struct tree* nctemp4026= p;
nctempchar1* nctemp4028= temp;
int nctemp4031=CodeEs(nctemp4026,nctemp4028);
struct tree* nctemp4033= p;
struct nctempchar1 *nctemp4037;
static struct nctempchar1 nctemp4038 = {{ 2}, (char*)"=\0"};
nctemp4037=&nctemp4038;
nctempchar1* nctemp4035= nctemp4037;
int nctemp4039=CodeEs(nctemp4033,nctemp4035);
struct tree* nctemp4041= p;
nctempchar1* nctemp4043= temp2;
int nctemp4046=CodeEs(nctemp4041,nctemp4043);
struct tree* nctemp4048= p;
struct nctempchar1 *nctemp4052;
static struct nctempchar1 nctemp4053 = {{ 4}, (char*)";\n\0"};
nctemp4052=&nctemp4053;
nctempchar1* nctemp4050= nctemp4052;
int nctemp4054=CodeEs(nctemp4048,nctemp4050);
int nctemp4056=CodeArraycheck();
if(nctemp4056)
{
struct tree* nctemp4060= p;
int nctemp4062=PtreeGetline(nctemp4060);
int nctemp4058= nctemp4062;
nctempchar1* nctemp4063= qual;
nctempchar1* nctemp4066= sel;
nctempchar1* nctemp4069= name;
nctempchar1* nctemp4072= temp2;
int nctemp4075= i;
int nctemp4077=CodeArrayex(nctemp4058,nctemp4063,nctemp4066,nctemp4069,nctemp4072,nctemp4075);
}
}
else{
struct tree* nctemp4083= sp;
nctempchar1* nctemp4085=CodeExpr(nctemp4083);
temp2=nctemp4085;
struct tree* nctemp4087= p;
nctempchar1* nctemp4089= temp;
int nctemp4092=CodeEs(nctemp4087,nctemp4089);
struct tree* nctemp4094= p;
struct nctempchar1 *nctemp4098;
static struct nctempchar1 nctemp4099 = {{ 2}, (char*)"=\0"};
nctemp4098=&nctemp4099;
nctempchar1* nctemp4096= nctemp4098;
int nctemp4100=CodeEs(nctemp4094,nctemp4096);
struct tree* nctemp4102= p;
nctempchar1* nctemp4104= temp2;
int nctemp4107=CodeEs(nctemp4102,nctemp4104);
struct tree* nctemp4109= p;
struct nctempchar1 *nctemp4113;
static struct nctempchar1 nctemp4114 = {{ 2}, (char*)"*\0"};
nctemp4113=&nctemp4114;
nctempchar1* nctemp4111= nctemp4113;
int nctemp4115=CodeEs(nctemp4109,nctemp4111);
nctempchar1 *nctemp4117 =qual;
int nctemp4116 =(nctemp4117!=0);
if(nctemp4116)
{
struct tree* nctemp4122= p;
nctempchar1* nctemp4124= qual;
int nctemp4127=CodeEs(nctemp4122,nctemp4124);
}
nctempchar1 *nctemp4129 =sel;
int nctemp4128 =(nctemp4129!=0);
if(nctemp4128)
{
struct tree* nctemp4134= p;
nctempchar1* nctemp4136= sel;
int nctemp4139=CodeEs(nctemp4134,nctemp4136);
}
struct tree* nctemp4141= p;
nctempchar1* nctemp4143= name;
int nctemp4146=CodeEs(nctemp4141,nctemp4143);
struct tree* nctemp4148= p;
struct nctempchar1 *nctemp4152;
static struct nctempchar1 nctemp4153 = {{ 4}, (char*)"->d\0"};
nctemp4152=&nctemp4153;
nctempchar1* nctemp4150= nctemp4152;
int nctemp4154=CodeEs(nctemp4148,nctemp4150);
struct tree* nctemp4156= p;
struct nctempchar1 *nctemp4160;
static struct nctempchar1 nctemp4161 = {{ 2}, (char*)"[\0"};
nctemp4160=&nctemp4161;
nctempchar1* nctemp4158= nctemp4160;
int nctemp4162=CodeEs(nctemp4156,nctemp4158);
int nctemp4169 = i - 1;
int nctemp4164= nctemp4169;
int nctemp4170=CodeEd(nctemp4164);
struct tree* nctemp4172= p;
struct nctempchar1 *nctemp4176;
static struct nctempchar1 nctemp4177 = {{ 2}, (char*)"]\0"};
nctemp4176=&nctemp4177;
nctempchar1* nctemp4174= nctemp4176;
int nctemp4178=CodeEs(nctemp4172,nctemp4174);
struct tree* nctemp4180= p;
struct nctempchar1 *nctemp4184;
static struct nctempchar1 nctemp4185 = {{ 2}, (char*)"+\0"};
nctemp4184=&nctemp4185;
nctempchar1* nctemp4182= nctemp4184;
int nctemp4186=CodeEs(nctemp4180,nctemp4182);
struct tree* nctemp4188= p;
nctempchar1* nctemp4190= temp;
int nctemp4193=CodeEs(nctemp4188,nctemp4190);
struct tree* nctemp4195= p;
struct nctempchar1 *nctemp4199;
static struct nctempchar1 nctemp4200 = {{ 4}, (char*)";\n\0"};
nctemp4199=&nctemp4200;
nctempchar1* nctemp4197= nctemp4199;
int nctemp4201=CodeEs(nctemp4195,nctemp4197);
int nctemp4203=CodeArraycheck();
if(nctemp4203)
{
struct tree* nctemp4207= p;
int nctemp4209=PtreeGetline(nctemp4207);
int nctemp4205= nctemp4209;
nctempchar1* nctemp4210= qual;
nctempchar1* nctemp4213= sel;
nctempchar1* nctemp4216= name;
nctempchar1* nctemp4219= temp2;
int nctemp4222= i;
int nctemp4224=CodeArrayex(nctemp4205,nctemp4210,nctemp4213,nctemp4216,nctemp4219,nctemp4222);
}
}
int nctemp4225 = (sp !=0);
if(nctemp4225)
{
struct tree* nctemp4233= sp;
struct tree* nctemp4235=PtreeMvsister(nctemp4233);
sp =nctemp4235;
}
}
nctempchar1* nctemp4246= name;
int nctemp4249=LibeStrlen(nctemp4246);
nctempchar1* nctemp4251= temp;
int nctemp4254=LibeStrlen(nctemp4251);
int nctemp4255 = nctemp4249 + nctemp4254;
int nctemp4257 = nctemp4255 + 6;
size =nctemp4257;
int nctemp4264=size;
nctempchar1 *nctemp4263;
nctemp4263=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4263->d[0]=size;
nctemp4263->a=(char *)RunMalloc(sizeof(char)*nctemp4264);
rval=nctemp4263;
nctempchar1* nctemp4268= name;
nctempchar1* nctemp4271= rval;
int nctemp4274=LibeStrcpy(nctemp4268,nctemp4271);
struct nctempchar1 *nctemp4278;
static struct nctempchar1 nctemp4279 = {{ 4}, (char*)"->a\0"};
nctemp4278=&nctemp4279;
nctempchar1* nctemp4276= nctemp4278;
nctempchar1* nctemp4280= rval;
int nctemp4283=LibeStrcat(nctemp4276,nctemp4280);
struct nctempchar1 *nctemp4287;
static struct nctempchar1 nctemp4288 = {{ 2}, (char*)"[\0"};
nctemp4287=&nctemp4288;
nctempchar1* nctemp4285= nctemp4287;
nctempchar1* nctemp4289= rval;
int nctemp4292=LibeStrcat(nctemp4285,nctemp4289);
nctempchar1* nctemp4294= temp;
nctempchar1* nctemp4297= rval;
int nctemp4300=LibeStrcat(nctemp4294,nctemp4297);
struct nctempchar1 *nctemp4304;
static struct nctempchar1 nctemp4305 = {{ 2}, (char*)"]\0"};
nctemp4304=&nctemp4305;
nctempchar1* nctemp4302= nctemp4304;
nctempchar1* nctemp4306= rval;
int nctemp4309=LibeStrcat(nctemp4302,nctemp4306);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4316= qual;
int nctemp4319=LibeStrlen(nctemp4316);
lq =nctemp4319;
nctempchar1* nctemp4324= ident;
int nctemp4327=LibeStrlen(nctemp4324);
li =nctemp4327;
int nctemp4342 = lq + li;
int nctemp4344 = nctemp4342 + 2;
int nctemp4334=nctemp4344;
nctempchar1 *nctemp4333;
nctemp4333=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4352 = lq + li;
int nctemp4354 = nctemp4352 + 2;
nctemp4333->d[0]=nctemp4354;
nctemp4333->a=(char *)RunMalloc(sizeof(char)*nctemp4334);
name=nctemp4333;
nctempchar1* nctemp4356= qual;
nctempchar1* nctemp4359= name;
int nctemp4362=LibeStrcpy(nctemp4356,nctemp4359);
struct nctempchar1 *nctemp4366;
static struct nctempchar1 nctemp4367 = {{ 2}, (char*)".\0"};
nctemp4366=&nctemp4367;
nctempchar1* nctemp4364= nctemp4366;
nctempchar1* nctemp4368= name;
int nctemp4371=LibeStrcat(nctemp4364,nctemp4368);
nctempchar1* nctemp4373= ident;
nctempchar1* nctemp4376= name;
int nctemp4379=LibeStrcat(nctemp4373,nctemp4376);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4386= qual;
int nctemp4389=LibeStrlen(nctemp4386);
lq =nctemp4389;
nctempchar1* nctemp4394= ident;
int nctemp4397=LibeStrlen(nctemp4394);
li =nctemp4397;
int nctemp4412 = lq + li;
int nctemp4414 = nctemp4412 + 3;
int nctemp4404=nctemp4414;
nctempchar1 *nctemp4403;
nctemp4403=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4422 = lq + li;
int nctemp4424 = nctemp4422 + 3;
nctemp4403->d[0]=nctemp4424;
nctemp4403->a=(char *)RunMalloc(sizeof(char)*nctemp4404);
name=nctemp4403;
nctempchar1* nctemp4426= qual;
nctempchar1* nctemp4429= name;
int nctemp4432=LibeStrcpy(nctemp4426,nctemp4429);
struct nctempchar1 *nctemp4436;
static struct nctempchar1 nctemp4437 = {{ 3}, (char*)"->\0"};
nctemp4436=&nctemp4437;
nctempchar1* nctemp4434= nctemp4436;
nctempchar1* nctemp4438= name;
int nctemp4441=LibeStrcat(nctemp4434,nctemp4438);
nctempchar1* nctemp4443= ident;
nctempchar1* nctemp4446= name;
int nctemp4449=LibeStrcat(nctemp4443,nctemp4446);
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
struct tree* nctemp4457= p;
nctempchar1* nctemp4459=PtreeGetstruct(nctemp4457);
nctempchar1* nctemp4455= nctemp4459;
struct nctempchar1 *nctemp4462;
static struct nctempchar1 nctemp4463 = {{ 7}, (char*)"struct\0"};
nctemp4462=&nctemp4463;
nctempchar1* nctemp4460= nctemp4462;
int nctemp4464=LibeStrcmp(nctemp4455,nctemp4460);
int nctemp4452 = (nctemp4464 ==1);
if(nctemp4452)
{
struct tree* nctemp4471= p;
nctempchar1* nctemp4473=PtreeGetarray(nctemp4471);
nctempchar1* nctemp4469= nctemp4473;
struct nctempchar1 *nctemp4476;
static struct nctempchar1 nctemp4477 = {{ 6}, (char*)"array\0"};
nctemp4476=&nctemp4477;
nctempchar1* nctemp4474= nctemp4476;
int nctemp4478=LibeStrcmp(nctemp4469,nctemp4474);
int nctemp4466 = (nctemp4478 ==1);
if(nctemp4466)
{
struct tree* nctemp4485= p;
nctempchar1* nctemp4487= qual;
struct nctempchar1 *nctemp4492;
static struct nctempchar1 nctemp4493 = {{ 2}, (char*)".\0"};
nctemp4492=&nctemp4493;
nctempchar1* nctemp4490= nctemp4492;
nctempchar1* nctemp4494=CodeArray(nctemp4485,nctemp4487,nctemp4490);
qual=nctemp4494;
struct tree* nctemp4499= p;
struct tree* nctemp4501=PtreeMvchild(nctemp4499);
np =nctemp4501;
int nctemp4502 = (np ==0);
if(nctemp4502)
{
return qual;
}
struct tree* nctemp4512= np;
struct tree* nctemp4514=PtreeMvsister(nctemp4512);
np =nctemp4514;
int nctemp4515 = (np ==0);
if(nctemp4515)
{
return qual;
}
}
else{
struct tree* nctemp4526= p;
nctempchar1* nctemp4528=PtreeGetdef(nctemp4526);
qual=nctemp4528;
struct tree* nctemp4536= p;
struct tree* nctemp4538=PtreeMvchild(nctemp4536);
np =nctemp4538;
int nctemp4529 = (np ==0);
if(nctemp4529)
{
return qual;
}
}
struct tree* nctemp4547= np;
nctempchar1* nctemp4549=PtreeGetarray(nctemp4547);
nctempchar1* nctemp4545= nctemp4549;
struct nctempchar1 *nctemp4552;
static struct nctempchar1 nctemp4553 = {{ 6}, (char*)"array\0"};
nctemp4552=&nctemp4553;
nctempchar1* nctemp4550= nctemp4552;
int nctemp4554=LibeStrcmp(nctemp4545,nctemp4550);
int nctemp4542 = (nctemp4554 ==1);
if(nctemp4542)
{
struct symbol* nctemp4560=SymGetltp();
tp =nctemp4560;
struct symbol* nctemp4565=SymGetetp();
up =nctemp4565;
struct tree* nctemp4572= p;
nctempchar1* nctemp4574=PtreeGetdef(nctemp4572);
nctempchar1* nctemp4570= nctemp4574;
struct symbol* nctemp4575=SymLook(nctemp4570);
uup =nctemp4575;
struct symbol* nctemp4582= uup;
nctempchar1* nctemp4584=SymGetype(nctemp4582);
nctempchar1* nctemp4580= nctemp4584;
struct symbol* nctemp4585=SymLook(nctemp4580);
uup =nctemp4585;
struct symbol* nctemp4589= uup;
struct symbol* nctemp4591=SymGetable(nctemp4589);
struct symbol* nctemp4587= nctemp4591;
int nctemp4592=SymSetltp(nctemp4587);
struct tree* nctemp4598= p;
nctempchar1* nctemp4600=PtreeGetarray(nctemp4598);
nctempchar1* nctemp4596= nctemp4600;
struct nctempchar1 *nctemp4603;
static struct nctempchar1 nctemp4604 = {{ 6}, (char*)"array\0"};
nctemp4603=&nctemp4604;
nctempchar1* nctemp4601= nctemp4603;
int nctemp4605=LibeStrcmp(nctemp4596,nctemp4601);
int nctemp4593 = (nctemp4605 ==1);
if(nctemp4593)
{
struct tree* nctemp4612= np;
nctempchar1* nctemp4614= qual;
struct nctempchar1 *nctemp4619;
static struct nctempchar1 nctemp4620 = {{ 2}, (char*)".\0"};
nctemp4619=&nctemp4620;
nctempchar1* nctemp4617= nctemp4619;
nctempchar1* nctemp4621=CodeArray(nctemp4612,nctemp4614,nctemp4617);
name=nctemp4621;
}
else{
struct tree* nctemp4627= np;
nctempchar1* nctemp4629= qual;
struct nctempchar1 *nctemp4634;
static struct nctempchar1 nctemp4635 = {{ 3}, (char*)"->\0"};
nctemp4634=&nctemp4635;
nctempchar1* nctemp4632= nctemp4634;
nctempchar1* nctemp4636=CodeArray(nctemp4627,nctemp4629,nctemp4632);
name=nctemp4636;
}
struct symbol* nctemp4638= tp;
int nctemp4640=SymSetltp(nctemp4638);
struct symbol* nctemp4642= up;
int nctemp4644=SymSetetp(nctemp4642);
}
else{
struct tree* nctemp4650= np;
nctempchar1* nctemp4652=PtreeGetdef(nctemp4650);
name=nctemp4652;
}
struct tree* nctemp4658= p;
nctempchar1* nctemp4660=PtreeGetarray(nctemp4658);
nctempchar1* nctemp4656= nctemp4660;
struct nctempchar1 *nctemp4663;
static struct nctempchar1 nctemp4664 = {{ 6}, (char*)"array\0"};
nctemp4663=&nctemp4664;
nctempchar1* nctemp4661= nctemp4663;
int nctemp4665=LibeStrcmp(nctemp4656,nctemp4661);
int nctemp4653 = (nctemp4665 ==1);
if(nctemp4653)
{
nctempchar1* nctemp4668= qual;
nctempchar1* nctemp4671= name;
nctempchar1* nctemp4674=CodeQident(nctemp4668,nctemp4671);
return nctemp4674;
}
else{
nctempchar1* nctemp4676= qual;
nctempchar1* nctemp4679= name;
nctempchar1* nctemp4682=CodeQident2(nctemp4676,nctemp4679);
return nctemp4682;
}
}
else{
struct tree* nctemp4688= p;
nctempchar1* nctemp4690=PtreeGetarray(nctemp4688);
nctempchar1* nctemp4686= nctemp4690;
struct nctempchar1 *nctemp4693;
static struct nctempchar1 nctemp4694 = {{ 6}, (char*)"array\0"};
nctemp4693=&nctemp4694;
nctempchar1* nctemp4691= nctemp4693;
int nctemp4695=LibeStrcmp(nctemp4686,nctemp4691);
int nctemp4683 = (nctemp4695 ==1);
if(nctemp4683)
{
name  = 0;
qual  = 0;
struct tree* nctemp4702= p;
nctempchar1* nctemp4704= qual;
nctempchar1* nctemp4707= name;
nctempchar1* nctemp4710=CodeArray(nctemp4702,nctemp4704,nctemp4707);
qual=nctemp4710;
return qual;
}
else{
struct tree* nctemp4714= p;
nctempchar1* nctemp4716=PtreeGetdef(nctemp4714);
return nctemp4716;
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
nctempchar1* nctemp4722=CodeMktemp();
pointer=nctemp4722;
nctempchar1* nctemp4728=CodeMktemp();
totdim=nctemp4728;
struct tree* nctemp4733= p;
struct tree* nctemp4735=PtreeMvchild(nctemp4733);
p =nctemp4735;
struct tree* nctemp4741= p;
nctempchar1* nctemp4743=PtreeGetdef(nctemp4741);
type=nctemp4743;
struct tree* nctemp4749= p;
nctempchar1* nctemp4751=PtreeGetstruct(nctemp4749);
structflag=nctemp4751;
struct tree* nctemp4757= p;
nctempchar1* nctemp4759=PtreeGetarray(nctemp4757);
arrayflag=nctemp4759;
struct tree* nctemp4765= p;
nctempchar1* nctemp4767=PtreeGetarray(nctemp4765);
nctempchar1* nctemp4763= nctemp4767;
struct nctempchar1 *nctemp4770;
static struct nctempchar1 nctemp4771 = {{ 6}, (char*)"array\0"};
nctemp4770=&nctemp4771;
nctempchar1* nctemp4768= nctemp4770;
int nctemp4772=LibeStrcmp(nctemp4763,nctemp4768);
int nctemp4760 = (nctemp4772 ==1);
if(nctemp4760)
{
struct tree* nctemp4778= p;
struct tree* nctemp4780=PtreeMvchild(nctemp4778);
p =nctemp4780;
struct tree* nctemp4785= p;
struct tree* nctemp4787=PtreeMvchild(nctemp4785);
p =nctemp4787;
struct tree* nctemp4792= p;
struct tree* nctemp4794=PtreeMvchild(nctemp4792);
p =nctemp4794;
struct tree* nctemp4799= p;
struct tree* nctemp4801=PtreeMvchild(nctemp4799);
p =nctemp4801;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4809= p;
struct tree* nctemp4811=PtreeMvsister(nctemp4809);
p =nctemp4811;
int nctemp4802 = (p !=0);
int nctemp4813=nctemp4802;
while(nctemp4813)
{{
rank = (rank + 1);
}
struct tree* nctemp4821= p;
struct tree* nctemp4823=PtreeMvsister(nctemp4821);
p =nctemp4823;
int nctemp4814 = (p !=0);
nctemp4813=nctemp4814;}int nctemp4825 = (rank > 4);
if(nctemp4825)
{
struct nctempchar1 *nctemp4832;
static struct nctempchar1 nctemp4833 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4832=&nctemp4833;
nctempchar1* nctemp4830= nctemp4832;
int nctemp4834=CodeError(nctemp4830);
}
p = sp;
i = 0;
int nctemp4835 = (p !=0);
int nctemp4839=nctemp4835;
while(nctemp4839)
{{
struct tree* nctemp4845= p;
nctempchar1* nctemp4847=CodeExpr(nctemp4845);
dim=nctemp4847;
int nctemp4848 = (i ==0);
if(nctemp4848)
{
struct tree* nctemp4853= p;
struct tree* nctemp4857= p;
nctempchar1* nctemp4859=PtreeGetype(nctemp4857);
nctempchar1* nctemp4855= nctemp4859;
int nctemp4860=CodeEs(nctemp4853,nctemp4855);
struct tree* nctemp4862= p;
struct nctempchar1 *nctemp4866;
static struct nctempchar1 nctemp4867 = {{ 2}, (char*)" \0"};
nctemp4866=&nctemp4867;
nctempchar1* nctemp4864= nctemp4866;
int nctemp4868=CodeEs(nctemp4862,nctemp4864);
struct tree* nctemp4870= p;
nctempchar1* nctemp4872= totdim;
int nctemp4875=CodeEs(nctemp4870,nctemp4872);
struct tree* nctemp4877= p;
struct nctempchar1 *nctemp4881;
static struct nctempchar1 nctemp4882 = {{ 2}, (char*)"=\0"};
nctemp4881=&nctemp4882;
nctempchar1* nctemp4879= nctemp4881;
int nctemp4883=CodeEs(nctemp4877,nctemp4879);
struct tree* nctemp4885= p;
nctempchar1* nctemp4887= dim;
int nctemp4890=CodeEs(nctemp4885,nctemp4887);
}
else{
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
nctempchar1* nctemp4909= totdim;
int nctemp4912=CodeEs(nctemp4907,nctemp4909);
struct tree* nctemp4914= p;
struct nctempchar1 *nctemp4918;
static struct nctempchar1 nctemp4919 = {{ 2}, (char*)"*\0"};
nctemp4918=&nctemp4919;
nctempchar1* nctemp4916= nctemp4918;
int nctemp4920=CodeEs(nctemp4914,nctemp4916);
struct tree* nctemp4922= p;
nctempchar1* nctemp4924= dim;
int nctemp4927=CodeEs(nctemp4922,nctemp4924);
}
struct tree* nctemp4929= p;
struct nctempchar1 *nctemp4933;
static struct nctempchar1 nctemp4934 = {{ 4}, (char*)";\n\0"};
nctemp4933=&nctemp4934;
nctempchar1* nctemp4931= nctemp4933;
int nctemp4935=CodeEs(nctemp4929,nctemp4931);
i = (i + 1);
struct tree* nctemp4940= p;
struct tree* nctemp4942=PtreeMvsister(nctemp4940);
p =nctemp4942;
}
int nctemp4943 = (p !=0);
nctemp4839=nctemp4943;}}
nctempchar1* nctemp4953= structflag;
struct nctempchar1 *nctemp4958;
static struct nctempchar1 nctemp4959 = {{ 7}, (char*)"struct\0"};
nctemp4958=&nctemp4959;
nctempchar1* nctemp4956= nctemp4958;
int nctemp4960=LibeStrcmp(nctemp4953,nctemp4956);
int nctemp4950 = (nctemp4960 ==1);
nctempchar1* nctemp4966= arrayflag;
struct nctempchar1 *nctemp4971;
static struct nctempchar1 nctemp4972 = {{ 6}, (char*)"array\0"};
nctemp4971=&nctemp4972;
nctempchar1* nctemp4969= nctemp4971;
int nctemp4973=LibeStrcmp(nctemp4966,nctemp4969);
int nctemp4963 = (nctemp4973 ==0);
int nctemp4947 = (nctemp4950 && nctemp4963);
if(nctemp4947)
{
struct tree* nctemp4976= p;
struct nctempchar1 *nctemp4980;
static struct nctempchar1 nctemp4981 = {{ 8}, (char*)"struct \0"};
nctemp4980=&nctemp4981;
nctempchar1* nctemp4978= nctemp4980;
int nctemp4982=CodeEs(nctemp4976,nctemp4978);
struct tree* nctemp4984= p;
nctempchar1* nctemp4986= type;
int nctemp4989=CodeEs(nctemp4984,nctemp4986);
struct tree* nctemp4991= p;
struct nctempchar1 *nctemp4995;
static struct nctempchar1 nctemp4996 = {{ 3}, (char*)" *\0"};
nctemp4995=&nctemp4996;
nctempchar1* nctemp4993= nctemp4995;
int nctemp4997=CodeEs(nctemp4991,nctemp4993);
struct tree* nctemp4999= p;
nctempchar1* nctemp5001= pointer;
int nctemp5004=CodeEs(nctemp4999,nctemp5001);
struct tree* nctemp5006= p;
struct nctempchar1 *nctemp5010;
static struct nctempchar1 nctemp5011 = {{ 2}, (char*)"=\0"};
nctemp5010=&nctemp5011;
nctempchar1* nctemp5008= nctemp5010;
int nctemp5012=CodeEs(nctemp5006,nctemp5008);
struct tree* nctemp5014= p;
struct nctempchar1 *nctemp5018;
static struct nctempchar1 nctemp5019 = {{ 2}, (char*)"(\0"};
nctemp5018=&nctemp5019;
nctempchar1* nctemp5016= nctemp5018;
int nctemp5020=CodeEs(nctemp5014,nctemp5016);
struct tree* nctemp5022= p;
struct nctempchar1 *nctemp5026;
static struct nctempchar1 nctemp5027 = {{ 8}, (char*)"struct \0"};
nctemp5026=&nctemp5027;
nctempchar1* nctemp5024= nctemp5026;
int nctemp5028=CodeEs(nctemp5022,nctemp5024);
struct tree* nctemp5030= p;
nctempchar1* nctemp5032= type;
int nctemp5035=CodeEs(nctemp5030,nctemp5032);
struct tree* nctemp5037= p;
struct nctempchar1 *nctemp5041;
static struct nctempchar1 nctemp5042 = {{ 3}, (char*)"*)\0"};
nctemp5041=&nctemp5042;
nctempchar1* nctemp5039= nctemp5041;
int nctemp5043=CodeEs(nctemp5037,nctemp5039);
struct tree* nctemp5045= p;
struct nctempchar1 *nctemp5049;
static struct nctempchar1 nctemp5050 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5049=&nctemp5050;
nctempchar1* nctemp5047= nctemp5049;
int nctemp5051=CodeEs(nctemp5045,nctemp5047);
struct tree* nctemp5053= p;
struct nctempchar1 *nctemp5057;
static struct nctempchar1 nctemp5058 = {{ 8}, (char*)"sizeof(\0"};
nctemp5057=&nctemp5058;
nctempchar1* nctemp5055= nctemp5057;
int nctemp5059=CodeEs(nctemp5053,nctemp5055);
struct tree* nctemp5061= p;
struct nctempchar1 *nctemp5065;
static struct nctempchar1 nctemp5066 = {{ 8}, (char*)"struct \0"};
nctemp5065=&nctemp5066;
nctempchar1* nctemp5063= nctemp5065;
int nctemp5067=CodeEs(nctemp5061,nctemp5063);
struct tree* nctemp5069= p;
nctempchar1* nctemp5071= type;
int nctemp5074=CodeEs(nctemp5069,nctemp5071);
struct tree* nctemp5076= p;
struct nctempchar1 *nctemp5080;
static struct nctempchar1 nctemp5081 = {{ 6}, (char*)"));\n\0"};
nctemp5080=&nctemp5081;
nctempchar1* nctemp5078= nctemp5080;
int nctemp5082=CodeEs(nctemp5076,nctemp5078);
}
nctempchar1* nctemp5089= structflag;
struct nctempchar1 *nctemp5094;
static struct nctempchar1 nctemp5095 = {{ 7}, (char*)"struct\0"};
nctemp5094=&nctemp5095;
nctempchar1* nctemp5092= nctemp5094;
int nctemp5096=LibeStrcmp(nctemp5089,nctemp5092);
int nctemp5086 = (nctemp5096 ==1);
nctempchar1* nctemp5102= arrayflag;
struct nctempchar1 *nctemp5107;
static struct nctempchar1 nctemp5108 = {{ 6}, (char*)"array\0"};
nctemp5107=&nctemp5108;
nctempchar1* nctemp5105= nctemp5107;
int nctemp5109=LibeStrcmp(nctemp5102,nctemp5105);
int nctemp5099 = (nctemp5109 ==1);
int nctemp5083 = (nctemp5086 && nctemp5099);
if(nctemp5083)
{
struct tree* nctemp5112= p;
struct nctempchar1 *nctemp5116;
static struct nctempchar1 nctemp5117 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5116=&nctemp5117;
nctempchar1* nctemp5114= nctemp5116;
int nctemp5118=CodeEs(nctemp5112,nctemp5114);
struct tree* nctemp5120= p;
nctempchar1* nctemp5122= type;
int nctemp5125=CodeEs(nctemp5120,nctemp5122);
int nctemp5127= rank;
int nctemp5129=CodeEd(nctemp5127);
struct tree* nctemp5131= p;
struct nctempchar1 *nctemp5135;
static struct nctempchar1 nctemp5136 = {{ 3}, (char*)" *\0"};
nctemp5135=&nctemp5136;
nctempchar1* nctemp5133= nctemp5135;
int nctemp5137=CodeEs(nctemp5131,nctemp5133);
struct tree* nctemp5139= p;
nctempchar1* nctemp5141= pointer;
int nctemp5144=CodeEs(nctemp5139,nctemp5141);
struct tree* nctemp5146= p;
struct nctempchar1 *nctemp5150;
static struct nctempchar1 nctemp5151 = {{ 4}, (char*)";\n\0"};
nctemp5150=&nctemp5151;
nctempchar1* nctemp5148= nctemp5150;
int nctemp5152=CodeEs(nctemp5146,nctemp5148);
struct tree* nctemp5154= p;
nctempchar1* nctemp5156= pointer;
int nctemp5159=CodeEs(nctemp5154,nctemp5156);
struct tree* nctemp5161= p;
struct nctempchar1 *nctemp5165;
static struct nctempchar1 nctemp5166 = {{ 2}, (char*)"=\0"};
nctemp5165=&nctemp5166;
nctempchar1* nctemp5163= nctemp5165;
int nctemp5167=CodeEs(nctemp5161,nctemp5163);
struct tree* nctemp5169= p;
struct nctempchar1 *nctemp5173;
static struct nctempchar1 nctemp5174 = {{ 2}, (char*)"(\0"};
nctemp5173=&nctemp5174;
nctempchar1* nctemp5171= nctemp5173;
int nctemp5175=CodeEs(nctemp5169,nctemp5171);
struct tree* nctemp5177= p;
struct nctempchar1 *nctemp5181;
static struct nctempchar1 nctemp5182 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5181=&nctemp5182;
nctempchar1* nctemp5179= nctemp5181;
int nctemp5183=CodeEs(nctemp5177,nctemp5179);
struct tree* nctemp5185= p;
nctempchar1* nctemp5187= type;
int nctemp5190=CodeEs(nctemp5185,nctemp5187);
int nctemp5192= rank;
int nctemp5194=CodeEd(nctemp5192);
struct tree* nctemp5196= p;
struct nctempchar1 *nctemp5200;
static struct nctempchar1 nctemp5201 = {{ 3}, (char*)"*)\0"};
nctemp5200=&nctemp5201;
nctempchar1* nctemp5198= nctemp5200;
int nctemp5202=CodeEs(nctemp5196,nctemp5198);
struct tree* nctemp5204= p;
struct nctempchar1 *nctemp5208;
static struct nctempchar1 nctemp5209 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5208=&nctemp5209;
nctempchar1* nctemp5206= nctemp5208;
int nctemp5210=CodeEs(nctemp5204,nctemp5206);
struct tree* nctemp5212= p;
struct nctempchar1 *nctemp5216;
static struct nctempchar1 nctemp5217 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5216=&nctemp5217;
nctempchar1* nctemp5214= nctemp5216;
int nctemp5218=CodeEs(nctemp5212,nctemp5214);
struct tree* nctemp5220= p;
nctempchar1* nctemp5222= type;
int nctemp5225=CodeEs(nctemp5220,nctemp5222);
int nctemp5227= rank;
int nctemp5229=CodeEd(nctemp5227);
struct tree* nctemp5231= p;
struct nctempchar1 *nctemp5235;
static struct nctempchar1 nctemp5236 = {{ 6}, (char*)"));\n\0"};
nctemp5235=&nctemp5236;
nctempchar1* nctemp5233= nctemp5235;
int nctemp5237=CodeEs(nctemp5231,nctemp5233);
i = 0;
p = sp;
int nctemp5238 = (p !=0);
int nctemp5242=nctemp5238;
while(nctemp5242)
{{
struct tree* nctemp5248= sp;
nctempchar1* nctemp5250=CodeExpr(nctemp5248);
dim=nctemp5250;
struct tree* nctemp5252= sp;
nctempchar1* nctemp5254= pointer;
int nctemp5257=CodeEs(nctemp5252,nctemp5254);
struct tree* nctemp5259= sp;
struct nctempchar1 *nctemp5263;
static struct nctempchar1 nctemp5264 = {{ 4}, (char*)"->d\0"};
nctemp5263=&nctemp5264;
nctempchar1* nctemp5261= nctemp5263;
int nctemp5265=CodeEs(nctemp5259,nctemp5261);
struct tree* nctemp5267= sp;
struct nctempchar1 *nctemp5271;
static struct nctempchar1 nctemp5272 = {{ 2}, (char*)"[\0"};
nctemp5271=&nctemp5272;
nctempchar1* nctemp5269= nctemp5271;
int nctemp5273=CodeEs(nctemp5267,nctemp5269);
int nctemp5275= i;
int nctemp5277=CodeEd(nctemp5275);
struct tree* nctemp5279= sp;
struct nctempchar1 *nctemp5283;
static struct nctempchar1 nctemp5284 = {{ 3}, (char*)"]=\0"};
nctemp5283=&nctemp5284;
nctempchar1* nctemp5281= nctemp5283;
int nctemp5285=CodeEs(nctemp5279,nctemp5281);
struct tree* nctemp5287= sp;
nctempchar1* nctemp5289= dim;
int nctemp5292=CodeEs(nctemp5287,nctemp5289);
struct tree* nctemp5294= sp;
struct nctempchar1 *nctemp5298;
static struct nctempchar1 nctemp5299 = {{ 4}, (char*)";\n\0"};
nctemp5298=&nctemp5299;
nctempchar1* nctemp5296= nctemp5298;
int nctemp5300=CodeEs(nctemp5294,nctemp5296);
i = (i + 1);
struct tree* nctemp5305= p;
struct tree* nctemp5307=PtreeMvsister(nctemp5305);
p =nctemp5307;
}
int nctemp5308 = (p !=0);
nctemp5242=nctemp5308;}struct tree* nctemp5313= sp;
nctempchar1* nctemp5315= pointer;
int nctemp5318=CodeEs(nctemp5313,nctemp5315);
struct tree* nctemp5320= sp;
struct nctempchar1 *nctemp5324;
static struct nctempchar1 nctemp5325 = {{ 4}, (char*)"->a\0"};
nctemp5324=&nctemp5325;
nctempchar1* nctemp5322= nctemp5324;
int nctemp5326=CodeEs(nctemp5320,nctemp5322);
struct tree* nctemp5328= sp;
struct nctempchar1 *nctemp5332;
static struct nctempchar1 nctemp5333 = {{ 2}, (char*)"=\0"};
nctemp5332=&nctemp5333;
nctempchar1* nctemp5330= nctemp5332;
int nctemp5334=CodeEs(nctemp5328,nctemp5330);
struct tree* nctemp5336= sp;
struct nctempchar1 *nctemp5340;
static struct nctempchar1 nctemp5341 = {{ 9}, (char*)"(struct \0"};
nctemp5340=&nctemp5341;
nctempchar1* nctemp5338= nctemp5340;
int nctemp5342=CodeEs(nctemp5336,nctemp5338);
struct tree* nctemp5344= sp;
nctempchar1* nctemp5346= type;
int nctemp5349=CodeEs(nctemp5344,nctemp5346);
struct tree* nctemp5351= sp;
struct nctempchar1 *nctemp5355;
static struct nctempchar1 nctemp5356 = {{ 3}, (char*)"*)\0"};
nctemp5355=&nctemp5356;
nctempchar1* nctemp5353= nctemp5355;
int nctemp5357=CodeEs(nctemp5351,nctemp5353);
struct tree* nctemp5359= sp;
struct nctempchar1 *nctemp5363;
static struct nctempchar1 nctemp5364 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5363=&nctemp5364;
nctempchar1* nctemp5361= nctemp5363;
int nctemp5365=CodeEs(nctemp5359,nctemp5361);
struct tree* nctemp5367= sp;
struct nctempchar1 *nctemp5371;
static struct nctempchar1 nctemp5372 = {{ 8}, (char*)"struct \0"};
nctemp5371=&nctemp5372;
nctempchar1* nctemp5369= nctemp5371;
int nctemp5373=CodeEs(nctemp5367,nctemp5369);
struct tree* nctemp5375= sp;
nctempchar1* nctemp5377= type;
int nctemp5380=CodeEs(nctemp5375,nctemp5377);
struct tree* nctemp5382= sp;
struct nctempchar1 *nctemp5386;
static struct nctempchar1 nctemp5387 = {{ 2}, (char*)")\0"};
nctemp5386=&nctemp5387;
nctempchar1* nctemp5384= nctemp5386;
int nctemp5388=CodeEs(nctemp5382,nctemp5384);
struct tree* nctemp5390= sp;
struct nctempchar1 *nctemp5394;
static struct nctempchar1 nctemp5395 = {{ 2}, (char*)"*\0"};
nctemp5394=&nctemp5395;
nctempchar1* nctemp5392= nctemp5394;
int nctemp5396=CodeEs(nctemp5390,nctemp5392);
struct tree* nctemp5398= sp;
nctempchar1* nctemp5400= totdim;
int nctemp5403=CodeEs(nctemp5398,nctemp5400);
struct tree* nctemp5405= sp;
struct nctempchar1 *nctemp5409;
static struct nctempchar1 nctemp5410 = {{ 5}, (char*)");\n\0"};
nctemp5409=&nctemp5410;
nctempchar1* nctemp5407= nctemp5409;
int nctemp5411=CodeEs(nctemp5405,nctemp5407);
}
nctempchar1* nctemp5418= structflag;
struct nctempchar1 *nctemp5423;
static struct nctempchar1 nctemp5424 = {{ 7}, (char*)"struct\0"};
nctemp5423=&nctemp5424;
nctempchar1* nctemp5421= nctemp5423;
int nctemp5425=LibeStrcmp(nctemp5418,nctemp5421);
int nctemp5415 = (nctemp5425 ==0);
nctempchar1* nctemp5431= arrayflag;
struct nctempchar1 *nctemp5436;
static struct nctempchar1 nctemp5437 = {{ 6}, (char*)"array\0"};
nctemp5436=&nctemp5437;
nctempchar1* nctemp5434= nctemp5436;
int nctemp5438=LibeStrcmp(nctemp5431,nctemp5434);
int nctemp5428 = (nctemp5438 ==1);
int nctemp5412 = (nctemp5415 && nctemp5428);
if(nctemp5412)
{
int nctemp5441= 4;
int nctemp5443=LibeFlush(nctemp5441);
struct tree* nctemp5445= sp;
struct nctempchar1 *nctemp5449;
static struct nctempchar1 nctemp5450 = {{ 7}, (char*)"nctemp\0"};
nctemp5449=&nctemp5450;
nctempchar1* nctemp5447= nctemp5449;
int nctemp5451=CodeEs(nctemp5445,nctemp5447);
struct tree* nctemp5453= sp;
nctempchar1* nctemp5455= type;
int nctemp5458=CodeEs(nctemp5453,nctemp5455);
int nctemp5460= rank;
int nctemp5462=CodeEd(nctemp5460);
struct tree* nctemp5464= sp;
struct nctempchar1 *nctemp5468;
static struct nctempchar1 nctemp5469 = {{ 3}, (char*)" *\0"};
nctemp5468=&nctemp5469;
nctempchar1* nctemp5466= nctemp5468;
int nctemp5470=CodeEs(nctemp5464,nctemp5466);
struct tree* nctemp5472= sp;
nctempchar1* nctemp5474= pointer;
int nctemp5477=CodeEs(nctemp5472,nctemp5474);
struct tree* nctemp5479= sp;
struct nctempchar1 *nctemp5483;
static struct nctempchar1 nctemp5484 = {{ 4}, (char*)";\n\0"};
nctemp5483=&nctemp5484;
nctempchar1* nctemp5481= nctemp5483;
int nctemp5485=CodeEs(nctemp5479,nctemp5481);
p = top;
i = 0;
struct tree* nctemp5487= p;
nctempchar1* nctemp5489= pointer;
int nctemp5492=CodeEs(nctemp5487,nctemp5489);
struct tree* nctemp5494= p;
struct nctempchar1 *nctemp5498;
static struct nctempchar1 nctemp5499 = {{ 2}, (char*)"=\0"};
nctemp5498=&nctemp5499;
nctempchar1* nctemp5496= nctemp5498;
int nctemp5500=CodeEs(nctemp5494,nctemp5496);
struct tree* nctemp5502= p;
struct nctempchar1 *nctemp5506;
static struct nctempchar1 nctemp5507 = {{ 2}, (char*)"(\0"};
nctemp5506=&nctemp5507;
nctempchar1* nctemp5504= nctemp5506;
int nctemp5508=CodeEs(nctemp5502,nctemp5504);
struct tree* nctemp5510= p;
struct nctempchar1 *nctemp5514;
static struct nctempchar1 nctemp5515 = {{ 7}, (char*)"nctemp\0"};
nctemp5514=&nctemp5515;
nctempchar1* nctemp5512= nctemp5514;
int nctemp5516=CodeEs(nctemp5510,nctemp5512);
struct tree* nctemp5518= p;
nctempchar1* nctemp5520= type;
int nctemp5523=CodeEs(nctemp5518,nctemp5520);
int nctemp5525= rank;
int nctemp5527=CodeEd(nctemp5525);
struct tree* nctemp5529= p;
struct nctempchar1 *nctemp5533;
static struct nctempchar1 nctemp5534 = {{ 3}, (char*)"*)\0"};
nctemp5533=&nctemp5534;
nctempchar1* nctemp5531= nctemp5533;
int nctemp5535=CodeEs(nctemp5529,nctemp5531);
struct tree* nctemp5537= p;
struct nctempchar1 *nctemp5541;
static struct nctempchar1 nctemp5542 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5541=&nctemp5542;
nctempchar1* nctemp5539= nctemp5541;
int nctemp5543=CodeEs(nctemp5537,nctemp5539);
struct tree* nctemp5545= p;
struct nctempchar1 *nctemp5549;
static struct nctempchar1 nctemp5550 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5549=&nctemp5550;
nctempchar1* nctemp5547= nctemp5549;
int nctemp5551=CodeEs(nctemp5545,nctemp5547);
struct tree* nctemp5553= p;
nctempchar1* nctemp5555= type;
int nctemp5558=CodeEs(nctemp5553,nctemp5555);
int nctemp5560= rank;
int nctemp5562=CodeEd(nctemp5560);
struct tree* nctemp5564= p;
struct nctempchar1 *nctemp5568;
static struct nctempchar1 nctemp5569 = {{ 6}, (char*)"));\n\0"};
nctemp5568=&nctemp5569;
nctempchar1* nctemp5566= nctemp5568;
int nctemp5570=CodeEs(nctemp5564,nctemp5566);
int nctemp5571 = (p !=0);
int nctemp5575=nctemp5571;
while(nctemp5575)
{{
struct tree* nctemp5581= p;
nctempchar1* nctemp5583=CodeExpr(nctemp5581);
dim=nctemp5583;
struct tree* nctemp5585= p;
nctempchar1* nctemp5587= pointer;
int nctemp5590=CodeEs(nctemp5585,nctemp5587);
struct tree* nctemp5592= p;
struct nctempchar1 *nctemp5596;
static struct nctempchar1 nctemp5597 = {{ 4}, (char*)"->d\0"};
nctemp5596=&nctemp5597;
nctempchar1* nctemp5594= nctemp5596;
int nctemp5598=CodeEs(nctemp5592,nctemp5594);
struct tree* nctemp5600= p;
struct nctempchar1 *nctemp5604;
static struct nctempchar1 nctemp5605 = {{ 2}, (char*)"[\0"};
nctemp5604=&nctemp5605;
nctempchar1* nctemp5602= nctemp5604;
int nctemp5606=CodeEs(nctemp5600,nctemp5602);
int nctemp5608= i;
int nctemp5610=CodeEd(nctemp5608);
struct tree* nctemp5612= p;
struct nctempchar1 *nctemp5616;
static struct nctempchar1 nctemp5617 = {{ 3}, (char*)"]=\0"};
nctemp5616=&nctemp5617;
nctempchar1* nctemp5614= nctemp5616;
int nctemp5618=CodeEs(nctemp5612,nctemp5614);
struct tree* nctemp5620= p;
nctempchar1* nctemp5622= dim;
int nctemp5625=CodeEs(nctemp5620,nctemp5622);
struct tree* nctemp5627= p;
struct nctempchar1 *nctemp5631;
static struct nctempchar1 nctemp5632 = {{ 4}, (char*)";\n\0"};
nctemp5631=&nctemp5632;
nctempchar1* nctemp5629= nctemp5631;
int nctemp5633=CodeEs(nctemp5627,nctemp5629);
i = (i + 1);
struct tree* nctemp5638= p;
struct tree* nctemp5640=PtreeMvsister(nctemp5638);
p =nctemp5640;
}
int nctemp5641 = (p !=0);
nctemp5575=nctemp5641;}p = top;
struct tree* nctemp5646= p;
nctempchar1* nctemp5648= pointer;
int nctemp5651=CodeEs(nctemp5646,nctemp5648);
struct tree* nctemp5653= p;
struct nctempchar1 *nctemp5657;
static struct nctempchar1 nctemp5658 = {{ 4}, (char*)"->a\0"};
nctemp5657=&nctemp5658;
nctempchar1* nctemp5655= nctemp5657;
int nctemp5659=CodeEs(nctemp5653,nctemp5655);
struct tree* nctemp5661= p;
struct nctempchar1 *nctemp5665;
static struct nctempchar1 nctemp5666 = {{ 3}, (char*)"=(\0"};
nctemp5665=&nctemp5666;
nctempchar1* nctemp5663= nctemp5665;
int nctemp5667=CodeEs(nctemp5661,nctemp5663);
struct tree* nctemp5669= p;
nctempchar1* nctemp5671= type;
int nctemp5674=CodeEs(nctemp5669,nctemp5671);
struct tree* nctemp5676= p;
struct nctempchar1 *nctemp5680;
static struct nctempchar1 nctemp5681 = {{ 4}, (char*)" *)\0"};
nctemp5680=&nctemp5681;
nctempchar1* nctemp5678= nctemp5680;
int nctemp5682=CodeEs(nctemp5676,nctemp5678);
struct tree* nctemp5684= p;
struct nctempchar1 *nctemp5688;
static struct nctempchar1 nctemp5689 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5688=&nctemp5689;
nctempchar1* nctemp5686= nctemp5688;
int nctemp5690=CodeEs(nctemp5684,nctemp5686);
struct tree* nctemp5692= p;
nctempchar1* nctemp5694= type;
int nctemp5697=CodeEs(nctemp5692,nctemp5694);
struct tree* nctemp5699= p;
struct nctempchar1 *nctemp5703;
static struct nctempchar1 nctemp5704 = {{ 2}, (char*)")\0"};
nctemp5703=&nctemp5704;
nctempchar1* nctemp5701= nctemp5703;
int nctemp5705=CodeEs(nctemp5699,nctemp5701);
struct tree* nctemp5707= p;
struct nctempchar1 *nctemp5711;
static struct nctempchar1 nctemp5712 = {{ 2}, (char*)"*\0"};
nctemp5711=&nctemp5712;
nctempchar1* nctemp5709= nctemp5711;
int nctemp5713=CodeEs(nctemp5707,nctemp5709);
struct tree* nctemp5715= p;
nctempchar1* nctemp5717= totdim;
int nctemp5720=CodeEs(nctemp5715,nctemp5717);
struct tree* nctemp5722= p;
struct nctempchar1 *nctemp5726;
static struct nctempchar1 nctemp5727 = {{ 5}, (char*)");\n\0"};
nctemp5726=&nctemp5727;
nctempchar1* nctemp5724= nctemp5726;
int nctemp5728=CodeEs(nctemp5722,nctemp5724);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5735= p;
struct tree* nctemp5737=PtreeMvchild(nctemp5735);
p =nctemp5737;
struct tree* nctemp5742= p;
struct tree* nctemp5744=PtreeMvchild(nctemp5742);
p =nctemp5744;
struct tree* nctemp5750= p;
nctempchar1* nctemp5752=CodeBinexpr(nctemp5750);
tmp=nctemp5752;
struct tree* nctemp5756= p;
nctempchar1* nctemp5758=PtreeGetref(nctemp5756);
nctempchar1* nctemp5754= nctemp5758;
struct nctempchar1 *nctemp5761;
static struct nctempchar1 nctemp5762 = {{ 5}, (char*)"aref\0"};
nctemp5761=&nctemp5762;
nctempchar1* nctemp5759= nctemp5761;
int nctemp5763=LibeStrcmp(nctemp5754,nctemp5759);
if(nctemp5763)
{
struct tree* nctemp5765= p;
struct nctempchar1 *nctemp5769;
static struct nctempchar1 nctemp5770 = {{ 9}, (char*)"RunFree(\0"};
nctemp5769=&nctemp5770;
nctempchar1* nctemp5767= nctemp5769;
int nctemp5771=CodeEs(nctemp5765,nctemp5767);
struct tree* nctemp5773= p;
nctempchar1* nctemp5775= tmp;
int nctemp5778=CodeEs(nctemp5773,nctemp5775);
struct tree* nctemp5780= p;
struct nctempchar1 *nctemp5784;
static struct nctempchar1 nctemp5785 = {{ 8}, (char*)"->a);\n\0"};
nctemp5784=&nctemp5785;
nctempchar1* nctemp5782= nctemp5784;
int nctemp5786=CodeEs(nctemp5780,nctemp5782);
struct tree* nctemp5788= p;
struct nctempchar1 *nctemp5792;
static struct nctempchar1 nctemp5793 = {{ 9}, (char*)"RunFree(\0"};
nctemp5792=&nctemp5793;
nctempchar1* nctemp5790= nctemp5792;
int nctemp5794=CodeEs(nctemp5788,nctemp5790);
struct tree* nctemp5796= p;
nctempchar1* nctemp5798= tmp;
int nctemp5801=CodeEs(nctemp5796,nctemp5798);
struct tree* nctemp5803= p;
struct nctempchar1 *nctemp5807;
static struct nctempchar1 nctemp5808 = {{ 5}, (char*)");\n\0"};
nctemp5807=&nctemp5808;
nctempchar1* nctemp5805= nctemp5807;
int nctemp5809=CodeEs(nctemp5803,nctemp5805);
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
nctempchar1* nctemp5817=CodeMktemp();
tempr=nctemp5817;
struct tree* nctemp5822= p;
struct tree* nctemp5824=PtreeMvchild(nctemp5822);
np =nctemp5824;
struct tree* nctemp5830= np;
nctempchar1* nctemp5832=CodeExpr(nctemp5830);
temp=nctemp5832;
struct tree* nctemp5837= np;
struct tree* nctemp5839=PtreeMvsister(nctemp5837);
sp =nctemp5839;
struct tree* nctemp5845= sp;
nctempchar1* nctemp5847=CodeExpr(nctemp5845);
index=nctemp5847;
struct tree* nctemp5849= p;
struct tree* nctemp5853= p;
nctempchar1* nctemp5855=PtreeGetype(nctemp5853);
nctempchar1* nctemp5851= nctemp5855;
int nctemp5856=CodeEs(nctemp5849,nctemp5851);
struct tree* nctemp5858= p;
struct nctempchar1 *nctemp5862;
static struct nctempchar1 nctemp5863 = {{ 2}, (char*)" \0"};
nctemp5862=&nctemp5863;
nctempchar1* nctemp5860= nctemp5862;
int nctemp5864=CodeEs(nctemp5858,nctemp5860);
struct tree* nctemp5866= p;
nctempchar1* nctemp5868= tempr;
int nctemp5871=CodeEs(nctemp5866,nctemp5868);
struct tree* nctemp5873= p;
struct nctempchar1 *nctemp5877;
static struct nctempchar1 nctemp5878 = {{ 2}, (char*)"=\0"};
nctemp5877=&nctemp5878;
nctempchar1* nctemp5875= nctemp5877;
int nctemp5879=CodeEs(nctemp5873,nctemp5875);
struct tree* nctemp5881= p;
nctempchar1* nctemp5883= temp;
int nctemp5886=CodeEs(nctemp5881,nctemp5883);
struct tree* nctemp5888= p;
struct nctempchar1 *nctemp5892;
static struct nctempchar1 nctemp5893 = {{ 4}, (char*)"->d\0"};
nctemp5892=&nctemp5893;
nctempchar1* nctemp5890= nctemp5892;
int nctemp5894=CodeEs(nctemp5888,nctemp5890);
struct tree* nctemp5896= p;
struct nctempchar1 *nctemp5900;
static struct nctempchar1 nctemp5901 = {{ 2}, (char*)"[\0"};
nctemp5900=&nctemp5901;
nctempchar1* nctemp5898= nctemp5900;
int nctemp5902=CodeEs(nctemp5896,nctemp5898);
struct tree* nctemp5904= p;
nctempchar1* nctemp5906= index;
int nctemp5909=CodeEs(nctemp5904,nctemp5906);
struct tree* nctemp5911= p;
struct nctempchar1 *nctemp5915;
static struct nctempchar1 nctemp5916 = {{ 3}, (char*)"];\0"};
nctemp5915=&nctemp5916;
nctempchar1* nctemp5913= nctemp5915;
int nctemp5917=CodeEs(nctemp5911,nctemp5913);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5925=CodeMktemp();
tempr=nctemp5925;
struct tree* nctemp5930= p;
struct tree* nctemp5932=PtreeMvchild(nctemp5930);
np =nctemp5932;
struct tree* nctemp5937= np;
struct tree* nctemp5939=PtreeMvchild(nctemp5937);
np =nctemp5939;
struct tree* nctemp5945= np;
nctempchar1* nctemp5947=CodeExpr(nctemp5945);
q=nctemp5947;
struct tree* nctemp5952= np;
struct tree* nctemp5954=PtreeMvsister(nctemp5952);
sp =nctemp5954;
struct tree* nctemp5960= sp;
nctempchar1* nctemp5962=CodeExpr(nctemp5960);
r=nctemp5962;
struct tree* nctemp5964= p;
struct tree* nctemp5968= p;
nctempchar1* nctemp5970=PtreeGetype(nctemp5968);
nctempchar1* nctemp5966= nctemp5970;
int nctemp5971=CodeEs(nctemp5964,nctemp5966);
struct tree* nctemp5973= p;
struct nctempchar1 *nctemp5977;
static struct nctempchar1 nctemp5978 = {{ 2}, (char*)" \0"};
nctemp5977=&nctemp5978;
nctempchar1* nctemp5975= nctemp5977;
int nctemp5979=CodeEs(nctemp5973,nctemp5975);
struct tree* nctemp5981= p;
nctempchar1* nctemp5983= tempr;
int nctemp5986=CodeEs(nctemp5981,nctemp5983);
struct tree* nctemp5988= p;
struct nctempchar1 *nctemp5992;
static struct nctempchar1 nctemp5993 = {{ 3}, (char*)".r\0"};
nctemp5992=&nctemp5993;
nctempchar1* nctemp5990= nctemp5992;
int nctemp5994=CodeEs(nctemp5988,nctemp5990);
struct tree* nctemp5996= p;
struct nctempchar1 *nctemp6000;
static struct nctempchar1 nctemp6001 = {{ 3}, (char*)" =\0"};
nctemp6000=&nctemp6001;
nctempchar1* nctemp5998= nctemp6000;
int nctemp6002=CodeEs(nctemp5996,nctemp5998);
struct tree* nctemp6004= p;
nctempchar1* nctemp6006= q;
int nctemp6009=CodeEs(nctemp6004,nctemp6006);
struct tree* nctemp6011= p;
struct nctempchar1 *nctemp6015;
static struct nctempchar1 nctemp6016 = {{ 2}, (char*)";\0"};
nctemp6015=&nctemp6016;
nctempchar1* nctemp6013= nctemp6015;
int nctemp6017=CodeEs(nctemp6011,nctemp6013);
struct tree* nctemp6019= p;
struct tree* nctemp6023= p;
nctempchar1* nctemp6025=PtreeGetype(nctemp6023);
nctempchar1* nctemp6021= nctemp6025;
int nctemp6026=CodeEs(nctemp6019,nctemp6021);
struct tree* nctemp6028= p;
struct nctempchar1 *nctemp6032;
static struct nctempchar1 nctemp6033 = {{ 2}, (char*)" \0"};
nctemp6032=&nctemp6033;
nctempchar1* nctemp6030= nctemp6032;
int nctemp6034=CodeEs(nctemp6028,nctemp6030);
struct tree* nctemp6036= p;
nctempchar1* nctemp6038= tempr;
int nctemp6041=CodeEs(nctemp6036,nctemp6038);
struct tree* nctemp6043= p;
struct nctempchar1 *nctemp6047;
static struct nctempchar1 nctemp6048 = {{ 3}, (char*)".i\0"};
nctemp6047=&nctemp6048;
nctempchar1* nctemp6045= nctemp6047;
int nctemp6049=CodeEs(nctemp6043,nctemp6045);
struct tree* nctemp6051= p;
struct nctempchar1 *nctemp6055;
static struct nctempchar1 nctemp6056 = {{ 2}, (char*)"=\0"};
nctemp6055=&nctemp6056;
nctempchar1* nctemp6053= nctemp6055;
int nctemp6057=CodeEs(nctemp6051,nctemp6053);
struct tree* nctemp6059= p;
nctempchar1* nctemp6061= r;
int nctemp6064=CodeEs(nctemp6059,nctemp6061);
struct tree* nctemp6066= p;
struct nctempchar1 *nctemp6070;
static struct nctempchar1 nctemp6071 = {{ 2}, (char*)";\0"};
nctemp6070=&nctemp6071;
nctempchar1* nctemp6068= nctemp6070;
int nctemp6072=CodeEs(nctemp6066,nctemp6068);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6080=CodeMktemp();
tempr=nctemp6080;
struct tree* nctemp6085= p;
struct tree* nctemp6087=PtreeMvchild(nctemp6085);
np =nctemp6087;
struct tree* nctemp6093= np;
nctempchar1* nctemp6095=CodeExpr(nctemp6093);
q=nctemp6095;
struct tree* nctemp6097= p;
struct tree* nctemp6101= p;
nctempchar1* nctemp6103=PtreeGetype(nctemp6101);
nctempchar1* nctemp6099= nctemp6103;
int nctemp6104=CodeEs(nctemp6097,nctemp6099);
struct tree* nctemp6106= p;
struct nctempchar1 *nctemp6110;
static struct nctempchar1 nctemp6111 = {{ 2}, (char*)" \0"};
nctemp6110=&nctemp6111;
nctempchar1* nctemp6108= nctemp6110;
int nctemp6112=CodeEs(nctemp6106,nctemp6108);
struct tree* nctemp6114= p;
nctempchar1* nctemp6116= tempr;
int nctemp6119=CodeEs(nctemp6114,nctemp6116);
struct tree* nctemp6121= p;
struct nctempchar1 *nctemp6125;
static struct nctempchar1 nctemp6126 = {{ 3}, (char*)" =\0"};
nctemp6125=&nctemp6126;
nctempchar1* nctemp6123= nctemp6125;
int nctemp6127=CodeEs(nctemp6121,nctemp6123);
struct tree* nctemp6129= p;
nctempchar1* nctemp6131= q;
int nctemp6134=CodeEs(nctemp6129,nctemp6131);
struct tree* nctemp6136= p;
struct nctempchar1 *nctemp6140;
static struct nctempchar1 nctemp6141 = {{ 5}, (char*)".i  \0"};
nctemp6140=&nctemp6141;
nctempchar1* nctemp6138= nctemp6140;
int nctemp6142=CodeEs(nctemp6136,nctemp6138);
struct tree* nctemp6144= p;
struct nctempchar1 *nctemp6148;
static struct nctempchar1 nctemp6149 = {{ 4}, (char*)";\n\0"};
nctemp6148=&nctemp6149;
nctempchar1* nctemp6146= nctemp6148;
int nctemp6150=CodeEs(nctemp6144,nctemp6146);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6157= p;
struct tree* nctemp6159=PtreeMvchild(nctemp6157);
np =nctemp6159;
struct tree* nctemp6165= np;
nctempchar1* nctemp6167=CodeExpr(nctemp6165);
q=nctemp6167;
nctempchar1* nctemp6173=CodeMktemp();
tmp=nctemp6173;
struct tree* nctemp6175= p;
struct tree* nctemp6179= p;
nctempchar1* nctemp6181=PtreeGetype(nctemp6179);
nctempchar1* nctemp6177= nctemp6181;
int nctemp6182=CodeEs(nctemp6175,nctemp6177);
struct tree* nctemp6184= p;
struct nctempchar1 *nctemp6188;
static struct nctempchar1 nctemp6189 = {{ 2}, (char*)" \0"};
nctemp6188=&nctemp6189;
nctempchar1* nctemp6186= nctemp6188;
int nctemp6190=CodeEs(nctemp6184,nctemp6186);
struct tree* nctemp6192= p;
nctempchar1* nctemp6194= tmp;
int nctemp6197=CodeEs(nctemp6192,nctemp6194);
struct tree* nctemp6199= p;
struct nctempchar1 *nctemp6203;
static struct nctempchar1 nctemp6204 = {{ 3}, (char*)" =\0"};
nctemp6203=&nctemp6204;
nctempchar1* nctemp6201= nctemp6203;
int nctemp6205=CodeEs(nctemp6199,nctemp6201);
struct tree* nctemp6207= p;
nctempchar1* nctemp6209= q;
int nctemp6212=CodeEs(nctemp6207,nctemp6209);
struct tree* nctemp6214= p;
struct nctempchar1 *nctemp6218;
static struct nctempchar1 nctemp6219 = {{ 5}, (char*)".r  \0"};
nctemp6218=&nctemp6219;
nctempchar1* nctemp6216= nctemp6218;
int nctemp6220=CodeEs(nctemp6214,nctemp6216);
struct tree* nctemp6222= p;
struct nctempchar1 *nctemp6226;
static struct nctempchar1 nctemp6227 = {{ 4}, (char*)";\n\0"};
nctemp6226=&nctemp6227;
nctempchar1* nctemp6224= nctemp6226;
int nctemp6228=CodeEs(nctemp6222,nctemp6224);
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
struct tree* nctemp6237= p;
nctempchar1* nctemp6239=PtreeGetdef(nctemp6237);
nctempchar1* nctemp6235= nctemp6239;
struct symbol* nctemp6242=SymGetetp();
struct symbol* nctemp6240= nctemp6242;
struct symbol* nctemp6243=SymLookup(nctemp6235,nctemp6240);
tp =nctemp6243;
struct tree* nctemp6248= p;
struct tree* nctemp6250=PtreeMvchild(nctemp6248);
sp =nctemp6250;
int nctemp6251 = (sp !=0);
if(nctemp6251)
{
struct tree* nctemp6260= sp;
nctempchar1* nctemp6262=PtreeGetname(nctemp6260);
nctempchar1* nctemp6258= nctemp6262;
struct nctempchar1 *nctemp6265;
static struct nctempchar1 nctemp6266 = {{ 9}, (char*)"exprlist\0"};
nctemp6265=&nctemp6266;
nctempchar1* nctemp6263= nctemp6265;
int nctemp6267=LibeStrcmp(nctemp6258,nctemp6263);
int nctemp6255 = (nctemp6267 ==1);
if(nctemp6255)
{
struct tree* nctemp6273= sp;
struct tree* nctemp6275=PtreeMvchild(nctemp6273);
sp =nctemp6275;
}
}
int nctemp6276 = (sp !=0);
int nctemp6280=nctemp6276;
while(nctemp6280)
{{
nctempchar1* nctemp6286=CodeMktemp();
ntemp=nctemp6286;
struct tree* nctemp6288= sp;
nctempchar1* nctemp6290= ntemp;
int nctemp6293=PtreeSetempr(nctemp6288,nctemp6290);
struct tree* nctemp6299= sp;
nctempchar1* nctemp6301=CodeExpr(nctemp6299);
temp=nctemp6301;
struct tree* nctemp6307= sp;
nctempchar1* nctemp6309=PtreeGetref(nctemp6307);
nctempchar1* nctemp6305= nctemp6309;
struct nctempchar1 *nctemp6312;
static struct nctempchar1 nctemp6313 = {{ 5}, (char*)"aref\0"};
nctemp6312=&nctemp6313;
nctempchar1* nctemp6310= nctemp6312;
int nctemp6314=LibeStrcmp(nctemp6305,nctemp6310);
int nctemp6302 = (nctemp6314 ==1);
if(nctemp6302)
{
struct tree* nctemp6317= sp;
struct nctempchar1 *nctemp6321;
static struct nctempchar1 nctemp6322 = {{ 7}, (char*)"nctemp\0"};
nctemp6321=&nctemp6322;
nctempchar1* nctemp6319= nctemp6321;
int nctemp6323=CodeEs(nctemp6317,nctemp6319);
struct tree* nctemp6325= sp;
struct tree* nctemp6329= sp;
nctempchar1* nctemp6331=PtreeGetype(nctemp6329);
nctempchar1* nctemp6327= nctemp6331;
int nctemp6332=CodeEs(nctemp6325,nctemp6327);
struct tree* nctemp6336= sp;
int nctemp6338=PtreeGetrank(nctemp6336);
int nctemp6334= nctemp6338;
int nctemp6339=CodeEd(nctemp6334);
struct tree* nctemp6341= sp;
struct nctempchar1 *nctemp6345;
static struct nctempchar1 nctemp6346 = {{ 2}, (char*)"*\0"};
nctemp6345=&nctemp6346;
nctempchar1* nctemp6343= nctemp6345;
int nctemp6347=CodeEs(nctemp6341,nctemp6343);
}
else{
struct tree* nctemp6353= sp;
nctempchar1* nctemp6355=PtreeGetref(nctemp6353);
nctempchar1* nctemp6351= nctemp6355;
struct nctempchar1 *nctemp6358;
static struct nctempchar1 nctemp6359 = {{ 5}, (char*)"sref\0"};
nctemp6358=&nctemp6359;
nctempchar1* nctemp6356= nctemp6358;
int nctemp6360=LibeStrcmp(nctemp6351,nctemp6356);
int nctemp6348 = (nctemp6360 ==1);
if(nctemp6348)
{
struct tree* nctemp6363= sp;
struct nctempchar1 *nctemp6367;
static struct nctempchar1 nctemp6368 = {{ 8}, (char*)"struct \0"};
nctemp6367=&nctemp6368;
nctempchar1* nctemp6365= nctemp6367;
int nctemp6369=CodeEs(nctemp6363,nctemp6365);
struct tree* nctemp6371= sp;
struct tree* nctemp6375= sp;
nctempchar1* nctemp6377=PtreeGetype(nctemp6375);
nctempchar1* nctemp6373= nctemp6377;
int nctemp6378=CodeEs(nctemp6371,nctemp6373);
struct tree* nctemp6380= sp;
struct nctempchar1 *nctemp6384;
static struct nctempchar1 nctemp6385 = {{ 2}, (char*)"*\0"};
nctemp6384=&nctemp6385;
nctempchar1* nctemp6382= nctemp6384;
int nctemp6386=CodeEs(nctemp6380,nctemp6382);
}
else{
struct tree* nctemp6388= sp;
struct tree* nctemp6392= sp;
nctempchar1* nctemp6394=PtreeGetype(nctemp6392);
nctempchar1* nctemp6390= nctemp6394;
int nctemp6395=CodeEs(nctemp6388,nctemp6390);
}
}
struct tree* nctemp6397= sp;
struct nctempchar1 *nctemp6401;
static struct nctempchar1 nctemp6402 = {{ 2}, (char*)" \0"};
nctemp6401=&nctemp6402;
nctempchar1* nctemp6399= nctemp6401;
int nctemp6403=CodeEs(nctemp6397,nctemp6399);
struct tree* nctemp6405= sp;
nctempchar1* nctemp6407= ntemp;
int nctemp6410=CodeEs(nctemp6405,nctemp6407);
struct tree* nctemp6412= sp;
struct nctempchar1 *nctemp6416;
static struct nctempchar1 nctemp6417 = {{ 3}, (char*)"= \0"};
nctemp6416=&nctemp6417;
nctempchar1* nctemp6414= nctemp6416;
int nctemp6418=CodeEs(nctemp6412,nctemp6414);
struct tree* nctemp6420= sp;
nctempchar1* nctemp6422= temp;
int nctemp6425=CodeEs(nctemp6420,nctemp6422);
struct tree* nctemp6427= sp;
struct nctempchar1 *nctemp6431;
static struct nctempchar1 nctemp6432 = {{ 4}, (char*)";\n\0"};
nctemp6431=&nctemp6432;
nctempchar1* nctemp6429= nctemp6431;
int nctemp6433=CodeEs(nctemp6427,nctemp6429);
struct tree* nctemp6438= sp;
struct tree* nctemp6440=PtreeMvsister(nctemp6438);
sp =nctemp6440;
}
int nctemp6441 = (sp !=0);
nctemp6280=nctemp6441;}nctempchar1* nctemp6450=CodeMktemp();
ntemp=nctemp6450;
struct tree* nctemp6456= p;
nctempchar1* nctemp6458=PtreeGetref(nctemp6456);
nctempchar1* nctemp6454= nctemp6458;
struct nctempchar1 *nctemp6461;
static struct nctempchar1 nctemp6462 = {{ 5}, (char*)"aref\0"};
nctemp6461=&nctemp6462;
nctempchar1* nctemp6459= nctemp6461;
int nctemp6463=LibeStrcmp(nctemp6454,nctemp6459);
int nctemp6451 = (nctemp6463 ==1);
if(nctemp6451)
{
struct tree* nctemp6466= p;
struct nctempchar1 *nctemp6470;
static struct nctempchar1 nctemp6471 = {{ 7}, (char*)"nctemp\0"};
nctemp6470=&nctemp6471;
nctempchar1* nctemp6468= nctemp6470;
int nctemp6472=CodeEs(nctemp6466,nctemp6468);
struct tree* nctemp6474= p;
struct tree* nctemp6478= p;
nctempchar1* nctemp6480=PtreeGetype(nctemp6478);
nctempchar1* nctemp6476= nctemp6480;
int nctemp6481=CodeEs(nctemp6474,nctemp6476);
struct tree* nctemp6485= p;
int nctemp6487=PtreeGetrank(nctemp6485);
int nctemp6483= nctemp6487;
int nctemp6488=CodeEd(nctemp6483);
struct tree* nctemp6490= p;
struct nctempchar1 *nctemp6494;
static struct nctempchar1 nctemp6495 = {{ 2}, (char*)"*\0"};
nctemp6494=&nctemp6495;
nctempchar1* nctemp6492= nctemp6494;
int nctemp6496=CodeEs(nctemp6490,nctemp6492);
}
else{
struct tree* nctemp6502= p;
nctempchar1* nctemp6504=PtreeGetref(nctemp6502);
nctempchar1* nctemp6500= nctemp6504;
struct nctempchar1 *nctemp6507;
static struct nctempchar1 nctemp6508 = {{ 5}, (char*)"sref\0"};
nctemp6507=&nctemp6508;
nctempchar1* nctemp6505= nctemp6507;
int nctemp6509=LibeStrcmp(nctemp6500,nctemp6505);
int nctemp6497 = (nctemp6509 ==1);
if(nctemp6497)
{
struct tree* nctemp6512= p;
struct nctempchar1 *nctemp6516;
static struct nctempchar1 nctemp6517 = {{ 8}, (char*)"struct \0"};
nctemp6516=&nctemp6517;
nctempchar1* nctemp6514= nctemp6516;
int nctemp6518=CodeEs(nctemp6512,nctemp6514);
struct tree* nctemp6520= p;
struct tree* nctemp6524= p;
nctempchar1* nctemp6526=PtreeGetype(nctemp6524);
nctempchar1* nctemp6522= nctemp6526;
int nctemp6527=CodeEs(nctemp6520,nctemp6522);
struct tree* nctemp6529= p;
struct nctempchar1 *nctemp6533;
static struct nctempchar1 nctemp6534 = {{ 2}, (char*)"*\0"};
nctemp6533=&nctemp6534;
nctempchar1* nctemp6531= nctemp6533;
int nctemp6535=CodeEs(nctemp6529,nctemp6531);
}
else{
struct tree* nctemp6537= p;
struct tree* nctemp6541= p;
nctempchar1* nctemp6543=PtreeGetype(nctemp6541);
nctempchar1* nctemp6539= nctemp6543;
int nctemp6544=CodeEs(nctemp6537,nctemp6539);
}
}
struct tree* nctemp6546= p;
struct nctempchar1 *nctemp6550;
static struct nctempchar1 nctemp6551 = {{ 2}, (char*)" \0"};
nctemp6550=&nctemp6551;
nctempchar1* nctemp6548= nctemp6550;
int nctemp6552=CodeEs(nctemp6546,nctemp6548);
struct tree* nctemp6554= p;
nctempchar1* nctemp6556= ntemp;
int nctemp6559=CodeEs(nctemp6554,nctemp6556);
struct tree* nctemp6561= p;
struct nctempchar1 *nctemp6565;
static struct nctempchar1 nctemp6566 = {{ 2}, (char*)"=\0"};
nctemp6565=&nctemp6566;
nctempchar1* nctemp6563= nctemp6565;
int nctemp6567=CodeEs(nctemp6561,nctemp6563);
struct tree* nctemp6569= p;
struct symbol* nctemp6573= tp;
nctempchar1* nctemp6575=SymGetname(nctemp6573);
nctempchar1* nctemp6571= nctemp6575;
int nctemp6576=CodeEs(nctemp6569,nctemp6571);
struct tree* nctemp6578= p;
struct nctempchar1 *nctemp6582;
static struct nctempchar1 nctemp6583 = {{ 2}, (char*)"(\0"};
nctemp6582=&nctemp6583;
nctempchar1* nctemp6580= nctemp6582;
int nctemp6584=CodeEs(nctemp6578,nctemp6580);
struct tree* nctemp6589= p;
struct tree* nctemp6591=PtreeMvchild(nctemp6589);
sp =nctemp6591;
int nctemp6592 = (sp !=0);
if(nctemp6592)
{
struct tree* nctemp6600= sp;
struct tree* nctemp6602=PtreeMvchild(nctemp6600);
sp =nctemp6602;
}
int nctemp6603 = (sp !=0);
int nctemp6607=nctemp6603;
while(nctemp6607)
{{
struct tree* nctemp6609= p;
struct tree* nctemp6613= sp;
nctempchar1* nctemp6615=PtreeGetempr(nctemp6613);
nctempchar1* nctemp6611= nctemp6615;
int nctemp6616=CodeEs(nctemp6609,nctemp6611);
struct tree* nctemp6624= sp;
struct tree* nctemp6626=PtreeMvsister(nctemp6624);
sp =nctemp6626;
int nctemp6617 = (sp !=0);
if(nctemp6617)
{
struct tree* nctemp6629= p;
struct nctempchar1 *nctemp6633;
static struct nctempchar1 nctemp6634 = {{ 2}, (char*)",\0"};
nctemp6633=&nctemp6634;
nctempchar1* nctemp6631= nctemp6633;
int nctemp6635=CodeEs(nctemp6629,nctemp6631);
}
noargs = (noargs + 1);
}
int nctemp6636 = (sp !=0);
nctemp6607=nctemp6636;}struct tree* nctemp6641= p;
struct nctempchar1 *nctemp6645;
static struct nctempchar1 nctemp6646 = {{ 5}, (char*)");\n\0"};
nctemp6645=&nctemp6646;
nctempchar1* nctemp6643= nctemp6645;
int nctemp6647=CodeEs(nctemp6641,nctemp6643);
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
nctempchar1* nctemp6655=CodeMktemp();
pointer=nctemp6655;
nctempchar1* nctemp6661=CodeMktemp();
descr=nctemp6661;
struct tree* nctemp6667= p;
nctempchar1* nctemp6669=PtreeGetype(nctemp6667);
type=nctemp6669;
struct tree* nctemp6675= p;
nctempchar1* nctemp6677=PtreeGetname(nctemp6675);
nctempchar1* nctemp6673= nctemp6677;
struct nctempchar1 *nctemp6680;
static struct nctempchar1 nctemp6681 = {{ 5}, (char*)"cast\0"};
nctemp6680=&nctemp6681;
nctempchar1* nctemp6678= nctemp6680;
int nctemp6682=LibeStrcmp(nctemp6673,nctemp6678);
int nctemp6670 = (nctemp6682 ==1);
if(nctemp6670)
{
struct tree* nctemp6688= p;
struct tree* nctemp6690=PtreeMvchild(nctemp6688);
np =nctemp6690;
struct tree* nctemp6695= np;
struct tree* nctemp6697=PtreeMvsister(nctemp6695);
sp =nctemp6697;
struct tree* nctemp6703= sp;
nctempchar1* nctemp6705=CodeExpr(nctemp6703);
expr=nctemp6705;
struct tree* nctemp6711= np;
nctempchar1* nctemp6713=PtreeGetref(nctemp6711);
nctempchar1* nctemp6709= nctemp6713;
struct nctempchar1 *nctemp6716;
static struct nctempchar1 nctemp6717 = {{ 5}, (char*)"sref\0"};
nctemp6716=&nctemp6717;
nctempchar1* nctemp6714= nctemp6716;
int nctemp6718=LibeStrcmp(nctemp6709,nctemp6714);
int nctemp6706 = (nctemp6718 ==1);
if(nctemp6706)
{
nctempchar1* nctemp6725=CodeMktemp();
tmp=nctemp6725;
struct tree* nctemp6727= p;
nctempchar1* nctemp6729= type;
int nctemp6732=CodeEs(nctemp6727,nctemp6729);
struct tree* nctemp6734= p;
struct nctempchar1 *nctemp6738;
static struct nctempchar1 nctemp6739 = {{ 2}, (char*)" \0"};
nctemp6738=&nctemp6739;
nctempchar1* nctemp6736= nctemp6738;
int nctemp6740=CodeEs(nctemp6734,nctemp6736);
struct tree* nctemp6742= p;
nctempchar1* nctemp6744= tmp;
int nctemp6747=CodeEs(nctemp6742,nctemp6744);
struct tree* nctemp6749= p;
struct nctempchar1 *nctemp6753;
static struct nctempchar1 nctemp6754 = {{ 2}, (char*)"=\0"};
nctemp6753=&nctemp6754;
nctempchar1* nctemp6751= nctemp6753;
int nctemp6755=CodeEs(nctemp6749,nctemp6751);
struct tree* nctemp6757= p;
struct nctempchar1 *nctemp6761;
static struct nctempchar1 nctemp6762 = {{ 9}, (char*)"(struct \0"};
nctemp6761=&nctemp6762;
nctempchar1* nctemp6759= nctemp6761;
int nctemp6763=CodeEs(nctemp6757,nctemp6759);
struct tree* nctemp6765= p;
struct tree* nctemp6769= np;
nctempchar1* nctemp6771=PtreeGetype(nctemp6769);
nctempchar1* nctemp6767= nctemp6771;
int nctemp6772=CodeEs(nctemp6765,nctemp6767);
struct tree* nctemp6774= p;
struct nctempchar1 *nctemp6778;
static struct nctempchar1 nctemp6779 = {{ 4}, (char*)"*)(\0"};
nctemp6778=&nctemp6779;
nctempchar1* nctemp6776= nctemp6778;
int nctemp6780=CodeEs(nctemp6774,nctemp6776);
struct tree* nctemp6782= p;
nctempchar1* nctemp6784= expr;
int nctemp6787=CodeEs(nctemp6782,nctemp6784);
struct tree* nctemp6789= p;
struct nctempchar1 *nctemp6793;
static struct nctempchar1 nctemp6794 = {{ 5}, (char*)");\n\0"};
nctemp6793=&nctemp6794;
nctempchar1* nctemp6791= nctemp6793;
int nctemp6795=CodeEs(nctemp6789,nctemp6791);
}
else{
struct tree* nctemp6801= np;
nctempchar1* nctemp6803=PtreeGetref(nctemp6801);
nctempchar1* nctemp6799= nctemp6803;
struct nctempchar1 *nctemp6806;
static struct nctempchar1 nctemp6807 = {{ 5}, (char*)"aref\0"};
nctemp6806=&nctemp6807;
nctempchar1* nctemp6804= nctemp6806;
int nctemp6808=LibeStrcmp(nctemp6799,nctemp6804);
int nctemp6796 = (nctemp6808 ==1);
if(nctemp6796)
{
struct tree* nctemp6814= np;
struct tree* nctemp6816=PtreeMvchild(nctemp6814);
np =nctemp6816;
struct tree* nctemp6821= np;
struct tree* nctemp6823=PtreeMvchild(nctemp6821);
np =nctemp6823;
struct tree* nctemp6828= np;
struct tree* nctemp6830=PtreeMvchild(nctemp6828);
np =nctemp6830;
struct tree* nctemp6835= np;
struct tree* nctemp6837=PtreeMvchild(nctemp6835);
np =nctemp6837;
tp = np;
rank = 1;
struct tree* nctemp6845= np;
struct tree* nctemp6847=PtreeMvsister(nctemp6845);
np =nctemp6847;
int nctemp6838 = (np !=0);
int nctemp6849=nctemp6838;
while(nctemp6849)
{{
rank = (rank + 1);
}
struct tree* nctemp6857= np;
struct tree* nctemp6859=PtreeMvsister(nctemp6857);
np =nctemp6859;
int nctemp6850 = (np !=0);
nctemp6849=nctemp6850;}int nctemp6861 = (rank > 4);
if(nctemp6861)
{
struct nctempchar1 *nctemp6868;
static struct nctempchar1 nctemp6869 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6868=&nctemp6869;
nctempchar1* nctemp6866= nctemp6868;
int nctemp6870=CodeError(nctemp6866);
}
p = tp;
struct tree* nctemp6872= p;
struct nctempchar1 *nctemp6876;
static struct nctempchar1 nctemp6877 = {{ 7}, (char*)"nctemp\0"};
nctemp6876=&nctemp6877;
nctempchar1* nctemp6874= nctemp6876;
int nctemp6878=CodeEs(nctemp6872,nctemp6874);
struct tree* nctemp6880= p;
nctempchar1* nctemp6882= type;
int nctemp6885=CodeEs(nctemp6880,nctemp6882);
int nctemp6887= rank;
int nctemp6889=CodeEd(nctemp6887);
struct tree* nctemp6891= p;
struct nctempchar1 *nctemp6895;
static struct nctempchar1 nctemp6896 = {{ 2}, (char*)" \0"};
nctemp6895=&nctemp6896;
nctempchar1* nctemp6893= nctemp6895;
int nctemp6897=CodeEs(nctemp6891,nctemp6893);
struct tree* nctemp6899= sp;
nctempchar1* nctemp6901= descr;
int nctemp6904=CodeEs(nctemp6899,nctemp6901);
struct tree* nctemp6906= sp;
struct nctempchar1 *nctemp6910;
static struct nctempchar1 nctemp6911 = {{ 4}, (char*)";\n\0"};
nctemp6910=&nctemp6911;
nctempchar1* nctemp6908= nctemp6910;
int nctemp6912=CodeEs(nctemp6906,nctemp6908);
struct tree* nctemp6914= p;
struct nctempchar1 *nctemp6918;
static struct nctempchar1 nctemp6919 = {{ 7}, (char*)"nctemp\0"};
nctemp6918=&nctemp6919;
nctempchar1* nctemp6916= nctemp6918;
int nctemp6920=CodeEs(nctemp6914,nctemp6916);
struct tree* nctemp6922= p;
nctempchar1* nctemp6924= type;
int nctemp6927=CodeEs(nctemp6922,nctemp6924);
int nctemp6929= rank;
int nctemp6931=CodeEd(nctemp6929);
struct tree* nctemp6933= p;
struct nctempchar1 *nctemp6937;
static struct nctempchar1 nctemp6938 = {{ 3}, (char*)" *\0"};
nctemp6937=&nctemp6938;
nctempchar1* nctemp6935= nctemp6937;
int nctemp6939=CodeEs(nctemp6933,nctemp6935);
struct tree* nctemp6941= sp;
nctempchar1* nctemp6943= pointer;
int nctemp6946=CodeEs(nctemp6941,nctemp6943);
struct tree* nctemp6948= p;
struct nctempchar1 *nctemp6952;
static struct nctempchar1 nctemp6953 = {{ 4}, (char*)";\n\0"};
nctemp6952=&nctemp6953;
nctempchar1* nctemp6950= nctemp6952;
int nctemp6954=CodeEs(nctemp6948,nctemp6950);
struct tree* nctemp6956= sp;
nctempchar1* nctemp6958= descr;
int nctemp6961=CodeEs(nctemp6956,nctemp6958);
struct tree* nctemp6963= sp;
struct nctempchar1 *nctemp6967;
static struct nctempchar1 nctemp6968 = {{ 2}, (char*)"=\0"};
nctemp6967=&nctemp6968;
nctempchar1* nctemp6965= nctemp6967;
int nctemp6969=CodeEs(nctemp6963,nctemp6965);
struct tree* nctemp6971= sp;
struct nctempchar1 *nctemp6975;
static struct nctempchar1 nctemp6976 = {{ 3}, (char*)"*(\0"};
nctemp6975=&nctemp6976;
nctempchar1* nctemp6973= nctemp6975;
int nctemp6977=CodeEs(nctemp6971,nctemp6973);
struct tree* nctemp6979= p;
struct nctempchar1 *nctemp6983;
static struct nctempchar1 nctemp6984 = {{ 7}, (char*)"nctemp\0"};
nctemp6983=&nctemp6984;
nctempchar1* nctemp6981= nctemp6983;
int nctemp6985=CodeEs(nctemp6979,nctemp6981);
struct tree* nctemp6987= sp;
nctempchar1* nctemp6989= type;
int nctemp6992=CodeEs(nctemp6987,nctemp6989);
int nctemp6994= rank;
int nctemp6996=CodeEd(nctemp6994);
struct tree* nctemp6998= sp;
struct nctempchar1 *nctemp7002;
static struct nctempchar1 nctemp7003 = {{ 4}, (char*)"*)(\0"};
nctemp7002=&nctemp7003;
nctempchar1* nctemp7000= nctemp7002;
int nctemp7004=CodeEs(nctemp6998,nctemp7000);
struct tree* nctemp7006= sp;
nctempchar1* nctemp7008= expr;
int nctemp7011=CodeEs(nctemp7006,nctemp7008);
struct tree* nctemp7013= sp;
struct nctempchar1 *nctemp7017;
static struct nctempchar1 nctemp7018 = {{ 5}, (char*)");\n\0"};
nctemp7017=&nctemp7018;
nctempchar1* nctemp7015= nctemp7017;
int nctemp7019=CodeEs(nctemp7013,nctemp7015);
p = tp;
i = 0;
int nctemp7020 = (p !=0);
int nctemp7024=nctemp7020;
while(nctemp7024)
{{
struct tree* nctemp7030= p;
nctempchar1* nctemp7032=CodeExpr(nctemp7030);
dim=nctemp7032;
struct tree* nctemp7034= sp;
nctempchar1* nctemp7036= descr;
int nctemp7039=CodeEs(nctemp7034,nctemp7036);
struct tree* nctemp7041= sp;
struct nctempchar1 *nctemp7045;
static struct nctempchar1 nctemp7046 = {{ 3}, (char*)".d\0"};
nctemp7045=&nctemp7046;
nctempchar1* nctemp7043= nctemp7045;
int nctemp7047=CodeEs(nctemp7041,nctemp7043);
struct tree* nctemp7049= sp;
struct nctempchar1 *nctemp7053;
static struct nctempchar1 nctemp7054 = {{ 2}, (char*)"[\0"};
nctemp7053=&nctemp7054;
nctempchar1* nctemp7051= nctemp7053;
int nctemp7055=CodeEs(nctemp7049,nctemp7051);
int nctemp7057= i;
int nctemp7059=CodeEd(nctemp7057);
struct tree* nctemp7061= sp;
struct nctempchar1 *nctemp7065;
static struct nctempchar1 nctemp7066 = {{ 3}, (char*)"]=\0"};
nctemp7065=&nctemp7066;
nctempchar1* nctemp7063= nctemp7065;
int nctemp7067=CodeEs(nctemp7061,nctemp7063);
struct tree* nctemp7069= sp;
nctempchar1* nctemp7071= dim;
int nctemp7074=CodeEs(nctemp7069,nctemp7071);
struct tree* nctemp7076= sp;
struct nctempchar1 *nctemp7080;
static struct nctempchar1 nctemp7081 = {{ 4}, (char*)";\n\0"};
nctemp7080=&nctemp7081;
nctempchar1* nctemp7078= nctemp7080;
int nctemp7082=CodeEs(nctemp7076,nctemp7078);
i = (i + 1);
struct tree* nctemp7087= p;
struct tree* nctemp7089=PtreeMvsister(nctemp7087);
p =nctemp7089;
}
int nctemp7090 = (p !=0);
nctemp7024=nctemp7090;}struct tree* nctemp7095= sp;
nctempchar1* nctemp7097= pointer;
int nctemp7100=CodeEs(nctemp7095,nctemp7097);
struct tree* nctemp7102= sp;
struct nctempchar1 *nctemp7106;
static struct nctempchar1 nctemp7107 = {{ 3}, (char*)"=&\0"};
nctemp7106=&nctemp7107;
nctempchar1* nctemp7104= nctemp7106;
int nctemp7108=CodeEs(nctemp7102,nctemp7104);
struct tree* nctemp7110= sp;
nctempchar1* nctemp7112= descr;
int nctemp7115=CodeEs(nctemp7110,nctemp7112);
struct tree* nctemp7117= sp;
struct nctempchar1 *nctemp7121;
static struct nctempchar1 nctemp7122 = {{ 4}, (char*)";\n\0"};
nctemp7121=&nctemp7122;
nctempchar1* nctemp7119= nctemp7121;
int nctemp7123=CodeEs(nctemp7117,nctemp7119);
}
else{
struct tree* nctemp7125= p;
nctempchar1* nctemp7127= type;
int nctemp7130=CodeEs(nctemp7125,nctemp7127);
struct tree* nctemp7132= p;
struct nctempchar1 *nctemp7136;
static struct nctempchar1 nctemp7137 = {{ 2}, (char*)" \0"};
nctemp7136=&nctemp7137;
nctempchar1* nctemp7134= nctemp7136;
int nctemp7138=CodeEs(nctemp7132,nctemp7134);
struct tree* nctemp7140= p;
nctempchar1* nctemp7142= pointer;
int nctemp7145=CodeEs(nctemp7140,nctemp7142);
struct tree* nctemp7147= p;
struct nctempchar1 *nctemp7151;
static struct nctempchar1 nctemp7152 = {{ 2}, (char*)"=\0"};
nctemp7151=&nctemp7152;
nctempchar1* nctemp7149= nctemp7151;
int nctemp7153=CodeEs(nctemp7147,nctemp7149);
struct tree* nctemp7155= p;
struct nctempchar1 *nctemp7159;
static struct nctempchar1 nctemp7160 = {{ 2}, (char*)"(\0"};
nctemp7159=&nctemp7160;
nctempchar1* nctemp7157= nctemp7159;
int nctemp7161=CodeEs(nctemp7155,nctemp7157);
struct tree* nctemp7163= p;
struct tree* nctemp7167= np;
nctempchar1* nctemp7169=PtreeGetype(nctemp7167);
nctempchar1* nctemp7165= nctemp7169;
int nctemp7170=CodeEs(nctemp7163,nctemp7165);
struct tree* nctemp7172= p;
struct nctempchar1 *nctemp7176;
static struct nctempchar1 nctemp7177 = {{ 3}, (char*)")(\0"};
nctemp7176=&nctemp7177;
nctempchar1* nctemp7174= nctemp7176;
int nctemp7178=CodeEs(nctemp7172,nctemp7174);
struct tree* nctemp7180= p;
nctempchar1* nctemp7182= expr;
int nctemp7185=CodeEs(nctemp7180,nctemp7182);
struct tree* nctemp7187= p;
struct nctempchar1 *nctemp7191;
static struct nctempchar1 nctemp7192 = {{ 5}, (char*)");\n\0"};
nctemp7191=&nctemp7192;
nctempchar1* nctemp7189= nctemp7191;
int nctemp7193=CodeEs(nctemp7187,nctemp7189);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7201= p;
nctempchar1* nctemp7203=PtreeGetname(nctemp7201);
nctempchar1* nctemp7199= nctemp7203;
struct nctempchar1 *nctemp7206;
static struct nctempchar1 nctemp7207 = {{ 11}, (char*)"identifier\0"};
nctemp7206=&nctemp7207;
nctempchar1* nctemp7204= nctemp7206;
int nctemp7208=LibeStrcmp(nctemp7199,nctemp7204);
int nctemp7196 = (nctemp7208 ==1);
if(nctemp7196)
{
struct tree* nctemp7211= p;
nctempchar1* nctemp7213=CodeIdent(nctemp7211);
return nctemp7213;
}
else{
struct tree* nctemp7219= p;
nctempchar1* nctemp7221=PtreeGetname(nctemp7219);
nctempchar1* nctemp7217= nctemp7221;
struct nctempchar1 *nctemp7224;
static struct nctempchar1 nctemp7225 = {{ 4}, (char*)"new\0"};
nctemp7224=&nctemp7225;
nctempchar1* nctemp7222= nctemp7224;
int nctemp7226=LibeStrcmp(nctemp7217,nctemp7222);
int nctemp7214 = (nctemp7226 ==1);
if(nctemp7214)
{
struct tree* nctemp7229= p;
nctempchar1* nctemp7231=CodeNew(nctemp7229);
return nctemp7231;
}
else{
struct tree* nctemp7237= p;
nctempchar1* nctemp7239=PtreeGetname(nctemp7237);
nctempchar1* nctemp7235= nctemp7239;
struct nctempchar1 *nctemp7242;
static struct nctempchar1 nctemp7243 = {{ 7}, (char*)"delete\0"};
nctemp7242=&nctemp7243;
nctempchar1* nctemp7240= nctemp7242;
int nctemp7244=LibeStrcmp(nctemp7235,nctemp7240);
int nctemp7232 = (nctemp7244 ==1);
if(nctemp7232)
{
struct tree* nctemp7247= p;
nctempchar1* nctemp7249=CodeDelete(nctemp7247);
return nctemp7249;
}
else{
struct tree* nctemp7255= p;
nctempchar1* nctemp7257=PtreeGetname(nctemp7255);
nctempchar1* nctemp7253= nctemp7257;
struct nctempchar1 *nctemp7260;
static struct nctempchar1 nctemp7261 = {{ 4}, (char*)"len\0"};
nctemp7260=&nctemp7261;
nctempchar1* nctemp7258= nctemp7260;
int nctemp7262=LibeStrcmp(nctemp7253,nctemp7258);
int nctemp7250 = (nctemp7262 ==1);
if(nctemp7250)
{
struct tree* nctemp7265= p;
nctempchar1* nctemp7267=CodeLen(nctemp7265);
return nctemp7267;
}
else{
struct tree* nctemp7273= p;
nctempchar1* nctemp7275=PtreeGetname(nctemp7273);
nctempchar1* nctemp7271= nctemp7275;
struct nctempchar1 *nctemp7278;
static struct nctempchar1 nctemp7279 = {{ 6}, (char*)"cmplx\0"};
nctemp7278=&nctemp7279;
nctempchar1* nctemp7276= nctemp7278;
int nctemp7280=LibeStrcmp(nctemp7271,nctemp7276);
int nctemp7268 = (nctemp7280 ==1);
if(nctemp7268)
{
struct tree* nctemp7283= p;
nctempchar1* nctemp7285=CodeCmplx(nctemp7283);
return nctemp7285;
}
else{
struct tree* nctemp7291= p;
nctempchar1* nctemp7293=PtreeGetname(nctemp7291);
nctempchar1* nctemp7289= nctemp7293;
struct nctempchar1 *nctemp7296;
static struct nctempchar1 nctemp7297 = {{ 3}, (char*)"im\0"};
nctemp7296=&nctemp7297;
nctempchar1* nctemp7294= nctemp7296;
int nctemp7298=LibeStrcmp(nctemp7289,nctemp7294);
int nctemp7286 = (nctemp7298 ==1);
if(nctemp7286)
{
struct tree* nctemp7301= p;
nctempchar1* nctemp7303=CodeIm(nctemp7301);
return nctemp7303;
}
else{
struct tree* nctemp7309= p;
nctempchar1* nctemp7311=PtreeGetname(nctemp7309);
nctempchar1* nctemp7307= nctemp7311;
struct nctempchar1 *nctemp7314;
static struct nctempchar1 nctemp7315 = {{ 3}, (char*)"re\0"};
nctemp7314=&nctemp7315;
nctempchar1* nctemp7312= nctemp7314;
int nctemp7316=LibeStrcmp(nctemp7307,nctemp7312);
int nctemp7304 = (nctemp7316 ==1);
if(nctemp7304)
{
struct tree* nctemp7319= p;
nctempchar1* nctemp7321=CodeRe(nctemp7319);
return nctemp7321;
}
else{
struct tree* nctemp7327= p;
nctempchar1* nctemp7329=PtreeGetname(nctemp7327);
nctempchar1* nctemp7325= nctemp7329;
struct nctempchar1 *nctemp7332;
static struct nctempchar1 nctemp7333 = {{ 6}, (char*)"fcall\0"};
nctemp7332=&nctemp7333;
nctempchar1* nctemp7330= nctemp7332;
int nctemp7334=LibeStrcmp(nctemp7325,nctemp7330);
int nctemp7322 = (nctemp7334 ==1);
if(nctemp7322)
{
struct tree* nctemp7337= p;
nctempchar1* nctemp7339=CodeFcall(nctemp7337);
return nctemp7339;
}
else{
struct tree* nctemp7345= p;
nctempchar1* nctemp7347=PtreeGetname(nctemp7345);
nctempchar1* nctemp7343= nctemp7347;
struct nctempchar1 *nctemp7350;
static struct nctempchar1 nctemp7351 = {{ 5}, (char*)"cast\0"};
nctemp7350=&nctemp7351;
nctempchar1* nctemp7348= nctemp7350;
int nctemp7352=LibeStrcmp(nctemp7343,nctemp7348);
int nctemp7340 = (nctemp7352 ==1);
if(nctemp7340)
{
struct tree* nctemp7355= p;
nctempchar1* nctemp7357=CodeCast(nctemp7355);
return nctemp7357;
}
else{
struct tree* nctemp7363= p;
nctempchar1* nctemp7365=PtreeGetname(nctemp7363);
nctempchar1* nctemp7361= nctemp7365;
struct nctempchar1 *nctemp7368;
static struct nctempchar1 nctemp7369 = {{ 10}, (char*)"iconstant\0"};
nctemp7368=&nctemp7369;
nctempchar1* nctemp7366= nctemp7368;
int nctemp7370=LibeStrcmp(nctemp7361,nctemp7366);
int nctemp7358 = (nctemp7370 ==1);
if(nctemp7358)
{
struct tree* nctemp7373= p;
nctempchar1* nctemp7375=PtreeGetdef(nctemp7373);
return nctemp7375;
}
else{
struct tree* nctemp7381= p;
nctempchar1* nctemp7383=PtreeGetname(nctemp7381);
nctempchar1* nctemp7379= nctemp7383;
struct nctempchar1 *nctemp7386;
static struct nctempchar1 nctemp7387 = {{ 10}, (char*)"rconstant\0"};
nctemp7386=&nctemp7387;
nctempchar1* nctemp7384= nctemp7386;
int nctemp7388=LibeStrcmp(nctemp7379,nctemp7384);
int nctemp7376 = (nctemp7388 ==1);
if(nctemp7376)
{
struct tree* nctemp7391= p;
nctempchar1* nctemp7393=PtreeGetdef(nctemp7391);
return nctemp7393;
}
else{
struct tree* nctemp7399= p;
nctempchar1* nctemp7401=PtreeGetname(nctemp7399);
nctempchar1* nctemp7397= nctemp7401;
struct nctempchar1 *nctemp7404;
static struct nctempchar1 nctemp7405 = {{ 10}, (char*)"sconstant\0"};
nctemp7404=&nctemp7405;
nctempchar1* nctemp7402= nctemp7404;
int nctemp7406=LibeStrcmp(nctemp7397,nctemp7402);
int nctemp7394 = (nctemp7406 ==1);
if(nctemp7394)
{
struct tree* nctemp7409= p;
nctempchar1* nctemp7411=CodeSconstant(nctemp7409);
return nctemp7411;
}
else{
struct tree* nctemp7413= p;
nctempchar1* nctemp7415=CodeBinexpr(nctemp7413);
return nctemp7415;
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
nctempchar1* nctemp7421=CodeMktemp();
tempr=nctemp7421;
struct tree* nctemp7427= p;
nctempchar1* nctemp7429=PtreeGetname(nctemp7427);
nctempchar1* nctemp7425= nctemp7429;
struct nctempchar1 *nctemp7432;
static struct nctempchar1 nctemp7433 = {{ 7}, (char*)"unexpr\0"};
nctemp7432=&nctemp7433;
nctempchar1* nctemp7430= nctemp7432;
int nctemp7434=LibeStrcmp(nctemp7425,nctemp7430);
int nctemp7422 = (nctemp7434 ==1);
if(nctemp7422)
{
struct tree* nctemp7441= p;
nctempchar1* nctemp7443=PtreeGetype(nctemp7441);
nctempchar1* nctemp7439= nctemp7443;
struct nctempchar1 *nctemp7446;
static struct nctempchar1 nctemp7447 = {{ 8}, (char*)"complex\0"};
nctemp7446=&nctemp7447;
nctempchar1* nctemp7444= nctemp7446;
int nctemp7448=LibeStrcmp(nctemp7439,nctemp7444);
int nctemp7436 = (nctemp7448 ==1);
if(nctemp7436)
{
struct tree* nctemp7457= p;
struct tree* nctemp7459=PtreeMvchild(nctemp7457);
struct tree* nctemp7455= nctemp7459;
nctempchar1* nctemp7460=CodePrimexpr(nctemp7455);
tmp=nctemp7460;
struct tree* nctemp7462= p;
struct nctempchar1 *nctemp7466;
static struct nctempchar1 nctemp7467 = {{ 4}, (char*)";\n\0"};
nctemp7466=&nctemp7467;
nctempchar1* nctemp7464= nctemp7466;
int nctemp7468=CodeEs(nctemp7462,nctemp7464);
struct tree* nctemp7470= p;
nctempchar1* nctemp7472= tempr;
int nctemp7475=CodeEs(nctemp7470,nctemp7472);
struct tree* nctemp7477= p;
struct nctempchar1 *nctemp7481;
static struct nctempchar1 nctemp7482 = {{ 3}, (char*)".r\0"};
nctemp7481=&nctemp7482;
nctempchar1* nctemp7479= nctemp7481;
int nctemp7483=CodeEs(nctemp7477,nctemp7479);
struct tree* nctemp7485= p;
struct nctempchar1 *nctemp7489;
static struct nctempchar1 nctemp7490 = {{ 4}, (char*)"= -\0"};
nctemp7489=&nctemp7490;
nctempchar1* nctemp7487= nctemp7489;
int nctemp7491=CodeEs(nctemp7485,nctemp7487);
struct tree* nctemp7493= p;
nctempchar1* nctemp7495= tmp;
int nctemp7498=CodeEs(nctemp7493,nctemp7495);
struct tree* nctemp7500= p;
struct nctempchar1 *nctemp7504;
static struct nctempchar1 nctemp7505 = {{ 3}, (char*)".r\0"};
nctemp7504=&nctemp7505;
nctempchar1* nctemp7502= nctemp7504;
int nctemp7506=CodeEs(nctemp7500,nctemp7502);
struct tree* nctemp7508= p;
struct nctempchar1 *nctemp7512;
static struct nctempchar1 nctemp7513 = {{ 4}, (char*)";\n\0"};
nctemp7512=&nctemp7513;
nctempchar1* nctemp7510= nctemp7512;
int nctemp7514=CodeEs(nctemp7508,nctemp7510);
struct tree* nctemp7516= p;
nctempchar1* nctemp7518= tempr;
int nctemp7521=CodeEs(nctemp7516,nctemp7518);
struct tree* nctemp7523= p;
struct nctempchar1 *nctemp7527;
static struct nctempchar1 nctemp7528 = {{ 3}, (char*)".i\0"};
nctemp7527=&nctemp7528;
nctempchar1* nctemp7525= nctemp7527;
int nctemp7529=CodeEs(nctemp7523,nctemp7525);
struct tree* nctemp7531= p;
struct nctempchar1 *nctemp7535;
static struct nctempchar1 nctemp7536 = {{ 4}, (char*)"= -\0"};
nctemp7535=&nctemp7536;
nctempchar1* nctemp7533= nctemp7535;
int nctemp7537=CodeEs(nctemp7531,nctemp7533);
struct tree* nctemp7539= p;
nctempchar1* nctemp7541= tmp;
int nctemp7544=CodeEs(nctemp7539,nctemp7541);
struct tree* nctemp7546= p;
struct nctempchar1 *nctemp7550;
static struct nctempchar1 nctemp7551 = {{ 3}, (char*)".i\0"};
nctemp7550=&nctemp7551;
nctempchar1* nctemp7548= nctemp7550;
int nctemp7552=CodeEs(nctemp7546,nctemp7548);
struct tree* nctemp7554= p;
struct nctempchar1 *nctemp7558;
static struct nctempchar1 nctemp7559 = {{ 4}, (char*)";\n\0"};
nctemp7558=&nctemp7559;
nctempchar1* nctemp7556= nctemp7558;
int nctemp7560=CodeEs(nctemp7554,nctemp7556);
return tempr;
}
else{
struct tree* nctemp7570= p;
struct tree* nctemp7572=PtreeMvchild(nctemp7570);
struct tree* nctemp7568= nctemp7572;
nctempchar1* nctemp7573=CodePrimexpr(nctemp7568);
tmp=nctemp7573;
struct tree* nctemp7575= p;
struct tree* nctemp7579= p;
nctempchar1* nctemp7581=PtreeGetype(nctemp7579);
nctempchar1* nctemp7577= nctemp7581;
int nctemp7582=CodeEs(nctemp7575,nctemp7577);
struct tree* nctemp7584= p;
struct nctempchar1 *nctemp7588;
static struct nctempchar1 nctemp7589 = {{ 2}, (char*)" \0"};
nctemp7588=&nctemp7589;
nctempchar1* nctemp7586= nctemp7588;
int nctemp7590=CodeEs(nctemp7584,nctemp7586);
struct tree* nctemp7592= p;
nctempchar1* nctemp7594= tempr;
int nctemp7597=CodeEs(nctemp7592,nctemp7594);
struct tree* nctemp7599= p;
struct nctempchar1 *nctemp7603;
static struct nctempchar1 nctemp7604 = {{ 4}, (char*)"= -\0"};
nctemp7603=&nctemp7604;
nctempchar1* nctemp7601= nctemp7603;
int nctemp7605=CodeEs(nctemp7599,nctemp7601);
struct tree* nctemp7607= p;
nctempchar1* nctemp7609= tmp;
int nctemp7612=CodeEs(nctemp7607,nctemp7609);
struct tree* nctemp7614= p;
struct nctempchar1 *nctemp7618;
static struct nctempchar1 nctemp7619 = {{ 4}, (char*)";\n\0"};
nctemp7618=&nctemp7619;
nctempchar1* nctemp7616= nctemp7618;
int nctemp7620=CodeEs(nctemp7614,nctemp7616);
return tempr;
}
}
else{
struct tree* nctemp7624= p;
nctempchar1* nctemp7626=CodePrimexpr(nctemp7624);
return nctemp7626;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7632= p;
nctempchar1* nctemp7634=PtreeGetype(nctemp7632);
type=nctemp7634;
nctempchar1* nctemp7640=CodeMktemp();
tempr=nctemp7640;
struct tree* nctemp7646= p;
nctempchar1* nctemp7648=PtreeGetdef(nctemp7646);
opr=nctemp7648;
nctempchar1* nctemp7652= type;
struct nctempchar1 *nctemp7657;
static struct nctempchar1 nctemp7658 = {{ 8}, (char*)"complex\0"};
nctemp7657=&nctemp7658;
nctempchar1* nctemp7655= nctemp7657;
int nctemp7659=LibeStrcmp(nctemp7652,nctemp7655);
int nctemp7649 = (nctemp7659 ==1);
if(nctemp7649)
{
nctempchar1* nctemp7667= opr;
struct nctempchar1 *nctemp7672;
static struct nctempchar1 nctemp7673 = {{ 2}, (char*)"+\0"};
nctemp7672=&nctemp7673;
nctempchar1* nctemp7670= nctemp7672;
int nctemp7674=LibeStrcmp(nctemp7667,nctemp7670);
int nctemp7664 = (nctemp7674 ==1);
nctempchar1* nctemp7680= opr;
struct nctempchar1 *nctemp7685;
static struct nctempchar1 nctemp7686 = {{ 2}, (char*)"-\0"};
nctemp7685=&nctemp7686;
nctempchar1* nctemp7683= nctemp7685;
int nctemp7687=LibeStrcmp(nctemp7680,nctemp7683);
int nctemp7677 = (nctemp7687 ==1);
int nctemp7661 = (nctemp7664 || nctemp7677);
if(nctemp7661)
{
struct tree* nctemp7690= p;
nctempchar1* nctemp7692= type;
int nctemp7695=CodeEs(nctemp7690,nctemp7692);
struct tree* nctemp7697= p;
struct nctempchar1 *nctemp7701;
static struct nctempchar1 nctemp7702 = {{ 2}, (char*)" \0"};
nctemp7701=&nctemp7702;
nctempchar1* nctemp7699= nctemp7701;
int nctemp7703=CodeEs(nctemp7697,nctemp7699);
struct tree* nctemp7705= p;
nctempchar1* nctemp7707= tempr;
int nctemp7710=CodeEs(nctemp7705,nctemp7707);
struct tree* nctemp7712= p;
struct nctempchar1 *nctemp7716;
static struct nctempchar1 nctemp7717 = {{ 3}, (char*)".r\0"};
nctemp7716=&nctemp7717;
nctempchar1* nctemp7714= nctemp7716;
int nctemp7718=CodeEs(nctemp7712,nctemp7714);
struct tree* nctemp7720= p;
struct nctempchar1 *nctemp7724;
static struct nctempchar1 nctemp7725 = {{ 4}, (char*)" = \0"};
nctemp7724=&nctemp7725;
nctempchar1* nctemp7722= nctemp7724;
int nctemp7726=CodeEs(nctemp7720,nctemp7722);
struct tree* nctemp7728= p;
nctempchar1* nctemp7730= lval;
int nctemp7733=CodeEs(nctemp7728,nctemp7730);
struct tree* nctemp7735= p;
struct nctempchar1 *nctemp7739;
static struct nctempchar1 nctemp7740 = {{ 3}, (char*)".r\0"};
nctemp7739=&nctemp7740;
nctempchar1* nctemp7737= nctemp7739;
int nctemp7741=CodeEs(nctemp7735,nctemp7737);
struct tree* nctemp7743= p;
struct nctempchar1 *nctemp7747;
static struct nctempchar1 nctemp7748 = {{ 2}, (char*)" \0"};
nctemp7747=&nctemp7748;
nctempchar1* nctemp7745= nctemp7747;
int nctemp7749=CodeEs(nctemp7743,nctemp7745);
struct tree* nctemp7751= p;
struct tree* nctemp7755= p;
nctempchar1* nctemp7757=PtreeGetdef(nctemp7755);
nctempchar1* nctemp7753= nctemp7757;
int nctemp7758=CodeEs(nctemp7751,nctemp7753);
struct tree* nctemp7760= p;
struct nctempchar1 *nctemp7764;
static struct nctempchar1 nctemp7765 = {{ 2}, (char*)" \0"};
nctemp7764=&nctemp7765;
nctempchar1* nctemp7762= nctemp7764;
int nctemp7766=CodeEs(nctemp7760,nctemp7762);
struct tree* nctemp7768= p;
nctempchar1* nctemp7770= rval;
int nctemp7773=CodeEs(nctemp7768,nctemp7770);
struct tree* nctemp7775= p;
struct nctempchar1 *nctemp7779;
static struct nctempchar1 nctemp7780 = {{ 3}, (char*)".r\0"};
nctemp7779=&nctemp7780;
nctempchar1* nctemp7777= nctemp7779;
int nctemp7781=CodeEs(nctemp7775,nctemp7777);
struct tree* nctemp7783= p;
struct nctempchar1 *nctemp7787;
static struct nctempchar1 nctemp7788 = {{ 4}, (char*)";\n\0"};
nctemp7787=&nctemp7788;
nctempchar1* nctemp7785= nctemp7787;
int nctemp7789=CodeEs(nctemp7783,nctemp7785);
struct tree* nctemp7791= p;
nctempchar1* nctemp7793= type;
int nctemp7796=CodeEs(nctemp7791,nctemp7793);
struct tree* nctemp7798= p;
struct nctempchar1 *nctemp7802;
static struct nctempchar1 nctemp7803 = {{ 2}, (char*)" \0"};
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
static struct nctempchar1 nctemp7826 = {{ 4}, (char*)" = \0"};
nctemp7825=&nctemp7826;
nctempchar1* nctemp7823= nctemp7825;
int nctemp7827=CodeEs(nctemp7821,nctemp7823);
struct tree* nctemp7829= p;
nctempchar1* nctemp7831= lval;
int nctemp7834=CodeEs(nctemp7829,nctemp7831);
struct tree* nctemp7836= p;
struct nctempchar1 *nctemp7840;
static struct nctempchar1 nctemp7841 = {{ 3}, (char*)".i\0"};
nctemp7840=&nctemp7841;
nctempchar1* nctemp7838= nctemp7840;
int nctemp7842=CodeEs(nctemp7836,nctemp7838);
struct tree* nctemp7844= p;
struct nctempchar1 *nctemp7848;
static struct nctempchar1 nctemp7849 = {{ 2}, (char*)" \0"};
nctemp7848=&nctemp7849;
nctempchar1* nctemp7846= nctemp7848;
int nctemp7850=CodeEs(nctemp7844,nctemp7846);
struct tree* nctemp7852= p;
struct tree* nctemp7856= p;
nctempchar1* nctemp7858=PtreeGetdef(nctemp7856);
nctempchar1* nctemp7854= nctemp7858;
int nctemp7859=CodeEs(nctemp7852,nctemp7854);
struct tree* nctemp7861= p;
struct nctempchar1 *nctemp7865;
static struct nctempchar1 nctemp7866 = {{ 2}, (char*)" \0"};
nctemp7865=&nctemp7866;
nctempchar1* nctemp7863= nctemp7865;
int nctemp7867=CodeEs(nctemp7861,nctemp7863);
struct tree* nctemp7869= p;
nctempchar1* nctemp7871= rval;
int nctemp7874=CodeEs(nctemp7869,nctemp7871);
struct tree* nctemp7876= p;
struct nctempchar1 *nctemp7880;
static struct nctempchar1 nctemp7881 = {{ 3}, (char*)".i\0"};
nctemp7880=&nctemp7881;
nctempchar1* nctemp7878= nctemp7880;
int nctemp7882=CodeEs(nctemp7876,nctemp7878);
struct tree* nctemp7884= p;
struct nctempchar1 *nctemp7888;
static struct nctempchar1 nctemp7889 = {{ 4}, (char*)";\n\0"};
nctemp7888=&nctemp7889;
nctempchar1* nctemp7886= nctemp7888;
int nctemp7890=CodeEs(nctemp7884,nctemp7886);
}
else{
nctempchar1* nctemp7894= opr;
struct nctempchar1 *nctemp7899;
static struct nctempchar1 nctemp7900 = {{ 2}, (char*)"*\0"};
nctemp7899=&nctemp7900;
nctempchar1* nctemp7897= nctemp7899;
int nctemp7901=LibeStrcmp(nctemp7894,nctemp7897);
int nctemp7891 = (nctemp7901 ==1);
if(nctemp7891)
{
struct tree* nctemp7904= p;
nctempchar1* nctemp7906= type;
int nctemp7909=CodeEs(nctemp7904,nctemp7906);
struct tree* nctemp7911= p;
struct nctempchar1 *nctemp7915;
static struct nctempchar1 nctemp7916 = {{ 2}, (char*)" \0"};
nctemp7915=&nctemp7916;
nctempchar1* nctemp7913= nctemp7915;
int nctemp7917=CodeEs(nctemp7911,nctemp7913);
struct tree* nctemp7919= p;
nctempchar1* nctemp7921= tempr;
int nctemp7924=CodeEs(nctemp7919,nctemp7921);
struct tree* nctemp7926= p;
struct nctempchar1 *nctemp7930;
static struct nctempchar1 nctemp7931 = {{ 3}, (char*)".r\0"};
nctemp7930=&nctemp7931;
nctempchar1* nctemp7928= nctemp7930;
int nctemp7932=CodeEs(nctemp7926,nctemp7928);
struct tree* nctemp7934= p;
struct nctempchar1 *nctemp7938;
static struct nctempchar1 nctemp7939 = {{ 4}, (char*)" = \0"};
nctemp7938=&nctemp7939;
nctempchar1* nctemp7936= nctemp7938;
int nctemp7940=CodeEs(nctemp7934,nctemp7936);
struct tree* nctemp7942= p;
nctempchar1* nctemp7944= lval;
int nctemp7947=CodeEs(nctemp7942,nctemp7944);
struct tree* nctemp7949= p;
struct nctempchar1 *nctemp7953;
static struct nctempchar1 nctemp7954 = {{ 3}, (char*)".r\0"};
nctemp7953=&nctemp7954;
nctempchar1* nctemp7951= nctemp7953;
int nctemp7955=CodeEs(nctemp7949,nctemp7951);
struct tree* nctemp7957= p;
struct nctempchar1 *nctemp7961;
static struct nctempchar1 nctemp7962 = {{ 2}, (char*)"*\0"};
nctemp7961=&nctemp7962;
nctempchar1* nctemp7959= nctemp7961;
int nctemp7963=CodeEs(nctemp7957,nctemp7959);
struct tree* nctemp7965= p;
nctempchar1* nctemp7967= rval;
int nctemp7970=CodeEs(nctemp7965,nctemp7967);
struct tree* nctemp7972= p;
struct nctempchar1 *nctemp7976;
static struct nctempchar1 nctemp7977 = {{ 3}, (char*)".r\0"};
nctemp7976=&nctemp7977;
nctempchar1* nctemp7974= nctemp7976;
int nctemp7978=CodeEs(nctemp7972,nctemp7974);
struct tree* nctemp7980= p;
struct nctempchar1 *nctemp7984;
static struct nctempchar1 nctemp7985 = {{ 2}, (char*)"-\0"};
nctemp7984=&nctemp7985;
nctempchar1* nctemp7982= nctemp7984;
int nctemp7986=CodeEs(nctemp7980,nctemp7982);
struct tree* nctemp7988= p;
nctempchar1* nctemp7990= lval;
int nctemp7993=CodeEs(nctemp7988,nctemp7990);
struct tree* nctemp7995= p;
struct nctempchar1 *nctemp7999;
static struct nctempchar1 nctemp8000 = {{ 3}, (char*)".i\0"};
nctemp7999=&nctemp8000;
nctempchar1* nctemp7997= nctemp7999;
int nctemp8001=CodeEs(nctemp7995,nctemp7997);
struct tree* nctemp8003= p;
struct nctempchar1 *nctemp8007;
static struct nctempchar1 nctemp8008 = {{ 2}, (char*)"*\0"};
nctemp8007=&nctemp8008;
nctempchar1* nctemp8005= nctemp8007;
int nctemp8009=CodeEs(nctemp8003,nctemp8005);
struct tree* nctemp8011= p;
nctempchar1* nctemp8013= rval;
int nctemp8016=CodeEs(nctemp8011,nctemp8013);
struct tree* nctemp8018= p;
struct nctempchar1 *nctemp8022;
static struct nctempchar1 nctemp8023 = {{ 3}, (char*)".i\0"};
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
static struct nctempchar1 nctemp8092 = {{ 2}, (char*)"*\0"};
nctemp8091=&nctemp8092;
nctempchar1* nctemp8089= nctemp8091;
int nctemp8093=CodeEs(nctemp8087,nctemp8089);
struct tree* nctemp8095= p;
nctempchar1* nctemp8097= rval;
int nctemp8100=CodeEs(nctemp8095,nctemp8097);
struct tree* nctemp8102= p;
struct nctempchar1 *nctemp8106;
static struct nctempchar1 nctemp8107 = {{ 3}, (char*)".r\0"};
nctemp8106=&nctemp8107;
nctempchar1* nctemp8104= nctemp8106;
int nctemp8108=CodeEs(nctemp8102,nctemp8104);
struct tree* nctemp8110= p;
struct nctempchar1 *nctemp8114;
static struct nctempchar1 nctemp8115 = {{ 2}, (char*)"+\0"};
nctemp8114=&nctemp8115;
nctempchar1* nctemp8112= nctemp8114;
int nctemp8116=CodeEs(nctemp8110,nctemp8112);
struct tree* nctemp8118= p;
nctempchar1* nctemp8120= lval;
int nctemp8123=CodeEs(nctemp8118,nctemp8120);
struct tree* nctemp8125= p;
struct nctempchar1 *nctemp8129;
static struct nctempchar1 nctemp8130 = {{ 3}, (char*)".r\0"};
nctemp8129=&nctemp8130;
nctempchar1* nctemp8127= nctemp8129;
int nctemp8131=CodeEs(nctemp8125,nctemp8127);
struct tree* nctemp8133= p;
struct nctempchar1 *nctemp8137;
static struct nctempchar1 nctemp8138 = {{ 2}, (char*)"*\0"};
nctemp8137=&nctemp8138;
nctempchar1* nctemp8135= nctemp8137;
int nctemp8139=CodeEs(nctemp8133,nctemp8135);
struct tree* nctemp8141= p;
nctempchar1* nctemp8143= rval;
int nctemp8146=CodeEs(nctemp8141,nctemp8143);
struct tree* nctemp8148= p;
struct nctempchar1 *nctemp8152;
static struct nctempchar1 nctemp8153 = {{ 3}, (char*)".i\0"};
nctemp8152=&nctemp8153;
nctempchar1* nctemp8150= nctemp8152;
int nctemp8154=CodeEs(nctemp8148,nctemp8150);
struct tree* nctemp8156= p;
struct nctempchar1 *nctemp8160;
static struct nctempchar1 nctemp8161 = {{ 4}, (char*)";\n\0"};
nctemp8160=&nctemp8161;
nctempchar1* nctemp8158= nctemp8160;
int nctemp8162=CodeEs(nctemp8156,nctemp8158);
}
else{
nctempchar1* nctemp8166= opr;
struct nctempchar1 *nctemp8171;
static struct nctempchar1 nctemp8172 = {{ 2}, (char*)"/\0"};
nctemp8171=&nctemp8172;
nctempchar1* nctemp8169= nctemp8171;
int nctemp8173=LibeStrcmp(nctemp8166,nctemp8169);
int nctemp8163 = (nctemp8173 ==1);
if(nctemp8163)
{
struct tree* nctemp8176= p;
nctempchar1* nctemp8178= type;
int nctemp8181=CodeEs(nctemp8176,nctemp8178);
struct tree* nctemp8183= p;
struct nctempchar1 *nctemp8187;
static struct nctempchar1 nctemp8188 = {{ 2}, (char*)" \0"};
nctemp8187=&nctemp8188;
nctempchar1* nctemp8185= nctemp8187;
int nctemp8189=CodeEs(nctemp8183,nctemp8185);
struct tree* nctemp8191= p;
nctempchar1* nctemp8193= tempr;
int nctemp8196=CodeEs(nctemp8191,nctemp8193);
struct tree* nctemp8198= p;
struct nctempchar1 *nctemp8202;
static struct nctempchar1 nctemp8203 = {{ 3}, (char*)".r\0"};
nctemp8202=&nctemp8203;
nctempchar1* nctemp8200= nctemp8202;
int nctemp8204=CodeEs(nctemp8198,nctemp8200);
struct tree* nctemp8206= p;
struct nctempchar1 *nctemp8210;
static struct nctempchar1 nctemp8211 = {{ 4}, (char*)" = \0"};
nctemp8210=&nctemp8211;
nctempchar1* nctemp8208= nctemp8210;
int nctemp8212=CodeEs(nctemp8206,nctemp8208);
struct tree* nctemp8214= p;
struct nctempchar1 *nctemp8218;
static struct nctempchar1 nctemp8219 = {{ 2}, (char*)"(\0"};
nctemp8218=&nctemp8219;
nctempchar1* nctemp8216= nctemp8218;
int nctemp8220=CodeEs(nctemp8214,nctemp8216);
struct tree* nctemp8222= p;
nctempchar1* nctemp8224= lval;
int nctemp8227=CodeEs(nctemp8222,nctemp8224);
struct tree* nctemp8229= p;
struct nctempchar1 *nctemp8233;
static struct nctempchar1 nctemp8234 = {{ 3}, (char*)".r\0"};
nctemp8233=&nctemp8234;
nctempchar1* nctemp8231= nctemp8233;
int nctemp8235=CodeEs(nctemp8229,nctemp8231);
struct tree* nctemp8237= p;
struct nctempchar1 *nctemp8241;
static struct nctempchar1 nctemp8242 = {{ 2}, (char*)"*\0"};
nctemp8241=&nctemp8242;
nctempchar1* nctemp8239= nctemp8241;
int nctemp8243=CodeEs(nctemp8237,nctemp8239);
struct tree* nctemp8245= p;
nctempchar1* nctemp8247= rval;
int nctemp8250=CodeEs(nctemp8245,nctemp8247);
struct tree* nctemp8252= p;
struct nctempchar1 *nctemp8256;
static struct nctempchar1 nctemp8257 = {{ 3}, (char*)".r\0"};
nctemp8256=&nctemp8257;
nctempchar1* nctemp8254= nctemp8256;
int nctemp8258=CodeEs(nctemp8252,nctemp8254);
struct tree* nctemp8260= p;
struct nctempchar1 *nctemp8264;
static struct nctempchar1 nctemp8265 = {{ 2}, (char*)"+\0"};
nctemp8264=&nctemp8265;
nctempchar1* nctemp8262= nctemp8264;
int nctemp8266=CodeEs(nctemp8260,nctemp8262);
struct tree* nctemp8268= p;
nctempchar1* nctemp8270= lval;
int nctemp8273=CodeEs(nctemp8268,nctemp8270);
struct tree* nctemp8275= p;
struct nctempchar1 *nctemp8279;
static struct nctempchar1 nctemp8280 = {{ 3}, (char*)".i\0"};
nctemp8279=&nctemp8280;
nctempchar1* nctemp8277= nctemp8279;
int nctemp8281=CodeEs(nctemp8275,nctemp8277);
struct tree* nctemp8283= p;
struct nctempchar1 *nctemp8287;
static struct nctempchar1 nctemp8288 = {{ 2}, (char*)"*\0"};
nctemp8287=&nctemp8288;
nctempchar1* nctemp8285= nctemp8287;
int nctemp8289=CodeEs(nctemp8283,nctemp8285);
struct tree* nctemp8291= p;
nctempchar1* nctemp8293= rval;
int nctemp8296=CodeEs(nctemp8291,nctemp8293);
struct tree* nctemp8298= p;
struct nctempchar1 *nctemp8302;
static struct nctempchar1 nctemp8303 = {{ 3}, (char*)".i\0"};
nctemp8302=&nctemp8303;
nctempchar1* nctemp8300= nctemp8302;
int nctemp8304=CodeEs(nctemp8298,nctemp8300);
struct tree* nctemp8306= p;
struct nctempchar1 *nctemp8310;
static struct nctempchar1 nctemp8311 = {{ 4}, (char*)")/(\0"};
nctemp8310=&nctemp8311;
nctempchar1* nctemp8308= nctemp8310;
int nctemp8312=CodeEs(nctemp8306,nctemp8308);
struct tree* nctemp8314= p;
nctempchar1* nctemp8316= rval;
int nctemp8319=CodeEs(nctemp8314,nctemp8316);
struct tree* nctemp8321= p;
struct nctempchar1 *nctemp8325;
static struct nctempchar1 nctemp8326 = {{ 3}, (char*)".r\0"};
nctemp8325=&nctemp8326;
nctempchar1* nctemp8323= nctemp8325;
int nctemp8327=CodeEs(nctemp8321,nctemp8323);
struct tree* nctemp8329= p;
struct nctempchar1 *nctemp8333;
static struct nctempchar1 nctemp8334 = {{ 2}, (char*)"*\0"};
nctemp8333=&nctemp8334;
nctempchar1* nctemp8331= nctemp8333;
int nctemp8335=CodeEs(nctemp8329,nctemp8331);
struct tree* nctemp8337= p;
nctempchar1* nctemp8339= rval;
int nctemp8342=CodeEs(nctemp8337,nctemp8339);
struct tree* nctemp8344= p;
struct nctempchar1 *nctemp8348;
static struct nctempchar1 nctemp8349 = {{ 3}, (char*)".r\0"};
nctemp8348=&nctemp8349;
nctempchar1* nctemp8346= nctemp8348;
int nctemp8350=CodeEs(nctemp8344,nctemp8346);
struct tree* nctemp8352= p;
struct nctempchar1 *nctemp8356;
static struct nctempchar1 nctemp8357 = {{ 2}, (char*)"+\0"};
nctemp8356=&nctemp8357;
nctempchar1* nctemp8354= nctemp8356;
int nctemp8358=CodeEs(nctemp8352,nctemp8354);
struct tree* nctemp8360= p;
nctempchar1* nctemp8362= rval;
int nctemp8365=CodeEs(nctemp8360,nctemp8362);
struct tree* nctemp8367= p;
struct nctempchar1 *nctemp8371;
static struct nctempchar1 nctemp8372 = {{ 3}, (char*)".i\0"};
nctemp8371=&nctemp8372;
nctempchar1* nctemp8369= nctemp8371;
int nctemp8373=CodeEs(nctemp8367,nctemp8369);
struct tree* nctemp8375= p;
struct nctempchar1 *nctemp8379;
static struct nctempchar1 nctemp8380 = {{ 2}, (char*)"*\0"};
nctemp8379=&nctemp8380;
nctempchar1* nctemp8377= nctemp8379;
int nctemp8381=CodeEs(nctemp8375,nctemp8377);
struct tree* nctemp8383= p;
nctempchar1* nctemp8385= rval;
int nctemp8388=CodeEs(nctemp8383,nctemp8385);
struct tree* nctemp8390= p;
struct nctempchar1 *nctemp8394;
static struct nctempchar1 nctemp8395 = {{ 3}, (char*)".i\0"};
nctemp8394=&nctemp8395;
nctempchar1* nctemp8392= nctemp8394;
int nctemp8396=CodeEs(nctemp8390,nctemp8392);
struct tree* nctemp8398= p;
struct nctempchar1 *nctemp8402;
static struct nctempchar1 nctemp8403 = {{ 5}, (char*)");\n\0"};
nctemp8402=&nctemp8403;
nctempchar1* nctemp8400= nctemp8402;
int nctemp8404=CodeEs(nctemp8398,nctemp8400);
struct tree* nctemp8406= p;
nctempchar1* nctemp8408= type;
int nctemp8411=CodeEs(nctemp8406,nctemp8408);
struct tree* nctemp8413= p;
struct nctempchar1 *nctemp8417;
static struct nctempchar1 nctemp8418 = {{ 2}, (char*)" \0"};
nctemp8417=&nctemp8418;
nctempchar1* nctemp8415= nctemp8417;
int nctemp8419=CodeEs(nctemp8413,nctemp8415);
struct tree* nctemp8421= p;
nctempchar1* nctemp8423= tempr;
int nctemp8426=CodeEs(nctemp8421,nctemp8423);
struct tree* nctemp8428= p;
struct nctempchar1 *nctemp8432;
static struct nctempchar1 nctemp8433 = {{ 3}, (char*)".i\0"};
nctemp8432=&nctemp8433;
nctempchar1* nctemp8430= nctemp8432;
int nctemp8434=CodeEs(nctemp8428,nctemp8430);
struct tree* nctemp8436= p;
struct nctempchar1 *nctemp8440;
static struct nctempchar1 nctemp8441 = {{ 4}, (char*)" = \0"};
nctemp8440=&nctemp8441;
nctempchar1* nctemp8438= nctemp8440;
int nctemp8442=CodeEs(nctemp8436,nctemp8438);
struct tree* nctemp8444= p;
struct nctempchar1 *nctemp8448;
static struct nctempchar1 nctemp8449 = {{ 2}, (char*)"(\0"};
nctemp8448=&nctemp8449;
nctempchar1* nctemp8446= nctemp8448;
int nctemp8450=CodeEs(nctemp8444,nctemp8446);
struct tree* nctemp8452= p;
nctempchar1* nctemp8454= lval;
int nctemp8457=CodeEs(nctemp8452,nctemp8454);
struct tree* nctemp8459= p;
struct nctempchar1 *nctemp8463;
static struct nctempchar1 nctemp8464 = {{ 3}, (char*)".i\0"};
nctemp8463=&nctemp8464;
nctempchar1* nctemp8461= nctemp8463;
int nctemp8465=CodeEs(nctemp8459,nctemp8461);
struct tree* nctemp8467= p;
struct nctempchar1 *nctemp8471;
static struct nctempchar1 nctemp8472 = {{ 2}, (char*)"*\0"};
nctemp8471=&nctemp8472;
nctempchar1* nctemp8469= nctemp8471;
int nctemp8473=CodeEs(nctemp8467,nctemp8469);
struct tree* nctemp8475= p;
nctempchar1* nctemp8477= rval;
int nctemp8480=CodeEs(nctemp8475,nctemp8477);
struct tree* nctemp8482= p;
struct nctempchar1 *nctemp8486;
static struct nctempchar1 nctemp8487 = {{ 3}, (char*)".r\0"};
nctemp8486=&nctemp8487;
nctempchar1* nctemp8484= nctemp8486;
int nctemp8488=CodeEs(nctemp8482,nctemp8484);
struct tree* nctemp8490= p;
struct nctempchar1 *nctemp8494;
static struct nctempchar1 nctemp8495 = {{ 2}, (char*)"-\0"};
nctemp8494=&nctemp8495;
nctempchar1* nctemp8492= nctemp8494;
int nctemp8496=CodeEs(nctemp8490,nctemp8492);
struct tree* nctemp8498= p;
nctempchar1* nctemp8500= lval;
int nctemp8503=CodeEs(nctemp8498,nctemp8500);
struct tree* nctemp8505= p;
struct nctempchar1 *nctemp8509;
static struct nctempchar1 nctemp8510 = {{ 3}, (char*)".r\0"};
nctemp8509=&nctemp8510;
nctempchar1* nctemp8507= nctemp8509;
int nctemp8511=CodeEs(nctemp8505,nctemp8507);
struct tree* nctemp8513= p;
struct nctempchar1 *nctemp8517;
static struct nctempchar1 nctemp8518 = {{ 2}, (char*)"*\0"};
nctemp8517=&nctemp8518;
nctempchar1* nctemp8515= nctemp8517;
int nctemp8519=CodeEs(nctemp8513,nctemp8515);
struct tree* nctemp8521= p;
nctempchar1* nctemp8523= rval;
int nctemp8526=CodeEs(nctemp8521,nctemp8523);
struct tree* nctemp8528= p;
struct nctempchar1 *nctemp8532;
static struct nctempchar1 nctemp8533 = {{ 3}, (char*)".i\0"};
nctemp8532=&nctemp8533;
nctempchar1* nctemp8530= nctemp8532;
int nctemp8534=CodeEs(nctemp8528,nctemp8530);
struct tree* nctemp8536= p;
struct nctempchar1 *nctemp8540;
static struct nctempchar1 nctemp8541 = {{ 4}, (char*)")/(\0"};
nctemp8540=&nctemp8541;
nctempchar1* nctemp8538= nctemp8540;
int nctemp8542=CodeEs(nctemp8536,nctemp8538);
struct tree* nctemp8544= p;
nctempchar1* nctemp8546= rval;
int nctemp8549=CodeEs(nctemp8544,nctemp8546);
struct tree* nctemp8551= p;
struct nctempchar1 *nctemp8555;
static struct nctempchar1 nctemp8556 = {{ 3}, (char*)".r\0"};
nctemp8555=&nctemp8556;
nctempchar1* nctemp8553= nctemp8555;
int nctemp8557=CodeEs(nctemp8551,nctemp8553);
struct tree* nctemp8559= p;
struct nctempchar1 *nctemp8563;
static struct nctempchar1 nctemp8564 = {{ 2}, (char*)"*\0"};
nctemp8563=&nctemp8564;
nctempchar1* nctemp8561= nctemp8563;
int nctemp8565=CodeEs(nctemp8559,nctemp8561);
struct tree* nctemp8567= p;
nctempchar1* nctemp8569= rval;
int nctemp8572=CodeEs(nctemp8567,nctemp8569);
struct tree* nctemp8574= p;
struct nctempchar1 *nctemp8578;
static struct nctempchar1 nctemp8579 = {{ 3}, (char*)".r\0"};
nctemp8578=&nctemp8579;
nctempchar1* nctemp8576= nctemp8578;
int nctemp8580=CodeEs(nctemp8574,nctemp8576);
struct tree* nctemp8582= p;
struct nctempchar1 *nctemp8586;
static struct nctempchar1 nctemp8587 = {{ 2}, (char*)"+\0"};
nctemp8586=&nctemp8587;
nctempchar1* nctemp8584= nctemp8586;
int nctemp8588=CodeEs(nctemp8582,nctemp8584);
struct tree* nctemp8590= p;
nctempchar1* nctemp8592= rval;
int nctemp8595=CodeEs(nctemp8590,nctemp8592);
struct tree* nctemp8597= p;
struct nctempchar1 *nctemp8601;
static struct nctempchar1 nctemp8602 = {{ 3}, (char*)".i\0"};
nctemp8601=&nctemp8602;
nctempchar1* nctemp8599= nctemp8601;
int nctemp8603=CodeEs(nctemp8597,nctemp8599);
struct tree* nctemp8605= p;
struct nctempchar1 *nctemp8609;
static struct nctempchar1 nctemp8610 = {{ 2}, (char*)"*\0"};
nctemp8609=&nctemp8610;
nctempchar1* nctemp8607= nctemp8609;
int nctemp8611=CodeEs(nctemp8605,nctemp8607);
struct tree* nctemp8613= p;
nctempchar1* nctemp8615= rval;
int nctemp8618=CodeEs(nctemp8613,nctemp8615);
struct tree* nctemp8620= p;
struct nctempchar1 *nctemp8624;
static struct nctempchar1 nctemp8625 = {{ 3}, (char*)".i\0"};
nctemp8624=&nctemp8625;
nctempchar1* nctemp8622= nctemp8624;
int nctemp8626=CodeEs(nctemp8620,nctemp8622);
struct tree* nctemp8628= p;
struct nctempchar1 *nctemp8632;
static struct nctempchar1 nctemp8633 = {{ 5}, (char*)");\n\0"};
nctemp8632=&nctemp8633;
nctempchar1* nctemp8630= nctemp8632;
int nctemp8634=CodeEs(nctemp8628,nctemp8630);
}
}
}
}
else{
struct tree* nctemp8636= p;
nctempchar1* nctemp8638= type;
int nctemp8641=CodeEs(nctemp8636,nctemp8638);
struct tree* nctemp8643= p;
struct nctempchar1 *nctemp8647;
static struct nctempchar1 nctemp8648 = {{ 2}, (char*)" \0"};
nctemp8647=&nctemp8648;
nctempchar1* nctemp8645= nctemp8647;
int nctemp8649=CodeEs(nctemp8643,nctemp8645);
struct tree* nctemp8651= p;
nctempchar1* nctemp8653= tempr;
int nctemp8656=CodeEs(nctemp8651,nctemp8653);
struct tree* nctemp8658= p;
struct nctempchar1 *nctemp8662;
static struct nctempchar1 nctemp8663 = {{ 4}, (char*)" = \0"};
nctemp8662=&nctemp8663;
nctempchar1* nctemp8660= nctemp8662;
int nctemp8664=CodeEs(nctemp8658,nctemp8660);
struct tree* nctemp8666= p;
nctempchar1* nctemp8668= lval;
int nctemp8671=CodeEs(nctemp8666,nctemp8668);
struct tree* nctemp8673= p;
struct nctempchar1 *nctemp8677;
static struct nctempchar1 nctemp8678 = {{ 2}, (char*)" \0"};
nctemp8677=&nctemp8678;
nctempchar1* nctemp8675= nctemp8677;
int nctemp8679=CodeEs(nctemp8673,nctemp8675);
struct tree* nctemp8681= p;
struct tree* nctemp8685= p;
nctempchar1* nctemp8687=PtreeGetdef(nctemp8685);
nctempchar1* nctemp8683= nctemp8687;
int nctemp8688=CodeEs(nctemp8681,nctemp8683);
struct tree* nctemp8690= p;
struct nctempchar1 *nctemp8694;
static struct nctempchar1 nctemp8695 = {{ 2}, (char*)" \0"};
nctemp8694=&nctemp8695;
nctempchar1* nctemp8692= nctemp8694;
int nctemp8696=CodeEs(nctemp8690,nctemp8692);
struct tree* nctemp8698= p;
nctempchar1* nctemp8700= rval;
int nctemp8703=CodeEs(nctemp8698,nctemp8700);
struct tree* nctemp8705= p;
struct nctempchar1 *nctemp8709;
static struct nctempchar1 nctemp8710 = {{ 4}, (char*)";\n\0"};
nctemp8709=&nctemp8710;
nctempchar1* nctemp8707= nctemp8709;
int nctemp8711=CodeEs(nctemp8705,nctemp8707);
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
struct tree* nctemp8719= p;
nctempchar1* nctemp8721=PtreeGetname(nctemp8719);
nctempchar1* nctemp8717= nctemp8721;
struct nctempchar1 *nctemp8724;
static struct nctempchar1 nctemp8725 = {{ 8}, (char*)"binexpr\0"};
nctemp8724=&nctemp8725;
nctempchar1* nctemp8722= nctemp8724;
int nctemp8726=LibeStrcmp(nctemp8717,nctemp8722);
int nctemp8714 = (nctemp8726 ==1);
if(nctemp8714)
{
struct tree* nctemp8733= p;
nctempchar1* nctemp8735=PtreeGetype(nctemp8733);
type=nctemp8735;
nctempchar1* nctemp8741=CodeMktemp();
tempr=nctemp8741;
nctempchar1* nctemp8747=CodeMktemp();
tempi=nctemp8747;
struct tree* nctemp8752= p;
struct tree* nctemp8754=PtreeMvchild(nctemp8752);
np =nctemp8754;
struct tree* nctemp8760= np;
nctempchar1* nctemp8762=CodeUnexpr(nctemp8760);
lval=nctemp8762;
struct tree* nctemp8770= np;
struct tree* nctemp8772=PtreeMvsister(nctemp8770);
struct tree* nctemp8768= nctemp8772;
nctempchar1* nctemp8773=CodeUnexpr(nctemp8768);
rval=nctemp8773;
struct tree* nctemp8788= p;
nctempchar1* nctemp8790=PtreeGetdef(nctemp8788);
nctempchar1* nctemp8786= nctemp8790;
struct nctempchar1 *nctemp8793;
static struct nctempchar1 nctemp8794 = {{ 2}, (char*)"+\0"};
nctemp8793=&nctemp8794;
nctempchar1* nctemp8791= nctemp8793;
int nctemp8795=LibeStrcmp(nctemp8786,nctemp8791);
int nctemp8783 = (nctemp8795 ==1);
struct tree* nctemp8803= p;
nctempchar1* nctemp8805=PtreeGetdef(nctemp8803);
nctempchar1* nctemp8801= nctemp8805;
struct nctempchar1 *nctemp8808;
static struct nctempchar1 nctemp8809 = {{ 2}, (char*)"-\0"};
nctemp8808=&nctemp8809;
nctempchar1* nctemp8806= nctemp8808;
int nctemp8810=LibeStrcmp(nctemp8801,nctemp8806);
int nctemp8798 = (nctemp8810 ==1);
int nctemp8780 = (nctemp8783 || nctemp8798);
struct tree* nctemp8818= p;
nctempchar1* nctemp8820=PtreeGetdef(nctemp8818);
nctempchar1* nctemp8816= nctemp8820;
struct nctempchar1 *nctemp8823;
static struct nctempchar1 nctemp8824 = {{ 2}, (char*)"*\0"};
nctemp8823=&nctemp8824;
nctempchar1* nctemp8821= nctemp8823;
int nctemp8825=LibeStrcmp(nctemp8816,nctemp8821);
int nctemp8813 = (nctemp8825 ==1);
int nctemp8777 = (nctemp8780 || nctemp8813);
struct tree* nctemp8833= p;
nctempchar1* nctemp8835=PtreeGetdef(nctemp8833);
nctempchar1* nctemp8831= nctemp8835;
struct nctempchar1 *nctemp8838;
static struct nctempchar1 nctemp8839 = {{ 2}, (char*)"/\0"};
nctemp8838=&nctemp8839;
nctempchar1* nctemp8836= nctemp8838;
int nctemp8840=LibeStrcmp(nctemp8831,nctemp8836);
int nctemp8828 = (nctemp8840 ==1);
int nctemp8774 = (nctemp8777 || nctemp8828);
if(nctemp8774)
{
struct tree* nctemp8843= p;
nctempchar1* nctemp8845= lval;
nctempchar1* nctemp8848= rval;
nctempchar1* nctemp8851=CodeAddexpr(nctemp8843,nctemp8845,nctemp8848);
return nctemp8851;
}
else{
struct tree* nctemp8857= p;
nctempchar1* nctemp8859=PtreeGetdef(nctemp8857);
nctempchar1* nctemp8855= nctemp8859;
struct nctempchar1 *nctemp8862;
static struct nctempchar1 nctemp8863 = {{ 2}, (char*)"=\0"};
nctemp8862=&nctemp8863;
nctempchar1* nctemp8860= nctemp8862;
int nctemp8864=LibeStrcmp(nctemp8855,nctemp8860);
int nctemp8852 = (nctemp8864 ==1);
if(nctemp8852)
{
struct tree* nctemp8877= p;
nctempchar1* nctemp8879=PtreeGetype(nctemp8877);
nctempchar1* nctemp8875= nctemp8879;
struct nctempchar1 *nctemp8882;
static struct nctempchar1 nctemp8883 = {{ 8}, (char*)"complex\0"};
nctemp8882=&nctemp8883;
nctempchar1* nctemp8880= nctemp8882;
int nctemp8884=LibeStrcmp(nctemp8875,nctemp8880);
int nctemp8872 = (nctemp8884 ==1);
struct tree* nctemp8892= p;
nctempchar1* nctemp8894=PtreeGetref(nctemp8892);
nctempchar1* nctemp8890= nctemp8894;
struct nctempchar1 *nctemp8897;
static struct nctempchar1 nctemp8898 = {{ 5}, (char*)"aref\0"};
nctemp8897=&nctemp8898;
nctempchar1* nctemp8895= nctemp8897;
int nctemp8899=LibeStrcmp(nctemp8890,nctemp8895);
int nctemp8887 = (nctemp8899 ==0);
int nctemp8869 = (nctemp8872 && nctemp8887);
struct tree* nctemp8907= p;
nctempchar1* nctemp8909=PtreeGetref(nctemp8907);
nctempchar1* nctemp8905= nctemp8909;
struct nctempchar1 *nctemp8912;
static struct nctempchar1 nctemp8913 = {{ 5}, (char*)"sref\0"};
nctemp8912=&nctemp8913;
nctempchar1* nctemp8910= nctemp8912;
int nctemp8914=LibeStrcmp(nctemp8905,nctemp8910);
int nctemp8902 = (nctemp8914 ==0);
int nctemp8866 = (nctemp8869 && nctemp8902);
if(nctemp8866)
{
struct tree* nctemp8917= p;
nctempchar1* nctemp8919= lval;
int nctemp8922=CodeEs(nctemp8917,nctemp8919);
struct tree* nctemp8924= p;
struct nctempchar1 *nctemp8928;
static struct nctempchar1 nctemp8929 = {{ 4}, (char*)".r \0"};
nctemp8928=&nctemp8929;
nctempchar1* nctemp8926= nctemp8928;
int nctemp8930=CodeEs(nctemp8924,nctemp8926);
struct tree* nctemp8932= p;
struct nctempchar1 *nctemp8936;
static struct nctempchar1 nctemp8937 = {{ 2}, (char*)"=\0"};
nctemp8936=&nctemp8937;
nctempchar1* nctemp8934= nctemp8936;
int nctemp8938=CodeEs(nctemp8932,nctemp8934);
struct tree* nctemp8940= p;
nctempchar1* nctemp8942= rval;
int nctemp8945=CodeEs(nctemp8940,nctemp8942);
struct tree* nctemp8947= p;
struct nctempchar1 *nctemp8951;
static struct nctempchar1 nctemp8952 = {{ 3}, (char*)".r\0"};
nctemp8951=&nctemp8952;
nctempchar1* nctemp8949= nctemp8951;
int nctemp8953=CodeEs(nctemp8947,nctemp8949);
struct tree* nctemp8955= p;
struct nctempchar1 *nctemp8959;
static struct nctempchar1 nctemp8960 = {{ 4}, (char*)";\n\0"};
nctemp8959=&nctemp8960;
nctempchar1* nctemp8957= nctemp8959;
int nctemp8961=CodeEs(nctemp8955,nctemp8957);
struct tree* nctemp8963= p;
nctempchar1* nctemp8965= lval;
int nctemp8968=CodeEs(nctemp8963,nctemp8965);
struct tree* nctemp8970= p;
struct nctempchar1 *nctemp8974;
static struct nctempchar1 nctemp8975 = {{ 3}, (char*)".i\0"};
nctemp8974=&nctemp8975;
nctempchar1* nctemp8972= nctemp8974;
int nctemp8976=CodeEs(nctemp8970,nctemp8972);
struct tree* nctemp8978= p;
struct nctempchar1 *nctemp8982;
static struct nctempchar1 nctemp8983 = {{ 2}, (char*)"=\0"};
nctemp8982=&nctemp8983;
nctempchar1* nctemp8980= nctemp8982;
int nctemp8984=CodeEs(nctemp8978,nctemp8980);
struct tree* nctemp8986= p;
nctempchar1* nctemp8988= rval;
int nctemp8991=CodeEs(nctemp8986,nctemp8988);
struct tree* nctemp8993= p;
struct nctempchar1 *nctemp8997;
static struct nctempchar1 nctemp8998 = {{ 3}, (char*)".i\0"};
nctemp8997=&nctemp8998;
nctempchar1* nctemp8995= nctemp8997;
int nctemp8999=CodeEs(nctemp8993,nctemp8995);
struct tree* nctemp9001= p;
struct nctempchar1 *nctemp9005;
static struct nctempchar1 nctemp9006 = {{ 4}, (char*)";\n\0"};
nctemp9005=&nctemp9006;
nctempchar1* nctemp9003= nctemp9005;
int nctemp9007=CodeEs(nctemp9001,nctemp9003);
return lval;
}
else{
struct tree* nctemp9015= np;
nctempchar1* nctemp9017=PtreeGetref(nctemp9015);
nctempchar1* nctemp9013= nctemp9017;
struct nctempchar1 *nctemp9020;
static struct nctempchar1 nctemp9021 = {{ 5}, (char*)"aref\0"};
nctemp9020=&nctemp9021;
nctempchar1* nctemp9018= nctemp9020;
int nctemp9022=LibeStrcmp(nctemp9013,nctemp9018);
int nctemp9010 = (nctemp9022 ==1);
if(nctemp9010)
{
struct tree* nctemp9031= np;
struct tree* nctemp9033=PtreeMvsister(nctemp9031);
struct tree* nctemp9029= nctemp9033;
nctempchar1* nctemp9034=PtreeGetname(nctemp9029);
nctempchar1* nctemp9027= nctemp9034;
struct nctempchar1 *nctemp9037;
static struct nctempchar1 nctemp9038 = {{ 10}, (char*)"iconstant\0"};
nctemp9037=&nctemp9038;
nctempchar1* nctemp9035= nctemp9037;
int nctemp9039=LibeStrcmp(nctemp9027,nctemp9035);
struct tree* nctemp9045= np;
struct tree* nctemp9047=PtreeMvsister(nctemp9045);
struct tree* nctemp9043= nctemp9047;
nctempchar1* nctemp9048=PtreeGetdef(nctemp9043);
nctempchar1* nctemp9041= nctemp9048;
struct nctempchar1 *nctemp9051;
static struct nctempchar1 nctemp9052 = {{ 2}, (char*)"0\0"};
nctemp9051=&nctemp9052;
nctempchar1* nctemp9049= nctemp9051;
int nctemp9053=LibeStrcmp(nctemp9041,nctemp9049);
int nctemp9024 = (nctemp9039 && nctemp9053);
if(nctemp9024)
{
struct tree* nctemp9055= p;
nctempchar1* nctemp9057= lval;
int nctemp9060=CodeEs(nctemp9055,nctemp9057);
struct tree* nctemp9062= p;
struct nctempchar1 *nctemp9066;
static struct nctempchar1 nctemp9067 = {{ 3}, (char*)"=(\0"};
nctemp9066=&nctemp9067;
nctempchar1* nctemp9064= nctemp9066;
int nctemp9068=CodeEs(nctemp9062,nctemp9064);
struct tree* nctemp9070= p;
nctempchar1* nctemp9072= rval;
int nctemp9075=CodeEs(nctemp9070,nctemp9072);
struct tree* nctemp9077= p;
struct nctempchar1 *nctemp9081;
static struct nctempchar1 nctemp9082 = {{ 5}, (char*)");\n\0"};
nctemp9081=&nctemp9082;
nctempchar1* nctemp9079= nctemp9081;
int nctemp9083=CodeEs(nctemp9077,nctemp9079);
return lval;
}
else{
struct tree* nctemp9087= p;
nctempchar1* nctemp9089= lval;
int nctemp9092=CodeEs(nctemp9087,nctemp9089);
struct tree* nctemp9094= p;
struct nctempchar1 *nctemp9098;
static struct nctempchar1 nctemp9099 = {{ 2}, (char*)"=\0"};
nctemp9098=&nctemp9099;
nctempchar1* nctemp9096= nctemp9098;
int nctemp9100=CodeEs(nctemp9094,nctemp9096);
struct tree* nctemp9102= p;
nctempchar1* nctemp9104= rval;
int nctemp9107=CodeEs(nctemp9102,nctemp9104);
struct tree* nctemp9109= p;
struct nctempchar1 *nctemp9113;
static struct nctempchar1 nctemp9114 = {{ 4}, (char*)";\n\0"};
nctemp9113=&nctemp9114;
nctempchar1* nctemp9111= nctemp9113;
int nctemp9115=CodeEs(nctemp9109,nctemp9111);
return lval;
}
}
else{
struct tree* nctemp9119= p;
nctempchar1* nctemp9121= lval;
int nctemp9124=CodeEs(nctemp9119,nctemp9121);
struct tree* nctemp9126= p;
struct nctempchar1 *nctemp9130;
static struct nctempchar1 nctemp9131 = {{ 2}, (char*)" \0"};
nctemp9130=&nctemp9131;
nctempchar1* nctemp9128= nctemp9130;
int nctemp9132=CodeEs(nctemp9126,nctemp9128);
struct tree* nctemp9134= p;
struct nctempchar1 *nctemp9138;
static struct nctempchar1 nctemp9139 = {{ 2}, (char*)"=\0"};
nctemp9138=&nctemp9139;
nctempchar1* nctemp9136= nctemp9138;
int nctemp9140=CodeEs(nctemp9134,nctemp9136);
struct tree* nctemp9142= p;
nctempchar1* nctemp9144= rval;
int nctemp9147=CodeEs(nctemp9142,nctemp9144);
struct tree* nctemp9149= p;
struct nctempchar1 *nctemp9153;
static struct nctempchar1 nctemp9154 = {{ 4}, (char*)";\n\0"};
nctemp9153=&nctemp9154;
nctempchar1* nctemp9151= nctemp9153;
int nctemp9155=CodeEs(nctemp9149,nctemp9151);
return lval;
}
}
}
else{
struct tree* nctemp9166= p;
nctempchar1* nctemp9168=PtreeGetdef(nctemp9166);
nctempchar1* nctemp9164= nctemp9168;
struct nctempchar1 *nctemp9171;
static struct nctempchar1 nctemp9172 = {{ 3}, (char*)"==\0"};
nctemp9171=&nctemp9172;
nctempchar1* nctemp9169= nctemp9171;
int nctemp9173=LibeStrcmp(nctemp9164,nctemp9169);
int nctemp9161 = (nctemp9173 ==1);
struct tree* nctemp9181= p;
nctempchar1* nctemp9183=PtreeGetdef(nctemp9181);
nctempchar1* nctemp9179= nctemp9183;
struct nctempchar1 *nctemp9186;
static struct nctempchar1 nctemp9187 = {{ 3}, (char*)"!=\0"};
nctemp9186=&nctemp9187;
nctempchar1* nctemp9184= nctemp9186;
int nctemp9188=LibeStrcmp(nctemp9179,nctemp9184);
int nctemp9176 = (nctemp9188 ==1);
int nctemp9158 = (nctemp9161 || nctemp9176);
if(nctemp9158)
{
struct tree* nctemp9195= np;
nctempchar1* nctemp9197=PtreeGetref(nctemp9195);
nctempchar1* nctemp9193= nctemp9197;
struct nctempchar1 *nctemp9200;
static struct nctempchar1 nctemp9201 = {{ 5}, (char*)"aref\0"};
nctemp9200=&nctemp9201;
nctempchar1* nctemp9198= nctemp9200;
int nctemp9202=LibeStrcmp(nctemp9193,nctemp9198);
int nctemp9190 = (nctemp9202 ==1);
if(nctemp9190)
{
sp = np;
struct tree* nctemp9211= np;
struct tree* nctemp9213=PtreeMvsister(nctemp9211);
struct tree* nctemp9209= nctemp9213;
nctempchar1* nctemp9214=PtreeGetname(nctemp9209);
nctempchar1* nctemp9207= nctemp9214;
struct nctempchar1 *nctemp9217;
static struct nctempchar1 nctemp9218 = {{ 10}, (char*)"iconstant\0"};
nctemp9217=&nctemp9218;
nctempchar1* nctemp9215= nctemp9217;
int nctemp9219=LibeStrcmp(nctemp9207,nctemp9215);
struct tree* nctemp9225= np;
struct tree* nctemp9227=PtreeMvsister(nctemp9225);
struct tree* nctemp9223= nctemp9227;
nctempchar1* nctemp9228=PtreeGetdef(nctemp9223);
nctempchar1* nctemp9221= nctemp9228;
struct nctempchar1 *nctemp9231;
static struct nctempchar1 nctemp9232 = {{ 2}, (char*)"0\0"};
nctemp9231=&nctemp9232;
nctempchar1* nctemp9229= nctemp9231;
int nctemp9233=LibeStrcmp(nctemp9221,nctemp9229);
int nctemp9204 = (nctemp9219 && nctemp9233);
if(nctemp9204)
{
struct tree* nctemp9235= p;
struct nctempchar1 *nctemp9239;
static struct nctempchar1 nctemp9240 = {{ 7}, (char*)"nctemp\0"};
nctemp9239=&nctemp9240;
nctempchar1* nctemp9237= nctemp9239;
int nctemp9241=CodeEs(nctemp9235,nctemp9237);
struct tree* nctemp9243= p;
struct tree* nctemp9247= sp;
nctempchar1* nctemp9249=PtreeGetype(nctemp9247);
nctempchar1* nctemp9245= nctemp9249;
int nctemp9250=CodeEs(nctemp9243,nctemp9245);
struct tree* nctemp9254= sp;
int nctemp9256=PtreeGetrank(nctemp9254);
int nctemp9252= nctemp9256;
int nctemp9257=CodeEd(nctemp9252);
struct tree* nctemp9259= p;
struct nctempchar1 *nctemp9263;
static struct nctempchar1 nctemp9264 = {{ 3}, (char*)" *\0"};
nctemp9263=&nctemp9264;
nctempchar1* nctemp9261= nctemp9263;
int nctemp9265=CodeEs(nctemp9259,nctemp9261);
struct tree* nctemp9267= p;
nctempchar1* nctemp9269= tempi;
int nctemp9272=CodeEs(nctemp9267,nctemp9269);
struct tree* nctemp9274= p;
struct nctempchar1 *nctemp9278;
static struct nctempchar1 nctemp9279 = {{ 3}, (char*)" =\0"};
nctemp9278=&nctemp9279;
nctempchar1* nctemp9276= nctemp9278;
int nctemp9280=CodeEs(nctemp9274,nctemp9276);
struct tree* nctemp9282= p;
nctempchar1* nctemp9284= lval;
int nctemp9287=CodeEs(nctemp9282,nctemp9284);
struct tree* nctemp9289= p;
struct nctempchar1 *nctemp9293;
static struct nctempchar1 nctemp9294 = {{ 4}, (char*)";\n\0"};
nctemp9293=&nctemp9294;
nctempchar1* nctemp9291= nctemp9293;
int nctemp9295=CodeEs(nctemp9289,nctemp9291);
struct tree* nctemp9297= p;
nctempchar1* nctemp9299= type;
int nctemp9302=CodeEs(nctemp9297,nctemp9299);
struct tree* nctemp9304= p;
struct nctempchar1 *nctemp9308;
static struct nctempchar1 nctemp9309 = {{ 2}, (char*)" \0"};
nctemp9308=&nctemp9309;
nctempchar1* nctemp9306= nctemp9308;
int nctemp9310=CodeEs(nctemp9304,nctemp9306);
struct tree* nctemp9312= p;
nctempchar1* nctemp9314= tempr;
int nctemp9317=CodeEs(nctemp9312,nctemp9314);
struct tree* nctemp9319= p;
struct nctempchar1 *nctemp9323;
static struct nctempchar1 nctemp9324 = {{ 4}, (char*)" =(\0"};
nctemp9323=&nctemp9324;
nctempchar1* nctemp9321= nctemp9323;
int nctemp9325=CodeEs(nctemp9319,nctemp9321);
struct tree* nctemp9327= p;
nctempchar1* nctemp9329= tempi;
int nctemp9332=CodeEs(nctemp9327,nctemp9329);
struct tree* nctemp9334= p;
struct tree* nctemp9338= p;
nctempchar1* nctemp9340=PtreeGetdef(nctemp9338);
nctempchar1* nctemp9336= nctemp9340;
int nctemp9341=CodeEs(nctemp9334,nctemp9336);
struct tree* nctemp9343= p;
nctempchar1* nctemp9345= rval;
int nctemp9348=CodeEs(nctemp9343,nctemp9345);
struct tree* nctemp9350= p;
struct nctempchar1 *nctemp9354;
static struct nctempchar1 nctemp9355 = {{ 5}, (char*)");\n\0"};
nctemp9354=&nctemp9355;
nctempchar1* nctemp9352= nctemp9354;
int nctemp9356=CodeEs(nctemp9350,nctemp9352);
return tempr;
}
else{
struct tree* nctemp9360= p;
nctempchar1* nctemp9362= type;
int nctemp9365=CodeEs(nctemp9360,nctemp9362);
struct tree* nctemp9367= p;
struct nctempchar1 *nctemp9371;
static struct nctempchar1 nctemp9372 = {{ 2}, (char*)" \0"};
nctemp9371=&nctemp9372;
nctempchar1* nctemp9369= nctemp9371;
int nctemp9373=CodeEs(nctemp9367,nctemp9369);
struct tree* nctemp9375= p;
nctempchar1* nctemp9377= tempr;
int nctemp9380=CodeEs(nctemp9375,nctemp9377);
struct tree* nctemp9382= p;
struct nctempchar1 *nctemp9386;
static struct nctempchar1 nctemp9387 = {{ 5}, (char*)" = (\0"};
nctemp9386=&nctemp9387;
nctempchar1* nctemp9384= nctemp9386;
int nctemp9388=CodeEs(nctemp9382,nctemp9384);
struct tree* nctemp9390= p;
nctempchar1* nctemp9392= lval;
int nctemp9395=CodeEs(nctemp9390,nctemp9392);
struct tree* nctemp9397= p;
struct tree* nctemp9401= p;
nctempchar1* nctemp9403=PtreeGetdef(nctemp9401);
nctempchar1* nctemp9399= nctemp9403;
int nctemp9404=CodeEs(nctemp9397,nctemp9399);
struct tree* nctemp9406= p;
nctempchar1* nctemp9408= rval;
int nctemp9411=CodeEs(nctemp9406,nctemp9408);
struct tree* nctemp9413= p;
struct nctempchar1 *nctemp9417;
static struct nctempchar1 nctemp9418 = {{ 5}, (char*)");\n\0"};
nctemp9417=&nctemp9418;
nctempchar1* nctemp9415= nctemp9417;
int nctemp9419=CodeEs(nctemp9413,nctemp9415);
return lval;
}
}
else{
struct tree* nctemp9423= p;
nctempchar1* nctemp9425= type;
int nctemp9428=CodeEs(nctemp9423,nctemp9425);
struct tree* nctemp9430= p;
struct nctempchar1 *nctemp9434;
static struct nctempchar1 nctemp9435 = {{ 2}, (char*)" \0"};
nctemp9434=&nctemp9435;
nctempchar1* nctemp9432= nctemp9434;
int nctemp9436=CodeEs(nctemp9430,nctemp9432);
struct tree* nctemp9438= p;
nctempchar1* nctemp9440= tempr;
int nctemp9443=CodeEs(nctemp9438,nctemp9440);
struct tree* nctemp9445= p;
struct nctempchar1 *nctemp9449;
static struct nctempchar1 nctemp9450 = {{ 5}, (char*)" = (\0"};
nctemp9449=&nctemp9450;
nctempchar1* nctemp9447= nctemp9449;
int nctemp9451=CodeEs(nctemp9445,nctemp9447);
struct tree* nctemp9453= p;
nctempchar1* nctemp9455= lval;
int nctemp9458=CodeEs(nctemp9453,nctemp9455);
struct tree* nctemp9460= p;
struct nctempchar1 *nctemp9464;
static struct nctempchar1 nctemp9465 = {{ 2}, (char*)" \0"};
nctemp9464=&nctemp9465;
nctempchar1* nctemp9462= nctemp9464;
int nctemp9466=CodeEs(nctemp9460,nctemp9462);
struct tree* nctemp9468= p;
struct tree* nctemp9472= p;
nctempchar1* nctemp9474=PtreeGetdef(nctemp9472);
nctempchar1* nctemp9470= nctemp9474;
int nctemp9475=CodeEs(nctemp9468,nctemp9470);
struct tree* nctemp9477= p;
nctempchar1* nctemp9479= rval;
int nctemp9482=CodeEs(nctemp9477,nctemp9479);
struct tree* nctemp9484= p;
struct nctempchar1 *nctemp9488;
static struct nctempchar1 nctemp9489 = {{ 5}, (char*)");\n\0"};
nctemp9488=&nctemp9489;
nctempchar1* nctemp9486= nctemp9488;
int nctemp9490=CodeEs(nctemp9484,nctemp9486);
return tempr;
}
}
else{
struct tree* nctemp9494= p;
nctempchar1* nctemp9496= type;
int nctemp9499=CodeEs(nctemp9494,nctemp9496);
struct tree* nctemp9501= p;
struct nctempchar1 *nctemp9505;
static struct nctempchar1 nctemp9506 = {{ 2}, (char*)" \0"};
nctemp9505=&nctemp9506;
nctempchar1* nctemp9503= nctemp9505;
int nctemp9507=CodeEs(nctemp9501,nctemp9503);
struct tree* nctemp9509= p;
nctempchar1* nctemp9511= tempr;
int nctemp9514=CodeEs(nctemp9509,nctemp9511);
struct tree* nctemp9516= p;
struct nctempchar1 *nctemp9520;
static struct nctempchar1 nctemp9521 = {{ 5}, (char*)" = (\0"};
nctemp9520=&nctemp9521;
nctempchar1* nctemp9518= nctemp9520;
int nctemp9522=CodeEs(nctemp9516,nctemp9518);
struct tree* nctemp9524= p;
nctempchar1* nctemp9526= lval;
int nctemp9529=CodeEs(nctemp9524,nctemp9526);
struct tree* nctemp9531= p;
struct nctempchar1 *nctemp9535;
static struct nctempchar1 nctemp9536 = {{ 2}, (char*)" \0"};
nctemp9535=&nctemp9536;
nctempchar1* nctemp9533= nctemp9535;
int nctemp9537=CodeEs(nctemp9531,nctemp9533);
struct tree* nctemp9539= p;
struct tree* nctemp9543= p;
nctempchar1* nctemp9545=PtreeGetdef(nctemp9543);
nctempchar1* nctemp9541= nctemp9545;
int nctemp9546=CodeEs(nctemp9539,nctemp9541);
struct tree* nctemp9548= p;
struct nctempchar1 *nctemp9552;
static struct nctempchar1 nctemp9553 = {{ 2}, (char*)" \0"};
nctemp9552=&nctemp9553;
nctempchar1* nctemp9550= nctemp9552;
int nctemp9554=CodeEs(nctemp9548,nctemp9550);
struct tree* nctemp9556= p;
nctempchar1* nctemp9558= rval;
int nctemp9561=CodeEs(nctemp9556,nctemp9558);
struct tree* nctemp9563= p;
struct nctempchar1 *nctemp9567;
static struct nctempchar1 nctemp9568 = {{ 5}, (char*)");\n\0"};
nctemp9567=&nctemp9568;
nctempchar1* nctemp9565= nctemp9567;
int nctemp9569=CodeEs(nctemp9563,nctemp9565);
return tempr;
}
}
}
}
else{
struct tree* nctemp9573= p;
nctempchar1* nctemp9575=CodeUnexpr(nctemp9573);
return nctemp9575;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9577= p;
nctempchar1* nctemp9579= name;
int nctemp9582=CodeEs(nctemp9577,nctemp9579);
struct tree* nctemp9584= p;
struct nctempchar1 *nctemp9588;
static struct nctempchar1 nctemp9589 = {{ 5}, (char*)"->d[\0"};
nctemp9588=&nctemp9589;
nctempchar1* nctemp9586= nctemp9588;
int nctemp9590=CodeEs(nctemp9584,nctemp9586);
int nctemp9592= j;
int nctemp9594=CodeEd(nctemp9592);
struct tree* nctemp9596= p;
struct nctempchar1 *nctemp9600;
static struct nctempchar1 nctemp9601 = {{ 2}, (char*)"]\0"};
nctemp9600=&nctemp9601;
nctempchar1* nctemp9598= nctemp9600;
int nctemp9602=CodeEs(nctemp9596,nctemp9598);
struct tree* nctemp9604= p;
struct nctempchar1 *nctemp9608;
static struct nctempchar1 nctemp9609 = {{ 2}, (char*)"*\0"};
nctemp9608=&nctemp9609;
nctempchar1* nctemp9606= nctemp9608;
int nctemp9610=CodeEs(nctemp9604,nctemp9606);
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
struct tree* nctemp9617= p;
nctempchar1* nctemp9619=PtreeGetdef(nctemp9617);
name=nctemp9619;
nctempchar1* nctemp9624= name;
struct symbol* nctemp9627=SymLook(nctemp9624);
tp =nctemp9627;
int nctemp9628 = (tp ==0);
if(nctemp9628)
{
nctempchar1* nctemp9633= name;
int nctemp9636=CodeError(nctemp9633);
}
struct symbol* nctemp9641= tp;
int nctemp9643=SymGetrank(nctemp9641);
rank =nctemp9643;
struct tree* nctemp9648= p;
struct tree* nctemp9650=PtreeMvchild(nctemp9648);
sp =nctemp9650;
int nctemp9651 = (sp ==0);
if(nctemp9651)
{
struct tree* nctemp9656= p;
struct tree* nctemp9660= p;
nctempchar1* nctemp9662=PtreeGetdef(nctemp9660);
nctempchar1* nctemp9658= nctemp9662;
int nctemp9663=CodeEs(nctemp9656,nctemp9658);
return 1;
}
else{
struct tree* nctemp9670= sp;
nctempchar1* nctemp9672=PtreeGetname(nctemp9670);
nctempchar1* nctemp9668= nctemp9672;
struct nctempchar1 *nctemp9675;
static struct nctempchar1 nctemp9676 = {{ 9}, (char*)"exprlist\0"};
nctemp9675=&nctemp9676;
nctempchar1* nctemp9673= nctemp9675;
int nctemp9677=LibeStrcmp(nctemp9668,nctemp9673);
int nctemp9665 = (nctemp9677 ==0);
if(nctemp9665)
{
struct tree* nctemp9680= p;
struct tree* nctemp9684= p;
nctempchar1* nctemp9686=PtreeGetdef(nctemp9684);
nctempchar1* nctemp9682= nctemp9686;
int nctemp9687=CodeEs(nctemp9680,nctemp9682);
return 1;
}
}
p = sp;
struct tree* nctemp9693= p;
struct tree* nctemp9695=PtreeMvchild(nctemp9693);
p =nctemp9695;
struct tree* nctemp9697= p;
nctempchar1* nctemp9699= name;
int nctemp9702=CodeEs(nctemp9697,nctemp9699);
struct tree* nctemp9704= p;
struct nctempchar1 *nctemp9708;
static struct nctempchar1 nctemp9709 = {{ 4}, (char*)"->a\0"};
nctemp9708=&nctemp9709;
nctempchar1* nctemp9706= nctemp9708;
int nctemp9710=CodeEs(nctemp9704,nctemp9706);
struct tree* nctemp9712= p;
struct nctempchar1 *nctemp9716;
static struct nctempchar1 nctemp9717 = {{ 2}, (char*)"[\0"};
nctemp9716=&nctemp9717;
nctempchar1* nctemp9714= nctemp9716;
int nctemp9718=CodeEs(nctemp9712,nctemp9714);
q = p;
nctempchar1 *nctemp9720 =qname;
int nctemp9719 =(nctemp9720!=0);
if(nctemp9719)
{
nctempchar1* nctemp9729= qname;
nctempchar1* nctemp9732= name;
nctempchar1* nctemp9735=LibeStradd(nctemp9729,nctemp9732);
qname=nctemp9735;
}
else{
nctempchar1* nctemp9741= name;
nctempchar1* nctemp9744=LibeStrsave(nctemp9741);
qname=nctemp9744;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9745 = (i ==0);
if(nctemp9745)
{
struct tree* nctemp9750= q;
int nctemp9752=CodeSexpr(nctemp9750);
}
else{
struct tree* nctemp9757= q;
struct tree* nctemp9759=PtreeMvsister(nctemp9757);
q =nctemp9759;
struct tree* nctemp9761= p;
struct nctempchar1 *nctemp9765;
static struct nctempchar1 nctemp9766 = {{ 2}, (char*)"+\0"};
nctemp9765=&nctemp9766;
nctempchar1* nctemp9763= nctemp9765;
int nctemp9767=CodeEs(nctemp9761,nctemp9763);
struct tree* nctemp9769= p;
nctempchar1* nctemp9771= qname;
int nctemp9779 = i + 1;
int nctemp9774= nctemp9779;
int nctemp9780=CodeDimprod(nctemp9769,nctemp9771,nctemp9774);
struct tree* nctemp9782= p;
struct nctempchar1 *nctemp9786;
static struct nctempchar1 nctemp9787 = {{ 2}, (char*)"(\0"};
nctemp9786=&nctemp9787;
nctempchar1* nctemp9784= nctemp9786;
int nctemp9788=CodeEs(nctemp9782,nctemp9784);
struct tree* nctemp9790= q;
int nctemp9792=CodeSexpr(nctemp9790);
struct tree* nctemp9794= p;
struct nctempchar1 *nctemp9798;
static struct nctempchar1 nctemp9799 = {{ 2}, (char*)")\0"};
nctemp9798=&nctemp9799;
nctempchar1* nctemp9796= nctemp9798;
int nctemp9800=CodeEs(nctemp9794,nctemp9796);
}
}
struct tree* nctemp9802= p;
struct nctempchar1 *nctemp9806;
static struct nctempchar1 nctemp9807 = {{ 2}, (char*)"]\0"};
nctemp9806=&nctemp9807;
nctempchar1* nctemp9804= nctemp9806;
int nctemp9808=CodeEs(nctemp9802,nctemp9804);
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
struct tree* nctemp9818= p;
nctempchar1* nctemp9820=PtreeGetarray(nctemp9818);
nctempchar1* nctemp9816= nctemp9820;
struct nctempchar1 *nctemp9823;
static struct nctempchar1 nctemp9824 = {{ 6}, (char*)"array\0"};
nctemp9823=&nctemp9824;
nctempchar1* nctemp9821= nctemp9823;
int nctemp9825=LibeStrcmp(nctemp9816,nctemp9821);
int nctemp9813 = (nctemp9825 ==1);
if(nctemp9813)
{
struct tree* nctemp9828= p;
nctempchar1* nctemp9830= qname;
int nctemp9833=CodeSarray(nctemp9828,nctemp9830);
struct tree* nctemp9838= p;
struct tree* nctemp9840=PtreeMvchild(nctemp9838);
np =nctemp9840;
int nctemp9841 = (np ==0);
if(nctemp9841)
{
return 1;
}
struct tree* nctemp9850= np;
struct tree* nctemp9852=PtreeMvsister(nctemp9850);
sp =nctemp9852;
int nctemp9853 = (sp ==0);
if(nctemp9853)
{
return 1;
}
struct tree* nctemp9859= p;
struct nctempchar1 *nctemp9863;
static struct nctempchar1 nctemp9864 = {{ 2}, (char*)".\0"};
nctemp9863=&nctemp9864;
nctempchar1* nctemp9861= nctemp9863;
int nctemp9865=CodeEs(nctemp9859,nctemp9861);
struct tree* nctemp9873= p;
nctempchar1* nctemp9875=PtreeGetdef(nctemp9873);
nctempchar1* nctemp9871= nctemp9875;
struct nctempchar1 *nctemp9878;
static struct nctempchar1 nctemp9879 = {{ 2}, (char*)".\0"};
nctemp9878=&nctemp9879;
nctempchar1* nctemp9876= nctemp9878;
nctempchar1* nctemp9880=LibeStradd(nctemp9871,nctemp9876);
qname=nctemp9880;
}
else{
struct tree* nctemp9882= p;
struct tree* nctemp9886= p;
nctempchar1* nctemp9888=PtreeGetdef(nctemp9886);
nctempchar1* nctemp9884= nctemp9888;
int nctemp9889=CodeEs(nctemp9882,nctemp9884);
struct tree* nctemp9897= p;
nctempchar1* nctemp9899=PtreeGetdef(nctemp9897);
nctempchar1* nctemp9895= nctemp9899;
struct nctempchar1 *nctemp9902;
static struct nctempchar1 nctemp9903 = {{ 3}, (char*)"->\0"};
nctemp9902=&nctemp9903;
nctempchar1* nctemp9900= nctemp9902;
nctempchar1* nctemp9904=LibeStradd(nctemp9895,nctemp9900);
qname=nctemp9904;
struct tree* nctemp9909= p;
struct tree* nctemp9911=PtreeMvchild(nctemp9909);
sp =nctemp9911;
int nctemp9912 = (sp ==0);
if(nctemp9912)
{
return 1;
}
struct tree* nctemp9918= p;
struct nctempchar1 *nctemp9922;
static struct nctempchar1 nctemp9923 = {{ 3}, (char*)"->\0"};
nctemp9922=&nctemp9923;
nctempchar1* nctemp9920= nctemp9922;
int nctemp9924=CodeEs(nctemp9918,nctemp9920);
}
struct tree* nctemp9930= sp;
nctempchar1* nctemp9932=PtreeGetarray(nctemp9930);
nctempchar1* nctemp9928= nctemp9932;
struct nctempchar1 *nctemp9935;
static struct nctempchar1 nctemp9936 = {{ 6}, (char*)"array\0"};
nctemp9935=&nctemp9936;
nctempchar1* nctemp9933= nctemp9935;
int nctemp9937=LibeStrcmp(nctemp9928,nctemp9933);
int nctemp9925 = (nctemp9937 ==1);
if(nctemp9925)
{
struct symbol* nctemp9943=SymGetltp();
tp =nctemp9943;
struct symbol* nctemp9948=SymGetetp();
up =nctemp9948;
struct tree* nctemp9955= p;
nctempchar1* nctemp9957=PtreeGetdef(nctemp9955);
nctempchar1* nctemp9953= nctemp9957;
struct symbol* nctemp9958=SymLook(nctemp9953);
uup =nctemp9958;
struct symbol* nctemp9965= uup;
nctempchar1* nctemp9967=SymGetype(nctemp9965);
nctempchar1* nctemp9963= nctemp9967;
struct symbol* nctemp9968=SymLook(nctemp9963);
uup =nctemp9968;
struct symbol* nctemp9972= uup;
struct symbol* nctemp9974=SymGetable(nctemp9972);
struct symbol* nctemp9970= nctemp9974;
int nctemp9975=SymSetltp(nctemp9970);
struct tree* nctemp9977= sp;
nctempchar1* nctemp9979= qname;
int nctemp9982=CodeSarray(nctemp9977,nctemp9979);
RunFree(qname->a);
RunFree(qname);
struct symbol* nctemp9987= tp;
int nctemp9989=SymSetltp(nctemp9987);
struct symbol* nctemp9991= up;
int nctemp9993=SymSetetp(nctemp9991);
}
else{
struct tree* nctemp9995= p;
struct tree* nctemp9999= sp;
nctempchar1* nctemp10001=PtreeGetdef(nctemp9999);
nctempchar1* nctemp9997= nctemp10001;
int nctemp10002=CodeEs(nctemp9995,nctemp9997);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10009= p;
nctempchar1* nctemp10011=PtreeGetstruct(nctemp10009);
nctempchar1* nctemp10007= nctemp10011;
struct nctempchar1 *nctemp10014;
static struct nctempchar1 nctemp10015 = {{ 7}, (char*)"struct\0"};
nctemp10014=&nctemp10015;
nctempchar1* nctemp10012= nctemp10014;
int nctemp10016=LibeStrcmp(nctemp10007,nctemp10012);
int nctemp10004 = (nctemp10016 ==1);
if(nctemp10004)
{
struct tree* nctemp10019= p;
int nctemp10021=CodeIdstruct(nctemp10019);
}
else{
struct tree* nctemp10027= p;
nctempchar1* nctemp10029=PtreeGetarray(nctemp10027);
nctempchar1* nctemp10025= nctemp10029;
struct nctempchar1 *nctemp10032;
static struct nctempchar1 nctemp10033 = {{ 6}, (char*)"array\0"};
nctemp10032=&nctemp10033;
nctempchar1* nctemp10030= nctemp10032;
int nctemp10034=LibeStrcmp(nctemp10025,nctemp10030);
int nctemp10022 = (nctemp10034 ==1);
if(nctemp10022)
{
struct tree* nctemp10037= p;
nctempchar1* nctemp10039= qname;
int nctemp10042=CodeSarray(nctemp10037,nctemp10039);
return 1;
}
else{
struct tree* nctemp10045= p;
struct tree* nctemp10049= p;
nctempchar1* nctemp10051=PtreeGetdef(nctemp10049);
nctempchar1* nctemp10047= nctemp10051;
int nctemp10052=CodeEs(nctemp10045,nctemp10047);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10061= p;
nctempchar1* nctemp10063=PtreeGetdef(nctemp10061);
nctempchar1* nctemp10059= nctemp10063;
struct symbol* nctemp10066=SymGetetp();
struct symbol* nctemp10064= nctemp10066;
struct symbol* nctemp10067=SymLookup(nctemp10059,nctemp10064);
tp =nctemp10067;
struct tree* nctemp10072= p;
struct tree* nctemp10074=PtreeMvchild(nctemp10072);
sp =nctemp10074;
int nctemp10075 = (sp !=0);
if(nctemp10075)
{
struct tree* nctemp10084= sp;
nctempchar1* nctemp10086=PtreeGetname(nctemp10084);
nctempchar1* nctemp10082= nctemp10086;
struct nctempchar1 *nctemp10089;
static struct nctempchar1 nctemp10090 = {{ 9}, (char*)"exprlist\0"};
nctemp10089=&nctemp10090;
nctempchar1* nctemp10087= nctemp10089;
int nctemp10091=LibeStrcmp(nctemp10082,nctemp10087);
int nctemp10079 = (nctemp10091 ==1);
if(nctemp10079)
{
struct tree* nctemp10097= sp;
struct tree* nctemp10099=PtreeMvchild(nctemp10097);
sp =nctemp10099;
}
}
struct tree* nctemp10101= p;
struct symbol* nctemp10105= tp;
nctempchar1* nctemp10107=SymGetname(nctemp10105);
nctempchar1* nctemp10103= nctemp10107;
int nctemp10108=CodeEs(nctemp10101,nctemp10103);
struct tree* nctemp10110= p;
struct nctempchar1 *nctemp10114;
static struct nctempchar1 nctemp10115 = {{ 2}, (char*)"(\0"};
nctemp10114=&nctemp10115;
nctempchar1* nctemp10112= nctemp10114;
int nctemp10116=CodeEs(nctemp10110,nctemp10112);
int nctemp10117 = (sp !=0);
int nctemp10121=nctemp10117;
while(nctemp10121)
{{
struct tree* nctemp10123= sp;
int nctemp10125=CodeSexpr(nctemp10123);
struct tree* nctemp10133= sp;
struct tree* nctemp10135=PtreeMvsister(nctemp10133);
sp =nctemp10135;
int nctemp10126 = (sp !=0);
if(nctemp10126)
{
struct tree* nctemp10138= p;
struct nctempchar1 *nctemp10142;
static struct nctempchar1 nctemp10143 = {{ 2}, (char*)",\0"};
nctemp10142=&nctemp10143;
nctempchar1* nctemp10140= nctemp10142;
int nctemp10144=CodeEs(nctemp10138,nctemp10140);
}
}
int nctemp10145 = (sp !=0);
nctemp10121=nctemp10145;}struct tree* nctemp10150= p;
struct nctempchar1 *nctemp10154;
static struct nctempchar1 nctemp10155 = {{ 2}, (char*)")\0"};
nctemp10154=&nctemp10155;
nctempchar1* nctemp10152= nctemp10154;
int nctemp10156=CodeEs(nctemp10150,nctemp10152);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10163= p;
nctempchar1* nctemp10165=PtreeGetname(nctemp10163);
nctempchar1* nctemp10161= nctemp10165;
struct nctempchar1 *nctemp10168;
static struct nctempchar1 nctemp10169 = {{ 5}, (char*)"cast\0"};
nctemp10168=&nctemp10169;
nctempchar1* nctemp10166= nctemp10168;
int nctemp10170=LibeStrcmp(nctemp10161,nctemp10166);
int nctemp10158 = (nctemp10170 ==1);
if(nctemp10158)
{
struct tree* nctemp10176= p;
struct tree* nctemp10178=PtreeMvchild(nctemp10176);
np =nctemp10178;
struct tree* nctemp10183= np;
struct tree* nctemp10185=PtreeMvsister(nctemp10183);
sp =nctemp10185;
struct tree* nctemp10187= p;
struct nctempchar1 *nctemp10191;
static struct nctempchar1 nctemp10192 = {{ 2}, (char*)"(\0"};
nctemp10191=&nctemp10192;
nctempchar1* nctemp10189= nctemp10191;
int nctemp10193=CodeEs(nctemp10187,nctemp10189);
struct tree* nctemp10199= np;
nctempchar1* nctemp10201=PtreeGetstruct(nctemp10199);
nctempchar1* nctemp10197= nctemp10201;
struct nctempchar1 *nctemp10204;
static struct nctempchar1 nctemp10205 = {{ 7}, (char*)"struct\0"};
nctemp10204=&nctemp10205;
nctempchar1* nctemp10202= nctemp10204;
int nctemp10206=LibeStrcmp(nctemp10197,nctemp10202);
int nctemp10194 = (nctemp10206 ==1);
if(nctemp10194)
{
struct tree* nctemp10209= p;
struct nctempchar1 *nctemp10213;
static struct nctempchar1 nctemp10214 = {{ 8}, (char*)"struct \0"};
nctemp10213=&nctemp10214;
nctempchar1* nctemp10211= nctemp10213;
int nctemp10215=CodeEs(nctemp10209,nctemp10211);
}
struct tree* nctemp10217= p;
struct tree* nctemp10221= np;
nctempchar1* nctemp10223=PtreeGetdef(nctemp10221);
nctempchar1* nctemp10219= nctemp10223;
int nctemp10224=CodeEs(nctemp10217,nctemp10219);
struct tree* nctemp10230= np;
nctempchar1* nctemp10232=PtreeGetstruct(nctemp10230);
nctempchar1* nctemp10228= nctemp10232;
struct nctempchar1 *nctemp10235;
static struct nctempchar1 nctemp10236 = {{ 6}, (char*)"array\0"};
nctemp10235=&nctemp10236;
nctempchar1* nctemp10233= nctemp10235;
int nctemp10237=LibeStrcmp(nctemp10228,nctemp10233);
int nctemp10225 = (nctemp10237 ==1);
if(nctemp10225)
{
struct tree* nctemp10240= p;
struct nctempchar1 *nctemp10244;
static struct nctempchar1 nctemp10245 = {{ 2}, (char*)"*\0"};
nctemp10244=&nctemp10245;
nctempchar1* nctemp10242= nctemp10244;
int nctemp10246=CodeEs(nctemp10240,nctemp10242);
}
struct tree* nctemp10248= p;
struct nctempchar1 *nctemp10252;
static struct nctempchar1 nctemp10253 = {{ 3}, (char*)")(\0"};
nctemp10252=&nctemp10253;
nctempchar1* nctemp10250= nctemp10252;
int nctemp10254=CodeEs(nctemp10248,nctemp10250);
struct tree* nctemp10256= sp;
int nctemp10258=CodeSexpr(nctemp10256);
struct tree* nctemp10260= p;
struct nctempchar1 *nctemp10264;
static struct nctempchar1 nctemp10265 = {{ 2}, (char*)")\0"};
nctemp10264=&nctemp10265;
nctempchar1* nctemp10262= nctemp10264;
int nctemp10266=CodeEs(nctemp10260,nctemp10262);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10273= p;
nctempchar1* nctemp10275=PtreeGetname(nctemp10273);
nctempchar1* nctemp10271= nctemp10275;
struct nctempchar1 *nctemp10278;
static struct nctempchar1 nctemp10279 = {{ 11}, (char*)"identifier\0"};
nctemp10278=&nctemp10279;
nctempchar1* nctemp10276= nctemp10278;
int nctemp10280=LibeStrcmp(nctemp10271,nctemp10276);
int nctemp10268 = (nctemp10280 ==1);
if(nctemp10268)
{
struct tree* nctemp10283= p;
int nctemp10285=CodeSident(nctemp10283);
}
else{
struct tree* nctemp10291= p;
nctempchar1* nctemp10293=PtreeGetname(nctemp10291);
nctempchar1* nctemp10289= nctemp10293;
struct nctempchar1 *nctemp10296;
static struct nctempchar1 nctemp10297 = {{ 6}, (char*)"fcall\0"};
nctemp10296=&nctemp10297;
nctempchar1* nctemp10294= nctemp10296;
int nctemp10298=LibeStrcmp(nctemp10289,nctemp10294);
int nctemp10286 = (nctemp10298 ==1);
if(nctemp10286)
{
struct tree* nctemp10301= p;
int nctemp10303=CodeSfcall(nctemp10301);
}
else{
struct tree* nctemp10309= p;
nctempchar1* nctemp10311=PtreeGetname(nctemp10309);
nctempchar1* nctemp10307= nctemp10311;
struct nctempchar1 *nctemp10314;
static struct nctempchar1 nctemp10315 = {{ 5}, (char*)"cast\0"};
nctemp10314=&nctemp10315;
nctempchar1* nctemp10312= nctemp10314;
int nctemp10316=LibeStrcmp(nctemp10307,nctemp10312);
int nctemp10304 = (nctemp10316 ==1);
if(nctemp10304)
{
struct tree* nctemp10319= p;
int nctemp10321=CodeScast(nctemp10319);
}
else{
struct tree* nctemp10327= p;
nctempchar1* nctemp10329=PtreeGetname(nctemp10327);
nctempchar1* nctemp10325= nctemp10329;
struct nctempchar1 *nctemp10332;
static struct nctempchar1 nctemp10333 = {{ 10}, (char*)"iconstant\0"};
nctemp10332=&nctemp10333;
nctempchar1* nctemp10330= nctemp10332;
int nctemp10334=LibeStrcmp(nctemp10325,nctemp10330);
int nctemp10322 = (nctemp10334 ==1);
if(nctemp10322)
{
struct tree* nctemp10337= p;
struct tree* nctemp10341= p;
nctempchar1* nctemp10343=PtreeGetdef(nctemp10341);
nctempchar1* nctemp10339= nctemp10343;
int nctemp10344=CodeEs(nctemp10337,nctemp10339);
}
else{
struct tree* nctemp10350= p;
nctempchar1* nctemp10352=PtreeGetname(nctemp10350);
nctempchar1* nctemp10348= nctemp10352;
struct nctempchar1 *nctemp10355;
static struct nctempchar1 nctemp10356 = {{ 10}, (char*)"sconstant\0"};
nctemp10355=&nctemp10356;
nctempchar1* nctemp10353= nctemp10355;
int nctemp10357=LibeStrcmp(nctemp10348,nctemp10353);
int nctemp10345 = (nctemp10357 ==1);
if(nctemp10345)
{
struct tree* nctemp10360= p;
struct tree* nctemp10364= p;
nctempchar1* nctemp10366=PtreeGetdef(nctemp10364);
nctempchar1* nctemp10362= nctemp10366;
int nctemp10367=CodeEs(nctemp10360,nctemp10362);
}
else{
struct tree* nctemp10373= p;
nctempchar1* nctemp10375=PtreeGetname(nctemp10373);
nctempchar1* nctemp10371= nctemp10375;
struct nctempchar1 *nctemp10378;
static struct nctempchar1 nctemp10379 = {{ 10}, (char*)"rconstant\0"};
nctemp10378=&nctemp10379;
nctempchar1* nctemp10376= nctemp10378;
int nctemp10380=LibeStrcmp(nctemp10371,nctemp10376);
int nctemp10368 = (nctemp10380 ==1);
if(nctemp10368)
{
struct tree* nctemp10383= p;
struct tree* nctemp10387= p;
nctempchar1* nctemp10389=PtreeGetdef(nctemp10387);
nctempchar1* nctemp10385= nctemp10389;
int nctemp10390=CodeEs(nctemp10383,nctemp10385);
}
else{
struct tree* nctemp10392= p;
struct nctempchar1 *nctemp10396;
static struct nctempchar1 nctemp10397 = {{ 2}, (char*)"(\0"};
nctemp10396=&nctemp10397;
nctempchar1* nctemp10394= nctemp10396;
int nctemp10398=CodeEs(nctemp10392,nctemp10394);
struct tree* nctemp10400= p;
int nctemp10402=CodeSbinexpr(nctemp10400);
struct tree* nctemp10404= p;
struct nctempchar1 *nctemp10408;
static struct nctempchar1 nctemp10409 = {{ 2}, (char*)")\0"};
nctemp10408=&nctemp10409;
nctempchar1* nctemp10406= nctemp10408;
int nctemp10410=CodeEs(nctemp10404,nctemp10406);
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
struct tree* nctemp10417= p;
nctempchar1* nctemp10419=PtreeGetname(nctemp10417);
nctempchar1* nctemp10415= nctemp10419;
struct nctempchar1 *nctemp10422;
static struct nctempchar1 nctemp10423 = {{ 7}, (char*)"unexpr\0"};
nctemp10422=&nctemp10423;
nctempchar1* nctemp10420= nctemp10422;
int nctemp10424=LibeStrcmp(nctemp10415,nctemp10420);
int nctemp10412 = (nctemp10424 ==1);
if(nctemp10412)
{
struct tree* nctemp10427= p;
struct nctempchar1 *nctemp10431;
static struct nctempchar1 nctemp10432 = {{ 3}, (char*)" -\0"};
nctemp10431=&nctemp10432;
nctempchar1* nctemp10429= nctemp10431;
int nctemp10433=CodeEs(nctemp10427,nctemp10429);
struct tree* nctemp10437= p;
struct tree* nctemp10439=PtreeMvchild(nctemp10437);
struct tree* nctemp10435= nctemp10439;
int nctemp10440=CodeSprimexpr(nctemp10435);
}
else{
struct tree* nctemp10442= p;
int nctemp10444=CodeSprimexpr(nctemp10442);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10451= p;
nctempchar1* nctemp10453=PtreeGetname(nctemp10451);
nctempchar1* nctemp10449= nctemp10453;
struct nctempchar1 *nctemp10456;
static struct nctempchar1 nctemp10457 = {{ 8}, (char*)"binexpr\0"};
nctemp10456=&nctemp10457;
nctempchar1* nctemp10454= nctemp10456;
int nctemp10458=LibeStrcmp(nctemp10449,nctemp10454);
int nctemp10446 = (nctemp10458 ==1);
if(nctemp10446)
{
struct tree* nctemp10464= p;
struct tree* nctemp10466=PtreeMvchild(nctemp10464);
np =nctemp10466;
struct tree* nctemp10468= np;
int nctemp10470=CodeSunexpr(nctemp10468);
struct tree* nctemp10482= p;
nctempchar1* nctemp10484=PtreeGetdef(nctemp10482);
nctempchar1* nctemp10480= nctemp10484;
struct nctempchar1 *nctemp10487;
static struct nctempchar1 nctemp10488 = {{ 2}, (char*)"=\0"};
nctemp10487=&nctemp10488;
nctempchar1* nctemp10485= nctemp10487;
int nctemp10489=LibeStrcmp(nctemp10480,nctemp10485);
int nctemp10477 = (nctemp10489 ==1);
struct tree* nctemp10497= p;
nctempchar1* nctemp10499=PtreeGetdef(nctemp10497);
nctempchar1* nctemp10495= nctemp10499;
struct nctempchar1 *nctemp10502;
static struct nctempchar1 nctemp10503 = {{ 3}, (char*)"==\0"};
nctemp10502=&nctemp10503;
nctempchar1* nctemp10500= nctemp10502;
int nctemp10504=LibeStrcmp(nctemp10495,nctemp10500);
int nctemp10492 = (nctemp10504 ==1);
int nctemp10474 = (nctemp10477 || nctemp10492);
struct tree* nctemp10512= p;
nctempchar1* nctemp10514=PtreeGetdef(nctemp10512);
nctempchar1* nctemp10510= nctemp10514;
struct nctempchar1 *nctemp10517;
static struct nctempchar1 nctemp10518 = {{ 3}, (char*)"!=\0"};
nctemp10517=&nctemp10518;
nctempchar1* nctemp10515= nctemp10517;
int nctemp10519=LibeStrcmp(nctemp10510,nctemp10515);
int nctemp10507 = (nctemp10519 ==1);
int nctemp10471 = (nctemp10474 || nctemp10507);
if(nctemp10471)
{
struct tree* nctemp10526= np;
nctempchar1* nctemp10528=PtreeGetref(nctemp10526);
nctempchar1* nctemp10524= nctemp10528;
struct nctempchar1 *nctemp10531;
static struct nctempchar1 nctemp10532 = {{ 5}, (char*)"aref\0"};
nctemp10531=&nctemp10532;
nctempchar1* nctemp10529= nctemp10531;
int nctemp10533=LibeStrcmp(nctemp10524,nctemp10529);
int nctemp10521 = (nctemp10533 ==1);
if(nctemp10521)
{
struct tree* nctemp10542= np;
struct tree* nctemp10544=PtreeMvsister(nctemp10542);
struct tree* nctemp10540= nctemp10544;
nctempchar1* nctemp10545=PtreeGetname(nctemp10540);
nctempchar1* nctemp10538= nctemp10545;
struct nctempchar1 *nctemp10548;
static struct nctempchar1 nctemp10549 = {{ 10}, (char*)"iconstant\0"};
nctemp10548=&nctemp10549;
nctempchar1* nctemp10546= nctemp10548;
int nctemp10550=LibeStrcmp(nctemp10538,nctemp10546);
struct tree* nctemp10556= np;
struct tree* nctemp10558=PtreeMvsister(nctemp10556);
struct tree* nctemp10554= nctemp10558;
nctempchar1* nctemp10559=PtreeGetdef(nctemp10554);
nctempchar1* nctemp10552= nctemp10559;
struct nctempchar1 *nctemp10562;
static struct nctempchar1 nctemp10563 = {{ 2}, (char*)"0\0"};
nctemp10562=&nctemp10563;
nctempchar1* nctemp10560= nctemp10562;
int nctemp10564=LibeStrcmp(nctemp10552,nctemp10560);
int nctemp10535 = (nctemp10550 && nctemp10564);
if(nctemp10535)
{
struct tree* nctemp10566= p;
struct nctempchar1 *nctemp10570;
static struct nctempchar1 nctemp10571 = {{ 2}, (char*)" \0"};
nctemp10570=&nctemp10571;
nctempchar1* nctemp10568= nctemp10570;
int nctemp10572=CodeEs(nctemp10566,nctemp10568);
}
}
}
struct tree* nctemp10574= p;
struct nctempchar1 *nctemp10578;
static struct nctempchar1 nctemp10579 = {{ 2}, (char*)" \0"};
nctemp10578=&nctemp10579;
nctempchar1* nctemp10576= nctemp10578;
int nctemp10580=CodeEs(nctemp10574,nctemp10576);
struct tree* nctemp10582= p;
struct tree* nctemp10586= p;
nctempchar1* nctemp10588=PtreeGetdef(nctemp10586);
nctempchar1* nctemp10584= nctemp10588;
int nctemp10589=CodeEs(nctemp10582,nctemp10584);
struct tree* nctemp10591= p;
struct nctempchar1 *nctemp10595;
static struct nctempchar1 nctemp10596 = {{ 2}, (char*)" \0"};
nctemp10595=&nctemp10596;
nctempchar1* nctemp10593= nctemp10595;
int nctemp10597=CodeEs(nctemp10591,nctemp10593);
struct tree* nctemp10601= np;
struct tree* nctemp10603=PtreeMvsister(nctemp10601);
struct tree* nctemp10599= nctemp10603;
int nctemp10604=CodeSunexpr(nctemp10599);
}
else{
struct tree* nctemp10606= p;
int nctemp10608=CodeSunexpr(nctemp10606);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp10614= p;
struct tree* nctemp10616=PtreeMvchild(nctemp10614);
sp =nctemp10616;
struct tree* nctemp10618= sp;
int nctemp10620=CodeSbinexpr(nctemp10618);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10626= p;
struct tree* nctemp10628=PtreeMvchild(nctemp10626);
sp =nctemp10628;
struct tree* nctemp10634= sp;
nctempchar1* nctemp10636=CodeBinexpr(nctemp10634);
rval=nctemp10636;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10643= p;
struct tree* nctemp10645=PtreeMvchild(nctemp10643);
p =nctemp10645;
struct tree* nctemp10647= p;
struct nctempchar1 *nctemp10651;
static struct nctempchar1 nctemp10652 = {{ 5}, (char*)"for(\0"};
nctemp10651=&nctemp10652;
nctempchar1* nctemp10649= nctemp10651;
int nctemp10653=CodeEs(nctemp10647,nctemp10649);
struct tree* nctemp10655= p;
int nctemp10657=CodeSexpr(nctemp10655);
struct tree* nctemp10659= p;
struct nctempchar1 *nctemp10663;
static struct nctempchar1 nctemp10664 = {{ 2}, (char*)";\0"};
nctemp10663=&nctemp10664;
nctempchar1* nctemp10661= nctemp10663;
int nctemp10665=CodeEs(nctemp10659,nctemp10661);
struct tree* nctemp10670= p;
struct tree* nctemp10672=PtreeMvsister(nctemp10670);
p =nctemp10672;
struct tree* nctemp10674= p;
int nctemp10676=CodeSexpr(nctemp10674);
struct tree* nctemp10678= p;
struct nctempchar1 *nctemp10682;
static struct nctempchar1 nctemp10683 = {{ 2}, (char*)";\0"};
nctemp10682=&nctemp10683;
nctempchar1* nctemp10680= nctemp10682;
int nctemp10684=CodeEs(nctemp10678,nctemp10680);
struct tree* nctemp10689= p;
struct tree* nctemp10691=PtreeMvsister(nctemp10689);
p =nctemp10691;
struct tree* nctemp10693= p;
int nctemp10695=CodeSexpr(nctemp10693);
struct tree* nctemp10697= p;
struct nctempchar1 *nctemp10701;
static struct nctempchar1 nctemp10702 = {{ 2}, (char*)")\0"};
nctemp10701=&nctemp10702;
nctempchar1* nctemp10699= nctemp10701;
int nctemp10703=CodeEs(nctemp10697,nctemp10699);
struct tree* nctemp10708= p;
struct tree* nctemp10710=PtreeMvsister(nctemp10708);
p =nctemp10710;
struct tree* nctemp10712= p;
int nctemp10714=CodeStmnt(nctemp10712);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10720= p;
struct tree* nctemp10722=PtreeMvchild(nctemp10720);
p =nctemp10722;
sp = p;
struct tree* nctemp10728= sp;
nctempchar1* nctemp10730=CodeExpr(nctemp10728);
cond=nctemp10730;
nctempchar1* nctemp10736=CodeMktemp();
tmp=nctemp10736;
struct tree* nctemp10738= p;
struct tree* nctemp10742= sp;
nctempchar1* nctemp10744=PtreeGetype(nctemp10742);
nctempchar1* nctemp10740= nctemp10744;
int nctemp10745=CodeEs(nctemp10738,nctemp10740);
struct tree* nctemp10747= p;
struct nctempchar1 *nctemp10751;
static struct nctempchar1 nctemp10752 = {{ 2}, (char*)" \0"};
nctemp10751=&nctemp10752;
nctempchar1* nctemp10749= nctemp10751;
int nctemp10753=CodeEs(nctemp10747,nctemp10749);
struct tree* nctemp10755= p;
nctempchar1* nctemp10757= tmp;
int nctemp10760=CodeEs(nctemp10755,nctemp10757);
struct tree* nctemp10762= p;
struct nctempchar1 *nctemp10766;
static struct nctempchar1 nctemp10767 = {{ 2}, (char*)"=\0"};
nctemp10766=&nctemp10767;
nctempchar1* nctemp10764= nctemp10766;
int nctemp10768=CodeEs(nctemp10762,nctemp10764);
struct tree* nctemp10770= p;
nctempchar1* nctemp10772= cond;
int nctemp10775=CodeEs(nctemp10770,nctemp10772);
struct tree* nctemp10777= p;
struct nctempchar1 *nctemp10781;
static struct nctempchar1 nctemp10782 = {{ 4}, (char*)";\n\0"};
nctemp10781=&nctemp10782;
nctempchar1* nctemp10779= nctemp10781;
int nctemp10783=CodeEs(nctemp10777,nctemp10779);
struct tree* nctemp10785= p;
struct nctempchar1 *nctemp10789;
static struct nctempchar1 nctemp10790 = {{ 7}, (char*)"while(\0"};
nctemp10789=&nctemp10790;
nctempchar1* nctemp10787= nctemp10789;
int nctemp10791=CodeEs(nctemp10785,nctemp10787);
struct tree* nctemp10793= p;
nctempchar1* nctemp10795= tmp;
int nctemp10798=CodeEs(nctemp10793,nctemp10795);
struct tree* nctemp10800= p;
struct nctempchar1 *nctemp10804;
static struct nctempchar1 nctemp10805 = {{ 4}, (char*)")\n\0"};
nctemp10804=&nctemp10805;
nctempchar1* nctemp10802= nctemp10804;
int nctemp10806=CodeEs(nctemp10800,nctemp10802);
struct tree* nctemp10808= p;
struct nctempchar1 *nctemp10812;
static struct nctempchar1 nctemp10813 = {{ 2}, (char*)"{\0"};
nctemp10812=&nctemp10813;
nctempchar1* nctemp10810= nctemp10812;
int nctemp10814=CodeEs(nctemp10808,nctemp10810);
struct tree* nctemp10819= p;
struct tree* nctemp10821=PtreeMvsister(nctemp10819);
p =nctemp10821;
struct tree* nctemp10823= p;
int nctemp10825=CodeStmnt(nctemp10823);
struct tree* nctemp10831= sp;
nctempchar1* nctemp10833=CodeExpr(nctemp10831);
cond2=nctemp10833;
struct tree* nctemp10835= p;
nctempchar1* nctemp10837= tmp;
int nctemp10840=CodeEs(nctemp10835,nctemp10837);
struct tree* nctemp10842= p;
struct nctempchar1 *nctemp10846;
static struct nctempchar1 nctemp10847 = {{ 2}, (char*)"=\0"};
nctemp10846=&nctemp10847;
nctempchar1* nctemp10844= nctemp10846;
int nctemp10848=CodeEs(nctemp10842,nctemp10844);
struct tree* nctemp10850= p;
nctempchar1* nctemp10852= cond2;
int nctemp10855=CodeEs(nctemp10850,nctemp10852);
struct tree* nctemp10857= p;
struct nctempchar1 *nctemp10861;
static struct nctempchar1 nctemp10862 = {{ 2}, (char*)";\0"};
nctemp10861=&nctemp10862;
nctempchar1* nctemp10859= nctemp10861;
int nctemp10863=CodeEs(nctemp10857,nctemp10859);
struct tree* nctemp10865= p;
struct nctempchar1 *nctemp10869;
static struct nctempchar1 nctemp10870 = {{ 2}, (char*)"}\0"};
nctemp10869=&nctemp10870;
nctempchar1* nctemp10867= nctemp10869;
int nctemp10871=CodeEs(nctemp10865,nctemp10867);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10877= p;
struct tree* nctemp10879=PtreeMvchild(nctemp10877);
p =nctemp10879;
struct tree* nctemp10881= p;
nctempchar1* nctemp10883=CodeExpr(nctemp10881);
struct tree* nctemp10888= p;
struct tree* nctemp10890=PtreeMvsister(nctemp10888);
p =nctemp10890;
np = p;
struct tree* nctemp10896= p;
nctempchar1* nctemp10898=CodeExpr(nctemp10896);
cond=nctemp10898;
struct tree* nctemp10900= p;
struct nctempchar1 *nctemp10904;
static struct nctempchar1 nctemp10905 = {{ 7}, (char*)"while(\0"};
nctemp10904=&nctemp10905;
nctempchar1* nctemp10902= nctemp10904;
int nctemp10906=CodeEs(nctemp10900,nctemp10902);
struct tree* nctemp10908= p;
nctempchar1* nctemp10910= cond;
int nctemp10913=CodeEs(nctemp10908,nctemp10910);
struct tree* nctemp10915= p;
struct nctempchar1 *nctemp10919;
static struct nctempchar1 nctemp10920 = {{ 5}, (char*)"){\n\0"};
nctemp10919=&nctemp10920;
nctempchar1* nctemp10917= nctemp10919;
int nctemp10921=CodeEs(nctemp10915,nctemp10917);
struct tree* nctemp10926= p;
struct tree* nctemp10928=PtreeMvsister(nctemp10926);
p =nctemp10928;
sp = p;
struct tree* nctemp10933= p;
struct tree* nctemp10935=PtreeMvsister(nctemp10933);
p =nctemp10935;
struct tree* nctemp10937= p;
int nctemp10939=CodeStmnt(nctemp10937);
struct tree* nctemp10941= sp;
nctempchar1* nctemp10943=CodeExpr(nctemp10941);
struct tree* nctemp10949= np;
nctempchar1* nctemp10951=CodeExpr(nctemp10949);
tmp=nctemp10951;
struct tree* nctemp10953= p;
nctempchar1* nctemp10955= cond;
int nctemp10958=CodeEs(nctemp10953,nctemp10955);
struct tree* nctemp10960= p;
struct nctempchar1 *nctemp10964;
static struct nctempchar1 nctemp10965 = {{ 2}, (char*)"=\0"};
nctemp10964=&nctemp10965;
nctempchar1* nctemp10962= nctemp10964;
int nctemp10966=CodeEs(nctemp10960,nctemp10962);
struct tree* nctemp10968= p;
nctempchar1* nctemp10970= tmp;
int nctemp10973=CodeEs(nctemp10968,nctemp10970);
struct tree* nctemp10975= p;
struct nctempchar1 *nctemp10979;
static struct nctempchar1 nctemp10980 = {{ 4}, (char*)";\n\0"};
nctemp10979=&nctemp10980;
nctempchar1* nctemp10977= nctemp10979;
int nctemp10981=CodeEs(nctemp10975,nctemp10977);
struct tree* nctemp10983= p;
struct nctempchar1 *nctemp10987;
static struct nctempchar1 nctemp10988 = {{ 4}, (char*)"}\n\0"};
nctemp10987=&nctemp10988;
nctempchar1* nctemp10985= nctemp10987;
int nctemp10989=CodeEs(nctemp10983,nctemp10985);
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
int nctemp10991 = (p ==0);
if(nctemp10991)
{
return 1;
}
struct tree* nctemp11000= p;
struct tree* nctemp11002=PtreeMvsister(nctemp11000);
p =nctemp11002;
struct tree* nctemp11004= p;
int nctemp11006= level;
int nctemp11008= rank;
int nctemp11010=CodeParallelfor(nctemp11004,nctemp11006,nctemp11008);
struct tree* nctemp11015= sp;
struct tree* nctemp11017=PtreeMvchild(nctemp11015);
rp =nctemp11017;
struct tree* nctemp11022= rp;
struct tree* nctemp11024=PtreeMvchild(nctemp11022);
qp =nctemp11024;
struct tree* nctemp11029= qp;
struct tree* nctemp11031=PtreeMvchild(nctemp11029);
qp =nctemp11031;
struct tree* nctemp11037= qp;
nctempchar1* nctemp11039=PtreeGetdef(nctemp11037);
index=nctemp11039;
struct tree* nctemp11047= qp;
struct tree* nctemp11049=PtreeMvsister(nctemp11047);
struct tree* nctemp11045= nctemp11049;
nctempchar1* nctemp11050=CodeBinexpr(nctemp11045);
init=nctemp11050;
struct tree* nctemp11055= rp;
struct tree* nctemp11057=PtreeMvsister(nctemp11055);
rrp =nctemp11057;
struct tree* nctemp11063= rrp;
nctempchar1* nctemp11065=CodeExpr(nctemp11063);
cond=nctemp11065;
int nctemp11066 = (level ==rank);
if(nctemp11066)
{
struct tree* nctemp11071= p;
struct nctempchar1 *nctemp11075;
static struct nctempchar1 nctemp11076 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11075=&nctemp11076;
nctempchar1* nctemp11073= nctemp11075;
int nctemp11077=CodeEs(nctemp11071,nctemp11073);
}
struct tree* nctemp11079= rp;
struct nctempchar1 *nctemp11083;
static struct nctempchar1 nctemp11084 = {{ 5}, (char*)"for(\0"};
nctemp11083=&nctemp11084;
nctempchar1* nctemp11081= nctemp11083;
int nctemp11085=CodeEs(nctemp11079,nctemp11081);
struct tree* nctemp11087= rp;
nctempchar1* nctemp11089= index;
int nctemp11092=CodeEs(nctemp11087,nctemp11089);
struct tree* nctemp11094= rp;
struct nctempchar1 *nctemp11098;
static struct nctempchar1 nctemp11099 = {{ 2}, (char*)"=\0"};
nctemp11098=&nctemp11099;
nctempchar1* nctemp11096= nctemp11098;
int nctemp11100=CodeEs(nctemp11094,nctemp11096);
struct tree* nctemp11102= rp;
nctempchar1* nctemp11104= init;
int nctemp11107=CodeEs(nctemp11102,nctemp11104);
struct tree* nctemp11109= rp;
struct nctempchar1 *nctemp11113;
static struct nctempchar1 nctemp11114 = {{ 2}, (char*)";\0"};
nctemp11113=&nctemp11114;
nctempchar1* nctemp11111= nctemp11113;
int nctemp11115=CodeEs(nctemp11109,nctemp11111);
struct tree* nctemp11120= rp;
struct tree* nctemp11122=PtreeMvsister(nctemp11120);
rp =nctemp11122;
struct tree* nctemp11124= rp;
nctempchar1* nctemp11126= index;
int nctemp11129=CodeEs(nctemp11124,nctemp11126);
struct tree* nctemp11131= rp;
struct nctempchar1 *nctemp11135;
static struct nctempchar1 nctemp11136 = {{ 2}, (char*)"<\0"};
nctemp11135=&nctemp11136;
nctempchar1* nctemp11133= nctemp11135;
int nctemp11137=CodeEs(nctemp11131,nctemp11133);
struct tree* nctemp11139= p;
nctempchar1* nctemp11141= cond;
int nctemp11144=CodeEs(nctemp11139,nctemp11141);
struct tree* nctemp11146= rp;
struct nctempchar1 *nctemp11150;
static struct nctempchar1 nctemp11151 = {{ 2}, (char*)";\0"};
nctemp11150=&nctemp11151;
nctempchar1* nctemp11148= nctemp11150;
int nctemp11152=CodeEs(nctemp11146,nctemp11148);
struct tree* nctemp11160= rp;
struct tree* nctemp11162=PtreeMvsister(nctemp11160);
rp =nctemp11162;
int nctemp11153 = (rp !=0);
if(nctemp11153)
{
struct tree* nctemp11165= rp;
nctempchar1* nctemp11167= index;
int nctemp11170=CodeEs(nctemp11165,nctemp11167);
struct tree* nctemp11172= rp;
struct nctempchar1 *nctemp11176;
static struct nctempchar1 nctemp11177 = {{ 2}, (char*)"=\0"};
nctemp11176=&nctemp11177;
nctempchar1* nctemp11174= nctemp11176;
int nctemp11178=CodeEs(nctemp11172,nctemp11174);
struct tree* nctemp11180= rp;
nctempchar1* nctemp11182= index;
int nctemp11185=CodeEs(nctemp11180,nctemp11182);
struct tree* nctemp11187= rp;
struct nctempchar1 *nctemp11191;
static struct nctempchar1 nctemp11192 = {{ 2}, (char*)"+\0"};
nctemp11191=&nctemp11192;
nctempchar1* nctemp11189= nctemp11191;
int nctemp11193=CodeEs(nctemp11187,nctemp11189);
struct tree* nctemp11195= rp;
nctempchar1* nctemp11197=CodeExpr(nctemp11195);
}
else{
struct tree* nctemp11199= rp;
nctempchar1* nctemp11201= index;
int nctemp11204=CodeEs(nctemp11199,nctemp11201);
struct tree* nctemp11206= rp;
struct nctempchar1 *nctemp11210;
static struct nctempchar1 nctemp11211 = {{ 2}, (char*)"=\0"};
nctemp11210=&nctemp11211;
nctempchar1* nctemp11208= nctemp11210;
int nctemp11212=CodeEs(nctemp11206,nctemp11208);
struct tree* nctemp11214= rp;
nctempchar1* nctemp11216= index;
int nctemp11219=CodeEs(nctemp11214,nctemp11216);
struct tree* nctemp11221= rp;
struct nctempchar1 *nctemp11225;
static struct nctempchar1 nctemp11226 = {{ 2}, (char*)"+\0"};
nctemp11225=&nctemp11226;
nctempchar1* nctemp11223= nctemp11225;
int nctemp11227=CodeEs(nctemp11221,nctemp11223);
struct tree* nctemp11229= rp;
struct nctempchar1 *nctemp11233;
static struct nctempchar1 nctemp11234 = {{ 2}, (char*)"1\0"};
nctemp11233=&nctemp11234;
nctempchar1* nctemp11231= nctemp11233;
int nctemp11235=CodeEs(nctemp11229,nctemp11231);
}
struct tree* nctemp11237= rp;
struct nctempchar1 *nctemp11241;
static struct nctempchar1 nctemp11242 = {{ 3}, (char*)"){\0"};
nctemp11241=&nctemp11242;
nctempchar1* nctemp11239= nctemp11241;
int nctemp11243=CodeEs(nctemp11237,nctemp11239);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11249= sp;
int nctemp11251=PtreeGetrank(nctemp11249);
rank =nctemp11251;
struct tree* nctemp11256= p;
struct tree* nctemp11258=PtreeMvchild(nctemp11256);
p =nctemp11258;
struct tree* nctemp11263= p;
struct tree* nctemp11265=PtreeMvchild(nctemp11263);
p =nctemp11265;
struct tree* nctemp11267= p;
int nctemp11269= 0;
int nctemp11271= rank;
int nctemp11273=CodeParallelfor(nctemp11267,nctemp11269,nctemp11271);
struct tree* nctemp11278= sp;
struct tree* nctemp11280=PtreeMvchild(nctemp11278);
sp =nctemp11280;
struct tree* nctemp11285= sp;
struct tree* nctemp11287=PtreeMvsister(nctemp11285);
sp =nctemp11287;
struct tree* nctemp11289= sp;
int nctemp11291=CodeStmnt(nctemp11289);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11293= sp;
struct nctempchar1 *nctemp11297;
static struct nctempchar1 nctemp11298 = {{ 2}, (char*)"}\0"};
nctemp11297=&nctemp11298;
nctempchar1* nctemp11295= nctemp11297;
int nctemp11299=CodeEs(nctemp11293,nctemp11295);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11302= p;
struct nctempchar1 *nctemp11306;
static struct nctempchar1 nctemp11307 = {{ 13}, (char*)"int nctempno\0"};
nctemp11306=&nctemp11307;
nctempchar1* nctemp11304= nctemp11306;
int nctemp11308=CodeEs(nctemp11302,nctemp11304);
struct tree* nctemp11310= p;
struct nctempchar1 *nctemp11314;
static struct nctempchar1 nctemp11315 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11314=&nctemp11315;
nctempchar1* nctemp11312= nctemp11314;
int nctemp11316=CodeEs(nctemp11310,nctemp11312);
struct nctempchar1 *nctemp11318;
static struct nctempchar1 nctemp11319 = {{ 9}, (char*)"nctempno\0"};
nctemp11318=&nctemp11319;
return nctemp11318;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11324= p;
struct tree* nctemp11326=PtreeMvchild(nctemp11324);
p =nctemp11326;
struct tree* nctemp11331= p;
struct tree* nctemp11333=PtreeMvchild(nctemp11331);
p =nctemp11333;
struct tree* nctemp11338= p;
struct tree* nctemp11340=PtreeMvchild(nctemp11338);
p =nctemp11340;
struct tree* nctemp11342= p;
nctempchar1* nctemp11344=PtreeGetdef(nctemp11342);
return nctemp11344;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11349= p;
struct tree* nctemp11351=PtreeMvsister(nctemp11349);
p =nctemp11351;
}
struct tree* nctemp11353= p;
nctempchar1* nctemp11355=CodeParidx(nctemp11353);
return nctemp11355;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11360= p;
struct tree* nctemp11362=PtreeMvchild(nctemp11360);
p =nctemp11362;
struct tree* nctemp11368= p;
nctempchar1* nctemp11370=CodeExpr(nctemp11368);
tmp=nctemp11370;
nctempchar1* nctemp11376=CodeMktemp();
temp=nctemp11376;
struct tree* nctemp11378= p;
struct nctempchar1 *nctemp11382;
static struct nctempchar1 nctemp11383 = {{ 5}, (char*)"int \0"};
nctemp11382=&nctemp11383;
nctempchar1* nctemp11380= nctemp11382;
int nctemp11384=CodeEs(nctemp11378,nctemp11380);
struct tree* nctemp11386= p;
nctempchar1* nctemp11388= temp;
int nctemp11391=CodeEs(nctemp11386,nctemp11388);
struct tree* nctemp11393= p;
struct nctempchar1 *nctemp11397;
static struct nctempchar1 nctemp11398 = {{ 2}, (char*)"=\0"};
nctemp11397=&nctemp11398;
nctempchar1* nctemp11395= nctemp11397;
int nctemp11399=CodeEs(nctemp11393,nctemp11395);
struct tree* nctemp11401= p;
nctempchar1* nctemp11403= tmp;
int nctemp11406=CodeEs(nctemp11401,nctemp11403);
struct tree* nctemp11408= p;
struct nctempchar1 *nctemp11412;
static struct nctempchar1 nctemp11413 = {{ 4}, (char*)";\n\0"};
nctemp11412=&nctemp11413;
nctempchar1* nctemp11410= nctemp11412;
int nctemp11414=CodeEs(nctemp11408,nctemp11410);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11421= p;
struct tree* nctemp11423=PtreeMvchild(nctemp11421);
p =nctemp11423;
struct tree* nctemp11428= p;
struct tree* nctemp11430=PtreeMvsister(nctemp11428);
p =nctemp11430;
struct tree* nctemp11432= p;
nctempchar1* nctemp11434=CodeExpr(nctemp11432);
return nctemp11434;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11439= p;
struct tree* nctemp11441=PtreeMvsister(nctemp11439);
p =nctemp11441;
}
struct tree* nctemp11443= p;
nctempchar1* nctemp11445=CodeParllim(nctemp11443);
return nctemp11445;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11450= p;
struct tree* nctemp11452=PtreeMvsister(nctemp11450);
p =nctemp11452;
}
struct tree* nctemp11454= p;
nctempchar1* nctemp11456=CodeParulim(nctemp11454);
return nctemp11456;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11462=CodeMktemp();
tmp1=nctemp11462;
struct tree* nctemp11468= p;
nctempchar1* nctemp11470=CodeParulim(nctemp11468);
tmp2=nctemp11470;
struct tree* nctemp11476= p;
nctempchar1* nctemp11478=CodeParllim(nctemp11476);
tmp3=nctemp11478;
struct tree* nctemp11480= p;
struct nctempchar1 *nctemp11484;
static struct nctempchar1 nctemp11485 = {{ 5}, (char*)"int \0"};
nctemp11484=&nctemp11485;
nctempchar1* nctemp11482= nctemp11484;
int nctemp11486=CodeEs(nctemp11480,nctemp11482);
struct tree* nctemp11488= p;
nctempchar1* nctemp11490= tmp1;
int nctemp11493=CodeEs(nctemp11488,nctemp11490);
struct tree* nctemp11495= p;
struct nctempchar1 *nctemp11499;
static struct nctempchar1 nctemp11500 = {{ 2}, (char*)"=\0"};
nctemp11499=&nctemp11500;
nctempchar1* nctemp11497= nctemp11499;
int nctemp11501=CodeEs(nctemp11495,nctemp11497);
struct tree* nctemp11503= p;
nctempchar1* nctemp11505= tmp2;
int nctemp11508=CodeEs(nctemp11503,nctemp11505);
struct tree* nctemp11510= p;
struct nctempchar1 *nctemp11514;
static struct nctempchar1 nctemp11515 = {{ 2}, (char*)"-\0"};
nctemp11514=&nctemp11515;
nctempchar1* nctemp11512= nctemp11514;
int nctemp11516=CodeEs(nctemp11510,nctemp11512);
struct tree* nctemp11518= p;
nctempchar1* nctemp11520= tmp3;
int nctemp11523=CodeEs(nctemp11518,nctemp11520);
struct tree* nctemp11525= p;
struct nctempchar1 *nctemp11529;
static struct nctempchar1 nctemp11530 = {{ 4}, (char*)";\n\0"};
nctemp11529=&nctemp11530;
nctempchar1* nctemp11527= nctemp11529;
int nctemp11531=CodeEs(nctemp11525,nctemp11527);
nctempchar1* nctemp11535= tmp3;
nctempchar1* nctemp11538= llim;
int nctemp11541=LibeStrcpy(nctemp11535,nctemp11538);
int nctemp11532 = (nctemp11541 ==0);
if(nctemp11532)
{
struct nctempchar1 *nctemp11546;
static struct nctempchar1 nctemp11547 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11546=&nctemp11547;
nctempchar1* nctemp11544= nctemp11546;
int nctemp11548=CodeError(nctemp11544);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11555= p;
struct tree* nctemp11557=PtreeMvsister(nctemp11555);
p =nctemp11557;
}
struct tree* nctemp11563= p;
nctempchar1* nctemp11565= llim;
nctempchar1* nctemp11568=CodeParlen(nctemp11563,nctemp11565);
tmp=nctemp11568;
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
int nctemp11575=m->d[0];r =nctemp11575;
nctempchar1* nctemp11584=CodeMktemp();
nsize=nctemp11584;
struct tree* nctemp11586= p;
struct nctempchar1 *nctemp11590;
static struct nctempchar1 nctemp11591 = {{ 5}, (char*)"int \0"};
nctemp11590=&nctemp11591;
nctempchar1* nctemp11588= nctemp11590;
int nctemp11592=CodeEs(nctemp11586,nctemp11588);
struct tree* nctemp11594= p;
nctempchar1* nctemp11596= nsize;
int nctemp11599=CodeEs(nctemp11594,nctemp11596);
struct tree* nctemp11601= p;
struct nctempchar1 *nctemp11605;
static struct nctempchar1 nctemp11606 = {{ 2}, (char*)"=\0"};
nctemp11605=&nctemp11606;
nctempchar1* nctemp11603= nctemp11605;
int nctemp11607=CodeEs(nctemp11601,nctemp11603);
for(i = 0;i < r;i = (i + 1)){
int nctemp11616 = r - 1;
int nctemp11608 = (i ==nctemp11616);
if(nctemp11608)
{
struct tree* nctemp11618= p;
int nctemp11622=i;
nctempchar1* nctemp11620= m->a[nctemp11622].s;
int nctemp11625=CodeEs(nctemp11618,nctemp11620);
struct tree* nctemp11627= p;
struct nctempchar1 *nctemp11631;
static struct nctempchar1 nctemp11632 = {{ 4}, (char*)";\n\0"};
nctemp11631=&nctemp11632;
nctempchar1* nctemp11629= nctemp11631;
int nctemp11633=CodeEs(nctemp11627,nctemp11629);
}
else{
struct tree* nctemp11635= p;
int nctemp11639=i;
nctempchar1* nctemp11637= m->a[nctemp11639].s;
int nctemp11642=CodeEs(nctemp11635,nctemp11637);
struct tree* nctemp11644= p;
struct nctempchar1 *nctemp11648;
static struct nctempchar1 nctemp11649 = {{ 2}, (char*)"*\0"};
nctemp11648=&nctemp11649;
nctempchar1* nctemp11646= nctemp11648;
int nctemp11650=CodeEs(nctemp11644,nctemp11646);
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
int nctemp11654= 1;
int nctemp11656=CodeSetparallel(nctemp11654);
sp = p;
struct tree* nctemp11661= p;
int nctemp11663=PtreeGetrank(nctemp11661);
rank =nctemp11663;
int nctemp11670=rank;
struct nctempcharr1 *nctemp11669;
nctemp11669=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11669->d[0]=rank;
nctemp11669->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11670);
m=nctemp11669;
int nctemp11679=rank;
struct nctempcharr1 *nctemp11678;
nctemp11678=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11678->d[0]=rank;
nctemp11678->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11679);
i=nctemp11678;
int nctemp11688=rank;
struct nctempcharr1 *nctemp11687;
nctemp11687=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11687->d[0]=rank;
nctemp11687->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11688);
nl=nctemp11687;
struct tree* nctemp11695= p;
struct tree* nctemp11697=PtreeMvchild(nctemp11695);
p =nctemp11697;
struct tree* nctemp11702= p;
struct tree* nctemp11704=PtreeMvchild(nctemp11702);
slice =nctemp11704;
struct tree* nctemp11706= p;
struct nctempchar1 *nctemp11710;
static struct nctempchar1 nctemp11711 = {{ 4}, (char*)"{\n\0"};
nctemp11710=&nctemp11711;
nctempchar1* nctemp11708= nctemp11710;
int nctemp11712=CodeEs(nctemp11706,nctemp11708);
struct tree* nctemp11718= slice;
nctempchar1* nctemp11720=CodeParprocno(nctemp11718);
pno=nctemp11720;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11724=l;
struct tree* nctemp11728= slice;
int nctemp11735 = l + 1;
int nctemp11730= nctemp11735;
nctempchar1* nctemp11736=CodeParidxrank(nctemp11728,nctemp11730);
i->a[nctemp11724].s=nctemp11736;
int nctemp11740=l;
int nctemp11745=4096;
nctempchar1 *nctemp11744;
nctemp11744=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11744->d[0]=4096;
nctemp11744->a=(char *)RunMalloc(sizeof(char)*nctemp11745);
nl->a[nctemp11740].s=nctemp11744;
int nctemp11751=l;
struct tree* nctemp11755= slice;
int nctemp11762 = l + 1;
int nctemp11757= nctemp11762;
int nctemp11765=l;
nctempchar1* nctemp11763= nl->a[nctemp11765].s;
nctempchar1* nctemp11768=CodeParlenrank(nctemp11755,nctemp11757,nctemp11763);
m->a[nctemp11751].s=nctemp11768;
}
struct tree* nctemp11774= p;
nctempcharr1* nctemp11776= m;
nctempchar1* nctemp11779=CodeParnsize(nctemp11774,nctemp11776);
nmax=nctemp11779;
struct tree* nctemp11781= p;
struct nctempchar1 *nctemp11785;
static struct nctempchar1 nctemp11786 = {{ 5}, (char*)"for(\0"};
nctemp11785=&nctemp11786;
nctempchar1* nctemp11783= nctemp11785;
int nctemp11787=CodeEs(nctemp11781,nctemp11783);
struct tree* nctemp11789= p;
nctempchar1* nctemp11791= pno;
int nctemp11794=CodeEs(nctemp11789,nctemp11791);
struct tree* nctemp11796= p;
struct nctempchar1 *nctemp11800;
static struct nctempchar1 nctemp11801 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11800=&nctemp11801;
nctempchar1* nctemp11798= nctemp11800;
int nctemp11802=CodeEs(nctemp11796,nctemp11798);
struct tree* nctemp11804= p;
nctempchar1* nctemp11806= pno;
int nctemp11809=CodeEs(nctemp11804,nctemp11806);
struct tree* nctemp11811= p;
struct nctempchar1 *nctemp11815;
static struct nctempchar1 nctemp11816 = {{ 2}, (char*)"<\0"};
nctemp11815=&nctemp11816;
nctempchar1* nctemp11813= nctemp11815;
int nctemp11817=CodeEs(nctemp11811,nctemp11813);
struct tree* nctemp11819= p;
nctempchar1* nctemp11821= nmax;
int nctemp11824=CodeEs(nctemp11819,nctemp11821);
struct tree* nctemp11826= p;
struct nctempchar1 *nctemp11830;
static struct nctempchar1 nctemp11831 = {{ 2}, (char*)";\0"};
nctemp11830=&nctemp11831;
nctempchar1* nctemp11828= nctemp11830;
int nctemp11832=CodeEs(nctemp11826,nctemp11828);
struct tree* nctemp11834= p;
nctempchar1* nctemp11836= pno;
int nctemp11839=CodeEs(nctemp11834,nctemp11836);
struct tree* nctemp11841= p;
struct nctempchar1 *nctemp11845;
static struct nctempchar1 nctemp11846 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11845=&nctemp11846;
nctempchar1* nctemp11843= nctemp11845;
int nctemp11847=CodeEs(nctemp11841,nctemp11843);
struct tree* nctemp11849= p;
struct nctempchar1 *nctemp11853;
static struct nctempchar1 nctemp11854 = {{ 5}, (char*)"){\n\0"};
nctemp11853=&nctemp11854;
nctempchar1* nctemp11851= nctemp11853;
int nctemp11855=CodeEs(nctemp11849,nctemp11851);
struct nctempchar1 *nctemp11863;
static struct nctempchar1 nctemp11864 = {{ 2}, (char*)"1\0"};
nctemp11863=&nctemp11864;
nctempchar1* nctemp11861= nctemp11863;
nctempchar1* nctemp11865=LibeStrsave(nctemp11861);
qk=nctemp11865;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11874 = rank - 1;
int nctemp11866 = (l ==nctemp11874);
if(nctemp11866)
{
struct tree* nctemp11876= p;
int nctemp11880=l;
nctempchar1* nctemp11878= i->a[nctemp11880].s;
int nctemp11883=CodeEs(nctemp11876,nctemp11878);
struct tree* nctemp11885= p;
struct nctempchar1 *nctemp11889;
static struct nctempchar1 nctemp11890 = {{ 2}, (char*)"=\0"};
nctemp11889=&nctemp11890;
nctempchar1* nctemp11887= nctemp11889;
int nctemp11891=CodeEs(nctemp11885,nctemp11887);
struct tree* nctemp11893= p;
struct nctempchar1 *nctemp11897;
static struct nctempchar1 nctemp11898 = {{ 2}, (char*)"(\0"};
nctemp11897=&nctemp11898;
nctempchar1* nctemp11895= nctemp11897;
int nctemp11899=CodeEs(nctemp11893,nctemp11895);
struct tree* nctemp11901= p;
nctempchar1* nctemp11903= pno;
int nctemp11906=CodeEs(nctemp11901,nctemp11903);
struct tree* nctemp11908= p;
struct nctempchar1 *nctemp11912;
static struct nctempchar1 nctemp11913 = {{ 2}, (char*)"/\0"};
nctemp11912=&nctemp11913;
nctempchar1* nctemp11910= nctemp11912;
int nctemp11914=CodeEs(nctemp11908,nctemp11910);
struct tree* nctemp11916= p;
struct nctempchar1 *nctemp11920;
static struct nctempchar1 nctemp11921 = {{ 2}, (char*)"(\0"};
nctemp11920=&nctemp11921;
nctempchar1* nctemp11918= nctemp11920;
int nctemp11922=CodeEs(nctemp11916,nctemp11918);
struct tree* nctemp11924= p;
nctempchar1* nctemp11926= qk;
int nctemp11929=CodeEs(nctemp11924,nctemp11926);
struct tree* nctemp11931= p;
struct nctempchar1 *nctemp11935;
static struct nctempchar1 nctemp11936 = {{ 2}, (char*)")\0"};
nctemp11935=&nctemp11936;
nctempchar1* nctemp11933= nctemp11935;
int nctemp11937=CodeEs(nctemp11931,nctemp11933);
struct tree* nctemp11939= p;
struct nctempchar1 *nctemp11943;
static struct nctempchar1 nctemp11944 = {{ 2}, (char*)")\0"};
nctemp11943=&nctemp11944;
nctempchar1* nctemp11941= nctemp11943;
int nctemp11945=CodeEs(nctemp11939,nctemp11941);
struct tree* nctemp11947= p;
struct nctempchar1 *nctemp11951;
static struct nctempchar1 nctemp11952 = {{ 2}, (char*)"+\0"};
nctemp11951=&nctemp11952;
nctempchar1* nctemp11949= nctemp11951;
int nctemp11953=CodeEs(nctemp11947,nctemp11949);
struct tree* nctemp11955= p;
int nctemp11959=l;
nctempchar1* nctemp11957= nl->a[nctemp11959].s;
int nctemp11962=CodeEs(nctemp11955,nctemp11957);
int nctemp11965=l;
RunFree(nl->a[nctemp11965].s->a);
RunFree(nl->a[nctemp11965].s);
struct tree* nctemp11969= p;
struct nctempchar1 *nctemp11973;
static struct nctempchar1 nctemp11974 = {{ 4}, (char*)";\n\0"};
nctemp11973=&nctemp11974;
nctempchar1* nctemp11971= nctemp11973;
int nctemp11975=CodeEs(nctemp11969,nctemp11971);
}
else{
struct tree* nctemp11977= p;
int nctemp11981=l;
nctempchar1* nctemp11979= i->a[nctemp11981].s;
int nctemp11984=CodeEs(nctemp11977,nctemp11979);
struct tree* nctemp11986= p;
struct nctempchar1 *nctemp11990;
static struct nctempchar1 nctemp11991 = {{ 2}, (char*)"=\0"};
nctemp11990=&nctemp11991;
nctempchar1* nctemp11988= nctemp11990;
int nctemp11992=CodeEs(nctemp11986,nctemp11988);
struct tree* nctemp11994= p;
struct nctempchar1 *nctemp11998;
static struct nctempchar1 nctemp11999 = {{ 2}, (char*)"(\0"};
nctemp11998=&nctemp11999;
nctempchar1* nctemp11996= nctemp11998;
int nctemp12000=CodeEs(nctemp11994,nctemp11996);
struct tree* nctemp12002= p;
nctempchar1* nctemp12004= pno;
int nctemp12007=CodeEs(nctemp12002,nctemp12004);
struct tree* nctemp12009= p;
struct nctempchar1 *nctemp12013;
static struct nctempchar1 nctemp12014 = {{ 2}, (char*)"/\0"};
nctemp12013=&nctemp12014;
nctempchar1* nctemp12011= nctemp12013;
int nctemp12015=CodeEs(nctemp12009,nctemp12011);
struct tree* nctemp12017= p;
struct nctempchar1 *nctemp12021;
static struct nctempchar1 nctemp12022 = {{ 2}, (char*)"(\0"};
nctemp12021=&nctemp12022;
nctempchar1* nctemp12019= nctemp12021;
int nctemp12023=CodeEs(nctemp12017,nctemp12019);
struct tree* nctemp12025= p;
nctempchar1* nctemp12027= qk;
int nctemp12030=CodeEs(nctemp12025,nctemp12027);
struct tree* nctemp12032= p;
struct nctempchar1 *nctemp12036;
static struct nctempchar1 nctemp12037 = {{ 2}, (char*)")\0"};
nctemp12036=&nctemp12037;
nctempchar1* nctemp12034= nctemp12036;
int nctemp12038=CodeEs(nctemp12032,nctemp12034);
struct tree* nctemp12040= p;
struct nctempchar1 *nctemp12044;
static struct nctempchar1 nctemp12045 = {{ 2}, (char*)")\0"};
nctemp12044=&nctemp12045;
nctempchar1* nctemp12042= nctemp12044;
int nctemp12046=CodeEs(nctemp12040,nctemp12042);
struct tree* nctemp12048= p;
struct nctempchar1 *nctemp12052;
static struct nctempchar1 nctemp12053 = {{ 2}, (char*)"%\0"};
nctemp12052=&nctemp12053;
nctempchar1* nctemp12050= nctemp12052;
int nctemp12054=CodeEs(nctemp12048,nctemp12050);
struct tree* nctemp12056= p;
int nctemp12060=l;
nctempchar1* nctemp12058= m->a[nctemp12060].s;
int nctemp12063=CodeEs(nctemp12056,nctemp12058);
struct tree* nctemp12065= p;
struct nctempchar1 *nctemp12069;
static struct nctempchar1 nctemp12070 = {{ 2}, (char*)"+\0"};
nctemp12069=&nctemp12070;
nctempchar1* nctemp12067= nctemp12069;
int nctemp12071=CodeEs(nctemp12065,nctemp12067);
struct tree* nctemp12073= p;
int nctemp12077=l;
nctempchar1* nctemp12075= nl->a[nctemp12077].s;
int nctemp12080=CodeEs(nctemp12073,nctemp12075);
int nctemp12083=l;
RunFree(nl->a[nctemp12083].s->a);
RunFree(nl->a[nctemp12083].s);
struct tree* nctemp12087= p;
struct nctempchar1 *nctemp12091;
static struct nctempchar1 nctemp12092 = {{ 4}, (char*)";\n\0"};
nctemp12091=&nctemp12092;
nctempchar1* nctemp12089= nctemp12091;
int nctemp12093=CodeEs(nctemp12087,nctemp12089);
}
nctempchar1* nctemp12099= qk;
struct nctempchar1 *nctemp12104;
static struct nctempchar1 nctemp12105 = {{ 2}, (char*)"*\0"};
nctemp12104=&nctemp12105;
nctempchar1* nctemp12102= nctemp12104;
nctempchar1* nctemp12106=LibeStradd(nctemp12099,nctemp12102);
tmp=nctemp12106;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12115= qk;
int nctemp12120=l;
nctempchar1* nctemp12118= m->a[nctemp12120].s;
nctempchar1* nctemp12123=LibeStradd(nctemp12115,nctemp12118);
tmp=nctemp12123;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12131= sp;
struct tree* nctemp12133=PtreeMvchild(nctemp12131);
p =nctemp12133;
struct tree* nctemp12138= p;
struct tree* nctemp12140=PtreeMvsister(nctemp12138);
p =nctemp12140;
struct tree* nctemp12142= p;
int nctemp12144=CodeCompstmnt(nctemp12142);
struct tree* nctemp12146= p;
struct nctempchar1 *nctemp12150;
static struct nctempchar1 nctemp12151 = {{ 4}, (char*)"}\n\0"};
nctemp12150=&nctemp12151;
nctempchar1* nctemp12148= nctemp12150;
int nctemp12152=CodeEs(nctemp12146,nctemp12148);
struct tree* nctemp12154= p;
struct nctempchar1 *nctemp12158;
static struct nctempchar1 nctemp12159 = {{ 4}, (char*)"}\n\0"};
nctemp12158=&nctemp12159;
nctempchar1* nctemp12156= nctemp12158;
int nctemp12160=CodeEs(nctemp12154,nctemp12156);
int nctemp12162= 0;
int nctemp12164=CodeSetparallel(nctemp12162);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12169=CodeGetarch();
int nctemp12166 = (nctemp12169 ==1);
if(nctemp12166)
{
struct tree* nctemp12172= p;
int nctemp12174=CodeParallelstmntcpu(nctemp12172);
}
else{
int nctemp12178=CodeGetarch();
int nctemp12175 = (nctemp12178 ==2);
if(nctemp12175)
{
struct tree* nctemp12181= p;
int nctemp12183=CodeParallelstmntgpu(nctemp12181);
}
else{
int nctemp12187=CodeGetarch();
int nctemp12184 = (nctemp12187 ==3);
if(nctemp12184)
{
struct tree* nctemp12190= p;
int nctemp12192=CodeParallelstmntgpu(nctemp12190);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12198= p;
struct tree* nctemp12200=PtreeMvchild(nctemp12198);
p =nctemp12200;
struct tree* nctemp12206= p;
nctempchar1* nctemp12208=CodeExpr(nctemp12206);
cond=nctemp12208;
struct tree* nctemp12210= p;
struct nctempchar1 *nctemp12214;
static struct nctempchar1 nctemp12215 = {{ 4}, (char*)"if(\0"};
nctemp12214=&nctemp12215;
nctempchar1* nctemp12212= nctemp12214;
int nctemp12216=CodeEs(nctemp12210,nctemp12212);
struct tree* nctemp12218= p;
nctempchar1* nctemp12220= cond;
int nctemp12223=CodeEs(nctemp12218,nctemp12220);
struct tree* nctemp12225= p;
struct nctempchar1 *nctemp12229;
static struct nctempchar1 nctemp12230 = {{ 4}, (char*)")\n\0"};
nctemp12229=&nctemp12230;
nctempchar1* nctemp12227= nctemp12229;
int nctemp12231=CodeEs(nctemp12225,nctemp12227);
struct tree* nctemp12236= p;
struct tree* nctemp12238=PtreeMvsister(nctemp12236);
p =nctemp12238;
struct tree* nctemp12240= p;
int nctemp12242=CodeStmnt(nctemp12240);
struct tree* nctemp12250= p;
struct tree* nctemp12252=PtreeMvsister(nctemp12250);
p =nctemp12252;
int nctemp12243 = (p !=0);
if(nctemp12243)
{
struct tree* nctemp12259= p;
nctempchar1* nctemp12261=PtreeGetname(nctemp12259);
nctempchar1* nctemp12257= nctemp12261;
struct nctempchar1 *nctemp12264;
static struct nctempchar1 nctemp12265 = {{ 5}, (char*)"else\0"};
nctemp12264=&nctemp12265;
nctempchar1* nctemp12262= nctemp12264;
int nctemp12266=LibeStrcmp(nctemp12257,nctemp12262);
int nctemp12254 = (nctemp12266 ==1);
if(nctemp12254)
{
struct tree* nctemp12272= p;
struct tree* nctemp12274=PtreeMvchild(nctemp12272);
p =nctemp12274;
struct tree* nctemp12276= p;
struct nctempchar1 *nctemp12280;
static struct nctempchar1 nctemp12281 = {{ 5}, (char*)"else\0"};
nctemp12280=&nctemp12281;
nctempchar1* nctemp12278= nctemp12280;
int nctemp12282=CodeEs(nctemp12276,nctemp12278);
struct tree* nctemp12284= p;
int nctemp12286=CodeStmnt(nctemp12284);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12292= p;
struct tree* nctemp12294=PtreeMvchild(nctemp12292);
np =nctemp12294;
struct tree* nctemp12300= np;
nctempchar1* nctemp12302=CodeExpr(nctemp12300);
rval=nctemp12302;
struct tree* nctemp12304= np;
struct nctempchar1 *nctemp12308;
static struct nctempchar1 nctemp12309 = {{ 8}, (char*)"return \0"};
nctemp12308=&nctemp12309;
nctempchar1* nctemp12306= nctemp12308;
int nctemp12310=CodeEs(nctemp12304,nctemp12306);
struct tree* nctemp12312= np;
nctempchar1* nctemp12314= rval;
int nctemp12317=CodeEs(nctemp12312,nctemp12314);
struct tree* nctemp12319= np;
struct nctempchar1 *nctemp12323;
static struct nctempchar1 nctemp12324 = {{ 4}, (char*)";\n\0"};
nctemp12323=&nctemp12324;
nctempchar1* nctemp12321= nctemp12323;
int nctemp12325=CodeEs(nctemp12319,nctemp12321);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12328= p;
struct nctempchar1 *nctemp12332;
static struct nctempchar1 nctemp12333 = {{ 4}, (char*)"{\n\0"};
nctemp12332=&nctemp12333;
nctempchar1* nctemp12330= nctemp12332;
int nctemp12334=CodeEs(nctemp12328,nctemp12330);
struct tree* nctemp12339= p;
struct tree* nctemp12341=PtreeMvchild(nctemp12339);
p =nctemp12341;
int nctemp12342 = (p ==0);
if(nctemp12342)
{
struct tree* nctemp12347= sp;
struct nctempchar1 *nctemp12351;
static struct nctempchar1 nctemp12352 = {{ 4}, (char*)"}\n\0"};
nctemp12351=&nctemp12352;
nctempchar1* nctemp12349= nctemp12351;
int nctemp12353=CodeEs(nctemp12347,nctemp12349);
return 1;
}
struct tree* nctemp12356= p;
struct symbol* nctemp12360=SymGetltp();
struct symbol* nctemp12358= nctemp12360;
int nctemp12361=CodeDeclarations(nctemp12356,nctemp12358);
struct tree* nctemp12367= p;
nctempchar1* nctemp12369=PtreeGetname(nctemp12367);
nctempchar1* nctemp12365= nctemp12369;
struct nctempchar1 *nctemp12372;
static struct nctempchar1 nctemp12373 = {{ 13}, (char*)"declarations\0"};
nctemp12372=&nctemp12373;
nctempchar1* nctemp12370= nctemp12372;
int nctemp12374=LibeStrcmp(nctemp12365,nctemp12370);
int nctemp12362 = (nctemp12374 ==1);
if(nctemp12362)
{
struct tree* nctemp12380= p;
struct tree* nctemp12382=PtreeMvsister(nctemp12380);
p =nctemp12382;
}
int nctemp12383 = (p !=0);
int nctemp12387=nctemp12383;
while(nctemp12387)
{{
struct tree* nctemp12393= p;
nctempchar1* nctemp12395=PtreeGetname(nctemp12393);
nctempchar1* nctemp12391= nctemp12395;
struct nctempchar1 *nctemp12398;
static struct nctempchar1 nctemp12399 = {{ 5}, (char*)"expr\0"};
nctemp12398=&nctemp12399;
nctempchar1* nctemp12396= nctemp12398;
int nctemp12400=LibeStrcmp(nctemp12391,nctemp12396);
int nctemp12388 = (nctemp12400 ==1);
if(nctemp12388)
{
int nctemp12405=CodeGetbreak();
int nctemp12402 = (nctemp12405 ==1);
if(nctemp12402)
{
struct tree* nctemp12408= p;
nctempchar1* nctemp12410=CodeExpr(nctemp12408);
}
else{
struct tree* nctemp12414= p;
int nctemp12416=PtreeGetsimple(nctemp12414);
int nctemp12411 = (nctemp12416 ==1);
if(nctemp12411)
{
struct tree* nctemp12419= p;
int nctemp12421=CodeSexpr(nctemp12419);
struct tree* nctemp12423= p;
struct nctempchar1 *nctemp12427;
static struct nctempchar1 nctemp12428 = {{ 4}, (char*)";\n\0"};
nctemp12427=&nctemp12428;
nctempchar1* nctemp12425= nctemp12427;
int nctemp12429=CodeEs(nctemp12423,nctemp12425);
}
else{
struct tree* nctemp12431= p;
nctempchar1* nctemp12433=CodeExpr(nctemp12431);
}
}
}
struct tree* nctemp12439= p;
nctempchar1* nctemp12441=PtreeGetname(nctemp12439);
nctempchar1* nctemp12437= nctemp12441;
struct nctempchar1 *nctemp12444;
static struct nctempchar1 nctemp12445 = {{ 6}, (char*)"while\0"};
nctemp12444=&nctemp12445;
nctempchar1* nctemp12442= nctemp12444;
int nctemp12446=LibeStrcmp(nctemp12437,nctemp12442);
int nctemp12434 = (nctemp12446 ==1);
if(nctemp12434)
{
struct tree* nctemp12449= p;
int nctemp12451=CodeWhilestmnt(nctemp12449);
}
struct tree* nctemp12457= p;
nctempchar1* nctemp12459=PtreeGetname(nctemp12457);
nctempchar1* nctemp12455= nctemp12459;
struct nctempchar1 *nctemp12462;
static struct nctempchar1 nctemp12463 = {{ 4}, (char*)"for\0"};
nctemp12462=&nctemp12463;
nctempchar1* nctemp12460= nctemp12462;
int nctemp12464=LibeStrcmp(nctemp12455,nctemp12460);
int nctemp12452 = (nctemp12464 ==1);
if(nctemp12452)
{
struct tree* nctemp12470= p;
struct tree* nctemp12472=PtreeMvchild(nctemp12470);
q =nctemp12472;
struct tree* nctemp12477= q;
struct tree* nctemp12479=PtreeMvsister(nctemp12477);
r =nctemp12479;
struct tree* nctemp12486= q;
int nctemp12488=PtreeGetsimple(nctemp12486);
struct tree* nctemp12490= r;
int nctemp12492=PtreeGetsimple(nctemp12490);
int nctemp12483 = (nctemp12488 && nctemp12492);
struct tree* nctemp12496= r;
struct tree* nctemp12498=PtreeMvsister(nctemp12496);
struct tree* nctemp12494= nctemp12498;
int nctemp12499=PtreeGetsimple(nctemp12494);
int nctemp12480 = (nctemp12483 && nctemp12499);
if(nctemp12480)
{
struct tree* nctemp12501= p;
int nctemp12503=CodeSforstmnt(nctemp12501);
}
else{
struct tree* nctemp12505= q;
int nctemp12507= 0;
int nctemp12509=PtreeSetsimple(nctemp12505,nctemp12507);
struct tree* nctemp12511= r;
int nctemp12513= 0;
int nctemp12515=PtreeSetsimple(nctemp12511,nctemp12513);
struct tree* nctemp12519= r;
struct tree* nctemp12521=PtreeMvsister(nctemp12519);
struct tree* nctemp12517= nctemp12521;
int nctemp12522= 0;
int nctemp12524=PtreeSetsimple(nctemp12517,nctemp12522);
struct tree* nctemp12526= p;
int nctemp12528=CodeForstmnt(nctemp12526);
}
}
struct tree* nctemp12534= p;
nctempchar1* nctemp12536=PtreeGetname(nctemp12534);
nctempchar1* nctemp12532= nctemp12536;
struct nctempchar1 *nctemp12539;
static struct nctempchar1 nctemp12540 = {{ 9}, (char*)"parallel\0"};
nctemp12539=&nctemp12540;
nctempchar1* nctemp12537= nctemp12539;
int nctemp12541=LibeStrcmp(nctemp12532,nctemp12537);
int nctemp12529 = (nctemp12541 ==1);
if(nctemp12529)
{
struct tree* nctemp12544= p;
int nctemp12546=CodeParallelstmnt(nctemp12544);
}
struct tree* nctemp12552= p;
nctempchar1* nctemp12554=PtreeGetname(nctemp12552);
nctempchar1* nctemp12550= nctemp12554;
struct nctempchar1 *nctemp12557;
static struct nctempchar1 nctemp12558 = {{ 3}, (char*)"if\0"};
nctemp12557=&nctemp12558;
nctempchar1* nctemp12555= nctemp12557;
int nctemp12559=LibeStrcmp(nctemp12550,nctemp12555);
int nctemp12547 = (nctemp12559 ==1);
if(nctemp12547)
{
struct tree* nctemp12562= p;
int nctemp12564=CodeIfstmnt(nctemp12562);
}
struct tree* nctemp12570= p;
nctempchar1* nctemp12572=PtreeGetname(nctemp12570);
nctempchar1* nctemp12568= nctemp12572;
struct nctempchar1 *nctemp12575;
static struct nctempchar1 nctemp12576 = {{ 7}, (char*)"return\0"};
nctemp12575=&nctemp12576;
nctempchar1* nctemp12573= nctemp12575;
int nctemp12577=LibeStrcmp(nctemp12568,nctemp12573);
int nctemp12565 = (nctemp12577 ==1);
if(nctemp12565)
{
struct tree* nctemp12580= p;
int nctemp12582=CodeReturnstmnt(nctemp12580);
}
struct tree* nctemp12587= p;
struct tree* nctemp12589=PtreeMvsister(nctemp12587);
p =nctemp12589;
}
int nctemp12590 = (p !=0);
nctemp12387=nctemp12590;}struct tree* nctemp12595= sp;
struct nctempchar1 *nctemp12599;
static struct nctempchar1 nctemp12600 = {{ 4}, (char*)"}\n\0"};
nctemp12599=&nctemp12600;
nctempchar1* nctemp12597= nctemp12599;
int nctemp12601=CodeEs(nctemp12595,nctemp12597);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12604= p;
struct nctempchar1 *nctemp12608;
static struct nctempchar1 nctemp12609 = {{ 4}, (char*)"{\n\0"};
nctemp12608=&nctemp12609;
nctempchar1* nctemp12606= nctemp12608;
int nctemp12610=CodeEs(nctemp12604,nctemp12606);
struct tree* nctemp12616= p;
nctempchar1* nctemp12618=PtreeGetname(nctemp12616);
nctempchar1* nctemp12614= nctemp12618;
struct nctempchar1 *nctemp12621;
static struct nctempchar1 nctemp12622 = {{ 10}, (char*)"compstmnt\0"};
nctemp12621=&nctemp12622;
nctempchar1* nctemp12619= nctemp12621;
int nctemp12623=LibeStrcmp(nctemp12614,nctemp12619);
int nctemp12611 = (nctemp12623 ==1);
if(nctemp12611)
{
struct tree* nctemp12629= p;
struct tree* nctemp12631=PtreeMvchild(nctemp12629);
p =nctemp12631;
struct tree* nctemp12633= p;
struct symbol* nctemp12637=SymGetltp();
struct symbol* nctemp12635= nctemp12637;
int nctemp12638=CodeDeclarations(nctemp12633,nctemp12635);
struct tree* nctemp12644= p;
nctempchar1* nctemp12646=PtreeGetname(nctemp12644);
nctempchar1* nctemp12642= nctemp12646;
struct nctempchar1 *nctemp12649;
static struct nctempchar1 nctemp12650 = {{ 13}, (char*)"declarations\0"};
nctemp12649=&nctemp12650;
nctempchar1* nctemp12647= nctemp12649;
int nctemp12651=LibeStrcmp(nctemp12642,nctemp12647);
int nctemp12639 = (nctemp12651 ==1);
if(nctemp12639)
{
struct tree* nctemp12657= p;
struct tree* nctemp12659=PtreeMvsister(nctemp12657);
p =nctemp12659;
}
}
int nctemp12660 = (p !=0);
int nctemp12664=nctemp12660;
while(nctemp12664)
{{
struct tree* nctemp12670= p;
nctempchar1* nctemp12672=PtreeGetname(nctemp12670);
nctempchar1* nctemp12668= nctemp12672;
struct nctempchar1 *nctemp12675;
static struct nctempchar1 nctemp12676 = {{ 10}, (char*)"compstmnt\0"};
nctemp12675=&nctemp12676;
nctempchar1* nctemp12673= nctemp12675;
int nctemp12677=LibeStrcmp(nctemp12668,nctemp12673);
int nctemp12665 = (nctemp12677 ==1);
if(nctemp12665)
{
struct tree* nctemp12680= p;
int nctemp12682=CodeCompstmnt(nctemp12680);
}
struct tree* nctemp12688= p;
nctempchar1* nctemp12690=PtreeGetname(nctemp12688);
nctempchar1* nctemp12686= nctemp12690;
struct nctempchar1 *nctemp12693;
static struct nctempchar1 nctemp12694 = {{ 5}, (char*)"expr\0"};
nctemp12693=&nctemp12694;
nctempchar1* nctemp12691= nctemp12693;
int nctemp12695=LibeStrcmp(nctemp12686,nctemp12691);
int nctemp12683 = (nctemp12695 ==1);
if(nctemp12683)
{
int nctemp12700=CodeGetbreak();
int nctemp12697 = (nctemp12700 ==1);
if(nctemp12697)
{
struct tree* nctemp12703= p;
nctempchar1* nctemp12705=CodeExpr(nctemp12703);
}
else{
struct tree* nctemp12709= p;
int nctemp12711=PtreeGetsimple(nctemp12709);
int nctemp12706 = (nctemp12711 ==1);
if(nctemp12706)
{
struct tree* nctemp12714= p;
int nctemp12716=CodeSexpr(nctemp12714);
struct tree* nctemp12718= p;
struct nctempchar1 *nctemp12722;
static struct nctempchar1 nctemp12723 = {{ 4}, (char*)";\n\0"};
nctemp12722=&nctemp12723;
nctempchar1* nctemp12720= nctemp12722;
int nctemp12724=CodeEs(nctemp12718,nctemp12720);
}
else{
struct tree* nctemp12726= p;
nctempchar1* nctemp12728=CodeExpr(nctemp12726);
}
}
}
struct tree* nctemp12734= p;
nctempchar1* nctemp12736=PtreeGetname(nctemp12734);
nctempchar1* nctemp12732= nctemp12736;
struct nctempchar1 *nctemp12739;
static struct nctempchar1 nctemp12740 = {{ 6}, (char*)"while\0"};
nctemp12739=&nctemp12740;
nctempchar1* nctemp12737= nctemp12739;
int nctemp12741=LibeStrcmp(nctemp12732,nctemp12737);
int nctemp12729 = (nctemp12741 ==1);
if(nctemp12729)
{
struct tree* nctemp12744= p;
int nctemp12746=CodeWhilestmnt(nctemp12744);
}
struct tree* nctemp12752= p;
nctempchar1* nctemp12754=PtreeGetname(nctemp12752);
nctempchar1* nctemp12750= nctemp12754;
struct nctempchar1 *nctemp12757;
static struct nctempchar1 nctemp12758 = {{ 4}, (char*)"for\0"};
nctemp12757=&nctemp12758;
nctempchar1* nctemp12755= nctemp12757;
int nctemp12759=LibeStrcmp(nctemp12750,nctemp12755);
int nctemp12747 = (nctemp12759 ==1);
if(nctemp12747)
{
struct tree* nctemp12765= p;
struct tree* nctemp12767=PtreeMvchild(nctemp12765);
q =nctemp12767;
struct tree* nctemp12772= q;
struct tree* nctemp12774=PtreeMvsister(nctemp12772);
r =nctemp12774;
struct tree* nctemp12781= q;
int nctemp12783=PtreeGetsimple(nctemp12781);
struct tree* nctemp12785= r;
int nctemp12787=PtreeGetsimple(nctemp12785);
int nctemp12778 = (nctemp12783 && nctemp12787);
struct tree* nctemp12791= r;
struct tree* nctemp12793=PtreeMvsister(nctemp12791);
struct tree* nctemp12789= nctemp12793;
int nctemp12794=PtreeGetsimple(nctemp12789);
int nctemp12775 = (nctemp12778 && nctemp12794);
if(nctemp12775)
{
struct tree* nctemp12796= p;
int nctemp12798=CodeSforstmnt(nctemp12796);
}
else{
struct tree* nctemp12800= q;
int nctemp12802= 0;
int nctemp12804=PtreeSetsimple(nctemp12800,nctemp12802);
struct tree* nctemp12806= r;
int nctemp12808= 0;
int nctemp12810=PtreeSetsimple(nctemp12806,nctemp12808);
struct tree* nctemp12814= r;
struct tree* nctemp12816=PtreeMvsister(nctemp12814);
struct tree* nctemp12812= nctemp12816;
int nctemp12817= 0;
int nctemp12819=PtreeSetsimple(nctemp12812,nctemp12817);
struct tree* nctemp12821= p;
int nctemp12823=CodeForstmnt(nctemp12821);
}
}
struct tree* nctemp12829= p;
nctempchar1* nctemp12831=PtreeGetname(nctemp12829);
nctempchar1* nctemp12827= nctemp12831;
struct nctempchar1 *nctemp12834;
static struct nctempchar1 nctemp12835 = {{ 9}, (char*)"parallel\0"};
nctemp12834=&nctemp12835;
nctempchar1* nctemp12832= nctemp12834;
int nctemp12836=LibeStrcmp(nctemp12827,nctemp12832);
int nctemp12824 = (nctemp12836 ==1);
if(nctemp12824)
{
struct tree* nctemp12839= p;
int nctemp12841=CodeParallelstmnt(nctemp12839);
}
struct tree* nctemp12847= p;
nctempchar1* nctemp12849=PtreeGetname(nctemp12847);
nctempchar1* nctemp12845= nctemp12849;
struct nctempchar1 *nctemp12852;
static struct nctempchar1 nctemp12853 = {{ 3}, (char*)"if\0"};
nctemp12852=&nctemp12853;
nctempchar1* nctemp12850= nctemp12852;
int nctemp12854=LibeStrcmp(nctemp12845,nctemp12850);
int nctemp12842 = (nctemp12854 ==1);
if(nctemp12842)
{
struct tree* nctemp12857= p;
int nctemp12859=CodeIfstmnt(nctemp12857);
}
struct tree* nctemp12865= p;
nctempchar1* nctemp12867=PtreeGetname(nctemp12865);
nctempchar1* nctemp12863= nctemp12867;
struct nctempchar1 *nctemp12870;
static struct nctempchar1 nctemp12871 = {{ 7}, (char*)"return\0"};
nctemp12870=&nctemp12871;
nctempchar1* nctemp12868= nctemp12870;
int nctemp12872=LibeStrcmp(nctemp12863,nctemp12868);
int nctemp12860 = (nctemp12872 ==1);
if(nctemp12860)
{
struct tree* nctemp12875= p;
int nctemp12877=CodeReturnstmnt(nctemp12875);
}
struct tree* nctemp12882= p;
struct tree* nctemp12884=PtreeMvsister(nctemp12882);
p =nctemp12884;
}
int nctemp12885 = (p !=0);
nctemp12664=nctemp12885;}struct tree* nctemp12890= sp;
struct nctempchar1 *nctemp12894;
static struct nctempchar1 nctemp12895 = {{ 4}, (char*)"}\n\0"};
nctemp12894=&nctemp12895;
nctempchar1* nctemp12892= nctemp12894;
int nctemp12896=CodeEs(nctemp12890,nctemp12892);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12899= p;
nctempchar1* nctemp12901= pointer;
int nctemp12904=CodeEs(nctemp12899,nctemp12901);
struct tree* nctemp12906= p;
struct nctempchar1 *nctemp12910;
static struct nctempchar1 nctemp12911 = {{ 2}, (char*)"=\0"};
nctemp12910=&nctemp12911;
nctempchar1* nctemp12908= nctemp12910;
int nctemp12912=CodeEs(nctemp12906,nctemp12908);
struct tree* nctemp12914= p;
struct nctempchar1 *nctemp12918;
static struct nctempchar1 nctemp12919 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12918=&nctemp12919;
nctempchar1* nctemp12916= nctemp12918;
int nctemp12920=CodeEs(nctemp12914,nctemp12916);
struct tree* nctemp12922= p;
struct nctempchar1 *nctemp12926;
static struct nctempchar1 nctemp12927 = {{ 8}, (char*)"sizeof(\0"};
nctemp12926=&nctemp12927;
nctempchar1* nctemp12924= nctemp12926;
int nctemp12928=CodeEs(nctemp12922,nctemp12924);
struct tree* nctemp12930= p;
nctempchar1* nctemp12932= pointer;
int nctemp12935=CodeEs(nctemp12930,nctemp12932);
struct tree* nctemp12937= p;
struct nctempchar1 *nctemp12941;
static struct nctempchar1 nctemp12942 = {{ 6}, (char*)"));\n\0"};
nctemp12941=&nctemp12942;
nctempchar1* nctemp12939= nctemp12941;
int nctemp12943=CodeEs(nctemp12937,nctemp12939);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12948=CodeGetarch();
int nctemp12945 = (nctemp12948 ==1);
if(nctemp12945)
{
struct tree* nctemp12951= p;
int nctemp12953=CodeFdefcpu(nctemp12951);
}
else{
int nctemp12957=CodeGetarch();
int nctemp12954 = (nctemp12957 ==2);
if(nctemp12954)
{
struct tree* nctemp12966= p;
struct tree* nctemp12968=PtreeMvchild(nctemp12966);
struct tree* nctemp12964= nctemp12968;
nctempchar1* nctemp12969=PtreeGetparallel(nctemp12964);
nctempchar1* nctemp12962= nctemp12969;
struct nctempchar1 *nctemp12972;
static struct nctempchar1 nctemp12973 = {{ 9}, (char*)"parallel\0"};
nctemp12972=&nctemp12973;
nctempchar1* nctemp12970= nctemp12972;
int nctemp12974=LibeStrcmp(nctemp12962,nctemp12970);
int nctemp12959 = (nctemp12974 ==1);
if(nctemp12959)
{
struct tree* nctemp12977= p;
int nctemp12979=CodeFdefgpu(nctemp12977);
struct tree* nctemp12981= p;
int nctemp12983=CodeFdewrappergpu(nctemp12981);
}
else{
struct tree* nctemp12985= p;
int nctemp12987=CodeFdefcpu(nctemp12985);
}
}
else{
int nctemp12991=CodeGetarch();
int nctemp12988 = (nctemp12991 ==3);
if(nctemp12988)
{
struct tree* nctemp12998= p;
nctempchar1* nctemp13000=PtreeGetparallel(nctemp12998);
nctempchar1* nctemp12996= nctemp13000;
struct nctempchar1 *nctemp13003;
static struct nctempchar1 nctemp13004 = {{ 9}, (char*)"parallel\0"};
nctemp13003=&nctemp13004;
nctempchar1* nctemp13001= nctemp13003;
int nctemp13005=LibeStrcmp(nctemp12996,nctemp13001);
int nctemp12993 = (nctemp13005 ==1);
if(nctemp12993)
{
struct tree* nctemp13008= p;
int nctemp13010=CodeFdefgpu(nctemp13008);
struct tree* nctemp13012= p;
int nctemp13014=CodeFdewrappergpu(nctemp13012);
}
else{
struct tree* nctemp13016= p;
int nctemp13018=CodeFdefcpu(nctemp13016);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13026;
static struct nctempchar1 nctemp13027 = {{ 6}, (char*)"dummy\0"};
nctemp13026=&nctemp13027;
nctempchar1* nctemp13024= nctemp13026;
struct nctempchar1 *nctemp13030;
static struct nctempchar1 nctemp13031 = {{ 6}, (char*)"dummy\0"};
nctemp13030=&nctemp13031;
nctempchar1* nctemp13028= nctemp13030;
struct tree* nctemp13032=PtreeMknode(nctemp13024,nctemp13028);
p =nctemp13032;
struct tree* nctemp13034= p;
int nctemp13036= 1;
int nctemp13038=PtreeSetline(nctemp13034,nctemp13036);
struct tree* nctemp13040= p;
struct nctempchar1 *nctemp13044;
static struct nctempchar1 nctemp13045 = {{ 34}, (char*)"//  Translated by epsc  version: \0"};
nctemp13044=&nctemp13045;
nctempchar1* nctemp13042= nctemp13044;
int nctemp13046=CodeEs(nctemp13040,nctemp13042);
struct tree* nctemp13048= p;
nctempchar1* nctemp13052=LibeDate();
nctempchar1* nctemp13050= nctemp13052;
int nctemp13053=CodeEs(nctemp13048,nctemp13050);
struct tree* nctemp13055= p;
struct nctempchar1 *nctemp13059;
static struct nctempchar1 nctemp13060 = {{ 3}, (char*)"\n\0"};
nctemp13059=&nctemp13060;
nctempchar1* nctemp13057= nctemp13059;
int nctemp13061=CodeEs(nctemp13055,nctemp13057);
struct tree* nctemp13063= p;
int nctemp13065= 2;
int nctemp13067=PtreeSetline(nctemp13063,nctemp13065);
struct tree* nctemp13069= p;
int nctemp13071= 3;
int nctemp13073=PtreeSetline(nctemp13069,nctemp13071);
struct tree* nctemp13075= p;
int nctemp13077= 4;
int nctemp13079=PtreeSetline(nctemp13075,nctemp13077);
struct tree* nctemp13081= p;
struct nctempchar1 *nctemp13085;
static struct nctempchar1 nctemp13086 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13085=&nctemp13086;
nctempchar1* nctemp13083= nctemp13085;
int nctemp13087=CodeEs(nctemp13081,nctemp13083);
struct tree* nctemp13089= p;
struct nctempchar1 *nctemp13093;
static struct nctempchar1 nctemp13094 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13093=&nctemp13094;
nctempchar1* nctemp13091= nctemp13093;
int nctemp13095=CodeEs(nctemp13089,nctemp13091);
struct tree* nctemp13097= p;
struct nctempchar1 *nctemp13101;
static struct nctempchar1 nctemp13102 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13101=&nctemp13102;
nctempchar1* nctemp13099= nctemp13101;
int nctemp13103=CodeEs(nctemp13097,nctemp13099);
struct tree* nctemp13105= p;
struct nctempchar1 *nctemp13109;
static struct nctempchar1 nctemp13110 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13109=&nctemp13110;
nctempchar1* nctemp13107= nctemp13109;
int nctemp13111=CodeEs(nctemp13105,nctemp13107);
struct tree* nctemp13113= p;
int nctemp13115= 3;
int nctemp13117=PtreeSetline(nctemp13113,nctemp13115);
struct tree* nctemp13119= p;
struct nctempchar1 *nctemp13123;
static struct nctempchar1 nctemp13124 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13123=&nctemp13124;
nctempchar1* nctemp13121= nctemp13123;
int nctemp13125=CodeEs(nctemp13119,nctemp13121);
struct tree* nctemp13127= p;
int nctemp13129= 5;
int nctemp13131=PtreeSetline(nctemp13127,nctemp13129);
struct tree* nctemp13133= p;
struct nctempchar1 *nctemp13137;
static struct nctempchar1 nctemp13138 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13137=&nctemp13138;
nctempchar1* nctemp13135= nctemp13137;
int nctemp13139=CodeEs(nctemp13133,nctemp13135);
struct tree* nctemp13141= p;
int nctemp13143= 7;
int nctemp13145=PtreeSetline(nctemp13141,nctemp13143);
struct tree* nctemp13147= p;
struct nctempchar1 *nctemp13151;
static struct nctempchar1 nctemp13152 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13151=&nctemp13152;
nctempchar1* nctemp13149= nctemp13151;
int nctemp13153=CodeEs(nctemp13147,nctemp13149);
struct tree* nctemp13155= p;
int nctemp13157= 7;
int nctemp13159=PtreeSetline(nctemp13155,nctemp13157);
struct tree* nctemp13161= p;
struct nctempchar1 *nctemp13165;
static struct nctempchar1 nctemp13166 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13165=&nctemp13166;
nctempchar1* nctemp13163= nctemp13165;
int nctemp13167=CodeEs(nctemp13161,nctemp13163);
struct tree* nctemp13169= p;
int nctemp13171= 8;
int nctemp13173=PtreeSetline(nctemp13169,nctemp13171);
int nctemp13177=CodeArraycheck();
int nctemp13174 = (nctemp13177 ==1);
if(nctemp13174)
{
struct tree* nctemp13180= p;
struct nctempchar1 *nctemp13184;
static struct nctempchar1 nctemp13185 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13184=&nctemp13185;
nctempchar1* nctemp13182= nctemp13184;
int nctemp13186=CodeEs(nctemp13180,nctemp13182);
struct tree* nctemp13188= p;
struct nctempchar1 *nctemp13192;
static struct nctempchar1 nctemp13193 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13192=&nctemp13193;
nctempchar1* nctemp13190= nctemp13192;
int nctemp13194=CodeEs(nctemp13188,nctemp13190);
struct tree* nctemp13196= p;
int nctemp13198= 8;
int nctemp13200=PtreeSetline(nctemp13196,nctemp13198);
}
struct tree* nctemp13202= p;
struct nctempchar1 *nctemp13206;
static struct nctempchar1 nctemp13207 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13206=&nctemp13207;
nctempchar1* nctemp13204= nctemp13206;
int nctemp13208=CodeEs(nctemp13202,nctemp13204);
struct tree* nctemp13210= p;
int nctemp13212= 10;
int nctemp13214=PtreeSetline(nctemp13210,nctemp13212);
struct tree* nctemp13216= p;
struct nctempchar1 *nctemp13220;
static struct nctempchar1 nctemp13221 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13220=&nctemp13221;
nctempchar1* nctemp13218= nctemp13220;
int nctemp13222=CodeEs(nctemp13216,nctemp13218);
struct tree* nctemp13224= p;
int nctemp13226= 10;
int nctemp13228=PtreeSetline(nctemp13224,nctemp13226);
struct tree* nctemp13230= p;
struct nctempchar1 *nctemp13234;
static struct nctempchar1 nctemp13235 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13234=&nctemp13235;
nctempchar1* nctemp13232= nctemp13234;
int nctemp13236=CodeEs(nctemp13230,nctemp13232);
struct tree* nctemp13238= p;
int nctemp13240= 12;
int nctemp13242=PtreeSetline(nctemp13238,nctemp13240);
struct tree* nctemp13244= p;
struct nctempchar1 *nctemp13248;
static struct nctempchar1 nctemp13249 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13248=&nctemp13249;
nctempchar1* nctemp13246= nctemp13248;
int nctemp13250=CodeEs(nctemp13244,nctemp13246);
struct tree* nctemp13252= p;
int nctemp13254= 13;
int nctemp13256=PtreeSetline(nctemp13252,nctemp13254);
struct tree* nctemp13258= p;
struct nctempchar1 *nctemp13262;
static struct nctempchar1 nctemp13263 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13262=&nctemp13263;
nctempchar1* nctemp13260= nctemp13262;
int nctemp13264=CodeEs(nctemp13258,nctemp13260);
struct tree* nctemp13266= p;
int nctemp13268= 14;
int nctemp13270=PtreeSetline(nctemp13266,nctemp13268);
struct tree* nctemp13272= p;
struct nctempchar1 *nctemp13276;
static struct nctempchar1 nctemp13277 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13276=&nctemp13277;
nctempchar1* nctemp13274= nctemp13276;
int nctemp13278=CodeEs(nctemp13272,nctemp13274);
struct tree* nctemp13280= p;
int nctemp13282= 15;
int nctemp13284=PtreeSetline(nctemp13280,nctemp13282);
struct tree* nctemp13286= p;
struct nctempchar1 *nctemp13290;
static struct nctempchar1 nctemp13291 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13290=&nctemp13291;
nctempchar1* nctemp13288= nctemp13290;
int nctemp13292=CodeEs(nctemp13286,nctemp13288);
struct tree* nctemp13294= p;
int nctemp13296= 16;
int nctemp13298=PtreeSetline(nctemp13294,nctemp13296);
struct tree* nctemp13300= p;
struct nctempchar1 *nctemp13304;
static struct nctempchar1 nctemp13305 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13304=&nctemp13305;
nctempchar1* nctemp13302= nctemp13304;
int nctemp13306=CodeEs(nctemp13300,nctemp13302);
struct tree* nctemp13308= p;
int nctemp13310= 17;
int nctemp13312=PtreeSetline(nctemp13308,nctemp13310);
struct tree* nctemp13314= p;
struct nctempchar1 *nctemp13318;
static struct nctempchar1 nctemp13319 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13318=&nctemp13319;
nctempchar1* nctemp13316= nctemp13318;
int nctemp13320=CodeEs(nctemp13314,nctemp13316);
struct tree* nctemp13322= p;
int nctemp13324= 18;
int nctemp13326=PtreeSetline(nctemp13322,nctemp13324);
struct tree* nctemp13328= p;
struct nctempchar1 *nctemp13332;
static struct nctempchar1 nctemp13333 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13332=&nctemp13333;
nctempchar1* nctemp13330= nctemp13332;
int nctemp13334=CodeEs(nctemp13328,nctemp13330);
struct tree* nctemp13336= p;
int nctemp13338= 19;
int nctemp13340=PtreeSetline(nctemp13336,nctemp13338);
struct tree* nctemp13342= p;
struct nctempchar1 *nctemp13346;
static struct nctempchar1 nctemp13347 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13346=&nctemp13347;
nctempchar1* nctemp13344= nctemp13346;
int nctemp13348=CodeEs(nctemp13342,nctemp13344);
struct tree* nctemp13350= p;
int nctemp13352= 20;
int nctemp13354=PtreeSetline(nctemp13350,nctemp13352);
struct tree* nctemp13356= p;
struct nctempchar1 *nctemp13360;
static struct nctempchar1 nctemp13361 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13360=&nctemp13361;
nctempchar1* nctemp13358= nctemp13360;
int nctemp13362=CodeEs(nctemp13356,nctemp13358);
struct tree* nctemp13364= p;
struct nctempchar1 *nctemp13368;
static struct nctempchar1 nctemp13369 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13368=&nctemp13369;
nctempchar1* nctemp13366= nctemp13368;
int nctemp13370=CodeEs(nctemp13364,nctemp13366);
struct tree* nctemp13372= p;
struct nctempchar1 *nctemp13376;
static struct nctempchar1 nctemp13377 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13376=&nctemp13377;
nctempchar1* nctemp13374= nctemp13376;
int nctemp13378=CodeEs(nctemp13372,nctemp13374);
struct tree* nctemp13380= p;
struct nctempchar1 *nctemp13384;
static struct nctempchar1 nctemp13385 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13384=&nctemp13385;
nctempchar1* nctemp13382= nctemp13384;
int nctemp13386=CodeEs(nctemp13380,nctemp13382);
struct tree* nctemp13388= p;
struct nctempchar1 *nctemp13392;
static struct nctempchar1 nctemp13393 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13392=&nctemp13393;
nctempchar1* nctemp13390= nctemp13392;
int nctemp13394=CodeEs(nctemp13388,nctemp13390);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13402;
static struct nctempchar1 nctemp13403 = {{ 6}, (char*)"dummy\0"};
nctemp13402=&nctemp13403;
nctempchar1* nctemp13400= nctemp13402;
struct nctempchar1 *nctemp13406;
static struct nctempchar1 nctemp13407 = {{ 6}, (char*)"dummy\0"};
nctemp13406=&nctemp13407;
nctempchar1* nctemp13404= nctemp13406;
struct tree* nctemp13408=PtreeMknode(nctemp13400,nctemp13404);
p =nctemp13408;
struct tree* nctemp13410= p;
int nctemp13412= 1;
int nctemp13414=PtreeSetline(nctemp13410,nctemp13412);
struct tree* nctemp13416= p;
struct nctempchar1 *nctemp13420;
static struct nctempchar1 nctemp13421 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13420=&nctemp13421;
nctempchar1* nctemp13418= nctemp13420;
int nctemp13422=CodeEs(nctemp13416,nctemp13418);
struct tree* nctemp13424= p;
int nctemp13426= 2;
int nctemp13428=PtreeSetline(nctemp13424,nctemp13426);
struct tree* nctemp13430= p;
int nctemp13432= 3;
int nctemp13434=PtreeSetline(nctemp13430,nctemp13432);
struct tree* nctemp13436= p;
struct nctempchar1 *nctemp13440;
static struct nctempchar1 nctemp13441 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13440=&nctemp13441;
nctempchar1* nctemp13438= nctemp13440;
int nctemp13442=CodeEs(nctemp13436,nctemp13438);
struct tree* nctemp13444= p;
struct nctempchar1 *nctemp13448;
static struct nctempchar1 nctemp13449 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13448=&nctemp13449;
nctempchar1* nctemp13446= nctemp13448;
int nctemp13450=CodeEs(nctemp13444,nctemp13446);
struct tree* nctemp13452= p;
int nctemp13454= 3;
int nctemp13456=PtreeSetline(nctemp13452,nctemp13454);
struct tree* nctemp13458= p;
struct nctempchar1 *nctemp13462;
static struct nctempchar1 nctemp13463 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13462=&nctemp13463;
nctempchar1* nctemp13460= nctemp13462;
int nctemp13464=CodeEs(nctemp13458,nctemp13460);
struct tree* nctemp13466= p;
int nctemp13468= 5;
int nctemp13470=PtreeSetline(nctemp13466,nctemp13468);
struct tree* nctemp13472= p;
struct nctempchar1 *nctemp13476;
static struct nctempchar1 nctemp13477 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13476=&nctemp13477;
nctempchar1* nctemp13474= nctemp13476;
int nctemp13478=CodeEs(nctemp13472,nctemp13474);
struct tree* nctemp13480= p;
int nctemp13482= 7;
int nctemp13484=PtreeSetline(nctemp13480,nctemp13482);
struct tree* nctemp13486= p;
struct nctempchar1 *nctemp13490;
static struct nctempchar1 nctemp13491 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13490=&nctemp13491;
nctempchar1* nctemp13488= nctemp13490;
int nctemp13492=CodeEs(nctemp13486,nctemp13488);
struct tree* nctemp13494= p;
int nctemp13496= 7;
int nctemp13498=PtreeSetline(nctemp13494,nctemp13496);
struct tree* nctemp13500= p;
struct nctempchar1 *nctemp13504;
static struct nctempchar1 nctemp13505 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13504=&nctemp13505;
nctempchar1* nctemp13502= nctemp13504;
int nctemp13506=CodeEs(nctemp13500,nctemp13502);
struct tree* nctemp13508= p;
int nctemp13510= 8;
int nctemp13512=PtreeSetline(nctemp13508,nctemp13510);
int nctemp13516=CodeArraycheck();
int nctemp13513 = (nctemp13516 ==1);
if(nctemp13513)
{
struct tree* nctemp13519= p;
struct nctempchar1 *nctemp13523;
static struct nctempchar1 nctemp13524 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13523=&nctemp13524;
nctempchar1* nctemp13521= nctemp13523;
int nctemp13525=CodeEs(nctemp13519,nctemp13521);
struct tree* nctemp13527= p;
struct nctempchar1 *nctemp13531;
static struct nctempchar1 nctemp13532 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13531=&nctemp13532;
nctempchar1* nctemp13529= nctemp13531;
int nctemp13533=CodeEs(nctemp13527,nctemp13529);
struct tree* nctemp13535= p;
int nctemp13537= 8;
int nctemp13539=PtreeSetline(nctemp13535,nctemp13537);
}
struct tree* nctemp13541= p;
struct nctempchar1 *nctemp13545;
static struct nctempchar1 nctemp13546 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13545=&nctemp13546;
nctempchar1* nctemp13543= nctemp13545;
int nctemp13547=CodeEs(nctemp13541,nctemp13543);
struct tree* nctemp13549= p;
int nctemp13551= 10;
int nctemp13553=PtreeSetline(nctemp13549,nctemp13551);
struct tree* nctemp13555= p;
struct nctempchar1 *nctemp13559;
static struct nctempchar1 nctemp13560 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13559=&nctemp13560;
nctempchar1* nctemp13557= nctemp13559;
int nctemp13561=CodeEs(nctemp13555,nctemp13557);
struct tree* nctemp13563= p;
int nctemp13565= 10;
int nctemp13567=PtreeSetline(nctemp13563,nctemp13565);
struct tree* nctemp13569= p;
struct nctempchar1 *nctemp13573;
static struct nctempchar1 nctemp13574 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13573=&nctemp13574;
nctempchar1* nctemp13571= nctemp13573;
int nctemp13575=CodeEs(nctemp13569,nctemp13571);
struct tree* nctemp13577= p;
int nctemp13579= 12;
int nctemp13581=PtreeSetline(nctemp13577,nctemp13579);
struct tree* nctemp13583= p;
struct nctempchar1 *nctemp13587;
static struct nctempchar1 nctemp13588 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13587=&nctemp13588;
nctempchar1* nctemp13585= nctemp13587;
int nctemp13589=CodeEs(nctemp13583,nctemp13585);
struct tree* nctemp13591= p;
int nctemp13593= 13;
int nctemp13595=PtreeSetline(nctemp13591,nctemp13593);
struct tree* nctemp13597= p;
struct nctempchar1 *nctemp13601;
static struct nctempchar1 nctemp13602 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13601=&nctemp13602;
nctempchar1* nctemp13599= nctemp13601;
int nctemp13603=CodeEs(nctemp13597,nctemp13599);
struct tree* nctemp13605= p;
int nctemp13607= 14;
int nctemp13609=PtreeSetline(nctemp13605,nctemp13607);
struct tree* nctemp13611= p;
struct nctempchar1 *nctemp13615;
static struct nctempchar1 nctemp13616 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13615=&nctemp13616;
nctempchar1* nctemp13613= nctemp13615;
int nctemp13617=CodeEs(nctemp13611,nctemp13613);
struct tree* nctemp13619= p;
int nctemp13621= 15;
int nctemp13623=PtreeSetline(nctemp13619,nctemp13621);
struct tree* nctemp13625= p;
struct nctempchar1 *nctemp13629;
static struct nctempchar1 nctemp13630 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13629=&nctemp13630;
nctempchar1* nctemp13627= nctemp13629;
int nctemp13631=CodeEs(nctemp13625,nctemp13627);
struct tree* nctemp13633= p;
int nctemp13635= 16;
int nctemp13637=PtreeSetline(nctemp13633,nctemp13635);
struct tree* nctemp13639= p;
struct nctempchar1 *nctemp13643;
static struct nctempchar1 nctemp13644 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13643=&nctemp13644;
nctempchar1* nctemp13641= nctemp13643;
int nctemp13645=CodeEs(nctemp13639,nctemp13641);
struct tree* nctemp13647= p;
int nctemp13649= 17;
int nctemp13651=PtreeSetline(nctemp13647,nctemp13649);
struct tree* nctemp13653= p;
struct nctempchar1 *nctemp13657;
static struct nctempchar1 nctemp13658 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13657=&nctemp13658;
nctempchar1* nctemp13655= nctemp13657;
int nctemp13659=CodeEs(nctemp13653,nctemp13655);
struct tree* nctemp13661= p;
int nctemp13663= 18;
int nctemp13665=PtreeSetline(nctemp13661,nctemp13663);
struct tree* nctemp13667= p;
struct nctempchar1 *nctemp13671;
static struct nctempchar1 nctemp13672 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13671=&nctemp13672;
nctempchar1* nctemp13669= nctemp13671;
int nctemp13673=CodeEs(nctemp13667,nctemp13669);
struct tree* nctemp13675= p;
int nctemp13677= 19;
int nctemp13679=PtreeSetline(nctemp13675,nctemp13677);
struct tree* nctemp13681= p;
struct nctempchar1 *nctemp13685;
static struct nctempchar1 nctemp13686 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13685=&nctemp13686;
nctempchar1* nctemp13683= nctemp13685;
int nctemp13687=CodeEs(nctemp13681,nctemp13683);
struct tree* nctemp13689= p;
int nctemp13691= 20;
int nctemp13693=PtreeSetline(nctemp13689,nctemp13691);
struct tree* nctemp13695= p;
struct nctempchar1 *nctemp13699;
static struct nctempchar1 nctemp13700 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13699=&nctemp13700;
nctempchar1* nctemp13697= nctemp13699;
int nctemp13701=CodeEs(nctemp13695,nctemp13697);
struct tree* nctemp13703= p;
struct nctempchar1 *nctemp13707;
static struct nctempchar1 nctemp13708 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13707=&nctemp13708;
nctempchar1* nctemp13705= nctemp13707;
int nctemp13709=CodeEs(nctemp13703,nctemp13705);
struct tree* nctemp13711= p;
struct nctempchar1 *nctemp13715;
static struct nctempchar1 nctemp13716 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13715=&nctemp13716;
nctempchar1* nctemp13713= nctemp13715;
int nctemp13717=CodeEs(nctemp13711,nctemp13713);
struct tree* nctemp13719= p;
struct nctempchar1 *nctemp13723;
static struct nctempchar1 nctemp13724 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13723=&nctemp13724;
nctempchar1* nctemp13721= nctemp13723;
int nctemp13725=CodeEs(nctemp13719,nctemp13721);
struct tree* nctemp13727= p;
struct nctempchar1 *nctemp13731;
static struct nctempchar1 nctemp13732 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13731=&nctemp13732;
nctempchar1* nctemp13729= nctemp13731;
int nctemp13733=CodeEs(nctemp13727,nctemp13729);
struct tree* nctemp13735= p;
struct nctempchar1 *nctemp13739;
static struct nctempchar1 nctemp13740 = {{ 3}, (char*)"\n\0"};
nctemp13739=&nctemp13740;
nctempchar1* nctemp13737= nctemp13739;
int nctemp13741=CodeEs(nctemp13735,nctemp13737);
struct tree* nctemp13743= p;
struct nctempchar1 *nctemp13747;
static struct nctempchar1 nctemp13748 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13747=&nctemp13748;
nctempchar1* nctemp13745= nctemp13747;
int nctemp13749=CodeEs(nctemp13743,nctemp13745);
struct tree* nctemp13751= p;
struct nctempchar1 *nctemp13755;
static struct nctempchar1 nctemp13756 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13755=&nctemp13756;
nctempchar1* nctemp13753= nctemp13755;
int nctemp13757=CodeEs(nctemp13751,nctemp13753);
struct tree* nctemp13759= p;
struct nctempchar1 *nctemp13763;
static struct nctempchar1 nctemp13764 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13763=&nctemp13764;
nctempchar1* nctemp13761= nctemp13763;
int nctemp13765=CodeEs(nctemp13759,nctemp13761);
struct tree* nctemp13767= p;
struct nctempchar1 *nctemp13771;
static struct nctempchar1 nctemp13772 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13771=&nctemp13772;
nctempchar1* nctemp13769= nctemp13771;
int nctemp13773=CodeEs(nctemp13767,nctemp13769);
struct tree* nctemp13775= p;
struct nctempchar1 *nctemp13779;
static struct nctempchar1 nctemp13780 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13779=&nctemp13780;
nctempchar1* nctemp13777= nctemp13779;
int nctemp13781=CodeEs(nctemp13775,nctemp13777);
struct tree* nctemp13783= p;
struct nctempchar1 *nctemp13787;
static struct nctempchar1 nctemp13788 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13787=&nctemp13788;
nctempchar1* nctemp13785= nctemp13787;
int nctemp13789=CodeEs(nctemp13783,nctemp13785);
struct tree* nctemp13791= p;
struct nctempchar1 *nctemp13795;
static struct nctempchar1 nctemp13796 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13795=&nctemp13796;
nctempchar1* nctemp13793= nctemp13795;
int nctemp13797=CodeEs(nctemp13791,nctemp13793);
struct tree* nctemp13799= p;
struct nctempchar1 *nctemp13803;
static struct nctempchar1 nctemp13804 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13803=&nctemp13804;
nctempchar1* nctemp13801= nctemp13803;
int nctemp13805=CodeEs(nctemp13799,nctemp13801);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13813;
static struct nctempchar1 nctemp13814 = {{ 6}, (char*)"dummy\0"};
nctemp13813=&nctemp13814;
nctempchar1* nctemp13811= nctemp13813;
struct nctempchar1 *nctemp13817;
static struct nctempchar1 nctemp13818 = {{ 6}, (char*)"dummy\0"};
nctemp13817=&nctemp13818;
nctempchar1* nctemp13815= nctemp13817;
struct tree* nctemp13819=PtreeMknode(nctemp13811,nctemp13815);
p =nctemp13819;
struct tree* nctemp13821= p;
int nctemp13823= 1;
int nctemp13825=PtreeSetline(nctemp13821,nctemp13823);
struct tree* nctemp13827= p;
struct nctempchar1 *nctemp13831;
static struct nctempchar1 nctemp13832 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13831=&nctemp13832;
nctempchar1* nctemp13829= nctemp13831;
int nctemp13833=CodeEs(nctemp13827,nctemp13829);
struct tree* nctemp13835= p;
int nctemp13837= 2;
int nctemp13839=PtreeSetline(nctemp13835,nctemp13837);
struct tree* nctemp13841= p;
int nctemp13843= 3;
int nctemp13845=PtreeSetline(nctemp13841,nctemp13843);
struct tree* nctemp13847= p;
struct nctempchar1 *nctemp13851;
static struct nctempchar1 nctemp13852 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13851=&nctemp13852;
nctempchar1* nctemp13849= nctemp13851;
int nctemp13853=CodeEs(nctemp13847,nctemp13849);
struct tree* nctemp13855= p;
int nctemp13857= 3;
int nctemp13859=PtreeSetline(nctemp13855,nctemp13857);
struct tree* nctemp13861= p;
struct nctempchar1 *nctemp13865;
static struct nctempchar1 nctemp13866 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13865=&nctemp13866;
nctempchar1* nctemp13863= nctemp13865;
int nctemp13867=CodeEs(nctemp13861,nctemp13863);
struct tree* nctemp13869= p;
int nctemp13871= 5;
int nctemp13873=PtreeSetline(nctemp13869,nctemp13871);
struct tree* nctemp13875= p;
struct nctempchar1 *nctemp13879;
static struct nctempchar1 nctemp13880 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13879=&nctemp13880;
nctempchar1* nctemp13877= nctemp13879;
int nctemp13881=CodeEs(nctemp13875,nctemp13877);
struct tree* nctemp13883= p;
int nctemp13885= 7;
int nctemp13887=PtreeSetline(nctemp13883,nctemp13885);
struct tree* nctemp13889= p;
struct nctempchar1 *nctemp13893;
static struct nctempchar1 nctemp13894 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13893=&nctemp13894;
nctempchar1* nctemp13891= nctemp13893;
int nctemp13895=CodeEs(nctemp13889,nctemp13891);
struct tree* nctemp13897= p;
int nctemp13899= 7;
int nctemp13901=PtreeSetline(nctemp13897,nctemp13899);
struct tree* nctemp13903= p;
struct nctempchar1 *nctemp13907;
static struct nctempchar1 nctemp13908 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13907=&nctemp13908;
nctempchar1* nctemp13905= nctemp13907;
int nctemp13909=CodeEs(nctemp13903,nctemp13905);
struct tree* nctemp13911= p;
int nctemp13913= 8;
int nctemp13915=PtreeSetline(nctemp13911,nctemp13913);
int nctemp13919=CodeArraycheck();
int nctemp13916 = (nctemp13919 ==1);
if(nctemp13916)
{
struct tree* nctemp13922= p;
struct nctempchar1 *nctemp13926;
static struct nctempchar1 nctemp13927 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13926=&nctemp13927;
nctempchar1* nctemp13924= nctemp13926;
int nctemp13928=CodeEs(nctemp13922,nctemp13924);
struct tree* nctemp13930= p;
int nctemp13932= 8;
int nctemp13934=PtreeSetline(nctemp13930,nctemp13932);
}
struct tree* nctemp13936= p;
struct nctempchar1 *nctemp13940;
static struct nctempchar1 nctemp13941 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13940=&nctemp13941;
nctempchar1* nctemp13938= nctemp13940;
int nctemp13942=CodeEs(nctemp13936,nctemp13938);
struct tree* nctemp13944= p;
int nctemp13946= 10;
int nctemp13948=PtreeSetline(nctemp13944,nctemp13946);
struct tree* nctemp13950= p;
struct nctempchar1 *nctemp13954;
static struct nctempchar1 nctemp13955 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13954=&nctemp13955;
nctempchar1* nctemp13952= nctemp13954;
int nctemp13956=CodeEs(nctemp13950,nctemp13952);
struct tree* nctemp13958= p;
int nctemp13960= 10;
int nctemp13962=PtreeSetline(nctemp13958,nctemp13960);
struct tree* nctemp13964= p;
struct nctempchar1 *nctemp13968;
static struct nctempchar1 nctemp13969 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13968=&nctemp13969;
nctempchar1* nctemp13966= nctemp13968;
int nctemp13970=CodeEs(nctemp13964,nctemp13966);
struct tree* nctemp13972= p;
int nctemp13974= 12;
int nctemp13976=PtreeSetline(nctemp13972,nctemp13974);
struct tree* nctemp13978= p;
struct nctempchar1 *nctemp13982;
static struct nctempchar1 nctemp13983 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13982=&nctemp13983;
nctempchar1* nctemp13980= nctemp13982;
int nctemp13984=CodeEs(nctemp13978,nctemp13980);
struct tree* nctemp13986= p;
int nctemp13988= 13;
int nctemp13990=PtreeSetline(nctemp13986,nctemp13988);
struct tree* nctemp13992= p;
struct nctempchar1 *nctemp13996;
static struct nctempchar1 nctemp13997 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13996=&nctemp13997;
nctempchar1* nctemp13994= nctemp13996;
int nctemp13998=CodeEs(nctemp13992,nctemp13994);
struct tree* nctemp14000= p;
int nctemp14002= 14;
int nctemp14004=PtreeSetline(nctemp14000,nctemp14002);
struct tree* nctemp14006= p;
struct nctempchar1 *nctemp14010;
static struct nctempchar1 nctemp14011 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14010=&nctemp14011;
nctempchar1* nctemp14008= nctemp14010;
int nctemp14012=CodeEs(nctemp14006,nctemp14008);
struct tree* nctemp14014= p;
int nctemp14016= 15;
int nctemp14018=PtreeSetline(nctemp14014,nctemp14016);
struct tree* nctemp14020= p;
struct nctempchar1 *nctemp14024;
static struct nctempchar1 nctemp14025 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14024=&nctemp14025;
nctempchar1* nctemp14022= nctemp14024;
int nctemp14026=CodeEs(nctemp14020,nctemp14022);
struct tree* nctemp14028= p;
int nctemp14030= 16;
int nctemp14032=PtreeSetline(nctemp14028,nctemp14030);
struct tree* nctemp14034= p;
struct nctempchar1 *nctemp14038;
static struct nctempchar1 nctemp14039 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14038=&nctemp14039;
nctempchar1* nctemp14036= nctemp14038;
int nctemp14040=CodeEs(nctemp14034,nctemp14036);
struct tree* nctemp14042= p;
int nctemp14044= 17;
int nctemp14046=PtreeSetline(nctemp14042,nctemp14044);
struct tree* nctemp14048= p;
struct nctempchar1 *nctemp14052;
static struct nctempchar1 nctemp14053 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14052=&nctemp14053;
nctempchar1* nctemp14050= nctemp14052;
int nctemp14054=CodeEs(nctemp14048,nctemp14050);
struct tree* nctemp14056= p;
int nctemp14058= 18;
int nctemp14060=PtreeSetline(nctemp14056,nctemp14058);
struct tree* nctemp14062= p;
struct nctempchar1 *nctemp14066;
static struct nctempchar1 nctemp14067 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14066=&nctemp14067;
nctempchar1* nctemp14064= nctemp14066;
int nctemp14068=CodeEs(nctemp14062,nctemp14064);
struct tree* nctemp14070= p;
int nctemp14072= 19;
int nctemp14074=PtreeSetline(nctemp14070,nctemp14072);
struct tree* nctemp14076= p;
struct nctempchar1 *nctemp14080;
static struct nctempchar1 nctemp14081 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14080=&nctemp14081;
nctempchar1* nctemp14078= nctemp14080;
int nctemp14082=CodeEs(nctemp14076,nctemp14078);
struct tree* nctemp14084= p;
int nctemp14086= 20;
int nctemp14088=PtreeSetline(nctemp14084,nctemp14086);
struct tree* nctemp14090= p;
struct nctempchar1 *nctemp14094;
static struct nctempchar1 nctemp14095 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14094=&nctemp14095;
nctempchar1* nctemp14092= nctemp14094;
int nctemp14096=CodeEs(nctemp14090,nctemp14092);
struct tree* nctemp14098= p;
struct nctempchar1 *nctemp14102;
static struct nctempchar1 nctemp14103 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14102=&nctemp14103;
nctempchar1* nctemp14100= nctemp14102;
int nctemp14104=CodeEs(nctemp14098,nctemp14100);
struct tree* nctemp14106= p;
struct nctempchar1 *nctemp14110;
static struct nctempchar1 nctemp14111 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14110=&nctemp14111;
nctempchar1* nctemp14108= nctemp14110;
int nctemp14112=CodeEs(nctemp14106,nctemp14108);
struct tree* nctemp14114= p;
struct nctempchar1 *nctemp14118;
static struct nctempchar1 nctemp14119 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14118=&nctemp14119;
nctempchar1* nctemp14116= nctemp14118;
int nctemp14120=CodeEs(nctemp14114,nctemp14116);
struct tree* nctemp14122= p;
struct nctempchar1 *nctemp14126;
static struct nctempchar1 nctemp14127 = {{ 4}, (char*)"}\n\0"};
nctemp14126=&nctemp14127;
nctempchar1* nctemp14124= nctemp14126;
int nctemp14128=CodeEs(nctemp14122,nctemp14124);
struct tree* nctemp14130= p;
struct nctempchar1 *nctemp14134;
static struct nctempchar1 nctemp14135 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14134=&nctemp14135;
nctempchar1* nctemp14132= nctemp14134;
int nctemp14136=CodeEs(nctemp14130,nctemp14132);
struct tree* nctemp14138= p;
struct nctempchar1 *nctemp14142;
static struct nctempchar1 nctemp14143 = {{ 3}, (char*)"\n\0"};
nctemp14142=&nctemp14143;
nctempchar1* nctemp14140= nctemp14142;
int nctemp14144=CodeEs(nctemp14138,nctemp14140);
struct tree* nctemp14146= p;
struct nctempchar1 *nctemp14150;
static struct nctempchar1 nctemp14151 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14150=&nctemp14151;
nctempchar1* nctemp14148= nctemp14150;
int nctemp14152=CodeEs(nctemp14146,nctemp14148);
struct tree* nctemp14154= p;
struct nctempchar1 *nctemp14158;
static struct nctempchar1 nctemp14159 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14158=&nctemp14159;
nctempchar1* nctemp14156= nctemp14158;
int nctemp14160=CodeEs(nctemp14154,nctemp14156);
struct tree* nctemp14162= p;
struct nctempchar1 *nctemp14166;
static struct nctempchar1 nctemp14167 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14166=&nctemp14167;
nctempchar1* nctemp14164= nctemp14166;
int nctemp14168=CodeEs(nctemp14162,nctemp14164);
struct tree* nctemp14170= p;
struct nctempchar1 *nctemp14174;
static struct nctempchar1 nctemp14175 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14174=&nctemp14175;
nctempchar1* nctemp14172= nctemp14174;
int nctemp14176=CodeEs(nctemp14170,nctemp14172);
struct tree* nctemp14178= p;
struct nctempchar1 *nctemp14182;
static struct nctempchar1 nctemp14183 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14182=&nctemp14183;
nctempchar1* nctemp14180= nctemp14182;
int nctemp14184=CodeEs(nctemp14178,nctemp14180);
return 1;
}
int CodePreamble ()
{
int nctemp14189=CodeGetarch();
int nctemp14186 = (nctemp14189 ==1);
if(nctemp14186)
{
int nctemp14192=CodePreamblecpu();
return 1;
}
else{
int nctemp14197=CodeGetarch();
int nctemp14194 = (nctemp14197 ==2);
if(nctemp14194)
{
int nctemp14200=CodePreamblecuda();
return 1;
}
else{
int nctemp14205=CodeGetarch();
int nctemp14202 = (nctemp14205 ==3);
if(nctemp14202)
{
int nctemp14208=CodePreamblehip();
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
struct nctempchar1 *nctemp14217;
static struct nctempchar1 nctemp14218 = {{ 6}, (char*)"dummy\0"};
nctemp14217=&nctemp14218;
nctempchar1* nctemp14215= nctemp14217;
struct nctempchar1 *nctemp14221;
static struct nctempchar1 nctemp14222 = {{ 6}, (char*)"dummy\0"};
nctemp14221=&nctemp14222;
nctempchar1* nctemp14219= nctemp14221;
struct tree* nctemp14223=PtreeMknode(nctemp14215,nctemp14219);
p =nctemp14223;
int nctemp14227=CodeGetarch();
int nctemp14224 = (nctemp14227 ==2);
if(nctemp14224)
{
struct tree* nctemp14230= p;
struct nctempchar1 *nctemp14234;
static struct nctempchar1 nctemp14235 = {{ 3}, (char*)"};\0"};
nctemp14234=&nctemp14235;
nctempchar1* nctemp14232= nctemp14234;
int nctemp14236=CodeEs(nctemp14230,nctemp14232);
}
int nctemp14240=CodeGetarch();
int nctemp14237 = (nctemp14240 ==3);
if(nctemp14237)
{
struct tree* nctemp14243= p;
struct nctempchar1 *nctemp14247;
static struct nctempchar1 nctemp14248 = {{ 3}, (char*)"};\0"};
nctemp14247=&nctemp14248;
nctempchar1* nctemp14245= nctemp14247;
int nctemp14249=CodeEs(nctemp14243,nctemp14245);
}
return 1;
}
