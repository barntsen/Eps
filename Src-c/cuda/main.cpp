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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *defn);
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
struct tree* ParseForstmntc (struct tree* np);
struct tree* ParseForstmntpy (struct tree* np);
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
int CodeParallelstmntcpu (struct tree* p);
nctempchar1 * CodeParprocno (struct tree* p);
nctempchar1 * CodeParidx (struct tree* p);
nctempchar1 * CodeParidxrank (struct tree* p,int r);
nctempchar1 * CodeParllim (struct tree* p);
nctempchar1 * CodeParulim (struct tree* p);
nctempchar1 * CodeParllimrank (struct tree* p,int r);
nctempchar1 * CodeParulimrank (struct tree* p,int r);
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim);
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim);
struct charr {nctempchar1 *s;
};
typedef struct nctempcharr1 {int d[1]; struct charr *a; } nctempcharr1;
struct nctempcharr2 {int d[2]; struct charr *a; } ;
struct nctempcharr3 {int d[3]; struct charr *a; } ;
struct nctempcharr4 {int d[4]; struct charr *a; } ;
nctempchar1 * CodeParnsize (struct tree* p,struct nctempcharr1 *m);
int CodeParallelstmntgpu (struct tree* p);
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
nctempchar1* nctemp29= s;
int nctemp32=LibePuts(nctemp27,nctemp29);
int nctemp34=LibeExit();
}
return 1;
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
struct nctempchar1 *nctemp598;
static struct nctempchar1 nctemp599 = {{ 20}, (char*)"gcc -c -ffast-math \0"};
nctemp598=&nctemp599;
cmd=nctemp598;
int nctemp600 = (debug ==1);
if(nctemp600)
{
nctempchar1* nctemp609= cmd;
struct nctempchar1 *nctemp614;
static struct nctempchar1 nctemp615 = {{ 5}, (char*)" -g \0"};
nctemp614=&nctemp615;
nctempchar1* nctemp612= nctemp614;
nctempchar1* nctemp616=LibeStradd(nctemp609,nctemp612);
cmd=nctemp616;
}
int nctemp617 = (optimize ==1);
if(nctemp617)
{
nctempchar1* nctemp626= cmd;
struct nctempchar1 *nctemp631;
static struct nctempchar1 nctemp632 = {{ 6}, (char*)" -O3 \0"};
nctemp631=&nctemp632;
nctempchar1* nctemp629= nctemp631;
nctempchar1* nctemp633=LibeStradd(nctemp626,nctemp629);
cmd=nctemp633;
}
else{
nctempchar1* nctemp639= cmd;
struct nctempchar1 *nctemp644;
static struct nctempchar1 nctemp645 = {{ 6}, (char*)" -O2 \0"};
nctemp644=&nctemp645;
nctempchar1* nctemp642= nctemp644;
nctempchar1* nctemp646=LibeStradd(nctemp639,nctemp642);
cmd=nctemp646;
}
int nctemp647 = (openmp ==1);
if(nctemp647)
{
nctempchar1* nctemp656= cmd;
struct nctempchar1 *nctemp661;
static struct nctempchar1 nctemp662 = {{ 11}, (char*)" -fopenmp \0"};
nctemp661=&nctemp662;
nctempchar1* nctemp659= nctemp661;
nctempchar1* nctemp663=LibeStradd(nctemp656,nctemp659);
cmd=nctemp663;
}
nctempchar1* nctemp669= cmd;
nctempchar1* nctemp672= file;
nctempchar1* nctemp675=LibeStradd(nctemp669,nctemp672);
cmd=nctemp675;
tmp=cmd;
nctempchar1* nctemp687= tmp;
struct nctempchar1 *nctemp692;
static struct nctempchar1 nctemp693 = {{ 3}, (char*)"\n\0"};
nctemp692=&nctemp693;
nctempchar1* nctemp690= nctemp692;
nctempchar1* nctemp694=LibeStradd(nctemp687,nctemp690);
cmd=nctemp694;
RunFree(tmp->a);
RunFree(tmp);
int nctemp698 = (show ==1);
if(nctemp698)
{
int nctemp703= 4;
nctempchar1* nctemp705= cmd;
int nctemp708=LibePuts(nctemp703,nctemp705);
int nctemp710= 4;
int nctemp712=LibeFlush(nctemp710);
}
nctempchar1* nctemp714= cmd;
int nctemp717=LibeSystem(nctemp714);
struct nctempchar1 *nctemp725;
static struct nctempchar1 nctemp726 = {{ 4}, (char*)"rm \0"};
nctemp725=&nctemp726;
nctempchar1* nctemp723= nctemp725;
nctempchar1* nctemp727= file;
nctempchar1* nctemp730=LibeStradd(nctemp723,nctemp727);
cmd=nctemp730;
tmp=cmd;
nctempchar1* nctemp742= cmd;
struct nctempchar1 *nctemp747;
static struct nctempchar1 nctemp748 = {{ 3}, (char*)"\n\0"};
nctemp747=&nctemp748;
nctempchar1* nctemp745= nctemp747;
nctempchar1* nctemp749=LibeStradd(nctemp742,nctemp745);
cmd=nctemp749;
RunFree(tmp->a);
RunFree(tmp);
int nctemp753 = (show ==1);
if(nctemp753)
{
int nctemp758= 4;
nctempchar1* nctemp760= cmd;
int nctemp763=LibePuts(nctemp758,nctemp760);
int nctemp765= 4;
int nctemp767=LibeFlush(nctemp765);
}
nctempchar1* nctemp769= cmd;
int nctemp772=LibeSystem(nctemp769);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp781=file->d[0];l =nctemp781;
struct nctempchar1 *nctemp790;
static struct nctempchar1 nctemp791 = {{ 57}, (char*)"nvcc -arch=native -use_fast_math --compiler-options -O2 \0"};
nctemp790=&nctemp791;
cmd=nctemp790;
nctempchar1* nctemp797= cmd;
struct nctempchar1 *nctemp802;
static struct nctempchar1 nctemp803 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp802=&nctemp803;
nctempchar1* nctemp800= nctemp802;
nctempchar1* nctemp804=LibeStradd(nctemp797,nctemp800);
cmd=nctemp804;
int nctemp805 = (debug ==1);
if(nctemp805)
{
nctempchar1* nctemp814= cmd;
struct nctempchar1 *nctemp819;
static struct nctempchar1 nctemp820 = {{ 5}, (char*)" -g \0"};
nctemp819=&nctemp820;
nctempchar1* nctemp817= nctemp819;
nctempchar1* nctemp821=LibeStradd(nctemp814,nctemp817);
cmd=nctemp821;
}
int nctemp822 = (optimize ==1);
if(nctemp822)
{
nctempchar1* nctemp831= cmd;
struct nctempchar1 *nctemp836;
static struct nctempchar1 nctemp837 = {{ 6}, (char*)" -O3 \0"};
nctemp836=&nctemp837;
nctempchar1* nctemp834= nctemp836;
nctempchar1* nctemp838=LibeStradd(nctemp831,nctemp834);
cmd=nctemp838;
}
else{
nctempchar1* nctemp844= cmd;
struct nctempchar1 *nctemp849;
static struct nctempchar1 nctemp850 = {{ 6}, (char*)" -O2 \0"};
nctemp849=&nctemp850;
nctempchar1* nctemp847= nctemp849;
nctempchar1* nctemp851=LibeStradd(nctemp844,nctemp847);
cmd=nctemp851;
}
int nctemp852 = (openmp ==1);
if(nctemp852)
{
nctempchar1* nctemp861= cmd;
struct nctempchar1 *nctemp866;
static struct nctempchar1 nctemp867 = {{ 11}, (char*)" -fopenmp \0"};
nctemp866=&nctemp867;
nctempchar1* nctemp864= nctemp866;
nctempchar1* nctemp868=LibeStradd(nctemp861,nctemp864);
cmd=nctemp868;
}
nctempchar1* nctemp874= cmd;
nctempchar1* nctemp877= file;
nctempchar1* nctemp880=LibeStradd(nctemp874,nctemp877);
cmd=nctemp880;
tmp=cmd;
nctempchar1* nctemp892= cmd;
struct nctempchar1 *nctemp897;
static struct nctempchar1 nctemp898 = {{ 3}, (char*)"\n\0"};
nctemp897=&nctemp898;
nctempchar1* nctemp895= nctemp897;
nctempchar1* nctemp899=LibeStradd(nctemp892,nctemp895);
cmd=nctemp899;
RunFree(tmp->a);
RunFree(tmp);
int nctemp903 = (show ==1);
if(nctemp903)
{
int nctemp908= 4;
nctempchar1* nctemp910= cmd;
int nctemp913=LibePuts(nctemp908,nctemp910);
int nctemp915= 4;
int nctemp917=LibeFlush(nctemp915);
}
nctempchar1* nctemp919= cmd;
int nctemp922=LibeSystem(nctemp919);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp941;
static struct nctempchar1 nctemp942 = {{ 4}, (char*)"rm \0"};
nctemp941=&nctemp942;
int nctemp939=nctemp941->d[0];int nctemp945 = nctemp939 + l;
int nctemp947 = nctemp945 + 2;
int nctemp932=nctemp947;
nctempchar1 *nctemp931;
nctemp931=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp956;
static struct nctempchar1 nctemp957 = {{ 4}, (char*)"rm \0"};
nctemp956=&nctemp957;
int nctemp954=nctemp956->d[0];int nctemp960 = nctemp954 + l;
int nctemp962 = nctemp960 + 2;
nctemp931->d[0]=nctemp962;
nctemp931->a=(char *)RunMalloc(sizeof(char)*nctemp932);
cmd=nctemp931;
struct nctempchar1 *nctemp970;
static struct nctempchar1 nctemp971 = {{ 4}, (char*)"rm \0"};
nctemp970=&nctemp971;
nctempchar1* nctemp968= nctemp970;
nctempchar1* nctemp972= file;
nctempchar1* nctemp975=LibeStradd(nctemp968,nctemp972);
cmd=nctemp975;
tmp=cmd;
nctempchar1* nctemp987= cmd;
struct nctempchar1 *nctemp992;
static struct nctempchar1 nctemp993 = {{ 3}, (char*)"\n\0"};
nctemp992=&nctemp993;
nctempchar1* nctemp990= nctemp992;
nctempchar1* nctemp994=LibeStradd(nctemp987,nctemp990);
cmd=nctemp994;
int nctemp995 = (show ==1);
if(nctemp995)
{
int nctemp1000= 4;
nctempchar1* nctemp1002= cmd;
int nctemp1005=LibePuts(nctemp1000,nctemp1002);
int nctemp1007= 4;
int nctemp1009=LibeFlush(nctemp1007);
}
nctempchar1* nctemp1011= cmd;
int nctemp1014=LibeSystem(nctemp1011);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp1023=file->d[0];l =nctemp1023;
struct nctempchar1 *nctemp1032;
static struct nctempchar1 nctemp1033 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1032=&nctemp1033;
tmp=nctemp1032;
int nctemp1040=160;
nctempchar1 *nctemp1039;
nctemp1039=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1039->d[0]=160;
nctemp1039->a=(char *)RunMalloc(sizeof(char)*nctemp1040);
cmd=nctemp1039;
nctempchar1* nctemp1044= tmp;
nctempchar1* nctemp1047= cmd;
int nctemp1050=LibeStrcpy(nctemp1044,nctemp1047);
int nctemp1051 = (debug ==1);
if(nctemp1051)
{
struct nctempchar1 *nctemp1058;
static struct nctempchar1 nctemp1059 = {{ 5}, (char*)" -g \0"};
nctemp1058=&nctemp1059;
nctempchar1* nctemp1056= nctemp1058;
nctempchar1* nctemp1060= cmd;
int nctemp1063=LibeStrcat(nctemp1056,nctemp1060);
}
int nctemp1064 = (optimize ==1);
if(nctemp1064)
{
struct nctempchar1 *nctemp1071;
static struct nctempchar1 nctemp1072 = {{ 6}, (char*)" -O3 \0"};
nctemp1071=&nctemp1072;
nctempchar1* nctemp1069= nctemp1071;
nctempchar1* nctemp1073= cmd;
int nctemp1076=LibeStrcat(nctemp1069,nctemp1073);
}
int nctemp1077 = (openmp ==1);
if(nctemp1077)
{
struct nctempchar1 *nctemp1084;
static struct nctempchar1 nctemp1085 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1084=&nctemp1085;
nctempchar1* nctemp1082= nctemp1084;
nctempchar1* nctemp1086= cmd;
int nctemp1089=LibeStrcat(nctemp1082,nctemp1086);
}
nctempchar1* nctemp1091= file;
nctempchar1* nctemp1094= cmd;
int nctemp1097=LibeStrcat(nctemp1091,nctemp1094);
struct nctempchar1 *nctemp1101;
static struct nctempchar1 nctemp1102 = {{ 3}, (char*)"\n\0"};
nctemp1101=&nctemp1102;
nctempchar1* nctemp1099= nctemp1101;
nctempchar1* nctemp1103= cmd;
int nctemp1106=LibeStrcat(nctemp1099,nctemp1103);
int nctemp1107 = (show ==1);
if(nctemp1107)
{
int nctemp1112= 4;
nctempchar1* nctemp1114= cmd;
int nctemp1117=LibePuts(nctemp1112,nctemp1114);
int nctemp1119= 4;
int nctemp1121=LibeFlush(nctemp1119);
}
nctempchar1* nctemp1123= cmd;
int nctemp1126=LibeSystem(nctemp1123);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1145;
static struct nctempchar1 nctemp1146 = {{ 4}, (char*)"rm \0"};
nctemp1145=&nctemp1146;
int nctemp1143=nctemp1145->d[0];int nctemp1149 = nctemp1143 + l;
int nctemp1151 = nctemp1149 + 2;
int nctemp1136=nctemp1151;
nctempchar1 *nctemp1135;
nctemp1135=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1160;
static struct nctempchar1 nctemp1161 = {{ 4}, (char*)"rm \0"};
nctemp1160=&nctemp1161;
int nctemp1158=nctemp1160->d[0];int nctemp1164 = nctemp1158 + l;
int nctemp1166 = nctemp1164 + 2;
nctemp1135->d[0]=nctemp1166;
nctemp1135->a=(char *)RunMalloc(sizeof(char)*nctemp1136);
cmd=nctemp1135;
struct nctempchar1 *nctemp1170;
static struct nctempchar1 nctemp1171 = {{ 4}, (char*)"rm \0"};
nctemp1170=&nctemp1171;
nctempchar1* nctemp1168= nctemp1170;
nctempchar1* nctemp1172= cmd;
int nctemp1175=LibeStrcpy(nctemp1168,nctemp1172);
nctempchar1* nctemp1177= file;
nctempchar1* nctemp1180= cmd;
int nctemp1183=LibeStrcat(nctemp1177,nctemp1180);
struct nctempchar1 *nctemp1187;
static struct nctempchar1 nctemp1188 = {{ 3}, (char*)"\n\0"};
nctemp1187=&nctemp1188;
nctempchar1* nctemp1185= nctemp1187;
nctempchar1* nctemp1189= cmd;
int nctemp1192=LibeStrcat(nctemp1185,nctemp1189);
int nctemp1193 = (show ==1);
if(nctemp1193)
{
int nctemp1198= 4;
nctempchar1* nctemp1200= cmd;
int nctemp1203=LibePuts(nctemp1198,nctemp1200);
int nctemp1205= 4;
int nctemp1207=LibeFlush(nctemp1205);
}
nctempchar1* nctemp1209= cmd;
int nctemp1212=LibeSystem(nctemp1209);
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
int options;
int i;
int l;
int nctemp1218=LibeInit();
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
options =0;
int nctemp1272=PtreeInit();
int nctemp1274=CodeInit();
int nctemp1276=CodeArraycheckoff();
int nctemp1278=CodeDebugoff();
int nctemp1280= 2;
int nctemp1282=CodeSetarch(nctemp1280);
int nctemp1287=MainArgs->d[0];l =nctemp1287;
int nctemp1291 = (l <= 1);
if(nctemp1291)
{
struct nctempchar1 *nctemp1298;
static struct nctempchar1 nctemp1299 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1298=&nctemp1299;
nctempchar1* nctemp1296= nctemp1298;
int nctemp1300=MainError(nctemp1296);
}
i =1;
int nctemp1309=MainArgs->d[0];int nctemp1305 = (i < nctemp1309);
while(nctemp1305){
{
int nctemp1318=i;
nctempchar1* nctemp1316= MainArgs->a[nctemp1318].arg;
struct nctempchar1 *nctemp1323;
static struct nctempchar1 nctemp1324 = {{ 3}, (char*)"-h\0"};
nctemp1323=&nctemp1324;
nctempchar1* nctemp1321= nctemp1323;
int nctemp1325=LibeStrcmp(nctemp1316,nctemp1321);
int nctemp1313 = (nctemp1325 ==1);
if(nctemp1313)
{
int nctemp1328= 2;
int nctemp1330=MainHelp(nctemp1328);
int nctemp1332=LibeExit();
}
int nctemp1338=i;
nctempchar1* nctemp1336= MainArgs->a[nctemp1338].arg;
struct nctempchar1 *nctemp1343;
static struct nctempchar1 nctemp1344 = {{ 3}, (char*)"-t\0"};
nctemp1343=&nctemp1344;
nctempchar1* nctemp1341= nctemp1343;
int nctemp1345=LibeStrcmp(nctemp1336,nctemp1341);
int nctemp1333 = (nctemp1345 ==1);
if(nctemp1333)
{
btree =1;
parse =1;
}
int nctemp1360=i;
nctempchar1* nctemp1358= MainArgs->a[nctemp1360].arg;
struct nctempchar1 *nctemp1365;
static struct nctempchar1 nctemp1366 = {{ 3}, (char*)"-a\0"};
nctemp1365=&nctemp1366;
nctempchar1* nctemp1363= nctemp1365;
int nctemp1367=LibeStrcmp(nctemp1358,nctemp1363);
int nctemp1355 = (nctemp1367 ==1);
if(nctemp1355)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1386=i;
nctempchar1* nctemp1384= MainArgs->a[nctemp1386].arg;
struct nctempchar1 *nctemp1391;
static struct nctempchar1 nctemp1392 = {{ 3}, (char*)"-s\0"};
nctemp1391=&nctemp1392;
nctempchar1* nctemp1389= nctemp1391;
int nctemp1393=LibeStrcmp(nctemp1384,nctemp1389);
int nctemp1381 = (nctemp1393 ==1);
if(nctemp1381)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1412=i;
nctempchar1* nctemp1410= MainArgs->a[nctemp1412].arg;
struct nctempchar1 *nctemp1417;
static struct nctempchar1 nctemp1418 = {{ 3}, (char*)"-r\0"};
nctemp1417=&nctemp1418;
nctempchar1* nctemp1415= nctemp1417;
int nctemp1419=LibeStrcmp(nctemp1410,nctemp1415);
int nctemp1407 = (nctemp1419 ==1);
if(nctemp1407)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1438=i;
nctempchar1* nctemp1436= MainArgs->a[nctemp1438].arg;
struct nctempchar1 *nctemp1443;
static struct nctempchar1 nctemp1444 = {{ 3}, (char*)"-e\0"};
nctemp1443=&nctemp1444;
nctempchar1* nctemp1441= nctemp1443;
int nctemp1445=LibeStrcmp(nctemp1436,nctemp1441);
int nctemp1433 = (nctemp1445 ==1);
if(nctemp1433)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1464=i;
nctempchar1* nctemp1462= MainArgs->a[nctemp1464].arg;
struct nctempchar1 *nctemp1469;
static struct nctempchar1 nctemp1470 = {{ 3}, (char*)"-p\0"};
nctemp1469=&nctemp1470;
nctempchar1* nctemp1467= nctemp1469;
int nctemp1471=LibeStrcmp(nctemp1462,nctemp1467);
int nctemp1459 = (nctemp1471 ==1);
if(nctemp1459)
{
parse =1;
}
int nctemp1482=i;
nctempchar1* nctemp1480= MainArgs->a[nctemp1482].arg;
struct nctempchar1 *nctemp1487;
static struct nctempchar1 nctemp1488 = {{ 3}, (char*)"-q\0"};
nctemp1487=&nctemp1488;
nctempchar1* nctemp1485= nctemp1487;
int nctemp1489=LibeStrcmp(nctemp1480,nctemp1485);
int nctemp1477 = (nctemp1489 ==1);
if(nctemp1477)
{
semantic =1;
parse =1;
}
int nctemp1504=i;
nctempchar1* nctemp1502= MainArgs->a[nctemp1504].arg;
struct nctempchar1 *nctemp1509;
static struct nctempchar1 nctemp1510 = {{ 3}, (char*)"-C\0"};
nctemp1509=&nctemp1510;
nctempchar1* nctemp1507= nctemp1509;
int nctemp1511=LibeStrcmp(nctemp1502,nctemp1507);
int nctemp1499 = (nctemp1511 ==1);
if(nctemp1499)
{
int nctemp1514=CodeArraycheckon();
}
int nctemp1520=i;
nctempchar1* nctemp1518= MainArgs->a[nctemp1520].arg;
struct nctempchar1 *nctemp1525;
static struct nctempchar1 nctemp1526 = {{ 3}, (char*)"-g\0"};
nctemp1525=&nctemp1526;
nctempchar1* nctemp1523= nctemp1525;
int nctemp1527=LibeStrcmp(nctemp1518,nctemp1523);
int nctemp1515 = (nctemp1527 ==1);
if(nctemp1515)
{
debug =1;
int nctemp1534=CodeDebugon();
}
int nctemp1540=i;
nctempchar1* nctemp1538= MainArgs->a[nctemp1540].arg;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 3}, (char*)"-d\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=LibeStrcmp(nctemp1538,nctemp1543);
int nctemp1535 = (nctemp1547 ==1);
if(nctemp1535)
{
show =1;
}
int nctemp1558=i;
nctempchar1* nctemp1556= MainArgs->a[nctemp1558].arg;
struct nctempchar1 *nctemp1563;
static struct nctempchar1 nctemp1564 = {{ 3}, (char*)"-O\0"};
nctemp1563=&nctemp1564;
nctempchar1* nctemp1561= nctemp1563;
int nctemp1565=LibeStrcmp(nctemp1556,nctemp1561);
int nctemp1553 = (nctemp1565 ==1);
if(nctemp1553)
{
optimize =1;
}
int nctemp1576=i;
nctempchar1* nctemp1574= MainArgs->a[nctemp1576].arg;
struct nctempchar1 *nctemp1581;
static struct nctempchar1 nctemp1582 = {{ 3}, (char*)"-f\0"};
nctemp1581=&nctemp1582;
nctempchar1* nctemp1579= nctemp1581;
int nctemp1583=LibeStrcmp(nctemp1574,nctemp1579);
int nctemp1571 = (nctemp1583 ==1);
if(nctemp1571)
{
openmp =1;
}
int nctemp1594=i;
nctempchar1* nctemp1592= MainArgs->a[nctemp1594].arg;
struct nctempchar1 *nctemp1599;
static struct nctempchar1 nctemp1600 = {{ 3}, (char*)"-c\0"};
nctemp1599=&nctemp1600;
nctempchar1* nctemp1597= nctemp1599;
int nctemp1601=LibeStrcmp(nctemp1592,nctemp1597);
int nctemp1589 = (nctemp1601 ==1);
if(nctemp1589)
{
obj =0;
}
int nctemp1613=i;
int nctemp1615=0;
char nctemp1618=(char)('-');
int nctemp1610 = (MainArgs->a[nctemp1613].arg->a[nctemp1615] ==nctemp1618);
int nctemp1607 = (nctemp1610 ==1);
if(nctemp1607)
{
int nctemp1630 = options + 1;
options =nctemp1630;
}
}
int nctemp1639 = i + 1;
i =nctemp1639;
int nctemp1644=MainArgs->d[0];int nctemp1640 = (i < nctemp1644);
nctemp1305=nctemp1640;
}
int nctemp1654 = (parse ==0);
int nctemp1659 = (semantic ==0);
int nctemp1651 = (nctemp1654 && nctemp1659);
int nctemp1664 = (emit ==0);
int nctemp1648 = (nctemp1651 && nctemp1664);
if(nctemp1648)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1687 = options + 1;
int nctemp1689=MainArgs->d[0];int nctemp1680 = (nctemp1687 >= nctemp1689);
if(nctemp1680)
{
struct nctempchar1 *nctemp1696;
static struct nctempchar1 nctemp1697 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1696=&nctemp1697;
nctempchar1* nctemp1694= nctemp1696;
int nctemp1698=MainError(nctemp1694);
}
else{
int nctemp1708=MainArgs->d[0];int nctemp1713 = nctemp1708 - 1;
int nctemp1704=nctemp1713;
infile=MainArgs->a[nctemp1704].arg;
}
int nctemp1715 = (emit ==1);
if(nctemp1715)
{
nctempchar1* nctemp1724= infile;
int nctemp1727= 2;
nctempchar1* nctemp1729=MainFout(nctemp1724,nctemp1727);
outfile=nctemp1729;
nctempchar1* nctemp1734= outfile;
struct nctempchar1 *nctemp1739;
static struct nctempchar1 nctemp1740 = {{ 2}, (char*)"w\0"};
nctemp1739=&nctemp1740;
nctempchar1* nctemp1737= nctemp1739;
int nctemp1741=LibeOpen(nctemp1734,nctemp1737);
fd =nctemp1741;
int nctemp1743= fd;
int nctemp1745=CodeSetfdout(nctemp1743);
}
nctempchar1* nctemp1749= infile;
int nctemp1752=ScanInit(nctemp1749);
int nctemp1746 = (nctemp1752 ==0);
if(nctemp1746)
{
int nctemp1755=LibeExit();
}
int nctemp1757= 1;
int nctemp1759=ScanSetline(nctemp1757);
int nctemp1761=ParseIniparse();
int nctemp1762 = (emit ==1);
if(nctemp1762)
{
int nctemp1767=CodePreamble();
}
struct symbol* nctemp1771=SymMktable();
struct symbol* nctemp1769= nctemp1771;
struct symbol* nctemp1772=SymSetetp(nctemp1769);
int nctemp1773 = (parse ==1);
if(nctemp1773)
{
struct tree* nctemp1781=ParseParse();
p =nctemp1781;
}
int nctemp1782 = (btree ==1);
if(nctemp1782)
{
struct tree* nctemp1787= p;
int nctemp1789= 0;
int nctemp1791=PtreePrtree(nctemp1787,nctemp1789);
}
int nctemp1792 = (p !=0);
int nctemp1796=nctemp1792;
while(nctemp1796)
{{
int nctemp1797 = (semantic ==1);
if(nctemp1797)
{
int nctemp1801 = (p !=0);
if(nctemp1801)
{
struct tree* nctemp1806= p;
struct symbol* nctemp1810=SymGetetp();
struct symbol* nctemp1808= nctemp1810;
int nctemp1811=SemSem(nctemp1806,nctemp1808);
}
int nctemp1812 = (atree ==1);
if(nctemp1812)
{
struct tree* nctemp1817= p;
int nctemp1819= 0;
int nctemp1821=PtreePrtree(nctemp1817,nctemp1819);
}
int nctemp1822 = (table ==1);
if(nctemp1822)
{
struct symbol* nctemp1829=SymGetltp();
int nctemp1826 = (nctemp1829 !=0);
if(nctemp1826)
{
int nctemp1832= 3;
struct symbol* nctemp1836=SymGetltp();
struct symbol* nctemp1834= nctemp1836;
int nctemp1837= 0;
int nctemp1839=SymPrsym(nctemp1832,nctemp1834,nctemp1837);
}
}
}
int nctemp1840 = (emit ==1);
if(nctemp1840)
{
int nctemp1844 = (p !=0);
if(nctemp1844)
{
struct tree* nctemp1849= p;
struct symbol* nctemp1853=SymGetetp();
struct symbol* nctemp1851= nctemp1853;
int nctemp1854=CodeCode(nctemp1849,nctemp1851);
}
}
struct tree* nctemp1856= p;
int nctemp1858=PtreeRmtree(nctemp1856);
struct symbol* nctemp1862=SymGetltp();
struct symbol* nctemp1860= nctemp1862;
int nctemp1863=SymRmtable(nctemp1860);
int nctemp1864 = (parse ==1);
if(nctemp1864)
{
struct tree* nctemp1872=ParseParse();
p =nctemp1872;
int nctemp1873 = (btree ==1);
if(nctemp1873)
{
struct tree* nctemp1878= p;
int nctemp1880= 0;
int nctemp1882=PtreePrtree(nctemp1878,nctemp1880);
}
}
}
int nctemp1883 = (p !=0);
nctemp1796=nctemp1883;}int nctemp1890=ParseGetlookahead();
int nctemp1887 = (nctemp1890 !=19);
if(nctemp1887)
{
struct nctempchar1 *nctemp1895;
static struct nctempchar1 nctemp1896 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1895=&nctemp1896;
nctempchar1* nctemp1893= nctemp1895;
int nctemp1897=MainError(nctemp1893);
}
int nctemp1898 = (etable ==1);
if(nctemp1898)
{
int nctemp1903= 4;
int nctemp1905=LibeFlush(nctemp1903);
struct symbol* nctemp1909=SymGetetp();
int nctemp1906 = (nctemp1909 !=0);
if(nctemp1906)
{
int nctemp1912= 3;
struct symbol* nctemp1916=SymGetetp();
struct symbol* nctemp1914= nctemp1916;
int nctemp1917= 0;
int nctemp1919=SymPrsym(nctemp1912,nctemp1914,nctemp1917);
}
}
int nctemp1920 = (emit ==1);
if(nctemp1920)
{
int nctemp1925=CodePostamble();
}
int nctemp1929 = (emit ==1);
int nctemp1934 = (obj ==1);
int nctemp1926 = (nctemp1929 && nctemp1934);
if(nctemp1926)
{
int nctemp1938 = (2 ==1);
if(nctemp1938)
{
nctempchar1* nctemp1943= outfile;
int nctemp1946= debug;
int nctemp1948= optimize;
int nctemp1950= openmp;
int nctemp1952= show;
int nctemp1954=MainCcompcpu(nctemp1943,nctemp1946,nctemp1948,nctemp1950,nctemp1952);
}
else{
int nctemp1955 = (2 ==2);
if(nctemp1955)
{
nctempchar1* nctemp1960= outfile;
int nctemp1963= debug;
int nctemp1965= optimize;
int nctemp1967= openmp;
int nctemp1969= show;
int nctemp1971=MainCcompcuda(nctemp1960,nctemp1963,nctemp1965,nctemp1967,nctemp1969);
}
else{
int nctemp1972 = (2 ==3);
if(nctemp1972)
{
nctempchar1* nctemp1977= outfile;
int nctemp1980= debug;
int nctemp1982= optimize;
int nctemp1984= openmp;
int nctemp1986= show;
int nctemp1988=MainCcomphip(nctemp1977,nctemp1980,nctemp1982,nctemp1984,nctemp1986);
}
else{
struct nctempchar1 *nctemp1992;
static struct nctempchar1 nctemp1993 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1992=&nctemp1993;
nctempchar1* nctemp1990= nctemp1992;
int nctemp1994=MainError(nctemp1990);
}
}
}
}
int nctemp1995 = (emit ==1);
if(nctemp1995)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp2003= fd;
int nctemp2005=LibeClose(nctemp2003);
}
nctempchar1* nctemp2012= infile;
nctempchar1* nctemp2015=MainFmod(nctemp2012);
nctempchar1* nctemp2010= nctemp2015;
struct nctempchar1 *nctemp2018;
static struct nctempchar1 nctemp2019 = {{ 2}, (char*)"w\0"};
nctemp2018=&nctemp2019;
nctempchar1* nctemp2016= nctemp2018;
int nctemp2020=LibeOpen(nctemp2010,nctemp2016);
fd =nctemp2020;
int nctemp2022= fd;
struct symbol* nctemp2026=SymGetetp();
struct symbol* nctemp2024= nctemp2026;
int nctemp2027= 0;
int nctemp2029=SymExport(nctemp2022,nctemp2024,nctemp2027);
int nctemp2031= 3;
int nctemp2033=LibeFlush(nctemp2031);
return 1;
}
}
