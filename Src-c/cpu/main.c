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
static struct nctempchar1 nctemp632 = {{ 6}, (char*)" -O2 \0"};
nctemp631=&nctemp632;
nctempchar1* nctemp629= nctemp631;
nctempchar1* nctemp633=LibeStradd(nctemp626,nctemp629);
cmd=nctemp633;
}
int nctemp634 = (openmp ==1);
if(nctemp634)
{
nctempchar1* nctemp643= cmd;
struct nctempchar1 *nctemp648;
static struct nctempchar1 nctemp649 = {{ 11}, (char*)" -fopenmp \0"};
nctemp648=&nctemp649;
nctempchar1* nctemp646= nctemp648;
nctempchar1* nctemp650=LibeStradd(nctemp643,nctemp646);
cmd=nctemp650;
}
nctempchar1* nctemp656= cmd;
nctempchar1* nctemp659= file;
nctempchar1* nctemp662=LibeStradd(nctemp656,nctemp659);
cmd=nctemp662;
tmp=cmd;
nctempchar1* nctemp674= tmp;
struct nctempchar1 *nctemp679;
static struct nctempchar1 nctemp680 = {{ 3}, (char*)"\n\0"};
nctemp679=&nctemp680;
nctempchar1* nctemp677= nctemp679;
nctempchar1* nctemp681=LibeStradd(nctemp674,nctemp677);
cmd=nctemp681;
RunFree(tmp->a);
RunFree(tmp);
int nctemp685 = (show ==1);
if(nctemp685)
{
int nctemp690= 4;
nctempchar1* nctemp692= cmd;
int nctemp695=LibePuts(nctemp690,nctemp692);
int nctemp697= 4;
int nctemp699=LibeFlush(nctemp697);
}
nctempchar1* nctemp701= cmd;
int nctemp704=LibeSystem(nctemp701);
struct nctempchar1 *nctemp712;
static struct nctempchar1 nctemp713 = {{ 4}, (char*)"rm \0"};
nctemp712=&nctemp713;
nctempchar1* nctemp710= nctemp712;
nctempchar1* nctemp714= file;
nctempchar1* nctemp717=LibeStradd(nctemp710,nctemp714);
cmd=nctemp717;
tmp=cmd;
nctempchar1* nctemp729= cmd;
struct nctempchar1 *nctemp734;
static struct nctempchar1 nctemp735 = {{ 3}, (char*)"\n\0"};
nctemp734=&nctemp735;
nctempchar1* nctemp732= nctemp734;
nctempchar1* nctemp736=LibeStradd(nctemp729,nctemp732);
cmd=nctemp736;
RunFree(tmp->a);
RunFree(tmp);
int nctemp740 = (show ==1);
if(nctemp740)
{
int nctemp745= 4;
nctempchar1* nctemp747= cmd;
int nctemp750=LibePuts(nctemp745,nctemp747);
int nctemp752= 4;
int nctemp754=LibeFlush(nctemp752);
}
nctempchar1* nctemp756= cmd;
int nctemp759=LibeSystem(nctemp756);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp768=file->d[0];l =nctemp768;
struct nctempchar1 *nctemp777;
static struct nctempchar1 nctemp778 = {{ 57}, (char*)"nvcc -arch=native -use_fast_math --compiler-options -O2 \0"};
nctemp777=&nctemp778;
cmd=nctemp777;
nctempchar1* nctemp784= cmd;
struct nctempchar1 *nctemp789;
static struct nctempchar1 nctemp790 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp789=&nctemp790;
nctempchar1* nctemp787= nctemp789;
nctempchar1* nctemp791=LibeStradd(nctemp784,nctemp787);
cmd=nctemp791;
int nctemp792 = (debug ==1);
if(nctemp792)
{
nctempchar1* nctemp801= cmd;
struct nctempchar1 *nctemp806;
static struct nctempchar1 nctemp807 = {{ 5}, (char*)" -g \0"};
nctemp806=&nctemp807;
nctempchar1* nctemp804= nctemp806;
nctempchar1* nctemp808=LibeStradd(nctemp801,nctemp804);
cmd=nctemp808;
}
int nctemp809 = (optimize ==1);
if(nctemp809)
{
nctempchar1* nctemp818= cmd;
struct nctempchar1 *nctemp823;
static struct nctempchar1 nctemp824 = {{ 6}, (char*)" -O2 \0"};
nctemp823=&nctemp824;
nctempchar1* nctemp821= nctemp823;
nctempchar1* nctemp825=LibeStradd(nctemp818,nctemp821);
cmd=nctemp825;
}
int nctemp826 = (openmp ==1);
if(nctemp826)
{
nctempchar1* nctemp835= cmd;
struct nctempchar1 *nctemp840;
static struct nctempchar1 nctemp841 = {{ 11}, (char*)" -fopenmp \0"};
nctemp840=&nctemp841;
nctempchar1* nctemp838= nctemp840;
nctempchar1* nctemp842=LibeStradd(nctemp835,nctemp838);
cmd=nctemp842;
}
nctempchar1* nctemp848= cmd;
nctempchar1* nctemp851= file;
nctempchar1* nctemp854=LibeStradd(nctemp848,nctemp851);
cmd=nctemp854;
tmp=cmd;
nctempchar1* nctemp866= cmd;
struct nctempchar1 *nctemp871;
static struct nctempchar1 nctemp872 = {{ 3}, (char*)"\n\0"};
nctemp871=&nctemp872;
nctempchar1* nctemp869= nctemp871;
nctempchar1* nctemp873=LibeStradd(nctemp866,nctemp869);
cmd=nctemp873;
RunFree(tmp->a);
RunFree(tmp);
int nctemp877 = (show ==1);
if(nctemp877)
{
int nctemp882= 4;
nctempchar1* nctemp884= cmd;
int nctemp887=LibePuts(nctemp882,nctemp884);
int nctemp889= 4;
int nctemp891=LibeFlush(nctemp889);
}
nctempchar1* nctemp893= cmd;
int nctemp896=LibeSystem(nctemp893);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp915;
static struct nctempchar1 nctemp916 = {{ 4}, (char*)"rm \0"};
nctemp915=&nctemp916;
int nctemp913=nctemp915->d[0];int nctemp919 = nctemp913 + l;
int nctemp921 = nctemp919 + 2;
int nctemp906=nctemp921;
nctempchar1 *nctemp905;
nctemp905=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp930;
static struct nctempchar1 nctemp931 = {{ 4}, (char*)"rm \0"};
nctemp930=&nctemp931;
int nctemp928=nctemp930->d[0];int nctemp934 = nctemp928 + l;
int nctemp936 = nctemp934 + 2;
nctemp905->d[0]=nctemp936;
nctemp905->a=(char *)RunMalloc(sizeof(char)*nctemp906);
cmd=nctemp905;
struct nctempchar1 *nctemp944;
static struct nctempchar1 nctemp945 = {{ 4}, (char*)"rm \0"};
nctemp944=&nctemp945;
nctempchar1* nctemp942= nctemp944;
nctempchar1* nctemp946= file;
nctempchar1* nctemp949=LibeStradd(nctemp942,nctemp946);
cmd=nctemp949;
tmp=cmd;
nctempchar1* nctemp961= cmd;
struct nctempchar1 *nctemp966;
static struct nctempchar1 nctemp967 = {{ 3}, (char*)"\n\0"};
nctemp966=&nctemp967;
nctempchar1* nctemp964= nctemp966;
nctempchar1* nctemp968=LibeStradd(nctemp961,nctemp964);
cmd=nctemp968;
int nctemp969 = (show ==1);
if(nctemp969)
{
int nctemp974= 4;
nctempchar1* nctemp976= cmd;
int nctemp979=LibePuts(nctemp974,nctemp976);
int nctemp981= 4;
int nctemp983=LibeFlush(nctemp981);
}
nctempchar1* nctemp985= cmd;
int nctemp988=LibeSystem(nctemp985);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp997=file->d[0];l =nctemp997;
struct nctempchar1 *nctemp1006;
static struct nctempchar1 nctemp1007 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1006=&nctemp1007;
tmp=nctemp1006;
int nctemp1014=160;
nctempchar1 *nctemp1013;
nctemp1013=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1013->d[0]=160;
nctemp1013->a=(char *)RunMalloc(sizeof(char)*nctemp1014);
cmd=nctemp1013;
nctempchar1* nctemp1018= tmp;
nctempchar1* nctemp1021= cmd;
int nctemp1024=LibeStrcpy(nctemp1018,nctemp1021);
int nctemp1025 = (debug ==1);
if(nctemp1025)
{
struct nctempchar1 *nctemp1032;
static struct nctempchar1 nctemp1033 = {{ 5}, (char*)" -g \0"};
nctemp1032=&nctemp1033;
nctempchar1* nctemp1030= nctemp1032;
nctempchar1* nctemp1034= cmd;
int nctemp1037=LibeStrcat(nctemp1030,nctemp1034);
}
int nctemp1038 = (optimize ==1);
if(nctemp1038)
{
struct nctempchar1 *nctemp1045;
static struct nctempchar1 nctemp1046 = {{ 6}, (char*)" -O3 \0"};
nctemp1045=&nctemp1046;
nctempchar1* nctemp1043= nctemp1045;
nctempchar1* nctemp1047= cmd;
int nctemp1050=LibeStrcat(nctemp1043,nctemp1047);
}
int nctemp1051 = (openmp ==1);
if(nctemp1051)
{
struct nctempchar1 *nctemp1058;
static struct nctempchar1 nctemp1059 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1058=&nctemp1059;
nctempchar1* nctemp1056= nctemp1058;
nctempchar1* nctemp1060= cmd;
int nctemp1063=LibeStrcat(nctemp1056,nctemp1060);
}
nctempchar1* nctemp1065= file;
nctempchar1* nctemp1068= cmd;
int nctemp1071=LibeStrcat(nctemp1065,nctemp1068);
struct nctempchar1 *nctemp1075;
static struct nctempchar1 nctemp1076 = {{ 3}, (char*)"\n\0"};
nctemp1075=&nctemp1076;
nctempchar1* nctemp1073= nctemp1075;
nctempchar1* nctemp1077= cmd;
int nctemp1080=LibeStrcat(nctemp1073,nctemp1077);
int nctemp1081 = (show ==1);
if(nctemp1081)
{
int nctemp1086= 4;
nctempchar1* nctemp1088= cmd;
int nctemp1091=LibePuts(nctemp1086,nctemp1088);
int nctemp1093= 4;
int nctemp1095=LibeFlush(nctemp1093);
}
nctempchar1* nctemp1097= cmd;
int nctemp1100=LibeSystem(nctemp1097);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1119;
static struct nctempchar1 nctemp1120 = {{ 4}, (char*)"rm \0"};
nctemp1119=&nctemp1120;
int nctemp1117=nctemp1119->d[0];int nctemp1123 = nctemp1117 + l;
int nctemp1125 = nctemp1123 + 2;
int nctemp1110=nctemp1125;
nctempchar1 *nctemp1109;
nctemp1109=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1134;
static struct nctempchar1 nctemp1135 = {{ 4}, (char*)"rm \0"};
nctemp1134=&nctemp1135;
int nctemp1132=nctemp1134->d[0];int nctemp1138 = nctemp1132 + l;
int nctemp1140 = nctemp1138 + 2;
nctemp1109->d[0]=nctemp1140;
nctemp1109->a=(char *)RunMalloc(sizeof(char)*nctemp1110);
cmd=nctemp1109;
struct nctempchar1 *nctemp1144;
static struct nctempchar1 nctemp1145 = {{ 4}, (char*)"rm \0"};
nctemp1144=&nctemp1145;
nctempchar1* nctemp1142= nctemp1144;
nctempchar1* nctemp1146= cmd;
int nctemp1149=LibeStrcpy(nctemp1142,nctemp1146);
nctempchar1* nctemp1151= file;
nctempchar1* nctemp1154= cmd;
int nctemp1157=LibeStrcat(nctemp1151,nctemp1154);
struct nctempchar1 *nctemp1161;
static struct nctempchar1 nctemp1162 = {{ 3}, (char*)"\n\0"};
nctemp1161=&nctemp1162;
nctempchar1* nctemp1159= nctemp1161;
nctempchar1* nctemp1163= cmd;
int nctemp1166=LibeStrcat(nctemp1159,nctemp1163);
int nctemp1167 = (show ==1);
if(nctemp1167)
{
int nctemp1172= 4;
nctempchar1* nctemp1174= cmd;
int nctemp1177=LibePuts(nctemp1172,nctemp1174);
int nctemp1179= 4;
int nctemp1181=LibeFlush(nctemp1179);
}
nctempchar1* nctemp1183= cmd;
int nctemp1186=LibeSystem(nctemp1183);
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
int nctemp1192=LibeInit();
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
int nctemp1246=PtreeInit();
int nctemp1248=CodeInit();
int nctemp1250=CodeArraycheckoff();
int nctemp1252=CodeDebugoff();
int nctemp1254= 1;
int nctemp1256=CodeSetarch(nctemp1254);
int nctemp1261=MainArgs->d[0];l =nctemp1261;
int nctemp1265 = (l <= 1);
if(nctemp1265)
{
struct nctempchar1 *nctemp1272;
static struct nctempchar1 nctemp1273 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1272=&nctemp1273;
nctempchar1* nctemp1270= nctemp1272;
int nctemp1274=MainError(nctemp1270);
}
i =1;
int nctemp1283=MainArgs->d[0];int nctemp1279 = (i < nctemp1283);
while(nctemp1279){
{
int nctemp1292=i;
nctempchar1* nctemp1290= MainArgs->a[nctemp1292].arg;
struct nctempchar1 *nctemp1297;
static struct nctempchar1 nctemp1298 = {{ 3}, (char*)"-h\0"};
nctemp1297=&nctemp1298;
nctempchar1* nctemp1295= nctemp1297;
int nctemp1299=LibeStrcmp(nctemp1290,nctemp1295);
int nctemp1287 = (nctemp1299 ==1);
if(nctemp1287)
{
int nctemp1302= 1;
int nctemp1304=MainHelp(nctemp1302);
int nctemp1306=LibeExit();
}
int nctemp1312=i;
nctempchar1* nctemp1310= MainArgs->a[nctemp1312].arg;
struct nctempchar1 *nctemp1317;
static struct nctempchar1 nctemp1318 = {{ 3}, (char*)"-t\0"};
nctemp1317=&nctemp1318;
nctempchar1* nctemp1315= nctemp1317;
int nctemp1319=LibeStrcmp(nctemp1310,nctemp1315);
int nctemp1307 = (nctemp1319 ==1);
if(nctemp1307)
{
btree =1;
parse =1;
}
int nctemp1334=i;
nctempchar1* nctemp1332= MainArgs->a[nctemp1334].arg;
struct nctempchar1 *nctemp1339;
static struct nctempchar1 nctemp1340 = {{ 3}, (char*)"-a\0"};
nctemp1339=&nctemp1340;
nctempchar1* nctemp1337= nctemp1339;
int nctemp1341=LibeStrcmp(nctemp1332,nctemp1337);
int nctemp1329 = (nctemp1341 ==1);
if(nctemp1329)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1360=i;
nctempchar1* nctemp1358= MainArgs->a[nctemp1360].arg;
struct nctempchar1 *nctemp1365;
static struct nctempchar1 nctemp1366 = {{ 3}, (char*)"-s\0"};
nctemp1365=&nctemp1366;
nctempchar1* nctemp1363= nctemp1365;
int nctemp1367=LibeStrcmp(nctemp1358,nctemp1363);
int nctemp1355 = (nctemp1367 ==1);
if(nctemp1355)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1386=i;
nctempchar1* nctemp1384= MainArgs->a[nctemp1386].arg;
struct nctempchar1 *nctemp1391;
static struct nctempchar1 nctemp1392 = {{ 3}, (char*)"-r\0"};
nctemp1391=&nctemp1392;
nctempchar1* nctemp1389= nctemp1391;
int nctemp1393=LibeStrcmp(nctemp1384,nctemp1389);
int nctemp1381 = (nctemp1393 ==1);
if(nctemp1381)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1412=i;
nctempchar1* nctemp1410= MainArgs->a[nctemp1412].arg;
struct nctempchar1 *nctemp1417;
static struct nctempchar1 nctemp1418 = {{ 3}, (char*)"-e\0"};
nctemp1417=&nctemp1418;
nctempchar1* nctemp1415= nctemp1417;
int nctemp1419=LibeStrcmp(nctemp1410,nctemp1415);
int nctemp1407 = (nctemp1419 ==1);
if(nctemp1407)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1438=i;
nctempchar1* nctemp1436= MainArgs->a[nctemp1438].arg;
struct nctempchar1 *nctemp1443;
static struct nctempchar1 nctemp1444 = {{ 3}, (char*)"-p\0"};
nctemp1443=&nctemp1444;
nctempchar1* nctemp1441= nctemp1443;
int nctemp1445=LibeStrcmp(nctemp1436,nctemp1441);
int nctemp1433 = (nctemp1445 ==1);
if(nctemp1433)
{
parse =1;
}
int nctemp1456=i;
nctempchar1* nctemp1454= MainArgs->a[nctemp1456].arg;
struct nctempchar1 *nctemp1461;
static struct nctempchar1 nctemp1462 = {{ 3}, (char*)"-q\0"};
nctemp1461=&nctemp1462;
nctempchar1* nctemp1459= nctemp1461;
int nctemp1463=LibeStrcmp(nctemp1454,nctemp1459);
int nctemp1451 = (nctemp1463 ==1);
if(nctemp1451)
{
semantic =1;
parse =1;
}
int nctemp1478=i;
nctempchar1* nctemp1476= MainArgs->a[nctemp1478].arg;
struct nctempchar1 *nctemp1483;
static struct nctempchar1 nctemp1484 = {{ 3}, (char*)"-C\0"};
nctemp1483=&nctemp1484;
nctempchar1* nctemp1481= nctemp1483;
int nctemp1485=LibeStrcmp(nctemp1476,nctemp1481);
int nctemp1473 = (nctemp1485 ==1);
if(nctemp1473)
{
int nctemp1488=CodeArraycheckon();
}
int nctemp1494=i;
nctempchar1* nctemp1492= MainArgs->a[nctemp1494].arg;
struct nctempchar1 *nctemp1499;
static struct nctempchar1 nctemp1500 = {{ 3}, (char*)"-g\0"};
nctemp1499=&nctemp1500;
nctempchar1* nctemp1497= nctemp1499;
int nctemp1501=LibeStrcmp(nctemp1492,nctemp1497);
int nctemp1489 = (nctemp1501 ==1);
if(nctemp1489)
{
debug =1;
int nctemp1508=CodeDebugon();
}
int nctemp1514=i;
nctempchar1* nctemp1512= MainArgs->a[nctemp1514].arg;
struct nctempchar1 *nctemp1519;
static struct nctempchar1 nctemp1520 = {{ 3}, (char*)"-d\0"};
nctemp1519=&nctemp1520;
nctempchar1* nctemp1517= nctemp1519;
int nctemp1521=LibeStrcmp(nctemp1512,nctemp1517);
int nctemp1509 = (nctemp1521 ==1);
if(nctemp1509)
{
show =1;
}
int nctemp1532=i;
nctempchar1* nctemp1530= MainArgs->a[nctemp1532].arg;
struct nctempchar1 *nctemp1537;
static struct nctempchar1 nctemp1538 = {{ 3}, (char*)"-O\0"};
nctemp1537=&nctemp1538;
nctempchar1* nctemp1535= nctemp1537;
int nctemp1539=LibeStrcmp(nctemp1530,nctemp1535);
int nctemp1527 = (nctemp1539 ==1);
if(nctemp1527)
{
optimize =1;
}
int nctemp1550=i;
nctempchar1* nctemp1548= MainArgs->a[nctemp1550].arg;
struct nctempchar1 *nctemp1555;
static struct nctempchar1 nctemp1556 = {{ 3}, (char*)"-f\0"};
nctemp1555=&nctemp1556;
nctempchar1* nctemp1553= nctemp1555;
int nctemp1557=LibeStrcmp(nctemp1548,nctemp1553);
int nctemp1545 = (nctemp1557 ==1);
if(nctemp1545)
{
openmp =1;
}
int nctemp1568=i;
nctempchar1* nctemp1566= MainArgs->a[nctemp1568].arg;
struct nctempchar1 *nctemp1573;
static struct nctempchar1 nctemp1574 = {{ 3}, (char*)"-c\0"};
nctemp1573=&nctemp1574;
nctempchar1* nctemp1571= nctemp1573;
int nctemp1575=LibeStrcmp(nctemp1566,nctemp1571);
int nctemp1563 = (nctemp1575 ==1);
if(nctemp1563)
{
obj =0;
}
int nctemp1587=i;
int nctemp1589=0;
char nctemp1592=(char)('-');
int nctemp1584 = (MainArgs->a[nctemp1587].arg->a[nctemp1589] ==nctemp1592);
int nctemp1581 = (nctemp1584 ==1);
if(nctemp1581)
{
int nctemp1604 = options + 1;
options =nctemp1604;
}
}
int nctemp1613 = i + 1;
i =nctemp1613;
int nctemp1618=MainArgs->d[0];int nctemp1614 = (i < nctemp1618);
nctemp1279=nctemp1614;
}
int nctemp1628 = (parse ==0);
int nctemp1633 = (semantic ==0);
int nctemp1625 = (nctemp1628 && nctemp1633);
int nctemp1638 = (emit ==0);
int nctemp1622 = (nctemp1625 && nctemp1638);
if(nctemp1622)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1661 = options + 1;
int nctemp1663=MainArgs->d[0];int nctemp1654 = (nctemp1661 >= nctemp1663);
if(nctemp1654)
{
struct nctempchar1 *nctemp1670;
static struct nctempchar1 nctemp1671 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1670=&nctemp1671;
nctempchar1* nctemp1668= nctemp1670;
int nctemp1672=MainError(nctemp1668);
}
else{
int nctemp1682=MainArgs->d[0];int nctemp1687 = nctemp1682 - 1;
int nctemp1678=nctemp1687;
infile=MainArgs->a[nctemp1678].arg;
}
int nctemp1689 = (emit ==1);
if(nctemp1689)
{
nctempchar1* nctemp1698= infile;
int nctemp1701= 1;
nctempchar1* nctemp1703=MainFout(nctemp1698,nctemp1701);
outfile=nctemp1703;
nctempchar1* nctemp1708= outfile;
struct nctempchar1 *nctemp1713;
static struct nctempchar1 nctemp1714 = {{ 2}, (char*)"w\0"};
nctemp1713=&nctemp1714;
nctempchar1* nctemp1711= nctemp1713;
int nctemp1715=LibeOpen(nctemp1708,nctemp1711);
fd =nctemp1715;
int nctemp1717= fd;
int nctemp1719=CodeSetfdout(nctemp1717);
}
nctempchar1* nctemp1723= infile;
int nctemp1726=ScanInit(nctemp1723);
int nctemp1720 = (nctemp1726 ==0);
if(nctemp1720)
{
int nctemp1729=LibeExit();
}
int nctemp1731= 1;
int nctemp1733=ScanSetline(nctemp1731);
int nctemp1735=ParseIniparse();
int nctemp1736 = (emit ==1);
if(nctemp1736)
{
int nctemp1741=CodePreamble();
}
struct symbol* nctemp1745=SymMktable();
struct symbol* nctemp1743= nctemp1745;
struct symbol* nctemp1746=SymSetetp(nctemp1743);
int nctemp1747 = (parse ==1);
if(nctemp1747)
{
struct tree* nctemp1755=ParseParse();
p =nctemp1755;
}
int nctemp1756 = (btree ==1);
if(nctemp1756)
{
struct tree* nctemp1761= p;
int nctemp1763= 0;
int nctemp1765=PtreePrtree(nctemp1761,nctemp1763);
}
int nctemp1766 = (p !=0);
int nctemp1770=nctemp1766;
while(nctemp1770)
{{
int nctemp1771 = (semantic ==1);
if(nctemp1771)
{
int nctemp1775 = (p !=0);
if(nctemp1775)
{
struct tree* nctemp1780= p;
struct symbol* nctemp1784=SymGetetp();
struct symbol* nctemp1782= nctemp1784;
int nctemp1785=SemSem(nctemp1780,nctemp1782);
}
int nctemp1786 = (atree ==1);
if(nctemp1786)
{
struct tree* nctemp1791= p;
int nctemp1793= 0;
int nctemp1795=PtreePrtree(nctemp1791,nctemp1793);
}
int nctemp1796 = (table ==1);
if(nctemp1796)
{
struct symbol* nctemp1803=SymGetltp();
int nctemp1800 = (nctemp1803 !=0);
if(nctemp1800)
{
int nctemp1806= 3;
struct symbol* nctemp1810=SymGetltp();
struct symbol* nctemp1808= nctemp1810;
int nctemp1811= 0;
int nctemp1813=SymPrsym(nctemp1806,nctemp1808,nctemp1811);
}
}
}
int nctemp1814 = (emit ==1);
if(nctemp1814)
{
int nctemp1818 = (p !=0);
if(nctemp1818)
{
struct tree* nctemp1823= p;
struct symbol* nctemp1827=SymGetetp();
struct symbol* nctemp1825= nctemp1827;
int nctemp1828=CodeCode(nctemp1823,nctemp1825);
}
}
struct tree* nctemp1830= p;
int nctemp1832=PtreeRmtree(nctemp1830);
struct symbol* nctemp1836=SymGetltp();
struct symbol* nctemp1834= nctemp1836;
int nctemp1837=SymRmtable(nctemp1834);
int nctemp1838 = (parse ==1);
if(nctemp1838)
{
struct tree* nctemp1846=ParseParse();
p =nctemp1846;
int nctemp1847 = (btree ==1);
if(nctemp1847)
{
struct tree* nctemp1852= p;
int nctemp1854= 0;
int nctemp1856=PtreePrtree(nctemp1852,nctemp1854);
}
}
}
int nctemp1857 = (p !=0);
nctemp1770=nctemp1857;}int nctemp1864=ParseGetlookahead();
int nctemp1861 = (nctemp1864 !=19);
if(nctemp1861)
{
struct nctempchar1 *nctemp1869;
static struct nctempchar1 nctemp1870 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1869=&nctemp1870;
nctempchar1* nctemp1867= nctemp1869;
int nctemp1871=MainError(nctemp1867);
}
int nctemp1872 = (etable ==1);
if(nctemp1872)
{
int nctemp1877= 4;
int nctemp1879=LibeFlush(nctemp1877);
struct symbol* nctemp1883=SymGetetp();
int nctemp1880 = (nctemp1883 !=0);
if(nctemp1880)
{
int nctemp1886= 3;
struct symbol* nctemp1890=SymGetetp();
struct symbol* nctemp1888= nctemp1890;
int nctemp1891= 0;
int nctemp1893=SymPrsym(nctemp1886,nctemp1888,nctemp1891);
}
}
int nctemp1894 = (emit ==1);
if(nctemp1894)
{
int nctemp1899=CodePostamble();
}
int nctemp1903 = (emit ==1);
int nctemp1908 = (obj ==1);
int nctemp1900 = (nctemp1903 && nctemp1908);
if(nctemp1900)
{
int nctemp1912 = (1 ==1);
if(nctemp1912)
{
nctempchar1* nctemp1917= outfile;
int nctemp1920= debug;
int nctemp1922= optimize;
int nctemp1924= openmp;
int nctemp1926= show;
int nctemp1928=MainCcompcpu(nctemp1917,nctemp1920,nctemp1922,nctemp1924,nctemp1926);
}
else{
int nctemp1929 = (1 ==2);
if(nctemp1929)
{
nctempchar1* nctemp1934= outfile;
int nctemp1937= debug;
int nctemp1939= optimize;
int nctemp1941= openmp;
int nctemp1943= show;
int nctemp1945=MainCcompcuda(nctemp1934,nctemp1937,nctemp1939,nctemp1941,nctemp1943);
}
else{
int nctemp1946 = (1 ==3);
if(nctemp1946)
{
nctempchar1* nctemp1951= outfile;
int nctemp1954= debug;
int nctemp1956= optimize;
int nctemp1958= openmp;
int nctemp1960= show;
int nctemp1962=MainCcomphip(nctemp1951,nctemp1954,nctemp1956,nctemp1958,nctemp1960);
}
else{
struct nctempchar1 *nctemp1966;
static struct nctempchar1 nctemp1967 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1966=&nctemp1967;
nctempchar1* nctemp1964= nctemp1966;
int nctemp1968=MainError(nctemp1964);
}
}
}
}
int nctemp1969 = (emit ==1);
if(nctemp1969)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1977= fd;
int nctemp1979=LibeClose(nctemp1977);
}
nctempchar1* nctemp1986= infile;
nctempchar1* nctemp1989=MainFmod(nctemp1986);
nctempchar1* nctemp1984= nctemp1989;
struct nctempchar1 *nctemp1992;
static struct nctempchar1 nctemp1993 = {{ 2}, (char*)"w\0"};
nctemp1992=&nctemp1993;
nctempchar1* nctemp1990= nctemp1992;
int nctemp1994=LibeOpen(nctemp1984,nctemp1990);
fd =nctemp1994;
int nctemp1996= fd;
struct symbol* nctemp2000=SymGetetp();
struct symbol* nctemp1998= nctemp2000;
int nctemp2001= 0;
int nctemp2003=SymExport(nctemp1996,nctemp1998,nctemp2001);
int nctemp2005= 3;
int nctemp2007=LibeFlush(nctemp2005);
return 1;
}
