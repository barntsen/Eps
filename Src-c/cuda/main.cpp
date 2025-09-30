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
int SemSimple;
int SemSetsimple (int simple);
int SemGetsimple ();
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
int CodeSexpr (struct tree* p);
int CodeSbinexpr (struct tree* p);
int CodeError (nctempchar1 *s);
int CodeBreak;
int CodeBreakon ();
int CodeGetbreak ();
int CodeBreakoff ();
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
int CodeDimprod (struct tree* p,nctempchar1 *name,int n);
int CodeSarray (struct tree* p,nctempchar1 *qname);
int CodeIdstruct (struct tree* p);
int CodeSident (struct tree* p);
int CodeSfcall (struct tree* p);
int CodeScast (struct tree* p);
int CodeSprimexpr (struct tree* p);
int CodeSunexpr (struct tree* p);
int CodeSforstmnt (struct tree* p);
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
int nctemp231= 4;
struct nctempchar1 *nctemp235;
static struct nctempchar1 nctemp236 = {{ 32}, (char*)"   -i : Break up expressions \n\0"};
nctemp235=&nctemp236;
nctempchar1* nctemp233= nctemp235;
int nctemp237=LibePuts(nctemp231,nctemp233);
int nctemp238 = (arch ==1);
if(nctemp238)
{
int nctemp243= 4;
struct nctempchar1 *nctemp247;
static struct nctempchar1 nctemp248 = {{ 57}, (char*)"   -c : Produce c-code but do not generate object code\n\0"};
nctemp247=&nctemp248;
nctempchar1* nctemp245= nctemp247;
int nctemp249=LibePuts(nctemp243,nctemp245);
}
else{
int nctemp250 = (arch ==2);
if(nctemp250)
{
int nctemp255= 4;
struct nctempchar1 *nctemp259;
static struct nctempchar1 nctemp260 = {{ 64}, (char*)"   -c : Produce c++/cuda-code but do not generate object code\n\0"};
nctemp259=&nctemp260;
nctempchar1* nctemp257= nctemp259;
int nctemp261=LibePuts(nctemp255,nctemp257);
}
else{
int nctemp262 = (arch ==3);
if(nctemp262)
{
int nctemp267= 4;
struct nctempchar1 *nctemp271;
static struct nctempchar1 nctemp272 = {{ 63}, (char*)"   -c : Produce c++/hip-code but do not generate object code\n\0"};
nctemp271=&nctemp272;
nctempchar1* nctemp269= nctemp271;
int nctemp273=LibePuts(nctemp267,nctemp269);
}
else{
struct nctempchar1 *nctemp277;
static struct nctempchar1 nctemp278 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp277=&nctemp278;
nctempchar1* nctemp275= nctemp277;
int nctemp279=MainError(nctemp275);
}
}
}
int nctemp281= 4;
struct nctempchar1 *nctemp285;
static struct nctempchar1 nctemp286 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp285=&nctemp286;
nctempchar1* nctemp283= nctemp285;
int nctemp287=LibePuts(nctemp281,nctemp283);
int nctemp289= 4;
struct nctempchar1 *nctemp293;
static struct nctempchar1 nctemp294 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp293=&nctemp294;
nctempchar1* nctemp291= nctemp293;
int nctemp295=LibePuts(nctemp289,nctemp291);
int nctemp297= 4;
struct nctempchar1 *nctemp301;
static struct nctempchar1 nctemp302 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp301=&nctemp302;
nctempchar1* nctemp299= nctemp301;
int nctemp303=LibePuts(nctemp297,nctemp299);
int nctemp305= 4;
struct nctempchar1 *nctemp309;
static struct nctempchar1 nctemp310 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp309=&nctemp310;
nctempchar1* nctemp307= nctemp309;
int nctemp311=LibePuts(nctemp305,nctemp307);
int nctemp313= 4;
int nctemp315=LibeFlush(nctemp313);
return 1;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp321=infile->d[0];l =nctemp321;
int nctemp325 = (l < 3);
if(nctemp325)
{
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 19}, (char*)" Illegal file name\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
int nctemp334=MainError(nctemp330);
}
int nctemp343 = l - 2;
int nctemp338=nctemp343;
char nctemp345=(char)('e');
int nctemp335 = (infile->a[nctemp338] !=nctemp345);
if(nctemp335)
{
struct nctempchar1 *nctemp351;
static struct nctempchar1 nctemp352 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp351=&nctemp352;
nctempchar1* nctemp349= nctemp351;
int nctemp353=MainError(nctemp349);
}
int nctemp354 = (arch ==1);
if(nctemp354)
{
int nctemp364=l;
nctempchar1 *nctemp363;
nctemp363=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp363->d[0]=l;
nctemp363->a=(char *)RunMalloc(sizeof(char)*nctemp364);
outfile=nctemp363;
nctempchar1* nctemp368= infile;
nctempchar1* nctemp371= outfile;
int nctemp374=LibeStrcpy(nctemp368,nctemp371);
int nctemp383 = l - 2;
int nctemp378=nctemp383;
char nctemp385=(char)('c');
outfile->a[nctemp378] =nctemp385;
}
else{
int nctemp388 = (arch ==2);
if(nctemp388)
{
int nctemp403 = l + 2;
int nctemp398=nctemp403;
nctempchar1 *nctemp397;
nctemp397=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp408 = l + 2;
nctemp397->d[0]=nctemp408;
nctemp397->a=(char *)RunMalloc(sizeof(char)*nctemp398);
outfile=nctemp397;
nctempchar1* nctemp410= infile;
nctempchar1* nctemp413= outfile;
int nctemp416=LibeStrcpy(nctemp410,nctemp413);
int nctemp425 = l - 2;
int nctemp420=nctemp425;
char nctemp427=(char)('c');
outfile->a[nctemp420] =nctemp427;
int nctemp438 = l - 1;
int nctemp433=nctemp438;
char nctemp440=(char)('p');
outfile->a[nctemp433] =nctemp440;
int nctemp451 = l - 0;
int nctemp446=nctemp451;
char nctemp453=(char)('p');
outfile->a[nctemp446] =nctemp453;
}
else{
int nctemp456 = (arch ==3);
if(nctemp456)
{
int nctemp471 = l + 2;
int nctemp466=nctemp471;
nctempchar1 *nctemp465;
nctemp465=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp476 = l + 2;
nctemp465->d[0]=nctemp476;
nctemp465->a=(char *)RunMalloc(sizeof(char)*nctemp466);
outfile=nctemp465;
nctempchar1* nctemp478= infile;
nctempchar1* nctemp481= outfile;
int nctemp484=LibeStrcpy(nctemp478,nctemp481);
int nctemp493 = l - 2;
int nctemp488=nctemp493;
char nctemp495=(char)('c');
outfile->a[nctemp488] =nctemp495;
int nctemp506 = l - 1;
int nctemp501=nctemp506;
char nctemp508=(char)('p');
outfile->a[nctemp501] =nctemp508;
int nctemp519 = l - 0;
int nctemp514=nctemp519;
char nctemp521=(char)('p');
outfile->a[nctemp514] =nctemp521;
}
else{
struct nctempchar1 *nctemp527;
static struct nctempchar1 nctemp528 = {{ 20}, (char*)"Unknow architecture\0"};
nctemp527=&nctemp528;
nctempchar1* nctemp525= nctemp527;
int nctemp529=MainError(nctemp525);
}
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp536=infile->d[0];l =nctemp536;
int nctemp540 = (l < 3);
if(nctemp540)
{
struct nctempchar1 *nctemp547;
static struct nctempchar1 nctemp548 = {{ 19}, (char*)" Illegal file name\0"};
nctemp547=&nctemp548;
nctempchar1* nctemp545= nctemp547;
int nctemp549=MainError(nctemp545);
}
int nctemp558 = l - 2;
int nctemp553=nctemp558;
char nctemp560=(char)('e');
int nctemp550 = (infile->a[nctemp553] !=nctemp560);
if(nctemp550)
{
struct nctempchar1 *nctemp566;
static struct nctempchar1 nctemp567 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp566=&nctemp567;
nctempchar1* nctemp564= nctemp566;
int nctemp568=MainError(nctemp564);
}
int nctemp575=l;
nctempchar1 *nctemp574;
nctemp574=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp574->d[0]=l;
nctemp574->a=(char *)RunMalloc(sizeof(char)*nctemp575);
outfile=nctemp574;
nctempchar1* nctemp579= infile;
nctempchar1* nctemp582= outfile;
int nctemp585=LibeStrcpy(nctemp579,nctemp582);
int nctemp594 = l - 2;
int nctemp589=nctemp594;
char nctemp596=(char)('m');
outfile->a[nctemp589] =nctemp596;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp606;
static struct nctempchar1 nctemp607 = {{ 20}, (char*)"gcc -c -ffast-math \0"};
nctemp606=&nctemp607;
cmd=nctemp606;
int nctemp608 = (debug ==1);
if(nctemp608)
{
nctempchar1* nctemp617= cmd;
struct nctempchar1 *nctemp622;
static struct nctempchar1 nctemp623 = {{ 5}, (char*)" -g \0"};
nctemp622=&nctemp623;
nctempchar1* nctemp620= nctemp622;
nctempchar1* nctemp624=LibeStradd(nctemp617,nctemp620);
cmd=nctemp624;
}
int nctemp625 = (optimize ==1);
if(nctemp625)
{
nctempchar1* nctemp634= cmd;
struct nctempchar1 *nctemp639;
static struct nctempchar1 nctemp640 = {{ 6}, (char*)" -O3 \0"};
nctemp639=&nctemp640;
nctempchar1* nctemp637= nctemp639;
nctempchar1* nctemp641=LibeStradd(nctemp634,nctemp637);
cmd=nctemp641;
}
else{
nctempchar1* nctemp647= cmd;
struct nctempchar1 *nctemp652;
static struct nctempchar1 nctemp653 = {{ 6}, (char*)" -O2 \0"};
nctemp652=&nctemp653;
nctempchar1* nctemp650= nctemp652;
nctempchar1* nctemp654=LibeStradd(nctemp647,nctemp650);
cmd=nctemp654;
}
int nctemp655 = (openmp ==1);
if(nctemp655)
{
nctempchar1* nctemp664= cmd;
struct nctempchar1 *nctemp669;
static struct nctempchar1 nctemp670 = {{ 11}, (char*)" -fopenmp \0"};
nctemp669=&nctemp670;
nctempchar1* nctemp667= nctemp669;
nctempchar1* nctemp671=LibeStradd(nctemp664,nctemp667);
cmd=nctemp671;
}
nctempchar1* nctemp677= cmd;
nctempchar1* nctemp680= file;
nctempchar1* nctemp683=LibeStradd(nctemp677,nctemp680);
cmd=nctemp683;
tmp = cmd;
nctempchar1* nctemp689= tmp;
struct nctempchar1 *nctemp694;
static struct nctempchar1 nctemp695 = {{ 3}, (char*)"\n\0"};
nctemp694=&nctemp695;
nctempchar1* nctemp692= nctemp694;
nctempchar1* nctemp696=LibeStradd(nctemp689,nctemp692);
cmd=nctemp696;
RunFree(tmp->a);
RunFree(tmp);
int nctemp700 = (show ==1);
if(nctemp700)
{
int nctemp705= 4;
nctempchar1* nctemp707= cmd;
int nctemp710=LibePuts(nctemp705,nctemp707);
int nctemp712= 4;
int nctemp714=LibeFlush(nctemp712);
}
nctempchar1* nctemp716= cmd;
int nctemp719=LibeSystem(nctemp716);
struct nctempchar1 *nctemp727;
static struct nctempchar1 nctemp728 = {{ 4}, (char*)"rm \0"};
nctemp727=&nctemp728;
nctempchar1* nctemp725= nctemp727;
nctempchar1* nctemp729= file;
nctempchar1* nctemp732=LibeStradd(nctemp725,nctemp729);
cmd=nctemp732;
tmp = cmd;
nctempchar1* nctemp738= cmd;
struct nctempchar1 *nctemp743;
static struct nctempchar1 nctemp744 = {{ 3}, (char*)"\n\0"};
nctemp743=&nctemp744;
nctempchar1* nctemp741= nctemp743;
nctempchar1* nctemp745=LibeStradd(nctemp738,nctemp741);
cmd=nctemp745;
RunFree(tmp->a);
RunFree(tmp);
int nctemp749 = (show ==1);
if(nctemp749)
{
int nctemp754= 4;
nctempchar1* nctemp756= cmd;
int nctemp759=LibePuts(nctemp754,nctemp756);
int nctemp761= 4;
int nctemp763=LibeFlush(nctemp761);
}
nctempchar1* nctemp765= cmd;
int nctemp768=LibeSystem(nctemp765);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp777=file->d[0];l =nctemp777;
struct nctempchar1 *nctemp786;
static struct nctempchar1 nctemp787 = {{ 57}, (char*)"nvcc -arch=native -use_fast_math --compiler-options -O2 \0"};
nctemp786=&nctemp787;
cmd=nctemp786;
nctempchar1* nctemp793= cmd;
struct nctempchar1 *nctemp798;
static struct nctempchar1 nctemp799 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp798=&nctemp799;
nctempchar1* nctemp796= nctemp798;
nctempchar1* nctemp800=LibeStradd(nctemp793,nctemp796);
cmd=nctemp800;
int nctemp801 = (debug ==1);
if(nctemp801)
{
nctempchar1* nctemp810= cmd;
struct nctempchar1 *nctemp815;
static struct nctempchar1 nctemp816 = {{ 5}, (char*)" -g \0"};
nctemp815=&nctemp816;
nctempchar1* nctemp813= nctemp815;
nctempchar1* nctemp817=LibeStradd(nctemp810,nctemp813);
cmd=nctemp817;
}
int nctemp818 = (optimize ==1);
if(nctemp818)
{
nctempchar1* nctemp827= cmd;
struct nctempchar1 *nctemp832;
static struct nctempchar1 nctemp833 = {{ 6}, (char*)" -O3 \0"};
nctemp832=&nctemp833;
nctempchar1* nctemp830= nctemp832;
nctempchar1* nctemp834=LibeStradd(nctemp827,nctemp830);
cmd=nctemp834;
}
else{
nctempchar1* nctemp840= cmd;
struct nctempchar1 *nctemp845;
static struct nctempchar1 nctemp846 = {{ 6}, (char*)" -O2 \0"};
nctemp845=&nctemp846;
nctempchar1* nctemp843= nctemp845;
nctempchar1* nctemp847=LibeStradd(nctemp840,nctemp843);
cmd=nctemp847;
}
int nctemp848 = (openmp ==1);
if(nctemp848)
{
nctempchar1* nctemp857= cmd;
struct nctempchar1 *nctemp862;
static struct nctempchar1 nctemp863 = {{ 11}, (char*)" -fopenmp \0"};
nctemp862=&nctemp863;
nctempchar1* nctemp860= nctemp862;
nctempchar1* nctemp864=LibeStradd(nctemp857,nctemp860);
cmd=nctemp864;
}
nctempchar1* nctemp870= cmd;
nctempchar1* nctemp873= file;
nctempchar1* nctemp876=LibeStradd(nctemp870,nctemp873);
cmd=nctemp876;
tmp = cmd;
nctempchar1* nctemp882= cmd;
struct nctempchar1 *nctemp887;
static struct nctempchar1 nctemp888 = {{ 3}, (char*)"\n\0"};
nctemp887=&nctemp888;
nctempchar1* nctemp885= nctemp887;
nctempchar1* nctemp889=LibeStradd(nctemp882,nctemp885);
cmd=nctemp889;
RunFree(tmp->a);
RunFree(tmp);
int nctemp893 = (show ==1);
if(nctemp893)
{
int nctemp898= 4;
nctempchar1* nctemp900= cmd;
int nctemp903=LibePuts(nctemp898,nctemp900);
int nctemp905= 4;
int nctemp907=LibeFlush(nctemp905);
}
nctempchar1* nctemp909= cmd;
int nctemp912=LibeSystem(nctemp909);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 4}, (char*)"rm \0"};
nctemp931=&nctemp932;
int nctemp929=nctemp931->d[0];int nctemp935 = nctemp929 + l;
int nctemp937 = nctemp935 + 2;
int nctemp922=nctemp937;
nctempchar1 *nctemp921;
nctemp921=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp946;
static struct nctempchar1 nctemp947 = {{ 4}, (char*)"rm \0"};
nctemp946=&nctemp947;
int nctemp944=nctemp946->d[0];int nctemp950 = nctemp944 + l;
int nctemp952 = nctemp950 + 2;
nctemp921->d[0]=nctemp952;
nctemp921->a=(char *)RunMalloc(sizeof(char)*nctemp922);
cmd=nctemp921;
struct nctempchar1 *nctemp960;
static struct nctempchar1 nctemp961 = {{ 4}, (char*)"rm \0"};
nctemp960=&nctemp961;
nctempchar1* nctemp958= nctemp960;
nctempchar1* nctemp962= file;
nctempchar1* nctemp965=LibeStradd(nctemp958,nctemp962);
cmd=nctemp965;
tmp = cmd;
nctempchar1* nctemp971= cmd;
struct nctempchar1 *nctemp976;
static struct nctempchar1 nctemp977 = {{ 3}, (char*)"\n\0"};
nctemp976=&nctemp977;
nctempchar1* nctemp974= nctemp976;
nctempchar1* nctemp978=LibeStradd(nctemp971,nctemp974);
cmd=nctemp978;
int nctemp979 = (show ==1);
if(nctemp979)
{
int nctemp984= 4;
nctempchar1* nctemp986= cmd;
int nctemp989=LibePuts(nctemp984,nctemp986);
int nctemp991= 4;
int nctemp993=LibeFlush(nctemp991);
}
nctempchar1* nctemp995= cmd;
int nctemp998=LibeSystem(nctemp995);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp1007=file->d[0];l =nctemp1007;
struct nctempchar1 *nctemp1016;
static struct nctempchar1 nctemp1017 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1016=&nctemp1017;
tmp=nctemp1016;
int nctemp1024=160;
nctempchar1 *nctemp1023;
nctemp1023=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1023->d[0]=160;
nctemp1023->a=(char *)RunMalloc(sizeof(char)*nctemp1024);
cmd=nctemp1023;
nctempchar1* nctemp1028= tmp;
nctempchar1* nctemp1031= cmd;
int nctemp1034=LibeStrcpy(nctemp1028,nctemp1031);
int nctemp1035 = (debug ==1);
if(nctemp1035)
{
struct nctempchar1 *nctemp1042;
static struct nctempchar1 nctemp1043 = {{ 5}, (char*)" -g \0"};
nctemp1042=&nctemp1043;
nctempchar1* nctemp1040= nctemp1042;
nctempchar1* nctemp1044= cmd;
int nctemp1047=LibeStrcat(nctemp1040,nctemp1044);
}
int nctemp1048 = (optimize ==1);
if(nctemp1048)
{
struct nctempchar1 *nctemp1055;
static struct nctempchar1 nctemp1056 = {{ 6}, (char*)" -O3 \0"};
nctemp1055=&nctemp1056;
nctempchar1* nctemp1053= nctemp1055;
nctempchar1* nctemp1057= cmd;
int nctemp1060=LibeStrcat(nctemp1053,nctemp1057);
}
int nctemp1061 = (openmp ==1);
if(nctemp1061)
{
struct nctempchar1 *nctemp1068;
static struct nctempchar1 nctemp1069 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1068=&nctemp1069;
nctempchar1* nctemp1066= nctemp1068;
nctempchar1* nctemp1070= cmd;
int nctemp1073=LibeStrcat(nctemp1066,nctemp1070);
}
nctempchar1* nctemp1075= file;
nctempchar1* nctemp1078= cmd;
int nctemp1081=LibeStrcat(nctemp1075,nctemp1078);
struct nctempchar1 *nctemp1085;
static struct nctempchar1 nctemp1086 = {{ 3}, (char*)"\n\0"};
nctemp1085=&nctemp1086;
nctempchar1* nctemp1083= nctemp1085;
nctempchar1* nctemp1087= cmd;
int nctemp1090=LibeStrcat(nctemp1083,nctemp1087);
int nctemp1091 = (show ==1);
if(nctemp1091)
{
int nctemp1096= 4;
nctempchar1* nctemp1098= cmd;
int nctemp1101=LibePuts(nctemp1096,nctemp1098);
int nctemp1103= 4;
int nctemp1105=LibeFlush(nctemp1103);
}
nctempchar1* nctemp1107= cmd;
int nctemp1110=LibeSystem(nctemp1107);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1129;
static struct nctempchar1 nctemp1130 = {{ 4}, (char*)"rm \0"};
nctemp1129=&nctemp1130;
int nctemp1127=nctemp1129->d[0];int nctemp1133 = nctemp1127 + l;
int nctemp1135 = nctemp1133 + 2;
int nctemp1120=nctemp1135;
nctempchar1 *nctemp1119;
nctemp1119=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1144;
static struct nctempchar1 nctemp1145 = {{ 4}, (char*)"rm \0"};
nctemp1144=&nctemp1145;
int nctemp1142=nctemp1144->d[0];int nctemp1148 = nctemp1142 + l;
int nctemp1150 = nctemp1148 + 2;
nctemp1119->d[0]=nctemp1150;
nctemp1119->a=(char *)RunMalloc(sizeof(char)*nctemp1120);
cmd=nctemp1119;
struct nctempchar1 *nctemp1154;
static struct nctempchar1 nctemp1155 = {{ 4}, (char*)"rm \0"};
nctemp1154=&nctemp1155;
nctempchar1* nctemp1152= nctemp1154;
nctempchar1* nctemp1156= cmd;
int nctemp1159=LibeStrcpy(nctemp1152,nctemp1156);
nctempchar1* nctemp1161= file;
nctempchar1* nctemp1164= cmd;
int nctemp1167=LibeStrcat(nctemp1161,nctemp1164);
struct nctempchar1 *nctemp1171;
static struct nctempchar1 nctemp1172 = {{ 3}, (char*)"\n\0"};
nctemp1171=&nctemp1172;
nctempchar1* nctemp1169= nctemp1171;
nctempchar1* nctemp1173= cmd;
int nctemp1176=LibeStrcat(nctemp1169,nctemp1173);
int nctemp1177 = (show ==1);
if(nctemp1177)
{
int nctemp1182= 4;
nctempchar1* nctemp1184= cmd;
int nctemp1187=LibePuts(nctemp1182,nctemp1184);
int nctemp1189= 4;
int nctemp1191=LibeFlush(nctemp1189);
}
nctempchar1* nctemp1193= cmd;
int nctemp1196=LibeSystem(nctemp1193);
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
int nctemp1202=LibeInit();
show = (debug = (optimize = (openmp = 0)));
btree = (atree = (table = (etable = (emit = 0))));
parse = (semantic = 0);
obj = 1;
options = 0;
int nctemp1204=PtreeInit();
int nctemp1206=CodeInit();
int nctemp1208=CodeArraycheckoff();
int nctemp1210=CodeDebugoff();
int nctemp1212= 2;
int nctemp1214=CodeSetarch(nctemp1212);
int nctemp1219=MainArgs->d[0];l =nctemp1219;
int nctemp1223 = (l <= 1);
if(nctemp1223)
{
struct nctempchar1 *nctemp1230;
static struct nctempchar1 nctemp1231 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1230=&nctemp1231;
nctempchar1* nctemp1228= nctemp1230;
int nctemp1232=MainError(nctemp1228);
}
i =1;
int nctemp1241=MainArgs->d[0];int nctemp1237 = (i < nctemp1241);
while(nctemp1237){
{
int nctemp1250=i;
nctempchar1* nctemp1248= MainArgs->a[nctemp1250].arg;
struct nctempchar1 *nctemp1255;
static struct nctempchar1 nctemp1256 = {{ 3}, (char*)"-h\0"};
nctemp1255=&nctemp1256;
nctempchar1* nctemp1253= nctemp1255;
int nctemp1257=LibeStrcmp(nctemp1248,nctemp1253);
int nctemp1245 = (nctemp1257 ==1);
if(nctemp1245)
{
int nctemp1260= 2;
int nctemp1262=MainHelp(nctemp1260);
int nctemp1264=LibeExit();
}
int nctemp1270=i;
nctempchar1* nctemp1268= MainArgs->a[nctemp1270].arg;
struct nctempchar1 *nctemp1275;
static struct nctempchar1 nctemp1276 = {{ 3}, (char*)"-t\0"};
nctemp1275=&nctemp1276;
nctempchar1* nctemp1273= nctemp1275;
int nctemp1277=LibeStrcmp(nctemp1268,nctemp1273);
int nctemp1265 = (nctemp1277 ==1);
if(nctemp1265)
{
btree = 1;
parse = 1;
}
int nctemp1284=i;
nctempchar1* nctemp1282= MainArgs->a[nctemp1284].arg;
struct nctempchar1 *nctemp1289;
static struct nctempchar1 nctemp1290 = {{ 3}, (char*)"-a\0"};
nctemp1289=&nctemp1290;
nctempchar1* nctemp1287= nctemp1289;
int nctemp1291=LibeStrcmp(nctemp1282,nctemp1287);
int nctemp1279 = (nctemp1291 ==1);
if(nctemp1279)
{
atree = 1;
semantic = 1;
parse = 1;
}
int nctemp1298=i;
nctempchar1* nctemp1296= MainArgs->a[nctemp1298].arg;
struct nctempchar1 *nctemp1303;
static struct nctempchar1 nctemp1304 = {{ 3}, (char*)"-s\0"};
nctemp1303=&nctemp1304;
nctempchar1* nctemp1301= nctemp1303;
int nctemp1305=LibeStrcmp(nctemp1296,nctemp1301);
int nctemp1293 = (nctemp1305 ==1);
if(nctemp1293)
{
table = 1;
parse = 1;
semantic = 1;
}
int nctemp1312=i;
nctempchar1* nctemp1310= MainArgs->a[nctemp1312].arg;
struct nctempchar1 *nctemp1317;
static struct nctempchar1 nctemp1318 = {{ 3}, (char*)"-r\0"};
nctemp1317=&nctemp1318;
nctempchar1* nctemp1315= nctemp1317;
int nctemp1319=LibeStrcmp(nctemp1310,nctemp1315);
int nctemp1307 = (nctemp1319 ==1);
if(nctemp1307)
{
etable = 1;
parse = 1;
semantic = 1;
}
int nctemp1326=i;
nctempchar1* nctemp1324= MainArgs->a[nctemp1326].arg;
struct nctempchar1 *nctemp1331;
static struct nctempchar1 nctemp1332 = {{ 3}, (char*)"-e\0"};
nctemp1331=&nctemp1332;
nctempchar1* nctemp1329= nctemp1331;
int nctemp1333=LibeStrcmp(nctemp1324,nctemp1329);
int nctemp1321 = (nctemp1333 ==1);
if(nctemp1321)
{
emit = 1;
parse = 1;
semantic = 1;
}
int nctemp1340=i;
nctempchar1* nctemp1338= MainArgs->a[nctemp1340].arg;
struct nctempchar1 *nctemp1345;
static struct nctempchar1 nctemp1346 = {{ 3}, (char*)"-p\0"};
nctemp1345=&nctemp1346;
nctempchar1* nctemp1343= nctemp1345;
int nctemp1347=LibeStrcmp(nctemp1338,nctemp1343);
int nctemp1335 = (nctemp1347 ==1);
if(nctemp1335)
{
parse = 1;
}
int nctemp1354=i;
nctempchar1* nctemp1352= MainArgs->a[nctemp1354].arg;
struct nctempchar1 *nctemp1359;
static struct nctempchar1 nctemp1360 = {{ 3}, (char*)"-q\0"};
nctemp1359=&nctemp1360;
nctempchar1* nctemp1357= nctemp1359;
int nctemp1361=LibeStrcmp(nctemp1352,nctemp1357);
int nctemp1349 = (nctemp1361 ==1);
if(nctemp1349)
{
semantic = 1;
parse = 1;
}
int nctemp1368=i;
nctempchar1* nctemp1366= MainArgs->a[nctemp1368].arg;
struct nctempchar1 *nctemp1373;
static struct nctempchar1 nctemp1374 = {{ 3}, (char*)"-C\0"};
nctemp1373=&nctemp1374;
nctempchar1* nctemp1371= nctemp1373;
int nctemp1375=LibeStrcmp(nctemp1366,nctemp1371);
int nctemp1363 = (nctemp1375 ==1);
if(nctemp1363)
{
int nctemp1378=CodeArraycheckon();
}
int nctemp1384=i;
nctempchar1* nctemp1382= MainArgs->a[nctemp1384].arg;
struct nctempchar1 *nctemp1389;
static struct nctempchar1 nctemp1390 = {{ 3}, (char*)"-i\0"};
nctemp1389=&nctemp1390;
nctempchar1* nctemp1387= nctemp1389;
int nctemp1391=LibeStrcmp(nctemp1382,nctemp1387);
int nctemp1379 = (nctemp1391 ==1);
if(nctemp1379)
{
int nctemp1394=CodeBreakon();
}
int nctemp1400=i;
nctempchar1* nctemp1398= MainArgs->a[nctemp1400].arg;
struct nctempchar1 *nctemp1405;
static struct nctempchar1 nctemp1406 = {{ 3}, (char*)"-g\0"};
nctemp1405=&nctemp1406;
nctempchar1* nctemp1403= nctemp1405;
int nctemp1407=LibeStrcmp(nctemp1398,nctemp1403);
int nctemp1395 = (nctemp1407 ==1);
if(nctemp1395)
{
debug = 1;
int nctemp1410=CodeDebugon();
}
int nctemp1416=i;
nctempchar1* nctemp1414= MainArgs->a[nctemp1416].arg;
struct nctempchar1 *nctemp1421;
static struct nctempchar1 nctemp1422 = {{ 3}, (char*)"-d\0"};
nctemp1421=&nctemp1422;
nctempchar1* nctemp1419= nctemp1421;
int nctemp1423=LibeStrcmp(nctemp1414,nctemp1419);
int nctemp1411 = (nctemp1423 ==1);
if(nctemp1411)
{
show = 1;
}
int nctemp1430=i;
nctempchar1* nctemp1428= MainArgs->a[nctemp1430].arg;
struct nctempchar1 *nctemp1435;
static struct nctempchar1 nctemp1436 = {{ 3}, (char*)"-O\0"};
nctemp1435=&nctemp1436;
nctempchar1* nctemp1433= nctemp1435;
int nctemp1437=LibeStrcmp(nctemp1428,nctemp1433);
int nctemp1425 = (nctemp1437 ==1);
if(nctemp1425)
{
optimize = 1;
}
int nctemp1444=i;
nctempchar1* nctemp1442= MainArgs->a[nctemp1444].arg;
struct nctempchar1 *nctemp1449;
static struct nctempchar1 nctemp1450 = {{ 3}, (char*)"-f\0"};
nctemp1449=&nctemp1450;
nctempchar1* nctemp1447= nctemp1449;
int nctemp1451=LibeStrcmp(nctemp1442,nctemp1447);
int nctemp1439 = (nctemp1451 ==1);
if(nctemp1439)
{
openmp = 1;
}
int nctemp1458=i;
nctempchar1* nctemp1456= MainArgs->a[nctemp1458].arg;
struct nctempchar1 *nctemp1463;
static struct nctempchar1 nctemp1464 = {{ 3}, (char*)"-c\0"};
nctemp1463=&nctemp1464;
nctempchar1* nctemp1461= nctemp1463;
int nctemp1465=LibeStrcmp(nctemp1456,nctemp1461);
int nctemp1453 = (nctemp1465 ==1);
if(nctemp1453)
{
obj = 0;
}
int nctemp1473=i;
int nctemp1475=0;
char nctemp1478=(char)('-');
int nctemp1470 = (MainArgs->a[nctemp1473].arg->a[nctemp1475] ==nctemp1478);
int nctemp1467 = (nctemp1470 ==1);
if(nctemp1467)
{
options = (options + 1);
}
}
int nctemp1490 = i + 1;
i =nctemp1490;
int nctemp1495=MainArgs->d[0];int nctemp1491 = (i < nctemp1495);
nctemp1237=nctemp1491;
}
int nctemp1505 = (parse ==0);
int nctemp1510 = (semantic ==0);
int nctemp1502 = (nctemp1505 && nctemp1510);
int nctemp1515 = (emit ==0);
int nctemp1499 = (nctemp1502 && nctemp1515);
if(nctemp1499)
{
parse = (semantic = (emit = 1));
}
int nctemp1526 = options + 1;
int nctemp1528=MainArgs->d[0];int nctemp1519 = (nctemp1526 >= nctemp1528);
if(nctemp1519)
{
struct nctempchar1 *nctemp1535;
static struct nctempchar1 nctemp1536 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1535=&nctemp1536;
nctempchar1* nctemp1533= nctemp1535;
int nctemp1537=MainError(nctemp1533);
}
else{
int nctemp1547=MainArgs->d[0];int nctemp1552 = nctemp1547 - 1;
int nctemp1543=nctemp1552;
infile=MainArgs->a[nctemp1543].arg;
}
int nctemp1554 = (emit ==1);
if(nctemp1554)
{
nctempchar1* nctemp1563= infile;
int nctemp1566= 2;
nctempchar1* nctemp1568=MainFout(nctemp1563,nctemp1566);
outfile=nctemp1568;
nctempchar1* nctemp1573= outfile;
struct nctempchar1 *nctemp1578;
static struct nctempchar1 nctemp1579 = {{ 2}, (char*)"w\0"};
nctemp1578=&nctemp1579;
nctempchar1* nctemp1576= nctemp1578;
int nctemp1580=LibeOpen(nctemp1573,nctemp1576);
fd =nctemp1580;
int nctemp1582= fd;
int nctemp1584=CodeSetfdout(nctemp1582);
}
nctempchar1* nctemp1588= infile;
int nctemp1591=ScanInit(nctemp1588);
int nctemp1585 = (nctemp1591 ==0);
if(nctemp1585)
{
int nctemp1594=LibeExit();
}
int nctemp1596= 1;
int nctemp1598=ScanSetline(nctemp1596);
int nctemp1600=ParseIniparse();
int nctemp1601 = (emit ==1);
if(nctemp1601)
{
int nctemp1606=CodePreamble();
}
struct symbol* nctemp1610=SymMktable();
struct symbol* nctemp1608= nctemp1610;
struct symbol* nctemp1611=SymSetetp(nctemp1608);
int nctemp1612 = (parse ==1);
if(nctemp1612)
{
struct tree* nctemp1620=ParseParse();
p =nctemp1620;
}
int nctemp1621 = (btree ==1);
if(nctemp1621)
{
struct tree* nctemp1626= p;
int nctemp1628= 0;
int nctemp1630=PtreePrtree(nctemp1626,nctemp1628);
}
int nctemp1631 = (p !=0);
int nctemp1635=nctemp1631;
while(nctemp1635)
{{
int nctemp1636 = (semantic ==1);
if(nctemp1636)
{
int nctemp1640 = (p !=0);
if(nctemp1640)
{
struct tree* nctemp1645= p;
struct symbol* nctemp1649=SymGetetp();
struct symbol* nctemp1647= nctemp1649;
int nctemp1650=SemSem(nctemp1645,nctemp1647);
}
int nctemp1651 = (atree ==1);
if(nctemp1651)
{
struct tree* nctemp1656= p;
int nctemp1658= 0;
int nctemp1660=PtreePrtree(nctemp1656,nctemp1658);
}
int nctemp1661 = (table ==1);
if(nctemp1661)
{
struct symbol* nctemp1668=SymGetltp();
int nctemp1665 = (nctemp1668 !=0);
if(nctemp1665)
{
int nctemp1671= 3;
struct symbol* nctemp1675=SymGetltp();
struct symbol* nctemp1673= nctemp1675;
int nctemp1676= 0;
int nctemp1678=SymPrsym(nctemp1671,nctemp1673,nctemp1676);
}
}
}
int nctemp1679 = (emit ==1);
if(nctemp1679)
{
int nctemp1683 = (p !=0);
if(nctemp1683)
{
struct tree* nctemp1688= p;
struct symbol* nctemp1692=SymGetetp();
struct symbol* nctemp1690= nctemp1692;
int nctemp1693=CodeCode(nctemp1688,nctemp1690);
}
}
struct tree* nctemp1695= p;
int nctemp1697=PtreeRmtree(nctemp1695);
struct symbol* nctemp1701=SymGetltp();
struct symbol* nctemp1699= nctemp1701;
int nctemp1702=SymRmtable(nctemp1699);
int nctemp1703 = (parse ==1);
if(nctemp1703)
{
struct tree* nctemp1711=ParseParse();
p =nctemp1711;
int nctemp1712 = (btree ==1);
if(nctemp1712)
{
struct tree* nctemp1717= p;
int nctemp1719= 0;
int nctemp1721=PtreePrtree(nctemp1717,nctemp1719);
}
}
}
int nctemp1722 = (p !=0);
nctemp1635=nctemp1722;}int nctemp1729=ParseGetlookahead();
int nctemp1726 = (nctemp1729 !=19);
if(nctemp1726)
{
struct nctempchar1 *nctemp1734;
static struct nctempchar1 nctemp1735 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1734=&nctemp1735;
nctempchar1* nctemp1732= nctemp1734;
int nctemp1736=MainError(nctemp1732);
}
int nctemp1737 = (etable ==1);
if(nctemp1737)
{
int nctemp1742= 4;
int nctemp1744=LibeFlush(nctemp1742);
struct symbol* nctemp1748=SymGetetp();
int nctemp1745 = (nctemp1748 !=0);
if(nctemp1745)
{
int nctemp1751= 3;
struct symbol* nctemp1755=SymGetetp();
struct symbol* nctemp1753= nctemp1755;
int nctemp1756= 0;
int nctemp1758=SymPrsym(nctemp1751,nctemp1753,nctemp1756);
}
}
int nctemp1759 = (emit ==1);
if(nctemp1759)
{
int nctemp1764=CodePostamble();
}
int nctemp1768 = (emit ==1);
int nctemp1773 = (obj ==1);
int nctemp1765 = (nctemp1768 && nctemp1773);
if(nctemp1765)
{
int nctemp1777 = (2 ==1);
if(nctemp1777)
{
nctempchar1* nctemp1782= outfile;
int nctemp1785= debug;
int nctemp1787= optimize;
int nctemp1789= openmp;
int nctemp1791= show;
int nctemp1793=MainCcompcpu(nctemp1782,nctemp1785,nctemp1787,nctemp1789,nctemp1791);
}
else{
int nctemp1794 = (2 ==2);
if(nctemp1794)
{
nctempchar1* nctemp1799= outfile;
int nctemp1802= debug;
int nctemp1804= optimize;
int nctemp1806= openmp;
int nctemp1808= show;
int nctemp1810=MainCcompcuda(nctemp1799,nctemp1802,nctemp1804,nctemp1806,nctemp1808);
}
else{
int nctemp1811 = (2 ==3);
if(nctemp1811)
{
nctempchar1* nctemp1816= outfile;
int nctemp1819= debug;
int nctemp1821= optimize;
int nctemp1823= openmp;
int nctemp1825= show;
int nctemp1827=MainCcomphip(nctemp1816,nctemp1819,nctemp1821,nctemp1823,nctemp1825);
}
else{
struct nctempchar1 *nctemp1831;
static struct nctempchar1 nctemp1832 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1831=&nctemp1832;
nctempchar1* nctemp1829= nctemp1831;
int nctemp1833=MainError(nctemp1829);
}
}
}
}
int nctemp1834 = (emit ==1);
if(nctemp1834)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1842= fd;
int nctemp1844=LibeClose(nctemp1842);
}
nctempchar1* nctemp1851= infile;
nctempchar1* nctemp1854=MainFmod(nctemp1851);
nctempchar1* nctemp1849= nctemp1854;
struct nctempchar1 *nctemp1857;
static struct nctempchar1 nctemp1858 = {{ 2}, (char*)"w\0"};
nctemp1857=&nctemp1858;
nctempchar1* nctemp1855= nctemp1857;
int nctemp1859=LibeOpen(nctemp1849,nctemp1855);
fd =nctemp1859;
int nctemp1861= fd;
struct symbol* nctemp1865=SymGetetp();
struct symbol* nctemp1863= nctemp1865;
int nctemp1866= 0;
int nctemp1868=SymExport(nctemp1861,nctemp1863,nctemp1866);
int nctemp1870= 3;
int nctemp1872=LibeFlush(nctemp1870);
return 1;
}
}
