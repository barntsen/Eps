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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
int lookahead;
int ParseIniparse ();
struct tree* ParseExpr ();
struct tree* ParseAsgexpr (struct tree* p);
struct tree* ParseStmnt ();
struct tree* ParseElsestmnt ();
struct tree* ParseCompstmnt ();
int ParseError (nctempchar1 *s);
int ParseGetlookahead ();
int ParseMatch (int t);
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *def);
struct tree* ParseExprseq (struct tree* p);
struct tree* ParseExprlist ();
int ParseArrayarg (struct tree* p);
int ParseIdseq (struct tree* p);
int ParseConstdecl (struct tree* p);
struct tree* ParseIdent ();
struct tree* ParseType ();
struct tree* ParsePrimexpr (struct tree* p);
struct tree* ParseUnexpr (struct tree* p);
struct tree* ParseMultexprseq (struct tree* p);
struct tree* ParseMultexpr (struct tree* p);
struct tree* ParseAddexprseq (struct tree* p);
struct tree* ParseAddexpr (struct tree* p);
struct tree* ParseRelexprseq (struct tree* p);
struct tree* ParseRelexpr (struct tree* p);
struct tree* ParseAsgexprseq (struct tree* p);
struct tree* ParseDeclaration ();
struct tree* ParseDeclarations ();
int ParseArgseq (struct tree* p);
struct tree* ParseArglist ();
int ParseStructdeclar (struct tree* p);
struct tree* ParseWhilestmnt ();
struct tree* ParseReturnstmnt ();
struct tree* ParseForstmnt ();
struct tree* ParseSlice ();
struct tree* ParseSliceseq (struct tree* np);
struct tree* ParseParallelstmnt ();
struct tree* ParseIfstmnt ();
struct tree* ParseStmntlist ();
int ParseFdef (struct tree* p);
struct tree* ParseExtdecl ();
struct tree* ParseParse ();
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
int SemCompstmnt (struct tree* p);
int SemStmnt (struct tree* p);
struct tree* SemExpr (struct tree* p);
struct tree* SemUnexpr (struct tree* p);
struct tree* SemPrimexpr (struct tree* p);
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int SemImport (struct tree* p,struct symbol* etp);
int SemDeclaration (struct tree* p,struct symbol* tp);
int SemDeclarations (struct tree* p,struct symbol* tp);
int SemStructdecl (struct tree* p,struct symbol* tp);
int SemArgtype (struct tree* p,struct symbol* tp);
int SemArray (struct tree* p,struct symbol* tp);
int SemStructure (struct tree* p,struct symbol* tp);
int SemId (struct tree* p);
int SemFcall (struct tree* p);
struct tree* SemExprlist (struct tree* p);
int SemCopytype (struct tree* p,struct tree* np);
int SemCast (struct tree* p);
int SemNew (struct tree* p);
int SemDelete (struct tree* p);
int SemCmplx (struct tree* p);
int SemRe (struct tree* p);
int SemLen (struct tree* p);
int SemIm (struct tree* p);
int SemSizeof (struct tree* p);
int SemComparetype (struct tree* p,struct tree* np);
struct tree* SemAsgexpr (struct tree* p);
struct tree* SemRelexpr (struct tree* p);
struct tree* SemAddexpr (struct tree* p);
struct tree* SemBinexpr (struct tree* p);
int SemCopyparallel (struct tree* p,struct tree* np);
int SemArgtypes (struct tree* p,struct symbol* tp);
int SemFdef2 (struct tree* p,struct symbol* tp);
int Semisnobody (struct tree* p);
int SemFdef (struct tree* p,struct symbol* tp);
int SemExtdecl (struct tree* p);
int SemSem (struct tree* p,struct symbol* tp);
int SemWhilestmnt (struct tree* p);
int SemForstmnt (struct tree* p);
int SemParallelstmnt (struct tree* p);
int SemIfstmnt (struct tree* p);
int SemReturnstmnt (struct tree* p);
int CodeCompstmnt (struct tree* p);
int CodeStmnt (struct tree* p);
nctempchar1 * CodeBinexpr (struct tree* p);
nctempchar1 * CodeExpr (struct tree* p);
int CodeError (nctempchar1 *s);
int CodeArch;
int CodeSetarch (int arch);
int CodeGetarch ();
;
int CodeLine;
int CodeParallel;
int CodeSetparallel (int flag);
int CodeGetparallel ();
int CodeAddress;
nctempchar1 * CodeItemp (int cntrl);
int CodeInit ();
int CodeFdout;
int CodeSetfdout (int fd);
int CodeGetfdout ();
int CodeDebugflag;
int CodeDebug ();
int CodeEs (struct tree* p,nctempchar1 *s);
int CodeEd (int d);
int CodeEc (int d);
int CodeEsr (nctempchar1 *s);
int CodeIdeclaration (struct tree* p,struct symbol* tp);
int CodeIdeclarations (struct tree* p,struct symbol* tp);
int CodeStructdefsym (struct tree* p,struct symbol* tp);
int CodeFdefcpusym (struct tree* p,struct symbol* tp);
int CodeImport (struct tree* p,struct symbol* tp);
int CodeStructdef (struct tree* p,struct symbol* tp);
int CodeFdef (struct tree* p);
int CodeFdefcpu (struct tree* p);
int CodeFdeclkernel (struct tree* p);
int CodeFdefgpu (struct tree* p);
int CodeFdewrappergpu (struct tree* p);
int CodeGdeclarations (struct tree* p,struct symbol* tp);
int CodeDeclarations (struct tree* p,struct symbol* tp);
int CodeCode (struct tree* p,struct symbol* tp);
int CodeArraytest;
int CodeArraycheck ();
int CodeArraycheckon ();
int CodeArraycheckoff ();
int CodeDebugon ();
nctempchar1 * CodeMktemp ();
int CodeDebugoff ();
nctempchar1 * CodeNewtemp (nctempchar1 *type);
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name);
nctempchar1 * CodeMkstring (struct tree* p);
nctempchar1 * CodeSconstant (struct tree* p);
int CodeFdeclaration (struct tree* p,struct symbol* tp);
int CodeWdeclaration (struct tree* p);
int CodeWdeclarations (struct tree* p);
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index);
nctempchar1 * CodeArray (struct tree* p,nctempchar1 *qual,nctempchar1 *sel);
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident);
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident);
nctempchar1 * CodeIdent (struct tree* p);
nctempchar1 * CodeNew (struct tree* p);
nctempchar1 * CodeDelete (struct tree* p);
nctempchar1 * CodeLen (struct tree* p);
nctempchar1 * CodeCmplx (struct tree* p);
nctempchar1 * CodeIm (struct tree* p);
nctempchar1 * CodeRe (struct tree* p);
nctempchar1 * CodeFcall (struct tree* p);
nctempchar1 * CodeCast (struct tree* p);
nctempchar1 * CodePrimexpr (struct tree* p);
nctempchar1 * CodeUnexpr (struct tree* p);
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval);
int CodeWhilestmnt (struct tree* p);
int CodeForstmnt (struct tree* p);
int CodeParallelfor (struct tree* p,int level,int rank);
int CodeParallelstmntgpu (struct tree* p);
int CodeParallelstmntcpu (struct tree* p);
int CodeParallelstmnt (struct tree* p);
int CodeIfstmnt (struct tree* p);
int CodeReturnstmnt (struct tree* p);
int CodeNewdescr (struct tree* p,nctempchar1 *pointer);
int CodePreamblecpu ();
int CodePreamblecuda ();
int CodePreamblehip ();
int CodePreamble ();
int CodePostamble ();
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
int MainError (nctempchar1 *s)
{
nctempchar1* nctemp7=ScanGetfile();
nctempchar1 *nctemp5 =nctemp7;
int nctemp4 =(nctemp5!=0);
int nctemp13=ScanGetline();
int nctemp10 = (nctemp13 !=0);
int nctemp1 = (nctemp4 && nctemp10);
if(nctemp1)
{
nctempchar1* nctemp18=ScanGetfile();
nctempchar1* nctemp16= nctemp18;
int nctemp21=ScanGetline();
int nctemp19= nctemp21;
nctempchar1* nctemp22= s;
int nctemp25=ErrError(nctemp16,nctemp19,nctemp22);
}
else{
int nctemp27= 4;
struct nctempchar1 *nctemp31;
static struct nctempchar1 nctemp32 = {{ 31}, (char*)"File extension have to be .c\n\0"};
nctemp31=&nctemp32;
nctempchar1* nctemp29= nctemp31;
int nctemp33=LibePuts(nctemp27,nctemp29);
int nctemp35=LibeExit();
}
}
int MainHelp (int arch)
{
int nctemp37= 4;
struct nctempchar1 *nctemp41;
static struct nctempchar1 nctemp42 = {{ 10}, (char*)"Command\n\0"};
nctemp41=&nctemp42;
nctempchar1* nctemp39= nctemp41;
int nctemp43=LibePuts(nctemp37,nctemp39);
int nctemp45= 4;
struct nctempchar1 *nctemp49;
static struct nctempchar1 nctemp50 = {{ 3}, (char*)"\n\0"};
nctemp49=&nctemp50;
nctempchar1* nctemp47= nctemp49;
int nctemp51=LibePuts(nctemp45,nctemp47);
int nctemp52 = (arch ==1);
if(nctemp52)
{
int nctemp57= 4;
struct nctempchar1 *nctemp61;
static struct nctempchar1 nctemp62 = {{ 56}, (char*)"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp61=&nctemp62;
nctempchar1* nctemp59= nctemp61;
int nctemp63=LibePuts(nctemp57,nctemp59);
int nctemp65= 4;
struct nctempchar1 *nctemp69;
static struct nctempchar1 nctemp70 = {{ 3}, (char*)"\n\0"};
nctemp69=&nctemp70;
nctempchar1* nctemp67= nctemp69;
int nctemp71=LibePuts(nctemp65,nctemp67);
int nctemp73= 4;
struct nctempchar1 *nctemp77;
static struct nctempchar1 nctemp78 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp77=&nctemp78;
nctempchar1* nctemp75= nctemp77;
int nctemp79=LibePuts(nctemp73,nctemp75);
}
else{
int nctemp80 = (arch ==2);
if(nctemp80)
{
int nctemp85= 4;
struct nctempchar1 *nctemp89;
static struct nctempchar1 nctemp90 = {{ 57}, (char*)"  ecc [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibePuts(nctemp85,nctemp87);
int nctemp93= 4;
struct nctempchar1 *nctemp97;
static struct nctempchar1 nctemp98 = {{ 3}, (char*)"\n\0"};
nctemp97=&nctemp98;
nctempchar1* nctemp95= nctemp97;
int nctemp99=LibePuts(nctemp93,nctemp95);
int nctemp101= 4;
struct nctempchar1 *nctemp105;
static struct nctempchar1 nctemp106 = {{ 59}, (char*)"  The ecc command (without options) compiles an eps file\n\0"};
nctemp105=&nctemp106;
nctempchar1* nctemp103= nctemp105;
int nctemp107=LibePuts(nctemp101,nctemp103);
}
else{
int nctemp108 = (arch ==3);
if(nctemp108)
{
int nctemp113= 4;
struct nctempchar1 *nctemp117;
static struct nctempchar1 nctemp118 = {{ 57}, (char*)"  ech [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp117=&nctemp118;
nctempchar1* nctemp115= nctemp117;
int nctemp119=LibePuts(nctemp113,nctemp115);
int nctemp121= 4;
struct nctempchar1 *nctemp125;
static struct nctempchar1 nctemp126 = {{ 3}, (char*)"\n\0"};
nctemp125=&nctemp126;
nctempchar1* nctemp123= nctemp125;
int nctemp127=LibePuts(nctemp121,nctemp123);
int nctemp129= 4;
struct nctempchar1 *nctemp133;
static struct nctempchar1 nctemp134 = {{ 59}, (char*)"  The ech command (without options) compiles an eps file\n\0"};
nctemp133=&nctemp134;
nctempchar1* nctemp131= nctemp133;
int nctemp135=LibePuts(nctemp129,nctemp131);
}
else{
struct nctempchar1 *nctemp139;
static struct nctempchar1 nctemp140 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp139=&nctemp140;
nctempchar1* nctemp137= nctemp139;
int nctemp141=MainError(nctemp137);
}
}
}
int nctemp143= 4;
struct nctempchar1 *nctemp147;
static struct nctempchar1 nctemp148 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp147=&nctemp148;
nctempchar1* nctemp145= nctemp147;
int nctemp149=LibePuts(nctemp143,nctemp145);
int nctemp151= 4;
struct nctempchar1 *nctemp155;
static struct nctempchar1 nctemp156 = {{ 3}, (char*)"\n\0"};
nctemp155=&nctemp156;
nctempchar1* nctemp153= nctemp155;
int nctemp157=LibePuts(nctemp151,nctemp153);
int nctemp159= 4;
struct nctempchar1 *nctemp163;
static struct nctempchar1 nctemp164 = {{ 14}, (char*)"  Options: \n\0"};
nctemp163=&nctemp164;
nctempchar1* nctemp161= nctemp163;
int nctemp165=LibePuts(nctemp159,nctemp161);
int nctemp167= 4;
struct nctempchar1 *nctemp171;
static struct nctempchar1 nctemp172 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp171=&nctemp172;
nctempchar1* nctemp169= nctemp171;
int nctemp173=LibePuts(nctemp167,nctemp169);
int nctemp175= 4;
struct nctempchar1 *nctemp179;
static struct nctempchar1 nctemp180 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp179=&nctemp180;
nctempchar1* nctemp177= nctemp179;
int nctemp181=LibePuts(nctemp175,nctemp177);
int nctemp183= 4;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
int nctemp189=LibePuts(nctemp183,nctemp185);
int nctemp191= 4;
struct nctempchar1 *nctemp195;
static struct nctempchar1 nctemp196 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp195=&nctemp196;
nctempchar1* nctemp193= nctemp195;
int nctemp197=LibePuts(nctemp191,nctemp193);
int nctemp199= 4;
struct nctempchar1 *nctemp203;
static struct nctempchar1 nctemp204 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
int nctemp205=LibePuts(nctemp199,nctemp201);
int nctemp207= 4;
struct nctempchar1 *nctemp211;
static struct nctempchar1 nctemp212 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp211=&nctemp212;
nctempchar1* nctemp209= nctemp211;
int nctemp213=LibePuts(nctemp207,nctemp209);
int nctemp215= 4;
struct nctempchar1 *nctemp219;
static struct nctempchar1 nctemp220 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp219=&nctemp220;
nctempchar1* nctemp217= nctemp219;
int nctemp221=LibePuts(nctemp215,nctemp217);
int nctemp223= 4;
struct nctempchar1 *nctemp227;
static struct nctempchar1 nctemp228 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp227=&nctemp228;
nctempchar1* nctemp225= nctemp227;
int nctemp229=LibePuts(nctemp223,nctemp225);
int nctemp230 = (arch ==1);
if(nctemp230)
{
int nctemp235= 4;
struct nctempchar1 *nctemp239;
static struct nctempchar1 nctemp240 = {{ 57}, (char*)"   -c : Produce c-code but do not generate object code\n\0"};
nctemp239=&nctemp240;
nctempchar1* nctemp237= nctemp239;
int nctemp241=LibePuts(nctemp235,nctemp237);
}
else{
int nctemp242 = (arch ==2);
if(nctemp242)
{
int nctemp247= 4;
struct nctempchar1 *nctemp251;
static struct nctempchar1 nctemp252 = {{ 64}, (char*)"   -c : Produce c++/cuda-code but do not generate object code\n\0"};
nctemp251=&nctemp252;
nctempchar1* nctemp249= nctemp251;
int nctemp253=LibePuts(nctemp247,nctemp249);
}
else{
int nctemp254 = (arch ==3);
if(nctemp254)
{
int nctemp259= 4;
struct nctempchar1 *nctemp263;
static struct nctempchar1 nctemp264 = {{ 63}, (char*)"   -c : Produce c++/hip-code but do not generate object code\n\0"};
nctemp263=&nctemp264;
nctempchar1* nctemp261= nctemp263;
int nctemp265=LibePuts(nctemp259,nctemp261);
}
else{
struct nctempchar1 *nctemp269;
static struct nctempchar1 nctemp270 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp269=&nctemp270;
nctempchar1* nctemp267= nctemp269;
int nctemp271=MainError(nctemp267);
}
}
}
int nctemp273= 4;
struct nctempchar1 *nctemp277;
static struct nctempchar1 nctemp278 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp277=&nctemp278;
nctempchar1* nctemp275= nctemp277;
int nctemp279=LibePuts(nctemp273,nctemp275);
int nctemp281= 4;
struct nctempchar1 *nctemp285;
static struct nctempchar1 nctemp286 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp285=&nctemp286;
nctempchar1* nctemp283= nctemp285;
int nctemp287=LibePuts(nctemp281,nctemp283);
int nctemp289= 4;
struct nctempchar1 *nctemp293;
static struct nctempchar1 nctemp294 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp293=&nctemp294;
nctempchar1* nctemp291= nctemp293;
int nctemp295=LibePuts(nctemp289,nctemp291);
int nctemp297= 4;
struct nctempchar1 *nctemp301;
static struct nctempchar1 nctemp302 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp301=&nctemp302;
nctempchar1* nctemp299= nctemp301;
int nctemp303=LibePuts(nctemp297,nctemp299);
int nctemp305= 4;
int nctemp307=LibeFlush(nctemp305);
return 1;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp313=infile->d[0];l =nctemp313;
int nctemp317 = (l < 3);
if(nctemp317)
{
struct nctempchar1 *nctemp324;
static struct nctempchar1 nctemp325 = {{ 19}, (char*)" Illegal file name\0"};
nctemp324=&nctemp325;
nctempchar1* nctemp322= nctemp324;
int nctemp326=MainError(nctemp322);
}
int nctemp335 = l - 2;
int nctemp330=nctemp335;
char nctemp337=(char)('e');
int nctemp327 = (infile->a[nctemp330] !=nctemp337);
if(nctemp327)
{
struct nctempchar1 *nctemp343;
static struct nctempchar1 nctemp344 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp343=&nctemp344;
nctempchar1* nctemp341= nctemp343;
int nctemp345=MainError(nctemp341);
}
int nctemp346 = (arch ==1);
if(nctemp346)
{
int nctemp356=l;
nctempchar1 *nctemp355;
nctemp355=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp355->d[0]=l;
nctemp355->a=(char *)RunMalloc(sizeof(char)*nctemp356);
outfile=nctemp355;
nctempchar1* nctemp360= infile;
nctempchar1* nctemp363= outfile;
int nctemp366=LibeStrcpy(nctemp360,nctemp363);
int nctemp375 = l - 2;
int nctemp370=nctemp375;
char nctemp377=(char)('c');
outfile->a[nctemp370] =nctemp377;
}
else{
int nctemp380 = (arch ==2);
if(nctemp380)
{
int nctemp395 = l + 2;
int nctemp390=nctemp395;
nctempchar1 *nctemp389;
nctemp389=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp400 = l + 2;
nctemp389->d[0]=nctemp400;
nctemp389->a=(char *)RunMalloc(sizeof(char)*nctemp390);
outfile=nctemp389;
nctempchar1* nctemp402= infile;
nctempchar1* nctemp405= outfile;
int nctemp408=LibeStrcpy(nctemp402,nctemp405);
int nctemp417 = l - 2;
int nctemp412=nctemp417;
char nctemp419=(char)('c');
outfile->a[nctemp412] =nctemp419;
int nctemp430 = l - 1;
int nctemp425=nctemp430;
char nctemp432=(char)('p');
outfile->a[nctemp425] =nctemp432;
int nctemp443 = l - 0;
int nctemp438=nctemp443;
char nctemp445=(char)('p');
outfile->a[nctemp438] =nctemp445;
}
else{
int nctemp448 = (arch ==3);
if(nctemp448)
{
int nctemp463 = l + 2;
int nctemp458=nctemp463;
nctempchar1 *nctemp457;
nctemp457=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp468 = l + 2;
nctemp457->d[0]=nctemp468;
nctemp457->a=(char *)RunMalloc(sizeof(char)*nctemp458);
outfile=nctemp457;
nctempchar1* nctemp470= infile;
nctempchar1* nctemp473= outfile;
int nctemp476=LibeStrcpy(nctemp470,nctemp473);
int nctemp485 = l - 2;
int nctemp480=nctemp485;
char nctemp487=(char)('c');
outfile->a[nctemp480] =nctemp487;
int nctemp498 = l - 1;
int nctemp493=nctemp498;
char nctemp500=(char)('p');
outfile->a[nctemp493] =nctemp500;
int nctemp511 = l - 0;
int nctemp506=nctemp511;
char nctemp513=(char)('p');
outfile->a[nctemp506] =nctemp513;
}
else{
struct nctempchar1 *nctemp519;
static struct nctempchar1 nctemp520 = {{ 20}, (char*)"Unknow architecture\0"};
nctemp519=&nctemp520;
nctempchar1* nctemp517= nctemp519;
int nctemp521=MainError(nctemp517);
}
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp528=infile->d[0];l =nctemp528;
int nctemp532 = (l < 3);
if(nctemp532)
{
struct nctempchar1 *nctemp539;
static struct nctempchar1 nctemp540 = {{ 19}, (char*)" Illegal file name\0"};
nctemp539=&nctemp540;
nctempchar1* nctemp537= nctemp539;
int nctemp541=MainError(nctemp537);
}
int nctemp550 = l - 2;
int nctemp545=nctemp550;
char nctemp552=(char)('e');
int nctemp542 = (infile->a[nctemp545] !=nctemp552);
if(nctemp542)
{
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
int nctemp560=MainError(nctemp556);
}
int nctemp567=l;
nctempchar1 *nctemp566;
nctemp566=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp566->d[0]=l;
nctemp566->a=(char *)RunMalloc(sizeof(char)*nctemp567);
outfile=nctemp566;
nctempchar1* nctemp571= infile;
nctempchar1* nctemp574= outfile;
int nctemp577=LibeStrcpy(nctemp571,nctemp574);
int nctemp586 = l - 2;
int nctemp581=nctemp586;
char nctemp588=(char)('m');
outfile->a[nctemp581] =nctemp588;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp597=file->d[0];l =nctemp597;
struct nctempchar1 *nctemp606;
static struct nctempchar1 nctemp607 = {{ 8}, (char*)"gcc -c \0"};
nctemp606=&nctemp607;
tmp=nctemp606;
int nctemp614=80;
nctempchar1 *nctemp613;
nctemp613=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp613->d[0]=80;
nctemp613->a=(char *)RunMalloc(sizeof(char)*nctemp614);
cmd=nctemp613;
nctempchar1* nctemp618= tmp;
nctempchar1* nctemp621= cmd;
int nctemp624=LibeStrcpy(nctemp618,nctemp621);
int nctemp625 = (debug ==1);
if(nctemp625)
{
struct nctempchar1 *nctemp632;
static struct nctempchar1 nctemp633 = {{ 5}, (char*)" -g \0"};
nctemp632=&nctemp633;
nctempchar1* nctemp630= nctemp632;
nctempchar1* nctemp634= cmd;
int nctemp637=LibeStrcat(nctemp630,nctemp634);
}
int nctemp638 = (optimize ==1);
if(nctemp638)
{
struct nctempchar1 *nctemp645;
static struct nctempchar1 nctemp646 = {{ 5}, (char*)" -O \0"};
nctemp645=&nctemp646;
nctempchar1* nctemp643= nctemp645;
nctempchar1* nctemp647= cmd;
int nctemp650=LibeStrcat(nctemp643,nctemp647);
}
int nctemp651 = (openmp ==1);
if(nctemp651)
{
struct nctempchar1 *nctemp658;
static struct nctempchar1 nctemp659 = {{ 11}, (char*)" -fopenmp \0"};
nctemp658=&nctemp659;
nctempchar1* nctemp656= nctemp658;
nctempchar1* nctemp660= cmd;
int nctemp663=LibeStrcat(nctemp656,nctemp660);
}
nctempchar1* nctemp665= file;
nctempchar1* nctemp668= cmd;
int nctemp671=LibeStrcat(nctemp665,nctemp668);
struct nctempchar1 *nctemp675;
static struct nctempchar1 nctemp676 = {{ 3}, (char*)"\n\0"};
nctemp675=&nctemp676;
nctempchar1* nctemp673= nctemp675;
nctempchar1* nctemp677= cmd;
int nctemp680=LibeStrcat(nctemp673,nctemp677);
int nctemp681 = (show ==1);
if(nctemp681)
{
int nctemp686= 4;
nctempchar1* nctemp688= cmd;
int nctemp691=LibePuts(nctemp686,nctemp688);
int nctemp693= 4;
int nctemp695=LibeFlush(nctemp693);
}
nctempchar1* nctemp697= cmd;
int nctemp700=LibeSystem(nctemp697);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp719;
static struct nctempchar1 nctemp720 = {{ 4}, (char*)"rm \0"};
nctemp719=&nctemp720;
int nctemp717=nctemp719->d[0];int nctemp723 = nctemp717 + l;
int nctemp725 = nctemp723 + 2;
int nctemp710=nctemp725;
nctempchar1 *nctemp709;
nctemp709=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp734;
static struct nctempchar1 nctemp735 = {{ 4}, (char*)"rm \0"};
nctemp734=&nctemp735;
int nctemp732=nctemp734->d[0];int nctemp738 = nctemp732 + l;
int nctemp740 = nctemp738 + 2;
nctemp709->d[0]=nctemp740;
nctemp709->a=(char *)RunMalloc(sizeof(char)*nctemp710);
cmd=nctemp709;
struct nctempchar1 *nctemp744;
static struct nctempchar1 nctemp745 = {{ 4}, (char*)"rm \0"};
nctemp744=&nctemp745;
nctempchar1* nctemp742= nctemp744;
nctempchar1* nctemp746= cmd;
int nctemp749=LibeStrcpy(nctemp742,nctemp746);
nctempchar1* nctemp751= file;
nctempchar1* nctemp754= cmd;
int nctemp757=LibeStrcat(nctemp751,nctemp754);
struct nctempchar1 *nctemp761;
static struct nctempchar1 nctemp762 = {{ 3}, (char*)"\n\0"};
nctemp761=&nctemp762;
nctempchar1* nctemp759= nctemp761;
nctempchar1* nctemp763= cmd;
int nctemp766=LibeStrcat(nctemp759,nctemp763);
int nctemp767 = (show ==1);
if(nctemp767)
{
int nctemp772= 4;
nctempchar1* nctemp774= cmd;
int nctemp777=LibePuts(nctemp772,nctemp774);
int nctemp779= 4;
int nctemp781=LibeFlush(nctemp779);
}
nctempchar1* nctemp783= cmd;
int nctemp786=LibeSystem(nctemp783);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp795=file->d[0];l =nctemp795;
struct nctempchar1 *nctemp804;
static struct nctempchar1 nctemp805 = {{ 15}, (char*)"nvcc -c -x cu \0"};
nctemp804=&nctemp805;
tmp=nctemp804;
int nctemp812=80;
nctempchar1 *nctemp811;
nctemp811=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp811->d[0]=80;
nctemp811->a=(char *)RunMalloc(sizeof(char)*nctemp812);
cmd=nctemp811;
nctempchar1* nctemp816= tmp;
nctempchar1* nctemp819= cmd;
int nctemp822=LibeStrcpy(nctemp816,nctemp819);
int nctemp823 = (debug ==1);
if(nctemp823)
{
struct nctempchar1 *nctemp830;
static struct nctempchar1 nctemp831 = {{ 5}, (char*)" -g \0"};
nctemp830=&nctemp831;
nctempchar1* nctemp828= nctemp830;
nctempchar1* nctemp832= cmd;
int nctemp835=LibeStrcat(nctemp828,nctemp832);
}
int nctemp836 = (optimize ==1);
if(nctemp836)
{
struct nctempchar1 *nctemp843;
static struct nctempchar1 nctemp844 = {{ 6}, (char*)" -O3 \0"};
nctemp843=&nctemp844;
nctempchar1* nctemp841= nctemp843;
nctempchar1* nctemp845= cmd;
int nctemp848=LibeStrcat(nctemp841,nctemp845);
}
int nctemp849 = (openmp ==1);
if(nctemp849)
{
struct nctempchar1 *nctemp856;
static struct nctempchar1 nctemp857 = {{ 11}, (char*)" -fopenmp \0"};
nctemp856=&nctemp857;
nctempchar1* nctemp854= nctemp856;
nctempchar1* nctemp858= cmd;
int nctemp861=LibeStrcat(nctemp854,nctemp858);
}
nctempchar1* nctemp863= file;
nctempchar1* nctemp866= cmd;
int nctemp869=LibeStrcat(nctemp863,nctemp866);
struct nctempchar1 *nctemp873;
static struct nctempchar1 nctemp874 = {{ 3}, (char*)"\n\0"};
nctemp873=&nctemp874;
nctempchar1* nctemp871= nctemp873;
nctempchar1* nctemp875= cmd;
int nctemp878=LibeStrcat(nctemp871,nctemp875);
int nctemp879 = (show ==1);
if(nctemp879)
{
int nctemp884= 4;
nctempchar1* nctemp886= cmd;
int nctemp889=LibePuts(nctemp884,nctemp886);
int nctemp891= 4;
int nctemp893=LibeFlush(nctemp891);
}
nctempchar1* nctemp895= cmd;
int nctemp898=LibeSystem(nctemp895);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp917;
static struct nctempchar1 nctemp918 = {{ 4}, (char*)"rm \0"};
nctemp917=&nctemp918;
int nctemp915=nctemp917->d[0];int nctemp921 = nctemp915 + l;
int nctemp923 = nctemp921 + 2;
int nctemp908=nctemp923;
nctempchar1 *nctemp907;
nctemp907=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp932;
static struct nctempchar1 nctemp933 = {{ 4}, (char*)"rm \0"};
nctemp932=&nctemp933;
int nctemp930=nctemp932->d[0];int nctemp936 = nctemp930 + l;
int nctemp938 = nctemp936 + 2;
nctemp907->d[0]=nctemp938;
nctemp907->a=(char *)RunMalloc(sizeof(char)*nctemp908);
cmd=nctemp907;
struct nctempchar1 *nctemp942;
static struct nctempchar1 nctemp943 = {{ 4}, (char*)"rm \0"};
nctemp942=&nctemp943;
nctempchar1* nctemp940= nctemp942;
nctempchar1* nctemp944= cmd;
int nctemp947=LibeStrcpy(nctemp940,nctemp944);
nctempchar1* nctemp949= file;
nctempchar1* nctemp952= cmd;
int nctemp955=LibeStrcat(nctemp949,nctemp952);
struct nctempchar1 *nctemp959;
static struct nctempchar1 nctemp960 = {{ 3}, (char*)"\n\0"};
nctemp959=&nctemp960;
nctempchar1* nctemp957= nctemp959;
nctempchar1* nctemp961= cmd;
int nctemp964=LibeStrcat(nctemp957,nctemp961);
int nctemp965 = (show ==1);
if(nctemp965)
{
int nctemp970= 4;
nctempchar1* nctemp972= cmd;
int nctemp975=LibePuts(nctemp970,nctemp972);
int nctemp977= 4;
int nctemp979=LibeFlush(nctemp977);
}
nctempchar1* nctemp981= cmd;
int nctemp984=LibeSystem(nctemp981);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp993=file->d[0];l =nctemp993;
struct nctempchar1 *nctemp1002;
static struct nctempchar1 nctemp1003 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1002=&nctemp1003;
tmp=nctemp1002;
int nctemp1010=80;
nctempchar1 *nctemp1009;
nctemp1009=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1009->d[0]=80;
nctemp1009->a=(char *)RunMalloc(sizeof(char)*nctemp1010);
cmd=nctemp1009;
nctempchar1* nctemp1014= tmp;
nctempchar1* nctemp1017= cmd;
int nctemp1020=LibeStrcpy(nctemp1014,nctemp1017);
int nctemp1021 = (debug ==1);
if(nctemp1021)
{
struct nctempchar1 *nctemp1028;
static struct nctempchar1 nctemp1029 = {{ 5}, (char*)" -g \0"};
nctemp1028=&nctemp1029;
nctempchar1* nctemp1026= nctemp1028;
nctempchar1* nctemp1030= cmd;
int nctemp1033=LibeStrcat(nctemp1026,nctemp1030);
}
int nctemp1034 = (optimize ==1);
if(nctemp1034)
{
struct nctempchar1 *nctemp1041;
static struct nctempchar1 nctemp1042 = {{ 6}, (char*)" -O3 \0"};
nctemp1041=&nctemp1042;
nctempchar1* nctemp1039= nctemp1041;
nctempchar1* nctemp1043= cmd;
int nctemp1046=LibeStrcat(nctemp1039,nctemp1043);
}
int nctemp1047 = (openmp ==1);
if(nctemp1047)
{
struct nctempchar1 *nctemp1054;
static struct nctempchar1 nctemp1055 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1054=&nctemp1055;
nctempchar1* nctemp1052= nctemp1054;
nctempchar1* nctemp1056= cmd;
int nctemp1059=LibeStrcat(nctemp1052,nctemp1056);
}
nctempchar1* nctemp1061= file;
nctempchar1* nctemp1064= cmd;
int nctemp1067=LibeStrcat(nctemp1061,nctemp1064);
struct nctempchar1 *nctemp1071;
static struct nctempchar1 nctemp1072 = {{ 3}, (char*)"\n\0"};
nctemp1071=&nctemp1072;
nctempchar1* nctemp1069= nctemp1071;
nctempchar1* nctemp1073= cmd;
int nctemp1076=LibeStrcat(nctemp1069,nctemp1073);
int nctemp1077 = (show ==1);
if(nctemp1077)
{
int nctemp1082= 4;
nctempchar1* nctemp1084= cmd;
int nctemp1087=LibePuts(nctemp1082,nctemp1084);
int nctemp1089= 4;
int nctemp1091=LibeFlush(nctemp1089);
}
nctempchar1* nctemp1093= cmd;
int nctemp1096=LibeSystem(nctemp1093);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1115;
static struct nctempchar1 nctemp1116 = {{ 4}, (char*)"rm \0"};
nctemp1115=&nctemp1116;
int nctemp1113=nctemp1115->d[0];int nctemp1119 = nctemp1113 + l;
int nctemp1121 = nctemp1119 + 2;
int nctemp1106=nctemp1121;
nctempchar1 *nctemp1105;
nctemp1105=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1130;
static struct nctempchar1 nctemp1131 = {{ 4}, (char*)"rm \0"};
nctemp1130=&nctemp1131;
int nctemp1128=nctemp1130->d[0];int nctemp1134 = nctemp1128 + l;
int nctemp1136 = nctemp1134 + 2;
nctemp1105->d[0]=nctemp1136;
nctemp1105->a=(char *)RunMalloc(sizeof(char)*nctemp1106);
cmd=nctemp1105;
struct nctempchar1 *nctemp1140;
static struct nctempchar1 nctemp1141 = {{ 4}, (char*)"rm \0"};
nctemp1140=&nctemp1141;
nctempchar1* nctemp1138= nctemp1140;
nctempchar1* nctemp1142= cmd;
int nctemp1145=LibeStrcpy(nctemp1138,nctemp1142);
nctempchar1* nctemp1147= file;
nctempchar1* nctemp1150= cmd;
int nctemp1153=LibeStrcat(nctemp1147,nctemp1150);
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 3}, (char*)"\n\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
nctempchar1* nctemp1159= cmd;
int nctemp1162=LibeStrcat(nctemp1155,nctemp1159);
int nctemp1163 = (show ==1);
if(nctemp1163)
{
int nctemp1168= 4;
nctempchar1* nctemp1170= cmd;
int nctemp1173=LibePuts(nctemp1168,nctemp1170);
int nctemp1175= 4;
int nctemp1177=LibeFlush(nctemp1175);
}
nctempchar1* nctemp1179= cmd;
int nctemp1182=LibeSystem(nctemp1179);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int Main (struct nctempMainArg1 *MainArgs)
{
int btree;
int atree;
int table;
int etable;
int parse;
int semantic;
int emit;
int optimize;
int openmp;
int debug;
int show;
int obj;
int fd;
struct tree* p;
nctempchar1 *infile;
nctempchar1 *outfile;
int i;
int l;
int loop;
int nctemp1188=LibeInit();
openmp =0;
optimize =openmp;
debug =optimize;
show =debug;
emit =0;
etable =emit;
table =etable;
atree =table;
btree =atree;
semantic =0;
parse =semantic;
obj =1;
int nctemp1238=PtreeInit();
int nctemp1240=CodeInit();
int nctemp1242=CodeArraycheckoff();
int nctemp1244=CodeDebugoff();
int nctemp1246= 2;
int nctemp1248=CodeSetarch(nctemp1246);
int nctemp1253=MainArgs->d[0];l =nctemp1253;
int nctemp1257 = (l <= 1);
if(nctemp1257)
{
struct nctempchar1 *nctemp1264;
static struct nctempchar1 nctemp1265 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1264=&nctemp1265;
nctempchar1* nctemp1262= nctemp1264;
int nctemp1266=MainError(nctemp1262);
}
i =1;
loop =1;
int nctemp1275 = (loop ==1);
int nctemp1279=nctemp1275;
while(nctemp1279)
{{
int nctemp1285=i;
nctempchar1* nctemp1283= MainArgs->a[nctemp1285].arg;
struct nctempchar1 *nctemp1290;
static struct nctempchar1 nctemp1291 = {{ 3}, (char*)"-h\0"};
nctemp1290=&nctemp1291;
nctempchar1* nctemp1288= nctemp1290;
int nctemp1292=LibeStrcmp(nctemp1283,nctemp1288);
int nctemp1280 = (nctemp1292 ==1);
if(nctemp1280)
{
int nctemp1295= 2;
int nctemp1297=MainHelp(nctemp1295);
int nctemp1299=LibeExit();
}
int nctemp1305=i;
nctempchar1* nctemp1303= MainArgs->a[nctemp1305].arg;
struct nctempchar1 *nctemp1310;
static struct nctempchar1 nctemp1311 = {{ 3}, (char*)"-t\0"};
nctemp1310=&nctemp1311;
nctempchar1* nctemp1308= nctemp1310;
int nctemp1312=LibeStrcmp(nctemp1303,nctemp1308);
int nctemp1300 = (nctemp1312 ==1);
if(nctemp1300)
{
btree =1;
parse =1;
}
int nctemp1327=i;
nctempchar1* nctemp1325= MainArgs->a[nctemp1327].arg;
struct nctempchar1 *nctemp1332;
static struct nctempchar1 nctemp1333 = {{ 3}, (char*)"-a\0"};
nctemp1332=&nctemp1333;
nctempchar1* nctemp1330= nctemp1332;
int nctemp1334=LibeStrcmp(nctemp1325,nctemp1330);
int nctemp1322 = (nctemp1334 ==1);
if(nctemp1322)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1353=i;
nctempchar1* nctemp1351= MainArgs->a[nctemp1353].arg;
struct nctempchar1 *nctemp1358;
static struct nctempchar1 nctemp1359 = {{ 3}, (char*)"-s\0"};
nctemp1358=&nctemp1359;
nctempchar1* nctemp1356= nctemp1358;
int nctemp1360=LibeStrcmp(nctemp1351,nctemp1356);
int nctemp1348 = (nctemp1360 ==1);
if(nctemp1348)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1379=i;
nctempchar1* nctemp1377= MainArgs->a[nctemp1379].arg;
struct nctempchar1 *nctemp1384;
static struct nctempchar1 nctemp1385 = {{ 3}, (char*)"-r\0"};
nctemp1384=&nctemp1385;
nctempchar1* nctemp1382= nctemp1384;
int nctemp1386=LibeStrcmp(nctemp1377,nctemp1382);
int nctemp1374 = (nctemp1386 ==1);
if(nctemp1374)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1405=i;
nctempchar1* nctemp1403= MainArgs->a[nctemp1405].arg;
struct nctempchar1 *nctemp1410;
static struct nctempchar1 nctemp1411 = {{ 3}, (char*)"-e\0"};
nctemp1410=&nctemp1411;
nctempchar1* nctemp1408= nctemp1410;
int nctemp1412=LibeStrcmp(nctemp1403,nctemp1408);
int nctemp1400 = (nctemp1412 ==1);
if(nctemp1400)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1431=i;
nctempchar1* nctemp1429= MainArgs->a[nctemp1431].arg;
struct nctempchar1 *nctemp1436;
static struct nctempchar1 nctemp1437 = {{ 3}, (char*)"-p\0"};
nctemp1436=&nctemp1437;
nctempchar1* nctemp1434= nctemp1436;
int nctemp1438=LibeStrcmp(nctemp1429,nctemp1434);
int nctemp1426 = (nctemp1438 ==1);
if(nctemp1426)
{
parse =1;
}
int nctemp1449=i;
nctempchar1* nctemp1447= MainArgs->a[nctemp1449].arg;
struct nctempchar1 *nctemp1454;
static struct nctempchar1 nctemp1455 = {{ 3}, (char*)"-q\0"};
nctemp1454=&nctemp1455;
nctempchar1* nctemp1452= nctemp1454;
int nctemp1456=LibeStrcmp(nctemp1447,nctemp1452);
int nctemp1444 = (nctemp1456 ==1);
if(nctemp1444)
{
semantic =1;
parse =1;
}
int nctemp1471=i;
nctempchar1* nctemp1469= MainArgs->a[nctemp1471].arg;
struct nctempchar1 *nctemp1476;
static struct nctempchar1 nctemp1477 = {{ 3}, (char*)"-C\0"};
nctemp1476=&nctemp1477;
nctempchar1* nctemp1474= nctemp1476;
int nctemp1478=LibeStrcmp(nctemp1469,nctemp1474);
int nctemp1466 = (nctemp1478 ==1);
if(nctemp1466)
{
int nctemp1481=CodeArraycheckon();
}
int nctemp1487=i;
nctempchar1* nctemp1485= MainArgs->a[nctemp1487].arg;
struct nctempchar1 *nctemp1492;
static struct nctempchar1 nctemp1493 = {{ 3}, (char*)"-g\0"};
nctemp1492=&nctemp1493;
nctempchar1* nctemp1490= nctemp1492;
int nctemp1494=LibeStrcmp(nctemp1485,nctemp1490);
int nctemp1482 = (nctemp1494 ==1);
if(nctemp1482)
{
debug =1;
int nctemp1501=CodeDebugon();
}
int nctemp1507=i;
nctempchar1* nctemp1505= MainArgs->a[nctemp1507].arg;
struct nctempchar1 *nctemp1512;
static struct nctempchar1 nctemp1513 = {{ 3}, (char*)"-d\0"};
nctemp1512=&nctemp1513;
nctempchar1* nctemp1510= nctemp1512;
int nctemp1514=LibeStrcmp(nctemp1505,nctemp1510);
int nctemp1502 = (nctemp1514 ==1);
if(nctemp1502)
{
show =1;
}
int nctemp1525=i;
nctempchar1* nctemp1523= MainArgs->a[nctemp1525].arg;
struct nctempchar1 *nctemp1530;
static struct nctempchar1 nctemp1531 = {{ 3}, (char*)"-O\0"};
nctemp1530=&nctemp1531;
nctempchar1* nctemp1528= nctemp1530;
int nctemp1532=LibeStrcmp(nctemp1523,nctemp1528);
int nctemp1520 = (nctemp1532 ==1);
if(nctemp1520)
{
optimize =1;
}
int nctemp1543=i;
nctempchar1* nctemp1541= MainArgs->a[nctemp1543].arg;
struct nctempchar1 *nctemp1548;
static struct nctempchar1 nctemp1549 = {{ 3}, (char*)"-f\0"};
nctemp1548=&nctemp1549;
nctempchar1* nctemp1546= nctemp1548;
int nctemp1550=LibeStrcmp(nctemp1541,nctemp1546);
int nctemp1538 = (nctemp1550 ==1);
if(nctemp1538)
{
openmp =1;
}
int nctemp1561=i;
nctempchar1* nctemp1559= MainArgs->a[nctemp1561].arg;
struct nctempchar1 *nctemp1566;
static struct nctempchar1 nctemp1567 = {{ 3}, (char*)"-c\0"};
nctemp1566=&nctemp1567;
nctempchar1* nctemp1564= nctemp1566;
int nctemp1568=LibeStrcmp(nctemp1559,nctemp1564);
int nctemp1556 = (nctemp1568 ==1);
if(nctemp1556)
{
obj =0;
}
int nctemp1581 = i + 1;
int nctemp1574 = (nctemp1581 < l);
if(nctemp1574)
{
int nctemp1589=i;
int nctemp1591=0;
char nctemp1594=(char)('-');
int nctemp1586 = (MainArgs->a[nctemp1589].arg->a[nctemp1591] ==nctemp1594);
int nctemp1583 = (nctemp1586 ==1);
if(nctemp1583)
{
loop =1;
int nctemp1610 = i + 1;
i =nctemp1610;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1619 = (loop ==1);
nctemp1279=nctemp1619;}int nctemp1629 = (parse ==0);
int nctemp1634 = (semantic ==0);
int nctemp1626 = (nctemp1629 && nctemp1634);
int nctemp1639 = (emit ==0);
int nctemp1623 = (nctemp1626 && nctemp1639);
if(nctemp1623)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1659=MainArgs->d[0];int nctemp1655 = (i >= nctemp1659);
if(nctemp1655)
{
struct nctempchar1 *nctemp1666;
static struct nctempchar1 nctemp1667 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1666=&nctemp1667;
nctempchar1* nctemp1664= nctemp1666;
int nctemp1668=MainError(nctemp1664);
}
else{
int nctemp1674=i;
infile=MainArgs->a[nctemp1674].arg;
}
int nctemp1677 = (emit ==1);
if(nctemp1677)
{
nctempchar1* nctemp1686= infile;
int nctemp1689= 2;
nctempchar1* nctemp1691=MainFout(nctemp1686,nctemp1689);
outfile=nctemp1691;
nctempchar1* nctemp1696= outfile;
struct nctempchar1 *nctemp1701;
static struct nctempchar1 nctemp1702 = {{ 2}, (char*)"w\0"};
nctemp1701=&nctemp1702;
nctempchar1* nctemp1699= nctemp1701;
int nctemp1703=LibeOpen(nctemp1696,nctemp1699);
fd =nctemp1703;
int nctemp1705= fd;
int nctemp1707=CodeSetfdout(nctemp1705);
}
nctempchar1* nctemp1711= infile;
int nctemp1714=ScanInit(nctemp1711);
int nctemp1708 = (nctemp1714 ==0);
if(nctemp1708)
{
int nctemp1717=LibeExit();
}
int nctemp1719= 1;
int nctemp1721=ScanSetline(nctemp1719);
int nctemp1723=ParseIniparse();
int nctemp1724 = (emit ==1);
if(nctemp1724)
{
int nctemp1729=CodePreamble();
}
struct symbol* nctemp1733=SymMktable();
struct symbol* nctemp1731= nctemp1733;
struct symbol* nctemp1734=SymSetetp(nctemp1731);
int nctemp1735 = (parse ==1);
if(nctemp1735)
{
struct tree* nctemp1743=ParseParse();
p =nctemp1743;
}
int nctemp1744 = (btree ==1);
if(nctemp1744)
{
struct tree* nctemp1749= p;
int nctemp1751= 0;
int nctemp1753=PtreePrtree(nctemp1749,nctemp1751);
}
int nctemp1754 = (p !=0);
int nctemp1758=nctemp1754;
while(nctemp1758)
{{
int nctemp1759 = (semantic ==1);
if(nctemp1759)
{
int nctemp1763 = (p !=0);
if(nctemp1763)
{
struct tree* nctemp1768= p;
struct symbol* nctemp1772=SymGetetp();
struct symbol* nctemp1770= nctemp1772;
int nctemp1773=SemSem(nctemp1768,nctemp1770);
}
int nctemp1774 = (atree ==1);
if(nctemp1774)
{
struct tree* nctemp1779= p;
int nctemp1781= 0;
int nctemp1783=PtreePrtree(nctemp1779,nctemp1781);
}
int nctemp1784 = (table ==1);
if(nctemp1784)
{
struct symbol* nctemp1791=SymGetltp();
int nctemp1788 = (nctemp1791 !=0);
if(nctemp1788)
{
int nctemp1794= 3;
struct symbol* nctemp1798=SymGetltp();
struct symbol* nctemp1796= nctemp1798;
int nctemp1799= 0;
int nctemp1801=SymPrsym(nctemp1794,nctemp1796,nctemp1799);
}
}
}
int nctemp1802 = (emit ==1);
if(nctemp1802)
{
int nctemp1806 = (p !=0);
if(nctemp1806)
{
struct tree* nctemp1811= p;
struct symbol* nctemp1815=SymGetetp();
struct symbol* nctemp1813= nctemp1815;
int nctemp1816=CodeCode(nctemp1811,nctemp1813);
}
}
struct tree* nctemp1818= p;
int nctemp1820=PtreeRmtree(nctemp1818);
struct symbol* nctemp1824=SymGetltp();
struct symbol* nctemp1822= nctemp1824;
int nctemp1825=SymRmtable(nctemp1822);
int nctemp1826 = (parse ==1);
if(nctemp1826)
{
struct tree* nctemp1834=ParseParse();
p =nctemp1834;
int nctemp1835 = (btree ==1);
if(nctemp1835)
{
struct tree* nctemp1840= p;
int nctemp1842= 0;
int nctemp1844=PtreePrtree(nctemp1840,nctemp1842);
}
}
}
int nctemp1845 = (p !=0);
nctemp1758=nctemp1845;}int nctemp1852=ParseGetlookahead();
int nctemp1849 = (nctemp1852 !=19);
if(nctemp1849)
{
struct nctempchar1 *nctemp1857;
static struct nctempchar1 nctemp1858 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1857=&nctemp1858;
nctempchar1* nctemp1855= nctemp1857;
int nctemp1859=MainError(nctemp1855);
}
int nctemp1860 = (etable ==1);
if(nctemp1860)
{
int nctemp1865= 4;
int nctemp1867=LibeFlush(nctemp1865);
struct symbol* nctemp1871=SymGetetp();
int nctemp1868 = (nctemp1871 !=0);
if(nctemp1868)
{
int nctemp1874= 3;
struct symbol* nctemp1878=SymGetetp();
struct symbol* nctemp1876= nctemp1878;
int nctemp1879= 0;
int nctemp1881=SymPrsym(nctemp1874,nctemp1876,nctemp1879);
}
}
int nctemp1882 = (emit ==1);
if(nctemp1882)
{
int nctemp1887=CodePostamble();
}
int nctemp1891 = (emit ==1);
int nctemp1896 = (obj ==1);
int nctemp1888 = (nctemp1891 && nctemp1896);
if(nctemp1888)
{
int nctemp1900 = (2 ==1);
if(nctemp1900)
{
nctempchar1* nctemp1905= outfile;
int nctemp1908= debug;
int nctemp1910= optimize;
int nctemp1912= openmp;
int nctemp1914= show;
int nctemp1916=MainCcompcpu(nctemp1905,nctemp1908,nctemp1910,nctemp1912,nctemp1914);
}
else{
int nctemp1917 = (2 ==2);
if(nctemp1917)
{
nctempchar1* nctemp1922= outfile;
int nctemp1925= debug;
int nctemp1927= optimize;
int nctemp1929= openmp;
int nctemp1931= show;
int nctemp1933=MainCcompcuda(nctemp1922,nctemp1925,nctemp1927,nctemp1929,nctemp1931);
}
else{
int nctemp1934 = (2 ==3);
if(nctemp1934)
{
nctempchar1* nctemp1939= outfile;
int nctemp1942= debug;
int nctemp1944= optimize;
int nctemp1946= openmp;
int nctemp1948= show;
int nctemp1950=MainCcomphip(nctemp1939,nctemp1942,nctemp1944,nctemp1946,nctemp1948);
}
else{
struct nctempchar1 *nctemp1954;
static struct nctempchar1 nctemp1955 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1954=&nctemp1955;
nctempchar1* nctemp1952= nctemp1954;
int nctemp1956=MainError(nctemp1952);
}
}
}
}
int nctemp1957 = (emit ==1);
if(nctemp1957)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1965= fd;
int nctemp1967=LibeClose(nctemp1965);
}
nctempchar1* nctemp1974= infile;
nctempchar1* nctemp1977=MainFmod(nctemp1974);
nctempchar1* nctemp1972= nctemp1977;
struct nctempchar1 *nctemp1980;
static struct nctempchar1 nctemp1981 = {{ 2}, (char*)"w\0"};
nctemp1980=&nctemp1981;
nctempchar1* nctemp1978= nctemp1980;
int nctemp1982=LibeOpen(nctemp1972,nctemp1978);
fd =nctemp1982;
int nctemp1984= fd;
struct symbol* nctemp1988=SymGetetp();
struct symbol* nctemp1986= nctemp1988;
int nctemp1989= 0;
int nctemp1991=SymExport(nctemp1984,nctemp1986,nctemp1989);
int nctemp1993= 3;
int nctemp1995=LibeFlush(nctemp1993);
return 1;
}
}
