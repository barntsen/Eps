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
int CodeSarray (struct tree* p);
int CodeIdstruct (struct tree* p);
int CodeSident (struct tree* p);
int CodeSfcall (struct tree* p);
int CodeScast (struct tree* p);
int CodeSprimexpr (struct tree* p);
int CodeSunexpr (struct tree* p);
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
btree =1;
parse =1;
}
int nctemp1292=i;
nctempchar1* nctemp1290= MainArgs->a[nctemp1292].arg;
struct nctempchar1 *nctemp1297;
static struct nctempchar1 nctemp1298 = {{ 3}, (char*)"-a\0"};
nctemp1297=&nctemp1298;
nctempchar1* nctemp1295= nctemp1297;
int nctemp1299=LibeStrcmp(nctemp1290,nctemp1295);
int nctemp1287 = (nctemp1299 ==1);
if(nctemp1287)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1318=i;
nctempchar1* nctemp1316= MainArgs->a[nctemp1318].arg;
struct nctempchar1 *nctemp1323;
static struct nctempchar1 nctemp1324 = {{ 3}, (char*)"-s\0"};
nctemp1323=&nctemp1324;
nctempchar1* nctemp1321= nctemp1323;
int nctemp1325=LibeStrcmp(nctemp1316,nctemp1321);
int nctemp1313 = (nctemp1325 ==1);
if(nctemp1313)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1344=i;
nctempchar1* nctemp1342= MainArgs->a[nctemp1344].arg;
struct nctempchar1 *nctemp1349;
static struct nctempchar1 nctemp1350 = {{ 3}, (char*)"-r\0"};
nctemp1349=&nctemp1350;
nctempchar1* nctemp1347= nctemp1349;
int nctemp1351=LibeStrcmp(nctemp1342,nctemp1347);
int nctemp1339 = (nctemp1351 ==1);
if(nctemp1339)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1370=i;
nctempchar1* nctemp1368= MainArgs->a[nctemp1370].arg;
struct nctempchar1 *nctemp1375;
static struct nctempchar1 nctemp1376 = {{ 3}, (char*)"-e\0"};
nctemp1375=&nctemp1376;
nctempchar1* nctemp1373= nctemp1375;
int nctemp1377=LibeStrcmp(nctemp1368,nctemp1373);
int nctemp1365 = (nctemp1377 ==1);
if(nctemp1365)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1396=i;
nctempchar1* nctemp1394= MainArgs->a[nctemp1396].arg;
struct nctempchar1 *nctemp1401;
static struct nctempchar1 nctemp1402 = {{ 3}, (char*)"-p\0"};
nctemp1401=&nctemp1402;
nctempchar1* nctemp1399= nctemp1401;
int nctemp1403=LibeStrcmp(nctemp1394,nctemp1399);
int nctemp1391 = (nctemp1403 ==1);
if(nctemp1391)
{
parse =1;
}
int nctemp1414=i;
nctempchar1* nctemp1412= MainArgs->a[nctemp1414].arg;
struct nctempchar1 *nctemp1419;
static struct nctempchar1 nctemp1420 = {{ 3}, (char*)"-q\0"};
nctemp1419=&nctemp1420;
nctempchar1* nctemp1417= nctemp1419;
int nctemp1421=LibeStrcmp(nctemp1412,nctemp1417);
int nctemp1409 = (nctemp1421 ==1);
if(nctemp1409)
{
semantic =1;
parse =1;
}
int nctemp1436=i;
nctempchar1* nctemp1434= MainArgs->a[nctemp1436].arg;
struct nctempchar1 *nctemp1441;
static struct nctempchar1 nctemp1442 = {{ 3}, (char*)"-C\0"};
nctemp1441=&nctemp1442;
nctempchar1* nctemp1439= nctemp1441;
int nctemp1443=LibeStrcmp(nctemp1434,nctemp1439);
int nctemp1431 = (nctemp1443 ==1);
if(nctemp1431)
{
int nctemp1446=CodeArraycheckon();
}
int nctemp1452=i;
nctempchar1* nctemp1450= MainArgs->a[nctemp1452].arg;
struct nctempchar1 *nctemp1457;
static struct nctempchar1 nctemp1458 = {{ 3}, (char*)"-i\0"};
nctemp1457=&nctemp1458;
nctempchar1* nctemp1455= nctemp1457;
int nctemp1459=LibeStrcmp(nctemp1450,nctemp1455);
int nctemp1447 = (nctemp1459 ==1);
if(nctemp1447)
{
int nctemp1462=CodeBreakon();
}
int nctemp1468=i;
nctempchar1* nctemp1466= MainArgs->a[nctemp1468].arg;
struct nctempchar1 *nctemp1473;
static struct nctempchar1 nctemp1474 = {{ 3}, (char*)"-g\0"};
nctemp1473=&nctemp1474;
nctempchar1* nctemp1471= nctemp1473;
int nctemp1475=LibeStrcmp(nctemp1466,nctemp1471);
int nctemp1463 = (nctemp1475 ==1);
if(nctemp1463)
{
debug =1;
int nctemp1482=CodeDebugon();
}
int nctemp1488=i;
nctempchar1* nctemp1486= MainArgs->a[nctemp1488].arg;
struct nctempchar1 *nctemp1493;
static struct nctempchar1 nctemp1494 = {{ 3}, (char*)"-d\0"};
nctemp1493=&nctemp1494;
nctempchar1* nctemp1491= nctemp1493;
int nctemp1495=LibeStrcmp(nctemp1486,nctemp1491);
int nctemp1483 = (nctemp1495 ==1);
if(nctemp1483)
{
show =1;
}
int nctemp1506=i;
nctempchar1* nctemp1504= MainArgs->a[nctemp1506].arg;
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 3}, (char*)"-O\0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
int nctemp1513=LibeStrcmp(nctemp1504,nctemp1509);
int nctemp1501 = (nctemp1513 ==1);
if(nctemp1501)
{
optimize =1;
}
int nctemp1524=i;
nctempchar1* nctemp1522= MainArgs->a[nctemp1524].arg;
struct nctempchar1 *nctemp1529;
static struct nctempchar1 nctemp1530 = {{ 3}, (char*)"-f\0"};
nctemp1529=&nctemp1530;
nctempchar1* nctemp1527= nctemp1529;
int nctemp1531=LibeStrcmp(nctemp1522,nctemp1527);
int nctemp1519 = (nctemp1531 ==1);
if(nctemp1519)
{
openmp =1;
}
int nctemp1542=i;
nctempchar1* nctemp1540= MainArgs->a[nctemp1542].arg;
struct nctempchar1 *nctemp1547;
static struct nctempchar1 nctemp1548 = {{ 3}, (char*)"-c\0"};
nctemp1547=&nctemp1548;
nctempchar1* nctemp1545= nctemp1547;
int nctemp1549=LibeStrcmp(nctemp1540,nctemp1545);
int nctemp1537 = (nctemp1549 ==1);
if(nctemp1537)
{
obj =0;
}
int nctemp1561=i;
int nctemp1563=0;
char nctemp1566=(char)('-');
int nctemp1558 = (MainArgs->a[nctemp1561].arg->a[nctemp1563] ==nctemp1566);
int nctemp1555 = (nctemp1558 ==1);
if(nctemp1555)
{
int nctemp1578 = options + 1;
options =nctemp1578;
}
}
int nctemp1587 = i + 1;
i =nctemp1587;
int nctemp1592=MainArgs->d[0];int nctemp1588 = (i < nctemp1592);
nctemp1237=nctemp1588;
}
int nctemp1602 = (parse ==0);
int nctemp1607 = (semantic ==0);
int nctemp1599 = (nctemp1602 && nctemp1607);
int nctemp1612 = (emit ==0);
int nctemp1596 = (nctemp1599 && nctemp1612);
if(nctemp1596)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1635 = options + 1;
int nctemp1637=MainArgs->d[0];int nctemp1628 = (nctemp1635 >= nctemp1637);
if(nctemp1628)
{
struct nctempchar1 *nctemp1644;
static struct nctempchar1 nctemp1645 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1644=&nctemp1645;
nctempchar1* nctemp1642= nctemp1644;
int nctemp1646=MainError(nctemp1642);
}
else{
int nctemp1656=MainArgs->d[0];int nctemp1661 = nctemp1656 - 1;
int nctemp1652=nctemp1661;
infile=MainArgs->a[nctemp1652].arg;
}
int nctemp1663 = (emit ==1);
if(nctemp1663)
{
nctempchar1* nctemp1672= infile;
int nctemp1675= 2;
nctempchar1* nctemp1677=MainFout(nctemp1672,nctemp1675);
outfile=nctemp1677;
nctempchar1* nctemp1682= outfile;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 2}, (char*)"w\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=LibeOpen(nctemp1682,nctemp1685);
fd =nctemp1689;
int nctemp1691= fd;
int nctemp1693=CodeSetfdout(nctemp1691);
}
nctempchar1* nctemp1697= infile;
int nctemp1700=ScanInit(nctemp1697);
int nctemp1694 = (nctemp1700 ==0);
if(nctemp1694)
{
int nctemp1703=LibeExit();
}
int nctemp1705= 1;
int nctemp1707=ScanSetline(nctemp1705);
int nctemp1709=ParseIniparse();
int nctemp1710 = (emit ==1);
if(nctemp1710)
{
int nctemp1715=CodePreamble();
}
struct symbol* nctemp1719=SymMktable();
struct symbol* nctemp1717= nctemp1719;
struct symbol* nctemp1720=SymSetetp(nctemp1717);
int nctemp1721 = (parse ==1);
if(nctemp1721)
{
struct tree* nctemp1729=ParseParse();
p =nctemp1729;
}
int nctemp1730 = (btree ==1);
if(nctemp1730)
{
struct tree* nctemp1735= p;
int nctemp1737= 0;
int nctemp1739=PtreePrtree(nctemp1735,nctemp1737);
}
int nctemp1740 = (p !=0);
int nctemp1744=nctemp1740;
while(nctemp1744)
{{
int nctemp1745 = (semantic ==1);
if(nctemp1745)
{
int nctemp1749 = (p !=0);
if(nctemp1749)
{
struct tree* nctemp1754= p;
struct symbol* nctemp1758=SymGetetp();
struct symbol* nctemp1756= nctemp1758;
int nctemp1759=SemSem(nctemp1754,nctemp1756);
}
int nctemp1760 = (atree ==1);
if(nctemp1760)
{
struct tree* nctemp1765= p;
int nctemp1767= 0;
int nctemp1769=PtreePrtree(nctemp1765,nctemp1767);
}
int nctemp1770 = (table ==1);
if(nctemp1770)
{
struct symbol* nctemp1777=SymGetltp();
int nctemp1774 = (nctemp1777 !=0);
if(nctemp1774)
{
int nctemp1780= 3;
struct symbol* nctemp1784=SymGetltp();
struct symbol* nctemp1782= nctemp1784;
int nctemp1785= 0;
int nctemp1787=SymPrsym(nctemp1780,nctemp1782,nctemp1785);
}
}
}
int nctemp1788 = (emit ==1);
if(nctemp1788)
{
int nctemp1792 = (p !=0);
if(nctemp1792)
{
struct tree* nctemp1797= p;
struct symbol* nctemp1801=SymGetetp();
struct symbol* nctemp1799= nctemp1801;
int nctemp1802=CodeCode(nctemp1797,nctemp1799);
}
}
struct tree* nctemp1804= p;
int nctemp1806=PtreeRmtree(nctemp1804);
struct symbol* nctemp1810=SymGetltp();
struct symbol* nctemp1808= nctemp1810;
int nctemp1811=SymRmtable(nctemp1808);
int nctemp1812 = (parse ==1);
if(nctemp1812)
{
struct tree* nctemp1820=ParseParse();
p =nctemp1820;
int nctemp1821 = (btree ==1);
if(nctemp1821)
{
struct tree* nctemp1826= p;
int nctemp1828= 0;
int nctemp1830=PtreePrtree(nctemp1826,nctemp1828);
}
}
}
int nctemp1831 = (p !=0);
nctemp1744=nctemp1831;}int nctemp1838=ParseGetlookahead();
int nctemp1835 = (nctemp1838 !=19);
if(nctemp1835)
{
struct nctempchar1 *nctemp1843;
static struct nctempchar1 nctemp1844 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1843=&nctemp1844;
nctempchar1* nctemp1841= nctemp1843;
int nctemp1845=MainError(nctemp1841);
}
int nctemp1846 = (etable ==1);
if(nctemp1846)
{
int nctemp1851= 4;
int nctemp1853=LibeFlush(nctemp1851);
struct symbol* nctemp1857=SymGetetp();
int nctemp1854 = (nctemp1857 !=0);
if(nctemp1854)
{
int nctemp1860= 3;
struct symbol* nctemp1864=SymGetetp();
struct symbol* nctemp1862= nctemp1864;
int nctemp1865= 0;
int nctemp1867=SymPrsym(nctemp1860,nctemp1862,nctemp1865);
}
}
int nctemp1868 = (emit ==1);
if(nctemp1868)
{
int nctemp1873=CodePostamble();
}
int nctemp1877 = (emit ==1);
int nctemp1882 = (obj ==1);
int nctemp1874 = (nctemp1877 && nctemp1882);
if(nctemp1874)
{
int nctemp1886 = (2 ==1);
if(nctemp1886)
{
nctempchar1* nctemp1891= outfile;
int nctemp1894= debug;
int nctemp1896= optimize;
int nctemp1898= openmp;
int nctemp1900= show;
int nctemp1902=MainCcompcpu(nctemp1891,nctemp1894,nctemp1896,nctemp1898,nctemp1900);
}
else{
int nctemp1903 = (2 ==2);
if(nctemp1903)
{
nctempchar1* nctemp1908= outfile;
int nctemp1911= debug;
int nctemp1913= optimize;
int nctemp1915= openmp;
int nctemp1917= show;
int nctemp1919=MainCcompcuda(nctemp1908,nctemp1911,nctemp1913,nctemp1915,nctemp1917);
}
else{
int nctemp1920 = (2 ==3);
if(nctemp1920)
{
nctempchar1* nctemp1925= outfile;
int nctemp1928= debug;
int nctemp1930= optimize;
int nctemp1932= openmp;
int nctemp1934= show;
int nctemp1936=MainCcomphip(nctemp1925,nctemp1928,nctemp1930,nctemp1932,nctemp1934);
}
else{
struct nctempchar1 *nctemp1940;
static struct nctempchar1 nctemp1941 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1940=&nctemp1941;
nctempchar1* nctemp1938= nctemp1940;
int nctemp1942=MainError(nctemp1938);
}
}
}
}
int nctemp1943 = (emit ==1);
if(nctemp1943)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1951= fd;
int nctemp1953=LibeClose(nctemp1951);
}
nctempchar1* nctemp1960= infile;
nctempchar1* nctemp1963=MainFmod(nctemp1960);
nctempchar1* nctemp1958= nctemp1963;
struct nctempchar1 *nctemp1966;
static struct nctempchar1 nctemp1967 = {{ 2}, (char*)"w\0"};
nctemp1966=&nctemp1967;
nctempchar1* nctemp1964= nctemp1966;
int nctemp1968=LibeOpen(nctemp1958,nctemp1964);
fd =nctemp1968;
int nctemp1970= fd;
struct symbol* nctemp1974=SymGetetp();
struct symbol* nctemp1972= nctemp1974;
int nctemp1975= 0;
int nctemp1977=SymExport(nctemp1970,nctemp1972,nctemp1975);
int nctemp1979= 3;
int nctemp1981=LibeFlush(nctemp1979);
return 1;
}
}
