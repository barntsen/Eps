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
CodeAddress =0;
}
else{
int nctemp67 = CodeAddress + 1;
CodeAddress =nctemp67;
}
int nctemp68 = (CodeAddress > 99999);
if(nctemp68)
{
struct nctempchar1 *nctemp75;
static struct nctempchar1 nctemp76 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp75=&nctemp76;
nctempchar1* nctemp73= nctemp75;
int nctemp77=CodeError(nctemp73);
}
int nctemp79= CodeAddress;
nctempchar1* nctemp81= s1;
int nctemp84=LibeItoa(nctemp79,nctemp81);
nctempchar1* nctemp86= s1;
nctempchar1* nctemp89= s2;
int nctemp92=LibeStrcat(nctemp86,nctemp89);
return s2;
}
int CodeInit ()
{
int nctemp96= 0;
int nctemp98=CodeSetparallel(nctemp96);
CodeLine =0;
int nctemp105= -1;
int nctemp104= nctemp105;
nctempchar1* nctemp106=CodeItemp(nctemp104);
int nctemp108= 1;
int nctemp110=CodeSetarch(nctemp108);
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
int nctemp123=CodeGetfdout();
fdo =nctemp123;
int nctemp127=CodeDebug();
int nctemp124 = (nctemp127 ==1);
if(nctemp124)
{
int nctemp129 = (p !=0);
if(nctemp129)
{
struct tree* nctemp136= p;
int nctemp138=PtreeGetline(nctemp136);
int nctemp133 = (nctemp138 !=CodeLine);
if(nctemp133)
{
int nctemp141= fdo;
struct nctempchar1 *nctemp145;
static struct nctempchar1 nctemp146 = {{ 3}, (char*)"\n\0"};
nctemp145=&nctemp146;
nctempchar1* nctemp143= nctemp145;
int nctemp147=LibePuts(nctemp141,nctemp143);
int nctemp149= fdo;
struct nctempchar1 *nctemp153;
static struct nctempchar1 nctemp154 = {{ 7}, (char*)"#line \0"};
nctemp153=&nctemp154;
nctempchar1* nctemp151= nctemp153;
int nctemp155=LibePuts(nctemp149,nctemp151);
int nctemp157= fdo;
struct tree* nctemp161= p;
int nctemp163=PtreeGetline(nctemp161);
int nctemp159= nctemp163;
int nctemp164=LibePuti(nctemp157,nctemp159);
int nctemp166= fdo;
struct nctempchar1 *nctemp170;
static struct nctempchar1 nctemp171 = {{ 3}, (char*)"  \0"};
nctemp170=&nctemp171;
nctempchar1* nctemp168= nctemp170;
int nctemp172=LibePuts(nctemp166,nctemp168);
int nctemp174= fdo;
int nctemp176= 34;
int nctemp178=LibePutc(nctemp174,nctemp176);
struct tree* nctemp184= p;
nctempchar1* nctemp186=PtreeGetfile(nctemp184);
f=nctemp186;
int nctemp188= fdo;
nctempchar1* nctemp190= f;
int nctemp193=LibePuts(nctemp188,nctemp190);
int nctemp195= fdo;
int nctemp197= 34;
int nctemp199=LibePutc(nctemp195,nctemp197);
int nctemp201= fdo;
struct nctempchar1 *nctemp205;
static struct nctempchar1 nctemp206 = {{ 3}, (char*)"\n\0"};
nctemp205=&nctemp206;
nctempchar1* nctemp203= nctemp205;
int nctemp207=LibePuts(nctemp201,nctemp203);
struct tree* nctemp212= p;
int nctemp214=PtreeGetline(nctemp212);
CodeLine =nctemp214;
}
}
}
int nctemp216= fdo;
nctempchar1* nctemp218= s;
int nctemp221=LibePuts(nctemp216,nctemp218);
int nctemp223= fdo;
int nctemp225=LibeFlush(nctemp223);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp231=CodeGetfdout();
fdo =nctemp231;
int nctemp233= fdo;
int nctemp235= d;
int nctemp237=LibePuti(nctemp233,nctemp235);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp243=CodeGetfdout();
fdo =nctemp243;
int nctemp245= fdo;
int nctemp247= d;
int nctemp249=LibePutc(nctemp245,nctemp247);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp255=CodeGetfdout();
fdo =nctemp255;
nctempchar1* nctemp260= s;
int nctemp263=LibeStrlen(nctemp260);
l =nctemp263;
i =1;
int nctemp276 = l - 1;
int nctemp268 = (i < nctemp276);
while(nctemp268){
{
int nctemp278= fdo;
int nctemp285=i;
int nctemp282=(int)(s->a[nctemp285]);
int nctemp280= nctemp282;
int nctemp287=LibePutc(nctemp278,nctemp280);
}
int nctemp296 = i + 1;
i =nctemp296;
int nctemp305 = l - 1;
int nctemp297 = (i < nctemp305);
nctemp268=nctemp297;
}
int nctemp307= fdo;
int nctemp309=LibeFlush(nctemp307);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp316= tp;
nctempchar1* nctemp318=SymGetype(nctemp316);
nctempchar1* nctemp314= nctemp318;
struct nctempchar1 *nctemp321;
static struct nctempchar1 nctemp322 = {{ 10}, (char*)"rconstant\0"};
nctemp321=&nctemp322;
nctempchar1* nctemp319= nctemp321;
int nctemp323=LibeStrcmp(nctemp314,nctemp319);
int nctemp311 = (nctemp323 ==1);
if(nctemp311)
{
return 1;
}
struct symbol* nctemp331= tp;
nctempchar1* nctemp333=SymGetype(nctemp331);
nctempchar1* nctemp329= nctemp333;
struct nctempchar1 *nctemp336;
static struct nctempchar1 nctemp337 = {{ 10}, (char*)"iconstant\0"};
nctemp336=&nctemp337;
nctempchar1* nctemp334= nctemp336;
int nctemp338=LibeStrcmp(nctemp329,nctemp334);
int nctemp326 = (nctemp338 ==1);
if(nctemp326)
{
return 1;
}
struct symbol* nctemp346= tp;
nctempchar1* nctemp348=SymGetype(nctemp346);
nctempchar1* nctemp344= nctemp348;
struct nctempchar1 *nctemp351;
static struct nctempchar1 nctemp352 = {{ 10}, (char*)"sconstant\0"};
nctemp351=&nctemp352;
nctempchar1* nctemp349= nctemp351;
int nctemp353=LibeStrcmp(nctemp344,nctemp349);
int nctemp341 = (nctemp353 ==1);
if(nctemp341)
{
return 1;
}
struct symbol* nctemp361= tp;
nctempchar1* nctemp363=SymGetstruct(nctemp361);
nctempchar1* nctemp359= nctemp363;
struct nctempchar1 *nctemp366;
static struct nctempchar1 nctemp367 = {{ 10}, (char*)"structdef\0"};
nctemp366=&nctemp367;
nctempchar1* nctemp364= nctemp366;
int nctemp368=LibeStrcmp(nctemp359,nctemp364);
int nctemp356 = (nctemp368 ==1);
if(nctemp356)
{
struct tree* nctemp371= p;
struct nctempchar1 *nctemp375;
static struct nctempchar1 nctemp376 = {{ 8}, (char*)"struct \0"};
nctemp375=&nctemp376;
nctempchar1* nctemp373= nctemp375;
int nctemp377=CodeEs(nctemp371,nctemp373);
}
struct symbol* nctemp383= tp;
nctempchar1* nctemp385=SymGetstruct(nctemp383);
nctempchar1* nctemp381= nctemp385;
struct nctempchar1 *nctemp388;
static struct nctempchar1 nctemp389 = {{ 7}, (char*)"struct\0"};
nctemp388=&nctemp389;
nctempchar1* nctemp386= nctemp388;
int nctemp390=LibeStrcmp(nctemp381,nctemp386);
int nctemp378 = (nctemp390 ==1);
if(nctemp378)
{
struct symbol* nctemp397= tp;
nctempchar1* nctemp399=SymGetarray(nctemp397);
nctempchar1* nctemp395= nctemp399;
struct nctempchar1 *nctemp402;
static struct nctempchar1 nctemp403 = {{ 6}, (char*)"array\0"};
nctemp402=&nctemp403;
nctempchar1* nctemp400= nctemp402;
int nctemp404=LibeStrcmp(nctemp395,nctemp400);
int nctemp392 = (nctemp404 ==1);
if(nctemp392)
{
struct tree* nctemp407= p;
struct nctempchar1 *nctemp411;
static struct nctempchar1 nctemp412 = {{ 14}, (char*)"struct nctemp\0"};
nctemp411=&nctemp412;
nctempchar1* nctemp409= nctemp411;
int nctemp413=CodeEs(nctemp407,nctemp409);
struct tree* nctemp415= p;
struct symbol* nctemp419= tp;
nctempchar1* nctemp421=SymGetype(nctemp419);
nctempchar1* nctemp417= nctemp421;
int nctemp422=CodeEs(nctemp415,nctemp417);
struct symbol* nctemp426= tp;
int nctemp428=SymGetrank(nctemp426);
int nctemp424= nctemp428;
int nctemp429=CodeEd(nctemp424);
struct tree* nctemp431= p;
struct nctempchar1 *nctemp435;
static struct nctempchar1 nctemp436 = {{ 3}, (char*)" *\0"};
nctemp435=&nctemp436;
nctempchar1* nctemp433= nctemp435;
int nctemp437=CodeEs(nctemp431,nctemp433);
struct tree* nctemp439= p;
struct symbol* nctemp443= tp;
nctempchar1* nctemp445=SymGetname(nctemp443);
nctempchar1* nctemp441= nctemp445;
int nctemp446=CodeEs(nctemp439,nctemp441);
}
else{
struct tree* nctemp448= p;
struct nctempchar1 *nctemp452;
static struct nctempchar1 nctemp453 = {{ 8}, (char*)"struct \0"};
nctemp452=&nctemp453;
nctempchar1* nctemp450= nctemp452;
int nctemp454=CodeEs(nctemp448,nctemp450);
struct tree* nctemp456= p;
struct symbol* nctemp460= tp;
nctempchar1* nctemp462=SymGetype(nctemp460);
nctempchar1* nctemp458= nctemp462;
int nctemp463=CodeEs(nctemp456,nctemp458);
struct tree* nctemp465= p;
struct nctempchar1 *nctemp469;
static struct nctempchar1 nctemp470 = {{ 2}, (char*)"*\0"};
nctemp469=&nctemp470;
nctempchar1* nctemp467= nctemp469;
int nctemp471=CodeEs(nctemp465,nctemp467);
struct tree* nctemp473= p;
struct nctempchar1 *nctemp477;
static struct nctempchar1 nctemp478 = {{ 2}, (char*)" \0"};
nctemp477=&nctemp478;
nctempchar1* nctemp475= nctemp477;
int nctemp479=CodeEs(nctemp473,nctemp475);
struct tree* nctemp481= p;
struct symbol* nctemp485= tp;
nctempchar1* nctemp487=SymGetname(nctemp485);
nctempchar1* nctemp483= nctemp487;
int nctemp488=CodeEs(nctemp481,nctemp483);
}
}
else{
struct symbol* nctemp494= tp;
nctempchar1* nctemp496=SymGetarray(nctemp494);
nctempchar1* nctemp492= nctemp496;
struct nctempchar1 *nctemp499;
static struct nctempchar1 nctemp500 = {{ 6}, (char*)"array\0"};
nctemp499=&nctemp500;
nctempchar1* nctemp497= nctemp499;
int nctemp501=LibeStrcmp(nctemp492,nctemp497);
int nctemp489 = (nctemp501 ==1);
if(nctemp489)
{
struct tree* nctemp504= p;
struct nctempchar1 *nctemp508;
static struct nctempchar1 nctemp509 = {{ 7}, (char*)"nctemp\0"};
nctemp508=&nctemp509;
nctempchar1* nctemp506= nctemp508;
int nctemp510=CodeEs(nctemp504,nctemp506);
struct tree* nctemp512= p;
struct symbol* nctemp516= tp;
nctempchar1* nctemp518=SymGetype(nctemp516);
nctempchar1* nctemp514= nctemp518;
int nctemp519=CodeEs(nctemp512,nctemp514);
struct symbol* nctemp523= tp;
int nctemp525=SymGetrank(nctemp523);
int nctemp521= nctemp525;
int nctemp526=CodeEd(nctemp521);
struct tree* nctemp528= p;
struct nctempchar1 *nctemp532;
static struct nctempchar1 nctemp533 = {{ 3}, (char*)" *\0"};
nctemp532=&nctemp533;
nctempchar1* nctemp530= nctemp532;
int nctemp534=CodeEs(nctemp528,nctemp530);
struct tree* nctemp536= p;
struct symbol* nctemp540= tp;
nctempchar1* nctemp542=SymGetname(nctemp540);
nctempchar1* nctemp538= nctemp542;
int nctemp543=CodeEs(nctemp536,nctemp538);
}
else{
struct tree* nctemp545= p;
struct symbol* nctemp549= tp;
nctempchar1* nctemp551=SymGetype(nctemp549);
nctempchar1* nctemp547= nctemp551;
int nctemp552=CodeEs(nctemp545,nctemp547);
struct tree* nctemp554= p;
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 2}, (char*)" \0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
int nctemp560=CodeEs(nctemp554,nctemp556);
struct tree* nctemp562= p;
struct symbol* nctemp566= tp;
nctempchar1* nctemp568=SymGetname(nctemp566);
nctempchar1* nctemp564= nctemp568;
int nctemp569=CodeEs(nctemp562,nctemp564);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp571 = (tp !=0);
int nctemp575=nctemp571;
while(nctemp575)
{{
struct tree* nctemp577= p;
struct symbol* nctemp579= tp;
int nctemp581=CodeIdeclaration(nctemp577,nctemp579);
struct tree* nctemp583= p;
struct nctempchar1 *nctemp587;
static struct nctempchar1 nctemp588 = {{ 4}, (char*)";\n\0"};
nctemp587=&nctemp588;
nctempchar1* nctemp585= nctemp587;
int nctemp589=CodeEs(nctemp583,nctemp585);
struct symbol* nctemp594= tp;
struct symbol* nctemp596=SymMvnext(nctemp594);
tp =nctemp596;
}
int nctemp597 = (tp !=0);
nctemp575=nctemp597;}}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp602= p;
struct nctempchar1 *nctemp606;
static struct nctempchar1 nctemp607 = {{ 8}, (char*)"struct \0"};
nctemp606=&nctemp607;
nctempchar1* nctemp604= nctemp606;
int nctemp608=CodeEs(nctemp602,nctemp604);
struct tree* nctemp610= p;
struct symbol* nctemp614= tp;
nctempchar1* nctemp616=SymGetype(nctemp614);
nctempchar1* nctemp612= nctemp616;
int nctemp617=CodeEs(nctemp610,nctemp612);
struct tree* nctemp619= p;
struct nctempchar1 *nctemp623;
static struct nctempchar1 nctemp624 = {{ 3}, (char*)" {\0"};
nctemp623=&nctemp624;
nctempchar1* nctemp621= nctemp623;
int nctemp625=CodeEs(nctemp619,nctemp621);
struct symbol* nctemp630= tp;
struct symbol* nctemp632=SymGetable(nctemp630);
up =nctemp632;
struct symbol* nctemp637= up;
struct symbol* nctemp639=SymMvnext(nctemp637);
up =nctemp639;
struct tree* nctemp641= p;
struct symbol* nctemp643= up;
int nctemp645=CodeIdeclarations(nctemp641,nctemp643);
struct tree* nctemp647= p;
struct nctempchar1 *nctemp651;
static struct nctempchar1 nctemp652 = {{ 5}, (char*)"};\n\0"};
nctemp651=&nctemp652;
nctempchar1* nctemp649= nctemp651;
int nctemp653=CodeEs(nctemp647,nctemp649);
struct tree* nctemp655= p;
struct nctempchar1 *nctemp659;
static struct nctempchar1 nctemp660 = {{ 16}, (char*)"typedef struct \0"};
nctemp659=&nctemp660;
nctempchar1* nctemp657= nctemp659;
int nctemp661=CodeEs(nctemp655,nctemp657);
struct tree* nctemp663= p;
struct nctempchar1 *nctemp667;
static struct nctempchar1 nctemp668 = {{ 7}, (char*)"nctemp\0"};
nctemp667=&nctemp668;
nctempchar1* nctemp665= nctemp667;
int nctemp669=CodeEs(nctemp663,nctemp665);
struct tree* nctemp671= p;
struct symbol* nctemp675= tp;
nctempchar1* nctemp677=SymGetype(nctemp675);
nctempchar1* nctemp673= nctemp677;
int nctemp678=CodeEs(nctemp671,nctemp673);
struct tree* nctemp680= p;
struct nctempchar1 *nctemp684;
static struct nctempchar1 nctemp685 = {{ 2}, (char*)"1\0"};
nctemp684=&nctemp685;
nctempchar1* nctemp682= nctemp684;
int nctemp686=CodeEs(nctemp680,nctemp682);
struct tree* nctemp688= p;
struct nctempchar1 *nctemp692;
static struct nctempchar1 nctemp693 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp692=&nctemp693;
nctempchar1* nctemp690= nctemp692;
int nctemp694=CodeEs(nctemp688,nctemp690);
struct tree* nctemp696= p;
struct symbol* nctemp700= tp;
nctempchar1* nctemp702=SymGetype(nctemp700);
nctempchar1* nctemp698= nctemp702;
int nctemp703=CodeEs(nctemp696,nctemp698);
struct tree* nctemp705= p;
struct nctempchar1 *nctemp709;
static struct nctempchar1 nctemp710 = {{ 6}, (char*)" *a; \0"};
nctemp709=&nctemp710;
nctempchar1* nctemp707= nctemp709;
int nctemp711=CodeEs(nctemp705,nctemp707);
struct tree* nctemp713= p;
struct nctempchar1 *nctemp717;
static struct nctempchar1 nctemp718 = {{ 3}, (char*)"} \0"};
nctemp717=&nctemp718;
nctempchar1* nctemp715= nctemp717;
int nctemp719=CodeEs(nctemp713,nctemp715);
struct tree* nctemp721= p;
struct nctempchar1 *nctemp725;
static struct nctempchar1 nctemp726 = {{ 7}, (char*)"nctemp\0"};
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
static struct nctempchar1 nctemp743 = {{ 2}, (char*)"1\0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
int nctemp744=CodeEs(nctemp738,nctemp740);
struct tree* nctemp746= p;
struct nctempchar1 *nctemp750;
static struct nctempchar1 nctemp751 = {{ 4}, (char*)";\n\0"};
nctemp750=&nctemp751;
nctempchar1* nctemp748= nctemp750;
int nctemp752=CodeEs(nctemp746,nctemp748);
struct tree* nctemp754= p;
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 8}, (char*)"struct \0"};
nctemp758=&nctemp759;
nctempchar1* nctemp756= nctemp758;
int nctemp760=CodeEs(nctemp754,nctemp756);
struct tree* nctemp762= p;
struct nctempchar1 *nctemp766;
static struct nctempchar1 nctemp767 = {{ 7}, (char*)"nctemp\0"};
nctemp766=&nctemp767;
nctempchar1* nctemp764= nctemp766;
int nctemp768=CodeEs(nctemp762,nctemp764);
struct tree* nctemp770= p;
struct symbol* nctemp774= tp;
nctempchar1* nctemp776=SymGetype(nctemp774);
nctempchar1* nctemp772= nctemp776;
int nctemp777=CodeEs(nctemp770,nctemp772);
struct tree* nctemp779= p;
struct nctempchar1 *nctemp783;
static struct nctempchar1 nctemp784 = {{ 2}, (char*)"2\0"};
nctemp783=&nctemp784;
nctempchar1* nctemp781= nctemp783;
int nctemp785=CodeEs(nctemp779,nctemp781);
struct tree* nctemp787= p;
struct nctempchar1 *nctemp791;
static struct nctempchar1 nctemp792 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp791=&nctemp792;
nctempchar1* nctemp789= nctemp791;
int nctemp793=CodeEs(nctemp787,nctemp789);
struct tree* nctemp795= p;
struct symbol* nctemp799= tp;
nctempchar1* nctemp801=SymGetype(nctemp799);
nctempchar1* nctemp797= nctemp801;
int nctemp802=CodeEs(nctemp795,nctemp797);
struct tree* nctemp804= p;
struct nctempchar1 *nctemp808;
static struct nctempchar1 nctemp809 = {{ 6}, (char*)" *a; \0"};
nctemp808=&nctemp809;
nctempchar1* nctemp806= nctemp808;
int nctemp810=CodeEs(nctemp804,nctemp806);
struct tree* nctemp812= p;
struct nctempchar1 *nctemp816;
static struct nctempchar1 nctemp817 = {{ 3}, (char*)"} \0"};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
int nctemp818=CodeEs(nctemp812,nctemp814);
struct tree* nctemp820= p;
struct nctempchar1 *nctemp824;
static struct nctempchar1 nctemp825 = {{ 4}, (char*)";\n\0"};
nctemp824=&nctemp825;
nctempchar1* nctemp822= nctemp824;
int nctemp826=CodeEs(nctemp820,nctemp822);
struct tree* nctemp828= p;
struct nctempchar1 *nctemp832;
static struct nctempchar1 nctemp833 = {{ 8}, (char*)"struct \0"};
nctemp832=&nctemp833;
nctempchar1* nctemp830= nctemp832;
int nctemp834=CodeEs(nctemp828,nctemp830);
struct tree* nctemp836= p;
struct nctempchar1 *nctemp840;
static struct nctempchar1 nctemp841 = {{ 7}, (char*)"nctemp\0"};
nctemp840=&nctemp841;
nctempchar1* nctemp838= nctemp840;
int nctemp842=CodeEs(nctemp836,nctemp838);
struct tree* nctemp844= p;
struct symbol* nctemp848= tp;
nctempchar1* nctemp850=SymGetype(nctemp848);
nctempchar1* nctemp846= nctemp850;
int nctemp851=CodeEs(nctemp844,nctemp846);
struct tree* nctemp853= p;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 2}, (char*)"3\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
int nctemp859=CodeEs(nctemp853,nctemp855);
struct tree* nctemp861= p;
struct nctempchar1 *nctemp865;
static struct nctempchar1 nctemp866 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp865=&nctemp866;
nctempchar1* nctemp863= nctemp865;
int nctemp867=CodeEs(nctemp861,nctemp863);
struct tree* nctemp869= p;
struct symbol* nctemp873= tp;
nctempchar1* nctemp875=SymGetype(nctemp873);
nctempchar1* nctemp871= nctemp875;
int nctemp876=CodeEs(nctemp869,nctemp871);
struct tree* nctemp878= p;
struct nctempchar1 *nctemp882;
static struct nctempchar1 nctemp883 = {{ 6}, (char*)" *a; \0"};
nctemp882=&nctemp883;
nctempchar1* nctemp880= nctemp882;
int nctemp884=CodeEs(nctemp878,nctemp880);
struct tree* nctemp886= p;
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 3}, (char*)"} \0"};
nctemp890=&nctemp891;
nctempchar1* nctemp888= nctemp890;
int nctemp892=CodeEs(nctemp886,nctemp888);
struct tree* nctemp894= p;
struct nctempchar1 *nctemp898;
static struct nctempchar1 nctemp899 = {{ 4}, (char*)";\n\0"};
nctemp898=&nctemp899;
nctempchar1* nctemp896= nctemp898;
int nctemp900=CodeEs(nctemp894,nctemp896);
struct tree* nctemp902= p;
struct nctempchar1 *nctemp906;
static struct nctempchar1 nctemp907 = {{ 8}, (char*)"struct \0"};
nctemp906=&nctemp907;
nctempchar1* nctemp904= nctemp906;
int nctemp908=CodeEs(nctemp902,nctemp904);
struct tree* nctemp910= p;
struct nctempchar1 *nctemp914;
static struct nctempchar1 nctemp915 = {{ 7}, (char*)"nctemp\0"};
nctemp914=&nctemp915;
nctempchar1* nctemp912= nctemp914;
int nctemp916=CodeEs(nctemp910,nctemp912);
struct tree* nctemp918= p;
struct symbol* nctemp922= tp;
nctempchar1* nctemp924=SymGetype(nctemp922);
nctempchar1* nctemp920= nctemp924;
int nctemp925=CodeEs(nctemp918,nctemp920);
struct tree* nctemp927= p;
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 2}, (char*)"4\0"};
nctemp931=&nctemp932;
nctempchar1* nctemp929= nctemp931;
int nctemp933=CodeEs(nctemp927,nctemp929);
struct tree* nctemp935= p;
struct nctempchar1 *nctemp939;
static struct nctempchar1 nctemp940 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp939=&nctemp940;
nctempchar1* nctemp937= nctemp939;
int nctemp941=CodeEs(nctemp935,nctemp937);
struct tree* nctemp943= p;
struct symbol* nctemp947= tp;
nctempchar1* nctemp949=SymGetype(nctemp947);
nctempchar1* nctemp945= nctemp949;
int nctemp950=CodeEs(nctemp943,nctemp945);
struct tree* nctemp952= p;
struct nctempchar1 *nctemp956;
static struct nctempchar1 nctemp957 = {{ 6}, (char*)" *a; \0"};
nctemp956=&nctemp957;
nctempchar1* nctemp954= nctemp956;
int nctemp958=CodeEs(nctemp952,nctemp954);
struct tree* nctemp960= p;
struct nctempchar1 *nctemp964;
static struct nctempchar1 nctemp965 = {{ 3}, (char*)"} \0"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
int nctemp966=CodeEs(nctemp960,nctemp962);
struct tree* nctemp968= p;
struct nctempchar1 *nctemp972;
static struct nctempchar1 nctemp973 = {{ 4}, (char*)";\n\0"};
nctemp972=&nctemp973;
nctempchar1* nctemp970= nctemp972;
int nctemp974=CodeEs(nctemp968,nctemp970);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp981= tp;
nctempchar1* nctemp983=SymGetstruct(nctemp981);
nctempchar1* nctemp979= nctemp983;
struct nctempchar1 *nctemp986;
static struct nctempchar1 nctemp987 = {{ 7}, (char*)"struct\0"};
nctemp986=&nctemp987;
nctempchar1* nctemp984= nctemp986;
int nctemp988=LibeStrcmp(nctemp979,nctemp984);
int nctemp976 = (nctemp988 ==1);
if(nctemp976)
{
struct tree* nctemp991= p;
struct nctempchar1 *nctemp995;
static struct nctempchar1 nctemp996 = {{ 8}, (char*)"struct \0"};
nctemp995=&nctemp996;
nctempchar1* nctemp993= nctemp995;
int nctemp997=CodeEs(nctemp991,nctemp993);
}
struct symbol* nctemp1003= tp;
nctempchar1* nctemp1005=SymGetarray(nctemp1003);
nctempchar1* nctemp1001= nctemp1005;
struct nctempchar1 *nctemp1008;
static struct nctempchar1 nctemp1009 = {{ 6}, (char*)"array\0"};
nctemp1008=&nctemp1009;
nctempchar1* nctemp1006= nctemp1008;
int nctemp1010=LibeStrcmp(nctemp1001,nctemp1006);
int nctemp998 = (nctemp1010 ==1);
if(nctemp998)
{
struct tree* nctemp1013= p;
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 7}, (char*)"nctemp\0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
int nctemp1019=CodeEs(nctemp1013,nctemp1015);
}
struct tree* nctemp1021= p;
struct symbol* nctemp1025= tp;
nctempchar1* nctemp1027=SymGetype(nctemp1025);
nctempchar1* nctemp1023= nctemp1027;
int nctemp1028=CodeEs(nctemp1021,nctemp1023);
struct symbol* nctemp1034= tp;
nctempchar1* nctemp1036=SymGetarray(nctemp1034);
nctempchar1* nctemp1032= nctemp1036;
struct nctempchar1 *nctemp1039;
static struct nctempchar1 nctemp1040 = {{ 6}, (char*)"array\0"};
nctemp1039=&nctemp1040;
nctempchar1* nctemp1037= nctemp1039;
int nctemp1041=LibeStrcmp(nctemp1032,nctemp1037);
int nctemp1029 = (nctemp1041 ==1);
if(nctemp1029)
{
struct symbol* nctemp1046= tp;
int nctemp1048=SymGetrank(nctemp1046);
int nctemp1044= nctemp1048;
int nctemp1049=CodeEd(nctemp1044);
struct tree* nctemp1051= p;
struct nctempchar1 *nctemp1055;
static struct nctempchar1 nctemp1056 = {{ 3}, (char*)" *\0"};
nctemp1055=&nctemp1056;
nctempchar1* nctemp1053= nctemp1055;
int nctemp1057=CodeEs(nctemp1051,nctemp1053);
}
struct symbol* nctemp1063= tp;
nctempchar1* nctemp1065=SymGetstruct(nctemp1063);
nctempchar1* nctemp1061= nctemp1065;
struct nctempchar1 *nctemp1068;
static struct nctempchar1 nctemp1069 = {{ 7}, (char*)"struct\0"};
nctemp1068=&nctemp1069;
nctempchar1* nctemp1066= nctemp1068;
int nctemp1070=LibeStrcmp(nctemp1061,nctemp1066);
int nctemp1058 = (nctemp1070 ==1);
if(nctemp1058)
{
struct tree* nctemp1073= p;
struct nctempchar1 *nctemp1077;
static struct nctempchar1 nctemp1078 = {{ 2}, (char*)"*\0"};
nctemp1077=&nctemp1078;
nctempchar1* nctemp1075= nctemp1077;
int nctemp1079=CodeEs(nctemp1073,nctemp1075);
}
struct tree* nctemp1081= p;
struct nctempchar1 *nctemp1085;
static struct nctempchar1 nctemp1086 = {{ 2}, (char*)" \0"};
nctemp1085=&nctemp1086;
nctempchar1* nctemp1083= nctemp1085;
int nctemp1087=CodeEs(nctemp1081,nctemp1083);
struct tree* nctemp1089= p;
struct symbol* nctemp1093= tp;
nctempchar1* nctemp1095=SymGetname(nctemp1093);
nctempchar1* nctemp1091= nctemp1095;
int nctemp1096=CodeEs(nctemp1089,nctemp1091);
struct tree* nctemp1098= p;
struct nctempchar1 *nctemp1102;
static struct nctempchar1 nctemp1103 = {{ 3}, (char*)" (\0"};
nctemp1102=&nctemp1103;
nctempchar1* nctemp1100= nctemp1102;
int nctemp1104=CodeEs(nctemp1098,nctemp1100);
struct symbol* nctemp1109= tp;
struct symbol* nctemp1111=SymGetable(nctemp1109);
tp =nctemp1111;
int nctemp1112 = (tp ==0);
if(nctemp1112)
{
struct tree* nctemp1117= p;
struct nctempchar1 *nctemp1121;
static struct nctempchar1 nctemp1122 = {{ 5}, (char*)");\n\0"};
nctemp1121=&nctemp1122;
nctempchar1* nctemp1119= nctemp1121;
int nctemp1123=CodeEs(nctemp1117,nctemp1119);
return 1;
}
struct symbol* nctemp1129= tp;
struct symbol* nctemp1131=SymMvnext(nctemp1129);
tp =nctemp1131;
struct symbol* nctemp1136= tp;
struct symbol* nctemp1138=SymGetable(nctemp1136);
tp =nctemp1138;
int nctemp1139 = (tp ==0);
if(nctemp1139)
{
return 1;
}
struct symbol* nctemp1148= tp;
struct symbol* nctemp1150=SymMvnext(nctemp1148);
tp =nctemp1150;
int nctemp1151 = (tp !=0);
int nctemp1155=nctemp1151;
while(nctemp1155)
{{
struct tree* nctemp1157= p;
struct symbol* nctemp1159= tp;
int nctemp1161=CodeIdeclaration(nctemp1157,nctemp1159);
struct symbol* nctemp1166= tp;
struct symbol* nctemp1168=SymMvnext(nctemp1166);
tp =nctemp1168;
int nctemp1169 = (tp !=0);
if(nctemp1169)
{
struct tree* nctemp1174= p;
struct nctempchar1 *nctemp1178;
static struct nctempchar1 nctemp1179 = {{ 2}, (char*)",\0"};
nctemp1178=&nctemp1179;
nctempchar1* nctemp1176= nctemp1178;
int nctemp1180=CodeEs(nctemp1174,nctemp1176);
}
else{
struct tree* nctemp1182= p;
struct nctempchar1 *nctemp1186;
static struct nctempchar1 nctemp1187 = {{ 5}, (char*)");\n\0"};
nctemp1186=&nctemp1187;
nctempchar1* nctemp1184= nctemp1186;
int nctemp1188=CodeEs(nctemp1182,nctemp1184);
}
}
int nctemp1189 = (tp !=0);
nctemp1155=nctemp1189;}}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1198= p;
nctempchar1* nctemp1200=PtreeGetdef(nctemp1198);
module=nctemp1200;
struct symbol* nctemp1205= tp;
struct symbol* nctemp1207=SymMvnext(nctemp1205);
tp =nctemp1207;
int nctemp1208 = (tp !=0);
int nctemp1212=nctemp1208;
while(nctemp1212)
{{
struct symbol* nctemp1218= tp;
nctempchar1* nctemp1220=SymGetmodule(nctemp1218);
nctempchar1* nctemp1216= nctemp1220;
nctempchar1* nctemp1221= module;
int nctemp1224=LibeStrcmp(nctemp1216,nctemp1221);
int nctemp1213 = (nctemp1224 ==1);
if(nctemp1213)
{
struct symbol* nctemp1231= tp;
nctempchar1* nctemp1233=SymGetstruct(nctemp1231);
nctempchar1* nctemp1229= nctemp1233;
struct nctempchar1 *nctemp1236;
static struct nctempchar1 nctemp1237 = {{ 10}, (char*)"structdef\0"};
nctemp1236=&nctemp1237;
nctempchar1* nctemp1234= nctemp1236;
int nctemp1238=LibeStrcmp(nctemp1229,nctemp1234);
int nctemp1226 = (nctemp1238 ==1);
if(nctemp1226)
{
struct tree* nctemp1241= p;
struct symbol* nctemp1243= tp;
int nctemp1245=CodeStructdefsym(nctemp1241,nctemp1243);
}
else{
struct symbol* nctemp1251= tp;
nctempchar1* nctemp1253=SymGetfunc(nctemp1251);
nctempchar1* nctemp1249= nctemp1253;
struct nctempchar1 *nctemp1256;
static struct nctempchar1 nctemp1257 = {{ 5}, (char*)"fdef\0"};
nctemp1256=&nctemp1257;
nctempchar1* nctemp1254= nctemp1256;
int nctemp1258=LibeStrcmp(nctemp1249,nctemp1254);
int nctemp1246 = (nctemp1258 ==1);
if(nctemp1246)
{
struct tree* nctemp1261= p;
struct symbol* nctemp1263= tp;
int nctemp1265=CodeFdefcpusym(nctemp1261,nctemp1263);
}
else{
struct tree* nctemp1267= p;
struct symbol* nctemp1269= tp;
int nctemp1271=CodeIdeclaration(nctemp1267,nctemp1269);
struct tree* nctemp1273= p;
struct nctempchar1 *nctemp1277;
static struct nctempchar1 nctemp1278 = {{ 4}, (char*)";\n\0"};
nctemp1277=&nctemp1278;
nctempchar1* nctemp1275= nctemp1277;
int nctemp1279=CodeEs(nctemp1273,nctemp1275);
}
}
}
struct symbol* nctemp1284= tp;
struct symbol* nctemp1286=SymMvnext(nctemp1284);
tp =nctemp1286;
}
int nctemp1287 = (tp !=0);
nctemp1212=nctemp1287;}}
int CodeStructdef (struct tree* p,struct symbol* tp)
;
int CodeFdef (struct tree* p)
;
int CodeFdefcpu (struct tree* p)
{
struct symbol* tp;
struct tree* top;
int noarg;
int forw;
noarg =0;
forw =0;
top =p;
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
struct tree* top;
int noarg;
int forw;
noarg =0;
forw =0;
top =p;
struct tree* nctemp1903= p;
nctempchar1* nctemp1905=PtreeGetarray(nctemp1903);
nctempchar1* nctemp1901= nctemp1905;
struct nctempchar1 *nctemp1908;
static struct nctempchar1 nctemp1909 = {{ 6}, (char*)"array\0"};
nctemp1908=&nctemp1909;
nctempchar1* nctemp1906= nctemp1908;
int nctemp1910=LibeStrcmp(nctemp1901,nctemp1906);
int nctemp1898 = (nctemp1910 ==1);
if(nctemp1898)
{
struct tree* nctemp1916= p;
struct tree* nctemp1918=PtreeMvchild(nctemp1916);
p =nctemp1918;
struct tree* nctemp1923= p;
struct tree* nctemp1925=PtreeMvsister(nctemp1923);
p =nctemp1925;
struct tree* nctemp1931= p;
nctempchar1* nctemp1933=PtreeGetforw(nctemp1931);
nctempchar1* nctemp1929= nctemp1933;
struct nctempchar1 *nctemp1936;
static struct nctempchar1 nctemp1937 = {{ 5}, (char*)"forw\0"};
nctemp1936=&nctemp1937;
nctempchar1* nctemp1934= nctemp1936;
int nctemp1938=LibeStrcmp(nctemp1929,nctemp1934);
int nctemp1926 = (nctemp1938 ==1);
if(nctemp1926)
{
forw =1;
}
}
else{
struct tree* nctemp1948= p;
struct tree* nctemp1950=PtreeMvchild(nctemp1948);
p =nctemp1950;
struct tree* nctemp1956= p;
nctempchar1* nctemp1958=PtreeGetforw(nctemp1956);
nctempchar1* nctemp1954= nctemp1958;
struct nctempchar1 *nctemp1961;
static struct nctempchar1 nctemp1962 = {{ 5}, (char*)"forw\0"};
nctemp1961=&nctemp1962;
nctempchar1* nctemp1959= nctemp1961;
int nctemp1963=LibeStrcmp(nctemp1954,nctemp1959);
int nctemp1951 = (nctemp1963 ==1);
if(nctemp1951)
{
forw =1;
}
}
struct tree* nctemp1975= p;
nctempchar1* nctemp1977=PtreeGetdef(nctemp1975);
nctempchar1* nctemp1973= nctemp1977;
struct symbol* nctemp1980=SymGetetp();
struct symbol* nctemp1978= nctemp1980;
struct symbol* nctemp1981=SymLookup(nctemp1973,nctemp1978);
tp =nctemp1981;
struct tree* nctemp1983= p;
struct nctempchar1 *nctemp1987;
static struct nctempchar1 nctemp1988 = {{ 11}, (char*)"__global__\0"};
nctemp1987=&nctemp1988;
nctempchar1* nctemp1985= nctemp1987;
int nctemp1989=CodeEs(nctemp1983,nctemp1985);
struct tree* nctemp1991= p;
struct nctempchar1 *nctemp1995;
static struct nctempchar1 nctemp1996 = {{ 6}, (char*)" void\0"};
nctemp1995=&nctemp1996;
nctempchar1* nctemp1993= nctemp1995;
int nctemp1997=CodeEs(nctemp1991,nctemp1993);
struct tree* nctemp1999= p;
struct nctempchar1 *nctemp2003;
static struct nctempchar1 nctemp2004 = {{ 2}, (char*)" \0"};
nctemp2003=&nctemp2004;
nctempchar1* nctemp2001= nctemp2003;
int nctemp2005=CodeEs(nctemp1999,nctemp2001);
struct tree* nctemp2007= p;
struct nctempchar1 *nctemp2011;
static struct nctempchar1 nctemp2012 = {{ 8}, (char*)"kernel_\0"};
nctemp2011=&nctemp2012;
nctempchar1* nctemp2009= nctemp2011;
int nctemp2013=CodeEs(nctemp2007,nctemp2009);
struct tree* nctemp2015= p;
struct symbol* nctemp2019= tp;
nctempchar1* nctemp2021=SymGetname(nctemp2019);
nctempchar1* nctemp2017= nctemp2021;
int nctemp2022=CodeEs(nctemp2015,nctemp2017);
struct tree* nctemp2024= p;
struct nctempchar1 *nctemp2028;
static struct nctempchar1 nctemp2029 = {{ 3}, (char*)" (\0"};
nctemp2028=&nctemp2029;
nctempchar1* nctemp2026= nctemp2028;
int nctemp2030=CodeEs(nctemp2024,nctemp2026);
struct tree* nctemp2034= p;
struct tree* nctemp2036=PtreeMvchild(nctemp2034);
int nctemp2031 = (nctemp2036 !=0);
if(nctemp2031)
{
struct tree* nctemp2042= p;
struct tree* nctemp2044=PtreeMvchild(nctemp2042);
p =nctemp2044;
}
struct tree* nctemp2050= p;
nctempchar1* nctemp2052=PtreeGetname(nctemp2050);
nctempchar1* nctemp2048= nctemp2052;
struct nctempchar1 *nctemp2055;
static struct nctempchar1 nctemp2056 = {{ 8}, (char*)"arglist\0"};
nctemp2055=&nctemp2056;
nctempchar1* nctemp2053= nctemp2055;
int nctemp2057=LibeStrcmp(nctemp2048,nctemp2053);
int nctemp2045 = (nctemp2057 ==1);
if(nctemp2045)
{
struct symbol* nctemp2063= tp;
struct symbol* nctemp2065=SymGetable(nctemp2063);
tp =nctemp2065;
struct nctempchar1 *nctemp2072;
static struct nctempchar1 nctemp2073 = {{ 9}, (char*)"#arglist\0"};
nctemp2072=&nctemp2073;
nctempchar1* nctemp2070= nctemp2072;
struct symbol* nctemp2074= tp;
struct symbol* nctemp2076=SymLookup(nctemp2070,nctemp2074);
tp =nctemp2076;
struct symbol* nctemp2081= tp;
struct symbol* nctemp2083=SymGetable(nctemp2081);
tp =nctemp2083;
struct symbol* nctemp2091= tp;
struct symbol* nctemp2093=SymMvnext(nctemp2091);
tp =nctemp2093;
int nctemp2084 = (tp !=0);
int nctemp2095=nctemp2084;
while(nctemp2095)
{{
struct tree* nctemp2097= p;
struct symbol* nctemp2099= tp;
int nctemp2101=CodeIdeclaration(nctemp2097,nctemp2099);
struct symbol* nctemp2105= tp;
struct symbol* nctemp2107=SymMvnext(nctemp2105);
int nctemp2102 = (nctemp2107 !=0);
if(nctemp2102)
{
struct tree* nctemp2110= p;
struct nctempchar1 *nctemp2114;
static struct nctempchar1 nctemp2115 = {{ 2}, (char*)",\0"};
nctemp2114=&nctemp2115;
nctempchar1* nctemp2112= nctemp2114;
int nctemp2116=CodeEs(nctemp2110,nctemp2112);
}
int nctemp2125 = noarg + 1;
noarg =nctemp2125;
}
struct symbol* nctemp2133= tp;
struct symbol* nctemp2135=SymMvnext(nctemp2133);
tp =nctemp2135;
int nctemp2126 = (tp !=0);
nctemp2095=nctemp2126;}}
struct tree* nctemp2138= p;
struct nctempchar1 *nctemp2142;
static struct nctempchar1 nctemp2143 = {{ 4}, (char*)")\n\0"};
nctemp2142=&nctemp2143;
nctempchar1* nctemp2140= nctemp2142;
int nctemp2144=CodeEs(nctemp2138,nctemp2140);
int nctemp2145 = (forw ==1);
if(nctemp2145)
{
struct tree* nctemp2150= p;
struct nctempchar1 *nctemp2154;
static struct nctempchar1 nctemp2155 = {{ 4}, (char*)";\n\0"};
nctemp2154=&nctemp2155;
nctempchar1* nctemp2152= nctemp2154;
int nctemp2156=CodeEs(nctemp2150,nctemp2152);
return 1;
}
struct tree* nctemp2161= p;
struct tree* nctemp2163=PtreeMvsister(nctemp2161);
int nctemp2158 = (nctemp2163 !=0);
if(nctemp2158)
{
struct tree* nctemp2168= p;
struct tree* nctemp2170=PtreeMvsister(nctemp2168);
struct tree* nctemp2166= nctemp2170;
int nctemp2171=CodeCompstmnt(nctemp2166);
}
else{
struct tree* nctemp2173= p;
int nctemp2175=CodeCompstmnt(nctemp2173);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2181= p;
struct tree* nctemp2183=PtreeMvchild(nctemp2181);
p =nctemp2183;
noarg =0;
struct tree* nctemp2194= p;
nctempchar1* nctemp2196=PtreeGetdef(nctemp2194);
nctempchar1* nctemp2192= nctemp2196;
struct symbol* nctemp2199=SymGetetp();
struct symbol* nctemp2197= nctemp2199;
struct symbol* nctemp2200=SymLookup(nctemp2192,nctemp2197);
tp =nctemp2200;
struct symbol* nctemp2204= tp;
struct symbol* nctemp2206=SymGetable(nctemp2204);
struct symbol* nctemp2202= nctemp2206;
struct symbol* nctemp2207=SymSetltp(nctemp2202);
struct symbol* nctemp2213= tp;
nctempchar1* nctemp2215=SymGetstruct(nctemp2213);
nctempchar1* nctemp2211= nctemp2215;
struct nctempchar1 *nctemp2218;
static struct nctempchar1 nctemp2219 = {{ 7}, (char*)"struct\0"};
nctemp2218=&nctemp2219;
nctempchar1* nctemp2216= nctemp2218;
int nctemp2220=LibeStrcmp(nctemp2211,nctemp2216);
int nctemp2208 = (nctemp2220 ==1);
if(nctemp2208)
{
struct tree* nctemp2223= p;
struct nctempchar1 *nctemp2227;
static struct nctempchar1 nctemp2228 = {{ 8}, (char*)"struct \0"};
nctemp2227=&nctemp2228;
nctempchar1* nctemp2225= nctemp2227;
int nctemp2229=CodeEs(nctemp2223,nctemp2225);
}
struct symbol* nctemp2235= tp;
nctempchar1* nctemp2237=SymGetarray(nctemp2235);
nctempchar1* nctemp2233= nctemp2237;
struct nctempchar1 *nctemp2240;
static struct nctempchar1 nctemp2241 = {{ 6}, (char*)"array\0"};
nctemp2240=&nctemp2241;
nctempchar1* nctemp2238= nctemp2240;
int nctemp2242=LibeStrcmp(nctemp2233,nctemp2238);
int nctemp2230 = (nctemp2242 ==1);
if(nctemp2230)
{
struct tree* nctemp2245= p;
struct nctempchar1 *nctemp2249;
static struct nctempchar1 nctemp2250 = {{ 7}, (char*)"nctemp\0"};
nctemp2249=&nctemp2250;
nctempchar1* nctemp2247= nctemp2249;
int nctemp2251=CodeEs(nctemp2245,nctemp2247);
}
struct tree* nctemp2253= p;
struct symbol* nctemp2257= tp;
nctempchar1* nctemp2259=SymGetype(nctemp2257);
nctempchar1* nctemp2255= nctemp2259;
int nctemp2260=CodeEs(nctemp2253,nctemp2255);
struct symbol* nctemp2266= tp;
nctempchar1* nctemp2268=SymGetarray(nctemp2266);
nctempchar1* nctemp2264= nctemp2268;
struct nctempchar1 *nctemp2271;
static struct nctempchar1 nctemp2272 = {{ 6}, (char*)"array\0"};
nctemp2271=&nctemp2272;
nctempchar1* nctemp2269= nctemp2271;
int nctemp2273=LibeStrcmp(nctemp2264,nctemp2269);
int nctemp2261 = (nctemp2273 ==1);
if(nctemp2261)
{
struct symbol* nctemp2278= tp;
int nctemp2280=SymGetrank(nctemp2278);
int nctemp2276= nctemp2280;
int nctemp2281=CodeEd(nctemp2276);
}
struct symbol* nctemp2287= tp;
nctempchar1* nctemp2289=SymGetstruct(nctemp2287);
nctempchar1* nctemp2285= nctemp2289;
struct nctempchar1 *nctemp2292;
static struct nctempchar1 nctemp2293 = {{ 7}, (char*)"struct\0"};
nctemp2292=&nctemp2293;
nctempchar1* nctemp2290= nctemp2292;
int nctemp2294=LibeStrcmp(nctemp2285,nctemp2290);
int nctemp2282 = (nctemp2294 ==1);
if(nctemp2282)
{
struct tree* nctemp2297= p;
struct nctempchar1 *nctemp2301;
static struct nctempchar1 nctemp2302 = {{ 2}, (char*)"*\0"};
nctemp2301=&nctemp2302;
nctempchar1* nctemp2299= nctemp2301;
int nctemp2303=CodeEs(nctemp2297,nctemp2299);
}
top =p;
toptp =tp;
struct tree* nctemp2313= p;
struct nctempchar1 *nctemp2317;
static struct nctempchar1 nctemp2318 = {{ 2}, (char*)" \0"};
nctemp2317=&nctemp2318;
nctempchar1* nctemp2315= nctemp2317;
int nctemp2319=CodeEs(nctemp2313,nctemp2315);
struct tree* nctemp2321= p;
struct symbol* nctemp2325= tp;
nctempchar1* nctemp2327=SymGetname(nctemp2325);
nctempchar1* nctemp2323= nctemp2327;
int nctemp2328=CodeEs(nctemp2321,nctemp2323);
struct tree* nctemp2330= p;
struct nctempchar1 *nctemp2334;
static struct nctempchar1 nctemp2335 = {{ 3}, (char*)" (\0"};
nctemp2334=&nctemp2335;
nctempchar1* nctemp2332= nctemp2334;
int nctemp2336=CodeEs(nctemp2330,nctemp2332);
struct tree* nctemp2341= p;
struct tree* nctemp2343=PtreeMvchild(nctemp2341);
p =nctemp2343;
struct tree* nctemp2349= p;
nctempchar1* nctemp2351=PtreeGetname(nctemp2349);
nctempchar1* nctemp2347= nctemp2351;
struct nctempchar1 *nctemp2354;
static struct nctempchar1 nctemp2355 = {{ 8}, (char*)"arglist\0"};
nctemp2354=&nctemp2355;
nctempchar1* nctemp2352= nctemp2354;
int nctemp2356=LibeStrcmp(nctemp2347,nctemp2352);
int nctemp2344 = (nctemp2356 ==1);
if(nctemp2344)
{
struct symbol* nctemp2362= tp;
struct symbol* nctemp2364=SymGetable(nctemp2362);
tp =nctemp2364;
struct nctempchar1 *nctemp2371;
static struct nctempchar1 nctemp2372 = {{ 9}, (char*)"#arglist\0"};
nctemp2371=&nctemp2372;
nctempchar1* nctemp2369= nctemp2371;
struct symbol* nctemp2373= tp;
struct symbol* nctemp2375=SymLookup(nctemp2369,nctemp2373);
tp =nctemp2375;
struct symbol* nctemp2380= tp;
struct symbol* nctemp2382=SymGetable(nctemp2380);
tp =nctemp2382;
struct symbol* nctemp2390= tp;
struct symbol* nctemp2392=SymMvnext(nctemp2390);
tp =nctemp2392;
int nctemp2383 = (tp !=0);
int nctemp2394=nctemp2383;
while(nctemp2394)
{{
struct tree* nctemp2396= p;
struct symbol* nctemp2398= tp;
int nctemp2400=CodeIdeclaration(nctemp2396,nctemp2398);
struct symbol* nctemp2404= tp;
struct symbol* nctemp2406=SymMvnext(nctemp2404);
int nctemp2401 = (nctemp2406 !=0);
if(nctemp2401)
{
struct tree* nctemp2409= p;
struct nctempchar1 *nctemp2413;
static struct nctempchar1 nctemp2414 = {{ 2}, (char*)",\0"};
nctemp2413=&nctemp2414;
nctempchar1* nctemp2411= nctemp2413;
int nctemp2415=CodeEs(nctemp2409,nctemp2411);
}
int nctemp2424 = noarg + 1;
noarg =nctemp2424;
}
struct symbol* nctemp2432= tp;
struct symbol* nctemp2434=SymMvnext(nctemp2432);
tp =nctemp2434;
int nctemp2425 = (tp !=0);
nctemp2394=nctemp2425;}}
struct tree* nctemp2437= p;
struct nctempchar1 *nctemp2441;
static struct nctempchar1 nctemp2442 = {{ 4}, (char*)")\n\0"};
nctemp2441=&nctemp2442;
nctempchar1* nctemp2439= nctemp2441;
int nctemp2443=CodeEs(nctemp2437,nctemp2439);
struct tree* nctemp2445= p;
struct nctempchar1 *nctemp2449;
static struct nctempchar1 nctemp2450 = {{ 4}, (char*)"{\n\0"};
nctemp2449=&nctemp2450;
nctempchar1* nctemp2447= nctemp2449;
int nctemp2451=CodeEs(nctemp2445,nctemp2447);
p =top;
tp =toptp;
struct tree* nctemp2461= p;
struct nctempchar1 *nctemp2465;
static struct nctempchar1 nctemp2466 = {{ 10}, (char*)"  kernel_\0"};
nctemp2465=&nctemp2466;
nctempchar1* nctemp2463= nctemp2465;
int nctemp2467=CodeEs(nctemp2461,nctemp2463);
struct tree* nctemp2469= p;
struct symbol* nctemp2473= tp;
nctempchar1* nctemp2475=SymGetname(nctemp2473);
nctempchar1* nctemp2471= nctemp2475;
int nctemp2476=CodeEs(nctemp2469,nctemp2471);
struct tree* nctemp2478= p;
struct nctempchar1 *nctemp2482;
static struct nctempchar1 nctemp2483 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2482=&nctemp2483;
nctempchar1* nctemp2480= nctemp2482;
int nctemp2484=CodeEs(nctemp2478,nctemp2480);
struct tree* nctemp2489= p;
struct tree* nctemp2491=PtreeMvchild(nctemp2489);
p =nctemp2491;
struct tree* nctemp2497= p;
nctempchar1* nctemp2499=PtreeGetname(nctemp2497);
nctempchar1* nctemp2495= nctemp2499;
struct nctempchar1 *nctemp2502;
static struct nctempchar1 nctemp2503 = {{ 8}, (char*)"arglist\0"};
nctemp2502=&nctemp2503;
nctempchar1* nctemp2500= nctemp2502;
int nctemp2504=LibeStrcmp(nctemp2495,nctemp2500);
int nctemp2492 = (nctemp2504 ==1);
if(nctemp2492)
{
struct symbol* nctemp2510= tp;
struct symbol* nctemp2512=SymGetable(nctemp2510);
tp =nctemp2512;
struct nctempchar1 *nctemp2519;
static struct nctempchar1 nctemp2520 = {{ 9}, (char*)"#arglist\0"};
nctemp2519=&nctemp2520;
nctempchar1* nctemp2517= nctemp2519;
struct symbol* nctemp2521= tp;
struct symbol* nctemp2523=SymLookup(nctemp2517,nctemp2521);
tp =nctemp2523;
struct symbol* nctemp2528= tp;
struct symbol* nctemp2530=SymGetable(nctemp2528);
tp =nctemp2530;
struct symbol* nctemp2538= tp;
struct symbol* nctemp2540=SymMvnext(nctemp2538);
tp =nctemp2540;
int nctemp2531 = (tp !=0);
int nctemp2542=nctemp2531;
while(nctemp2542)
{{
struct tree* nctemp2544= p;
struct symbol* nctemp2548= tp;
nctempchar1* nctemp2550=SymGetname(nctemp2548);
nctempchar1* nctemp2546= nctemp2550;
int nctemp2551=CodeEs(nctemp2544,nctemp2546);
struct symbol* nctemp2555= tp;
struct symbol* nctemp2557=SymMvnext(nctemp2555);
int nctemp2552 = (nctemp2557 !=0);
if(nctemp2552)
{
struct tree* nctemp2560= p;
struct nctempchar1 *nctemp2564;
static struct nctempchar1 nctemp2565 = {{ 2}, (char*)",\0"};
nctemp2564=&nctemp2565;
nctempchar1* nctemp2562= nctemp2564;
int nctemp2566=CodeEs(nctemp2560,nctemp2562);
}
int nctemp2575 = noarg + 1;
noarg =nctemp2575;
}
struct symbol* nctemp2583= tp;
struct symbol* nctemp2585=SymMvnext(nctemp2583);
tp =nctemp2585;
int nctemp2576 = (tp !=0);
nctemp2542=nctemp2576;}}
struct tree* nctemp2588= p;
struct nctempchar1 *nctemp2592;
static struct nctempchar1 nctemp2593 = {{ 5}, (char*)");\n\0"};
nctemp2592=&nctemp2593;
nctempchar1* nctemp2590= nctemp2592;
int nctemp2594=CodeEs(nctemp2588,nctemp2590);
struct tree* nctemp2596= p;
struct nctempchar1 *nctemp2600;
static struct nctempchar1 nctemp2601 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2600=&nctemp2601;
nctempchar1* nctemp2598= nctemp2600;
int nctemp2602=CodeEs(nctemp2596,nctemp2598);
struct tree* nctemp2604= p;
struct nctempchar1 *nctemp2608;
static struct nctempchar1 nctemp2609 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2608=&nctemp2609;
nctempchar1* nctemp2606= nctemp2608;
int nctemp2610=CodeEs(nctemp2604,nctemp2606);
struct tree* nctemp2612= p;
struct nctempchar1 *nctemp2616;
static struct nctempchar1 nctemp2617 = {{ 4}, (char*)"}\n\0"};
nctemp2616=&nctemp2617;
nctempchar1* nctemp2614= nctemp2616;
int nctemp2618=CodeEs(nctemp2612,nctemp2614);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2624= tp;
struct symbol* nctemp2626=SymMvnext(nctemp2624);
tp =nctemp2626;
int nctemp2627 = (tp !=0);
int nctemp2631=nctemp2627;
while(nctemp2631)
{{
struct nctempchar1 *nctemp2637;
static struct nctempchar1 nctemp2638 = {{ 9}, (char*)"#arglist\0"};
nctemp2637=&nctemp2638;
nctempchar1* nctemp2635= nctemp2637;
struct symbol* nctemp2641= tp;
nctempchar1* nctemp2643=SymGetname(nctemp2641);
nctempchar1* nctemp2639= nctemp2643;
int nctemp2644=LibeStrcmp(nctemp2635,nctemp2639);
int nctemp2632 = (nctemp2644 ==0);
if(nctemp2632)
{
struct symbol* nctemp2649= tp;
int nctemp2651=SymGetemit(nctemp2649);
int nctemp2646 = (nctemp2651 ==1);
if(nctemp2646)
{
struct symbol* nctemp2658= tp;
nctempchar1* nctemp2660=SymGetstruct(nctemp2658);
nctempchar1* nctemp2656= nctemp2660;
struct nctempchar1 *nctemp2663;
static struct nctempchar1 nctemp2664 = {{ 10}, (char*)"structdef\0"};
nctemp2663=&nctemp2664;
nctempchar1* nctemp2661= nctemp2663;
int nctemp2665=LibeStrcmp(nctemp2656,nctemp2661);
int nctemp2653 = (nctemp2665 ==1);
if(nctemp2653)
{
struct tree* nctemp2668= p;
struct symbol* nctemp2670= tp;
int nctemp2672=CodeStructdef(nctemp2668,nctemp2670);
}
else{
struct symbol* nctemp2678= tp;
nctempchar1* nctemp2680=SymGetfunc(nctemp2678);
nctempchar1* nctemp2676= nctemp2680;
struct nctempchar1 *nctemp2683;
static struct nctempchar1 nctemp2684 = {{ 5}, (char*)"fdef\0"};
nctemp2683=&nctemp2684;
nctempchar1* nctemp2681= nctemp2683;
int nctemp2685=LibeStrcmp(nctemp2676,nctemp2681);
int nctemp2673 = (nctemp2685 ==1);
if(nctemp2673)
{
struct tree* nctemp2688= p;
int nctemp2690=CodeFdef(nctemp2688);
}
else{
struct symbol* nctemp2696= tp;
nctempchar1* nctemp2698=SymGetname(nctemp2696);
nctempchar1* nctemp2694= nctemp2698;
struct nctempchar1 *nctemp2701;
static struct nctempchar1 nctemp2702 = {{ 6}, (char*)"#self\0"};
nctemp2701=&nctemp2702;
nctempchar1* nctemp2699= nctemp2701;
int nctemp2703=LibeStrcmp(nctemp2694,nctemp2699);
int nctemp2691 = (nctemp2703 ==0);
if(nctemp2691)
{
struct tree* nctemp2706= p;
struct symbol* nctemp2708= tp;
int nctemp2710=CodeIdeclaration(nctemp2706,nctemp2708);
struct tree* nctemp2712= p;
struct nctempchar1 *nctemp2716;
static struct nctempchar1 nctemp2717 = {{ 4}, (char*)";\n\0"};
nctemp2716=&nctemp2717;
nctempchar1* nctemp2714= nctemp2716;
int nctemp2718=CodeEs(nctemp2712,nctemp2714);
}
}
}
struct symbol* nctemp2720= tp;
int nctemp2722= 0;
int nctemp2724=SymSetemit(nctemp2720,nctemp2722);
}
}
struct symbol* nctemp2729= tp;
struct symbol* nctemp2731=SymMvnext(nctemp2729);
tp =nctemp2731;
}
int nctemp2732 = (tp !=0);
nctemp2631=nctemp2732;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2737 = (p !=0);
if(nctemp2737)
{
struct tree* nctemp2745= p;
struct tree* nctemp2747=PtreeMvchild(nctemp2745);
np =nctemp2747;
}
else{
np =p;
}
struct tree* nctemp2753= np;
struct symbol* nctemp2755= tp;
int nctemp2757=CodeGdeclarations(nctemp2753,nctemp2755);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2763= p;
struct tree* nctemp2765=PtreeMvchild(nctemp2763);
np =nctemp2765;
struct tree* nctemp2769= np;
nctempchar1* nctemp2771=PtreeGetname(nctemp2769);
nctempchar1* nctemp2767= nctemp2771;
struct nctempchar1 *nctemp2774;
static struct nctempchar1 nctemp2775 = {{ 7}, (char*)"import\0"};
nctemp2774=&nctemp2775;
nctempchar1* nctemp2772= nctemp2774;
int nctemp2776=LibeStrcmp(nctemp2767,nctemp2772);
if(nctemp2776)
{
struct tree* nctemp2778= np;
struct symbol* nctemp2780= tp;
int nctemp2782=CodeImport(nctemp2778,nctemp2780);
}
struct tree* nctemp2784= p;
struct symbol* nctemp2786= tp;
int nctemp2788=CodeDeclarations(nctemp2784,nctemp2786);
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
int nctemp2807= 0;
nctempchar1* nctemp2809=CodeItemp(nctemp2807);
return nctemp2809;
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
nctempchar1* nctemp2820=CodeMktemp();
temp=nctemp2820;
nctempchar1* nctemp2825= temp;
struct symbol* nctemp2830=SymGetltp();
struct symbol* nctemp2828= nctemp2830;
struct symbol* nctemp2831=SymMkname(nctemp2825,nctemp2828);
tp =nctemp2831;
struct symbol* nctemp2833= tp;
nctempchar1* nctemp2835= type;
int nctemp2838=SymSetype(nctemp2833,nctemp2835);
struct symbol* nctemp2840= tp;
int nctemp2842= 0;
int nctemp2844=SymSetemit(nctemp2840,nctemp2842);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2851= name;
struct symbol* nctemp2856=SymGetltp();
struct symbol* nctemp2854= nctemp2856;
struct symbol* nctemp2857=SymMkname(nctemp2851,nctemp2854);
tp =nctemp2857;
struct symbol* nctemp2859= tp;
nctempchar1* nctemp2861= type;
int nctemp2864=SymSetype(nctemp2859,nctemp2861);
struct symbol* nctemp2866= tp;
int nctemp2868= 0;
int nctemp2870=SymSetemit(nctemp2866,nctemp2868);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2877=CodeMktemp();
tmp=nctemp2877;
nctempchar1* nctemp2882= tmp;
struct symbol* nctemp2887=SymGetltp();
struct symbol* nctemp2885= nctemp2887;
struct symbol* nctemp2888=SymMkname(nctemp2882,nctemp2885);
sp =nctemp2888;
struct symbol* nctemp2890= sp;
int nctemp2892= 1;
int nctemp2894=SymSetrank(nctemp2890,nctemp2892);
struct symbol* nctemp2896= sp;
struct nctempchar1 *nctemp2900;
static struct nctempchar1 nctemp2901 = {{ 5}, (char*)"char\0"};
nctemp2900=&nctemp2901;
nctempchar1* nctemp2898= nctemp2900;
int nctemp2902=SymSetype(nctemp2896,nctemp2898);
struct symbol* nctemp2904= sp;
struct nctempchar1 *nctemp2908;
static struct nctempchar1 nctemp2909 = {{ 6}, (char*)"array\0"};
nctemp2908=&nctemp2909;
nctempchar1* nctemp2906= nctemp2908;
int nctemp2910=SymSetarray(nctemp2904,nctemp2906);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2918=CodeMktemp();
tmp2=nctemp2918;
struct tree* nctemp2920= p;
struct nctempchar1 *nctemp2924;
static struct nctempchar1 nctemp2925 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2924=&nctemp2925;
nctempchar1* nctemp2922= nctemp2924;
int nctemp2926=CodeEs(nctemp2920,nctemp2922);
struct tree* nctemp2928= p;
nctempchar1* nctemp2930= tmp2;
int nctemp2933=CodeEs(nctemp2928,nctemp2930);
struct tree* nctemp2935= p;
struct nctempchar1 *nctemp2939;
static struct nctempchar1 nctemp2940 = {{ 4}, (char*)";\n\0"};
nctemp2939=&nctemp2940;
nctempchar1* nctemp2937= nctemp2939;
int nctemp2941=CodeEs(nctemp2935,nctemp2937);
nctempchar1* nctemp2947=CodeMktemp();
tmp=nctemp2947;
struct tree* nctemp2949= p;
struct nctempchar1 *nctemp2953;
static struct nctempchar1 nctemp2954 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2953=&nctemp2954;
nctempchar1* nctemp2951= nctemp2953;
int nctemp2955=CodeEs(nctemp2949,nctemp2951);
struct tree* nctemp2957= p;
nctempchar1* nctemp2959= tmp;
int nctemp2962=CodeEs(nctemp2957,nctemp2959);
struct tree* nctemp2964= p;
struct nctempchar1 *nctemp2968;
static struct nctempchar1 nctemp2969 = {{ 4}, (char*)" = \0"};
nctemp2968=&nctemp2969;
nctempchar1* nctemp2966= nctemp2968;
int nctemp2970=CodeEs(nctemp2964,nctemp2966);
struct tree* nctemp2972= p;
struct nctempchar1 *nctemp2976;
static struct nctempchar1 nctemp2977 = {{ 4}, (char*)"{{ \0"};
nctemp2976=&nctemp2977;
nctempchar1* nctemp2974= nctemp2976;
int nctemp2978=CodeEs(nctemp2972,nctemp2974);
struct tree* nctemp2988= p;
nctempchar1* nctemp2990=PtreeGetdef(nctemp2988);
nctempchar1* nctemp2986= nctemp2990;
int nctemp2991=LibeStrlen(nctemp2986);
int nctemp2993 = nctemp2991 - 1;
l =nctemp2993;
int nctemp2995= l;
int nctemp2997=CodeEd(nctemp2995);
struct tree* nctemp2999= p;
struct nctempchar1 *nctemp3003;
static struct nctempchar1 nctemp3004 = {{ 11}, (char*)"}, (char*)\0"};
nctemp3003=&nctemp3004;
nctempchar1* nctemp3001= nctemp3003;
int nctemp3005=CodeEs(nctemp2999,nctemp3001);
int nctemp3007= 34;
int nctemp3009=CodeEc(nctemp3007);
struct tree* nctemp3013= p;
nctempchar1* nctemp3015=PtreeGetdef(nctemp3013);
nctempchar1* nctemp3011= nctemp3015;
int nctemp3016=CodeEsr(nctemp3011);
int nctemp3018= 92;
int nctemp3020=CodeEc(nctemp3018);
int nctemp3022= 48;
int nctemp3024=CodeEc(nctemp3022);
int nctemp3026= 34;
int nctemp3028=CodeEc(nctemp3026);
struct tree* nctemp3030= p;
struct nctempchar1 *nctemp3034;
static struct nctempchar1 nctemp3035 = {{ 5}, (char*)"};\n\0"};
nctemp3034=&nctemp3035;
nctempchar1* nctemp3032= nctemp3034;
int nctemp3036=CodeEs(nctemp3030,nctemp3032);
struct tree* nctemp3038= p;
nctempchar1* nctemp3040= tmp2;
int nctemp3043=CodeEs(nctemp3038,nctemp3040);
struct tree* nctemp3045= p;
struct nctempchar1 *nctemp3049;
static struct nctempchar1 nctemp3050 = {{ 3}, (char*)"=&\0"};
nctemp3049=&nctemp3050;
nctempchar1* nctemp3047= nctemp3049;
int nctemp3051=CodeEs(nctemp3045,nctemp3047);
struct tree* nctemp3053= p;
nctempchar1* nctemp3055= tmp;
int nctemp3058=CodeEs(nctemp3053,nctemp3055);
struct tree* nctemp3060= p;
struct nctempchar1 *nctemp3064;
static struct nctempchar1 nctemp3065 = {{ 4}, (char*)";\n\0"};
nctemp3064=&nctemp3065;
nctempchar1* nctemp3062= nctemp3064;
int nctemp3066=CodeEs(nctemp3060,nctemp3062);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp3070= p;
struct nctempchar1 *nctemp3074;
static struct nctempchar1 nctemp3075 = {{ 8}, (char*)"struct \0"};
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
static struct nctempchar1 nctemp3092 = {{ 3}, (char*)" {\0"};
nctemp3091=&nctemp3092;
nctempchar1* nctemp3089= nctemp3091;
int nctemp3093=CodeEs(nctemp3087,nctemp3089);
struct symbol* nctemp3098= tp;
struct symbol* nctemp3100=SymGetable(nctemp3098);
up =nctemp3100;
struct symbol* nctemp3105= up;
struct symbol* nctemp3107=SymMvnext(nctemp3105);
up =nctemp3107;
struct tree* nctemp3109= p;
struct symbol* nctemp3111= up;
int nctemp3113=CodeIdeclarations(nctemp3109,nctemp3111);
struct tree* nctemp3115= p;
struct nctempchar1 *nctemp3119;
static struct nctempchar1 nctemp3120 = {{ 5}, (char*)"};\n\0"};
nctemp3119=&nctemp3120;
nctempchar1* nctemp3117= nctemp3119;
int nctemp3121=CodeEs(nctemp3115,nctemp3117);
struct tree* nctemp3123= p;
struct nctempchar1 *nctemp3127;
static struct nctempchar1 nctemp3128 = {{ 16}, (char*)"typedef struct \0"};
nctemp3127=&nctemp3128;
nctempchar1* nctemp3125= nctemp3127;
int nctemp3129=CodeEs(nctemp3123,nctemp3125);
struct tree* nctemp3131= p;
struct nctempchar1 *nctemp3135;
static struct nctempchar1 nctemp3136 = {{ 7}, (char*)"nctemp\0"};
nctemp3135=&nctemp3136;
nctempchar1* nctemp3133= nctemp3135;
int nctemp3137=CodeEs(nctemp3131,nctemp3133);
struct tree* nctemp3139= p;
struct symbol* nctemp3143= tp;
nctempchar1* nctemp3145=SymGetype(nctemp3143);
nctempchar1* nctemp3141= nctemp3145;
int nctemp3146=CodeEs(nctemp3139,nctemp3141);
struct tree* nctemp3148= p;
struct nctempchar1 *nctemp3152;
static struct nctempchar1 nctemp3153 = {{ 2}, (char*)"1\0"};
nctemp3152=&nctemp3153;
nctempchar1* nctemp3150= nctemp3152;
int nctemp3154=CodeEs(nctemp3148,nctemp3150);
struct tree* nctemp3156= p;
struct nctempchar1 *nctemp3160;
static struct nctempchar1 nctemp3161 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3160=&nctemp3161;
nctempchar1* nctemp3158= nctemp3160;
int nctemp3162=CodeEs(nctemp3156,nctemp3158);
struct tree* nctemp3164= p;
struct symbol* nctemp3168= tp;
nctempchar1* nctemp3170=SymGetype(nctemp3168);
nctempchar1* nctemp3166= nctemp3170;
int nctemp3171=CodeEs(nctemp3164,nctemp3166);
struct tree* nctemp3173= p;
struct nctempchar1 *nctemp3177;
static struct nctempchar1 nctemp3178 = {{ 6}, (char*)" *a; \0"};
nctemp3177=&nctemp3178;
nctempchar1* nctemp3175= nctemp3177;
int nctemp3179=CodeEs(nctemp3173,nctemp3175);
struct tree* nctemp3181= p;
struct nctempchar1 *nctemp3185;
static struct nctempchar1 nctemp3186 = {{ 3}, (char*)"} \0"};
nctemp3185=&nctemp3186;
nctempchar1* nctemp3183= nctemp3185;
int nctemp3187=CodeEs(nctemp3181,nctemp3183);
struct tree* nctemp3189= p;
struct nctempchar1 *nctemp3193;
static struct nctempchar1 nctemp3194 = {{ 7}, (char*)"nctemp\0"};
nctemp3193=&nctemp3194;
nctempchar1* nctemp3191= nctemp3193;
int nctemp3195=CodeEs(nctemp3189,nctemp3191);
struct tree* nctemp3197= p;
struct symbol* nctemp3201= tp;
nctempchar1* nctemp3203=SymGetype(nctemp3201);
nctempchar1* nctemp3199= nctemp3203;
int nctemp3204=CodeEs(nctemp3197,nctemp3199);
struct tree* nctemp3206= p;
struct nctempchar1 *nctemp3210;
static struct nctempchar1 nctemp3211 = {{ 2}, (char*)"1\0"};
nctemp3210=&nctemp3211;
nctempchar1* nctemp3208= nctemp3210;
int nctemp3212=CodeEs(nctemp3206,nctemp3208);
struct tree* nctemp3214= p;
struct nctempchar1 *nctemp3218;
static struct nctempchar1 nctemp3219 = {{ 4}, (char*)";\n\0"};
nctemp3218=&nctemp3219;
nctempchar1* nctemp3216= nctemp3218;
int nctemp3220=CodeEs(nctemp3214,nctemp3216);
struct tree* nctemp3222= p;
struct nctempchar1 *nctemp3226;
static struct nctempchar1 nctemp3227 = {{ 8}, (char*)"struct \0"};
nctemp3226=&nctemp3227;
nctempchar1* nctemp3224= nctemp3226;
int nctemp3228=CodeEs(nctemp3222,nctemp3224);
struct tree* nctemp3230= p;
struct nctempchar1 *nctemp3234;
static struct nctempchar1 nctemp3235 = {{ 7}, (char*)"nctemp\0"};
nctemp3234=&nctemp3235;
nctempchar1* nctemp3232= nctemp3234;
int nctemp3236=CodeEs(nctemp3230,nctemp3232);
struct tree* nctemp3238= p;
struct symbol* nctemp3242= tp;
nctempchar1* nctemp3244=SymGetype(nctemp3242);
nctempchar1* nctemp3240= nctemp3244;
int nctemp3245=CodeEs(nctemp3238,nctemp3240);
struct tree* nctemp3247= p;
struct nctempchar1 *nctemp3251;
static struct nctempchar1 nctemp3252 = {{ 2}, (char*)"2\0"};
nctemp3251=&nctemp3252;
nctempchar1* nctemp3249= nctemp3251;
int nctemp3253=CodeEs(nctemp3247,nctemp3249);
struct tree* nctemp3255= p;
struct nctempchar1 *nctemp3259;
static struct nctempchar1 nctemp3260 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3259=&nctemp3260;
nctempchar1* nctemp3257= nctemp3259;
int nctemp3261=CodeEs(nctemp3255,nctemp3257);
struct tree* nctemp3263= p;
struct symbol* nctemp3267= tp;
nctempchar1* nctemp3269=SymGetype(nctemp3267);
nctempchar1* nctemp3265= nctemp3269;
int nctemp3270=CodeEs(nctemp3263,nctemp3265);
struct tree* nctemp3272= p;
struct nctempchar1 *nctemp3276;
static struct nctempchar1 nctemp3277 = {{ 6}, (char*)" *a; \0"};
nctemp3276=&nctemp3277;
nctempchar1* nctemp3274= nctemp3276;
int nctemp3278=CodeEs(nctemp3272,nctemp3274);
struct tree* nctemp3280= p;
struct nctempchar1 *nctemp3284;
static struct nctempchar1 nctemp3285 = {{ 3}, (char*)"} \0"};
nctemp3284=&nctemp3285;
nctempchar1* nctemp3282= nctemp3284;
int nctemp3286=CodeEs(nctemp3280,nctemp3282);
struct tree* nctemp3288= p;
struct nctempchar1 *nctemp3292;
static struct nctempchar1 nctemp3293 = {{ 4}, (char*)";\n\0"};
nctemp3292=&nctemp3293;
nctempchar1* nctemp3290= nctemp3292;
int nctemp3294=CodeEs(nctemp3288,nctemp3290);
struct tree* nctemp3296= p;
struct nctempchar1 *nctemp3300;
static struct nctempchar1 nctemp3301 = {{ 8}, (char*)"struct \0"};
nctemp3300=&nctemp3301;
nctempchar1* nctemp3298= nctemp3300;
int nctemp3302=CodeEs(nctemp3296,nctemp3298);
struct tree* nctemp3304= p;
struct nctempchar1 *nctemp3308;
static struct nctempchar1 nctemp3309 = {{ 7}, (char*)"nctemp\0"};
nctemp3308=&nctemp3309;
nctempchar1* nctemp3306= nctemp3308;
int nctemp3310=CodeEs(nctemp3304,nctemp3306);
struct tree* nctemp3312= p;
struct symbol* nctemp3316= tp;
nctempchar1* nctemp3318=SymGetype(nctemp3316);
nctempchar1* nctemp3314= nctemp3318;
int nctemp3319=CodeEs(nctemp3312,nctemp3314);
struct tree* nctemp3321= p;
struct nctempchar1 *nctemp3325;
static struct nctempchar1 nctemp3326 = {{ 2}, (char*)"3\0"};
nctemp3325=&nctemp3326;
nctempchar1* nctemp3323= nctemp3325;
int nctemp3327=CodeEs(nctemp3321,nctemp3323);
struct tree* nctemp3329= p;
struct nctempchar1 *nctemp3333;
static struct nctempchar1 nctemp3334 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3333=&nctemp3334;
nctempchar1* nctemp3331= nctemp3333;
int nctemp3335=CodeEs(nctemp3329,nctemp3331);
struct tree* nctemp3337= p;
struct symbol* nctemp3341= tp;
nctempchar1* nctemp3343=SymGetype(nctemp3341);
nctempchar1* nctemp3339= nctemp3343;
int nctemp3344=CodeEs(nctemp3337,nctemp3339);
struct tree* nctemp3346= p;
struct nctempchar1 *nctemp3350;
static struct nctempchar1 nctemp3351 = {{ 6}, (char*)" *a; \0"};
nctemp3350=&nctemp3351;
nctempchar1* nctemp3348= nctemp3350;
int nctemp3352=CodeEs(nctemp3346,nctemp3348);
struct tree* nctemp3354= p;
struct nctempchar1 *nctemp3358;
static struct nctempchar1 nctemp3359 = {{ 3}, (char*)"} \0"};
nctemp3358=&nctemp3359;
nctempchar1* nctemp3356= nctemp3358;
int nctemp3360=CodeEs(nctemp3354,nctemp3356);
struct tree* nctemp3362= p;
struct nctempchar1 *nctemp3366;
static struct nctempchar1 nctemp3367 = {{ 4}, (char*)";\n\0"};
nctemp3366=&nctemp3367;
nctempchar1* nctemp3364= nctemp3366;
int nctemp3368=CodeEs(nctemp3362,nctemp3364);
struct tree* nctemp3370= p;
struct nctempchar1 *nctemp3374;
static struct nctempchar1 nctemp3375 = {{ 8}, (char*)"struct \0"};
nctemp3374=&nctemp3375;
nctempchar1* nctemp3372= nctemp3374;
int nctemp3376=CodeEs(nctemp3370,nctemp3372);
struct tree* nctemp3378= p;
struct nctempchar1 *nctemp3382;
static struct nctempchar1 nctemp3383 = {{ 7}, (char*)"nctemp\0"};
nctemp3382=&nctemp3383;
nctempchar1* nctemp3380= nctemp3382;
int nctemp3384=CodeEs(nctemp3378,nctemp3380);
struct tree* nctemp3386= p;
struct symbol* nctemp3390= tp;
nctempchar1* nctemp3392=SymGetype(nctemp3390);
nctempchar1* nctemp3388= nctemp3392;
int nctemp3393=CodeEs(nctemp3386,nctemp3388);
struct tree* nctemp3395= p;
struct nctempchar1 *nctemp3399;
static struct nctempchar1 nctemp3400 = {{ 2}, (char*)"4\0"};
nctemp3399=&nctemp3400;
nctempchar1* nctemp3397= nctemp3399;
int nctemp3401=CodeEs(nctemp3395,nctemp3397);
struct tree* nctemp3403= p;
struct nctempchar1 *nctemp3407;
static struct nctempchar1 nctemp3408 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3407=&nctemp3408;
nctempchar1* nctemp3405= nctemp3407;
int nctemp3409=CodeEs(nctemp3403,nctemp3405);
struct tree* nctemp3411= p;
struct symbol* nctemp3415= tp;
nctempchar1* nctemp3417=SymGetype(nctemp3415);
nctempchar1* nctemp3413= nctemp3417;
int nctemp3418=CodeEs(nctemp3411,nctemp3413);
struct tree* nctemp3420= p;
struct nctempchar1 *nctemp3424;
static struct nctempchar1 nctemp3425 = {{ 6}, (char*)" *a; \0"};
nctemp3424=&nctemp3425;
nctempchar1* nctemp3422= nctemp3424;
int nctemp3426=CodeEs(nctemp3420,nctemp3422);
struct tree* nctemp3428= p;
struct nctempchar1 *nctemp3432;
static struct nctempchar1 nctemp3433 = {{ 3}, (char*)"} \0"};
nctemp3432=&nctemp3433;
nctempchar1* nctemp3430= nctemp3432;
int nctemp3434=CodeEs(nctemp3428,nctemp3430);
struct tree* nctemp3436= p;
struct nctempchar1 *nctemp3440;
static struct nctempchar1 nctemp3441 = {{ 4}, (char*)";\n\0"};
nctemp3440=&nctemp3441;
nctempchar1* nctemp3438= nctemp3440;
int nctemp3442=CodeEs(nctemp3436,nctemp3438);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3449= tp;
nctempchar1* nctemp3451=SymGetstruct(nctemp3449);
nctempchar1* nctemp3447= nctemp3451;
struct nctempchar1 *nctemp3454;
static struct nctempchar1 nctemp3455 = {{ 7}, (char*)"struct\0"};
nctemp3454=&nctemp3455;
nctempchar1* nctemp3452= nctemp3454;
int nctemp3456=LibeStrcmp(nctemp3447,nctemp3452);
int nctemp3444 = (nctemp3456 ==1);
if(nctemp3444)
{
struct tree* nctemp3459= p;
struct nctempchar1 *nctemp3463;
static struct nctempchar1 nctemp3464 = {{ 8}, (char*)"struct \0"};
nctemp3463=&nctemp3464;
nctempchar1* nctemp3461= nctemp3463;
int nctemp3465=CodeEs(nctemp3459,nctemp3461);
}
struct symbol* nctemp3471= tp;
nctempchar1* nctemp3473=SymGetarray(nctemp3471);
nctempchar1* nctemp3469= nctemp3473;
struct nctempchar1 *nctemp3476;
static struct nctempchar1 nctemp3477 = {{ 6}, (char*)"array\0"};
nctemp3476=&nctemp3477;
nctempchar1* nctemp3474= nctemp3476;
int nctemp3478=LibeStrcmp(nctemp3469,nctemp3474);
int nctemp3466 = (nctemp3478 ==1);
if(nctemp3466)
{
struct tree* nctemp3481= p;
struct nctempchar1 *nctemp3485;
static struct nctempchar1 nctemp3486 = {{ 7}, (char*)"nctemp\0"};
nctemp3485=&nctemp3486;
nctempchar1* nctemp3483= nctemp3485;
int nctemp3487=CodeEs(nctemp3481,nctemp3483);
}
struct tree* nctemp3489= p;
struct symbol* nctemp3493= tp;
nctempchar1* nctemp3495=SymGetype(nctemp3493);
nctempchar1* nctemp3491= nctemp3495;
int nctemp3496=CodeEs(nctemp3489,nctemp3491);
struct symbol* nctemp3502= tp;
nctempchar1* nctemp3504=SymGetarray(nctemp3502);
nctempchar1* nctemp3500= nctemp3504;
struct nctempchar1 *nctemp3507;
static struct nctempchar1 nctemp3508 = {{ 6}, (char*)"array\0"};
nctemp3507=&nctemp3508;
nctempchar1* nctemp3505= nctemp3507;
int nctemp3509=LibeStrcmp(nctemp3500,nctemp3505);
int nctemp3497 = (nctemp3509 ==1);
if(nctemp3497)
{
struct symbol* nctemp3514= tp;
int nctemp3516=SymGetrank(nctemp3514);
int nctemp3512= nctemp3516;
int nctemp3517=CodeEd(nctemp3512);
struct tree* nctemp3519= p;
struct nctempchar1 *nctemp3523;
static struct nctempchar1 nctemp3524 = {{ 2}, (char*)"*\0"};
nctemp3523=&nctemp3524;
nctempchar1* nctemp3521= nctemp3523;
int nctemp3525=CodeEs(nctemp3519,nctemp3521);
}
struct symbol* nctemp3531= tp;
nctempchar1* nctemp3533=SymGetstruct(nctemp3531);
nctempchar1* nctemp3529= nctemp3533;
struct nctempchar1 *nctemp3536;
static struct nctempchar1 nctemp3537 = {{ 7}, (char*)"struct\0"};
nctemp3536=&nctemp3537;
nctempchar1* nctemp3534= nctemp3536;
int nctemp3538=LibeStrcmp(nctemp3529,nctemp3534);
int nctemp3526 = (nctemp3538 ==1);
if(nctemp3526)
{
struct tree* nctemp3541= p;
struct nctempchar1 *nctemp3545;
static struct nctempchar1 nctemp3546 = {{ 2}, (char*)"*\0"};
nctemp3545=&nctemp3546;
nctempchar1* nctemp3543= nctemp3545;
int nctemp3547=CodeEs(nctemp3541,nctemp3543);
}
struct tree* nctemp3549= p;
struct nctempchar1 *nctemp3553;
static struct nctempchar1 nctemp3554 = {{ 2}, (char*)" \0"};
nctemp3553=&nctemp3554;
nctempchar1* nctemp3551= nctemp3553;
int nctemp3555=CodeEs(nctemp3549,nctemp3551);
struct tree* nctemp3557= p;
struct symbol* nctemp3561= tp;
nctempchar1* nctemp3563=SymGetname(nctemp3561);
nctempchar1* nctemp3559= nctemp3563;
int nctemp3564=CodeEs(nctemp3557,nctemp3559);
struct tree* nctemp3566= p;
struct nctempchar1 *nctemp3570;
static struct nctempchar1 nctemp3571 = {{ 3}, (char*)" (\0"};
nctemp3570=&nctemp3571;
nctempchar1* nctemp3568= nctemp3570;
int nctemp3572=CodeEs(nctemp3566,nctemp3568);
struct symbol* nctemp3577= tp;
struct symbol* nctemp3579=SymGetable(nctemp3577);
tp =nctemp3579;
struct nctempchar1 *nctemp3586;
static struct nctempchar1 nctemp3587 = {{ 9}, (char*)"#arglist\0"};
nctemp3586=&nctemp3587;
nctempchar1* nctemp3584= nctemp3586;
struct symbol* nctemp3588= tp;
struct symbol* nctemp3590=SymLookup(nctemp3584,nctemp3588);
tp =nctemp3590;
struct symbol* nctemp3595= tp;
struct symbol* nctemp3597=SymGetable(nctemp3595);
tp =nctemp3597;
noargs =0;
struct symbol* nctemp3609= tp;
struct symbol* nctemp3611=SymMvnext(nctemp3609);
tp =nctemp3611;
int nctemp3602 = (tp !=0);
int nctemp3613=nctemp3602;
while(nctemp3613)
{{
struct tree* nctemp3615= p;
struct symbol* nctemp3617= tp;
int nctemp3619=CodeIdeclaration(nctemp3615,nctemp3617);
struct symbol* nctemp3623= tp;
struct symbol* nctemp3625=SymMvnext(nctemp3623);
int nctemp3620 = (nctemp3625 !=0);
if(nctemp3620)
{
struct tree* nctemp3628= p;
struct nctempchar1 *nctemp3632;
static struct nctempchar1 nctemp3633 = {{ 2}, (char*)",\0"};
nctemp3632=&nctemp3633;
nctempchar1* nctemp3630= nctemp3632;
int nctemp3634=CodeEs(nctemp3628,nctemp3630);
}
int nctemp3643 = noargs + 1;
noargs =nctemp3643;
}
struct symbol* nctemp3651= tp;
struct symbol* nctemp3653=SymMvnext(nctemp3651);
tp =nctemp3653;
int nctemp3644 = (tp !=0);
nctemp3613=nctemp3644;}struct tree* nctemp3656= p;
struct nctempchar1 *nctemp3660;
static struct nctempchar1 nctemp3661 = {{ 5}, (char*)");\n\0"};
nctemp3660=&nctemp3661;
nctempchar1* nctemp3658= nctemp3660;
int nctemp3662=CodeEs(nctemp3656,nctemp3658);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3668= p;
struct tree* nctemp3670=PtreeMvchild(nctemp3668);
np =nctemp3670;
int nctemp3671 = (np !=0);
int nctemp3675=nctemp3671;
while(nctemp3675)
{{
struct tree* nctemp3681= np;
nctempchar1* nctemp3683=PtreeGetname(nctemp3681);
nctempchar1* nctemp3679= nctemp3683;
struct nctempchar1 *nctemp3686;
static struct nctempchar1 nctemp3687 = {{ 5}, (char*)"fdef\0"};
nctemp3686=&nctemp3687;
nctempchar1* nctemp3684= nctemp3686;
int nctemp3688=LibeStrcmp(nctemp3679,nctemp3684);
int nctemp3676 = (nctemp3688 ==1);
if(nctemp3676)
{
struct tree* nctemp3691= np;
int nctemp3693=CodeFdef(nctemp3691);
}
struct tree* nctemp3698= np;
struct tree* nctemp3700=PtreeMvsister(nctemp3698);
np =nctemp3700;
}
int nctemp3701 = (np !=0);
nctemp3675=nctemp3701;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3706 = (p !=0);
int nctemp3710=nctemp3706;
while(nctemp3710)
{{
struct tree* nctemp3719= p;
nctempchar1* nctemp3721=PtreeGetname(nctemp3719);
nctempchar1* nctemp3717= nctemp3721;
struct nctempchar1 *nctemp3724;
static struct nctempchar1 nctemp3725 = {{ 5}, (char*)"type\0"};
nctemp3724=&nctemp3725;
nctempchar1* nctemp3722= nctemp3724;
int nctemp3726=LibeStrcmp(nctemp3717,nctemp3722);
int nctemp3714 = (nctemp3726 ==1);
struct tree* nctemp3734= p;
nctempchar1* nctemp3736=PtreeGetname(nctemp3734);
nctempchar1* nctemp3732= nctemp3736;
struct nctempchar1 *nctemp3739;
static struct nctempchar1 nctemp3740 = {{ 7}, (char*)"struct\0"};
nctemp3739=&nctemp3740;
nctempchar1* nctemp3737= nctemp3739;
int nctemp3741=LibeStrcmp(nctemp3732,nctemp3737);
int nctemp3729 = (nctemp3741 ==1);
int nctemp3711 = (nctemp3714 || nctemp3729);
if(nctemp3711)
{
struct tree* nctemp3744= p;
int nctemp3746=CodeWdeclaration(nctemp3744);
}
struct tree* nctemp3751= p;
struct tree* nctemp3753=PtreeMvsister(nctemp3751);
p =nctemp3753;
}
int nctemp3754 = (p !=0);
nctemp3710=nctemp3754;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
struct nctempchar1 *nctemp3765;
static struct nctempchar1 nctemp3766 = {{ 6}, (char*)"dummy\0"};
nctemp3765=&nctemp3766;
nctempchar1* nctemp3763= nctemp3765;
struct nctempchar1 *nctemp3769;
static struct nctempchar1 nctemp3770 = {{ 6}, (char*)"dummy\0"};
nctemp3769=&nctemp3770;
nctempchar1* nctemp3767= nctemp3769;
struct tree* nctemp3771=PtreeMknode(nctemp3763,nctemp3767);
p =nctemp3771;
struct tree* nctemp3773= p;
int nctemp3775= line;
int nctemp3777=PtreeSetline(nctemp3773,nctemp3775);
struct tree* nctemp3779= p;
struct nctempchar1 *nctemp3783;
static struct nctempchar1 nctemp3784 = {{ 7}, (char*)"if((0>\0"};
nctemp3783=&nctemp3784;
nctempchar1* nctemp3781= nctemp3783;
int nctemp3785=CodeEs(nctemp3779,nctemp3781);
struct tree* nctemp3787= p;
nctempchar1* nctemp3789= ival;
int nctemp3792=CodeEs(nctemp3787,nctemp3789);
struct tree* nctemp3794= p;
struct nctempchar1 *nctemp3798;
static struct nctempchar1 nctemp3799 = {{ 5}, (char*)")||(\0"};
nctemp3798=&nctemp3799;
nctempchar1* nctemp3796= nctemp3798;
int nctemp3800=CodeEs(nctemp3794,nctemp3796);
struct tree* nctemp3802= p;
nctempchar1* nctemp3804= ival;
int nctemp3807=CodeEs(nctemp3802,nctemp3804);
struct tree* nctemp3809= p;
struct nctempchar1 *nctemp3813;
static struct nctempchar1 nctemp3814 = {{ 3}, (char*)">=\0"};
nctemp3813=&nctemp3814;
nctempchar1* nctemp3811= nctemp3813;
int nctemp3815=CodeEs(nctemp3809,nctemp3811);
nctempchar1 *nctemp3817 =qual;
int nctemp3816 =(nctemp3817!=0);
if(nctemp3816)
{
struct tree* nctemp3822= p;
nctempchar1* nctemp3824= qual;
int nctemp3827=CodeEs(nctemp3822,nctemp3824);
struct tree* nctemp3829= p;
nctempchar1* nctemp3831= sel;
int nctemp3834=CodeEs(nctemp3829,nctemp3831);
}
struct tree* nctemp3836= p;
nctempchar1* nctemp3838= name;
int nctemp3841=CodeEs(nctemp3836,nctemp3838);
struct tree* nctemp3843= p;
struct nctempchar1 *nctemp3847;
static struct nctempchar1 nctemp3848 = {{ 5}, (char*)"->d[\0"};
nctemp3847=&nctemp3848;
nctempchar1* nctemp3845= nctemp3847;
int nctemp3849=CodeEs(nctemp3843,nctemp3845);
int nctemp3851= index;
int nctemp3853=CodeEd(nctemp3851);
struct tree* nctemp3855= p;
struct nctempchar1 *nctemp3859;
static struct nctempchar1 nctemp3860 = {{ 7}, (char*)"])){\n\0"};
nctemp3859=&nctemp3860;
nctempchar1* nctemp3857= nctemp3859;
int nctemp3861=CodeEs(nctemp3855,nctemp3857);
struct tree* nctemp3863= p;
struct nctempchar1 *nctemp3867;
static struct nctempchar1 nctemp3868 = {{ 17}, (char*)"nctempstring->a=\0"};
nctemp3867=&nctemp3868;
nctempchar1* nctemp3865= nctemp3867;
int nctemp3869=CodeEs(nctemp3863,nctemp3865);
struct tree* nctemp3871= p;
struct nctempchar1 *nctemp3875;
static struct nctempchar1 nctemp3876 = {{ 3}, (char*)"\"\0"};
nctemp3875=&nctemp3876;
nctempchar1* nctemp3873= nctemp3875;
int nctemp3877=CodeEs(nctemp3871,nctemp3873);
nctempchar1 *nctemp3879 =qual;
int nctemp3878 =(nctemp3879!=0);
if(nctemp3878)
{
struct tree* nctemp3884= p;
nctempchar1* nctemp3886= qual;
int nctemp3889=CodeEs(nctemp3884,nctemp3886);
struct tree* nctemp3891= p;
nctempchar1* nctemp3893= sel;
int nctemp3896=CodeEs(nctemp3891,nctemp3893);
}
struct tree* nctemp3898= p;
nctempchar1* nctemp3900= name;
int nctemp3903=CodeEs(nctemp3898,nctemp3900);
struct tree* nctemp3905= p;
struct nctempchar1 *nctemp3909;
static struct nctempchar1 nctemp3910 = {{ 3}, (char*)"\"\0"};
nctemp3909=&nctemp3910;
nctempchar1* nctemp3907= nctemp3909;
int nctemp3911=CodeEs(nctemp3905,nctemp3907);
struct tree* nctemp3913= p;
struct nctempchar1 *nctemp3917;
static struct nctempchar1 nctemp3918 = {{ 4}, (char*)";\n\0"};
nctemp3917=&nctemp3918;
nctempchar1* nctemp3915= nctemp3917;
int nctemp3919=CodeEs(nctemp3913,nctemp3915);
struct tree* nctemp3921= p;
struct nctempchar1 *nctemp3925;
static struct nctempchar1 nctemp3926 = {{ 20}, (char*)"nctempstring->d[0]=\0"};
nctemp3925=&nctemp3926;
nctempchar1* nctemp3923= nctemp3925;
int nctemp3927=CodeEs(nctemp3921,nctemp3923);
struct tree* nctemp3929= p;
struct nctempchar1 *nctemp3933;
static struct nctempchar1 nctemp3934 = {{ 10}, (char*)"strlen(\"\0"};
nctemp3933=&nctemp3934;
nctempchar1* nctemp3931= nctemp3933;
int nctemp3935=CodeEs(nctemp3929,nctemp3931);
nctempchar1 *nctemp3937 =qual;
int nctemp3936 =(nctemp3937!=0);
if(nctemp3936)
{
struct tree* nctemp3942= p;
nctempchar1* nctemp3944= qual;
int nctemp3947=CodeEs(nctemp3942,nctemp3944);
struct tree* nctemp3949= p;
nctempchar1* nctemp3951= sel;
int nctemp3954=CodeEs(nctemp3949,nctemp3951);
}
struct tree* nctemp3956= p;
nctempchar1* nctemp3958= name;
int nctemp3961=CodeEs(nctemp3956,nctemp3958);
struct tree* nctemp3963= p;
struct nctempchar1 *nctemp3967;
static struct nctempchar1 nctemp3968 = {{ 7}, (char*)"\")+1;\0"};
nctemp3967=&nctemp3968;
nctempchar1* nctemp3965= nctemp3967;
int nctemp3969=CodeEs(nctemp3963,nctemp3965);
struct tree* nctemp3971= p;
struct nctempchar1 *nctemp3975;
static struct nctempchar1 nctemp3976 = {{ 4}, (char*)";\n\0"};
nctemp3975=&nctemp3976;
nctempchar1* nctemp3973= nctemp3975;
int nctemp3977=CodeEs(nctemp3971,nctemp3973);
struct tree* nctemp3979= p;
struct nctempchar1 *nctemp3983;
static struct nctempchar1 nctemp3984 = {{ 13}, (char*)"LibeArrayex(\0"};
nctemp3983=&nctemp3984;
nctempchar1* nctemp3981= nctemp3983;
int nctemp3985=CodeEs(nctemp3979,nctemp3981);
int nctemp3987= line;
int nctemp3989=CodeEd(nctemp3987);
struct tree* nctemp3991= p;
struct nctempchar1 *nctemp3995;
static struct nctempchar1 nctemp3996 = {{ 2}, (char*)",\0"};
nctemp3995=&nctemp3996;
nctempchar1* nctemp3993= nctemp3995;
int nctemp3997=CodeEs(nctemp3991,nctemp3993);
struct tree* nctemp3999= p;
struct nctempchar1 *nctemp4003;
static struct nctempchar1 nctemp4004 = {{ 13}, (char*)"nctempstring\0"};
nctemp4003=&nctemp4004;
nctempchar1* nctemp4001= nctemp4003;
int nctemp4005=CodeEs(nctemp3999,nctemp4001);
struct tree* nctemp4007= p;
struct nctempchar1 *nctemp4011;
static struct nctempchar1 nctemp4012 = {{ 2}, (char*)",\0"};
nctemp4011=&nctemp4012;
nctempchar1* nctemp4009= nctemp4011;
int nctemp4013=CodeEs(nctemp4007,nctemp4009);
struct tree* nctemp4015= p;
nctempchar1* nctemp4017= ival;
int nctemp4020=CodeEs(nctemp4015,nctemp4017);
struct tree* nctemp4022= p;
struct nctempchar1 *nctemp4026;
static struct nctempchar1 nctemp4027 = {{ 2}, (char*)",\0"};
nctemp4026=&nctemp4027;
nctempchar1* nctemp4024= nctemp4026;
int nctemp4028=CodeEs(nctemp4022,nctemp4024);
int nctemp4030= index;
int nctemp4032=CodeEd(nctemp4030);
struct tree* nctemp4034= p;
struct nctempchar1 *nctemp4038;
static struct nctempchar1 nctemp4039 = {{ 2}, (char*)",\0"};
nctemp4038=&nctemp4039;
nctempchar1* nctemp4036= nctemp4038;
int nctemp4040=CodeEs(nctemp4034,nctemp4036);
nctempchar1 *nctemp4042 =qual;
int nctemp4041 =(nctemp4042!=0);
if(nctemp4041)
{
struct tree* nctemp4047= p;
nctempchar1* nctemp4049= qual;
int nctemp4052=CodeEs(nctemp4047,nctemp4049);
struct tree* nctemp4054= p;
nctempchar1* nctemp4056= sel;
int nctemp4059=CodeEs(nctemp4054,nctemp4056);
}
struct tree* nctemp4061= p;
nctempchar1* nctemp4063= name;
int nctemp4066=CodeEs(nctemp4061,nctemp4063);
struct tree* nctemp4068= p;
struct nctempchar1 *nctemp4072;
static struct nctempchar1 nctemp4073 = {{ 5}, (char*)"->d[\0"};
nctemp4072=&nctemp4073;
nctempchar1* nctemp4070= nctemp4072;
int nctemp4074=CodeEs(nctemp4068,nctemp4070);
int nctemp4076= index;
int nctemp4078=CodeEd(nctemp4076);
struct tree* nctemp4080= p;
struct nctempchar1 *nctemp4084;
static struct nctempchar1 nctemp4085 = {{ 2}, (char*)"]\0"};
nctemp4084=&nctemp4085;
nctempchar1* nctemp4082= nctemp4084;
int nctemp4086=CodeEs(nctemp4080,nctemp4082);
struct tree* nctemp4088= p;
struct nctempchar1 *nctemp4092;
static struct nctempchar1 nctemp4093 = {{ 5}, (char*)");\n\0"};
nctemp4092=&nctemp4093;
nctempchar1* nctemp4090= nctemp4092;
int nctemp4094=CodeEs(nctemp4088,nctemp4090);
struct tree* nctemp4096= p;
struct nctempchar1 *nctemp4100;
static struct nctempchar1 nctemp4101 = {{ 4}, (char*)"}\n\0"};
nctemp4100=&nctemp4101;
nctempchar1* nctemp4098= nctemp4100;
int nctemp4102=CodeEs(nctemp4096,nctemp4098);
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
struct tree* nctemp4109= p;
nctempchar1* nctemp4111=PtreeGetdef(nctemp4109);
name=nctemp4111;
nctempchar1* nctemp4117=CodeMktemp();
temp=nctemp4117;
nctempchar1* nctemp4122= name;
struct symbol* nctemp4125=SymLook(nctemp4122);
tp =nctemp4125;
int nctemp4126 = (tp ==0);
if(nctemp4126)
{
nctempchar1* nctemp4131= name;
int nctemp4134=CodeError(nctemp4131);
}
struct tree* nctemp4139= p;
struct tree* nctemp4141=PtreeMvchild(nctemp4139);
sp =nctemp4141;
int nctemp4142 = (sp ==0);
if(nctemp4142)
{
struct tree* nctemp4147= p;
nctempchar1* nctemp4149=PtreeGetdef(nctemp4147);
return nctemp4149;
}
else{
struct tree* nctemp4155= sp;
nctempchar1* nctemp4157=PtreeGetname(nctemp4155);
nctempchar1* nctemp4153= nctemp4157;
struct nctempchar1 *nctemp4160;
static struct nctempchar1 nctemp4161 = {{ 9}, (char*)"exprlist\0"};
nctemp4160=&nctemp4161;
nctempchar1* nctemp4158= nctemp4160;
int nctemp4162=LibeStrcmp(nctemp4153,nctemp4158);
int nctemp4150 = (nctemp4162 ==0);
if(nctemp4150)
{
struct tree* nctemp4165= p;
nctempchar1* nctemp4167=PtreeGetdef(nctemp4165);
return nctemp4167;
}
}
struct symbol* nctemp4172= tp;
int nctemp4174=SymGetrank(nctemp4172);
rank =nctemp4174;
struct tree* nctemp4179= p;
struct tree* nctemp4181=PtreeMvchild(nctemp4179);
p =nctemp4181;
struct tree* nctemp4186= p;
struct tree* nctemp4188=PtreeMvchild(nctemp4186);
p =nctemp4188;
sp =p;
i =0;
int nctemp4197 = (i < rank);
while(nctemp4197){
{
int nctemp4201 = (i ==0);
if(nctemp4201)
{
struct tree* nctemp4210= p;
nctempchar1* nctemp4212=CodeExpr(nctemp4210);
temp2=nctemp4212;
struct tree* nctemp4214= p;
struct tree* nctemp4218= p;
nctempchar1* nctemp4220=PtreeGetype(nctemp4218);
nctempchar1* nctemp4216= nctemp4220;
int nctemp4221=CodeEs(nctemp4214,nctemp4216);
struct tree* nctemp4223= p;
struct nctempchar1 *nctemp4227;
static struct nctempchar1 nctemp4228 = {{ 2}, (char*)" \0"};
nctemp4227=&nctemp4228;
nctempchar1* nctemp4225= nctemp4227;
int nctemp4229=CodeEs(nctemp4223,nctemp4225);
struct tree* nctemp4231= p;
nctempchar1* nctemp4233= temp;
int nctemp4236=CodeEs(nctemp4231,nctemp4233);
struct tree* nctemp4238= p;
struct nctempchar1 *nctemp4242;
static struct nctempchar1 nctemp4243 = {{ 2}, (char*)"=\0"};
nctemp4242=&nctemp4243;
nctempchar1* nctemp4240= nctemp4242;
int nctemp4244=CodeEs(nctemp4238,nctemp4240);
struct tree* nctemp4246= p;
nctempchar1* nctemp4248= temp2;
int nctemp4251=CodeEs(nctemp4246,nctemp4248);
struct tree* nctemp4253= p;
struct nctempchar1 *nctemp4257;
static struct nctempchar1 nctemp4258 = {{ 4}, (char*)";\n\0"};
nctemp4257=&nctemp4258;
nctempchar1* nctemp4255= nctemp4257;
int nctemp4259=CodeEs(nctemp4253,nctemp4255);
int nctemp4261=CodeArraycheck();
if(nctemp4261)
{
struct tree* nctemp4265= p;
int nctemp4267=PtreeGetline(nctemp4265);
int nctemp4263= nctemp4267;
nctempchar1* nctemp4268= qual;
nctempchar1* nctemp4271= sel;
nctempchar1* nctemp4274= name;
nctempchar1* nctemp4277= temp2;
int nctemp4280= i;
int nctemp4282=CodeArrayex(nctemp4263,nctemp4268,nctemp4271,nctemp4274,nctemp4277,nctemp4280);
}
}
else{
struct tree* nctemp4288= sp;
nctempchar1* nctemp4290=CodeExpr(nctemp4288);
temp2=nctemp4290;
struct tree* nctemp4292= p;
nctempchar1* nctemp4294= temp;
int nctemp4297=CodeEs(nctemp4292,nctemp4294);
struct tree* nctemp4299= p;
struct nctempchar1 *nctemp4303;
static struct nctempchar1 nctemp4304 = {{ 2}, (char*)"=\0"};
nctemp4303=&nctemp4304;
nctempchar1* nctemp4301= nctemp4303;
int nctemp4305=CodeEs(nctemp4299,nctemp4301);
struct tree* nctemp4307= p;
nctempchar1* nctemp4309= temp2;
int nctemp4312=CodeEs(nctemp4307,nctemp4309);
struct tree* nctemp4314= p;
struct nctempchar1 *nctemp4318;
static struct nctempchar1 nctemp4319 = {{ 2}, (char*)"*\0"};
nctemp4318=&nctemp4319;
nctempchar1* nctemp4316= nctemp4318;
int nctemp4320=CodeEs(nctemp4314,nctemp4316);
nctempchar1 *nctemp4322 =qual;
int nctemp4321 =(nctemp4322!=0);
if(nctemp4321)
{
struct tree* nctemp4327= p;
nctempchar1* nctemp4329= qual;
int nctemp4332=CodeEs(nctemp4327,nctemp4329);
}
nctempchar1 *nctemp4334 =sel;
int nctemp4333 =(nctemp4334!=0);
if(nctemp4333)
{
struct tree* nctemp4339= p;
nctempchar1* nctemp4341= sel;
int nctemp4344=CodeEs(nctemp4339,nctemp4341);
}
struct tree* nctemp4346= p;
nctempchar1* nctemp4348= name;
int nctemp4351=CodeEs(nctemp4346,nctemp4348);
struct tree* nctemp4353= p;
struct nctempchar1 *nctemp4357;
static struct nctempchar1 nctemp4358 = {{ 4}, (char*)"->d\0"};
nctemp4357=&nctemp4358;
nctempchar1* nctemp4355= nctemp4357;
int nctemp4359=CodeEs(nctemp4353,nctemp4355);
struct tree* nctemp4361= p;
struct nctempchar1 *nctemp4365;
static struct nctempchar1 nctemp4366 = {{ 2}, (char*)"[\0"};
nctemp4365=&nctemp4366;
nctempchar1* nctemp4363= nctemp4365;
int nctemp4367=CodeEs(nctemp4361,nctemp4363);
int nctemp4374 = i - 1;
int nctemp4369= nctemp4374;
int nctemp4375=CodeEd(nctemp4369);
struct tree* nctemp4377= p;
struct nctempchar1 *nctemp4381;
static struct nctempchar1 nctemp4382 = {{ 2}, (char*)"]\0"};
nctemp4381=&nctemp4382;
nctempchar1* nctemp4379= nctemp4381;
int nctemp4383=CodeEs(nctemp4377,nctemp4379);
struct tree* nctemp4385= p;
struct nctempchar1 *nctemp4389;
static struct nctempchar1 nctemp4390 = {{ 2}, (char*)"+\0"};
nctemp4389=&nctemp4390;
nctempchar1* nctemp4387= nctemp4389;
int nctemp4391=CodeEs(nctemp4385,nctemp4387);
struct tree* nctemp4393= p;
nctempchar1* nctemp4395= temp;
int nctemp4398=CodeEs(nctemp4393,nctemp4395);
struct tree* nctemp4400= p;
struct nctempchar1 *nctemp4404;
static struct nctempchar1 nctemp4405 = {{ 4}, (char*)";\n\0"};
nctemp4404=&nctemp4405;
nctempchar1* nctemp4402= nctemp4404;
int nctemp4406=CodeEs(nctemp4400,nctemp4402);
int nctemp4408=CodeArraycheck();
if(nctemp4408)
{
struct tree* nctemp4412= p;
int nctemp4414=PtreeGetline(nctemp4412);
int nctemp4410= nctemp4414;
nctempchar1* nctemp4415= qual;
nctempchar1* nctemp4418= sel;
nctempchar1* nctemp4421= name;
nctempchar1* nctemp4424= temp2;
int nctemp4427= i;
int nctemp4429=CodeArrayex(nctemp4410,nctemp4415,nctemp4418,nctemp4421,nctemp4424,nctemp4427);
}
}
int nctemp4430 = (sp !=0);
if(nctemp4430)
{
struct tree* nctemp4438= sp;
struct tree* nctemp4440=PtreeMvsister(nctemp4438);
sp =nctemp4440;
}
}
int nctemp4449 = i + 1;
i =nctemp4449;
int nctemp4450 = (i < rank);
nctemp4197=nctemp4450;
}
nctempchar1* nctemp4464= name;
int nctemp4467=LibeStrlen(nctemp4464);
nctempchar1* nctemp4469= temp;
int nctemp4472=LibeStrlen(nctemp4469);
int nctemp4473 = nctemp4467 + nctemp4472;
int nctemp4475 = nctemp4473 + 6;
size =nctemp4475;
int nctemp4482=size;
nctempchar1 *nctemp4481;
nctemp4481=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4481->d[0]=size;
nctemp4481->a=(char *)RunMalloc(sizeof(char)*nctemp4482);
rval=nctemp4481;
nctempchar1* nctemp4486= name;
nctempchar1* nctemp4489= rval;
int nctemp4492=LibeStrcpy(nctemp4486,nctemp4489);
struct nctempchar1 *nctemp4496;
static struct nctempchar1 nctemp4497 = {{ 4}, (char*)"->a\0"};
nctemp4496=&nctemp4497;
nctempchar1* nctemp4494= nctemp4496;
nctempchar1* nctemp4498= rval;
int nctemp4501=LibeStrcat(nctemp4494,nctemp4498);
struct nctempchar1 *nctemp4505;
static struct nctempchar1 nctemp4506 = {{ 2}, (char*)"[\0"};
nctemp4505=&nctemp4506;
nctempchar1* nctemp4503= nctemp4505;
nctempchar1* nctemp4507= rval;
int nctemp4510=LibeStrcat(nctemp4503,nctemp4507);
nctempchar1* nctemp4512= temp;
nctempchar1* nctemp4515= rval;
int nctemp4518=LibeStrcat(nctemp4512,nctemp4515);
struct nctempchar1 *nctemp4522;
static struct nctempchar1 nctemp4523 = {{ 2}, (char*)"]\0"};
nctemp4522=&nctemp4523;
nctempchar1* nctemp4520= nctemp4522;
nctempchar1* nctemp4524= rval;
int nctemp4527=LibeStrcat(nctemp4520,nctemp4524);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
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
int nctemp4562 = nctemp4560 + 2;
int nctemp4552=nctemp4562;
nctempchar1 *nctemp4551;
nctemp4551=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4570 = lq + li;
int nctemp4572 = nctemp4570 + 2;
nctemp4551->d[0]=nctemp4572;
nctemp4551->a=(char *)RunMalloc(sizeof(char)*nctemp4552);
name=nctemp4551;
nctempchar1* nctemp4574= qual;
nctempchar1* nctemp4577= name;
int nctemp4580=LibeStrcpy(nctemp4574,nctemp4577);
struct nctempchar1 *nctemp4584;
static struct nctempchar1 nctemp4585 = {{ 2}, (char*)".\0"};
nctemp4584=&nctemp4585;
nctempchar1* nctemp4582= nctemp4584;
nctempchar1* nctemp4586= name;
int nctemp4589=LibeStrcat(nctemp4582,nctemp4586);
nctempchar1* nctemp4591= ident;
nctempchar1* nctemp4594= name;
int nctemp4597=LibeStrcat(nctemp4591,nctemp4594);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4604= qual;
int nctemp4607=LibeStrlen(nctemp4604);
lq =nctemp4607;
nctempchar1* nctemp4612= ident;
int nctemp4615=LibeStrlen(nctemp4612);
li =nctemp4615;
int nctemp4630 = lq + li;
int nctemp4632 = nctemp4630 + 3;
int nctemp4622=nctemp4632;
nctempchar1 *nctemp4621;
nctemp4621=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4640 = lq + li;
int nctemp4642 = nctemp4640 + 3;
nctemp4621->d[0]=nctemp4642;
nctemp4621->a=(char *)RunMalloc(sizeof(char)*nctemp4622);
name=nctemp4621;
nctempchar1* nctemp4644= qual;
nctempchar1* nctemp4647= name;
int nctemp4650=LibeStrcpy(nctemp4644,nctemp4647);
struct nctempchar1 *nctemp4654;
static struct nctempchar1 nctemp4655 = {{ 3}, (char*)"->\0"};
nctemp4654=&nctemp4655;
nctempchar1* nctemp4652= nctemp4654;
nctempchar1* nctemp4656= name;
int nctemp4659=LibeStrcat(nctemp4652,nctemp4656);
nctempchar1* nctemp4661= ident;
nctempchar1* nctemp4664= name;
int nctemp4667=LibeStrcat(nctemp4661,nctemp4664);
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
struct tree* nctemp4680= p;
nctempchar1* nctemp4682=PtreeGetstruct(nctemp4680);
nctempchar1* nctemp4678= nctemp4682;
struct nctempchar1 *nctemp4685;
static struct nctempchar1 nctemp4686 = {{ 7}, (char*)"struct\0"};
nctemp4685=&nctemp4686;
nctempchar1* nctemp4683= nctemp4685;
int nctemp4687=LibeStrcmp(nctemp4678,nctemp4683);
int nctemp4675 = (nctemp4687 ==1);
if(nctemp4675)
{
struct tree* nctemp4694= p;
nctempchar1* nctemp4696=PtreeGetarray(nctemp4694);
nctempchar1* nctemp4692= nctemp4696;
struct nctempchar1 *nctemp4699;
static struct nctempchar1 nctemp4700 = {{ 6}, (char*)"array\0"};
nctemp4699=&nctemp4700;
nctempchar1* nctemp4697= nctemp4699;
int nctemp4701=LibeStrcmp(nctemp4692,nctemp4697);
int nctemp4689 = (nctemp4701 ==1);
if(nctemp4689)
{
struct tree* nctemp4708= p;
nctempchar1* nctemp4710= qual;
struct nctempchar1 *nctemp4715;
static struct nctempchar1 nctemp4716 = {{ 2}, (char*)".\0"};
nctemp4715=&nctemp4716;
nctempchar1* nctemp4713= nctemp4715;
nctempchar1* nctemp4717=CodeArray(nctemp4708,nctemp4710,nctemp4713);
qual=nctemp4717;
struct tree* nctemp4722= p;
struct tree* nctemp4724=PtreeMvchild(nctemp4722);
np =nctemp4724;
int nctemp4725 = (np ==0);
if(nctemp4725)
{
return qual;
}
struct tree* nctemp4735= np;
struct tree* nctemp4737=PtreeMvsister(nctemp4735);
np =nctemp4737;
int nctemp4738 = (np ==0);
if(nctemp4738)
{
return qual;
}
}
else{
struct tree* nctemp4749= p;
nctempchar1* nctemp4751=PtreeGetdef(nctemp4749);
qual=nctemp4751;
struct tree* nctemp4759= p;
struct tree* nctemp4761=PtreeMvchild(nctemp4759);
np =nctemp4761;
int nctemp4752 = (np ==0);
if(nctemp4752)
{
return qual;
}
}
struct tree* nctemp4770= np;
nctempchar1* nctemp4772=PtreeGetarray(nctemp4770);
nctempchar1* nctemp4768= nctemp4772;
struct nctempchar1 *nctemp4775;
static struct nctempchar1 nctemp4776 = {{ 6}, (char*)"array\0"};
nctemp4775=&nctemp4776;
nctempchar1* nctemp4773= nctemp4775;
int nctemp4777=LibeStrcmp(nctemp4768,nctemp4773);
int nctemp4765 = (nctemp4777 ==1);
if(nctemp4765)
{
struct symbol* nctemp4783=SymGetltp();
tp =nctemp4783;
struct symbol* nctemp4788=SymGetetp();
up =nctemp4788;
struct tree* nctemp4795= p;
nctempchar1* nctemp4797=PtreeGetdef(nctemp4795);
nctempchar1* nctemp4793= nctemp4797;
struct symbol* nctemp4798=SymLook(nctemp4793);
uup =nctemp4798;
struct symbol* nctemp4805= uup;
nctempchar1* nctemp4807=SymGetype(nctemp4805);
nctempchar1* nctemp4803= nctemp4807;
struct symbol* nctemp4808=SymLook(nctemp4803);
uup =nctemp4808;
struct symbol* nctemp4812= uup;
struct symbol* nctemp4814=SymGetable(nctemp4812);
struct symbol* nctemp4810= nctemp4814;
struct symbol* nctemp4815=SymSetltp(nctemp4810);
struct tree* nctemp4821= p;
nctempchar1* nctemp4823=PtreeGetarray(nctemp4821);
nctempchar1* nctemp4819= nctemp4823;
struct nctempchar1 *nctemp4826;
static struct nctempchar1 nctemp4827 = {{ 6}, (char*)"array\0"};
nctemp4826=&nctemp4827;
nctempchar1* nctemp4824= nctemp4826;
int nctemp4828=LibeStrcmp(nctemp4819,nctemp4824);
int nctemp4816 = (nctemp4828 ==1);
if(nctemp4816)
{
struct tree* nctemp4835= np;
nctempchar1* nctemp4837= qual;
struct nctempchar1 *nctemp4842;
static struct nctempchar1 nctemp4843 = {{ 2}, (char*)".\0"};
nctemp4842=&nctemp4843;
nctempchar1* nctemp4840= nctemp4842;
nctempchar1* nctemp4844=CodeArray(nctemp4835,nctemp4837,nctemp4840);
name=nctemp4844;
}
else{
struct tree* nctemp4850= np;
nctempchar1* nctemp4852= qual;
struct nctempchar1 *nctemp4857;
static struct nctempchar1 nctemp4858 = {{ 3}, (char*)"->\0"};
nctemp4857=&nctemp4858;
nctempchar1* nctemp4855= nctemp4857;
nctempchar1* nctemp4859=CodeArray(nctemp4850,nctemp4852,nctemp4855);
name=nctemp4859;
}
struct symbol* nctemp4861= tp;
struct symbol* nctemp4863=SymSetltp(nctemp4861);
struct symbol* nctemp4865= up;
struct symbol* nctemp4867=SymSetetp(nctemp4865);
}
else{
struct tree* nctemp4873= np;
nctempchar1* nctemp4875=PtreeGetdef(nctemp4873);
name=nctemp4875;
}
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
nctempchar1* nctemp4891= qual;
nctempchar1* nctemp4894= name;
nctempchar1* nctemp4897=CodeQident(nctemp4891,nctemp4894);
return nctemp4897;
}
else{
nctempchar1* nctemp4899= qual;
nctempchar1* nctemp4902= name;
nctempchar1* nctemp4905=CodeQident2(nctemp4899,nctemp4902);
return nctemp4905;
}
}
else{
struct tree* nctemp4911= p;
nctempchar1* nctemp4913=PtreeGetarray(nctemp4911);
nctempchar1* nctemp4909= nctemp4913;
struct nctempchar1 *nctemp4916;
static struct nctempchar1 nctemp4917 = {{ 6}, (char*)"array\0"};
nctemp4916=&nctemp4917;
nctempchar1* nctemp4914= nctemp4916;
int nctemp4918=LibeStrcmp(nctemp4909,nctemp4914);
int nctemp4906 = (nctemp4918 ==1);
if(nctemp4906)
{
name=(0);
qual=(0);
struct tree* nctemp4935= p;
nctempchar1* nctemp4937= qual;
nctempchar1* nctemp4940= name;
nctempchar1* nctemp4943=CodeArray(nctemp4935,nctemp4937,nctemp4940);
qual=nctemp4943;
return qual;
}
else{
struct tree* nctemp4947= p;
nctempchar1* nctemp4949=PtreeGetdef(nctemp4947);
return nctemp4949;
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
nctempchar1* nctemp4955=CodeMktemp();
pointer=nctemp4955;
nctempchar1* nctemp4961=CodeMktemp();
totdim=nctemp4961;
struct tree* nctemp4966= p;
struct tree* nctemp4968=PtreeMvchild(nctemp4966);
p =nctemp4968;
struct tree* nctemp4974= p;
nctempchar1* nctemp4976=PtreeGetdef(nctemp4974);
type=nctemp4976;
struct tree* nctemp4982= p;
nctempchar1* nctemp4984=PtreeGetstruct(nctemp4982);
structflag=nctemp4984;
struct tree* nctemp4990= p;
nctempchar1* nctemp4992=PtreeGetarray(nctemp4990);
arrayflag=nctemp4992;
struct tree* nctemp4998= p;
nctempchar1* nctemp5000=PtreeGetarray(nctemp4998);
nctempchar1* nctemp4996= nctemp5000;
struct nctempchar1 *nctemp5003;
static struct nctempchar1 nctemp5004 = {{ 6}, (char*)"array\0"};
nctemp5003=&nctemp5004;
nctempchar1* nctemp5001= nctemp5003;
int nctemp5005=LibeStrcmp(nctemp4996,nctemp5001);
int nctemp4993 = (nctemp5005 ==1);
if(nctemp4993)
{
struct tree* nctemp5011= p;
struct tree* nctemp5013=PtreeMvchild(nctemp5011);
p =nctemp5013;
struct tree* nctemp5018= p;
struct tree* nctemp5020=PtreeMvchild(nctemp5018);
p =nctemp5020;
struct tree* nctemp5025= p;
struct tree* nctemp5027=PtreeMvchild(nctemp5025);
p =nctemp5027;
struct tree* nctemp5032= p;
struct tree* nctemp5034=PtreeMvchild(nctemp5032);
p =nctemp5034;
sp =p;
top =p;
rank =1;
struct tree* nctemp5054= p;
struct tree* nctemp5056=PtreeMvsister(nctemp5054);
p =nctemp5056;
int nctemp5047 = (p !=0);
int nctemp5058=nctemp5047;
while(nctemp5058)
{{
int nctemp5067 = rank + 1;
rank =nctemp5067;
}
struct tree* nctemp5075= p;
struct tree* nctemp5077=PtreeMvsister(nctemp5075);
p =nctemp5077;
int nctemp5068 = (p !=0);
nctemp5058=nctemp5068;}int nctemp5079 = (rank > 4);
if(nctemp5079)
{
struct nctempchar1 *nctemp5086;
static struct nctempchar1 nctemp5087 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp5086=&nctemp5087;
nctempchar1* nctemp5084= nctemp5086;
int nctemp5088=CodeError(nctemp5084);
}
p =sp;
i =0;
int nctemp5097 = (p !=0);
int nctemp5101=nctemp5097;
while(nctemp5101)
{{
struct tree* nctemp5107= p;
nctempchar1* nctemp5109=CodeExpr(nctemp5107);
dim=nctemp5109;
int nctemp5110 = (i ==0);
if(nctemp5110)
{
struct tree* nctemp5115= p;
struct tree* nctemp5119= p;
nctempchar1* nctemp5121=PtreeGetype(nctemp5119);
nctempchar1* nctemp5117= nctemp5121;
int nctemp5122=CodeEs(nctemp5115,nctemp5117);
struct tree* nctemp5124= p;
struct nctempchar1 *nctemp5128;
static struct nctempchar1 nctemp5129 = {{ 2}, (char*)" \0"};
nctemp5128=&nctemp5129;
nctempchar1* nctemp5126= nctemp5128;
int nctemp5130=CodeEs(nctemp5124,nctemp5126);
struct tree* nctemp5132= p;
nctempchar1* nctemp5134= totdim;
int nctemp5137=CodeEs(nctemp5132,nctemp5134);
struct tree* nctemp5139= p;
struct nctempchar1 *nctemp5143;
static struct nctempchar1 nctemp5144 = {{ 2}, (char*)"=\0"};
nctemp5143=&nctemp5144;
nctempchar1* nctemp5141= nctemp5143;
int nctemp5145=CodeEs(nctemp5139,nctemp5141);
struct tree* nctemp5147= p;
nctempchar1* nctemp5149= dim;
int nctemp5152=CodeEs(nctemp5147,nctemp5149);
}
else{
struct tree* nctemp5154= p;
nctempchar1* nctemp5156= totdim;
int nctemp5159=CodeEs(nctemp5154,nctemp5156);
struct tree* nctemp5161= p;
struct nctempchar1 *nctemp5165;
static struct nctempchar1 nctemp5166 = {{ 2}, (char*)"=\0"};
nctemp5165=&nctemp5166;
nctempchar1* nctemp5163= nctemp5165;
int nctemp5167=CodeEs(nctemp5161,nctemp5163);
struct tree* nctemp5169= p;
nctempchar1* nctemp5171= totdim;
int nctemp5174=CodeEs(nctemp5169,nctemp5171);
struct tree* nctemp5176= p;
struct nctempchar1 *nctemp5180;
static struct nctempchar1 nctemp5181 = {{ 2}, (char*)"*\0"};
nctemp5180=&nctemp5181;
nctempchar1* nctemp5178= nctemp5180;
int nctemp5182=CodeEs(nctemp5176,nctemp5178);
struct tree* nctemp5184= p;
nctempchar1* nctemp5186= dim;
int nctemp5189=CodeEs(nctemp5184,nctemp5186);
}
struct tree* nctemp5191= p;
struct nctempchar1 *nctemp5195;
static struct nctempchar1 nctemp5196 = {{ 4}, (char*)";\n\0"};
nctemp5195=&nctemp5196;
nctempchar1* nctemp5193= nctemp5195;
int nctemp5197=CodeEs(nctemp5191,nctemp5193);
int nctemp5206 = i + 1;
i =nctemp5206;
struct tree* nctemp5211= p;
struct tree* nctemp5213=PtreeMvsister(nctemp5211);
p =nctemp5213;
}
int nctemp5214 = (p !=0);
nctemp5101=nctemp5214;}}
nctempchar1* nctemp5224= structflag;
struct nctempchar1 *nctemp5229;
static struct nctempchar1 nctemp5230 = {{ 7}, (char*)"struct\0"};
nctemp5229=&nctemp5230;
nctempchar1* nctemp5227= nctemp5229;
int nctemp5231=LibeStrcmp(nctemp5224,nctemp5227);
int nctemp5221 = (nctemp5231 ==1);
nctempchar1* nctemp5237= arrayflag;
struct nctempchar1 *nctemp5242;
static struct nctempchar1 nctemp5243 = {{ 6}, (char*)"array\0"};
nctemp5242=&nctemp5243;
nctempchar1* nctemp5240= nctemp5242;
int nctemp5244=LibeStrcmp(nctemp5237,nctemp5240);
int nctemp5234 = (nctemp5244 ==0);
int nctemp5218 = (nctemp5221 && nctemp5234);
if(nctemp5218)
{
struct tree* nctemp5247= p;
struct nctempchar1 *nctemp5251;
static struct nctempchar1 nctemp5252 = {{ 8}, (char*)"struct \0"};
nctemp5251=&nctemp5252;
nctempchar1* nctemp5249= nctemp5251;
int nctemp5253=CodeEs(nctemp5247,nctemp5249);
struct tree* nctemp5255= p;
nctempchar1* nctemp5257= type;
int nctemp5260=CodeEs(nctemp5255,nctemp5257);
struct tree* nctemp5262= p;
struct nctempchar1 *nctemp5266;
static struct nctempchar1 nctemp5267 = {{ 3}, (char*)" *\0"};
nctemp5266=&nctemp5267;
nctempchar1* nctemp5264= nctemp5266;
int nctemp5268=CodeEs(nctemp5262,nctemp5264);
struct tree* nctemp5270= p;
nctempchar1* nctemp5272= pointer;
int nctemp5275=CodeEs(nctemp5270,nctemp5272);
struct tree* nctemp5277= p;
struct nctempchar1 *nctemp5281;
static struct nctempchar1 nctemp5282 = {{ 2}, (char*)"=\0"};
nctemp5281=&nctemp5282;
nctempchar1* nctemp5279= nctemp5281;
int nctemp5283=CodeEs(nctemp5277,nctemp5279);
struct tree* nctemp5285= p;
struct nctempchar1 *nctemp5289;
static struct nctempchar1 nctemp5290 = {{ 2}, (char*)"(\0"};
nctemp5289=&nctemp5290;
nctempchar1* nctemp5287= nctemp5289;
int nctemp5291=CodeEs(nctemp5285,nctemp5287);
struct tree* nctemp5293= p;
struct nctempchar1 *nctemp5297;
static struct nctempchar1 nctemp5298 = {{ 8}, (char*)"struct \0"};
nctemp5297=&nctemp5298;
nctempchar1* nctemp5295= nctemp5297;
int nctemp5299=CodeEs(nctemp5293,nctemp5295);
struct tree* nctemp5301= p;
nctempchar1* nctemp5303= type;
int nctemp5306=CodeEs(nctemp5301,nctemp5303);
struct tree* nctemp5308= p;
struct nctempchar1 *nctemp5312;
static struct nctempchar1 nctemp5313 = {{ 3}, (char*)"*)\0"};
nctemp5312=&nctemp5313;
nctempchar1* nctemp5310= nctemp5312;
int nctemp5314=CodeEs(nctemp5308,nctemp5310);
struct tree* nctemp5316= p;
struct nctempchar1 *nctemp5320;
static struct nctempchar1 nctemp5321 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5320=&nctemp5321;
nctempchar1* nctemp5318= nctemp5320;
int nctemp5322=CodeEs(nctemp5316,nctemp5318);
struct tree* nctemp5324= p;
struct nctempchar1 *nctemp5328;
static struct nctempchar1 nctemp5329 = {{ 8}, (char*)"sizeof(\0"};
nctemp5328=&nctemp5329;
nctempchar1* nctemp5326= nctemp5328;
int nctemp5330=CodeEs(nctemp5324,nctemp5326);
struct tree* nctemp5332= p;
struct nctempchar1 *nctemp5336;
static struct nctempchar1 nctemp5337 = {{ 8}, (char*)"struct \0"};
nctemp5336=&nctemp5337;
nctempchar1* nctemp5334= nctemp5336;
int nctemp5338=CodeEs(nctemp5332,nctemp5334);
struct tree* nctemp5340= p;
nctempchar1* nctemp5342= type;
int nctemp5345=CodeEs(nctemp5340,nctemp5342);
struct tree* nctemp5347= p;
struct nctempchar1 *nctemp5351;
static struct nctempchar1 nctemp5352 = {{ 6}, (char*)"));\n\0"};
nctemp5351=&nctemp5352;
nctempchar1* nctemp5349= nctemp5351;
int nctemp5353=CodeEs(nctemp5347,nctemp5349);
}
nctempchar1* nctemp5360= structflag;
struct nctempchar1 *nctemp5365;
static struct nctempchar1 nctemp5366 = {{ 7}, (char*)"struct\0"};
nctemp5365=&nctemp5366;
nctempchar1* nctemp5363= nctemp5365;
int nctemp5367=LibeStrcmp(nctemp5360,nctemp5363);
int nctemp5357 = (nctemp5367 ==1);
nctempchar1* nctemp5373= arrayflag;
struct nctempchar1 *nctemp5378;
static struct nctempchar1 nctemp5379 = {{ 6}, (char*)"array\0"};
nctemp5378=&nctemp5379;
nctempchar1* nctemp5376= nctemp5378;
int nctemp5380=LibeStrcmp(nctemp5373,nctemp5376);
int nctemp5370 = (nctemp5380 ==1);
int nctemp5354 = (nctemp5357 && nctemp5370);
if(nctemp5354)
{
struct tree* nctemp5383= p;
struct nctempchar1 *nctemp5387;
static struct nctempchar1 nctemp5388 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5387=&nctemp5388;
nctempchar1* nctemp5385= nctemp5387;
int nctemp5389=CodeEs(nctemp5383,nctemp5385);
struct tree* nctemp5391= p;
nctempchar1* nctemp5393= type;
int nctemp5396=CodeEs(nctemp5391,nctemp5393);
int nctemp5398= rank;
int nctemp5400=CodeEd(nctemp5398);
struct tree* nctemp5402= p;
struct nctempchar1 *nctemp5406;
static struct nctempchar1 nctemp5407 = {{ 3}, (char*)" *\0"};
nctemp5406=&nctemp5407;
nctempchar1* nctemp5404= nctemp5406;
int nctemp5408=CodeEs(nctemp5402,nctemp5404);
struct tree* nctemp5410= p;
nctempchar1* nctemp5412= pointer;
int nctemp5415=CodeEs(nctemp5410,nctemp5412);
struct tree* nctemp5417= p;
struct nctempchar1 *nctemp5421;
static struct nctempchar1 nctemp5422 = {{ 4}, (char*)";\n\0"};
nctemp5421=&nctemp5422;
nctempchar1* nctemp5419= nctemp5421;
int nctemp5423=CodeEs(nctemp5417,nctemp5419);
struct tree* nctemp5425= p;
nctempchar1* nctemp5427= pointer;
int nctemp5430=CodeEs(nctemp5425,nctemp5427);
struct tree* nctemp5432= p;
struct nctempchar1 *nctemp5436;
static struct nctempchar1 nctemp5437 = {{ 2}, (char*)"=\0"};
nctemp5436=&nctemp5437;
nctempchar1* nctemp5434= nctemp5436;
int nctemp5438=CodeEs(nctemp5432,nctemp5434);
struct tree* nctemp5440= p;
struct nctempchar1 *nctemp5444;
static struct nctempchar1 nctemp5445 = {{ 2}, (char*)"(\0"};
nctemp5444=&nctemp5445;
nctempchar1* nctemp5442= nctemp5444;
int nctemp5446=CodeEs(nctemp5440,nctemp5442);
struct tree* nctemp5448= p;
struct nctempchar1 *nctemp5452;
static struct nctempchar1 nctemp5453 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5452=&nctemp5453;
nctempchar1* nctemp5450= nctemp5452;
int nctemp5454=CodeEs(nctemp5448,nctemp5450);
struct tree* nctemp5456= p;
nctempchar1* nctemp5458= type;
int nctemp5461=CodeEs(nctemp5456,nctemp5458);
int nctemp5463= rank;
int nctemp5465=CodeEd(nctemp5463);
struct tree* nctemp5467= p;
struct nctempchar1 *nctemp5471;
static struct nctempchar1 nctemp5472 = {{ 3}, (char*)"*)\0"};
nctemp5471=&nctemp5472;
nctempchar1* nctemp5469= nctemp5471;
int nctemp5473=CodeEs(nctemp5467,nctemp5469);
struct tree* nctemp5475= p;
struct nctempchar1 *nctemp5479;
static struct nctempchar1 nctemp5480 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5479=&nctemp5480;
nctempchar1* nctemp5477= nctemp5479;
int nctemp5481=CodeEs(nctemp5475,nctemp5477);
struct tree* nctemp5483= p;
struct nctempchar1 *nctemp5487;
static struct nctempchar1 nctemp5488 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5487=&nctemp5488;
nctempchar1* nctemp5485= nctemp5487;
int nctemp5489=CodeEs(nctemp5483,nctemp5485);
struct tree* nctemp5491= p;
nctempchar1* nctemp5493= type;
int nctemp5496=CodeEs(nctemp5491,nctemp5493);
int nctemp5498= rank;
int nctemp5500=CodeEd(nctemp5498);
struct tree* nctemp5502= p;
struct nctempchar1 *nctemp5506;
static struct nctempchar1 nctemp5507 = {{ 6}, (char*)"));\n\0"};
nctemp5506=&nctemp5507;
nctempchar1* nctemp5504= nctemp5506;
int nctemp5508=CodeEs(nctemp5502,nctemp5504);
i =0;
p =sp;
int nctemp5517 = (p !=0);
int nctemp5521=nctemp5517;
while(nctemp5521)
{{
struct tree* nctemp5527= sp;
nctempchar1* nctemp5529=CodeExpr(nctemp5527);
dim=nctemp5529;
struct tree* nctemp5531= sp;
nctempchar1* nctemp5533= pointer;
int nctemp5536=CodeEs(nctemp5531,nctemp5533);
struct tree* nctemp5538= sp;
struct nctempchar1 *nctemp5542;
static struct nctempchar1 nctemp5543 = {{ 4}, (char*)"->d\0"};
nctemp5542=&nctemp5543;
nctempchar1* nctemp5540= nctemp5542;
int nctemp5544=CodeEs(nctemp5538,nctemp5540);
struct tree* nctemp5546= sp;
struct nctempchar1 *nctemp5550;
static struct nctempchar1 nctemp5551 = {{ 2}, (char*)"[\0"};
nctemp5550=&nctemp5551;
nctempchar1* nctemp5548= nctemp5550;
int nctemp5552=CodeEs(nctemp5546,nctemp5548);
int nctemp5554= i;
int nctemp5556=CodeEd(nctemp5554);
struct tree* nctemp5558= sp;
struct nctempchar1 *nctemp5562;
static struct nctempchar1 nctemp5563 = {{ 3}, (char*)"]=\0"};
nctemp5562=&nctemp5563;
nctempchar1* nctemp5560= nctemp5562;
int nctemp5564=CodeEs(nctemp5558,nctemp5560);
struct tree* nctemp5566= sp;
nctempchar1* nctemp5568= dim;
int nctemp5571=CodeEs(nctemp5566,nctemp5568);
struct tree* nctemp5573= sp;
struct nctempchar1 *nctemp5577;
static struct nctempchar1 nctemp5578 = {{ 4}, (char*)";\n\0"};
nctemp5577=&nctemp5578;
nctempchar1* nctemp5575= nctemp5577;
int nctemp5579=CodeEs(nctemp5573,nctemp5575);
int nctemp5588 = i + 1;
i =nctemp5588;
struct tree* nctemp5593= p;
struct tree* nctemp5595=PtreeMvsister(nctemp5593);
p =nctemp5595;
}
int nctemp5596 = (p !=0);
nctemp5521=nctemp5596;}struct tree* nctemp5601= sp;
nctempchar1* nctemp5603= pointer;
int nctemp5606=CodeEs(nctemp5601,nctemp5603);
struct tree* nctemp5608= sp;
struct nctempchar1 *nctemp5612;
static struct nctempchar1 nctemp5613 = {{ 4}, (char*)"->a\0"};
nctemp5612=&nctemp5613;
nctempchar1* nctemp5610= nctemp5612;
int nctemp5614=CodeEs(nctemp5608,nctemp5610);
struct tree* nctemp5616= sp;
struct nctempchar1 *nctemp5620;
static struct nctempchar1 nctemp5621 = {{ 2}, (char*)"=\0"};
nctemp5620=&nctemp5621;
nctempchar1* nctemp5618= nctemp5620;
int nctemp5622=CodeEs(nctemp5616,nctemp5618);
struct tree* nctemp5624= sp;
struct nctempchar1 *nctemp5628;
static struct nctempchar1 nctemp5629 = {{ 9}, (char*)"(struct \0"};
nctemp5628=&nctemp5629;
nctempchar1* nctemp5626= nctemp5628;
int nctemp5630=CodeEs(nctemp5624,nctemp5626);
struct tree* nctemp5632= sp;
nctempchar1* nctemp5634= type;
int nctemp5637=CodeEs(nctemp5632,nctemp5634);
struct tree* nctemp5639= sp;
struct nctempchar1 *nctemp5643;
static struct nctempchar1 nctemp5644 = {{ 3}, (char*)"*)\0"};
nctemp5643=&nctemp5644;
nctempchar1* nctemp5641= nctemp5643;
int nctemp5645=CodeEs(nctemp5639,nctemp5641);
struct tree* nctemp5647= sp;
struct nctempchar1 *nctemp5651;
static struct nctempchar1 nctemp5652 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5651=&nctemp5652;
nctempchar1* nctemp5649= nctemp5651;
int nctemp5653=CodeEs(nctemp5647,nctemp5649);
struct tree* nctemp5655= sp;
struct nctempchar1 *nctemp5659;
static struct nctempchar1 nctemp5660 = {{ 8}, (char*)"struct \0"};
nctemp5659=&nctemp5660;
nctempchar1* nctemp5657= nctemp5659;
int nctemp5661=CodeEs(nctemp5655,nctemp5657);
struct tree* nctemp5663= sp;
nctempchar1* nctemp5665= type;
int nctemp5668=CodeEs(nctemp5663,nctemp5665);
struct tree* nctemp5670= sp;
struct nctempchar1 *nctemp5674;
static struct nctempchar1 nctemp5675 = {{ 2}, (char*)")\0"};
nctemp5674=&nctemp5675;
nctempchar1* nctemp5672= nctemp5674;
int nctemp5676=CodeEs(nctemp5670,nctemp5672);
struct tree* nctemp5678= sp;
struct nctempchar1 *nctemp5682;
static struct nctempchar1 nctemp5683 = {{ 2}, (char*)"*\0"};
nctemp5682=&nctemp5683;
nctempchar1* nctemp5680= nctemp5682;
int nctemp5684=CodeEs(nctemp5678,nctemp5680);
struct tree* nctemp5686= sp;
nctempchar1* nctemp5688= totdim;
int nctemp5691=CodeEs(nctemp5686,nctemp5688);
struct tree* nctemp5693= sp;
struct nctempchar1 *nctemp5697;
static struct nctempchar1 nctemp5698 = {{ 5}, (char*)");\n\0"};
nctemp5697=&nctemp5698;
nctempchar1* nctemp5695= nctemp5697;
int nctemp5699=CodeEs(nctemp5693,nctemp5695);
}
nctempchar1* nctemp5706= structflag;
struct nctempchar1 *nctemp5711;
static struct nctempchar1 nctemp5712 = {{ 7}, (char*)"struct\0"};
nctemp5711=&nctemp5712;
nctempchar1* nctemp5709= nctemp5711;
int nctemp5713=LibeStrcmp(nctemp5706,nctemp5709);
int nctemp5703 = (nctemp5713 ==0);
nctempchar1* nctemp5719= arrayflag;
struct nctempchar1 *nctemp5724;
static struct nctempchar1 nctemp5725 = {{ 6}, (char*)"array\0"};
nctemp5724=&nctemp5725;
nctempchar1* nctemp5722= nctemp5724;
int nctemp5726=LibeStrcmp(nctemp5719,nctemp5722);
int nctemp5716 = (nctemp5726 ==1);
int nctemp5700 = (nctemp5703 && nctemp5716);
if(nctemp5700)
{
int nctemp5729= 4;
int nctemp5731=LibeFlush(nctemp5729);
struct tree* nctemp5733= sp;
struct nctempchar1 *nctemp5737;
static struct nctempchar1 nctemp5738 = {{ 7}, (char*)"nctemp\0"};
nctemp5737=&nctemp5738;
nctempchar1* nctemp5735= nctemp5737;
int nctemp5739=CodeEs(nctemp5733,nctemp5735);
struct tree* nctemp5741= sp;
nctempchar1* nctemp5743= type;
int nctemp5746=CodeEs(nctemp5741,nctemp5743);
int nctemp5748= rank;
int nctemp5750=CodeEd(nctemp5748);
struct tree* nctemp5752= sp;
struct nctempchar1 *nctemp5756;
static struct nctempchar1 nctemp5757 = {{ 3}, (char*)" *\0"};
nctemp5756=&nctemp5757;
nctempchar1* nctemp5754= nctemp5756;
int nctemp5758=CodeEs(nctemp5752,nctemp5754);
struct tree* nctemp5760= sp;
nctempchar1* nctemp5762= pointer;
int nctemp5765=CodeEs(nctemp5760,nctemp5762);
struct tree* nctemp5767= sp;
struct nctempchar1 *nctemp5771;
static struct nctempchar1 nctemp5772 = {{ 4}, (char*)";\n\0"};
nctemp5771=&nctemp5772;
nctempchar1* nctemp5769= nctemp5771;
int nctemp5773=CodeEs(nctemp5767,nctemp5769);
p =top;
i =0;
struct tree* nctemp5783= p;
nctempchar1* nctemp5785= pointer;
int nctemp5788=CodeEs(nctemp5783,nctemp5785);
struct tree* nctemp5790= p;
struct nctempchar1 *nctemp5794;
static struct nctempchar1 nctemp5795 = {{ 2}, (char*)"=\0"};
nctemp5794=&nctemp5795;
nctempchar1* nctemp5792= nctemp5794;
int nctemp5796=CodeEs(nctemp5790,nctemp5792);
struct tree* nctemp5798= p;
struct nctempchar1 *nctemp5802;
static struct nctempchar1 nctemp5803 = {{ 2}, (char*)"(\0"};
nctemp5802=&nctemp5803;
nctempchar1* nctemp5800= nctemp5802;
int nctemp5804=CodeEs(nctemp5798,nctemp5800);
struct tree* nctemp5806= p;
struct nctempchar1 *nctemp5810;
static struct nctempchar1 nctemp5811 = {{ 7}, (char*)"nctemp\0"};
nctemp5810=&nctemp5811;
nctempchar1* nctemp5808= nctemp5810;
int nctemp5812=CodeEs(nctemp5806,nctemp5808);
struct tree* nctemp5814= p;
nctempchar1* nctemp5816= type;
int nctemp5819=CodeEs(nctemp5814,nctemp5816);
int nctemp5821= rank;
int nctemp5823=CodeEd(nctemp5821);
struct tree* nctemp5825= p;
struct nctempchar1 *nctemp5829;
static struct nctempchar1 nctemp5830 = {{ 3}, (char*)"*)\0"};
nctemp5829=&nctemp5830;
nctempchar1* nctemp5827= nctemp5829;
int nctemp5831=CodeEs(nctemp5825,nctemp5827);
struct tree* nctemp5833= p;
struct nctempchar1 *nctemp5837;
static struct nctempchar1 nctemp5838 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5837=&nctemp5838;
nctempchar1* nctemp5835= nctemp5837;
int nctemp5839=CodeEs(nctemp5833,nctemp5835);
struct tree* nctemp5841= p;
struct nctempchar1 *nctemp5845;
static struct nctempchar1 nctemp5846 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5845=&nctemp5846;
nctempchar1* nctemp5843= nctemp5845;
int nctemp5847=CodeEs(nctemp5841,nctemp5843);
struct tree* nctemp5849= p;
nctempchar1* nctemp5851= type;
int nctemp5854=CodeEs(nctemp5849,nctemp5851);
int nctemp5856= rank;
int nctemp5858=CodeEd(nctemp5856);
struct tree* nctemp5860= p;
struct nctempchar1 *nctemp5864;
static struct nctempchar1 nctemp5865 = {{ 6}, (char*)"));\n\0"};
nctemp5864=&nctemp5865;
nctempchar1* nctemp5862= nctemp5864;
int nctemp5866=CodeEs(nctemp5860,nctemp5862);
int nctemp5867 = (p !=0);
int nctemp5871=nctemp5867;
while(nctemp5871)
{{
struct tree* nctemp5877= p;
nctempchar1* nctemp5879=CodeExpr(nctemp5877);
dim=nctemp5879;
struct tree* nctemp5881= p;
nctempchar1* nctemp5883= pointer;
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
int nctemp5904= i;
int nctemp5906=CodeEd(nctemp5904);
struct tree* nctemp5908= p;
struct nctempchar1 *nctemp5912;
static struct nctempchar1 nctemp5913 = {{ 3}, (char*)"]=\0"};
nctemp5912=&nctemp5913;
nctempchar1* nctemp5910= nctemp5912;
int nctemp5914=CodeEs(nctemp5908,nctemp5910);
struct tree* nctemp5916= p;
nctempchar1* nctemp5918= dim;
int nctemp5921=CodeEs(nctemp5916,nctemp5918);
struct tree* nctemp5923= p;
struct nctempchar1 *nctemp5927;
static struct nctempchar1 nctemp5928 = {{ 4}, (char*)";\n\0"};
nctemp5927=&nctemp5928;
nctempchar1* nctemp5925= nctemp5927;
int nctemp5929=CodeEs(nctemp5923,nctemp5925);
int nctemp5938 = i + 1;
i =nctemp5938;
struct tree* nctemp5943= p;
struct tree* nctemp5945=PtreeMvsister(nctemp5943);
p =nctemp5945;
}
int nctemp5946 = (p !=0);
nctemp5871=nctemp5946;}p =top;
struct tree* nctemp5955= p;
nctempchar1* nctemp5957= pointer;
int nctemp5960=CodeEs(nctemp5955,nctemp5957);
struct tree* nctemp5962= p;
struct nctempchar1 *nctemp5966;
static struct nctempchar1 nctemp5967 = {{ 4}, (char*)"->a\0"};
nctemp5966=&nctemp5967;
nctempchar1* nctemp5964= nctemp5966;
int nctemp5968=CodeEs(nctemp5962,nctemp5964);
struct tree* nctemp5970= p;
struct nctempchar1 *nctemp5974;
static struct nctempchar1 nctemp5975 = {{ 3}, (char*)"=(\0"};
nctemp5974=&nctemp5975;
nctempchar1* nctemp5972= nctemp5974;
int nctemp5976=CodeEs(nctemp5970,nctemp5972);
struct tree* nctemp5978= p;
nctempchar1* nctemp5980= type;
int nctemp5983=CodeEs(nctemp5978,nctemp5980);
struct tree* nctemp5985= p;
struct nctempchar1 *nctemp5989;
static struct nctempchar1 nctemp5990 = {{ 4}, (char*)" *)\0"};
nctemp5989=&nctemp5990;
nctempchar1* nctemp5987= nctemp5989;
int nctemp5991=CodeEs(nctemp5985,nctemp5987);
struct tree* nctemp5993= p;
struct nctempchar1 *nctemp5997;
static struct nctempchar1 nctemp5998 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5997=&nctemp5998;
nctempchar1* nctemp5995= nctemp5997;
int nctemp5999=CodeEs(nctemp5993,nctemp5995);
struct tree* nctemp6001= p;
nctempchar1* nctemp6003= type;
int nctemp6006=CodeEs(nctemp6001,nctemp6003);
struct tree* nctemp6008= p;
struct nctempchar1 *nctemp6012;
static struct nctempchar1 nctemp6013 = {{ 2}, (char*)")\0"};
nctemp6012=&nctemp6013;
nctempchar1* nctemp6010= nctemp6012;
int nctemp6014=CodeEs(nctemp6008,nctemp6010);
struct tree* nctemp6016= p;
struct nctempchar1 *nctemp6020;
static struct nctempchar1 nctemp6021 = {{ 2}, (char*)"*\0"};
nctemp6020=&nctemp6021;
nctempchar1* nctemp6018= nctemp6020;
int nctemp6022=CodeEs(nctemp6016,nctemp6018);
struct tree* nctemp6024= p;
nctempchar1* nctemp6026= totdim;
int nctemp6029=CodeEs(nctemp6024,nctemp6026);
struct tree* nctemp6031= p;
struct nctempchar1 *nctemp6035;
static struct nctempchar1 nctemp6036 = {{ 5}, (char*)");\n\0"};
nctemp6035=&nctemp6036;
nctempchar1* nctemp6033= nctemp6035;
int nctemp6037=CodeEs(nctemp6031,nctemp6033);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp6044= p;
struct tree* nctemp6046=PtreeMvchild(nctemp6044);
p =nctemp6046;
struct tree* nctemp6051= p;
struct tree* nctemp6053=PtreeMvchild(nctemp6051);
p =nctemp6053;
struct tree* nctemp6059= p;
nctempchar1* nctemp6061=CodeBinexpr(nctemp6059);
tmp=nctemp6061;
struct tree* nctemp6065= p;
nctempchar1* nctemp6067=PtreeGetref(nctemp6065);
nctempchar1* nctemp6063= nctemp6067;
struct nctempchar1 *nctemp6070;
static struct nctempchar1 nctemp6071 = {{ 5}, (char*)"aref\0"};
nctemp6070=&nctemp6071;
nctempchar1* nctemp6068= nctemp6070;
int nctemp6072=LibeStrcmp(nctemp6063,nctemp6068);
if(nctemp6072)
{
struct tree* nctemp6074= p;
struct nctempchar1 *nctemp6078;
static struct nctempchar1 nctemp6079 = {{ 9}, (char*)"RunFree(\0"};
nctemp6078=&nctemp6079;
nctempchar1* nctemp6076= nctemp6078;
int nctemp6080=CodeEs(nctemp6074,nctemp6076);
struct tree* nctemp6082= p;
nctempchar1* nctemp6084= tmp;
int nctemp6087=CodeEs(nctemp6082,nctemp6084);
struct tree* nctemp6089= p;
struct nctempchar1 *nctemp6093;
static struct nctempchar1 nctemp6094 = {{ 8}, (char*)"->a);\n\0"};
nctemp6093=&nctemp6094;
nctempchar1* nctemp6091= nctemp6093;
int nctemp6095=CodeEs(nctemp6089,nctemp6091);
struct tree* nctemp6097= p;
struct nctempchar1 *nctemp6101;
static struct nctempchar1 nctemp6102 = {{ 9}, (char*)"RunFree(\0"};
nctemp6101=&nctemp6102;
nctempchar1* nctemp6099= nctemp6101;
int nctemp6103=CodeEs(nctemp6097,nctemp6099);
struct tree* nctemp6105= p;
nctempchar1* nctemp6107= tmp;
int nctemp6110=CodeEs(nctemp6105,nctemp6107);
struct tree* nctemp6112= p;
struct nctempchar1 *nctemp6116;
static struct nctempchar1 nctemp6117 = {{ 5}, (char*)");\n\0"};
nctemp6116=&nctemp6117;
nctempchar1* nctemp6114= nctemp6116;
int nctemp6118=CodeEs(nctemp6112,nctemp6114);
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
nctempchar1* nctemp6126=CodeMktemp();
tempr=nctemp6126;
struct tree* nctemp6131= p;
struct tree* nctemp6133=PtreeMvchild(nctemp6131);
np =nctemp6133;
struct tree* nctemp6139= np;
nctempchar1* nctemp6141=CodeExpr(nctemp6139);
temp=nctemp6141;
struct tree* nctemp6146= np;
struct tree* nctemp6148=PtreeMvsister(nctemp6146);
sp =nctemp6148;
struct tree* nctemp6154= sp;
nctempchar1* nctemp6156=CodeExpr(nctemp6154);
index=nctemp6156;
struct tree* nctemp6158= p;
struct tree* nctemp6162= p;
nctempchar1* nctemp6164=PtreeGetype(nctemp6162);
nctempchar1* nctemp6160= nctemp6164;
int nctemp6165=CodeEs(nctemp6158,nctemp6160);
struct tree* nctemp6167= p;
struct nctempchar1 *nctemp6171;
static struct nctempchar1 nctemp6172 = {{ 2}, (char*)" \0"};
nctemp6171=&nctemp6172;
nctempchar1* nctemp6169= nctemp6171;
int nctemp6173=CodeEs(nctemp6167,nctemp6169);
struct tree* nctemp6175= p;
nctempchar1* nctemp6177= tempr;
int nctemp6180=CodeEs(nctemp6175,nctemp6177);
struct tree* nctemp6182= p;
struct nctempchar1 *nctemp6186;
static struct nctempchar1 nctemp6187 = {{ 2}, (char*)"=\0"};
nctemp6186=&nctemp6187;
nctempchar1* nctemp6184= nctemp6186;
int nctemp6188=CodeEs(nctemp6182,nctemp6184);
struct tree* nctemp6190= p;
nctempchar1* nctemp6192= temp;
int nctemp6195=CodeEs(nctemp6190,nctemp6192);
struct tree* nctemp6197= p;
struct nctempchar1 *nctemp6201;
static struct nctempchar1 nctemp6202 = {{ 4}, (char*)"->d\0"};
nctemp6201=&nctemp6202;
nctempchar1* nctemp6199= nctemp6201;
int nctemp6203=CodeEs(nctemp6197,nctemp6199);
struct tree* nctemp6205= p;
struct nctempchar1 *nctemp6209;
static struct nctempchar1 nctemp6210 = {{ 2}, (char*)"[\0"};
nctemp6209=&nctemp6210;
nctempchar1* nctemp6207= nctemp6209;
int nctemp6211=CodeEs(nctemp6205,nctemp6207);
struct tree* nctemp6213= p;
nctempchar1* nctemp6215= index;
int nctemp6218=CodeEs(nctemp6213,nctemp6215);
struct tree* nctemp6220= p;
struct nctempchar1 *nctemp6224;
static struct nctempchar1 nctemp6225 = {{ 3}, (char*)"];\0"};
nctemp6224=&nctemp6225;
nctempchar1* nctemp6222= nctemp6224;
int nctemp6226=CodeEs(nctemp6220,nctemp6222);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6234=CodeMktemp();
tempr=nctemp6234;
struct tree* nctemp6239= p;
struct tree* nctemp6241=PtreeMvchild(nctemp6239);
np =nctemp6241;
struct tree* nctemp6246= np;
struct tree* nctemp6248=PtreeMvchild(nctemp6246);
np =nctemp6248;
struct tree* nctemp6254= np;
nctempchar1* nctemp6256=CodeExpr(nctemp6254);
q=nctemp6256;
struct tree* nctemp6261= np;
struct tree* nctemp6263=PtreeMvsister(nctemp6261);
sp =nctemp6263;
struct tree* nctemp6269= sp;
nctempchar1* nctemp6271=CodeExpr(nctemp6269);
r=nctemp6271;
struct tree* nctemp6273= p;
struct tree* nctemp6277= p;
nctempchar1* nctemp6279=PtreeGetype(nctemp6277);
nctempchar1* nctemp6275= nctemp6279;
int nctemp6280=CodeEs(nctemp6273,nctemp6275);
struct tree* nctemp6282= p;
struct nctempchar1 *nctemp6286;
static struct nctempchar1 nctemp6287 = {{ 2}, (char*)" \0"};
nctemp6286=&nctemp6287;
nctempchar1* nctemp6284= nctemp6286;
int nctemp6288=CodeEs(nctemp6282,nctemp6284);
struct tree* nctemp6290= p;
nctempchar1* nctemp6292= tempr;
int nctemp6295=CodeEs(nctemp6290,nctemp6292);
struct tree* nctemp6297= p;
struct nctempchar1 *nctemp6301;
static struct nctempchar1 nctemp6302 = {{ 3}, (char*)".r\0"};
nctemp6301=&nctemp6302;
nctempchar1* nctemp6299= nctemp6301;
int nctemp6303=CodeEs(nctemp6297,nctemp6299);
struct tree* nctemp6305= p;
struct nctempchar1 *nctemp6309;
static struct nctempchar1 nctemp6310 = {{ 3}, (char*)" =\0"};
nctemp6309=&nctemp6310;
nctempchar1* nctemp6307= nctemp6309;
int nctemp6311=CodeEs(nctemp6305,nctemp6307);
struct tree* nctemp6313= p;
nctempchar1* nctemp6315= q;
int nctemp6318=CodeEs(nctemp6313,nctemp6315);
struct tree* nctemp6320= p;
struct nctempchar1 *nctemp6324;
static struct nctempchar1 nctemp6325 = {{ 2}, (char*)";\0"};
nctemp6324=&nctemp6325;
nctempchar1* nctemp6322= nctemp6324;
int nctemp6326=CodeEs(nctemp6320,nctemp6322);
struct tree* nctemp6328= p;
struct tree* nctemp6332= p;
nctempchar1* nctemp6334=PtreeGetype(nctemp6332);
nctempchar1* nctemp6330= nctemp6334;
int nctemp6335=CodeEs(nctemp6328,nctemp6330);
struct tree* nctemp6337= p;
struct nctempchar1 *nctemp6341;
static struct nctempchar1 nctemp6342 = {{ 2}, (char*)" \0"};
nctemp6341=&nctemp6342;
nctempchar1* nctemp6339= nctemp6341;
int nctemp6343=CodeEs(nctemp6337,nctemp6339);
struct tree* nctemp6345= p;
nctempchar1* nctemp6347= tempr;
int nctemp6350=CodeEs(nctemp6345,nctemp6347);
struct tree* nctemp6352= p;
struct nctempchar1 *nctemp6356;
static struct nctempchar1 nctemp6357 = {{ 3}, (char*)".i\0"};
nctemp6356=&nctemp6357;
nctempchar1* nctemp6354= nctemp6356;
int nctemp6358=CodeEs(nctemp6352,nctemp6354);
struct tree* nctemp6360= p;
struct nctempchar1 *nctemp6364;
static struct nctempchar1 nctemp6365 = {{ 2}, (char*)"=\0"};
nctemp6364=&nctemp6365;
nctempchar1* nctemp6362= nctemp6364;
int nctemp6366=CodeEs(nctemp6360,nctemp6362);
struct tree* nctemp6368= p;
nctempchar1* nctemp6370= r;
int nctemp6373=CodeEs(nctemp6368,nctemp6370);
struct tree* nctemp6375= p;
struct nctempchar1 *nctemp6379;
static struct nctempchar1 nctemp6380 = {{ 2}, (char*)";\0"};
nctemp6379=&nctemp6380;
nctempchar1* nctemp6377= nctemp6379;
int nctemp6381=CodeEs(nctemp6375,nctemp6377);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6389=CodeMktemp();
tempr=nctemp6389;
struct tree* nctemp6394= p;
struct tree* nctemp6396=PtreeMvchild(nctemp6394);
np =nctemp6396;
struct tree* nctemp6402= np;
nctempchar1* nctemp6404=CodeExpr(nctemp6402);
q=nctemp6404;
struct tree* nctemp6406= p;
struct tree* nctemp6410= p;
nctempchar1* nctemp6412=PtreeGetype(nctemp6410);
nctempchar1* nctemp6408= nctemp6412;
int nctemp6413=CodeEs(nctemp6406,nctemp6408);
struct tree* nctemp6415= p;
struct nctempchar1 *nctemp6419;
static struct nctempchar1 nctemp6420 = {{ 2}, (char*)" \0"};
nctemp6419=&nctemp6420;
nctempchar1* nctemp6417= nctemp6419;
int nctemp6421=CodeEs(nctemp6415,nctemp6417);
struct tree* nctemp6423= p;
nctempchar1* nctemp6425= tempr;
int nctemp6428=CodeEs(nctemp6423,nctemp6425);
struct tree* nctemp6430= p;
struct nctempchar1 *nctemp6434;
static struct nctempchar1 nctemp6435 = {{ 3}, (char*)" =\0"};
nctemp6434=&nctemp6435;
nctempchar1* nctemp6432= nctemp6434;
int nctemp6436=CodeEs(nctemp6430,nctemp6432);
struct tree* nctemp6438= p;
nctempchar1* nctemp6440= q;
int nctemp6443=CodeEs(nctemp6438,nctemp6440);
struct tree* nctemp6445= p;
struct nctempchar1 *nctemp6449;
static struct nctempchar1 nctemp6450 = {{ 5}, (char*)".i  \0"};
nctemp6449=&nctemp6450;
nctempchar1* nctemp6447= nctemp6449;
int nctemp6451=CodeEs(nctemp6445,nctemp6447);
struct tree* nctemp6453= p;
struct nctempchar1 *nctemp6457;
static struct nctempchar1 nctemp6458 = {{ 4}, (char*)";\n\0"};
nctemp6457=&nctemp6458;
nctempchar1* nctemp6455= nctemp6457;
int nctemp6459=CodeEs(nctemp6453,nctemp6455);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6466= p;
struct tree* nctemp6468=PtreeMvchild(nctemp6466);
np =nctemp6468;
struct tree* nctemp6474= np;
nctempchar1* nctemp6476=CodeExpr(nctemp6474);
q=nctemp6476;
nctempchar1* nctemp6482=CodeMktemp();
tmp=nctemp6482;
struct tree* nctemp6484= p;
struct tree* nctemp6488= p;
nctempchar1* nctemp6490=PtreeGetype(nctemp6488);
nctempchar1* nctemp6486= nctemp6490;
int nctemp6491=CodeEs(nctemp6484,nctemp6486);
struct tree* nctemp6493= p;
struct nctempchar1 *nctemp6497;
static struct nctempchar1 nctemp6498 = {{ 2}, (char*)" \0"};
nctemp6497=&nctemp6498;
nctempchar1* nctemp6495= nctemp6497;
int nctemp6499=CodeEs(nctemp6493,nctemp6495);
struct tree* nctemp6501= p;
nctempchar1* nctemp6503= tmp;
int nctemp6506=CodeEs(nctemp6501,nctemp6503);
struct tree* nctemp6508= p;
struct nctempchar1 *nctemp6512;
static struct nctempchar1 nctemp6513 = {{ 3}, (char*)" =\0"};
nctemp6512=&nctemp6513;
nctempchar1* nctemp6510= nctemp6512;
int nctemp6514=CodeEs(nctemp6508,nctemp6510);
struct tree* nctemp6516= p;
nctempchar1* nctemp6518= q;
int nctemp6521=CodeEs(nctemp6516,nctemp6518);
struct tree* nctemp6523= p;
struct nctempchar1 *nctemp6527;
static struct nctempchar1 nctemp6528 = {{ 5}, (char*)".r  \0"};
nctemp6527=&nctemp6528;
nctempchar1* nctemp6525= nctemp6527;
int nctemp6529=CodeEs(nctemp6523,nctemp6525);
struct tree* nctemp6531= p;
struct nctempchar1 *nctemp6535;
static struct nctempchar1 nctemp6536 = {{ 4}, (char*)";\n\0"};
nctemp6535=&nctemp6536;
nctempchar1* nctemp6533= nctemp6535;
int nctemp6537=CodeEs(nctemp6531,nctemp6533);
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
struct tree* nctemp6550= p;
nctempchar1* nctemp6552=PtreeGetdef(nctemp6550);
nctempchar1* nctemp6548= nctemp6552;
struct symbol* nctemp6555=SymGetetp();
struct symbol* nctemp6553= nctemp6555;
struct symbol* nctemp6556=SymLookup(nctemp6548,nctemp6553);
tp =nctemp6556;
struct tree* nctemp6561= p;
struct tree* nctemp6563=PtreeMvchild(nctemp6561);
sp =nctemp6563;
int nctemp6564 = (sp !=0);
if(nctemp6564)
{
struct tree* nctemp6573= sp;
nctempchar1* nctemp6575=PtreeGetname(nctemp6573);
nctempchar1* nctemp6571= nctemp6575;
struct nctempchar1 *nctemp6578;
static struct nctempchar1 nctemp6579 = {{ 9}, (char*)"exprlist\0"};
nctemp6578=&nctemp6579;
nctempchar1* nctemp6576= nctemp6578;
int nctemp6580=LibeStrcmp(nctemp6571,nctemp6576);
int nctemp6568 = (nctemp6580 ==1);
if(nctemp6568)
{
struct tree* nctemp6586= sp;
struct tree* nctemp6588=PtreeMvchild(nctemp6586);
sp =nctemp6588;
}
}
int nctemp6589 = (sp !=0);
int nctemp6593=nctemp6589;
while(nctemp6593)
{{
nctempchar1* nctemp6599=CodeMktemp();
ntemp=nctemp6599;
struct tree* nctemp6601= sp;
nctempchar1* nctemp6603= ntemp;
int nctemp6606=PtreeSetempr(nctemp6601,nctemp6603);
struct tree* nctemp6612= sp;
nctempchar1* nctemp6614=CodeExpr(nctemp6612);
temp=nctemp6614;
struct tree* nctemp6620= sp;
nctempchar1* nctemp6622=PtreeGetref(nctemp6620);
nctempchar1* nctemp6618= nctemp6622;
struct nctempchar1 *nctemp6625;
static struct nctempchar1 nctemp6626 = {{ 5}, (char*)"aref\0"};
nctemp6625=&nctemp6626;
nctempchar1* nctemp6623= nctemp6625;
int nctemp6627=LibeStrcmp(nctemp6618,nctemp6623);
int nctemp6615 = (nctemp6627 ==1);
if(nctemp6615)
{
struct tree* nctemp6630= sp;
struct nctempchar1 *nctemp6634;
static struct nctempchar1 nctemp6635 = {{ 7}, (char*)"nctemp\0"};
nctemp6634=&nctemp6635;
nctempchar1* nctemp6632= nctemp6634;
int nctemp6636=CodeEs(nctemp6630,nctemp6632);
struct tree* nctemp6638= sp;
struct tree* nctemp6642= sp;
nctempchar1* nctemp6644=PtreeGetype(nctemp6642);
nctempchar1* nctemp6640= nctemp6644;
int nctemp6645=CodeEs(nctemp6638,nctemp6640);
struct tree* nctemp6649= sp;
int nctemp6651=PtreeGetrank(nctemp6649);
int nctemp6647= nctemp6651;
int nctemp6652=CodeEd(nctemp6647);
struct tree* nctemp6654= sp;
struct nctempchar1 *nctemp6658;
static struct nctempchar1 nctemp6659 = {{ 2}, (char*)"*\0"};
nctemp6658=&nctemp6659;
nctempchar1* nctemp6656= nctemp6658;
int nctemp6660=CodeEs(nctemp6654,nctemp6656);
}
else{
struct tree* nctemp6666= sp;
nctempchar1* nctemp6668=PtreeGetref(nctemp6666);
nctempchar1* nctemp6664= nctemp6668;
struct nctempchar1 *nctemp6671;
static struct nctempchar1 nctemp6672 = {{ 5}, (char*)"sref\0"};
nctemp6671=&nctemp6672;
nctempchar1* nctemp6669= nctemp6671;
int nctemp6673=LibeStrcmp(nctemp6664,nctemp6669);
int nctemp6661 = (nctemp6673 ==1);
if(nctemp6661)
{
struct tree* nctemp6676= sp;
struct nctempchar1 *nctemp6680;
static struct nctempchar1 nctemp6681 = {{ 8}, (char*)"struct \0"};
nctemp6680=&nctemp6681;
nctempchar1* nctemp6678= nctemp6680;
int nctemp6682=CodeEs(nctemp6676,nctemp6678);
struct tree* nctemp6684= sp;
struct tree* nctemp6688= sp;
nctempchar1* nctemp6690=PtreeGetype(nctemp6688);
nctempchar1* nctemp6686= nctemp6690;
int nctemp6691=CodeEs(nctemp6684,nctemp6686);
struct tree* nctemp6693= sp;
struct nctempchar1 *nctemp6697;
static struct nctempchar1 nctemp6698 = {{ 2}, (char*)"*\0"};
nctemp6697=&nctemp6698;
nctempchar1* nctemp6695= nctemp6697;
int nctemp6699=CodeEs(nctemp6693,nctemp6695);
}
else{
struct tree* nctemp6701= sp;
struct tree* nctemp6705= sp;
nctempchar1* nctemp6707=PtreeGetype(nctemp6705);
nctempchar1* nctemp6703= nctemp6707;
int nctemp6708=CodeEs(nctemp6701,nctemp6703);
}
}
struct tree* nctemp6710= sp;
struct nctempchar1 *nctemp6714;
static struct nctempchar1 nctemp6715 = {{ 2}, (char*)" \0"};
nctemp6714=&nctemp6715;
nctempchar1* nctemp6712= nctemp6714;
int nctemp6716=CodeEs(nctemp6710,nctemp6712);
struct tree* nctemp6718= sp;
nctempchar1* nctemp6720= ntemp;
int nctemp6723=CodeEs(nctemp6718,nctemp6720);
struct tree* nctemp6725= sp;
struct nctempchar1 *nctemp6729;
static struct nctempchar1 nctemp6730 = {{ 3}, (char*)"= \0"};
nctemp6729=&nctemp6730;
nctempchar1* nctemp6727= nctemp6729;
int nctemp6731=CodeEs(nctemp6725,nctemp6727);
struct tree* nctemp6733= sp;
nctempchar1* nctemp6735= temp;
int nctemp6738=CodeEs(nctemp6733,nctemp6735);
struct tree* nctemp6740= sp;
struct nctempchar1 *nctemp6744;
static struct nctempchar1 nctemp6745 = {{ 4}, (char*)";\n\0"};
nctemp6744=&nctemp6745;
nctempchar1* nctemp6742= nctemp6744;
int nctemp6746=CodeEs(nctemp6740,nctemp6742);
struct tree* nctemp6751= sp;
struct tree* nctemp6753=PtreeMvsister(nctemp6751);
sp =nctemp6753;
}
int nctemp6754 = (sp !=0);
nctemp6593=nctemp6754;}nctempchar1* nctemp6763=CodeMktemp();
ntemp=nctemp6763;
struct tree* nctemp6769= p;
nctempchar1* nctemp6771=PtreeGetref(nctemp6769);
nctempchar1* nctemp6767= nctemp6771;
struct nctempchar1 *nctemp6774;
static struct nctempchar1 nctemp6775 = {{ 5}, (char*)"aref\0"};
nctemp6774=&nctemp6775;
nctempchar1* nctemp6772= nctemp6774;
int nctemp6776=LibeStrcmp(nctemp6767,nctemp6772);
int nctemp6764 = (nctemp6776 ==1);
if(nctemp6764)
{
struct tree* nctemp6779= p;
struct nctempchar1 *nctemp6783;
static struct nctempchar1 nctemp6784 = {{ 7}, (char*)"nctemp\0"};
nctemp6783=&nctemp6784;
nctempchar1* nctemp6781= nctemp6783;
int nctemp6785=CodeEs(nctemp6779,nctemp6781);
struct tree* nctemp6787= p;
struct tree* nctemp6791= p;
nctempchar1* nctemp6793=PtreeGetype(nctemp6791);
nctempchar1* nctemp6789= nctemp6793;
int nctemp6794=CodeEs(nctemp6787,nctemp6789);
struct tree* nctemp6798= p;
int nctemp6800=PtreeGetrank(nctemp6798);
int nctemp6796= nctemp6800;
int nctemp6801=CodeEd(nctemp6796);
struct tree* nctemp6803= p;
struct nctempchar1 *nctemp6807;
static struct nctempchar1 nctemp6808 = {{ 2}, (char*)"*\0"};
nctemp6807=&nctemp6808;
nctempchar1* nctemp6805= nctemp6807;
int nctemp6809=CodeEs(nctemp6803,nctemp6805);
}
else{
struct tree* nctemp6815= p;
nctempchar1* nctemp6817=PtreeGetref(nctemp6815);
nctempchar1* nctemp6813= nctemp6817;
struct nctempchar1 *nctemp6820;
static struct nctempchar1 nctemp6821 = {{ 5}, (char*)"sref\0"};
nctemp6820=&nctemp6821;
nctempchar1* nctemp6818= nctemp6820;
int nctemp6822=LibeStrcmp(nctemp6813,nctemp6818);
int nctemp6810 = (nctemp6822 ==1);
if(nctemp6810)
{
struct tree* nctemp6825= p;
struct nctempchar1 *nctemp6829;
static struct nctempchar1 nctemp6830 = {{ 8}, (char*)"struct \0"};
nctemp6829=&nctemp6830;
nctempchar1* nctemp6827= nctemp6829;
int nctemp6831=CodeEs(nctemp6825,nctemp6827);
struct tree* nctemp6833= p;
struct tree* nctemp6837= p;
nctempchar1* nctemp6839=PtreeGetype(nctemp6837);
nctempchar1* nctemp6835= nctemp6839;
int nctemp6840=CodeEs(nctemp6833,nctemp6835);
struct tree* nctemp6842= p;
struct nctempchar1 *nctemp6846;
static struct nctempchar1 nctemp6847 = {{ 2}, (char*)"*\0"};
nctemp6846=&nctemp6847;
nctempchar1* nctemp6844= nctemp6846;
int nctemp6848=CodeEs(nctemp6842,nctemp6844);
}
else{
struct tree* nctemp6850= p;
struct tree* nctemp6854= p;
nctempchar1* nctemp6856=PtreeGetype(nctemp6854);
nctempchar1* nctemp6852= nctemp6856;
int nctemp6857=CodeEs(nctemp6850,nctemp6852);
}
}
struct tree* nctemp6859= p;
struct nctempchar1 *nctemp6863;
static struct nctempchar1 nctemp6864 = {{ 2}, (char*)" \0"};
nctemp6863=&nctemp6864;
nctempchar1* nctemp6861= nctemp6863;
int nctemp6865=CodeEs(nctemp6859,nctemp6861);
struct tree* nctemp6867= p;
nctempchar1* nctemp6869= ntemp;
int nctemp6872=CodeEs(nctemp6867,nctemp6869);
struct tree* nctemp6874= p;
struct nctempchar1 *nctemp6878;
static struct nctempchar1 nctemp6879 = {{ 2}, (char*)"=\0"};
nctemp6878=&nctemp6879;
nctempchar1* nctemp6876= nctemp6878;
int nctemp6880=CodeEs(nctemp6874,nctemp6876);
struct tree* nctemp6882= p;
struct symbol* nctemp6886= tp;
nctempchar1* nctemp6888=SymGetname(nctemp6886);
nctempchar1* nctemp6884= nctemp6888;
int nctemp6889=CodeEs(nctemp6882,nctemp6884);
struct tree* nctemp6891= p;
struct nctempchar1 *nctemp6895;
static struct nctempchar1 nctemp6896 = {{ 2}, (char*)"(\0"};
nctemp6895=&nctemp6896;
nctempchar1* nctemp6893= nctemp6895;
int nctemp6897=CodeEs(nctemp6891,nctemp6893);
struct tree* nctemp6902= p;
struct tree* nctemp6904=PtreeMvchild(nctemp6902);
sp =nctemp6904;
int nctemp6905 = (sp !=0);
if(nctemp6905)
{
struct tree* nctemp6913= sp;
struct tree* nctemp6915=PtreeMvchild(nctemp6913);
sp =nctemp6915;
}
int nctemp6916 = (sp !=0);
int nctemp6920=nctemp6916;
while(nctemp6920)
{{
struct tree* nctemp6922= p;
struct tree* nctemp6926= sp;
nctempchar1* nctemp6928=PtreeGetempr(nctemp6926);
nctempchar1* nctemp6924= nctemp6928;
int nctemp6929=CodeEs(nctemp6922,nctemp6924);
struct tree* nctemp6937= sp;
struct tree* nctemp6939=PtreeMvsister(nctemp6937);
sp =nctemp6939;
int nctemp6930 = (sp !=0);
if(nctemp6930)
{
struct tree* nctemp6942= p;
struct nctempchar1 *nctemp6946;
static struct nctempchar1 nctemp6947 = {{ 2}, (char*)",\0"};
nctemp6946=&nctemp6947;
nctempchar1* nctemp6944= nctemp6946;
int nctemp6948=CodeEs(nctemp6942,nctemp6944);
}
int nctemp6957 = noargs + 1;
noargs =nctemp6957;
}
int nctemp6958 = (sp !=0);
nctemp6920=nctemp6958;}struct tree* nctemp6963= p;
struct nctempchar1 *nctemp6967;
static struct nctempchar1 nctemp6968 = {{ 5}, (char*)");\n\0"};
nctemp6967=&nctemp6968;
nctempchar1* nctemp6965= nctemp6967;
int nctemp6969=CodeEs(nctemp6963,nctemp6965);
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
nctempchar1* nctemp6977=CodeMktemp();
pointer=nctemp6977;
nctempchar1* nctemp6983=CodeMktemp();
descr=nctemp6983;
struct tree* nctemp6989= p;
nctempchar1* nctemp6991=PtreeGetype(nctemp6989);
type=nctemp6991;
struct tree* nctemp6997= p;
nctempchar1* nctemp6999=PtreeGetname(nctemp6997);
nctempchar1* nctemp6995= nctemp6999;
struct nctempchar1 *nctemp7002;
static struct nctempchar1 nctemp7003 = {{ 5}, (char*)"cast\0"};
nctemp7002=&nctemp7003;
nctempchar1* nctemp7000= nctemp7002;
int nctemp7004=LibeStrcmp(nctemp6995,nctemp7000);
int nctemp6992 = (nctemp7004 ==1);
if(nctemp6992)
{
struct tree* nctemp7010= p;
struct tree* nctemp7012=PtreeMvchild(nctemp7010);
np =nctemp7012;
struct tree* nctemp7017= np;
struct tree* nctemp7019=PtreeMvsister(nctemp7017);
sp =nctemp7019;
struct tree* nctemp7025= sp;
nctempchar1* nctemp7027=CodeExpr(nctemp7025);
expr=nctemp7027;
struct tree* nctemp7033= np;
nctempchar1* nctemp7035=PtreeGetref(nctemp7033);
nctempchar1* nctemp7031= nctemp7035;
struct nctempchar1 *nctemp7038;
static struct nctempchar1 nctemp7039 = {{ 5}, (char*)"sref\0"};
nctemp7038=&nctemp7039;
nctempchar1* nctemp7036= nctemp7038;
int nctemp7040=LibeStrcmp(nctemp7031,nctemp7036);
int nctemp7028 = (nctemp7040 ==1);
if(nctemp7028)
{
nctempchar1* nctemp7047=CodeMktemp();
tmp=nctemp7047;
struct tree* nctemp7049= p;
nctempchar1* nctemp7051= type;
int nctemp7054=CodeEs(nctemp7049,nctemp7051);
struct tree* nctemp7056= p;
struct nctempchar1 *nctemp7060;
static struct nctempchar1 nctemp7061 = {{ 2}, (char*)" \0"};
nctemp7060=&nctemp7061;
nctempchar1* nctemp7058= nctemp7060;
int nctemp7062=CodeEs(nctemp7056,nctemp7058);
struct tree* nctemp7064= p;
nctempchar1* nctemp7066= tmp;
int nctemp7069=CodeEs(nctemp7064,nctemp7066);
struct tree* nctemp7071= p;
struct nctempchar1 *nctemp7075;
static struct nctempchar1 nctemp7076 = {{ 2}, (char*)"=\0"};
nctemp7075=&nctemp7076;
nctempchar1* nctemp7073= nctemp7075;
int nctemp7077=CodeEs(nctemp7071,nctemp7073);
struct tree* nctemp7079= p;
struct nctempchar1 *nctemp7083;
static struct nctempchar1 nctemp7084 = {{ 9}, (char*)"(struct \0"};
nctemp7083=&nctemp7084;
nctempchar1* nctemp7081= nctemp7083;
int nctemp7085=CodeEs(nctemp7079,nctemp7081);
struct tree* nctemp7087= p;
struct tree* nctemp7091= np;
nctempchar1* nctemp7093=PtreeGetype(nctemp7091);
nctempchar1* nctemp7089= nctemp7093;
int nctemp7094=CodeEs(nctemp7087,nctemp7089);
struct tree* nctemp7096= p;
struct nctempchar1 *nctemp7100;
static struct nctempchar1 nctemp7101 = {{ 4}, (char*)"*)(\0"};
nctemp7100=&nctemp7101;
nctempchar1* nctemp7098= nctemp7100;
int nctemp7102=CodeEs(nctemp7096,nctemp7098);
struct tree* nctemp7104= p;
nctempchar1* nctemp7106= expr;
int nctemp7109=CodeEs(nctemp7104,nctemp7106);
struct tree* nctemp7111= p;
struct nctempchar1 *nctemp7115;
static struct nctempchar1 nctemp7116 = {{ 5}, (char*)");\n\0"};
nctemp7115=&nctemp7116;
nctempchar1* nctemp7113= nctemp7115;
int nctemp7117=CodeEs(nctemp7111,nctemp7113);
}
else{
struct tree* nctemp7123= np;
nctempchar1* nctemp7125=PtreeGetref(nctemp7123);
nctempchar1* nctemp7121= nctemp7125;
struct nctempchar1 *nctemp7128;
static struct nctempchar1 nctemp7129 = {{ 5}, (char*)"aref\0"};
nctemp7128=&nctemp7129;
nctempchar1* nctemp7126= nctemp7128;
int nctemp7130=LibeStrcmp(nctemp7121,nctemp7126);
int nctemp7118 = (nctemp7130 ==1);
if(nctemp7118)
{
struct tree* nctemp7136= np;
struct tree* nctemp7138=PtreeMvchild(nctemp7136);
np =nctemp7138;
struct tree* nctemp7143= np;
struct tree* nctemp7145=PtreeMvchild(nctemp7143);
np =nctemp7145;
struct tree* nctemp7150= np;
struct tree* nctemp7152=PtreeMvchild(nctemp7150);
np =nctemp7152;
struct tree* nctemp7157= np;
struct tree* nctemp7159=PtreeMvchild(nctemp7157);
np =nctemp7159;
tp =np;
rank =1;
struct tree* nctemp7175= np;
struct tree* nctemp7177=PtreeMvsister(nctemp7175);
np =nctemp7177;
int nctemp7168 = (np !=0);
int nctemp7179=nctemp7168;
while(nctemp7179)
{{
int nctemp7188 = rank + 1;
rank =nctemp7188;
}
struct tree* nctemp7196= np;
struct tree* nctemp7198=PtreeMvsister(nctemp7196);
np =nctemp7198;
int nctemp7189 = (np !=0);
nctemp7179=nctemp7189;}int nctemp7200 = (rank > 4);
if(nctemp7200)
{
struct nctempchar1 *nctemp7207;
static struct nctempchar1 nctemp7208 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7207=&nctemp7208;
nctempchar1* nctemp7205= nctemp7207;
int nctemp7209=CodeError(nctemp7205);
}
p =tp;
struct tree* nctemp7215= p;
struct nctempchar1 *nctemp7219;
static struct nctempchar1 nctemp7220 = {{ 7}, (char*)"nctemp\0"};
nctemp7219=&nctemp7220;
nctempchar1* nctemp7217= nctemp7219;
int nctemp7221=CodeEs(nctemp7215,nctemp7217);
struct tree* nctemp7223= p;
nctempchar1* nctemp7225= type;
int nctemp7228=CodeEs(nctemp7223,nctemp7225);
int nctemp7230= rank;
int nctemp7232=CodeEd(nctemp7230);
struct tree* nctemp7234= p;
struct nctempchar1 *nctemp7238;
static struct nctempchar1 nctemp7239 = {{ 2}, (char*)" \0"};
nctemp7238=&nctemp7239;
nctempchar1* nctemp7236= nctemp7238;
int nctemp7240=CodeEs(nctemp7234,nctemp7236);
struct tree* nctemp7242= sp;
nctempchar1* nctemp7244= descr;
int nctemp7247=CodeEs(nctemp7242,nctemp7244);
struct tree* nctemp7249= sp;
struct nctempchar1 *nctemp7253;
static struct nctempchar1 nctemp7254 = {{ 4}, (char*)";\n\0"};
nctemp7253=&nctemp7254;
nctempchar1* nctemp7251= nctemp7253;
int nctemp7255=CodeEs(nctemp7249,nctemp7251);
struct tree* nctemp7257= p;
struct nctempchar1 *nctemp7261;
static struct nctempchar1 nctemp7262 = {{ 7}, (char*)"nctemp\0"};
nctemp7261=&nctemp7262;
nctempchar1* nctemp7259= nctemp7261;
int nctemp7263=CodeEs(nctemp7257,nctemp7259);
struct tree* nctemp7265= p;
nctempchar1* nctemp7267= type;
int nctemp7270=CodeEs(nctemp7265,nctemp7267);
int nctemp7272= rank;
int nctemp7274=CodeEd(nctemp7272);
struct tree* nctemp7276= p;
struct nctempchar1 *nctemp7280;
static struct nctempchar1 nctemp7281 = {{ 3}, (char*)" *\0"};
nctemp7280=&nctemp7281;
nctempchar1* nctemp7278= nctemp7280;
int nctemp7282=CodeEs(nctemp7276,nctemp7278);
struct tree* nctemp7284= sp;
nctempchar1* nctemp7286= pointer;
int nctemp7289=CodeEs(nctemp7284,nctemp7286);
struct tree* nctemp7291= p;
struct nctempchar1 *nctemp7295;
static struct nctempchar1 nctemp7296 = {{ 4}, (char*)";\n\0"};
nctemp7295=&nctemp7296;
nctempchar1* nctemp7293= nctemp7295;
int nctemp7297=CodeEs(nctemp7291,nctemp7293);
struct tree* nctemp7299= sp;
nctempchar1* nctemp7301= descr;
int nctemp7304=CodeEs(nctemp7299,nctemp7301);
struct tree* nctemp7306= sp;
struct nctempchar1 *nctemp7310;
static struct nctempchar1 nctemp7311 = {{ 2}, (char*)"=\0"};
nctemp7310=&nctemp7311;
nctempchar1* nctemp7308= nctemp7310;
int nctemp7312=CodeEs(nctemp7306,nctemp7308);
struct tree* nctemp7314= sp;
struct nctempchar1 *nctemp7318;
static struct nctempchar1 nctemp7319 = {{ 3}, (char*)"*(\0"};
nctemp7318=&nctemp7319;
nctempchar1* nctemp7316= nctemp7318;
int nctemp7320=CodeEs(nctemp7314,nctemp7316);
struct tree* nctemp7322= p;
struct nctempchar1 *nctemp7326;
static struct nctempchar1 nctemp7327 = {{ 7}, (char*)"nctemp\0"};
nctemp7326=&nctemp7327;
nctempchar1* nctemp7324= nctemp7326;
int nctemp7328=CodeEs(nctemp7322,nctemp7324);
struct tree* nctemp7330= sp;
nctempchar1* nctemp7332= type;
int nctemp7335=CodeEs(nctemp7330,nctemp7332);
int nctemp7337= rank;
int nctemp7339=CodeEd(nctemp7337);
struct tree* nctemp7341= sp;
struct nctempchar1 *nctemp7345;
static struct nctempchar1 nctemp7346 = {{ 4}, (char*)"*)(\0"};
nctemp7345=&nctemp7346;
nctempchar1* nctemp7343= nctemp7345;
int nctemp7347=CodeEs(nctemp7341,nctemp7343);
struct tree* nctemp7349= sp;
nctempchar1* nctemp7351= expr;
int nctemp7354=CodeEs(nctemp7349,nctemp7351);
struct tree* nctemp7356= sp;
struct nctempchar1 *nctemp7360;
static struct nctempchar1 nctemp7361 = {{ 5}, (char*)");\n\0"};
nctemp7360=&nctemp7361;
nctempchar1* nctemp7358= nctemp7360;
int nctemp7362=CodeEs(nctemp7356,nctemp7358);
p =tp;
i =0;
int nctemp7371 = (p !=0);
int nctemp7375=nctemp7371;
while(nctemp7375)
{{
struct tree* nctemp7381= p;
nctempchar1* nctemp7383=CodeExpr(nctemp7381);
dim=nctemp7383;
struct tree* nctemp7385= sp;
nctempchar1* nctemp7387= descr;
int nctemp7390=CodeEs(nctemp7385,nctemp7387);
struct tree* nctemp7392= sp;
struct nctempchar1 *nctemp7396;
static struct nctempchar1 nctemp7397 = {{ 3}, (char*)".d\0"};
nctemp7396=&nctemp7397;
nctempchar1* nctemp7394= nctemp7396;
int nctemp7398=CodeEs(nctemp7392,nctemp7394);
struct tree* nctemp7400= sp;
struct nctempchar1 *nctemp7404;
static struct nctempchar1 nctemp7405 = {{ 2}, (char*)"[\0"};
nctemp7404=&nctemp7405;
nctempchar1* nctemp7402= nctemp7404;
int nctemp7406=CodeEs(nctemp7400,nctemp7402);
int nctemp7408= i;
int nctemp7410=CodeEd(nctemp7408);
struct tree* nctemp7412= sp;
struct nctempchar1 *nctemp7416;
static struct nctempchar1 nctemp7417 = {{ 3}, (char*)"]=\0"};
nctemp7416=&nctemp7417;
nctempchar1* nctemp7414= nctemp7416;
int nctemp7418=CodeEs(nctemp7412,nctemp7414);
struct tree* nctemp7420= sp;
nctempchar1* nctemp7422= dim;
int nctemp7425=CodeEs(nctemp7420,nctemp7422);
struct tree* nctemp7427= sp;
struct nctempchar1 *nctemp7431;
static struct nctempchar1 nctemp7432 = {{ 4}, (char*)";\n\0"};
nctemp7431=&nctemp7432;
nctempchar1* nctemp7429= nctemp7431;
int nctemp7433=CodeEs(nctemp7427,nctemp7429);
int nctemp7442 = i + 1;
i =nctemp7442;
struct tree* nctemp7447= p;
struct tree* nctemp7449=PtreeMvsister(nctemp7447);
p =nctemp7449;
}
int nctemp7450 = (p !=0);
nctemp7375=nctemp7450;}struct tree* nctemp7455= sp;
nctempchar1* nctemp7457= pointer;
int nctemp7460=CodeEs(nctemp7455,nctemp7457);
struct tree* nctemp7462= sp;
struct nctempchar1 *nctemp7466;
static struct nctempchar1 nctemp7467 = {{ 3}, (char*)"=&\0"};
nctemp7466=&nctemp7467;
nctempchar1* nctemp7464= nctemp7466;
int nctemp7468=CodeEs(nctemp7462,nctemp7464);
struct tree* nctemp7470= sp;
nctempchar1* nctemp7472= descr;
int nctemp7475=CodeEs(nctemp7470,nctemp7472);
struct tree* nctemp7477= sp;
struct nctempchar1 *nctemp7481;
static struct nctempchar1 nctemp7482 = {{ 4}, (char*)";\n\0"};
nctemp7481=&nctemp7482;
nctempchar1* nctemp7479= nctemp7481;
int nctemp7483=CodeEs(nctemp7477,nctemp7479);
}
else{
struct tree* nctemp7485= p;
nctempchar1* nctemp7487= type;
int nctemp7490=CodeEs(nctemp7485,nctemp7487);
struct tree* nctemp7492= p;
struct nctempchar1 *nctemp7496;
static struct nctempchar1 nctemp7497 = {{ 2}, (char*)" \0"};
nctemp7496=&nctemp7497;
nctempchar1* nctemp7494= nctemp7496;
int nctemp7498=CodeEs(nctemp7492,nctemp7494);
struct tree* nctemp7500= p;
nctempchar1* nctemp7502= pointer;
int nctemp7505=CodeEs(nctemp7500,nctemp7502);
struct tree* nctemp7507= p;
struct nctempchar1 *nctemp7511;
static struct nctempchar1 nctemp7512 = {{ 2}, (char*)"=\0"};
nctemp7511=&nctemp7512;
nctempchar1* nctemp7509= nctemp7511;
int nctemp7513=CodeEs(nctemp7507,nctemp7509);
struct tree* nctemp7515= p;
struct nctempchar1 *nctemp7519;
static struct nctempchar1 nctemp7520 = {{ 2}, (char*)"(\0"};
nctemp7519=&nctemp7520;
nctempchar1* nctemp7517= nctemp7519;
int nctemp7521=CodeEs(nctemp7515,nctemp7517);
struct tree* nctemp7523= p;
struct tree* nctemp7527= np;
nctempchar1* nctemp7529=PtreeGetype(nctemp7527);
nctempchar1* nctemp7525= nctemp7529;
int nctemp7530=CodeEs(nctemp7523,nctemp7525);
struct tree* nctemp7532= p;
struct nctempchar1 *nctemp7536;
static struct nctempchar1 nctemp7537 = {{ 3}, (char*)")(\0"};
nctemp7536=&nctemp7537;
nctempchar1* nctemp7534= nctemp7536;
int nctemp7538=CodeEs(nctemp7532,nctemp7534);
struct tree* nctemp7540= p;
nctempchar1* nctemp7542= expr;
int nctemp7545=CodeEs(nctemp7540,nctemp7542);
struct tree* nctemp7547= p;
struct nctempchar1 *nctemp7551;
static struct nctempchar1 nctemp7552 = {{ 5}, (char*)");\n\0"};
nctemp7551=&nctemp7552;
nctempchar1* nctemp7549= nctemp7551;
int nctemp7553=CodeEs(nctemp7547,nctemp7549);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7561= p;
nctempchar1* nctemp7563=PtreeGetname(nctemp7561);
nctempchar1* nctemp7559= nctemp7563;
struct nctempchar1 *nctemp7566;
static struct nctempchar1 nctemp7567 = {{ 11}, (char*)"identifier\0"};
nctemp7566=&nctemp7567;
nctempchar1* nctemp7564= nctemp7566;
int nctemp7568=LibeStrcmp(nctemp7559,nctemp7564);
int nctemp7556 = (nctemp7568 ==1);
if(nctemp7556)
{
struct tree* nctemp7571= p;
nctempchar1* nctemp7573=CodeIdent(nctemp7571);
return nctemp7573;
}
else{
struct tree* nctemp7579= p;
nctempchar1* nctemp7581=PtreeGetname(nctemp7579);
nctempchar1* nctemp7577= nctemp7581;
struct nctempchar1 *nctemp7584;
static struct nctempchar1 nctemp7585 = {{ 4}, (char*)"new\0"};
nctemp7584=&nctemp7585;
nctempchar1* nctemp7582= nctemp7584;
int nctemp7586=LibeStrcmp(nctemp7577,nctemp7582);
int nctemp7574 = (nctemp7586 ==1);
if(nctemp7574)
{
struct tree* nctemp7589= p;
nctempchar1* nctemp7591=CodeNew(nctemp7589);
return nctemp7591;
}
else{
struct tree* nctemp7597= p;
nctempchar1* nctemp7599=PtreeGetname(nctemp7597);
nctempchar1* nctemp7595= nctemp7599;
struct nctempchar1 *nctemp7602;
static struct nctempchar1 nctemp7603 = {{ 7}, (char*)"delete\0"};
nctemp7602=&nctemp7603;
nctempchar1* nctemp7600= nctemp7602;
int nctemp7604=LibeStrcmp(nctemp7595,nctemp7600);
int nctemp7592 = (nctemp7604 ==1);
if(nctemp7592)
{
struct tree* nctemp7607= p;
nctempchar1* nctemp7609=CodeDelete(nctemp7607);
return nctemp7609;
}
else{
struct tree* nctemp7615= p;
nctempchar1* nctemp7617=PtreeGetname(nctemp7615);
nctempchar1* nctemp7613= nctemp7617;
struct nctempchar1 *nctemp7620;
static struct nctempchar1 nctemp7621 = {{ 4}, (char*)"len\0"};
nctemp7620=&nctemp7621;
nctempchar1* nctemp7618= nctemp7620;
int nctemp7622=LibeStrcmp(nctemp7613,nctemp7618);
int nctemp7610 = (nctemp7622 ==1);
if(nctemp7610)
{
struct tree* nctemp7625= p;
nctempchar1* nctemp7627=CodeLen(nctemp7625);
return nctemp7627;
}
else{
struct tree* nctemp7633= p;
nctempchar1* nctemp7635=PtreeGetname(nctemp7633);
nctempchar1* nctemp7631= nctemp7635;
struct nctempchar1 *nctemp7638;
static struct nctempchar1 nctemp7639 = {{ 6}, (char*)"cmplx\0"};
nctemp7638=&nctemp7639;
nctempchar1* nctemp7636= nctemp7638;
int nctemp7640=LibeStrcmp(nctemp7631,nctemp7636);
int nctemp7628 = (nctemp7640 ==1);
if(nctemp7628)
{
struct tree* nctemp7643= p;
nctempchar1* nctemp7645=CodeCmplx(nctemp7643);
return nctemp7645;
}
else{
struct tree* nctemp7651= p;
nctempchar1* nctemp7653=PtreeGetname(nctemp7651);
nctempchar1* nctemp7649= nctemp7653;
struct nctempchar1 *nctemp7656;
static struct nctempchar1 nctemp7657 = {{ 3}, (char*)"im\0"};
nctemp7656=&nctemp7657;
nctempchar1* nctemp7654= nctemp7656;
int nctemp7658=LibeStrcmp(nctemp7649,nctemp7654);
int nctemp7646 = (nctemp7658 ==1);
if(nctemp7646)
{
struct tree* nctemp7661= p;
nctempchar1* nctemp7663=CodeIm(nctemp7661);
return nctemp7663;
}
else{
struct tree* nctemp7669= p;
nctempchar1* nctemp7671=PtreeGetname(nctemp7669);
nctempchar1* nctemp7667= nctemp7671;
struct nctempchar1 *nctemp7674;
static struct nctempchar1 nctemp7675 = {{ 3}, (char*)"re\0"};
nctemp7674=&nctemp7675;
nctempchar1* nctemp7672= nctemp7674;
int nctemp7676=LibeStrcmp(nctemp7667,nctemp7672);
int nctemp7664 = (nctemp7676 ==1);
if(nctemp7664)
{
struct tree* nctemp7679= p;
nctempchar1* nctemp7681=CodeRe(nctemp7679);
return nctemp7681;
}
else{
struct tree* nctemp7687= p;
nctempchar1* nctemp7689=PtreeGetname(nctemp7687);
nctempchar1* nctemp7685= nctemp7689;
struct nctempchar1 *nctemp7692;
static struct nctempchar1 nctemp7693 = {{ 6}, (char*)"fcall\0"};
nctemp7692=&nctemp7693;
nctempchar1* nctemp7690= nctemp7692;
int nctemp7694=LibeStrcmp(nctemp7685,nctemp7690);
int nctemp7682 = (nctemp7694 ==1);
if(nctemp7682)
{
struct tree* nctemp7697= p;
nctempchar1* nctemp7699=CodeFcall(nctemp7697);
return nctemp7699;
}
else{
struct tree* nctemp7705= p;
nctempchar1* nctemp7707=PtreeGetname(nctemp7705);
nctempchar1* nctemp7703= nctemp7707;
struct nctempchar1 *nctemp7710;
static struct nctempchar1 nctemp7711 = {{ 5}, (char*)"cast\0"};
nctemp7710=&nctemp7711;
nctempchar1* nctemp7708= nctemp7710;
int nctemp7712=LibeStrcmp(nctemp7703,nctemp7708);
int nctemp7700 = (nctemp7712 ==1);
if(nctemp7700)
{
struct tree* nctemp7715= p;
nctempchar1* nctemp7717=CodeCast(nctemp7715);
return nctemp7717;
}
else{
struct tree* nctemp7723= p;
nctempchar1* nctemp7725=PtreeGetname(nctemp7723);
nctempchar1* nctemp7721= nctemp7725;
struct nctempchar1 *nctemp7728;
static struct nctempchar1 nctemp7729 = {{ 10}, (char*)"iconstant\0"};
nctemp7728=&nctemp7729;
nctempchar1* nctemp7726= nctemp7728;
int nctemp7730=LibeStrcmp(nctemp7721,nctemp7726);
int nctemp7718 = (nctemp7730 ==1);
if(nctemp7718)
{
struct tree* nctemp7733= p;
nctempchar1* nctemp7735=PtreeGetdef(nctemp7733);
return nctemp7735;
}
else{
struct tree* nctemp7741= p;
nctempchar1* nctemp7743=PtreeGetname(nctemp7741);
nctempchar1* nctemp7739= nctemp7743;
struct nctempchar1 *nctemp7746;
static struct nctempchar1 nctemp7747 = {{ 10}, (char*)"rconstant\0"};
nctemp7746=&nctemp7747;
nctempchar1* nctemp7744= nctemp7746;
int nctemp7748=LibeStrcmp(nctemp7739,nctemp7744);
int nctemp7736 = (nctemp7748 ==1);
if(nctemp7736)
{
struct tree* nctemp7751= p;
nctempchar1* nctemp7753=PtreeGetdef(nctemp7751);
return nctemp7753;
}
else{
struct tree* nctemp7759= p;
nctempchar1* nctemp7761=PtreeGetname(nctemp7759);
nctempchar1* nctemp7757= nctemp7761;
struct nctempchar1 *nctemp7764;
static struct nctempchar1 nctemp7765 = {{ 10}, (char*)"sconstant\0"};
nctemp7764=&nctemp7765;
nctempchar1* nctemp7762= nctemp7764;
int nctemp7766=LibeStrcmp(nctemp7757,nctemp7762);
int nctemp7754 = (nctemp7766 ==1);
if(nctemp7754)
{
struct tree* nctemp7769= p;
nctempchar1* nctemp7771=CodeSconstant(nctemp7769);
return nctemp7771;
}
else{
struct tree* nctemp7773= p;
nctempchar1* nctemp7775=CodeBinexpr(nctemp7773);
return nctemp7775;
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
nctempchar1* nctemp7781=CodeMktemp();
tempr=nctemp7781;
struct tree* nctemp7787= p;
nctempchar1* nctemp7789=PtreeGetname(nctemp7787);
nctempchar1* nctemp7785= nctemp7789;
struct nctempchar1 *nctemp7792;
static struct nctempchar1 nctemp7793 = {{ 7}, (char*)"unexpr\0"};
nctemp7792=&nctemp7793;
nctempchar1* nctemp7790= nctemp7792;
int nctemp7794=LibeStrcmp(nctemp7785,nctemp7790);
int nctemp7782 = (nctemp7794 ==1);
if(nctemp7782)
{
struct tree* nctemp7801= p;
nctempchar1* nctemp7803=PtreeGetype(nctemp7801);
nctempchar1* nctemp7799= nctemp7803;
struct nctempchar1 *nctemp7806;
static struct nctempchar1 nctemp7807 = {{ 8}, (char*)"complex\0"};
nctemp7806=&nctemp7807;
nctempchar1* nctemp7804= nctemp7806;
int nctemp7808=LibeStrcmp(nctemp7799,nctemp7804);
int nctemp7796 = (nctemp7808 ==1);
if(nctemp7796)
{
struct tree* nctemp7817= p;
struct tree* nctemp7819=PtreeMvchild(nctemp7817);
struct tree* nctemp7815= nctemp7819;
nctempchar1* nctemp7820=CodePrimexpr(nctemp7815);
tmp=nctemp7820;
struct tree* nctemp7822= p;
struct nctempchar1 *nctemp7826;
static struct nctempchar1 nctemp7827 = {{ 4}, (char*)";\n\0"};
nctemp7826=&nctemp7827;
nctempchar1* nctemp7824= nctemp7826;
int nctemp7828=CodeEs(nctemp7822,nctemp7824);
struct tree* nctemp7830= p;
nctempchar1* nctemp7832= tempr;
int nctemp7835=CodeEs(nctemp7830,nctemp7832);
struct tree* nctemp7837= p;
struct nctempchar1 *nctemp7841;
static struct nctempchar1 nctemp7842 = {{ 3}, (char*)".r\0"};
nctemp7841=&nctemp7842;
nctempchar1* nctemp7839= nctemp7841;
int nctemp7843=CodeEs(nctemp7837,nctemp7839);
struct tree* nctemp7845= p;
struct nctempchar1 *nctemp7849;
static struct nctempchar1 nctemp7850 = {{ 4}, (char*)"= -\0"};
nctemp7849=&nctemp7850;
nctempchar1* nctemp7847= nctemp7849;
int nctemp7851=CodeEs(nctemp7845,nctemp7847);
struct tree* nctemp7853= p;
nctempchar1* nctemp7855= tmp;
int nctemp7858=CodeEs(nctemp7853,nctemp7855);
struct tree* nctemp7860= p;
struct nctempchar1 *nctemp7864;
static struct nctempchar1 nctemp7865 = {{ 3}, (char*)".r\0"};
nctemp7864=&nctemp7865;
nctempchar1* nctemp7862= nctemp7864;
int nctemp7866=CodeEs(nctemp7860,nctemp7862);
struct tree* nctemp7868= p;
struct nctempchar1 *nctemp7872;
static struct nctempchar1 nctemp7873 = {{ 4}, (char*)";\n\0"};
nctemp7872=&nctemp7873;
nctempchar1* nctemp7870= nctemp7872;
int nctemp7874=CodeEs(nctemp7868,nctemp7870);
struct tree* nctemp7876= p;
nctempchar1* nctemp7878= tempr;
int nctemp7881=CodeEs(nctemp7876,nctemp7878);
struct tree* nctemp7883= p;
struct nctempchar1 *nctemp7887;
static struct nctempchar1 nctemp7888 = {{ 3}, (char*)".i\0"};
nctemp7887=&nctemp7888;
nctempchar1* nctemp7885= nctemp7887;
int nctemp7889=CodeEs(nctemp7883,nctemp7885);
struct tree* nctemp7891= p;
struct nctempchar1 *nctemp7895;
static struct nctempchar1 nctemp7896 = {{ 4}, (char*)"= -\0"};
nctemp7895=&nctemp7896;
nctempchar1* nctemp7893= nctemp7895;
int nctemp7897=CodeEs(nctemp7891,nctemp7893);
struct tree* nctemp7899= p;
nctempchar1* nctemp7901= tmp;
int nctemp7904=CodeEs(nctemp7899,nctemp7901);
struct tree* nctemp7906= p;
struct nctempchar1 *nctemp7910;
static struct nctempchar1 nctemp7911 = {{ 3}, (char*)".i\0"};
nctemp7910=&nctemp7911;
nctempchar1* nctemp7908= nctemp7910;
int nctemp7912=CodeEs(nctemp7906,nctemp7908);
struct tree* nctemp7914= p;
struct nctempchar1 *nctemp7918;
static struct nctempchar1 nctemp7919 = {{ 4}, (char*)";\n\0"};
nctemp7918=&nctemp7919;
nctempchar1* nctemp7916= nctemp7918;
int nctemp7920=CodeEs(nctemp7914,nctemp7916);
return tempr;
}
else{
struct tree* nctemp7930= p;
struct tree* nctemp7932=PtreeMvchild(nctemp7930);
struct tree* nctemp7928= nctemp7932;
nctempchar1* nctemp7933=CodePrimexpr(nctemp7928);
tmp=nctemp7933;
struct tree* nctemp7935= p;
struct tree* nctemp7939= p;
nctempchar1* nctemp7941=PtreeGetype(nctemp7939);
nctempchar1* nctemp7937= nctemp7941;
int nctemp7942=CodeEs(nctemp7935,nctemp7937);
struct tree* nctemp7944= p;
struct nctempchar1 *nctemp7948;
static struct nctempchar1 nctemp7949 = {{ 2}, (char*)" \0"};
nctemp7948=&nctemp7949;
nctempchar1* nctemp7946= nctemp7948;
int nctemp7950=CodeEs(nctemp7944,nctemp7946);
struct tree* nctemp7952= p;
nctempchar1* nctemp7954= tempr;
int nctemp7957=CodeEs(nctemp7952,nctemp7954);
struct tree* nctemp7959= p;
struct nctempchar1 *nctemp7963;
static struct nctempchar1 nctemp7964 = {{ 4}, (char*)"= -\0"};
nctemp7963=&nctemp7964;
nctempchar1* nctemp7961= nctemp7963;
int nctemp7965=CodeEs(nctemp7959,nctemp7961);
struct tree* nctemp7967= p;
nctempchar1* nctemp7969= tmp;
int nctemp7972=CodeEs(nctemp7967,nctemp7969);
struct tree* nctemp7974= p;
struct nctempchar1 *nctemp7978;
static struct nctempchar1 nctemp7979 = {{ 4}, (char*)";\n\0"};
nctemp7978=&nctemp7979;
nctempchar1* nctemp7976= nctemp7978;
int nctemp7980=CodeEs(nctemp7974,nctemp7976);
return tempr;
}
}
else{
struct tree* nctemp7984= p;
nctempchar1* nctemp7986=CodePrimexpr(nctemp7984);
return nctemp7986;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7992= p;
nctempchar1* nctemp7994=PtreeGetype(nctemp7992);
type=nctemp7994;
nctempchar1* nctemp8000=CodeMktemp();
tempr=nctemp8000;
struct tree* nctemp8006= p;
nctempchar1* nctemp8008=PtreeGetdef(nctemp8006);
opr=nctemp8008;
nctempchar1* nctemp8012= type;
struct nctempchar1 *nctemp8017;
static struct nctempchar1 nctemp8018 = {{ 8}, (char*)"complex\0"};
nctemp8017=&nctemp8018;
nctempchar1* nctemp8015= nctemp8017;
int nctemp8019=LibeStrcmp(nctemp8012,nctemp8015);
int nctemp8009 = (nctemp8019 ==1);
if(nctemp8009)
{
nctempchar1* nctemp8027= opr;
struct nctempchar1 *nctemp8032;
static struct nctempchar1 nctemp8033 = {{ 2}, (char*)"+\0"};
nctemp8032=&nctemp8033;
nctempchar1* nctemp8030= nctemp8032;
int nctemp8034=LibeStrcmp(nctemp8027,nctemp8030);
int nctemp8024 = (nctemp8034 ==1);
nctempchar1* nctemp8040= opr;
struct nctempchar1 *nctemp8045;
static struct nctempchar1 nctemp8046 = {{ 2}, (char*)"-\0"};
nctemp8045=&nctemp8046;
nctempchar1* nctemp8043= nctemp8045;
int nctemp8047=LibeStrcmp(nctemp8040,nctemp8043);
int nctemp8037 = (nctemp8047 ==1);
int nctemp8021 = (nctemp8024 || nctemp8037);
if(nctemp8021)
{
struct tree* nctemp8050= p;
nctempchar1* nctemp8052= type;
int nctemp8055=CodeEs(nctemp8050,nctemp8052);
struct tree* nctemp8057= p;
struct nctempchar1 *nctemp8061;
static struct nctempchar1 nctemp8062 = {{ 2}, (char*)" \0"};
nctemp8061=&nctemp8062;
nctempchar1* nctemp8059= nctemp8061;
int nctemp8063=CodeEs(nctemp8057,nctemp8059);
struct tree* nctemp8065= p;
nctempchar1* nctemp8067= tempr;
int nctemp8070=CodeEs(nctemp8065,nctemp8067);
struct tree* nctemp8072= p;
struct nctempchar1 *nctemp8076;
static struct nctempchar1 nctemp8077 = {{ 3}, (char*)".r\0"};
nctemp8076=&nctemp8077;
nctempchar1* nctemp8074= nctemp8076;
int nctemp8078=CodeEs(nctemp8072,nctemp8074);
struct tree* nctemp8080= p;
struct nctempchar1 *nctemp8084;
static struct nctempchar1 nctemp8085 = {{ 4}, (char*)" = \0"};
nctemp8084=&nctemp8085;
nctempchar1* nctemp8082= nctemp8084;
int nctemp8086=CodeEs(nctemp8080,nctemp8082);
struct tree* nctemp8088= p;
nctempchar1* nctemp8090= lval;
int nctemp8093=CodeEs(nctemp8088,nctemp8090);
struct tree* nctemp8095= p;
struct nctempchar1 *nctemp8099;
static struct nctempchar1 nctemp8100 = {{ 3}, (char*)".r\0"};
nctemp8099=&nctemp8100;
nctempchar1* nctemp8097= nctemp8099;
int nctemp8101=CodeEs(nctemp8095,nctemp8097);
struct tree* nctemp8103= p;
struct nctempchar1 *nctemp8107;
static struct nctempchar1 nctemp8108 = {{ 2}, (char*)" \0"};
nctemp8107=&nctemp8108;
nctempchar1* nctemp8105= nctemp8107;
int nctemp8109=CodeEs(nctemp8103,nctemp8105);
struct tree* nctemp8111= p;
struct tree* nctemp8115= p;
nctempchar1* nctemp8117=PtreeGetdef(nctemp8115);
nctempchar1* nctemp8113= nctemp8117;
int nctemp8118=CodeEs(nctemp8111,nctemp8113);
struct tree* nctemp8120= p;
struct nctempchar1 *nctemp8124;
static struct nctempchar1 nctemp8125 = {{ 2}, (char*)" \0"};
nctemp8124=&nctemp8125;
nctempchar1* nctemp8122= nctemp8124;
int nctemp8126=CodeEs(nctemp8120,nctemp8122);
struct tree* nctemp8128= p;
nctempchar1* nctemp8130= rval;
int nctemp8133=CodeEs(nctemp8128,nctemp8130);
struct tree* nctemp8135= p;
struct nctempchar1 *nctemp8139;
static struct nctempchar1 nctemp8140 = {{ 3}, (char*)".r\0"};
nctemp8139=&nctemp8140;
nctempchar1* nctemp8137= nctemp8139;
int nctemp8141=CodeEs(nctemp8135,nctemp8137);
struct tree* nctemp8143= p;
struct nctempchar1 *nctemp8147;
static struct nctempchar1 nctemp8148 = {{ 4}, (char*)";\n\0"};
nctemp8147=&nctemp8148;
nctempchar1* nctemp8145= nctemp8147;
int nctemp8149=CodeEs(nctemp8143,nctemp8145);
struct tree* nctemp8151= p;
nctempchar1* nctemp8153= type;
int nctemp8156=CodeEs(nctemp8151,nctemp8153);
struct tree* nctemp8158= p;
struct nctempchar1 *nctemp8162;
static struct nctempchar1 nctemp8163 = {{ 2}, (char*)" \0"};
nctemp8162=&nctemp8163;
nctempchar1* nctemp8160= nctemp8162;
int nctemp8164=CodeEs(nctemp8158,nctemp8160);
struct tree* nctemp8166= p;
nctempchar1* nctemp8168= tempr;
int nctemp8171=CodeEs(nctemp8166,nctemp8168);
struct tree* nctemp8173= p;
struct nctempchar1 *nctemp8177;
static struct nctempchar1 nctemp8178 = {{ 3}, (char*)".i\0"};
nctemp8177=&nctemp8178;
nctempchar1* nctemp8175= nctemp8177;
int nctemp8179=CodeEs(nctemp8173,nctemp8175);
struct tree* nctemp8181= p;
struct nctempchar1 *nctemp8185;
static struct nctempchar1 nctemp8186 = {{ 4}, (char*)" = \0"};
nctemp8185=&nctemp8186;
nctempchar1* nctemp8183= nctemp8185;
int nctemp8187=CodeEs(nctemp8181,nctemp8183);
struct tree* nctemp8189= p;
nctempchar1* nctemp8191= lval;
int nctemp8194=CodeEs(nctemp8189,nctemp8191);
struct tree* nctemp8196= p;
struct nctempchar1 *nctemp8200;
static struct nctempchar1 nctemp8201 = {{ 3}, (char*)".i\0"};
nctemp8200=&nctemp8201;
nctempchar1* nctemp8198= nctemp8200;
int nctemp8202=CodeEs(nctemp8196,nctemp8198);
struct tree* nctemp8204= p;
struct nctempchar1 *nctemp8208;
static struct nctempchar1 nctemp8209 = {{ 2}, (char*)" \0"};
nctemp8208=&nctemp8209;
nctempchar1* nctemp8206= nctemp8208;
int nctemp8210=CodeEs(nctemp8204,nctemp8206);
struct tree* nctemp8212= p;
struct tree* nctemp8216= p;
nctempchar1* nctemp8218=PtreeGetdef(nctemp8216);
nctempchar1* nctemp8214= nctemp8218;
int nctemp8219=CodeEs(nctemp8212,nctemp8214);
struct tree* nctemp8221= p;
struct nctempchar1 *nctemp8225;
static struct nctempchar1 nctemp8226 = {{ 2}, (char*)" \0"};
nctemp8225=&nctemp8226;
nctempchar1* nctemp8223= nctemp8225;
int nctemp8227=CodeEs(nctemp8221,nctemp8223);
struct tree* nctemp8229= p;
nctempchar1* nctemp8231= rval;
int nctemp8234=CodeEs(nctemp8229,nctemp8231);
struct tree* nctemp8236= p;
struct nctempchar1 *nctemp8240;
static struct nctempchar1 nctemp8241 = {{ 3}, (char*)".i\0"};
nctemp8240=&nctemp8241;
nctempchar1* nctemp8238= nctemp8240;
int nctemp8242=CodeEs(nctemp8236,nctemp8238);
struct tree* nctemp8244= p;
struct nctempchar1 *nctemp8248;
static struct nctempchar1 nctemp8249 = {{ 4}, (char*)";\n\0"};
nctemp8248=&nctemp8249;
nctempchar1* nctemp8246= nctemp8248;
int nctemp8250=CodeEs(nctemp8244,nctemp8246);
}
else{
nctempchar1* nctemp8254= opr;
struct nctempchar1 *nctemp8259;
static struct nctempchar1 nctemp8260 = {{ 2}, (char*)"*\0"};
nctemp8259=&nctemp8260;
nctempchar1* nctemp8257= nctemp8259;
int nctemp8261=LibeStrcmp(nctemp8254,nctemp8257);
int nctemp8251 = (nctemp8261 ==1);
if(nctemp8251)
{
struct tree* nctemp8264= p;
nctempchar1* nctemp8266= type;
int nctemp8269=CodeEs(nctemp8264,nctemp8266);
struct tree* nctemp8271= p;
struct nctempchar1 *nctemp8275;
static struct nctempchar1 nctemp8276 = {{ 2}, (char*)" \0"};
nctemp8275=&nctemp8276;
nctempchar1* nctemp8273= nctemp8275;
int nctemp8277=CodeEs(nctemp8271,nctemp8273);
struct tree* nctemp8279= p;
nctempchar1* nctemp8281= tempr;
int nctemp8284=CodeEs(nctemp8279,nctemp8281);
struct tree* nctemp8286= p;
struct nctempchar1 *nctemp8290;
static struct nctempchar1 nctemp8291 = {{ 3}, (char*)".r\0"};
nctemp8290=&nctemp8291;
nctempchar1* nctemp8288= nctemp8290;
int nctemp8292=CodeEs(nctemp8286,nctemp8288);
struct tree* nctemp8294= p;
struct nctempchar1 *nctemp8298;
static struct nctempchar1 nctemp8299 = {{ 4}, (char*)" = \0"};
nctemp8298=&nctemp8299;
nctempchar1* nctemp8296= nctemp8298;
int nctemp8300=CodeEs(nctemp8294,nctemp8296);
struct tree* nctemp8302= p;
nctempchar1* nctemp8304= lval;
int nctemp8307=CodeEs(nctemp8302,nctemp8304);
struct tree* nctemp8309= p;
struct nctempchar1 *nctemp8313;
static struct nctempchar1 nctemp8314 = {{ 3}, (char*)".r\0"};
nctemp8313=&nctemp8314;
nctempchar1* nctemp8311= nctemp8313;
int nctemp8315=CodeEs(nctemp8309,nctemp8311);
struct tree* nctemp8317= p;
struct nctempchar1 *nctemp8321;
static struct nctempchar1 nctemp8322 = {{ 2}, (char*)"*\0"};
nctemp8321=&nctemp8322;
nctempchar1* nctemp8319= nctemp8321;
int nctemp8323=CodeEs(nctemp8317,nctemp8319);
struct tree* nctemp8325= p;
nctempchar1* nctemp8327= rval;
int nctemp8330=CodeEs(nctemp8325,nctemp8327);
struct tree* nctemp8332= p;
struct nctempchar1 *nctemp8336;
static struct nctempchar1 nctemp8337 = {{ 3}, (char*)".r\0"};
nctemp8336=&nctemp8337;
nctempchar1* nctemp8334= nctemp8336;
int nctemp8338=CodeEs(nctemp8332,nctemp8334);
struct tree* nctemp8340= p;
struct nctempchar1 *nctemp8344;
static struct nctempchar1 nctemp8345 = {{ 2}, (char*)"-\0"};
nctemp8344=&nctemp8345;
nctempchar1* nctemp8342= nctemp8344;
int nctemp8346=CodeEs(nctemp8340,nctemp8342);
struct tree* nctemp8348= p;
nctempchar1* nctemp8350= lval;
int nctemp8353=CodeEs(nctemp8348,nctemp8350);
struct tree* nctemp8355= p;
struct nctempchar1 *nctemp8359;
static struct nctempchar1 nctemp8360 = {{ 3}, (char*)".i\0"};
nctemp8359=&nctemp8360;
nctempchar1* nctemp8357= nctemp8359;
int nctemp8361=CodeEs(nctemp8355,nctemp8357);
struct tree* nctemp8363= p;
struct nctempchar1 *nctemp8367;
static struct nctempchar1 nctemp8368 = {{ 2}, (char*)"*\0"};
nctemp8367=&nctemp8368;
nctempchar1* nctemp8365= nctemp8367;
int nctemp8369=CodeEs(nctemp8363,nctemp8365);
struct tree* nctemp8371= p;
nctempchar1* nctemp8373= rval;
int nctemp8376=CodeEs(nctemp8371,nctemp8373);
struct tree* nctemp8378= p;
struct nctempchar1 *nctemp8382;
static struct nctempchar1 nctemp8383 = {{ 3}, (char*)".i\0"};
nctemp8382=&nctemp8383;
nctempchar1* nctemp8380= nctemp8382;
int nctemp8384=CodeEs(nctemp8378,nctemp8380);
struct tree* nctemp8386= p;
struct nctempchar1 *nctemp8390;
static struct nctempchar1 nctemp8391 = {{ 4}, (char*)";\n\0"};
nctemp8390=&nctemp8391;
nctempchar1* nctemp8388= nctemp8390;
int nctemp8392=CodeEs(nctemp8386,nctemp8388);
struct tree* nctemp8394= p;
nctempchar1* nctemp8396= type;
int nctemp8399=CodeEs(nctemp8394,nctemp8396);
struct tree* nctemp8401= p;
struct nctempchar1 *nctemp8405;
static struct nctempchar1 nctemp8406 = {{ 2}, (char*)" \0"};
nctemp8405=&nctemp8406;
nctempchar1* nctemp8403= nctemp8405;
int nctemp8407=CodeEs(nctemp8401,nctemp8403);
struct tree* nctemp8409= p;
nctempchar1* nctemp8411= tempr;
int nctemp8414=CodeEs(nctemp8409,nctemp8411);
struct tree* nctemp8416= p;
struct nctempchar1 *nctemp8420;
static struct nctempchar1 nctemp8421 = {{ 3}, (char*)".i\0"};
nctemp8420=&nctemp8421;
nctempchar1* nctemp8418= nctemp8420;
int nctemp8422=CodeEs(nctemp8416,nctemp8418);
struct tree* nctemp8424= p;
struct nctempchar1 *nctemp8428;
static struct nctempchar1 nctemp8429 = {{ 4}, (char*)" = \0"};
nctemp8428=&nctemp8429;
nctempchar1* nctemp8426= nctemp8428;
int nctemp8430=CodeEs(nctemp8424,nctemp8426);
struct tree* nctemp8432= p;
nctempchar1* nctemp8434= lval;
int nctemp8437=CodeEs(nctemp8432,nctemp8434);
struct tree* nctemp8439= p;
struct nctempchar1 *nctemp8443;
static struct nctempchar1 nctemp8444 = {{ 3}, (char*)".i\0"};
nctemp8443=&nctemp8444;
nctempchar1* nctemp8441= nctemp8443;
int nctemp8445=CodeEs(nctemp8439,nctemp8441);
struct tree* nctemp8447= p;
struct nctempchar1 *nctemp8451;
static struct nctempchar1 nctemp8452 = {{ 2}, (char*)"*\0"};
nctemp8451=&nctemp8452;
nctempchar1* nctemp8449= nctemp8451;
int nctemp8453=CodeEs(nctemp8447,nctemp8449);
struct tree* nctemp8455= p;
nctempchar1* nctemp8457= rval;
int nctemp8460=CodeEs(nctemp8455,nctemp8457);
struct tree* nctemp8462= p;
struct nctempchar1 *nctemp8466;
static struct nctempchar1 nctemp8467 = {{ 3}, (char*)".r\0"};
nctemp8466=&nctemp8467;
nctempchar1* nctemp8464= nctemp8466;
int nctemp8468=CodeEs(nctemp8462,nctemp8464);
struct tree* nctemp8470= p;
struct nctempchar1 *nctemp8474;
static struct nctempchar1 nctemp8475 = {{ 2}, (char*)"+\0"};
nctemp8474=&nctemp8475;
nctempchar1* nctemp8472= nctemp8474;
int nctemp8476=CodeEs(nctemp8470,nctemp8472);
struct tree* nctemp8478= p;
nctempchar1* nctemp8480= lval;
int nctemp8483=CodeEs(nctemp8478,nctemp8480);
struct tree* nctemp8485= p;
struct nctempchar1 *nctemp8489;
static struct nctempchar1 nctemp8490 = {{ 3}, (char*)".r\0"};
nctemp8489=&nctemp8490;
nctempchar1* nctemp8487= nctemp8489;
int nctemp8491=CodeEs(nctemp8485,nctemp8487);
struct tree* nctemp8493= p;
struct nctempchar1 *nctemp8497;
static struct nctempchar1 nctemp8498 = {{ 2}, (char*)"*\0"};
nctemp8497=&nctemp8498;
nctempchar1* nctemp8495= nctemp8497;
int nctemp8499=CodeEs(nctemp8493,nctemp8495);
struct tree* nctemp8501= p;
nctempchar1* nctemp8503= rval;
int nctemp8506=CodeEs(nctemp8501,nctemp8503);
struct tree* nctemp8508= p;
struct nctempchar1 *nctemp8512;
static struct nctempchar1 nctemp8513 = {{ 3}, (char*)".i\0"};
nctemp8512=&nctemp8513;
nctempchar1* nctemp8510= nctemp8512;
int nctemp8514=CodeEs(nctemp8508,nctemp8510);
struct tree* nctemp8516= p;
struct nctempchar1 *nctemp8520;
static struct nctempchar1 nctemp8521 = {{ 4}, (char*)";\n\0"};
nctemp8520=&nctemp8521;
nctempchar1* nctemp8518= nctemp8520;
int nctemp8522=CodeEs(nctemp8516,nctemp8518);
}
else{
nctempchar1* nctemp8526= opr;
struct nctempchar1 *nctemp8531;
static struct nctempchar1 nctemp8532 = {{ 2}, (char*)"/\0"};
nctemp8531=&nctemp8532;
nctempchar1* nctemp8529= nctemp8531;
int nctemp8533=LibeStrcmp(nctemp8526,nctemp8529);
int nctemp8523 = (nctemp8533 ==1);
if(nctemp8523)
{
struct tree* nctemp8536= p;
nctempchar1* nctemp8538= type;
int nctemp8541=CodeEs(nctemp8536,nctemp8538);
struct tree* nctemp8543= p;
struct nctempchar1 *nctemp8547;
static struct nctempchar1 nctemp8548 = {{ 2}, (char*)" \0"};
nctemp8547=&nctemp8548;
nctempchar1* nctemp8545= nctemp8547;
int nctemp8549=CodeEs(nctemp8543,nctemp8545);
struct tree* nctemp8551= p;
nctempchar1* nctemp8553= tempr;
int nctemp8556=CodeEs(nctemp8551,nctemp8553);
struct tree* nctemp8558= p;
struct nctempchar1 *nctemp8562;
static struct nctempchar1 nctemp8563 = {{ 3}, (char*)".r\0"};
nctemp8562=&nctemp8563;
nctempchar1* nctemp8560= nctemp8562;
int nctemp8564=CodeEs(nctemp8558,nctemp8560);
struct tree* nctemp8566= p;
struct nctempchar1 *nctemp8570;
static struct nctempchar1 nctemp8571 = {{ 4}, (char*)" = \0"};
nctemp8570=&nctemp8571;
nctempchar1* nctemp8568= nctemp8570;
int nctemp8572=CodeEs(nctemp8566,nctemp8568);
struct tree* nctemp8574= p;
struct nctempchar1 *nctemp8578;
static struct nctempchar1 nctemp8579 = {{ 2}, (char*)"(\0"};
nctemp8578=&nctemp8579;
nctempchar1* nctemp8576= nctemp8578;
int nctemp8580=CodeEs(nctemp8574,nctemp8576);
struct tree* nctemp8582= p;
nctempchar1* nctemp8584= lval;
int nctemp8587=CodeEs(nctemp8582,nctemp8584);
struct tree* nctemp8589= p;
struct nctempchar1 *nctemp8593;
static struct nctempchar1 nctemp8594 = {{ 3}, (char*)".r\0"};
nctemp8593=&nctemp8594;
nctempchar1* nctemp8591= nctemp8593;
int nctemp8595=CodeEs(nctemp8589,nctemp8591);
struct tree* nctemp8597= p;
struct nctempchar1 *nctemp8601;
static struct nctempchar1 nctemp8602 = {{ 2}, (char*)"*\0"};
nctemp8601=&nctemp8602;
nctempchar1* nctemp8599= nctemp8601;
int nctemp8603=CodeEs(nctemp8597,nctemp8599);
struct tree* nctemp8605= p;
nctempchar1* nctemp8607= rval;
int nctemp8610=CodeEs(nctemp8605,nctemp8607);
struct tree* nctemp8612= p;
struct nctempchar1 *nctemp8616;
static struct nctempchar1 nctemp8617 = {{ 3}, (char*)".r\0"};
nctemp8616=&nctemp8617;
nctempchar1* nctemp8614= nctemp8616;
int nctemp8618=CodeEs(nctemp8612,nctemp8614);
struct tree* nctemp8620= p;
struct nctempchar1 *nctemp8624;
static struct nctempchar1 nctemp8625 = {{ 2}, (char*)"+\0"};
nctemp8624=&nctemp8625;
nctempchar1* nctemp8622= nctemp8624;
int nctemp8626=CodeEs(nctemp8620,nctemp8622);
struct tree* nctemp8628= p;
nctempchar1* nctemp8630= lval;
int nctemp8633=CodeEs(nctemp8628,nctemp8630);
struct tree* nctemp8635= p;
struct nctempchar1 *nctemp8639;
static struct nctempchar1 nctemp8640 = {{ 3}, (char*)".i\0"};
nctemp8639=&nctemp8640;
nctempchar1* nctemp8637= nctemp8639;
int nctemp8641=CodeEs(nctemp8635,nctemp8637);
struct tree* nctemp8643= p;
struct nctempchar1 *nctemp8647;
static struct nctempchar1 nctemp8648 = {{ 2}, (char*)"*\0"};
nctemp8647=&nctemp8648;
nctempchar1* nctemp8645= nctemp8647;
int nctemp8649=CodeEs(nctemp8643,nctemp8645);
struct tree* nctemp8651= p;
nctempchar1* nctemp8653= rval;
int nctemp8656=CodeEs(nctemp8651,nctemp8653);
struct tree* nctemp8658= p;
struct nctempchar1 *nctemp8662;
static struct nctempchar1 nctemp8663 = {{ 3}, (char*)".i\0"};
nctemp8662=&nctemp8663;
nctempchar1* nctemp8660= nctemp8662;
int nctemp8664=CodeEs(nctemp8658,nctemp8660);
struct tree* nctemp8666= p;
struct nctempchar1 *nctemp8670;
static struct nctempchar1 nctemp8671 = {{ 4}, (char*)")/(\0"};
nctemp8670=&nctemp8671;
nctempchar1* nctemp8668= nctemp8670;
int nctemp8672=CodeEs(nctemp8666,nctemp8668);
struct tree* nctemp8674= p;
nctempchar1* nctemp8676= rval;
int nctemp8679=CodeEs(nctemp8674,nctemp8676);
struct tree* nctemp8681= p;
struct nctempchar1 *nctemp8685;
static struct nctempchar1 nctemp8686 = {{ 3}, (char*)".r\0"};
nctemp8685=&nctemp8686;
nctempchar1* nctemp8683= nctemp8685;
int nctemp8687=CodeEs(nctemp8681,nctemp8683);
struct tree* nctemp8689= p;
struct nctempchar1 *nctemp8693;
static struct nctempchar1 nctemp8694 = {{ 2}, (char*)"*\0"};
nctemp8693=&nctemp8694;
nctempchar1* nctemp8691= nctemp8693;
int nctemp8695=CodeEs(nctemp8689,nctemp8691);
struct tree* nctemp8697= p;
nctempchar1* nctemp8699= rval;
int nctemp8702=CodeEs(nctemp8697,nctemp8699);
struct tree* nctemp8704= p;
struct nctempchar1 *nctemp8708;
static struct nctempchar1 nctemp8709 = {{ 3}, (char*)".r\0"};
nctemp8708=&nctemp8709;
nctempchar1* nctemp8706= nctemp8708;
int nctemp8710=CodeEs(nctemp8704,nctemp8706);
struct tree* nctemp8712= p;
struct nctempchar1 *nctemp8716;
static struct nctempchar1 nctemp8717 = {{ 2}, (char*)"+\0"};
nctemp8716=&nctemp8717;
nctempchar1* nctemp8714= nctemp8716;
int nctemp8718=CodeEs(nctemp8712,nctemp8714);
struct tree* nctemp8720= p;
nctempchar1* nctemp8722= rval;
int nctemp8725=CodeEs(nctemp8720,nctemp8722);
struct tree* nctemp8727= p;
struct nctempchar1 *nctemp8731;
static struct nctempchar1 nctemp8732 = {{ 3}, (char*)".i\0"};
nctemp8731=&nctemp8732;
nctempchar1* nctemp8729= nctemp8731;
int nctemp8733=CodeEs(nctemp8727,nctemp8729);
struct tree* nctemp8735= p;
struct nctempchar1 *nctemp8739;
static struct nctempchar1 nctemp8740 = {{ 2}, (char*)"*\0"};
nctemp8739=&nctemp8740;
nctempchar1* nctemp8737= nctemp8739;
int nctemp8741=CodeEs(nctemp8735,nctemp8737);
struct tree* nctemp8743= p;
nctempchar1* nctemp8745= rval;
int nctemp8748=CodeEs(nctemp8743,nctemp8745);
struct tree* nctemp8750= p;
struct nctempchar1 *nctemp8754;
static struct nctempchar1 nctemp8755 = {{ 3}, (char*)".i\0"};
nctemp8754=&nctemp8755;
nctempchar1* nctemp8752= nctemp8754;
int nctemp8756=CodeEs(nctemp8750,nctemp8752);
struct tree* nctemp8758= p;
struct nctempchar1 *nctemp8762;
static struct nctempchar1 nctemp8763 = {{ 5}, (char*)");\n\0"};
nctemp8762=&nctemp8763;
nctempchar1* nctemp8760= nctemp8762;
int nctemp8764=CodeEs(nctemp8758,nctemp8760);
struct tree* nctemp8766= p;
nctempchar1* nctemp8768= type;
int nctemp8771=CodeEs(nctemp8766,nctemp8768);
struct tree* nctemp8773= p;
struct nctempchar1 *nctemp8777;
static struct nctempchar1 nctemp8778 = {{ 2}, (char*)" \0"};
nctemp8777=&nctemp8778;
nctempchar1* nctemp8775= nctemp8777;
int nctemp8779=CodeEs(nctemp8773,nctemp8775);
struct tree* nctemp8781= p;
nctempchar1* nctemp8783= tempr;
int nctemp8786=CodeEs(nctemp8781,nctemp8783);
struct tree* nctemp8788= p;
struct nctempchar1 *nctemp8792;
static struct nctempchar1 nctemp8793 = {{ 3}, (char*)".i\0"};
nctemp8792=&nctemp8793;
nctempchar1* nctemp8790= nctemp8792;
int nctemp8794=CodeEs(nctemp8788,nctemp8790);
struct tree* nctemp8796= p;
struct nctempchar1 *nctemp8800;
static struct nctempchar1 nctemp8801 = {{ 4}, (char*)" = \0"};
nctemp8800=&nctemp8801;
nctempchar1* nctemp8798= nctemp8800;
int nctemp8802=CodeEs(nctemp8796,nctemp8798);
struct tree* nctemp8804= p;
struct nctempchar1 *nctemp8808;
static struct nctempchar1 nctemp8809 = {{ 2}, (char*)"(\0"};
nctemp8808=&nctemp8809;
nctempchar1* nctemp8806= nctemp8808;
int nctemp8810=CodeEs(nctemp8804,nctemp8806);
struct tree* nctemp8812= p;
nctempchar1* nctemp8814= lval;
int nctemp8817=CodeEs(nctemp8812,nctemp8814);
struct tree* nctemp8819= p;
struct nctempchar1 *nctemp8823;
static struct nctempchar1 nctemp8824 = {{ 3}, (char*)".i\0"};
nctemp8823=&nctemp8824;
nctempchar1* nctemp8821= nctemp8823;
int nctemp8825=CodeEs(nctemp8819,nctemp8821);
struct tree* nctemp8827= p;
struct nctempchar1 *nctemp8831;
static struct nctempchar1 nctemp8832 = {{ 2}, (char*)"*\0"};
nctemp8831=&nctemp8832;
nctempchar1* nctemp8829= nctemp8831;
int nctemp8833=CodeEs(nctemp8827,nctemp8829);
struct tree* nctemp8835= p;
nctempchar1* nctemp8837= rval;
int nctemp8840=CodeEs(nctemp8835,nctemp8837);
struct tree* nctemp8842= p;
struct nctempchar1 *nctemp8846;
static struct nctempchar1 nctemp8847 = {{ 3}, (char*)".r\0"};
nctemp8846=&nctemp8847;
nctempchar1* nctemp8844= nctemp8846;
int nctemp8848=CodeEs(nctemp8842,nctemp8844);
struct tree* nctemp8850= p;
struct nctempchar1 *nctemp8854;
static struct nctempchar1 nctemp8855 = {{ 2}, (char*)"-\0"};
nctemp8854=&nctemp8855;
nctempchar1* nctemp8852= nctemp8854;
int nctemp8856=CodeEs(nctemp8850,nctemp8852);
struct tree* nctemp8858= p;
nctempchar1* nctemp8860= lval;
int nctemp8863=CodeEs(nctemp8858,nctemp8860);
struct tree* nctemp8865= p;
struct nctempchar1 *nctemp8869;
static struct nctempchar1 nctemp8870 = {{ 3}, (char*)".r\0"};
nctemp8869=&nctemp8870;
nctempchar1* nctemp8867= nctemp8869;
int nctemp8871=CodeEs(nctemp8865,nctemp8867);
struct tree* nctemp8873= p;
struct nctempchar1 *nctemp8877;
static struct nctempchar1 nctemp8878 = {{ 2}, (char*)"*\0"};
nctemp8877=&nctemp8878;
nctempchar1* nctemp8875= nctemp8877;
int nctemp8879=CodeEs(nctemp8873,nctemp8875);
struct tree* nctemp8881= p;
nctempchar1* nctemp8883= rval;
int nctemp8886=CodeEs(nctemp8881,nctemp8883);
struct tree* nctemp8888= p;
struct nctempchar1 *nctemp8892;
static struct nctempchar1 nctemp8893 = {{ 3}, (char*)".i\0"};
nctemp8892=&nctemp8893;
nctempchar1* nctemp8890= nctemp8892;
int nctemp8894=CodeEs(nctemp8888,nctemp8890);
struct tree* nctemp8896= p;
struct nctempchar1 *nctemp8900;
static struct nctempchar1 nctemp8901 = {{ 4}, (char*)")/(\0"};
nctemp8900=&nctemp8901;
nctempchar1* nctemp8898= nctemp8900;
int nctemp8902=CodeEs(nctemp8896,nctemp8898);
struct tree* nctemp8904= p;
nctempchar1* nctemp8906= rval;
int nctemp8909=CodeEs(nctemp8904,nctemp8906);
struct tree* nctemp8911= p;
struct nctempchar1 *nctemp8915;
static struct nctempchar1 nctemp8916 = {{ 3}, (char*)".r\0"};
nctemp8915=&nctemp8916;
nctempchar1* nctemp8913= nctemp8915;
int nctemp8917=CodeEs(nctemp8911,nctemp8913);
struct tree* nctemp8919= p;
struct nctempchar1 *nctemp8923;
static struct nctempchar1 nctemp8924 = {{ 2}, (char*)"*\0"};
nctemp8923=&nctemp8924;
nctempchar1* nctemp8921= nctemp8923;
int nctemp8925=CodeEs(nctemp8919,nctemp8921);
struct tree* nctemp8927= p;
nctempchar1* nctemp8929= rval;
int nctemp8932=CodeEs(nctemp8927,nctemp8929);
struct tree* nctemp8934= p;
struct nctempchar1 *nctemp8938;
static struct nctempchar1 nctemp8939 = {{ 3}, (char*)".r\0"};
nctemp8938=&nctemp8939;
nctempchar1* nctemp8936= nctemp8938;
int nctemp8940=CodeEs(nctemp8934,nctemp8936);
struct tree* nctemp8942= p;
struct nctempchar1 *nctemp8946;
static struct nctempchar1 nctemp8947 = {{ 2}, (char*)"+\0"};
nctemp8946=&nctemp8947;
nctempchar1* nctemp8944= nctemp8946;
int nctemp8948=CodeEs(nctemp8942,nctemp8944);
struct tree* nctemp8950= p;
nctempchar1* nctemp8952= rval;
int nctemp8955=CodeEs(nctemp8950,nctemp8952);
struct tree* nctemp8957= p;
struct nctempchar1 *nctemp8961;
static struct nctempchar1 nctemp8962 = {{ 3}, (char*)".i\0"};
nctemp8961=&nctemp8962;
nctempchar1* nctemp8959= nctemp8961;
int nctemp8963=CodeEs(nctemp8957,nctemp8959);
struct tree* nctemp8965= p;
struct nctempchar1 *nctemp8969;
static struct nctempchar1 nctemp8970 = {{ 2}, (char*)"*\0"};
nctemp8969=&nctemp8970;
nctempchar1* nctemp8967= nctemp8969;
int nctemp8971=CodeEs(nctemp8965,nctemp8967);
struct tree* nctemp8973= p;
nctempchar1* nctemp8975= rval;
int nctemp8978=CodeEs(nctemp8973,nctemp8975);
struct tree* nctemp8980= p;
struct nctempchar1 *nctemp8984;
static struct nctempchar1 nctemp8985 = {{ 3}, (char*)".i\0"};
nctemp8984=&nctemp8985;
nctempchar1* nctemp8982= nctemp8984;
int nctemp8986=CodeEs(nctemp8980,nctemp8982);
struct tree* nctemp8988= p;
struct nctempchar1 *nctemp8992;
static struct nctempchar1 nctemp8993 = {{ 5}, (char*)");\n\0"};
nctemp8992=&nctemp8993;
nctempchar1* nctemp8990= nctemp8992;
int nctemp8994=CodeEs(nctemp8988,nctemp8990);
}
}
}
}
else{
struct tree* nctemp8996= p;
nctempchar1* nctemp8998= type;
int nctemp9001=CodeEs(nctemp8996,nctemp8998);
struct tree* nctemp9003= p;
struct nctempchar1 *nctemp9007;
static struct nctempchar1 nctemp9008 = {{ 2}, (char*)" \0"};
nctemp9007=&nctemp9008;
nctempchar1* nctemp9005= nctemp9007;
int nctemp9009=CodeEs(nctemp9003,nctemp9005);
struct tree* nctemp9011= p;
nctempchar1* nctemp9013= tempr;
int nctemp9016=CodeEs(nctemp9011,nctemp9013);
struct tree* nctemp9018= p;
struct nctempchar1 *nctemp9022;
static struct nctempchar1 nctemp9023 = {{ 4}, (char*)" = \0"};
nctemp9022=&nctemp9023;
nctempchar1* nctemp9020= nctemp9022;
int nctemp9024=CodeEs(nctemp9018,nctemp9020);
struct tree* nctemp9026= p;
nctempchar1* nctemp9028= lval;
int nctemp9031=CodeEs(nctemp9026,nctemp9028);
struct tree* nctemp9033= p;
struct nctempchar1 *nctemp9037;
static struct nctempchar1 nctemp9038 = {{ 2}, (char*)" \0"};
nctemp9037=&nctemp9038;
nctempchar1* nctemp9035= nctemp9037;
int nctemp9039=CodeEs(nctemp9033,nctemp9035);
struct tree* nctemp9041= p;
struct tree* nctemp9045= p;
nctempchar1* nctemp9047=PtreeGetdef(nctemp9045);
nctempchar1* nctemp9043= nctemp9047;
int nctemp9048=CodeEs(nctemp9041,nctemp9043);
struct tree* nctemp9050= p;
struct nctempchar1 *nctemp9054;
static struct nctempchar1 nctemp9055 = {{ 2}, (char*)" \0"};
nctemp9054=&nctemp9055;
nctempchar1* nctemp9052= nctemp9054;
int nctemp9056=CodeEs(nctemp9050,nctemp9052);
struct tree* nctemp9058= p;
nctempchar1* nctemp9060= rval;
int nctemp9063=CodeEs(nctemp9058,nctemp9060);
struct tree* nctemp9065= p;
struct nctempchar1 *nctemp9069;
static struct nctempchar1 nctemp9070 = {{ 4}, (char*)";\n\0"};
nctemp9069=&nctemp9070;
nctempchar1* nctemp9067= nctemp9069;
int nctemp9071=CodeEs(nctemp9065,nctemp9067);
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
struct tree* nctemp9079= p;
nctempchar1* nctemp9081=PtreeGetname(nctemp9079);
nctempchar1* nctemp9077= nctemp9081;
struct nctempchar1 *nctemp9084;
static struct nctempchar1 nctemp9085 = {{ 8}, (char*)"binexpr\0"};
nctemp9084=&nctemp9085;
nctempchar1* nctemp9082= nctemp9084;
int nctemp9086=LibeStrcmp(nctemp9077,nctemp9082);
int nctemp9074 = (nctemp9086 ==1);
if(nctemp9074)
{
struct tree* nctemp9093= p;
nctempchar1* nctemp9095=PtreeGetype(nctemp9093);
type=nctemp9095;
nctempchar1* nctemp9101=CodeMktemp();
tempr=nctemp9101;
nctempchar1* nctemp9107=CodeMktemp();
tempi=nctemp9107;
struct tree* nctemp9112= p;
struct tree* nctemp9114=PtreeMvchild(nctemp9112);
np =nctemp9114;
struct tree* nctemp9120= np;
nctempchar1* nctemp9122=CodeUnexpr(nctemp9120);
lval=nctemp9122;
struct tree* nctemp9130= np;
struct tree* nctemp9132=PtreeMvsister(nctemp9130);
struct tree* nctemp9128= nctemp9132;
nctempchar1* nctemp9133=CodeUnexpr(nctemp9128);
rval=nctemp9133;
struct tree* nctemp9148= p;
nctempchar1* nctemp9150=PtreeGetdef(nctemp9148);
nctempchar1* nctemp9146= nctemp9150;
struct nctempchar1 *nctemp9153;
static struct nctempchar1 nctemp9154 = {{ 2}, (char*)"+\0"};
nctemp9153=&nctemp9154;
nctempchar1* nctemp9151= nctemp9153;
int nctemp9155=LibeStrcmp(nctemp9146,nctemp9151);
int nctemp9143 = (nctemp9155 ==1);
struct tree* nctemp9163= p;
nctempchar1* nctemp9165=PtreeGetdef(nctemp9163);
nctempchar1* nctemp9161= nctemp9165;
struct nctempchar1 *nctemp9168;
static struct nctempchar1 nctemp9169 = {{ 2}, (char*)"-\0"};
nctemp9168=&nctemp9169;
nctempchar1* nctemp9166= nctemp9168;
int nctemp9170=LibeStrcmp(nctemp9161,nctemp9166);
int nctemp9158 = (nctemp9170 ==1);
int nctemp9140 = (nctemp9143 || nctemp9158);
struct tree* nctemp9178= p;
nctempchar1* nctemp9180=PtreeGetdef(nctemp9178);
nctempchar1* nctemp9176= nctemp9180;
struct nctempchar1 *nctemp9183;
static struct nctempchar1 nctemp9184 = {{ 2}, (char*)"*\0"};
nctemp9183=&nctemp9184;
nctempchar1* nctemp9181= nctemp9183;
int nctemp9185=LibeStrcmp(nctemp9176,nctemp9181);
int nctemp9173 = (nctemp9185 ==1);
int nctemp9137 = (nctemp9140 || nctemp9173);
struct tree* nctemp9193= p;
nctempchar1* nctemp9195=PtreeGetdef(nctemp9193);
nctempchar1* nctemp9191= nctemp9195;
struct nctempchar1 *nctemp9198;
static struct nctempchar1 nctemp9199 = {{ 2}, (char*)"/\0"};
nctemp9198=&nctemp9199;
nctempchar1* nctemp9196= nctemp9198;
int nctemp9200=LibeStrcmp(nctemp9191,nctemp9196);
int nctemp9188 = (nctemp9200 ==1);
int nctemp9134 = (nctemp9137 || nctemp9188);
if(nctemp9134)
{
struct tree* nctemp9203= p;
nctempchar1* nctemp9205= lval;
nctempchar1* nctemp9208= rval;
nctempchar1* nctemp9211=CodeAddexpr(nctemp9203,nctemp9205,nctemp9208);
return nctemp9211;
}
else{
struct tree* nctemp9217= p;
nctempchar1* nctemp9219=PtreeGetdef(nctemp9217);
nctempchar1* nctemp9215= nctemp9219;
struct nctempchar1 *nctemp9222;
static struct nctempchar1 nctemp9223 = {{ 2}, (char*)"=\0"};
nctemp9222=&nctemp9223;
nctempchar1* nctemp9220= nctemp9222;
int nctemp9224=LibeStrcmp(nctemp9215,nctemp9220);
int nctemp9212 = (nctemp9224 ==1);
if(nctemp9212)
{
struct tree* nctemp9237= p;
nctempchar1* nctemp9239=PtreeGetype(nctemp9237);
nctempchar1* nctemp9235= nctemp9239;
struct nctempchar1 *nctemp9242;
static struct nctempchar1 nctemp9243 = {{ 8}, (char*)"complex\0"};
nctemp9242=&nctemp9243;
nctempchar1* nctemp9240= nctemp9242;
int nctemp9244=LibeStrcmp(nctemp9235,nctemp9240);
int nctemp9232 = (nctemp9244 ==1);
struct tree* nctemp9252= p;
nctempchar1* nctemp9254=PtreeGetref(nctemp9252);
nctempchar1* nctemp9250= nctemp9254;
struct nctempchar1 *nctemp9257;
static struct nctempchar1 nctemp9258 = {{ 5}, (char*)"aref\0"};
nctemp9257=&nctemp9258;
nctempchar1* nctemp9255= nctemp9257;
int nctemp9259=LibeStrcmp(nctemp9250,nctemp9255);
int nctemp9247 = (nctemp9259 ==0);
int nctemp9229 = (nctemp9232 && nctemp9247);
struct tree* nctemp9267= p;
nctempchar1* nctemp9269=PtreeGetref(nctemp9267);
nctempchar1* nctemp9265= nctemp9269;
struct nctempchar1 *nctemp9272;
static struct nctempchar1 nctemp9273 = {{ 5}, (char*)"sref\0"};
nctemp9272=&nctemp9273;
nctempchar1* nctemp9270= nctemp9272;
int nctemp9274=LibeStrcmp(nctemp9265,nctemp9270);
int nctemp9262 = (nctemp9274 ==0);
int nctemp9226 = (nctemp9229 && nctemp9262);
if(nctemp9226)
{
struct tree* nctemp9277= p;
nctempchar1* nctemp9279= lval;
int nctemp9282=CodeEs(nctemp9277,nctemp9279);
struct tree* nctemp9284= p;
struct nctempchar1 *nctemp9288;
static struct nctempchar1 nctemp9289 = {{ 4}, (char*)".r \0"};
nctemp9288=&nctemp9289;
nctempchar1* nctemp9286= nctemp9288;
int nctemp9290=CodeEs(nctemp9284,nctemp9286);
struct tree* nctemp9292= p;
struct nctempchar1 *nctemp9296;
static struct nctempchar1 nctemp9297 = {{ 2}, (char*)"=\0"};
nctemp9296=&nctemp9297;
nctempchar1* nctemp9294= nctemp9296;
int nctemp9298=CodeEs(nctemp9292,nctemp9294);
struct tree* nctemp9300= p;
nctempchar1* nctemp9302= rval;
int nctemp9305=CodeEs(nctemp9300,nctemp9302);
struct tree* nctemp9307= p;
struct nctempchar1 *nctemp9311;
static struct nctempchar1 nctemp9312 = {{ 3}, (char*)".r\0"};
nctemp9311=&nctemp9312;
nctempchar1* nctemp9309= nctemp9311;
int nctemp9313=CodeEs(nctemp9307,nctemp9309);
struct tree* nctemp9315= p;
struct nctempchar1 *nctemp9319;
static struct nctempchar1 nctemp9320 = {{ 4}, (char*)";\n\0"};
nctemp9319=&nctemp9320;
nctempchar1* nctemp9317= nctemp9319;
int nctemp9321=CodeEs(nctemp9315,nctemp9317);
struct tree* nctemp9323= p;
nctempchar1* nctemp9325= lval;
int nctemp9328=CodeEs(nctemp9323,nctemp9325);
struct tree* nctemp9330= p;
struct nctempchar1 *nctemp9334;
static struct nctempchar1 nctemp9335 = {{ 3}, (char*)".i\0"};
nctemp9334=&nctemp9335;
nctempchar1* nctemp9332= nctemp9334;
int nctemp9336=CodeEs(nctemp9330,nctemp9332);
struct tree* nctemp9338= p;
struct nctempchar1 *nctemp9342;
static struct nctempchar1 nctemp9343 = {{ 2}, (char*)"=\0"};
nctemp9342=&nctemp9343;
nctempchar1* nctemp9340= nctemp9342;
int nctemp9344=CodeEs(nctemp9338,nctemp9340);
struct tree* nctemp9346= p;
nctempchar1* nctemp9348= rval;
int nctemp9351=CodeEs(nctemp9346,nctemp9348);
struct tree* nctemp9353= p;
struct nctempchar1 *nctemp9357;
static struct nctempchar1 nctemp9358 = {{ 3}, (char*)".i\0"};
nctemp9357=&nctemp9358;
nctempchar1* nctemp9355= nctemp9357;
int nctemp9359=CodeEs(nctemp9353,nctemp9355);
struct tree* nctemp9361= p;
struct nctempchar1 *nctemp9365;
static struct nctempchar1 nctemp9366 = {{ 4}, (char*)";\n\0"};
nctemp9365=&nctemp9366;
nctempchar1* nctemp9363= nctemp9365;
int nctemp9367=CodeEs(nctemp9361,nctemp9363);
return lval;
}
else{
struct tree* nctemp9375= np;
nctempchar1* nctemp9377=PtreeGetref(nctemp9375);
nctempchar1* nctemp9373= nctemp9377;
struct nctempchar1 *nctemp9380;
static struct nctempchar1 nctemp9381 = {{ 5}, (char*)"aref\0"};
nctemp9380=&nctemp9381;
nctempchar1* nctemp9378= nctemp9380;
int nctemp9382=LibeStrcmp(nctemp9373,nctemp9378);
int nctemp9370 = (nctemp9382 ==1);
if(nctemp9370)
{
struct tree* nctemp9391= np;
struct tree* nctemp9393=PtreeMvsister(nctemp9391);
struct tree* nctemp9389= nctemp9393;
nctempchar1* nctemp9394=PtreeGetname(nctemp9389);
nctempchar1* nctemp9387= nctemp9394;
struct nctempchar1 *nctemp9397;
static struct nctempchar1 nctemp9398 = {{ 10}, (char*)"iconstant\0"};
nctemp9397=&nctemp9398;
nctempchar1* nctemp9395= nctemp9397;
int nctemp9399=LibeStrcmp(nctemp9387,nctemp9395);
struct tree* nctemp9405= np;
struct tree* nctemp9407=PtreeMvsister(nctemp9405);
struct tree* nctemp9403= nctemp9407;
nctempchar1* nctemp9408=PtreeGetdef(nctemp9403);
nctempchar1* nctemp9401= nctemp9408;
struct nctempchar1 *nctemp9411;
static struct nctempchar1 nctemp9412 = {{ 2}, (char*)"0\0"};
nctemp9411=&nctemp9412;
nctempchar1* nctemp9409= nctemp9411;
int nctemp9413=LibeStrcmp(nctemp9401,nctemp9409);
int nctemp9384 = (nctemp9399 && nctemp9413);
if(nctemp9384)
{
struct tree* nctemp9415= p;
nctempchar1* nctemp9417= lval;
int nctemp9420=CodeEs(nctemp9415,nctemp9417);
struct tree* nctemp9422= p;
struct nctempchar1 *nctemp9426;
static struct nctempchar1 nctemp9427 = {{ 3}, (char*)"=(\0"};
nctemp9426=&nctemp9427;
nctempchar1* nctemp9424= nctemp9426;
int nctemp9428=CodeEs(nctemp9422,nctemp9424);
struct tree* nctemp9430= p;
nctempchar1* nctemp9432= rval;
int nctemp9435=CodeEs(nctemp9430,nctemp9432);
struct tree* nctemp9437= p;
struct nctempchar1 *nctemp9441;
static struct nctempchar1 nctemp9442 = {{ 5}, (char*)");\n\0"};
nctemp9441=&nctemp9442;
nctempchar1* nctemp9439= nctemp9441;
int nctemp9443=CodeEs(nctemp9437,nctemp9439);
return lval;
}
else{
struct tree* nctemp9447= p;
nctempchar1* nctemp9449= lval;
int nctemp9452=CodeEs(nctemp9447,nctemp9449);
struct tree* nctemp9454= p;
struct nctempchar1 *nctemp9458;
static struct nctempchar1 nctemp9459 = {{ 2}, (char*)"=\0"};
nctemp9458=&nctemp9459;
nctempchar1* nctemp9456= nctemp9458;
int nctemp9460=CodeEs(nctemp9454,nctemp9456);
struct tree* nctemp9462= p;
nctempchar1* nctemp9464= rval;
int nctemp9467=CodeEs(nctemp9462,nctemp9464);
struct tree* nctemp9469= p;
struct nctempchar1 *nctemp9473;
static struct nctempchar1 nctemp9474 = {{ 4}, (char*)";\n\0"};
nctemp9473=&nctemp9474;
nctempchar1* nctemp9471= nctemp9473;
int nctemp9475=CodeEs(nctemp9469,nctemp9471);
return lval;
}
}
else{
struct tree* nctemp9479= p;
nctempchar1* nctemp9481= lval;
int nctemp9484=CodeEs(nctemp9479,nctemp9481);
struct tree* nctemp9486= p;
struct nctempchar1 *nctemp9490;
static struct nctempchar1 nctemp9491 = {{ 2}, (char*)" \0"};
nctemp9490=&nctemp9491;
nctempchar1* nctemp9488= nctemp9490;
int nctemp9492=CodeEs(nctemp9486,nctemp9488);
struct tree* nctemp9494= p;
struct nctempchar1 *nctemp9498;
static struct nctempchar1 nctemp9499 = {{ 2}, (char*)"=\0"};
nctemp9498=&nctemp9499;
nctempchar1* nctemp9496= nctemp9498;
int nctemp9500=CodeEs(nctemp9494,nctemp9496);
struct tree* nctemp9502= p;
nctempchar1* nctemp9504= rval;
int nctemp9507=CodeEs(nctemp9502,nctemp9504);
struct tree* nctemp9509= p;
struct nctempchar1 *nctemp9513;
static struct nctempchar1 nctemp9514 = {{ 4}, (char*)";\n\0"};
nctemp9513=&nctemp9514;
nctempchar1* nctemp9511= nctemp9513;
int nctemp9515=CodeEs(nctemp9509,nctemp9511);
return lval;
}
}
}
else{
struct tree* nctemp9526= p;
nctempchar1* nctemp9528=PtreeGetdef(nctemp9526);
nctempchar1* nctemp9524= nctemp9528;
struct nctempchar1 *nctemp9531;
static struct nctempchar1 nctemp9532 = {{ 3}, (char*)"==\0"};
nctemp9531=&nctemp9532;
nctempchar1* nctemp9529= nctemp9531;
int nctemp9533=LibeStrcmp(nctemp9524,nctemp9529);
int nctemp9521 = (nctemp9533 ==1);
struct tree* nctemp9541= p;
nctempchar1* nctemp9543=PtreeGetdef(nctemp9541);
nctempchar1* nctemp9539= nctemp9543;
struct nctempchar1 *nctemp9546;
static struct nctempchar1 nctemp9547 = {{ 3}, (char*)"!=\0"};
nctemp9546=&nctemp9547;
nctempchar1* nctemp9544= nctemp9546;
int nctemp9548=LibeStrcmp(nctemp9539,nctemp9544);
int nctemp9536 = (nctemp9548 ==1);
int nctemp9518 = (nctemp9521 || nctemp9536);
if(nctemp9518)
{
struct tree* nctemp9555= np;
nctempchar1* nctemp9557=PtreeGetref(nctemp9555);
nctempchar1* nctemp9553= nctemp9557;
struct nctempchar1 *nctemp9560;
static struct nctempchar1 nctemp9561 = {{ 5}, (char*)"aref\0"};
nctemp9560=&nctemp9561;
nctempchar1* nctemp9558= nctemp9560;
int nctemp9562=LibeStrcmp(nctemp9553,nctemp9558);
int nctemp9550 = (nctemp9562 ==1);
if(nctemp9550)
{
sp =np;
struct tree* nctemp9575= np;
struct tree* nctemp9577=PtreeMvsister(nctemp9575);
struct tree* nctemp9573= nctemp9577;
nctempchar1* nctemp9578=PtreeGetname(nctemp9573);
nctempchar1* nctemp9571= nctemp9578;
struct nctempchar1 *nctemp9581;
static struct nctempchar1 nctemp9582 = {{ 10}, (char*)"iconstant\0"};
nctemp9581=&nctemp9582;
nctempchar1* nctemp9579= nctemp9581;
int nctemp9583=LibeStrcmp(nctemp9571,nctemp9579);
struct tree* nctemp9589= np;
struct tree* nctemp9591=PtreeMvsister(nctemp9589);
struct tree* nctemp9587= nctemp9591;
nctempchar1* nctemp9592=PtreeGetdef(nctemp9587);
nctempchar1* nctemp9585= nctemp9592;
struct nctempchar1 *nctemp9595;
static struct nctempchar1 nctemp9596 = {{ 2}, (char*)"0\0"};
nctemp9595=&nctemp9596;
nctempchar1* nctemp9593= nctemp9595;
int nctemp9597=LibeStrcmp(nctemp9585,nctemp9593);
int nctemp9568 = (nctemp9583 && nctemp9597);
if(nctemp9568)
{
struct tree* nctemp9599= p;
struct nctempchar1 *nctemp9603;
static struct nctempchar1 nctemp9604 = {{ 7}, (char*)"nctemp\0"};
nctemp9603=&nctemp9604;
nctempchar1* nctemp9601= nctemp9603;
int nctemp9605=CodeEs(nctemp9599,nctemp9601);
struct tree* nctemp9607= p;
struct tree* nctemp9611= sp;
nctempchar1* nctemp9613=PtreeGetype(nctemp9611);
nctempchar1* nctemp9609= nctemp9613;
int nctemp9614=CodeEs(nctemp9607,nctemp9609);
struct tree* nctemp9618= sp;
int nctemp9620=PtreeGetrank(nctemp9618);
int nctemp9616= nctemp9620;
int nctemp9621=CodeEd(nctemp9616);
struct tree* nctemp9623= p;
struct nctempchar1 *nctemp9627;
static struct nctempchar1 nctemp9628 = {{ 3}, (char*)" *\0"};
nctemp9627=&nctemp9628;
nctempchar1* nctemp9625= nctemp9627;
int nctemp9629=CodeEs(nctemp9623,nctemp9625);
struct tree* nctemp9631= p;
nctempchar1* nctemp9633= tempi;
int nctemp9636=CodeEs(nctemp9631,nctemp9633);
struct tree* nctemp9638= p;
struct nctempchar1 *nctemp9642;
static struct nctempchar1 nctemp9643 = {{ 3}, (char*)" =\0"};
nctemp9642=&nctemp9643;
nctempchar1* nctemp9640= nctemp9642;
int nctemp9644=CodeEs(nctemp9638,nctemp9640);
struct tree* nctemp9646= p;
nctempchar1* nctemp9648= lval;
int nctemp9651=CodeEs(nctemp9646,nctemp9648);
struct tree* nctemp9653= p;
struct nctempchar1 *nctemp9657;
static struct nctempchar1 nctemp9658 = {{ 4}, (char*)";\n\0"};
nctemp9657=&nctemp9658;
nctempchar1* nctemp9655= nctemp9657;
int nctemp9659=CodeEs(nctemp9653,nctemp9655);
struct tree* nctemp9661= p;
nctempchar1* nctemp9663= type;
int nctemp9666=CodeEs(nctemp9661,nctemp9663);
struct tree* nctemp9668= p;
struct nctempchar1 *nctemp9672;
static struct nctempchar1 nctemp9673 = {{ 2}, (char*)" \0"};
nctemp9672=&nctemp9673;
nctempchar1* nctemp9670= nctemp9672;
int nctemp9674=CodeEs(nctemp9668,nctemp9670);
struct tree* nctemp9676= p;
nctempchar1* nctemp9678= tempr;
int nctemp9681=CodeEs(nctemp9676,nctemp9678);
struct tree* nctemp9683= p;
struct nctempchar1 *nctemp9687;
static struct nctempchar1 nctemp9688 = {{ 4}, (char*)" =(\0"};
nctemp9687=&nctemp9688;
nctempchar1* nctemp9685= nctemp9687;
int nctemp9689=CodeEs(nctemp9683,nctemp9685);
struct tree* nctemp9691= p;
nctempchar1* nctemp9693= tempi;
int nctemp9696=CodeEs(nctemp9691,nctemp9693);
struct tree* nctemp9698= p;
struct tree* nctemp9702= p;
nctempchar1* nctemp9704=PtreeGetdef(nctemp9702);
nctempchar1* nctemp9700= nctemp9704;
int nctemp9705=CodeEs(nctemp9698,nctemp9700);
struct tree* nctemp9707= p;
nctempchar1* nctemp9709= rval;
int nctemp9712=CodeEs(nctemp9707,nctemp9709);
struct tree* nctemp9714= p;
struct nctempchar1 *nctemp9718;
static struct nctempchar1 nctemp9719 = {{ 5}, (char*)");\n\0"};
nctemp9718=&nctemp9719;
nctempchar1* nctemp9716= nctemp9718;
int nctemp9720=CodeEs(nctemp9714,nctemp9716);
return tempr;
}
else{
struct tree* nctemp9724= p;
nctempchar1* nctemp9726= type;
int nctemp9729=CodeEs(nctemp9724,nctemp9726);
struct tree* nctemp9731= p;
struct nctempchar1 *nctemp9735;
static struct nctempchar1 nctemp9736 = {{ 2}, (char*)" \0"};
nctemp9735=&nctemp9736;
nctempchar1* nctemp9733= nctemp9735;
int nctemp9737=CodeEs(nctemp9731,nctemp9733);
struct tree* nctemp9739= p;
nctempchar1* nctemp9741= tempr;
int nctemp9744=CodeEs(nctemp9739,nctemp9741);
struct tree* nctemp9746= p;
struct nctempchar1 *nctemp9750;
static struct nctempchar1 nctemp9751 = {{ 5}, (char*)" = (\0"};
nctemp9750=&nctemp9751;
nctempchar1* nctemp9748= nctemp9750;
int nctemp9752=CodeEs(nctemp9746,nctemp9748);
struct tree* nctemp9754= p;
nctempchar1* nctemp9756= lval;
int nctemp9759=CodeEs(nctemp9754,nctemp9756);
struct tree* nctemp9761= p;
struct tree* nctemp9765= p;
nctempchar1* nctemp9767=PtreeGetdef(nctemp9765);
nctempchar1* nctemp9763= nctemp9767;
int nctemp9768=CodeEs(nctemp9761,nctemp9763);
struct tree* nctemp9770= p;
nctempchar1* nctemp9772= rval;
int nctemp9775=CodeEs(nctemp9770,nctemp9772);
struct tree* nctemp9777= p;
struct nctempchar1 *nctemp9781;
static struct nctempchar1 nctemp9782 = {{ 5}, (char*)");\n\0"};
nctemp9781=&nctemp9782;
nctempchar1* nctemp9779= nctemp9781;
int nctemp9783=CodeEs(nctemp9777,nctemp9779);
return lval;
}
}
else{
struct tree* nctemp9787= p;
nctempchar1* nctemp9789= type;
int nctemp9792=CodeEs(nctemp9787,nctemp9789);
struct tree* nctemp9794= p;
struct nctempchar1 *nctemp9798;
static struct nctempchar1 nctemp9799 = {{ 2}, (char*)" \0"};
nctemp9798=&nctemp9799;
nctempchar1* nctemp9796= nctemp9798;
int nctemp9800=CodeEs(nctemp9794,nctemp9796);
struct tree* nctemp9802= p;
nctempchar1* nctemp9804= tempr;
int nctemp9807=CodeEs(nctemp9802,nctemp9804);
struct tree* nctemp9809= p;
struct nctempchar1 *nctemp9813;
static struct nctempchar1 nctemp9814 = {{ 5}, (char*)" = (\0"};
nctemp9813=&nctemp9814;
nctempchar1* nctemp9811= nctemp9813;
int nctemp9815=CodeEs(nctemp9809,nctemp9811);
struct tree* nctemp9817= p;
nctempchar1* nctemp9819= lval;
int nctemp9822=CodeEs(nctemp9817,nctemp9819);
struct tree* nctemp9824= p;
struct nctempchar1 *nctemp9828;
static struct nctempchar1 nctemp9829 = {{ 2}, (char*)" \0"};
nctemp9828=&nctemp9829;
nctempchar1* nctemp9826= nctemp9828;
int nctemp9830=CodeEs(nctemp9824,nctemp9826);
struct tree* nctemp9832= p;
struct tree* nctemp9836= p;
nctempchar1* nctemp9838=PtreeGetdef(nctemp9836);
nctempchar1* nctemp9834= nctemp9838;
int nctemp9839=CodeEs(nctemp9832,nctemp9834);
struct tree* nctemp9841= p;
nctempchar1* nctemp9843= rval;
int nctemp9846=CodeEs(nctemp9841,nctemp9843);
struct tree* nctemp9848= p;
struct nctempchar1 *nctemp9852;
static struct nctempchar1 nctemp9853 = {{ 5}, (char*)");\n\0"};
nctemp9852=&nctemp9853;
nctempchar1* nctemp9850= nctemp9852;
int nctemp9854=CodeEs(nctemp9848,nctemp9850);
return tempr;
}
}
else{
struct tree* nctemp9858= p;
nctempchar1* nctemp9860= type;
int nctemp9863=CodeEs(nctemp9858,nctemp9860);
struct tree* nctemp9865= p;
struct nctempchar1 *nctemp9869;
static struct nctempchar1 nctemp9870 = {{ 2}, (char*)" \0"};
nctemp9869=&nctemp9870;
nctempchar1* nctemp9867= nctemp9869;
int nctemp9871=CodeEs(nctemp9865,nctemp9867);
struct tree* nctemp9873= p;
nctempchar1* nctemp9875= tempr;
int nctemp9878=CodeEs(nctemp9873,nctemp9875);
struct tree* nctemp9880= p;
struct nctempchar1 *nctemp9884;
static struct nctempchar1 nctemp9885 = {{ 5}, (char*)" = (\0"};
nctemp9884=&nctemp9885;
nctempchar1* nctemp9882= nctemp9884;
int nctemp9886=CodeEs(nctemp9880,nctemp9882);
struct tree* nctemp9888= p;
nctempchar1* nctemp9890= lval;
int nctemp9893=CodeEs(nctemp9888,nctemp9890);
struct tree* nctemp9895= p;
struct nctempchar1 *nctemp9899;
static struct nctempchar1 nctemp9900 = {{ 2}, (char*)" \0"};
nctemp9899=&nctemp9900;
nctempchar1* nctemp9897= nctemp9899;
int nctemp9901=CodeEs(nctemp9895,nctemp9897);
struct tree* nctemp9903= p;
struct tree* nctemp9907= p;
nctempchar1* nctemp9909=PtreeGetdef(nctemp9907);
nctempchar1* nctemp9905= nctemp9909;
int nctemp9910=CodeEs(nctemp9903,nctemp9905);
struct tree* nctemp9912= p;
struct nctempchar1 *nctemp9916;
static struct nctempchar1 nctemp9917 = {{ 2}, (char*)" \0"};
nctemp9916=&nctemp9917;
nctempchar1* nctemp9914= nctemp9916;
int nctemp9918=CodeEs(nctemp9912,nctemp9914);
struct tree* nctemp9920= p;
nctempchar1* nctemp9922= rval;
int nctemp9925=CodeEs(nctemp9920,nctemp9922);
struct tree* nctemp9927= p;
struct nctempchar1 *nctemp9931;
static struct nctempchar1 nctemp9932 = {{ 5}, (char*)");\n\0"};
nctemp9931=&nctemp9932;
nctempchar1* nctemp9929= nctemp9931;
int nctemp9933=CodeEs(nctemp9927,nctemp9929);
return tempr;
}
}
}
}
else{
struct tree* nctemp9937= p;
nctempchar1* nctemp9939=CodeUnexpr(nctemp9937);
return nctemp9939;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9944= p;
struct tree* nctemp9946=PtreeMvchild(nctemp9944);
sp =nctemp9946;
struct tree* nctemp9952= sp;
nctempchar1* nctemp9954=CodeBinexpr(nctemp9952);
rval=nctemp9954;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9961= p;
struct tree* nctemp9963=PtreeMvchild(nctemp9961);
p =nctemp9963;
sp =p;
struct tree* nctemp9973= sp;
nctempchar1* nctemp9975=CodeExpr(nctemp9973);
cond=nctemp9975;
nctempchar1* nctemp9981=CodeMktemp();
tmp=nctemp9981;
struct tree* nctemp9983= p;
struct tree* nctemp9987= sp;
nctempchar1* nctemp9989=PtreeGetype(nctemp9987);
nctempchar1* nctemp9985= nctemp9989;
int nctemp9990=CodeEs(nctemp9983,nctemp9985);
struct tree* nctemp9992= p;
struct nctempchar1 *nctemp9996;
static struct nctempchar1 nctemp9997 = {{ 2}, (char*)" \0"};
nctemp9996=&nctemp9997;
nctempchar1* nctemp9994= nctemp9996;
int nctemp9998=CodeEs(nctemp9992,nctemp9994);
struct tree* nctemp10000= p;
nctempchar1* nctemp10002= tmp;
int nctemp10005=CodeEs(nctemp10000,nctemp10002);
struct tree* nctemp10007= p;
struct nctempchar1 *nctemp10011;
static struct nctempchar1 nctemp10012 = {{ 2}, (char*)"=\0"};
nctemp10011=&nctemp10012;
nctempchar1* nctemp10009= nctemp10011;
int nctemp10013=CodeEs(nctemp10007,nctemp10009);
struct tree* nctemp10015= p;
nctempchar1* nctemp10017= cond;
int nctemp10020=CodeEs(nctemp10015,nctemp10017);
struct tree* nctemp10022= p;
struct nctempchar1 *nctemp10026;
static struct nctempchar1 nctemp10027 = {{ 4}, (char*)";\n\0"};
nctemp10026=&nctemp10027;
nctempchar1* nctemp10024= nctemp10026;
int nctemp10028=CodeEs(nctemp10022,nctemp10024);
struct tree* nctemp10030= p;
struct nctempchar1 *nctemp10034;
static struct nctempchar1 nctemp10035 = {{ 7}, (char*)"while(\0"};
nctemp10034=&nctemp10035;
nctempchar1* nctemp10032= nctemp10034;
int nctemp10036=CodeEs(nctemp10030,nctemp10032);
struct tree* nctemp10038= p;
nctempchar1* nctemp10040= tmp;
int nctemp10043=CodeEs(nctemp10038,nctemp10040);
struct tree* nctemp10045= p;
struct nctempchar1 *nctemp10049;
static struct nctempchar1 nctemp10050 = {{ 4}, (char*)")\n\0"};
nctemp10049=&nctemp10050;
nctempchar1* nctemp10047= nctemp10049;
int nctemp10051=CodeEs(nctemp10045,nctemp10047);
struct tree* nctemp10053= p;
struct nctempchar1 *nctemp10057;
static struct nctempchar1 nctemp10058 = {{ 2}, (char*)"{\0"};
nctemp10057=&nctemp10058;
nctempchar1* nctemp10055= nctemp10057;
int nctemp10059=CodeEs(nctemp10053,nctemp10055);
struct tree* nctemp10064= p;
struct tree* nctemp10066=PtreeMvsister(nctemp10064);
p =nctemp10066;
struct tree* nctemp10068= p;
int nctemp10070=CodeStmnt(nctemp10068);
struct tree* nctemp10076= sp;
nctempchar1* nctemp10078=CodeExpr(nctemp10076);
cond2=nctemp10078;
struct tree* nctemp10080= p;
nctempchar1* nctemp10082= tmp;
int nctemp10085=CodeEs(nctemp10080,nctemp10082);
struct tree* nctemp10087= p;
struct nctempchar1 *nctemp10091;
static struct nctempchar1 nctemp10092 = {{ 2}, (char*)"=\0"};
nctemp10091=&nctemp10092;
nctempchar1* nctemp10089= nctemp10091;
int nctemp10093=CodeEs(nctemp10087,nctemp10089);
struct tree* nctemp10095= p;
nctempchar1* nctemp10097= cond2;
int nctemp10100=CodeEs(nctemp10095,nctemp10097);
struct tree* nctemp10102= p;
struct nctempchar1 *nctemp10106;
static struct nctempchar1 nctemp10107 = {{ 2}, (char*)";\0"};
nctemp10106=&nctemp10107;
nctempchar1* nctemp10104= nctemp10106;
int nctemp10108=CodeEs(nctemp10102,nctemp10104);
struct tree* nctemp10110= p;
struct nctempchar1 *nctemp10114;
static struct nctempchar1 nctemp10115 = {{ 2}, (char*)"}\0"};
nctemp10114=&nctemp10115;
nctempchar1* nctemp10112= nctemp10114;
int nctemp10116=CodeEs(nctemp10110,nctemp10112);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10122= p;
struct tree* nctemp10124=PtreeMvchild(nctemp10122);
p =nctemp10124;
struct tree* nctemp10126= p;
nctempchar1* nctemp10128=CodeExpr(nctemp10126);
struct tree* nctemp10133= p;
struct tree* nctemp10135=PtreeMvsister(nctemp10133);
p =nctemp10135;
np =p;
struct tree* nctemp10145= p;
nctempchar1* nctemp10147=CodeExpr(nctemp10145);
cond=nctemp10147;
struct tree* nctemp10149= p;
struct nctempchar1 *nctemp10153;
static struct nctempchar1 nctemp10154 = {{ 7}, (char*)"while(\0"};
nctemp10153=&nctemp10154;
nctempchar1* nctemp10151= nctemp10153;
int nctemp10155=CodeEs(nctemp10149,nctemp10151);
struct tree* nctemp10157= p;
nctempchar1* nctemp10159= cond;
int nctemp10162=CodeEs(nctemp10157,nctemp10159);
struct tree* nctemp10164= p;
struct nctempchar1 *nctemp10168;
static struct nctempchar1 nctemp10169 = {{ 5}, (char*)"){\n\0"};
nctemp10168=&nctemp10169;
nctempchar1* nctemp10166= nctemp10168;
int nctemp10170=CodeEs(nctemp10164,nctemp10166);
struct tree* nctemp10175= p;
struct tree* nctemp10177=PtreeMvsister(nctemp10175);
p =nctemp10177;
sp =p;
struct tree* nctemp10186= p;
struct tree* nctemp10188=PtreeMvsister(nctemp10186);
p =nctemp10188;
struct tree* nctemp10190= p;
int nctemp10192=CodeStmnt(nctemp10190);
struct tree* nctemp10194= sp;
nctempchar1* nctemp10196=CodeExpr(nctemp10194);
struct tree* nctemp10202= np;
nctempchar1* nctemp10204=CodeExpr(nctemp10202);
tmp=nctemp10204;
struct tree* nctemp10206= p;
nctempchar1* nctemp10208= cond;
int nctemp10211=CodeEs(nctemp10206,nctemp10208);
struct tree* nctemp10213= p;
struct nctempchar1 *nctemp10217;
static struct nctempchar1 nctemp10218 = {{ 2}, (char*)"=\0"};
nctemp10217=&nctemp10218;
nctempchar1* nctemp10215= nctemp10217;
int nctemp10219=CodeEs(nctemp10213,nctemp10215);
struct tree* nctemp10221= p;
nctempchar1* nctemp10223= tmp;
int nctemp10226=CodeEs(nctemp10221,nctemp10223);
struct tree* nctemp10228= p;
struct nctempchar1 *nctemp10232;
static struct nctempchar1 nctemp10233 = {{ 4}, (char*)";\n\0"};
nctemp10232=&nctemp10233;
nctempchar1* nctemp10230= nctemp10232;
int nctemp10234=CodeEs(nctemp10228,nctemp10230);
struct tree* nctemp10236= p;
struct nctempchar1 *nctemp10240;
static struct nctempchar1 nctemp10241 = {{ 4}, (char*)"}\n\0"};
nctemp10240=&nctemp10241;
nctempchar1* nctemp10238= nctemp10240;
int nctemp10242=CodeEs(nctemp10236,nctemp10238);
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
int nctemp10256 = level + 1;
level =nctemp10256;
int nctemp10257 = (p ==0);
if(nctemp10257)
{
return 1;
}
struct tree* nctemp10266= p;
struct tree* nctemp10268=PtreeMvsister(nctemp10266);
p =nctemp10268;
struct tree* nctemp10270= p;
int nctemp10272= level;
int nctemp10274= rank;
int nctemp10276=CodeParallelfor(nctemp10270,nctemp10272,nctemp10274);
struct tree* nctemp10281= sp;
struct tree* nctemp10283=PtreeMvchild(nctemp10281);
rp =nctemp10283;
struct tree* nctemp10288= rp;
struct tree* nctemp10290=PtreeMvchild(nctemp10288);
qp =nctemp10290;
struct tree* nctemp10295= qp;
struct tree* nctemp10297=PtreeMvchild(nctemp10295);
qp =nctemp10297;
struct tree* nctemp10303= qp;
nctempchar1* nctemp10305=PtreeGetdef(nctemp10303);
index=nctemp10305;
struct tree* nctemp10313= qp;
struct tree* nctemp10315=PtreeMvsister(nctemp10313);
struct tree* nctemp10311= nctemp10315;
nctempchar1* nctemp10316=CodeBinexpr(nctemp10311);
init=nctemp10316;
struct tree* nctemp10321= rp;
struct tree* nctemp10323=PtreeMvsister(nctemp10321);
rrp =nctemp10323;
struct tree* nctemp10329= rrp;
nctempchar1* nctemp10331=CodeExpr(nctemp10329);
cond=nctemp10331;
int nctemp10332 = (level ==rank);
if(nctemp10332)
{
struct tree* nctemp10337= p;
struct nctempchar1 *nctemp10341;
static struct nctempchar1 nctemp10342 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10341=&nctemp10342;
nctempchar1* nctemp10339= nctemp10341;
int nctemp10343=CodeEs(nctemp10337,nctemp10339);
}
struct tree* nctemp10345= rp;
struct nctempchar1 *nctemp10349;
static struct nctempchar1 nctemp10350 = {{ 5}, (char*)"for(\0"};
nctemp10349=&nctemp10350;
nctempchar1* nctemp10347= nctemp10349;
int nctemp10351=CodeEs(nctemp10345,nctemp10347);
struct tree* nctemp10353= rp;
nctempchar1* nctemp10355= index;
int nctemp10358=CodeEs(nctemp10353,nctemp10355);
struct tree* nctemp10360= rp;
struct nctempchar1 *nctemp10364;
static struct nctempchar1 nctemp10365 = {{ 2}, (char*)"=\0"};
nctemp10364=&nctemp10365;
nctempchar1* nctemp10362= nctemp10364;
int nctemp10366=CodeEs(nctemp10360,nctemp10362);
struct tree* nctemp10368= rp;
nctempchar1* nctemp10370= init;
int nctemp10373=CodeEs(nctemp10368,nctemp10370);
struct tree* nctemp10375= rp;
struct nctempchar1 *nctemp10379;
static struct nctempchar1 nctemp10380 = {{ 2}, (char*)";\0"};
nctemp10379=&nctemp10380;
nctempchar1* nctemp10377= nctemp10379;
int nctemp10381=CodeEs(nctemp10375,nctemp10377);
struct tree* nctemp10386= rp;
struct tree* nctemp10388=PtreeMvsister(nctemp10386);
rp =nctemp10388;
struct tree* nctemp10390= rp;
nctempchar1* nctemp10392= index;
int nctemp10395=CodeEs(nctemp10390,nctemp10392);
struct tree* nctemp10397= rp;
struct nctempchar1 *nctemp10401;
static struct nctempchar1 nctemp10402 = {{ 2}, (char*)"<\0"};
nctemp10401=&nctemp10402;
nctempchar1* nctemp10399= nctemp10401;
int nctemp10403=CodeEs(nctemp10397,nctemp10399);
struct tree* nctemp10405= p;
nctempchar1* nctemp10407= cond;
int nctemp10410=CodeEs(nctemp10405,nctemp10407);
struct tree* nctemp10412= rp;
struct nctempchar1 *nctemp10416;
static struct nctempchar1 nctemp10417 = {{ 2}, (char*)";\0"};
nctemp10416=&nctemp10417;
nctempchar1* nctemp10414= nctemp10416;
int nctemp10418=CodeEs(nctemp10412,nctemp10414);
struct tree* nctemp10426= rp;
struct tree* nctemp10428=PtreeMvsister(nctemp10426);
rp =nctemp10428;
int nctemp10419 = (rp !=0);
if(nctemp10419)
{
struct tree* nctemp10431= rp;
nctempchar1* nctemp10433= index;
int nctemp10436=CodeEs(nctemp10431,nctemp10433);
struct tree* nctemp10438= rp;
struct nctempchar1 *nctemp10442;
static struct nctempchar1 nctemp10443 = {{ 2}, (char*)"=\0"};
nctemp10442=&nctemp10443;
nctempchar1* nctemp10440= nctemp10442;
int nctemp10444=CodeEs(nctemp10438,nctemp10440);
struct tree* nctemp10446= rp;
nctempchar1* nctemp10448= index;
int nctemp10451=CodeEs(nctemp10446,nctemp10448);
struct tree* nctemp10453= rp;
struct nctempchar1 *nctemp10457;
static struct nctempchar1 nctemp10458 = {{ 2}, (char*)"+\0"};
nctemp10457=&nctemp10458;
nctempchar1* nctemp10455= nctemp10457;
int nctemp10459=CodeEs(nctemp10453,nctemp10455);
struct tree* nctemp10461= rp;
nctempchar1* nctemp10463=CodeExpr(nctemp10461);
}
else{
struct tree* nctemp10465= rp;
nctempchar1* nctemp10467= index;
int nctemp10470=CodeEs(nctemp10465,nctemp10467);
struct tree* nctemp10472= rp;
struct nctempchar1 *nctemp10476;
static struct nctempchar1 nctemp10477 = {{ 2}, (char*)"=\0"};
nctemp10476=&nctemp10477;
nctempchar1* nctemp10474= nctemp10476;
int nctemp10478=CodeEs(nctemp10472,nctemp10474);
struct tree* nctemp10480= rp;
nctempchar1* nctemp10482= index;
int nctemp10485=CodeEs(nctemp10480,nctemp10482);
struct tree* nctemp10487= rp;
struct nctempchar1 *nctemp10491;
static struct nctempchar1 nctemp10492 = {{ 2}, (char*)"+\0"};
nctemp10491=&nctemp10492;
nctempchar1* nctemp10489= nctemp10491;
int nctemp10493=CodeEs(nctemp10487,nctemp10489);
struct tree* nctemp10495= rp;
struct nctempchar1 *nctemp10499;
static struct nctempchar1 nctemp10500 = {{ 2}, (char*)"1\0"};
nctemp10499=&nctemp10500;
nctempchar1* nctemp10497= nctemp10499;
int nctemp10501=CodeEs(nctemp10495,nctemp10497);
}
struct tree* nctemp10503= rp;
struct nctempchar1 *nctemp10507;
static struct nctempchar1 nctemp10508 = {{ 3}, (char*)"){\0"};
nctemp10507=&nctemp10508;
nctempchar1* nctemp10505= nctemp10507;
int nctemp10509=CodeEs(nctemp10503,nctemp10505);
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
int nctemp10512= 1;
int nctemp10514=CodeSetparallel(nctemp10512);
sp =p;
struct nctempchar1 *nctemp10524;
static struct nctempchar1 nctemp10525 = {{ 9}, (char*)"nctempno\0"};
nctemp10524=&nctemp10525;
pno=nctemp10524;
struct tree* nctemp10530= p;
int nctemp10532=PtreeGetrank(nctemp10530);
rank =nctemp10532;
struct tree* nctemp10537= p;
struct tree* nctemp10539=PtreeMvchild(nctemp10537);
p =nctemp10539;
psliceseq =p;
nctempchar1* nctemp10549=CodeMktemp();
nmax=nctemp10549;
struct tree* nctemp10554= psliceseq;
struct tree* nctemp10556=PtreeMvchild(nctemp10554);
p =nctemp10556;
ps =p;
struct nctempchar1 *nctemp10568;
static struct nctempchar1 nctemp10569 = {{ 4}, (char*)"int\0"};
nctemp10568=&nctemp10569;
nctempchar1* nctemp10566= nctemp10568;
nctempchar1* nctemp10570=CodeNewtemp(nctemp10566);
n1=nctemp10570;
struct nctempchar1 *nctemp10578;
static struct nctempchar1 nctemp10579 = {{ 4}, (char*)"int\0"};
nctemp10578=&nctemp10579;
nctempchar1* nctemp10576= nctemp10578;
nctempchar1* nctemp10580=CodeNewtemp(nctemp10576);
m1=nctemp10580;
struct tree* nctemp10585= p;
struct tree* nctemp10587=PtreeMvchild(nctemp10585);
q =nctemp10587;
struct tree* nctemp10592= q;
struct tree* nctemp10594=PtreeMvchild(nctemp10592);
q =nctemp10594;
struct tree* nctemp10599= q;
struct tree* nctemp10601=PtreeMvchild(nctemp10599);
q =nctemp10601;
ix =q;
struct tree* nctemp10610= q;
struct tree* nctemp10612=PtreeMvsister(nctemp10610);
q =nctemp10612;
struct tree* nctemp10618= q;
nctempchar1* nctemp10620=CodeUnexpr(nctemp10618);
tmp=nctemp10620;
struct tree* nctemp10622= p;
struct nctempchar1 *nctemp10626;
static struct nctempchar1 nctemp10627 = {{ 5}, (char*)"int \0"};
nctemp10626=&nctemp10627;
nctempchar1* nctemp10624= nctemp10626;
int nctemp10628=CodeEs(nctemp10622,nctemp10624);
struct tree* nctemp10630= p;
nctempchar1* nctemp10632= m1;
int nctemp10635=CodeEs(nctemp10630,nctemp10632);
struct tree* nctemp10637= p;
struct nctempchar1 *nctemp10641;
static struct nctempchar1 nctemp10642 = {{ 2}, (char*)"=\0"};
nctemp10641=&nctemp10642;
nctempchar1* nctemp10639= nctemp10641;
int nctemp10643=CodeEs(nctemp10637,nctemp10639);
struct tree* nctemp10645= p;
nctempchar1* nctemp10647= tmp;
int nctemp10650=CodeEs(nctemp10645,nctemp10647);
struct tree* nctemp10652= p;
struct nctempchar1 *nctemp10656;
static struct nctempchar1 nctemp10657 = {{ 4}, (char*)";\n\0"};
nctemp10656=&nctemp10657;
nctempchar1* nctemp10654= nctemp10656;
int nctemp10658=CodeEs(nctemp10652,nctemp10654);
struct tree* nctemp10664= ix;
nctempchar1* nctemp10666=PtreeGetdef(nctemp10664);
indx1=nctemp10666;
struct tree* nctemp10671= ps;
struct tree* nctemp10673=PtreeMvchild(nctemp10671);
q =nctemp10673;
struct tree* nctemp10678= q;
struct tree* nctemp10680=PtreeMvsister(nctemp10678);
q =nctemp10680;
struct tree* nctemp10688= ps;
nctempchar1* nctemp10690=PtreeGetype(nctemp10688);
nctempchar1* nctemp10686= nctemp10690;
nctempchar1* nctemp10691=CodeNewtemp(nctemp10686);
n1=nctemp10691;
struct tree* nctemp10697= q;
nctempchar1* nctemp10699=CodeExpr(nctemp10697);
tmp=nctemp10699;
struct tree* nctemp10701= q;
struct nctempchar1 *nctemp10705;
static struct nctempchar1 nctemp10706 = {{ 5}, (char*)"int \0"};
nctemp10705=&nctemp10706;
nctempchar1* nctemp10703= nctemp10705;
int nctemp10707=CodeEs(nctemp10701,nctemp10703);
struct tree* nctemp10709= q;
nctempchar1* nctemp10711= n1;
int nctemp10714=CodeEs(nctemp10709,nctemp10711);
struct tree* nctemp10716= q;
struct nctempchar1 *nctemp10720;
static struct nctempchar1 nctemp10721 = {{ 2}, (char*)"=\0"};
nctemp10720=&nctemp10721;
nctempchar1* nctemp10718= nctemp10720;
int nctemp10722=CodeEs(nctemp10716,nctemp10718);
struct tree* nctemp10724= q;
nctempchar1* nctemp10726= tmp;
int nctemp10729=CodeEs(nctemp10724,nctemp10726);
struct tree* nctemp10731= q;
struct nctempchar1 *nctemp10735;
static struct nctempchar1 nctemp10736 = {{ 4}, (char*)";\n\0"};
nctemp10735=&nctemp10736;
nctempchar1* nctemp10733= nctemp10735;
int nctemp10737=CodeEs(nctemp10731,nctemp10733);
int nctemp10738 = (rank > 1);
if(nctemp10738)
{
struct tree* nctemp10746= psliceseq;
struct tree* nctemp10748=PtreeMvchild(nctemp10746);
p =nctemp10748;
struct tree* nctemp10753= p;
struct tree* nctemp10755=PtreeMvsister(nctemp10753);
p =nctemp10755;
ps =p;
struct nctempchar1 *nctemp10767;
static struct nctempchar1 nctemp10768 = {{ 4}, (char*)"int\0"};
nctemp10767=&nctemp10768;
nctempchar1* nctemp10765= nctemp10767;
nctempchar1* nctemp10769=CodeNewtemp(nctemp10765);
n2=nctemp10769;
struct nctempchar1 *nctemp10777;
static struct nctempchar1 nctemp10778 = {{ 4}, (char*)"int\0"};
nctemp10777=&nctemp10778;
nctempchar1* nctemp10775= nctemp10777;
nctempchar1* nctemp10779=CodeNewtemp(nctemp10775);
m2=nctemp10779;
struct tree* nctemp10784= p;
struct tree* nctemp10786=PtreeMvchild(nctemp10784);
q =nctemp10786;
struct tree* nctemp10791= q;
struct tree* nctemp10793=PtreeMvchild(nctemp10791);
q =nctemp10793;
struct tree* nctemp10798= q;
struct tree* nctemp10800=PtreeMvchild(nctemp10798);
q =nctemp10800;
ix =q;
struct tree* nctemp10809= q;
struct tree* nctemp10811=PtreeMvsister(nctemp10809);
q =nctemp10811;
struct tree* nctemp10817= q;
nctempchar1* nctemp10819=CodeUnexpr(nctemp10817);
tmp=nctemp10819;
struct tree* nctemp10821= p;
struct nctempchar1 *nctemp10825;
static struct nctempchar1 nctemp10826 = {{ 5}, (char*)"int \0"};
nctemp10825=&nctemp10826;
nctempchar1* nctemp10823= nctemp10825;
int nctemp10827=CodeEs(nctemp10821,nctemp10823);
struct tree* nctemp10829= p;
nctempchar1* nctemp10831= m2;
int nctemp10834=CodeEs(nctemp10829,nctemp10831);
struct tree* nctemp10836= p;
struct nctempchar1 *nctemp10840;
static struct nctempchar1 nctemp10841 = {{ 2}, (char*)"=\0"};
nctemp10840=&nctemp10841;
nctempchar1* nctemp10838= nctemp10840;
int nctemp10842=CodeEs(nctemp10836,nctemp10838);
struct tree* nctemp10844= p;
nctempchar1* nctemp10846= tmp;
int nctemp10849=CodeEs(nctemp10844,nctemp10846);
struct tree* nctemp10851= p;
struct nctempchar1 *nctemp10855;
static struct nctempchar1 nctemp10856 = {{ 4}, (char*)";\n\0"};
nctemp10855=&nctemp10856;
nctempchar1* nctemp10853= nctemp10855;
int nctemp10857=CodeEs(nctemp10851,nctemp10853);
struct tree* nctemp10863= ix;
nctempchar1* nctemp10865=PtreeGetdef(nctemp10863);
indx2=nctemp10865;
struct tree* nctemp10870= ps;
struct tree* nctemp10872=PtreeMvchild(nctemp10870);
q =nctemp10872;
struct tree* nctemp10877= q;
struct tree* nctemp10879=PtreeMvsister(nctemp10877);
q =nctemp10879;
struct tree* nctemp10887= ps;
nctempchar1* nctemp10889=PtreeGetype(nctemp10887);
nctempchar1* nctemp10885= nctemp10889;
nctempchar1* nctemp10890=CodeNewtemp(nctemp10885);
n2=nctemp10890;
struct tree* nctemp10896= q;
nctempchar1* nctemp10898=CodeExpr(nctemp10896);
tmp=nctemp10898;
struct tree* nctemp10900= q;
struct nctempchar1 *nctemp10904;
static struct nctempchar1 nctemp10905 = {{ 5}, (char*)"int \0"};
nctemp10904=&nctemp10905;
nctempchar1* nctemp10902= nctemp10904;
int nctemp10906=CodeEs(nctemp10900,nctemp10902);
struct tree* nctemp10908= q;
nctempchar1* nctemp10910= n2;
int nctemp10913=CodeEs(nctemp10908,nctemp10910);
struct tree* nctemp10915= q;
struct nctempchar1 *nctemp10919;
static struct nctempchar1 nctemp10920 = {{ 2}, (char*)"=\0"};
nctemp10919=&nctemp10920;
nctempchar1* nctemp10917= nctemp10919;
int nctemp10921=CodeEs(nctemp10915,nctemp10917);
struct tree* nctemp10923= q;
nctempchar1* nctemp10925= tmp;
int nctemp10928=CodeEs(nctemp10923,nctemp10925);
struct tree* nctemp10930= q;
struct nctempchar1 *nctemp10934;
static struct nctempchar1 nctemp10935 = {{ 4}, (char*)";\n\0"};
nctemp10934=&nctemp10935;
nctempchar1* nctemp10932= nctemp10934;
int nctemp10936=CodeEs(nctemp10930,nctemp10932);
}
int nctemp10937 = (rank > 2);
if(nctemp10937)
{
struct tree* nctemp10945= psliceseq;
struct tree* nctemp10947=PtreeMvchild(nctemp10945);
p =nctemp10947;
struct tree* nctemp10952= p;
struct tree* nctemp10954=PtreeMvsister(nctemp10952);
p =nctemp10954;
struct tree* nctemp10959= p;
struct tree* nctemp10961=PtreeMvsister(nctemp10959);
p =nctemp10961;
ps =p;
struct nctempchar1 *nctemp10973;
static struct nctempchar1 nctemp10974 = {{ 4}, (char*)"int\0"};
nctemp10973=&nctemp10974;
nctempchar1* nctemp10971= nctemp10973;
nctempchar1* nctemp10975=CodeNewtemp(nctemp10971);
n3=nctemp10975;
struct nctempchar1 *nctemp10983;
static struct nctempchar1 nctemp10984 = {{ 4}, (char*)"int\0"};
nctemp10983=&nctemp10984;
nctempchar1* nctemp10981= nctemp10983;
nctempchar1* nctemp10985=CodeNewtemp(nctemp10981);
m3=nctemp10985;
struct tree* nctemp10990= p;
struct tree* nctemp10992=PtreeMvchild(nctemp10990);
q =nctemp10992;
struct tree* nctemp10997= q;
struct tree* nctemp10999=PtreeMvchild(nctemp10997);
q =nctemp10999;
struct tree* nctemp11004= q;
struct tree* nctemp11006=PtreeMvchild(nctemp11004);
q =nctemp11006;
ix =q;
struct tree* nctemp11015= q;
struct tree* nctemp11017=PtreeMvsister(nctemp11015);
q =nctemp11017;
struct tree* nctemp11023= q;
nctempchar1* nctemp11025=CodeUnexpr(nctemp11023);
tmp=nctemp11025;
struct tree* nctemp11027= p;
struct nctempchar1 *nctemp11031;
static struct nctempchar1 nctemp11032 = {{ 5}, (char*)"int \0"};
nctemp11031=&nctemp11032;
nctempchar1* nctemp11029= nctemp11031;
int nctemp11033=CodeEs(nctemp11027,nctemp11029);
struct tree* nctemp11035= p;
nctempchar1* nctemp11037= m3;
int nctemp11040=CodeEs(nctemp11035,nctemp11037);
struct tree* nctemp11042= p;
struct nctempchar1 *nctemp11046;
static struct nctempchar1 nctemp11047 = {{ 2}, (char*)"=\0"};
nctemp11046=&nctemp11047;
nctempchar1* nctemp11044= nctemp11046;
int nctemp11048=CodeEs(nctemp11042,nctemp11044);
struct tree* nctemp11050= p;
nctempchar1* nctemp11052= tmp;
int nctemp11055=CodeEs(nctemp11050,nctemp11052);
struct tree* nctemp11057= p;
struct nctempchar1 *nctemp11061;
static struct nctempchar1 nctemp11062 = {{ 4}, (char*)";\n\0"};
nctemp11061=&nctemp11062;
nctempchar1* nctemp11059= nctemp11061;
int nctemp11063=CodeEs(nctemp11057,nctemp11059);
struct tree* nctemp11069= ix;
nctempchar1* nctemp11071=PtreeGetdef(nctemp11069);
indx2=nctemp11071;
struct tree* nctemp11076= ps;
struct tree* nctemp11078=PtreeMvchild(nctemp11076);
q =nctemp11078;
struct tree* nctemp11083= q;
struct tree* nctemp11085=PtreeMvsister(nctemp11083);
q =nctemp11085;
struct tree* nctemp11093= ps;
nctempchar1* nctemp11095=PtreeGetype(nctemp11093);
nctempchar1* nctemp11091= nctemp11095;
nctempchar1* nctemp11096=CodeNewtemp(nctemp11091);
n3=nctemp11096;
struct tree* nctemp11102= q;
nctempchar1* nctemp11104=CodeExpr(nctemp11102);
tmp=nctemp11104;
struct tree* nctemp11106= q;
struct nctempchar1 *nctemp11110;
static struct nctempchar1 nctemp11111 = {{ 5}, (char*)"int \0"};
nctemp11110=&nctemp11111;
nctempchar1* nctemp11108= nctemp11110;
int nctemp11112=CodeEs(nctemp11106,nctemp11108);
struct tree* nctemp11114= q;
nctempchar1* nctemp11116= n3;
int nctemp11119=CodeEs(nctemp11114,nctemp11116);
struct tree* nctemp11121= q;
struct nctempchar1 *nctemp11125;
static struct nctempchar1 nctemp11126 = {{ 2}, (char*)"=\0"};
nctemp11125=&nctemp11126;
nctempchar1* nctemp11123= nctemp11125;
int nctemp11127=CodeEs(nctemp11121,nctemp11123);
struct tree* nctemp11129= q;
nctempchar1* nctemp11131= tmp;
int nctemp11134=CodeEs(nctemp11129,nctemp11131);
struct tree* nctemp11136= q;
struct nctempchar1 *nctemp11140;
static struct nctempchar1 nctemp11141 = {{ 4}, (char*)";\n\0"};
nctemp11140=&nctemp11141;
nctempchar1* nctemp11138= nctemp11140;
int nctemp11142=CodeEs(nctemp11136,nctemp11138);
}
p =sp;
int nctemp11147 = (rank ==1);
if(nctemp11147)
{
struct tree* nctemp11152= p;
struct nctempchar1 *nctemp11156;
static struct nctempchar1 nctemp11157 = {{ 5}, (char*)"int \0"};
nctemp11156=&nctemp11157;
nctempchar1* nctemp11154= nctemp11156;
int nctemp11158=CodeEs(nctemp11152,nctemp11154);
struct tree* nctemp11160= p;
nctempchar1* nctemp11162= nmax;
int nctemp11165=CodeEs(nctemp11160,nctemp11162);
struct tree* nctemp11167= p;
struct nctempchar1 *nctemp11171;
static struct nctempchar1 nctemp11172 = {{ 2}, (char*)"=\0"};
nctemp11171=&nctemp11172;
nctempchar1* nctemp11169= nctemp11171;
int nctemp11173=CodeEs(nctemp11167,nctemp11169);
struct tree* nctemp11175= p;
nctempchar1* nctemp11177= n1;
int nctemp11180=CodeEs(nctemp11175,nctemp11177);
struct tree* nctemp11182= p;
struct nctempchar1 *nctemp11186;
static struct nctempchar1 nctemp11187 = {{ 2}, (char*)"-\0"};
nctemp11186=&nctemp11187;
nctempchar1* nctemp11184= nctemp11186;
int nctemp11188=CodeEs(nctemp11182,nctemp11184);
struct tree* nctemp11190= p;
nctempchar1* nctemp11192= m1;
int nctemp11195=CodeEs(nctemp11190,nctemp11192);
struct tree* nctemp11197= p;
struct nctempchar1 *nctemp11201;
static struct nctempchar1 nctemp11202 = {{ 4}, (char*)";\n\0"};
nctemp11201=&nctemp11202;
nctempchar1* nctemp11199= nctemp11201;
int nctemp11203=CodeEs(nctemp11197,nctemp11199);
}
int nctemp11204 = (rank ==2);
if(nctemp11204)
{
struct tree* nctemp11209= p;
struct nctempchar1 *nctemp11213;
static struct nctempchar1 nctemp11214 = {{ 5}, (char*)"int \0"};
nctemp11213=&nctemp11214;
nctempchar1* nctemp11211= nctemp11213;
int nctemp11215=CodeEs(nctemp11209,nctemp11211);
struct tree* nctemp11217= p;
nctempchar1* nctemp11219= nmax;
int nctemp11222=CodeEs(nctemp11217,nctemp11219);
struct tree* nctemp11224= p;
struct nctempchar1 *nctemp11228;
static struct nctempchar1 nctemp11229 = {{ 2}, (char*)"=\0"};
nctemp11228=&nctemp11229;
nctempchar1* nctemp11226= nctemp11228;
int nctemp11230=CodeEs(nctemp11224,nctemp11226);
struct tree* nctemp11232= p;
struct nctempchar1 *nctemp11236;
static struct nctempchar1 nctemp11237 = {{ 2}, (char*)"(\0"};
nctemp11236=&nctemp11237;
nctempchar1* nctemp11234= nctemp11236;
int nctemp11238=CodeEs(nctemp11232,nctemp11234);
struct tree* nctemp11240= p;
nctempchar1* nctemp11242= n1;
int nctemp11245=CodeEs(nctemp11240,nctemp11242);
struct tree* nctemp11247= p;
struct nctempchar1 *nctemp11251;
static struct nctempchar1 nctemp11252 = {{ 2}, (char*)"-\0"};
nctemp11251=&nctemp11252;
nctempchar1* nctemp11249= nctemp11251;
int nctemp11253=CodeEs(nctemp11247,nctemp11249);
struct tree* nctemp11255= p;
nctempchar1* nctemp11257= m1;
int nctemp11260=CodeEs(nctemp11255,nctemp11257);
struct tree* nctemp11262= p;
struct nctempchar1 *nctemp11266;
static struct nctempchar1 nctemp11267 = {{ 2}, (char*)")\0"};
nctemp11266=&nctemp11267;
nctempchar1* nctemp11264= nctemp11266;
int nctemp11268=CodeEs(nctemp11262,nctemp11264);
struct tree* nctemp11270= p;
struct nctempchar1 *nctemp11274;
static struct nctempchar1 nctemp11275 = {{ 2}, (char*)"*\0"};
nctemp11274=&nctemp11275;
nctempchar1* nctemp11272= nctemp11274;
int nctemp11276=CodeEs(nctemp11270,nctemp11272);
struct tree* nctemp11278= p;
struct nctempchar1 *nctemp11282;
static struct nctempchar1 nctemp11283 = {{ 2}, (char*)"(\0"};
nctemp11282=&nctemp11283;
nctempchar1* nctemp11280= nctemp11282;
int nctemp11284=CodeEs(nctemp11278,nctemp11280);
struct tree* nctemp11286= p;
nctempchar1* nctemp11288= n2;
int nctemp11291=CodeEs(nctemp11286,nctemp11288);
struct tree* nctemp11293= p;
struct nctempchar1 *nctemp11297;
static struct nctempchar1 nctemp11298 = {{ 2}, (char*)"-\0"};
nctemp11297=&nctemp11298;
nctempchar1* nctemp11295= nctemp11297;
int nctemp11299=CodeEs(nctemp11293,nctemp11295);
struct tree* nctemp11301= p;
nctempchar1* nctemp11303= m2;
int nctemp11306=CodeEs(nctemp11301,nctemp11303);
struct tree* nctemp11308= p;
struct nctempchar1 *nctemp11312;
static struct nctempchar1 nctemp11313 = {{ 5}, (char*)");\n\0"};
nctemp11312=&nctemp11313;
nctempchar1* nctemp11310= nctemp11312;
int nctemp11314=CodeEs(nctemp11308,nctemp11310);
}
else{
int nctemp11315 = (rank ==3);
if(nctemp11315)
{
p =sp;
struct tree* nctemp11324= p;
nctempchar1* nctemp11326= nmax;
int nctemp11329=CodeEs(nctemp11324,nctemp11326);
struct tree* nctemp11331= p;
struct nctempchar1 *nctemp11335;
static struct nctempchar1 nctemp11336 = {{ 2}, (char*)"=\0"};
nctemp11335=&nctemp11336;
nctempchar1* nctemp11333= nctemp11335;
int nctemp11337=CodeEs(nctemp11331,nctemp11333);
struct tree* nctemp11339= p;
nctempchar1* nctemp11341= n1;
int nctemp11344=CodeEs(nctemp11339,nctemp11341);
struct tree* nctemp11346= p;
struct nctempchar1 *nctemp11350;
static struct nctempchar1 nctemp11351 = {{ 2}, (char*)"*\0"};
nctemp11350=&nctemp11351;
nctempchar1* nctemp11348= nctemp11350;
int nctemp11352=CodeEs(nctemp11346,nctemp11348);
struct tree* nctemp11354= p;
nctempchar1* nctemp11356= n2;
int nctemp11359=CodeEs(nctemp11354,nctemp11356);
struct tree* nctemp11361= p;
struct nctempchar1 *nctemp11365;
static struct nctempchar1 nctemp11366 = {{ 2}, (char*)"*\0"};
nctemp11365=&nctemp11366;
nctempchar1* nctemp11363= nctemp11365;
int nctemp11367=CodeEs(nctemp11361,nctemp11363);
struct tree* nctemp11369= p;
nctempchar1* nctemp11371= n3;
int nctemp11374=CodeEs(nctemp11369,nctemp11371);
struct tree* nctemp11376= p;
struct nctempchar1 *nctemp11380;
static struct nctempchar1 nctemp11381 = {{ 4}, (char*)";\n\0"};
nctemp11380=&nctemp11381;
nctempchar1* nctemp11378= nctemp11380;
int nctemp11382=CodeEs(nctemp11376,nctemp11378);
}
}
struct tree* nctemp11384= p;
struct nctempchar1 *nctemp11388;
static struct nctempchar1 nctemp11389 = {{ 5}, (char*)"for(\0"};
nctemp11388=&nctemp11389;
nctempchar1* nctemp11386= nctemp11388;
int nctemp11390=CodeEs(nctemp11384,nctemp11386);
struct tree* nctemp11392= p;
struct nctempchar1 *nctemp11396;
static struct nctempchar1 nctemp11397 = {{ 5}, (char*)"int \0"};
nctemp11396=&nctemp11397;
nctempchar1* nctemp11394= nctemp11396;
int nctemp11398=CodeEs(nctemp11392,nctemp11394);
struct tree* nctemp11400= p;
nctempchar1* nctemp11402= pno;
int nctemp11405=CodeEs(nctemp11400,nctemp11402);
struct tree* nctemp11407= p;
struct nctempchar1 *nctemp11411;
static struct nctempchar1 nctemp11412 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11411=&nctemp11412;
nctempchar1* nctemp11409= nctemp11411;
int nctemp11413=CodeEs(nctemp11407,nctemp11409);
struct tree* nctemp11415= p;
nctempchar1* nctemp11417= pno;
int nctemp11420=CodeEs(nctemp11415,nctemp11417);
struct tree* nctemp11422= p;
struct nctempchar1 *nctemp11426;
static struct nctempchar1 nctemp11427 = {{ 2}, (char*)"<\0"};
nctemp11426=&nctemp11427;
nctempchar1* nctemp11424= nctemp11426;
int nctemp11428=CodeEs(nctemp11422,nctemp11424);
struct tree* nctemp11430= p;
nctempchar1* nctemp11432= nmax;
int nctemp11435=CodeEs(nctemp11430,nctemp11432);
struct tree* nctemp11437= p;
struct nctempchar1 *nctemp11441;
static struct nctempchar1 nctemp11442 = {{ 2}, (char*)";\0"};
nctemp11441=&nctemp11442;
nctempchar1* nctemp11439= nctemp11441;
int nctemp11443=CodeEs(nctemp11437,nctemp11439);
struct tree* nctemp11445= p;
nctempchar1* nctemp11447= pno;
int nctemp11450=CodeEs(nctemp11445,nctemp11447);
struct tree* nctemp11452= p;
struct nctempchar1 *nctemp11456;
static struct nctempchar1 nctemp11457 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11456=&nctemp11457;
nctempchar1* nctemp11454= nctemp11456;
int nctemp11458=CodeEs(nctemp11452,nctemp11454);
struct tree* nctemp11460= p;
struct nctempchar1 *nctemp11464;
static struct nctempchar1 nctemp11465 = {{ 5}, (char*)"){\n\0"};
nctemp11464=&nctemp11465;
nctempchar1* nctemp11462= nctemp11464;
int nctemp11466=CodeEs(nctemp11460,nctemp11462);
int nctemp11467 = (rank ==1);
if(nctemp11467)
{
struct tree* nctemp11472= p;
nctempchar1* nctemp11474= indx1;
int nctemp11477=CodeEs(nctemp11472,nctemp11474);
struct tree* nctemp11479= p;
struct nctempchar1 *nctemp11483;
static struct nctempchar1 nctemp11484 = {{ 2}, (char*)"=\0"};
nctemp11483=&nctemp11484;
nctempchar1* nctemp11481= nctemp11483;
int nctemp11485=CodeEs(nctemp11479,nctemp11481);
struct tree* nctemp11487= p;
nctempchar1* nctemp11489= m1;
int nctemp11492=CodeEs(nctemp11487,nctemp11489);
struct tree* nctemp11494= p;
struct nctempchar1 *nctemp11498;
static struct nctempchar1 nctemp11499 = {{ 2}, (char*)"+\0"};
nctemp11498=&nctemp11499;
nctempchar1* nctemp11496= nctemp11498;
int nctemp11500=CodeEs(nctemp11494,nctemp11496);
struct tree* nctemp11502= p;
struct nctempchar1 *nctemp11506;
static struct nctempchar1 nctemp11507 = {{ 12}, (char*)"nctempno;\n\0"};
nctemp11506=&nctemp11507;
nctempchar1* nctemp11504= nctemp11506;
int nctemp11508=CodeEs(nctemp11502,nctemp11504);
}
int nctemp11509 = (rank ==2);
if(nctemp11509)
{
struct tree* nctemp11514= p;
nctempchar1* nctemp11516= indx2;
int nctemp11519=CodeEs(nctemp11514,nctemp11516);
struct tree* nctemp11521= p;
struct nctempchar1 *nctemp11525;
static struct nctempchar1 nctemp11526 = {{ 2}, (char*)"=\0"};
nctemp11525=&nctemp11526;
nctempchar1* nctemp11523= nctemp11525;
int nctemp11527=CodeEs(nctemp11521,nctemp11523);
struct tree* nctemp11529= p;
nctempchar1* nctemp11531= m2;
int nctemp11534=CodeEs(nctemp11529,nctemp11531);
struct tree* nctemp11536= p;
struct nctempchar1 *nctemp11540;
static struct nctempchar1 nctemp11541 = {{ 2}, (char*)"+\0"};
nctemp11540=&nctemp11541;
nctempchar1* nctemp11538= nctemp11540;
int nctemp11542=CodeEs(nctemp11536,nctemp11538);
struct tree* nctemp11544= p;
struct nctempchar1 *nctemp11548;
static struct nctempchar1 nctemp11549 = {{ 9}, (char*)"nctempno\0"};
nctemp11548=&nctemp11549;
nctempchar1* nctemp11546= nctemp11548;
int nctemp11550=CodeEs(nctemp11544,nctemp11546);
struct tree* nctemp11552= p;
struct nctempchar1 *nctemp11556;
static struct nctempchar1 nctemp11557 = {{ 3}, (char*)"/(\0"};
nctemp11556=&nctemp11557;
nctempchar1* nctemp11554= nctemp11556;
int nctemp11558=CodeEs(nctemp11552,nctemp11554);
struct tree* nctemp11560= p;
nctempchar1* nctemp11562= n1;
int nctemp11565=CodeEs(nctemp11560,nctemp11562);
struct tree* nctemp11567= p;
struct nctempchar1 *nctemp11571;
static struct nctempchar1 nctemp11572 = {{ 2}, (char*)"-\0"};
nctemp11571=&nctemp11572;
nctempchar1* nctemp11569= nctemp11571;
int nctemp11573=CodeEs(nctemp11567,nctemp11569);
struct tree* nctemp11575= p;
nctempchar1* nctemp11577= m1;
int nctemp11580=CodeEs(nctemp11575,nctemp11577);
struct tree* nctemp11582= p;
struct nctempchar1 *nctemp11586;
static struct nctempchar1 nctemp11587 = {{ 2}, (char*)")\0"};
nctemp11586=&nctemp11587;
nctempchar1* nctemp11584= nctemp11586;
int nctemp11588=CodeEs(nctemp11582,nctemp11584);
struct tree* nctemp11590= p;
struct nctempchar1 *nctemp11594;
static struct nctempchar1 nctemp11595 = {{ 4}, (char*)";\n\0"};
nctemp11594=&nctemp11595;
nctempchar1* nctemp11592= nctemp11594;
int nctemp11596=CodeEs(nctemp11590,nctemp11592);
struct tree* nctemp11598= p;
nctempchar1* nctemp11600= indx1;
int nctemp11603=CodeEs(nctemp11598,nctemp11600);
struct tree* nctemp11605= p;
struct nctempchar1 *nctemp11609;
static struct nctempchar1 nctemp11610 = {{ 2}, (char*)"=\0"};
nctemp11609=&nctemp11610;
nctempchar1* nctemp11607= nctemp11609;
int nctemp11611=CodeEs(nctemp11605,nctemp11607);
struct tree* nctemp11613= p;
nctempchar1* nctemp11615= m1;
int nctemp11618=CodeEs(nctemp11613,nctemp11615);
struct tree* nctemp11620= p;
struct nctempchar1 *nctemp11624;
static struct nctempchar1 nctemp11625 = {{ 2}, (char*)"+\0"};
nctemp11624=&nctemp11625;
nctempchar1* nctemp11622= nctemp11624;
int nctemp11626=CodeEs(nctemp11620,nctemp11622);
struct tree* nctemp11628= p;
struct nctempchar1 *nctemp11632;
static struct nctempchar1 nctemp11633 = {{ 9}, (char*)"nctempno\0"};
nctemp11632=&nctemp11633;
nctempchar1* nctemp11630= nctemp11632;
int nctemp11634=CodeEs(nctemp11628,nctemp11630);
struct tree* nctemp11636= p;
struct nctempchar1 *nctemp11640;
static struct nctempchar1 nctemp11641 = {{ 3}, (char*)"%(\0"};
nctemp11640=&nctemp11641;
nctempchar1* nctemp11638= nctemp11640;
int nctemp11642=CodeEs(nctemp11636,nctemp11638);
struct tree* nctemp11644= p;
nctempchar1* nctemp11646= n1;
int nctemp11649=CodeEs(nctemp11644,nctemp11646);
struct tree* nctemp11651= p;
struct nctempchar1 *nctemp11655;
static struct nctempchar1 nctemp11656 = {{ 2}, (char*)"-\0"};
nctemp11655=&nctemp11656;
nctempchar1* nctemp11653= nctemp11655;
int nctemp11657=CodeEs(nctemp11651,nctemp11653);
struct tree* nctemp11659= p;
nctempchar1* nctemp11661= m1;
int nctemp11664=CodeEs(nctemp11659,nctemp11661);
struct tree* nctemp11666= p;
struct nctempchar1 *nctemp11670;
static struct nctempchar1 nctemp11671 = {{ 2}, (char*)")\0"};
nctemp11670=&nctemp11671;
nctempchar1* nctemp11668= nctemp11670;
int nctemp11672=CodeEs(nctemp11666,nctemp11668);
struct tree* nctemp11674= p;
struct nctempchar1 *nctemp11678;
static struct nctempchar1 nctemp11679 = {{ 4}, (char*)";\n\0"};
nctemp11678=&nctemp11679;
nctempchar1* nctemp11676= nctemp11678;
int nctemp11680=CodeEs(nctemp11674,nctemp11676);
}
int nctemp11681 = (rank ==3);
if(nctemp11681)
{
struct tree* nctemp11686= p;
nctempchar1* nctemp11688= indx2;
int nctemp11691=CodeEs(nctemp11686,nctemp11688);
struct tree* nctemp11693= p;
struct nctempchar1 *nctemp11697;
static struct nctempchar1 nctemp11698 = {{ 2}, (char*)"=\0"};
nctemp11697=&nctemp11698;
nctempchar1* nctemp11695= nctemp11697;
int nctemp11699=CodeEs(nctemp11693,nctemp11695);
struct tree* nctemp11701= p;
nctempchar1* nctemp11703= m2;
int nctemp11706=CodeEs(nctemp11701,nctemp11703);
struct tree* nctemp11708= p;
struct nctempchar1 *nctemp11712;
static struct nctempchar1 nctemp11713 = {{ 2}, (char*)"+\0"};
nctemp11712=&nctemp11713;
nctempchar1* nctemp11710= nctemp11712;
int nctemp11714=CodeEs(nctemp11708,nctemp11710);
struct tree* nctemp11716= p;
struct nctempchar1 *nctemp11720;
static struct nctempchar1 nctemp11721 = {{ 9}, (char*)"nctempno\0"};
nctemp11720=&nctemp11721;
nctempchar1* nctemp11718= nctemp11720;
int nctemp11722=CodeEs(nctemp11716,nctemp11718);
struct tree* nctemp11724= p;
struct nctempchar1 *nctemp11728;
static struct nctempchar1 nctemp11729 = {{ 3}, (char*)"/(\0"};
nctemp11728=&nctemp11729;
nctempchar1* nctemp11726= nctemp11728;
int nctemp11730=CodeEs(nctemp11724,nctemp11726);
struct tree* nctemp11732= p;
nctempchar1* nctemp11734= n1;
int nctemp11737=CodeEs(nctemp11732,nctemp11734);
struct tree* nctemp11739= p;
struct nctempchar1 *nctemp11743;
static struct nctempchar1 nctemp11744 = {{ 2}, (char*)"-\0"};
nctemp11743=&nctemp11744;
nctempchar1* nctemp11741= nctemp11743;
int nctemp11745=CodeEs(nctemp11739,nctemp11741);
struct tree* nctemp11747= p;
nctempchar1* nctemp11749= m1;
int nctemp11752=CodeEs(nctemp11747,nctemp11749);
struct tree* nctemp11754= p;
struct nctempchar1 *nctemp11758;
static struct nctempchar1 nctemp11759 = {{ 2}, (char*)")\0"};
nctemp11758=&nctemp11759;
nctempchar1* nctemp11756= nctemp11758;
int nctemp11760=CodeEs(nctemp11754,nctemp11756);
struct tree* nctemp11762= p;
struct nctempchar1 *nctemp11766;
static struct nctempchar1 nctemp11767 = {{ 4}, (char*)";\n\0"};
nctemp11766=&nctemp11767;
nctempchar1* nctemp11764= nctemp11766;
int nctemp11768=CodeEs(nctemp11762,nctemp11764);
struct tree* nctemp11770= p;
nctempchar1* nctemp11772= indx1;
int nctemp11775=CodeEs(nctemp11770,nctemp11772);
struct tree* nctemp11777= p;
struct nctempchar1 *nctemp11781;
static struct nctempchar1 nctemp11782 = {{ 2}, (char*)"=\0"};
nctemp11781=&nctemp11782;
nctempchar1* nctemp11779= nctemp11781;
int nctemp11783=CodeEs(nctemp11777,nctemp11779);
struct tree* nctemp11785= p;
nctempchar1* nctemp11787= m1;
int nctemp11790=CodeEs(nctemp11785,nctemp11787);
struct tree* nctemp11792= p;
struct nctempchar1 *nctemp11796;
static struct nctempchar1 nctemp11797 = {{ 2}, (char*)"+\0"};
nctemp11796=&nctemp11797;
nctempchar1* nctemp11794= nctemp11796;
int nctemp11798=CodeEs(nctemp11792,nctemp11794);
struct tree* nctemp11800= p;
struct nctempchar1 *nctemp11804;
static struct nctempchar1 nctemp11805 = {{ 9}, (char*)"nctempno\0"};
nctemp11804=&nctemp11805;
nctempchar1* nctemp11802= nctemp11804;
int nctemp11806=CodeEs(nctemp11800,nctemp11802);
struct tree* nctemp11808= p;
struct nctempchar1 *nctemp11812;
static struct nctempchar1 nctemp11813 = {{ 3}, (char*)"%(\0"};
nctemp11812=&nctemp11813;
nctempchar1* nctemp11810= nctemp11812;
int nctemp11814=CodeEs(nctemp11808,nctemp11810);
struct tree* nctemp11816= p;
nctempchar1* nctemp11818= n1;
int nctemp11821=CodeEs(nctemp11816,nctemp11818);
struct tree* nctemp11823= p;
struct nctempchar1 *nctemp11827;
static struct nctempchar1 nctemp11828 = {{ 2}, (char*)"-\0"};
nctemp11827=&nctemp11828;
nctempchar1* nctemp11825= nctemp11827;
int nctemp11829=CodeEs(nctemp11823,nctemp11825);
struct tree* nctemp11831= p;
nctempchar1* nctemp11833= m1;
int nctemp11836=CodeEs(nctemp11831,nctemp11833);
struct tree* nctemp11838= p;
struct nctempchar1 *nctemp11842;
static struct nctempchar1 nctemp11843 = {{ 2}, (char*)")\0"};
nctemp11842=&nctemp11843;
nctempchar1* nctemp11840= nctemp11842;
int nctemp11844=CodeEs(nctemp11838,nctemp11840);
struct tree* nctemp11846= p;
struct nctempchar1 *nctemp11850;
static struct nctempchar1 nctemp11851 = {{ 4}, (char*)";\n\0"};
nctemp11850=&nctemp11851;
nctempchar1* nctemp11848= nctemp11850;
int nctemp11852=CodeEs(nctemp11846,nctemp11848);
}
struct tree* nctemp11857= sp;
struct tree* nctemp11859=PtreeMvchild(nctemp11857);
p =nctemp11859;
struct tree* nctemp11864= p;
struct tree* nctemp11866=PtreeMvsister(nctemp11864);
p =nctemp11866;
struct tree* nctemp11868= p;
int nctemp11870=CodeCompstmnt(nctemp11868);
struct tree* nctemp11872= p;
struct nctempchar1 *nctemp11876;
static struct nctempchar1 nctemp11877 = {{ 4}, (char*)"}\n\0"};
nctemp11876=&nctemp11877;
nctempchar1* nctemp11874= nctemp11876;
int nctemp11878=CodeEs(nctemp11872,nctemp11874);
int nctemp11880= 0;
int nctemp11882=CodeSetparallel(nctemp11880);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp11892= sp;
int nctemp11894=PtreeGetrank(nctemp11892);
rank =nctemp11894;
struct tree* nctemp11899= p;
struct tree* nctemp11901=PtreeMvchild(nctemp11899);
p =nctemp11901;
struct tree* nctemp11906= p;
struct tree* nctemp11908=PtreeMvchild(nctemp11906);
p =nctemp11908;
struct tree* nctemp11910= p;
int nctemp11912= 0;
int nctemp11914= rank;
int nctemp11916=CodeParallelfor(nctemp11910,nctemp11912,nctemp11914);
struct tree* nctemp11921= sp;
struct tree* nctemp11923=PtreeMvchild(nctemp11921);
sp =nctemp11923;
struct tree* nctemp11928= sp;
struct tree* nctemp11930=PtreeMvsister(nctemp11928);
sp =nctemp11930;
struct tree* nctemp11932= sp;
int nctemp11934=CodeStmnt(nctemp11932);
i =0;
int nctemp11939 = (i < rank);
while(nctemp11939){
{
struct tree* nctemp11944= sp;
struct nctempchar1 *nctemp11948;
static struct nctempchar1 nctemp11949 = {{ 2}, (char*)"}\0"};
nctemp11948=&nctemp11949;
nctempchar1* nctemp11946= nctemp11948;
int nctemp11950=CodeEs(nctemp11944,nctemp11946);
}
int nctemp11959 = i + 1;
i =nctemp11959;
int nctemp11960 = (i < rank);
nctemp11939=nctemp11960;
}
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11968=CodeGetarch();
int nctemp11965 = (nctemp11968 ==1);
if(nctemp11965)
{
struct tree* nctemp11971= p;
int nctemp11973=CodeParallelstmntcpu(nctemp11971);
}
else{
int nctemp11977=CodeGetarch();
int nctemp11974 = (nctemp11977 ==2);
if(nctemp11974)
{
struct tree* nctemp11980= p;
int nctemp11982=CodeParallelstmntgpu(nctemp11980);
}
else{
int nctemp11986=CodeGetarch();
int nctemp11983 = (nctemp11986 ==3);
if(nctemp11983)
{
struct tree* nctemp11989= p;
int nctemp11991=CodeParallelstmntgpu(nctemp11989);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11997= p;
struct tree* nctemp11999=PtreeMvchild(nctemp11997);
p =nctemp11999;
struct tree* nctemp12005= p;
nctempchar1* nctemp12007=CodeExpr(nctemp12005);
cond=nctemp12007;
struct tree* nctemp12009= p;
struct nctempchar1 *nctemp12013;
static struct nctempchar1 nctemp12014 = {{ 4}, (char*)"if(\0"};
nctemp12013=&nctemp12014;
nctempchar1* nctemp12011= nctemp12013;
int nctemp12015=CodeEs(nctemp12009,nctemp12011);
struct tree* nctemp12017= p;
nctempchar1* nctemp12019= cond;
int nctemp12022=CodeEs(nctemp12017,nctemp12019);
struct tree* nctemp12024= p;
struct nctempchar1 *nctemp12028;
static struct nctempchar1 nctemp12029 = {{ 4}, (char*)")\n\0"};
nctemp12028=&nctemp12029;
nctempchar1* nctemp12026= nctemp12028;
int nctemp12030=CodeEs(nctemp12024,nctemp12026);
struct tree* nctemp12035= p;
struct tree* nctemp12037=PtreeMvsister(nctemp12035);
p =nctemp12037;
struct tree* nctemp12039= p;
int nctemp12041=CodeStmnt(nctemp12039);
struct tree* nctemp12049= p;
struct tree* nctemp12051=PtreeMvsister(nctemp12049);
p =nctemp12051;
int nctemp12042 = (p !=0);
if(nctemp12042)
{
struct tree* nctemp12058= p;
nctempchar1* nctemp12060=PtreeGetname(nctemp12058);
nctempchar1* nctemp12056= nctemp12060;
struct nctempchar1 *nctemp12063;
static struct nctempchar1 nctemp12064 = {{ 5}, (char*)"else\0"};
nctemp12063=&nctemp12064;
nctempchar1* nctemp12061= nctemp12063;
int nctemp12065=LibeStrcmp(nctemp12056,nctemp12061);
int nctemp12053 = (nctemp12065 ==1);
if(nctemp12053)
{
struct tree* nctemp12071= p;
struct tree* nctemp12073=PtreeMvchild(nctemp12071);
p =nctemp12073;
struct tree* nctemp12075= p;
struct nctempchar1 *nctemp12079;
static struct nctempchar1 nctemp12080 = {{ 5}, (char*)"else\0"};
nctemp12079=&nctemp12080;
nctempchar1* nctemp12077= nctemp12079;
int nctemp12081=CodeEs(nctemp12075,nctemp12077);
struct tree* nctemp12083= p;
int nctemp12085=CodeStmnt(nctemp12083);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12091= p;
struct tree* nctemp12093=PtreeMvchild(nctemp12091);
np =nctemp12093;
struct tree* nctemp12099= np;
nctempchar1* nctemp12101=CodeExpr(nctemp12099);
rval=nctemp12101;
struct tree* nctemp12103= np;
struct nctempchar1 *nctemp12107;
static struct nctempchar1 nctemp12108 = {{ 8}, (char*)"return \0"};
nctemp12107=&nctemp12108;
nctempchar1* nctemp12105= nctemp12107;
int nctemp12109=CodeEs(nctemp12103,nctemp12105);
struct tree* nctemp12111= np;
nctempchar1* nctemp12113= rval;
int nctemp12116=CodeEs(nctemp12111,nctemp12113);
struct tree* nctemp12118= np;
struct nctempchar1 *nctemp12122;
static struct nctempchar1 nctemp12123 = {{ 4}, (char*)";\n\0"};
nctemp12122=&nctemp12123;
nctempchar1* nctemp12120= nctemp12122;
int nctemp12124=CodeEs(nctemp12118,nctemp12120);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp12131= p;
struct nctempchar1 *nctemp12135;
static struct nctempchar1 nctemp12136 = {{ 4}, (char*)"{\n\0"};
nctemp12135=&nctemp12136;
nctempchar1* nctemp12133= nctemp12135;
int nctemp12137=CodeEs(nctemp12131,nctemp12133);
struct tree* nctemp12142= p;
struct tree* nctemp12144=PtreeMvchild(nctemp12142);
p =nctemp12144;
int nctemp12145 = (p ==0);
if(nctemp12145)
{
struct tree* nctemp12150= sp;
struct nctempchar1 *nctemp12154;
static struct nctempchar1 nctemp12155 = {{ 4}, (char*)"}\n\0"};
nctemp12154=&nctemp12155;
nctempchar1* nctemp12152= nctemp12154;
int nctemp12156=CodeEs(nctemp12150,nctemp12152);
return 1;
}
struct tree* nctemp12159= p;
struct symbol* nctemp12163=SymGetltp();
struct symbol* nctemp12161= nctemp12163;
int nctemp12164=CodeDeclarations(nctemp12159,nctemp12161);
struct tree* nctemp12170= p;
nctempchar1* nctemp12172=PtreeGetname(nctemp12170);
nctempchar1* nctemp12168= nctemp12172;
struct nctempchar1 *nctemp12175;
static struct nctempchar1 nctemp12176 = {{ 13}, (char*)"declarations\0"};
nctemp12175=&nctemp12176;
nctempchar1* nctemp12173= nctemp12175;
int nctemp12177=LibeStrcmp(nctemp12168,nctemp12173);
int nctemp12165 = (nctemp12177 ==1);
if(nctemp12165)
{
struct tree* nctemp12183= p;
struct tree* nctemp12185=PtreeMvsister(nctemp12183);
p =nctemp12185;
}
int nctemp12186 = (p !=0);
int nctemp12190=nctemp12186;
while(nctemp12190)
{{
struct tree* nctemp12196= p;
nctempchar1* nctemp12198=PtreeGetname(nctemp12196);
nctempchar1* nctemp12194= nctemp12198;
struct nctempchar1 *nctemp12201;
static struct nctempchar1 nctemp12202 = {{ 5}, (char*)"expr\0"};
nctemp12201=&nctemp12202;
nctempchar1* nctemp12199= nctemp12201;
int nctemp12203=LibeStrcmp(nctemp12194,nctemp12199);
int nctemp12191 = (nctemp12203 ==1);
if(nctemp12191)
{
struct tree* nctemp12206= p;
nctempchar1* nctemp12208=CodeExpr(nctemp12206);
}
struct tree* nctemp12214= p;
nctempchar1* nctemp12216=PtreeGetname(nctemp12214);
nctempchar1* nctemp12212= nctemp12216;
struct nctempchar1 *nctemp12219;
static struct nctempchar1 nctemp12220 = {{ 6}, (char*)"while\0"};
nctemp12219=&nctemp12220;
nctempchar1* nctemp12217= nctemp12219;
int nctemp12221=LibeStrcmp(nctemp12212,nctemp12217);
int nctemp12209 = (nctemp12221 ==1);
if(nctemp12209)
{
struct tree* nctemp12224= p;
int nctemp12226=CodeWhilestmnt(nctemp12224);
}
struct tree* nctemp12232= p;
nctempchar1* nctemp12234=PtreeGetname(nctemp12232);
nctempchar1* nctemp12230= nctemp12234;
struct nctempchar1 *nctemp12237;
static struct nctempchar1 nctemp12238 = {{ 4}, (char*)"for\0"};
nctemp12237=&nctemp12238;
nctempchar1* nctemp12235= nctemp12237;
int nctemp12239=LibeStrcmp(nctemp12230,nctemp12235);
int nctemp12227 = (nctemp12239 ==1);
if(nctemp12227)
{
struct tree* nctemp12245= p;
struct tree* nctemp12247=PtreeMvchild(nctemp12245);
q =nctemp12247;
struct tree* nctemp12249= q;
struct tree* nctemp12251=PtreeMvsister(nctemp12249);
struct tree* nctemp12253= p;
int nctemp12255=CodeForstmnt(nctemp12253);
}
struct tree* nctemp12261= p;
nctempchar1* nctemp12263=PtreeGetname(nctemp12261);
nctempchar1* nctemp12259= nctemp12263;
struct nctempchar1 *nctemp12266;
static struct nctempchar1 nctemp12267 = {{ 9}, (char*)"parallel\0"};
nctemp12266=&nctemp12267;
nctempchar1* nctemp12264= nctemp12266;
int nctemp12268=LibeStrcmp(nctemp12259,nctemp12264);
int nctemp12256 = (nctemp12268 ==1);
if(nctemp12256)
{
struct tree* nctemp12271= p;
int nctemp12273=CodeParallelstmnt(nctemp12271);
}
struct tree* nctemp12279= p;
nctempchar1* nctemp12281=PtreeGetname(nctemp12279);
nctempchar1* nctemp12277= nctemp12281;
struct nctempchar1 *nctemp12284;
static struct nctempchar1 nctemp12285 = {{ 3}, (char*)"if\0"};
nctemp12284=&nctemp12285;
nctempchar1* nctemp12282= nctemp12284;
int nctemp12286=LibeStrcmp(nctemp12277,nctemp12282);
int nctemp12274 = (nctemp12286 ==1);
if(nctemp12274)
{
struct tree* nctemp12289= p;
int nctemp12291=CodeIfstmnt(nctemp12289);
}
struct tree* nctemp12297= p;
nctempchar1* nctemp12299=PtreeGetname(nctemp12297);
nctempchar1* nctemp12295= nctemp12299;
struct nctempchar1 *nctemp12302;
static struct nctempchar1 nctemp12303 = {{ 7}, (char*)"return\0"};
nctemp12302=&nctemp12303;
nctempchar1* nctemp12300= nctemp12302;
int nctemp12304=LibeStrcmp(nctemp12295,nctemp12300);
int nctemp12292 = (nctemp12304 ==1);
if(nctemp12292)
{
struct tree* nctemp12307= p;
int nctemp12309=CodeReturnstmnt(nctemp12307);
}
struct tree* nctemp12314= p;
struct tree* nctemp12316=PtreeMvsister(nctemp12314);
p =nctemp12316;
}
int nctemp12317 = (p !=0);
nctemp12190=nctemp12317;}struct tree* nctemp12322= sp;
struct nctempchar1 *nctemp12326;
static struct nctempchar1 nctemp12327 = {{ 4}, (char*)"}\n\0"};
nctemp12326=&nctemp12327;
nctempchar1* nctemp12324= nctemp12326;
int nctemp12328=CodeEs(nctemp12322,nctemp12324);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp12335= p;
struct nctempchar1 *nctemp12339;
static struct nctempchar1 nctemp12340 = {{ 4}, (char*)"{\n\0"};
nctemp12339=&nctemp12340;
nctempchar1* nctemp12337= nctemp12339;
int nctemp12341=CodeEs(nctemp12335,nctemp12337);
struct tree* nctemp12347= p;
nctempchar1* nctemp12349=PtreeGetname(nctemp12347);
nctempchar1* nctemp12345= nctemp12349;
struct nctempchar1 *nctemp12352;
static struct nctempchar1 nctemp12353 = {{ 10}, (char*)"compstmnt\0"};
nctemp12352=&nctemp12353;
nctempchar1* nctemp12350= nctemp12352;
int nctemp12354=LibeStrcmp(nctemp12345,nctemp12350);
int nctemp12342 = (nctemp12354 ==1);
if(nctemp12342)
{
struct tree* nctemp12360= p;
struct tree* nctemp12362=PtreeMvchild(nctemp12360);
p =nctemp12362;
struct tree* nctemp12364= p;
struct symbol* nctemp12368=SymGetltp();
struct symbol* nctemp12366= nctemp12368;
int nctemp12369=CodeDeclarations(nctemp12364,nctemp12366);
struct tree* nctemp12375= p;
nctempchar1* nctemp12377=PtreeGetname(nctemp12375);
nctempchar1* nctemp12373= nctemp12377;
struct nctempchar1 *nctemp12380;
static struct nctempchar1 nctemp12381 = {{ 13}, (char*)"declarations\0"};
nctemp12380=&nctemp12381;
nctempchar1* nctemp12378= nctemp12380;
int nctemp12382=LibeStrcmp(nctemp12373,nctemp12378);
int nctemp12370 = (nctemp12382 ==1);
if(nctemp12370)
{
struct tree* nctemp12388= p;
struct tree* nctemp12390=PtreeMvsister(nctemp12388);
p =nctemp12390;
}
}
int nctemp12391 = (p !=0);
int nctemp12395=nctemp12391;
while(nctemp12395)
{{
struct tree* nctemp12401= p;
nctempchar1* nctemp12403=PtreeGetname(nctemp12401);
nctempchar1* nctemp12399= nctemp12403;
struct nctempchar1 *nctemp12406;
static struct nctempchar1 nctemp12407 = {{ 10}, (char*)"compstmnt\0"};
nctemp12406=&nctemp12407;
nctempchar1* nctemp12404= nctemp12406;
int nctemp12408=LibeStrcmp(nctemp12399,nctemp12404);
int nctemp12396 = (nctemp12408 ==1);
if(nctemp12396)
{
struct tree* nctemp12411= p;
int nctemp12413=CodeCompstmnt(nctemp12411);
}
struct tree* nctemp12419= p;
nctempchar1* nctemp12421=PtreeGetname(nctemp12419);
nctempchar1* nctemp12417= nctemp12421;
struct nctempchar1 *nctemp12424;
static struct nctempchar1 nctemp12425 = {{ 5}, (char*)"expr\0"};
nctemp12424=&nctemp12425;
nctempchar1* nctemp12422= nctemp12424;
int nctemp12426=LibeStrcmp(nctemp12417,nctemp12422);
int nctemp12414 = (nctemp12426 ==1);
if(nctemp12414)
{
struct tree* nctemp12429= p;
nctempchar1* nctemp12431=CodeExpr(nctemp12429);
}
struct tree* nctemp12437= p;
nctempchar1* nctemp12439=PtreeGetname(nctemp12437);
nctempchar1* nctemp12435= nctemp12439;
struct nctempchar1 *nctemp12442;
static struct nctempchar1 nctemp12443 = {{ 6}, (char*)"while\0"};
nctemp12442=&nctemp12443;
nctempchar1* nctemp12440= nctemp12442;
int nctemp12444=LibeStrcmp(nctemp12435,nctemp12440);
int nctemp12432 = (nctemp12444 ==1);
if(nctemp12432)
{
struct tree* nctemp12447= p;
int nctemp12449=CodeWhilestmnt(nctemp12447);
}
struct tree* nctemp12455= p;
nctempchar1* nctemp12457=PtreeGetname(nctemp12455);
nctempchar1* nctemp12453= nctemp12457;
struct nctempchar1 *nctemp12460;
static struct nctempchar1 nctemp12461 = {{ 4}, (char*)"for\0"};
nctemp12460=&nctemp12461;
nctempchar1* nctemp12458= nctemp12460;
int nctemp12462=LibeStrcmp(nctemp12453,nctemp12458);
int nctemp12450 = (nctemp12462 ==1);
if(nctemp12450)
{
struct tree* nctemp12465= p;
int nctemp12467=CodeForstmnt(nctemp12465);
}
struct tree* nctemp12473= p;
nctempchar1* nctemp12475=PtreeGetname(nctemp12473);
nctempchar1* nctemp12471= nctemp12475;
struct nctempchar1 *nctemp12478;
static struct nctempchar1 nctemp12479 = {{ 9}, (char*)"parallel\0"};
nctemp12478=&nctemp12479;
nctempchar1* nctemp12476= nctemp12478;
int nctemp12480=LibeStrcmp(nctemp12471,nctemp12476);
int nctemp12468 = (nctemp12480 ==1);
if(nctemp12468)
{
struct tree* nctemp12483= p;
int nctemp12485=CodeParallelstmnt(nctemp12483);
}
struct tree* nctemp12491= p;
nctempchar1* nctemp12493=PtreeGetname(nctemp12491);
nctempchar1* nctemp12489= nctemp12493;
struct nctempchar1 *nctemp12496;
static struct nctempchar1 nctemp12497 = {{ 3}, (char*)"if\0"};
nctemp12496=&nctemp12497;
nctempchar1* nctemp12494= nctemp12496;
int nctemp12498=LibeStrcmp(nctemp12489,nctemp12494);
int nctemp12486 = (nctemp12498 ==1);
if(nctemp12486)
{
struct tree* nctemp12501= p;
int nctemp12503=CodeIfstmnt(nctemp12501);
}
struct tree* nctemp12509= p;
nctempchar1* nctemp12511=PtreeGetname(nctemp12509);
nctempchar1* nctemp12507= nctemp12511;
struct nctempchar1 *nctemp12514;
static struct nctempchar1 nctemp12515 = {{ 7}, (char*)"return\0"};
nctemp12514=&nctemp12515;
nctempchar1* nctemp12512= nctemp12514;
int nctemp12516=LibeStrcmp(nctemp12507,nctemp12512);
int nctemp12504 = (nctemp12516 ==1);
if(nctemp12504)
{
struct tree* nctemp12519= p;
int nctemp12521=CodeReturnstmnt(nctemp12519);
}
struct tree* nctemp12526= p;
struct tree* nctemp12528=PtreeMvsister(nctemp12526);
p =nctemp12528;
}
int nctemp12529 = (p !=0);
nctemp12395=nctemp12529;}struct tree* nctemp12534= sp;
struct nctempchar1 *nctemp12538;
static struct nctempchar1 nctemp12539 = {{ 4}, (char*)"}\n\0"};
nctemp12538=&nctemp12539;
nctempchar1* nctemp12536= nctemp12538;
int nctemp12540=CodeEs(nctemp12534,nctemp12536);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12543= p;
nctempchar1* nctemp12545= pointer;
int nctemp12548=CodeEs(nctemp12543,nctemp12545);
struct tree* nctemp12550= p;
struct nctempchar1 *nctemp12554;
static struct nctempchar1 nctemp12555 = {{ 2}, (char*)"=\0"};
nctemp12554=&nctemp12555;
nctempchar1* nctemp12552= nctemp12554;
int nctemp12556=CodeEs(nctemp12550,nctemp12552);
struct tree* nctemp12558= p;
struct nctempchar1 *nctemp12562;
static struct nctempchar1 nctemp12563 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12562=&nctemp12563;
nctempchar1* nctemp12560= nctemp12562;
int nctemp12564=CodeEs(nctemp12558,nctemp12560);
struct tree* nctemp12566= p;
struct nctempchar1 *nctemp12570;
static struct nctempchar1 nctemp12571 = {{ 8}, (char*)"sizeof(\0"};
nctemp12570=&nctemp12571;
nctempchar1* nctemp12568= nctemp12570;
int nctemp12572=CodeEs(nctemp12566,nctemp12568);
struct tree* nctemp12574= p;
nctempchar1* nctemp12576= pointer;
int nctemp12579=CodeEs(nctemp12574,nctemp12576);
struct tree* nctemp12581= p;
struct nctempchar1 *nctemp12585;
static struct nctempchar1 nctemp12586 = {{ 6}, (char*)"));\n\0"};
nctemp12585=&nctemp12586;
nctempchar1* nctemp12583= nctemp12585;
int nctemp12587=CodeEs(nctemp12581,nctemp12583);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12592=CodeGetarch();
int nctemp12589 = (nctemp12592 ==1);
if(nctemp12589)
{
struct tree* nctemp12595= p;
int nctemp12597=CodeFdefcpu(nctemp12595);
}
else{
int nctemp12601=CodeGetarch();
int nctemp12598 = (nctemp12601 ==2);
if(nctemp12598)
{
struct tree* nctemp12610= p;
struct tree* nctemp12612=PtreeMvchild(nctemp12610);
struct tree* nctemp12608= nctemp12612;
nctempchar1* nctemp12613=PtreeGetparallel(nctemp12608);
nctempchar1* nctemp12606= nctemp12613;
struct nctempchar1 *nctemp12616;
static struct nctempchar1 nctemp12617 = {{ 9}, (char*)"parallel\0"};
nctemp12616=&nctemp12617;
nctempchar1* nctemp12614= nctemp12616;
int nctemp12618=LibeStrcmp(nctemp12606,nctemp12614);
int nctemp12603 = (nctemp12618 ==1);
if(nctemp12603)
{
struct tree* nctemp12621= p;
int nctemp12623=CodeFdefgpu(nctemp12621);
struct tree* nctemp12625= p;
int nctemp12627=CodeFdewrappergpu(nctemp12625);
}
else{
struct tree* nctemp12629= p;
int nctemp12631=CodeFdefcpu(nctemp12629);
}
}
else{
int nctemp12635=CodeGetarch();
int nctemp12632 = (nctemp12635 ==3);
if(nctemp12632)
{
struct tree* nctemp12642= p;
nctempchar1* nctemp12644=PtreeGetparallel(nctemp12642);
nctempchar1* nctemp12640= nctemp12644;
struct nctempchar1 *nctemp12647;
static struct nctempchar1 nctemp12648 = {{ 9}, (char*)"parallel\0"};
nctemp12647=&nctemp12648;
nctempchar1* nctemp12645= nctemp12647;
int nctemp12649=LibeStrcmp(nctemp12640,nctemp12645);
int nctemp12637 = (nctemp12649 ==1);
if(nctemp12637)
{
struct tree* nctemp12652= p;
int nctemp12654=CodeFdefgpu(nctemp12652);
struct tree* nctemp12656= p;
int nctemp12658=CodeFdewrappergpu(nctemp12656);
}
else{
struct tree* nctemp12660= p;
int nctemp12662=CodeFdefcpu(nctemp12660);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12670;
static struct nctempchar1 nctemp12671 = {{ 6}, (char*)"dummy\0"};
nctemp12670=&nctemp12671;
nctempchar1* nctemp12668= nctemp12670;
struct nctempchar1 *nctemp12674;
static struct nctempchar1 nctemp12675 = {{ 6}, (char*)"dummy\0"};
nctemp12674=&nctemp12675;
nctempchar1* nctemp12672= nctemp12674;
struct tree* nctemp12676=PtreeMknode(nctemp12668,nctemp12672);
p =nctemp12676;
struct tree* nctemp12678= p;
int nctemp12680= 1;
int nctemp12682=PtreeSetline(nctemp12678,nctemp12680);
struct tree* nctemp12684= p;
struct nctempchar1 *nctemp12688;
static struct nctempchar1 nctemp12689 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12688=&nctemp12689;
nctempchar1* nctemp12686= nctemp12688;
int nctemp12690=CodeEs(nctemp12684,nctemp12686);
struct tree* nctemp12692= p;
int nctemp12694= 2;
int nctemp12696=PtreeSetline(nctemp12692,nctemp12694);
struct tree* nctemp12698= p;
int nctemp12700= 3;
int nctemp12702=PtreeSetline(nctemp12698,nctemp12700);
struct tree* nctemp12704= p;
int nctemp12706= 4;
int nctemp12708=PtreeSetline(nctemp12704,nctemp12706);
struct tree* nctemp12710= p;
struct nctempchar1 *nctemp12714;
static struct nctempchar1 nctemp12715 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12714=&nctemp12715;
nctempchar1* nctemp12712= nctemp12714;
int nctemp12716=CodeEs(nctemp12710,nctemp12712);
struct tree* nctemp12718= p;
struct nctempchar1 *nctemp12722;
static struct nctempchar1 nctemp12723 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12722=&nctemp12723;
nctempchar1* nctemp12720= nctemp12722;
int nctemp12724=CodeEs(nctemp12718,nctemp12720);
struct tree* nctemp12726= p;
int nctemp12728= 3;
int nctemp12730=PtreeSetline(nctemp12726,nctemp12728);
struct tree* nctemp12732= p;
struct nctempchar1 *nctemp12736;
static struct nctempchar1 nctemp12737 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12736=&nctemp12737;
nctempchar1* nctemp12734= nctemp12736;
int nctemp12738=CodeEs(nctemp12732,nctemp12734);
struct tree* nctemp12740= p;
int nctemp12742= 5;
int nctemp12744=PtreeSetline(nctemp12740,nctemp12742);
struct tree* nctemp12746= p;
struct nctempchar1 *nctemp12750;
static struct nctempchar1 nctemp12751 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12750=&nctemp12751;
nctempchar1* nctemp12748= nctemp12750;
int nctemp12752=CodeEs(nctemp12746,nctemp12748);
struct tree* nctemp12754= p;
int nctemp12756= 7;
int nctemp12758=PtreeSetline(nctemp12754,nctemp12756);
struct tree* nctemp12760= p;
struct nctempchar1 *nctemp12764;
static struct nctempchar1 nctemp12765 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12764=&nctemp12765;
nctempchar1* nctemp12762= nctemp12764;
int nctemp12766=CodeEs(nctemp12760,nctemp12762);
struct tree* nctemp12768= p;
int nctemp12770= 7;
int nctemp12772=PtreeSetline(nctemp12768,nctemp12770);
struct tree* nctemp12774= p;
struct nctempchar1 *nctemp12778;
static struct nctempchar1 nctemp12779 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12778=&nctemp12779;
nctempchar1* nctemp12776= nctemp12778;
int nctemp12780=CodeEs(nctemp12774,nctemp12776);
struct tree* nctemp12782= p;
int nctemp12784= 8;
int nctemp12786=PtreeSetline(nctemp12782,nctemp12784);
int nctemp12790=CodeArraycheck();
int nctemp12787 = (nctemp12790 ==1);
if(nctemp12787)
{
struct tree* nctemp12793= p;
struct nctempchar1 *nctemp12797;
static struct nctempchar1 nctemp12798 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12797=&nctemp12798;
nctempchar1* nctemp12795= nctemp12797;
int nctemp12799=CodeEs(nctemp12793,nctemp12795);
struct tree* nctemp12801= p;
struct nctempchar1 *nctemp12805;
static struct nctempchar1 nctemp12806 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12805=&nctemp12806;
nctempchar1* nctemp12803= nctemp12805;
int nctemp12807=CodeEs(nctemp12801,nctemp12803);
struct tree* nctemp12809= p;
int nctemp12811= 8;
int nctemp12813=PtreeSetline(nctemp12809,nctemp12811);
}
struct tree* nctemp12815= p;
struct nctempchar1 *nctemp12819;
static struct nctempchar1 nctemp12820 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12819=&nctemp12820;
nctempchar1* nctemp12817= nctemp12819;
int nctemp12821=CodeEs(nctemp12815,nctemp12817);
struct tree* nctemp12823= p;
int nctemp12825= 10;
int nctemp12827=PtreeSetline(nctemp12823,nctemp12825);
struct tree* nctemp12829= p;
struct nctempchar1 *nctemp12833;
static struct nctempchar1 nctemp12834 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12833=&nctemp12834;
nctempchar1* nctemp12831= nctemp12833;
int nctemp12835=CodeEs(nctemp12829,nctemp12831);
struct tree* nctemp12837= p;
int nctemp12839= 10;
int nctemp12841=PtreeSetline(nctemp12837,nctemp12839);
struct tree* nctemp12843= p;
struct nctempchar1 *nctemp12847;
static struct nctempchar1 nctemp12848 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12847=&nctemp12848;
nctempchar1* nctemp12845= nctemp12847;
int nctemp12849=CodeEs(nctemp12843,nctemp12845);
struct tree* nctemp12851= p;
int nctemp12853= 12;
int nctemp12855=PtreeSetline(nctemp12851,nctemp12853);
struct tree* nctemp12857= p;
struct nctempchar1 *nctemp12861;
static struct nctempchar1 nctemp12862 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12861=&nctemp12862;
nctempchar1* nctemp12859= nctemp12861;
int nctemp12863=CodeEs(nctemp12857,nctemp12859);
struct tree* nctemp12865= p;
int nctemp12867= 13;
int nctemp12869=PtreeSetline(nctemp12865,nctemp12867);
struct tree* nctemp12871= p;
struct nctempchar1 *nctemp12875;
static struct nctempchar1 nctemp12876 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12875=&nctemp12876;
nctempchar1* nctemp12873= nctemp12875;
int nctemp12877=CodeEs(nctemp12871,nctemp12873);
struct tree* nctemp12879= p;
int nctemp12881= 14;
int nctemp12883=PtreeSetline(nctemp12879,nctemp12881);
struct tree* nctemp12885= p;
struct nctempchar1 *nctemp12889;
static struct nctempchar1 nctemp12890 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12889=&nctemp12890;
nctempchar1* nctemp12887= nctemp12889;
int nctemp12891=CodeEs(nctemp12885,nctemp12887);
struct tree* nctemp12893= p;
int nctemp12895= 15;
int nctemp12897=PtreeSetline(nctemp12893,nctemp12895);
struct tree* nctemp12899= p;
struct nctempchar1 *nctemp12903;
static struct nctempchar1 nctemp12904 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12903=&nctemp12904;
nctempchar1* nctemp12901= nctemp12903;
int nctemp12905=CodeEs(nctemp12899,nctemp12901);
struct tree* nctemp12907= p;
int nctemp12909= 16;
int nctemp12911=PtreeSetline(nctemp12907,nctemp12909);
struct tree* nctemp12913= p;
struct nctempchar1 *nctemp12917;
static struct nctempchar1 nctemp12918 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12917=&nctemp12918;
nctempchar1* nctemp12915= nctemp12917;
int nctemp12919=CodeEs(nctemp12913,nctemp12915);
struct tree* nctemp12921= p;
int nctemp12923= 17;
int nctemp12925=PtreeSetline(nctemp12921,nctemp12923);
struct tree* nctemp12927= p;
struct nctempchar1 *nctemp12931;
static struct nctempchar1 nctemp12932 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12931=&nctemp12932;
nctempchar1* nctemp12929= nctemp12931;
int nctemp12933=CodeEs(nctemp12927,nctemp12929);
struct tree* nctemp12935= p;
int nctemp12937= 18;
int nctemp12939=PtreeSetline(nctemp12935,nctemp12937);
struct tree* nctemp12941= p;
struct nctempchar1 *nctemp12945;
static struct nctempchar1 nctemp12946 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12945=&nctemp12946;
nctempchar1* nctemp12943= nctemp12945;
int nctemp12947=CodeEs(nctemp12941,nctemp12943);
struct tree* nctemp12949= p;
int nctemp12951= 19;
int nctemp12953=PtreeSetline(nctemp12949,nctemp12951);
struct tree* nctemp12955= p;
struct nctempchar1 *nctemp12959;
static struct nctempchar1 nctemp12960 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12959=&nctemp12960;
nctempchar1* nctemp12957= nctemp12959;
int nctemp12961=CodeEs(nctemp12955,nctemp12957);
struct tree* nctemp12963= p;
int nctemp12965= 20;
int nctemp12967=PtreeSetline(nctemp12963,nctemp12965);
struct tree* nctemp12969= p;
struct nctempchar1 *nctemp12973;
static struct nctempchar1 nctemp12974 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12973=&nctemp12974;
nctempchar1* nctemp12971= nctemp12973;
int nctemp12975=CodeEs(nctemp12969,nctemp12971);
struct tree* nctemp12977= p;
struct nctempchar1 *nctemp12981;
static struct nctempchar1 nctemp12982 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12981=&nctemp12982;
nctempchar1* nctemp12979= nctemp12981;
int nctemp12983=CodeEs(nctemp12977,nctemp12979);
struct tree* nctemp12985= p;
struct nctempchar1 *nctemp12989;
static struct nctempchar1 nctemp12990 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12989=&nctemp12990;
nctempchar1* nctemp12987= nctemp12989;
int nctemp12991=CodeEs(nctemp12985,nctemp12987);
struct tree* nctemp12993= p;
struct nctempchar1 *nctemp12997;
static struct nctempchar1 nctemp12998 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12997=&nctemp12998;
nctempchar1* nctemp12995= nctemp12997;
int nctemp12999=CodeEs(nctemp12993,nctemp12995);
struct tree* nctemp13001= p;
struct nctempchar1 *nctemp13005;
static struct nctempchar1 nctemp13006 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13005=&nctemp13006;
nctempchar1* nctemp13003= nctemp13005;
int nctemp13007=CodeEs(nctemp13001,nctemp13003);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13015;
static struct nctempchar1 nctemp13016 = {{ 6}, (char*)"dummy\0"};
nctemp13015=&nctemp13016;
nctempchar1* nctemp13013= nctemp13015;
struct nctempchar1 *nctemp13019;
static struct nctempchar1 nctemp13020 = {{ 6}, (char*)"dummy\0"};
nctemp13019=&nctemp13020;
nctempchar1* nctemp13017= nctemp13019;
struct tree* nctemp13021=PtreeMknode(nctemp13013,nctemp13017);
p =nctemp13021;
struct tree* nctemp13023= p;
int nctemp13025= 1;
int nctemp13027=PtreeSetline(nctemp13023,nctemp13025);
struct tree* nctemp13029= p;
struct nctempchar1 *nctemp13033;
static struct nctempchar1 nctemp13034 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13033=&nctemp13034;
nctempchar1* nctemp13031= nctemp13033;
int nctemp13035=CodeEs(nctemp13029,nctemp13031);
struct tree* nctemp13037= p;
int nctemp13039= 2;
int nctemp13041=PtreeSetline(nctemp13037,nctemp13039);
struct tree* nctemp13043= p;
int nctemp13045= 3;
int nctemp13047=PtreeSetline(nctemp13043,nctemp13045);
struct tree* nctemp13049= p;
struct nctempchar1 *nctemp13053;
static struct nctempchar1 nctemp13054 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13053=&nctemp13054;
nctempchar1* nctemp13051= nctemp13053;
int nctemp13055=CodeEs(nctemp13049,nctemp13051);
struct tree* nctemp13057= p;
struct nctempchar1 *nctemp13061;
static struct nctempchar1 nctemp13062 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13061=&nctemp13062;
nctempchar1* nctemp13059= nctemp13061;
int nctemp13063=CodeEs(nctemp13057,nctemp13059);
struct tree* nctemp13065= p;
int nctemp13067= 3;
int nctemp13069=PtreeSetline(nctemp13065,nctemp13067);
struct tree* nctemp13071= p;
struct nctempchar1 *nctemp13075;
static struct nctempchar1 nctemp13076 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13075=&nctemp13076;
nctempchar1* nctemp13073= nctemp13075;
int nctemp13077=CodeEs(nctemp13071,nctemp13073);
struct tree* nctemp13079= p;
int nctemp13081= 5;
int nctemp13083=PtreeSetline(nctemp13079,nctemp13081);
struct tree* nctemp13085= p;
struct nctempchar1 *nctemp13089;
static struct nctempchar1 nctemp13090 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13089=&nctemp13090;
nctempchar1* nctemp13087= nctemp13089;
int nctemp13091=CodeEs(nctemp13085,nctemp13087);
struct tree* nctemp13093= p;
int nctemp13095= 7;
int nctemp13097=PtreeSetline(nctemp13093,nctemp13095);
struct tree* nctemp13099= p;
struct nctempchar1 *nctemp13103;
static struct nctempchar1 nctemp13104 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13103=&nctemp13104;
nctempchar1* nctemp13101= nctemp13103;
int nctemp13105=CodeEs(nctemp13099,nctemp13101);
struct tree* nctemp13107= p;
int nctemp13109= 7;
int nctemp13111=PtreeSetline(nctemp13107,nctemp13109);
struct tree* nctemp13113= p;
struct nctempchar1 *nctemp13117;
static struct nctempchar1 nctemp13118 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13117=&nctemp13118;
nctempchar1* nctemp13115= nctemp13117;
int nctemp13119=CodeEs(nctemp13113,nctemp13115);
struct tree* nctemp13121= p;
int nctemp13123= 8;
int nctemp13125=PtreeSetline(nctemp13121,nctemp13123);
struct tree* nctemp13127= p;
struct nctempchar1 *nctemp13131;
static struct nctempchar1 nctemp13132 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13131=&nctemp13132;
nctempchar1* nctemp13129= nctemp13131;
int nctemp13133=CodeEs(nctemp13127,nctemp13129);
struct tree* nctemp13135= p;
int nctemp13137= 10;
int nctemp13139=PtreeSetline(nctemp13135,nctemp13137);
struct tree* nctemp13141= p;
struct nctempchar1 *nctemp13145;
static struct nctempchar1 nctemp13146 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13145=&nctemp13146;
nctempchar1* nctemp13143= nctemp13145;
int nctemp13147=CodeEs(nctemp13141,nctemp13143);
struct tree* nctemp13149= p;
int nctemp13151= 10;
int nctemp13153=PtreeSetline(nctemp13149,nctemp13151);
struct tree* nctemp13155= p;
struct nctempchar1 *nctemp13159;
static struct nctempchar1 nctemp13160 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13159=&nctemp13160;
nctempchar1* nctemp13157= nctemp13159;
int nctemp13161=CodeEs(nctemp13155,nctemp13157);
struct tree* nctemp13163= p;
int nctemp13165= 12;
int nctemp13167=PtreeSetline(nctemp13163,nctemp13165);
struct tree* nctemp13169= p;
struct nctempchar1 *nctemp13173;
static struct nctempchar1 nctemp13174 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13173=&nctemp13174;
nctempchar1* nctemp13171= nctemp13173;
int nctemp13175=CodeEs(nctemp13169,nctemp13171);
struct tree* nctemp13177= p;
int nctemp13179= 13;
int nctemp13181=PtreeSetline(nctemp13177,nctemp13179);
struct tree* nctemp13183= p;
struct nctempchar1 *nctemp13187;
static struct nctempchar1 nctemp13188 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13187=&nctemp13188;
nctempchar1* nctemp13185= nctemp13187;
int nctemp13189=CodeEs(nctemp13183,nctemp13185);
struct tree* nctemp13191= p;
int nctemp13193= 14;
int nctemp13195=PtreeSetline(nctemp13191,nctemp13193);
struct tree* nctemp13197= p;
struct nctempchar1 *nctemp13201;
static struct nctempchar1 nctemp13202 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13201=&nctemp13202;
nctempchar1* nctemp13199= nctemp13201;
int nctemp13203=CodeEs(nctemp13197,nctemp13199);
struct tree* nctemp13205= p;
int nctemp13207= 15;
int nctemp13209=PtreeSetline(nctemp13205,nctemp13207);
struct tree* nctemp13211= p;
struct nctempchar1 *nctemp13215;
static struct nctempchar1 nctemp13216 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13215=&nctemp13216;
nctempchar1* nctemp13213= nctemp13215;
int nctemp13217=CodeEs(nctemp13211,nctemp13213);
struct tree* nctemp13219= p;
int nctemp13221= 16;
int nctemp13223=PtreeSetline(nctemp13219,nctemp13221);
struct tree* nctemp13225= p;
struct nctempchar1 *nctemp13229;
static struct nctempchar1 nctemp13230 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13229=&nctemp13230;
nctempchar1* nctemp13227= nctemp13229;
int nctemp13231=CodeEs(nctemp13225,nctemp13227);
struct tree* nctemp13233= p;
int nctemp13235= 17;
int nctemp13237=PtreeSetline(nctemp13233,nctemp13235);
struct tree* nctemp13239= p;
struct nctempchar1 *nctemp13243;
static struct nctempchar1 nctemp13244 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13243=&nctemp13244;
nctempchar1* nctemp13241= nctemp13243;
int nctemp13245=CodeEs(nctemp13239,nctemp13241);
struct tree* nctemp13247= p;
int nctemp13249= 18;
int nctemp13251=PtreeSetline(nctemp13247,nctemp13249);
struct tree* nctemp13253= p;
struct nctempchar1 *nctemp13257;
static struct nctempchar1 nctemp13258 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13257=&nctemp13258;
nctempchar1* nctemp13255= nctemp13257;
int nctemp13259=CodeEs(nctemp13253,nctemp13255);
struct tree* nctemp13261= p;
int nctemp13263= 19;
int nctemp13265=PtreeSetline(nctemp13261,nctemp13263);
struct tree* nctemp13267= p;
struct nctempchar1 *nctemp13271;
static struct nctempchar1 nctemp13272 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13271=&nctemp13272;
nctempchar1* nctemp13269= nctemp13271;
int nctemp13273=CodeEs(nctemp13267,nctemp13269);
struct tree* nctemp13275= p;
int nctemp13277= 20;
int nctemp13279=PtreeSetline(nctemp13275,nctemp13277);
struct tree* nctemp13281= p;
struct nctempchar1 *nctemp13285;
static struct nctempchar1 nctemp13286 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13285=&nctemp13286;
nctempchar1* nctemp13283= nctemp13285;
int nctemp13287=CodeEs(nctemp13281,nctemp13283);
struct tree* nctemp13289= p;
struct nctempchar1 *nctemp13293;
static struct nctempchar1 nctemp13294 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13293=&nctemp13294;
nctempchar1* nctemp13291= nctemp13293;
int nctemp13295=CodeEs(nctemp13289,nctemp13291);
struct tree* nctemp13297= p;
struct nctempchar1 *nctemp13301;
static struct nctempchar1 nctemp13302 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13301=&nctemp13302;
nctempchar1* nctemp13299= nctemp13301;
int nctemp13303=CodeEs(nctemp13297,nctemp13299);
struct tree* nctemp13305= p;
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeEs(nctemp13305,nctemp13307);
struct tree* nctemp13313= p;
struct nctempchar1 *nctemp13317;
static struct nctempchar1 nctemp13318 = {{ 3}, (char*)"\n\0"};
nctemp13317=&nctemp13318;
nctempchar1* nctemp13315= nctemp13317;
int nctemp13319=CodeEs(nctemp13313,nctemp13315);
struct tree* nctemp13321= p;
struct nctempchar1 *nctemp13325;
static struct nctempchar1 nctemp13326 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13325=&nctemp13326;
nctempchar1* nctemp13323= nctemp13325;
int nctemp13327=CodeEs(nctemp13321,nctemp13323);
struct tree* nctemp13329= p;
struct nctempchar1 *nctemp13333;
static struct nctempchar1 nctemp13334 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13333=&nctemp13334;
nctempchar1* nctemp13331= nctemp13333;
int nctemp13335=CodeEs(nctemp13329,nctemp13331);
struct tree* nctemp13337= p;
struct nctempchar1 *nctemp13341;
static struct nctempchar1 nctemp13342 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13341=&nctemp13342;
nctempchar1* nctemp13339= nctemp13341;
int nctemp13343=CodeEs(nctemp13337,nctemp13339);
struct tree* nctemp13345= p;
struct nctempchar1 *nctemp13349;
static struct nctempchar1 nctemp13350 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13349=&nctemp13350;
nctempchar1* nctemp13347= nctemp13349;
int nctemp13351=CodeEs(nctemp13345,nctemp13347);
struct tree* nctemp13353= p;
struct nctempchar1 *nctemp13357;
static struct nctempchar1 nctemp13358 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13357=&nctemp13358;
nctempchar1* nctemp13355= nctemp13357;
int nctemp13359=CodeEs(nctemp13353,nctemp13355);
struct tree* nctemp13361= p;
struct nctempchar1 *nctemp13365;
static struct nctempchar1 nctemp13366 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13365=&nctemp13366;
nctempchar1* nctemp13363= nctemp13365;
int nctemp13367=CodeEs(nctemp13361,nctemp13363);
struct tree* nctemp13369= p;
struct nctempchar1 *nctemp13373;
static struct nctempchar1 nctemp13374 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13373=&nctemp13374;
nctempchar1* nctemp13371= nctemp13373;
int nctemp13375=CodeEs(nctemp13369,nctemp13371);
struct tree* nctemp13377= p;
struct nctempchar1 *nctemp13381;
static struct nctempchar1 nctemp13382 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13381=&nctemp13382;
nctempchar1* nctemp13379= nctemp13381;
int nctemp13383=CodeEs(nctemp13377,nctemp13379);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13391;
static struct nctempchar1 nctemp13392 = {{ 6}, (char*)"dummy\0"};
nctemp13391=&nctemp13392;
nctempchar1* nctemp13389= nctemp13391;
struct nctempchar1 *nctemp13395;
static struct nctempchar1 nctemp13396 = {{ 6}, (char*)"dummy\0"};
nctemp13395=&nctemp13396;
nctempchar1* nctemp13393= nctemp13395;
struct tree* nctemp13397=PtreeMknode(nctemp13389,nctemp13393);
p =nctemp13397;
struct tree* nctemp13399= p;
int nctemp13401= 1;
int nctemp13403=PtreeSetline(nctemp13399,nctemp13401);
struct tree* nctemp13405= p;
struct nctempchar1 *nctemp13409;
static struct nctempchar1 nctemp13410 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13409=&nctemp13410;
nctempchar1* nctemp13407= nctemp13409;
int nctemp13411=CodeEs(nctemp13405,nctemp13407);
struct tree* nctemp13413= p;
int nctemp13415= 2;
int nctemp13417=PtreeSetline(nctemp13413,nctemp13415);
struct tree* nctemp13419= p;
int nctemp13421= 3;
int nctemp13423=PtreeSetline(nctemp13419,nctemp13421);
struct tree* nctemp13425= p;
struct nctempchar1 *nctemp13429;
static struct nctempchar1 nctemp13430 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13429=&nctemp13430;
nctempchar1* nctemp13427= nctemp13429;
int nctemp13431=CodeEs(nctemp13425,nctemp13427);
struct tree* nctemp13433= p;
int nctemp13435= 3;
int nctemp13437=PtreeSetline(nctemp13433,nctemp13435);
struct tree* nctemp13439= p;
struct nctempchar1 *nctemp13443;
static struct nctempchar1 nctemp13444 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13443=&nctemp13444;
nctempchar1* nctemp13441= nctemp13443;
int nctemp13445=CodeEs(nctemp13439,nctemp13441);
struct tree* nctemp13447= p;
int nctemp13449= 5;
int nctemp13451=PtreeSetline(nctemp13447,nctemp13449);
struct tree* nctemp13453= p;
struct nctempchar1 *nctemp13457;
static struct nctempchar1 nctemp13458 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13457=&nctemp13458;
nctempchar1* nctemp13455= nctemp13457;
int nctemp13459=CodeEs(nctemp13453,nctemp13455);
struct tree* nctemp13461= p;
int nctemp13463= 7;
int nctemp13465=PtreeSetline(nctemp13461,nctemp13463);
struct tree* nctemp13467= p;
struct nctempchar1 *nctemp13471;
static struct nctempchar1 nctemp13472 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13471=&nctemp13472;
nctempchar1* nctemp13469= nctemp13471;
int nctemp13473=CodeEs(nctemp13467,nctemp13469);
struct tree* nctemp13475= p;
int nctemp13477= 7;
int nctemp13479=PtreeSetline(nctemp13475,nctemp13477);
struct tree* nctemp13481= p;
struct nctempchar1 *nctemp13485;
static struct nctempchar1 nctemp13486 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13485=&nctemp13486;
nctempchar1* nctemp13483= nctemp13485;
int nctemp13487=CodeEs(nctemp13481,nctemp13483);
struct tree* nctemp13489= p;
int nctemp13491= 8;
int nctemp13493=PtreeSetline(nctemp13489,nctemp13491);
struct tree* nctemp13495= p;
struct nctempchar1 *nctemp13499;
static struct nctempchar1 nctemp13500 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13499=&nctemp13500;
nctempchar1* nctemp13497= nctemp13499;
int nctemp13501=CodeEs(nctemp13495,nctemp13497);
struct tree* nctemp13503= p;
int nctemp13505= 10;
int nctemp13507=PtreeSetline(nctemp13503,nctemp13505);
struct tree* nctemp13509= p;
struct nctempchar1 *nctemp13513;
static struct nctempchar1 nctemp13514 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13513=&nctemp13514;
nctempchar1* nctemp13511= nctemp13513;
int nctemp13515=CodeEs(nctemp13509,nctemp13511);
struct tree* nctemp13517= p;
int nctemp13519= 10;
int nctemp13521=PtreeSetline(nctemp13517,nctemp13519);
struct tree* nctemp13523= p;
struct nctempchar1 *nctemp13527;
static struct nctempchar1 nctemp13528 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13527=&nctemp13528;
nctempchar1* nctemp13525= nctemp13527;
int nctemp13529=CodeEs(nctemp13523,nctemp13525);
struct tree* nctemp13531= p;
int nctemp13533= 12;
int nctemp13535=PtreeSetline(nctemp13531,nctemp13533);
struct tree* nctemp13537= p;
struct nctempchar1 *nctemp13541;
static struct nctempchar1 nctemp13542 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13541=&nctemp13542;
nctempchar1* nctemp13539= nctemp13541;
int nctemp13543=CodeEs(nctemp13537,nctemp13539);
struct tree* nctemp13545= p;
int nctemp13547= 13;
int nctemp13549=PtreeSetline(nctemp13545,nctemp13547);
struct tree* nctemp13551= p;
struct nctempchar1 *nctemp13555;
static struct nctempchar1 nctemp13556 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13555=&nctemp13556;
nctempchar1* nctemp13553= nctemp13555;
int nctemp13557=CodeEs(nctemp13551,nctemp13553);
struct tree* nctemp13559= p;
int nctemp13561= 14;
int nctemp13563=PtreeSetline(nctemp13559,nctemp13561);
struct tree* nctemp13565= p;
struct nctempchar1 *nctemp13569;
static struct nctempchar1 nctemp13570 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13569=&nctemp13570;
nctempchar1* nctemp13567= nctemp13569;
int nctemp13571=CodeEs(nctemp13565,nctemp13567);
struct tree* nctemp13573= p;
int nctemp13575= 15;
int nctemp13577=PtreeSetline(nctemp13573,nctemp13575);
struct tree* nctemp13579= p;
struct nctempchar1 *nctemp13583;
static struct nctempchar1 nctemp13584 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13583=&nctemp13584;
nctempchar1* nctemp13581= nctemp13583;
int nctemp13585=CodeEs(nctemp13579,nctemp13581);
struct tree* nctemp13587= p;
int nctemp13589= 16;
int nctemp13591=PtreeSetline(nctemp13587,nctemp13589);
struct tree* nctemp13593= p;
struct nctempchar1 *nctemp13597;
static struct nctempchar1 nctemp13598 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13597=&nctemp13598;
nctempchar1* nctemp13595= nctemp13597;
int nctemp13599=CodeEs(nctemp13593,nctemp13595);
struct tree* nctemp13601= p;
int nctemp13603= 17;
int nctemp13605=PtreeSetline(nctemp13601,nctemp13603);
struct tree* nctemp13607= p;
struct nctempchar1 *nctemp13611;
static struct nctempchar1 nctemp13612 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13611=&nctemp13612;
nctempchar1* nctemp13609= nctemp13611;
int nctemp13613=CodeEs(nctemp13607,nctemp13609);
struct tree* nctemp13615= p;
int nctemp13617= 18;
int nctemp13619=PtreeSetline(nctemp13615,nctemp13617);
struct tree* nctemp13621= p;
struct nctempchar1 *nctemp13625;
static struct nctempchar1 nctemp13626 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13625=&nctemp13626;
nctempchar1* nctemp13623= nctemp13625;
int nctemp13627=CodeEs(nctemp13621,nctemp13623);
struct tree* nctemp13629= p;
int nctemp13631= 19;
int nctemp13633=PtreeSetline(nctemp13629,nctemp13631);
struct tree* nctemp13635= p;
struct nctempchar1 *nctemp13639;
static struct nctempchar1 nctemp13640 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13639=&nctemp13640;
nctempchar1* nctemp13637= nctemp13639;
int nctemp13641=CodeEs(nctemp13635,nctemp13637);
struct tree* nctemp13643= p;
int nctemp13645= 20;
int nctemp13647=PtreeSetline(nctemp13643,nctemp13645);
struct tree* nctemp13649= p;
struct nctempchar1 *nctemp13653;
static struct nctempchar1 nctemp13654 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13653=&nctemp13654;
nctempchar1* nctemp13651= nctemp13653;
int nctemp13655=CodeEs(nctemp13649,nctemp13651);
struct tree* nctemp13657= p;
struct nctempchar1 *nctemp13661;
static struct nctempchar1 nctemp13662 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13661=&nctemp13662;
nctempchar1* nctemp13659= nctemp13661;
int nctemp13663=CodeEs(nctemp13657,nctemp13659);
struct tree* nctemp13665= p;
struct nctempchar1 *nctemp13669;
static struct nctempchar1 nctemp13670 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13669=&nctemp13670;
nctempchar1* nctemp13667= nctemp13669;
int nctemp13671=CodeEs(nctemp13665,nctemp13667);
struct tree* nctemp13673= p;
struct nctempchar1 *nctemp13677;
static struct nctempchar1 nctemp13678 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13677=&nctemp13678;
nctempchar1* nctemp13675= nctemp13677;
int nctemp13679=CodeEs(nctemp13673,nctemp13675);
struct tree* nctemp13681= p;
struct nctempchar1 *nctemp13685;
static struct nctempchar1 nctemp13686 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13685=&nctemp13686;
nctempchar1* nctemp13683= nctemp13685;
int nctemp13687=CodeEs(nctemp13681,nctemp13683);
struct tree* nctemp13689= p;
struct nctempchar1 *nctemp13693;
static struct nctempchar1 nctemp13694 = {{ 4}, (char*)"}\n\0"};
nctemp13693=&nctemp13694;
nctempchar1* nctemp13691= nctemp13693;
int nctemp13695=CodeEs(nctemp13689,nctemp13691);
struct tree* nctemp13697= p;
struct nctempchar1 *nctemp13701;
static struct nctempchar1 nctemp13702 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13701=&nctemp13702;
nctempchar1* nctemp13699= nctemp13701;
int nctemp13703=CodeEs(nctemp13697,nctemp13699);
struct tree* nctemp13705= p;
struct nctempchar1 *nctemp13709;
static struct nctempchar1 nctemp13710 = {{ 3}, (char*)"\n\0"};
nctemp13709=&nctemp13710;
nctempchar1* nctemp13707= nctemp13709;
int nctemp13711=CodeEs(nctemp13705,nctemp13707);
struct tree* nctemp13713= p;
struct nctempchar1 *nctemp13717;
static struct nctempchar1 nctemp13718 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13717=&nctemp13718;
nctempchar1* nctemp13715= nctemp13717;
int nctemp13719=CodeEs(nctemp13713,nctemp13715);
struct tree* nctemp13721= p;
struct nctempchar1 *nctemp13725;
static struct nctempchar1 nctemp13726 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13725=&nctemp13726;
nctempchar1* nctemp13723= nctemp13725;
int nctemp13727=CodeEs(nctemp13721,nctemp13723);
struct tree* nctemp13729= p;
struct nctempchar1 *nctemp13733;
static struct nctempchar1 nctemp13734 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13733=&nctemp13734;
nctempchar1* nctemp13731= nctemp13733;
int nctemp13735=CodeEs(nctemp13729,nctemp13731);
struct tree* nctemp13737= p;
struct nctempchar1 *nctemp13741;
static struct nctempchar1 nctemp13742 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13741=&nctemp13742;
nctempchar1* nctemp13739= nctemp13741;
int nctemp13743=CodeEs(nctemp13737,nctemp13739);
struct tree* nctemp13745= p;
struct nctempchar1 *nctemp13749;
static struct nctempchar1 nctemp13750 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13749=&nctemp13750;
nctempchar1* nctemp13747= nctemp13749;
int nctemp13751=CodeEs(nctemp13745,nctemp13747);
return 1;
}
int CodePreamble ()
{
int nctemp13756=CodeGetarch();
int nctemp13753 = (nctemp13756 ==1);
if(nctemp13753)
{
int nctemp13759=CodePreamblecpu();
return 1;
}
else{
int nctemp13764=CodeGetarch();
int nctemp13761 = (nctemp13764 ==2);
if(nctemp13761)
{
int nctemp13767=CodePreamblecuda();
return 1;
}
else{
int nctemp13772=CodeGetarch();
int nctemp13769 = (nctemp13772 ==3);
if(nctemp13769)
{
int nctemp13775=CodePreamblehip();
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
int nctemp13782=CodeGetfdout();
fdo =nctemp13782;
int nctemp13786=CodeGetarch();
int nctemp13783 = (nctemp13786 ==2);
if(nctemp13783)
{
int nctemp13789= fdo;
struct nctempchar1 *nctemp13793;
static struct nctempchar1 nctemp13794 = {{ 4}, (char*)"}\n\0"};
nctemp13793=&nctemp13794;
nctempchar1* nctemp13791= nctemp13793;
int nctemp13795=LibePuts(nctemp13789,nctemp13791);
return 1;
}
else{
int nctemp13800=CodeGetarch();
int nctemp13797 = (nctemp13800 ==3);
if(nctemp13797)
{
int nctemp13803= fdo;
struct nctempchar1 *nctemp13807;
static struct nctempchar1 nctemp13808 = {{ 4}, (char*)"}\n\0"};
nctemp13807=&nctemp13808;
nctempchar1* nctemp13805= nctemp13807;
int nctemp13809=LibePuts(nctemp13803,nctemp13805);
return 1;
}
else{
return 0;
}
}
}
}
