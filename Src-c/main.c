//  Translated by epsc  version: Thu Mar 26 16:05:46 2026

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
int SemCompstmnt (struct tree* p);
int SemStmnt (struct tree* p);
struct tree* SemExpr (struct tree* p);
struct tree* SemUnexpr (struct tree* p);
struct tree* SemPrimexpr (struct tree* p);
int SemGetparallel ();
int SemSetparallel (int flag);
int SemGetreturn ();
int SemSetreturn (int flag);
int SemSetsimple (int simple);
int SemGetsimple ();
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int SemImport (struct tree* p,struct symbol* etp);
int SemAutodeclar (struct tree* identifier,struct symbol* local,struct symbol* global);
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
int SemCopytype2 (struct tree* p,struct tree* np);
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
int CodeSetpython (int flag);
int CodeGetpython ();
int CodeSetfdpython (int fd);
int CodeGetfdpython ();
int CodeBreakon ();
int CodeGetbreak ();
int CodeBreakoff ();
int CodeSetarch (int arch);
int CodeGetarch ();
int CodeSetparallel (int flag);
int CodeGetparallel ();
nctempchar1 * CodeItemp (int cntrl);
int CodeInit ();
int CodeSetfdout (int fd);
int CodeGetfdout ();
int CodeDebug ();
int CodeEs (struct tree* p,nctempchar1 *s);
int CodeEind (struct tree* p);
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
nctempchar1 * CodeDims (nctempchar1 *type,int rank);
nctempchar1 * CodeStorefunc (nctempchar1 *type,int rank);
int CodeCrerval (struct tree* p,int rank,nctempchar1 *type);
nctempchar1 * CodeGetfunc (nctempchar1 *type,int rank);
int CodePyreturn (struct tree* functionode);
int CodePyreturntype (struct tree* functionode);
int CodeFdefwrapperpy (struct tree* p);
int CodePreamblecpu ();
int CodePreamblecuda ();
int CodePreamblehip ();
int CodePreamble ();
int CodePostamble ();
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
int nctemp53= 4;
struct nctempchar1 *nctemp57;
static struct nctempchar1 nctemp58 = {{ 62}, (char*)"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f -x -y] file.e \n\0"};
nctemp57=&nctemp58;
nctempchar1* nctemp55= nctemp57;
int nctemp59=LibePuts(nctemp53,nctemp55);
int nctemp61= 4;
struct nctempchar1 *nctemp65;
static struct nctempchar1 nctemp66 = {{ 3}, (char*)"\n\0"};
nctemp65=&nctemp66;
nctempchar1* nctemp63= nctemp65;
int nctemp67=LibePuts(nctemp61,nctemp63);
int nctemp69= 4;
struct nctempchar1 *nctemp73;
static struct nctempchar1 nctemp74 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp73=&nctemp74;
nctempchar1* nctemp71= nctemp73;
int nctemp75=LibePuts(nctemp69,nctemp71);
int nctemp77= 4;
struct nctempchar1 *nctemp81;
static struct nctempchar1 nctemp82 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp81=&nctemp82;
nctempchar1* nctemp79= nctemp81;
int nctemp83=LibePuts(nctemp77,nctemp79);
int nctemp85= 4;
struct nctempchar1 *nctemp89;
static struct nctempchar1 nctemp90 = {{ 3}, (char*)"\n\0"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibePuts(nctemp85,nctemp87);
int nctemp93= 4;
struct nctempchar1 *nctemp97;
static struct nctempchar1 nctemp98 = {{ 14}, (char*)"  Options: \n\0"};
nctemp97=&nctemp98;
nctempchar1* nctemp95= nctemp97;
int nctemp99=LibePuts(nctemp93,nctemp95);
int nctemp101= 4;
struct nctempchar1 *nctemp105;
static struct nctempchar1 nctemp106 = {{ 26}, (char*)" -t : Print parse tree \n\0"};
nctemp105=&nctemp106;
nctempchar1* nctemp103= nctemp105;
int nctemp107=LibePuts(nctemp101,nctemp103);
int nctemp109= 4;
struct nctempchar1 *nctemp113;
static struct nctempchar1 nctemp114 = {{ 36}, (char*)" -a : Print annotated parse tree \n\0"};
nctemp113=&nctemp114;
nctempchar1* nctemp111= nctemp113;
int nctemp115=LibePuts(nctemp109,nctemp111);
int nctemp117= 4;
struct nctempchar1 *nctemp121;
static struct nctempchar1 nctemp122 = {{ 36}, (char*)" -s : Print local symbol table   \n\0"};
nctemp121=&nctemp122;
nctempchar1* nctemp119= nctemp121;
int nctemp123=LibePuts(nctemp117,nctemp119);
int nctemp125= 4;
struct nctempchar1 *nctemp129;
static struct nctempchar1 nctemp130 = {{ 39}, (char*)" -r : Print external symbol table   \n\0"};
nctemp129=&nctemp130;
nctempchar1* nctemp127= nctemp129;
int nctemp131=LibePuts(nctemp125,nctemp127);
int nctemp133= 4;
struct nctempchar1 *nctemp137;
static struct nctempchar1 nctemp138 = {{ 19}, (char*)" -e : Emit code \n\0"};
nctemp137=&nctemp138;
nctempchar1* nctemp135= nctemp137;
int nctemp139=LibePuts(nctemp133,nctemp135);
int nctemp141= 4;
struct nctempchar1 *nctemp145;
static struct nctempchar1 nctemp146 = {{ 54}, (char*)" -p : Perform only syntax check, no code generated \n\0"};
nctemp145=&nctemp146;
nctempchar1* nctemp143= nctemp145;
int nctemp147=LibePuts(nctemp141,nctemp143);
int nctemp149= 4;
struct nctempchar1 *nctemp153;
static struct nctempchar1 nctemp154 = {{ 62}, (char*)" -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp153=&nctemp154;
nctempchar1* nctemp151= nctemp153;
int nctemp155=LibePuts(nctemp149,nctemp151);
int nctemp157= 4;
struct nctempchar1 *nctemp161;
static struct nctempchar1 nctemp162 = {{ 27}, (char*)" -C : Array index check \n\0"};
nctemp161=&nctemp162;
nctempchar1* nctemp159= nctemp161;
int nctemp163=LibePuts(nctemp157,nctemp159);
int nctemp165= 4;
struct nctempchar1 *nctemp169;
static struct nctempchar1 nctemp170 = {{ 30}, (char*)" -i : Break up expressions \n\0"};
nctemp169=&nctemp170;
nctempchar1* nctemp167= nctemp169;
int nctemp171=LibePuts(nctemp165,nctemp167);
int nctemp173= 4;
struct nctempchar1 *nctemp177;
static struct nctempchar1 nctemp178 = {{ 59}, (char*)" -c : Produce c/c++ code but do not generate object code\n\0"};
nctemp177=&nctemp178;
nctempchar1* nctemp175= nctemp177;
int nctemp179=LibePuts(nctemp173,nctemp175);
int nctemp181= 4;
struct nctempchar1 *nctemp185;
static struct nctempchar1 nctemp186 = {{ 29}, (char*)" -g : Generate debug info \n\0"};
nctemp185=&nctemp186;
nctempchar1* nctemp183= nctemp185;
int nctemp187=LibePuts(nctemp181,nctemp183);
int nctemp189= 4;
struct nctempchar1 *nctemp193;
static struct nctempchar1 nctemp194 = {{ 46}, (char*)" -d : Show the host compiler command line  \n\0"};
nctemp193=&nctemp194;
nctempchar1* nctemp191= nctemp193;
int nctemp195=LibePuts(nctemp189,nctemp191);
int nctemp197= 4;
struct nctempchar1 *nctemp201;
static struct nctempchar1 nctemp202 = {{ 22}, (char*)" -O : Optimize code\n\0"};
nctemp201=&nctemp202;
nctempchar1* nctemp199= nctemp201;
int nctemp203=LibePuts(nctemp197,nctemp199);
int nctemp205= 4;
struct nctempchar1 *nctemp209;
static struct nctempchar1 nctemp210 = {{ 34}, (char*)" -f : Generate code for openmp \n\0"};
nctemp209=&nctemp210;
nctempchar1* nctemp207= nctemp209;
int nctemp211=LibePuts(nctemp205,nctemp207);
int nctemp213= 4;
struct nctempchar1 *nctemp217;
static struct nctempchar1 nctemp218 = {{ 56}, (char*)" -x arch : where arch is either cpu (default) or cuda\n\0"};
nctemp217=&nctemp218;
nctempchar1* nctemp215= nctemp217;
int nctemp219=LibePuts(nctemp213,nctemp215);
int nctemp221= 4;
struct nctempchar1 *nctemp225;
static struct nctempchar1 nctemp226 = {{ 75}, (char*)" -y dev  : where dev is either none, native or device name such as sm_86\n\0"};
nctemp225=&nctemp226;
nctempchar1* nctemp223= nctemp225;
int nctemp227=LibePuts(nctemp221,nctemp223);
int nctemp229= 4;
struct nctempchar1 *nctemp233;
static struct nctempchar1 nctemp234 = {{ 42}, (char*)" -z : Generate python wrapper functions\n\0"};
nctemp233=&nctemp234;
nctempchar1* nctemp231= nctemp233;
int nctemp235=LibePuts(nctemp229,nctemp231);
int nctemp237= 4;
int nctemp239=LibeFlush(nctemp237);
return 1;
}
nctempchar1 * MainPythonout (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp245=infile->d[0];l =nctemp245;
int nctemp249 = (l < 3);
if(nctemp249)
{
struct nctempchar1 *nctemp256;
static struct nctempchar1 nctemp257 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp256=&nctemp257;
nctempchar1* nctemp254= nctemp256;
int nctemp258=MainError(nctemp254);
}
int nctemp267 = l - 2;
int nctemp262=nctemp267;
char nctemp269=(char)('e');
int nctemp259 = (infile->a[nctemp262] !=nctemp269);
if(nctemp259)
{
struct nctempchar1 *nctemp275;
static struct nctempchar1 nctemp276 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp275=&nctemp276;
nctempchar1* nctemp273= nctemp275;
int nctemp277=MainError(nctemp273);
}
int nctemp289 = l + 1;
int nctemp284=nctemp289;
nctempchar1 *nctemp283;
nctemp283=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp294 = l + 1;
nctemp283->d[0]=nctemp294;
nctemp283->a=(char *)RunMalloc(sizeof(char)*nctemp284);
outfile=nctemp283;
nctempchar1* nctemp296= infile;
nctempchar1* nctemp299= outfile;
int nctemp302=LibeStrcpy(nctemp296,nctemp299);
int nctemp311 = l - 2;
int nctemp306=nctemp311;
char nctemp313=(char)('p');
outfile->a[nctemp306] =nctemp313;
int nctemp324 = l - 1;
int nctemp319=nctemp324;
char nctemp326=(char)('y');
outfile->a[nctemp319] =nctemp326;
return outfile;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp335=infile->d[0];l =nctemp335;
int nctemp339 = (l < 3);
if(nctemp339)
{
struct nctempchar1 *nctemp346;
static struct nctempchar1 nctemp347 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp346=&nctemp347;
nctempchar1* nctemp344= nctemp346;
int nctemp348=MainError(nctemp344);
}
int nctemp357 = l - 2;
int nctemp352=nctemp357;
char nctemp359=(char)('e');
int nctemp349 = (infile->a[nctemp352] !=nctemp359);
if(nctemp349)
{
struct nctempchar1 *nctemp365;
static struct nctempchar1 nctemp366 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp365=&nctemp366;
nctempchar1* nctemp363= nctemp365;
int nctemp367=MainError(nctemp363);
}
int nctemp368 = (arch ==1);
if(nctemp368)
{
int nctemp378=l;
nctempchar1 *nctemp377;
nctemp377=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp377->d[0]=l;
nctemp377->a=(char *)RunMalloc(sizeof(char)*nctemp378);
outfile=nctemp377;
nctempchar1* nctemp382= infile;
nctempchar1* nctemp385= outfile;
int nctemp388=LibeStrcpy(nctemp382,nctemp385);
int nctemp397 = l - 2;
int nctemp392=nctemp397;
char nctemp399=(char)('c');
outfile->a[nctemp392] =nctemp399;
}
else{
int nctemp402 = (arch ==2);
if(nctemp402)
{
int nctemp417 = l + 2;
int nctemp412=nctemp417;
nctempchar1 *nctemp411;
nctemp411=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp422 = l + 2;
nctemp411->d[0]=nctemp422;
nctemp411->a=(char *)RunMalloc(sizeof(char)*nctemp412);
outfile=nctemp411;
nctempchar1* nctemp424= infile;
nctempchar1* nctemp427= outfile;
int nctemp430=LibeStrcpy(nctemp424,nctemp427);
int nctemp439 = l - 2;
int nctemp434=nctemp439;
char nctemp441=(char)('c');
outfile->a[nctemp434] =nctemp441;
int nctemp452 = l - 1;
int nctemp447=nctemp452;
char nctemp454=(char)('p');
outfile->a[nctemp447] =nctemp454;
int nctemp465 = l - 0;
int nctemp460=nctemp465;
char nctemp467=(char)('p');
outfile->a[nctemp460] =nctemp467;
}
else{
int nctemp470 = (arch ==4);
if(nctemp470)
{
int nctemp480=l;
nctempchar1 *nctemp479;
nctemp479=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp479->d[0]=l;
nctemp479->a=(char *)RunMalloc(sizeof(char)*nctemp480);
outfile=nctemp479;
nctempchar1* nctemp484= infile;
nctempchar1* nctemp487= outfile;
int nctemp490=LibeStrcpy(nctemp484,nctemp487);
int nctemp499 = l - 2;
int nctemp494=nctemp499;
char nctemp501=(char)('c');
outfile->a[nctemp494] =nctemp501;
}
else{
struct nctempchar1 *nctemp507;
static struct nctempchar1 nctemp508 = {{ 22}, (char*)"Unknow architecture\n\0"};
nctemp507=&nctemp508;
nctempchar1* nctemp505= nctemp507;
int nctemp509=MainError(nctemp505);
}
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp516=infile->d[0];l =nctemp516;
int nctemp520 = (l < 3);
if(nctemp520)
{
struct nctempchar1 *nctemp527;
static struct nctempchar1 nctemp528 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp527=&nctemp528;
nctempchar1* nctemp525= nctemp527;
int nctemp529=MainError(nctemp525);
}
int nctemp538 = l - 2;
int nctemp533=nctemp538;
char nctemp540=(char)('e');
int nctemp530 = (infile->a[nctemp533] !=nctemp540);
if(nctemp530)
{
struct nctempchar1 *nctemp546;
static struct nctempchar1 nctemp547 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp546=&nctemp547;
nctempchar1* nctemp544= nctemp546;
int nctemp548=MainError(nctemp544);
}
int nctemp555=l;
nctempchar1 *nctemp554;
nctemp554=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp554->d[0]=l;
nctemp554->a=(char *)RunMalloc(sizeof(char)*nctemp555);
outfile=nctemp554;
nctempchar1* nctemp559= infile;
nctempchar1* nctemp562= outfile;
int nctemp565=LibeStrcpy(nctemp559,nctemp562);
int nctemp574 = l - 2;
int nctemp569=nctemp574;
char nctemp576=(char)('m');
outfile->a[nctemp569] =nctemp576;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp586;
static struct nctempchar1 nctemp587 = {{ 25}, (char*)"gcc -c -ffast-math -fPIC\0"};
nctemp586=&nctemp587;
cmd=nctemp586;
int nctemp588 = (debug ==1);
if(nctemp588)
{
nctempchar1* nctemp597= cmd;
struct nctempchar1 *nctemp602;
static struct nctempchar1 nctemp603 = {{ 5}, (char*)" -g \0"};
nctemp602=&nctemp603;
nctempchar1* nctemp600= nctemp602;
nctempchar1* nctemp604=LibeStradd(nctemp597,nctemp600);
cmd=nctemp604;
}
int nctemp605 = (optimize ==1);
if(nctemp605)
{
nctempchar1* nctemp614= cmd;
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 6}, (char*)" -O3 \0"};
nctemp619=&nctemp620;
nctempchar1* nctemp617= nctemp619;
nctempchar1* nctemp621=LibeStradd(nctemp614,nctemp617);
cmd=nctemp621;
}
else{
nctempchar1* nctemp627= cmd;
struct nctempchar1 *nctemp632;
static struct nctempchar1 nctemp633 = {{ 6}, (char*)" -O2 \0"};
nctemp632=&nctemp633;
nctempchar1* nctemp630= nctemp632;
nctempchar1* nctemp634=LibeStradd(nctemp627,nctemp630);
cmd=nctemp634;
}
int nctemp635 = (openmp ==1);
if(nctemp635)
{
nctempchar1* nctemp644= cmd;
struct nctempchar1 *nctemp649;
static struct nctempchar1 nctemp650 = {{ 11}, (char*)" -fopenmp \0"};
nctemp649=&nctemp650;
nctempchar1* nctemp647= nctemp649;
nctempchar1* nctemp651=LibeStradd(nctemp644,nctemp647);
cmd=nctemp651;
}
nctempchar1* nctemp657= cmd;
nctempchar1* nctemp660= file;
nctempchar1* nctemp663=LibeStradd(nctemp657,nctemp660);
cmd=nctemp663;
tmp = cmd;
nctempchar1* nctemp669= tmp;
struct nctempchar1 *nctemp674;
static struct nctempchar1 nctemp675 = {{ 3}, (char*)"\n\0"};
nctemp674=&nctemp675;
nctempchar1* nctemp672= nctemp674;
nctempchar1* nctemp676=LibeStradd(nctemp669,nctemp672);
cmd=nctemp676;
RunFree(tmp->a);
RunFree(tmp);
int nctemp680 = (show ==1);
if(nctemp680)
{
int nctemp685= 4;
nctempchar1* nctemp687= cmd;
int nctemp690=LibePuts(nctemp685,nctemp687);
int nctemp692= 4;
int nctemp694=LibeFlush(nctemp692);
}
nctempchar1* nctemp696= cmd;
int nctemp699=LibeSystem(nctemp696);
struct nctempchar1 *nctemp707;
static struct nctempchar1 nctemp708 = {{ 4}, (char*)"rm \0"};
nctemp707=&nctemp708;
nctempchar1* nctemp705= nctemp707;
nctempchar1* nctemp709= file;
nctempchar1* nctemp712=LibeStradd(nctemp705,nctemp709);
cmd=nctemp712;
tmp = cmd;
nctempchar1* nctemp718= cmd;
struct nctempchar1 *nctemp723;
static struct nctempchar1 nctemp724 = {{ 3}, (char*)"\n\0"};
nctemp723=&nctemp724;
nctempchar1* nctemp721= nctemp723;
nctempchar1* nctemp725=LibeStradd(nctemp718,nctemp721);
cmd=nctemp725;
RunFree(tmp->a);
RunFree(tmp);
int nctemp729 = (show ==1);
if(nctemp729)
{
int nctemp734= 4;
nctempchar1* nctemp736= cmd;
int nctemp739=LibePuts(nctemp734,nctemp736);
int nctemp741= 4;
int nctemp743=LibeFlush(nctemp741);
}
nctempchar1* nctemp745= cmd;
int nctemp748=LibeSystem(nctemp745);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompgomp (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 35}, (char*)"nvc -c -fast -mp=gpu -gpu=managed \0"};
nctemp758=&nctemp759;
cmd=nctemp758;
int nctemp760 = (debug ==1);
if(nctemp760)
{
nctempchar1* nctemp769= cmd;
struct nctempchar1 *nctemp774;
static struct nctempchar1 nctemp775 = {{ 5}, (char*)" -g \0"};
nctemp774=&nctemp775;
nctempchar1* nctemp772= nctemp774;
nctempchar1* nctemp776=LibeStradd(nctemp769,nctemp772);
cmd=nctemp776;
}
int nctemp777 = (optimize ==1);
if(nctemp777)
{
nctempchar1* nctemp786= cmd;
struct nctempchar1 *nctemp791;
static struct nctempchar1 nctemp792 = {{ 6}, (char*)" -O3 \0"};
nctemp791=&nctemp792;
nctempchar1* nctemp789= nctemp791;
nctempchar1* nctemp793=LibeStradd(nctemp786,nctemp789);
cmd=nctemp793;
}
else{
nctempchar1* nctemp799= cmd;
struct nctempchar1 *nctemp804;
static struct nctempchar1 nctemp805 = {{ 6}, (char*)" -O2 \0"};
nctemp804=&nctemp805;
nctempchar1* nctemp802= nctemp804;
nctempchar1* nctemp806=LibeStradd(nctemp799,nctemp802);
cmd=nctemp806;
}
int nctemp807 = (openmp ==1);
if(nctemp807)
{
nctempchar1* nctemp816= cmd;
struct nctempchar1 *nctemp821;
static struct nctempchar1 nctemp822 = {{ 11}, (char*)" -fopenmp \0"};
nctemp821=&nctemp822;
nctempchar1* nctemp819= nctemp821;
nctempchar1* nctemp823=LibeStradd(nctemp816,nctemp819);
cmd=nctemp823;
}
nctempchar1* nctemp829= cmd;
nctempchar1* nctemp832= file;
nctempchar1* nctemp835=LibeStradd(nctemp829,nctemp832);
cmd=nctemp835;
tmp = cmd;
nctempchar1* nctemp841= tmp;
struct nctempchar1 *nctemp846;
static struct nctempchar1 nctemp847 = {{ 3}, (char*)"\n\0"};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
nctempchar1* nctemp848=LibeStradd(nctemp841,nctemp844);
cmd=nctemp848;
RunFree(tmp->a);
RunFree(tmp);
int nctemp852 = (show ==1);
if(nctemp852)
{
int nctemp857= 4;
nctempchar1* nctemp859= cmd;
int nctemp862=LibePuts(nctemp857,nctemp859);
int nctemp864= 4;
int nctemp866=LibeFlush(nctemp864);
}
nctempchar1* nctemp868= cmd;
int nctemp871=LibeSystem(nctemp868);
struct nctempchar1 *nctemp879;
static struct nctempchar1 nctemp880 = {{ 4}, (char*)"rm \0"};
nctemp879=&nctemp880;
nctempchar1* nctemp877= nctemp879;
nctempchar1* nctemp881= file;
nctempchar1* nctemp884=LibeStradd(nctemp877,nctemp881);
cmd=nctemp884;
tmp = cmd;
nctempchar1* nctemp890= cmd;
struct nctempchar1 *nctemp895;
static struct nctempchar1 nctemp896 = {{ 3}, (char*)"\n\0"};
nctemp895=&nctemp896;
nctempchar1* nctemp893= nctemp895;
nctempchar1* nctemp897=LibeStradd(nctemp890,nctemp893);
cmd=nctemp897;
RunFree(tmp->a);
RunFree(tmp);
int nctemp901 = (show ==1);
if(nctemp901)
{
int nctemp906= 4;
nctempchar1* nctemp908= cmd;
int nctemp911=LibePuts(nctemp906,nctemp908);
int nctemp913= 4;
int nctemp915=LibeFlush(nctemp913);
}
nctempchar1* nctemp917= cmd;
int nctemp920=LibeSystem(nctemp917);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show,nctempchar1 *dev)
{
int l;
nctempchar1 *cmd;
nctempchar1 *tmp;
int nctemp929=file->d[0];l =nctemp929;
struct nctempchar1 *nctemp938;
static struct nctempchar1 nctemp939 = {{ 69}, (char*)"nvcc  -use_fast_math --compiler-options -O2 --compiler-options -fPIC\0"};
nctemp938=&nctemp939;
cmd=nctemp938;
nctempchar1* nctemp943= dev;
struct nctempchar1 *nctemp948;
static struct nctempchar1 nctemp949 = {{ 5}, (char*)"none\0"};
nctemp948=&nctemp949;
nctempchar1* nctemp946= nctemp948;
int nctemp950=LibeStrcmp(nctemp943,nctemp946);
int nctemp940 = (nctemp950 !=1);
if(nctemp940)
{
nctempchar1* nctemp957= cmd;
struct nctempchar1 *nctemp962;
static struct nctempchar1 nctemp963 = {{ 8}, (char*)" -arch \0"};
nctemp962=&nctemp963;
nctempchar1* nctemp960= nctemp962;
nctempchar1* nctemp964=LibeStradd(nctemp957,nctemp960);
cmd=nctemp964;
nctempchar1* nctemp970= cmd;
nctempchar1* nctemp973= dev;
nctempchar1* nctemp976=LibeStradd(nctemp970,nctemp973);
cmd=nctemp976;
nctempchar1* nctemp982= cmd;
struct nctempchar1 *nctemp987;
static struct nctempchar1 nctemp988 = {{ 2}, (char*)" \0"};
nctemp987=&nctemp988;
nctempchar1* nctemp985= nctemp987;
nctempchar1* nctemp989=LibeStradd(nctemp982,nctemp985);
cmd=nctemp989;
}
nctempchar1* nctemp995= cmd;
struct nctempchar1 *nctemp1000;
static struct nctempchar1 nctemp1001 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp1000=&nctemp1001;
nctempchar1* nctemp998= nctemp1000;
nctempchar1* nctemp1002=LibeStradd(nctemp995,nctemp998);
cmd=nctemp1002;
int nctemp1003 = (debug ==1);
if(nctemp1003)
{
nctempchar1* nctemp1012= cmd;
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 5}, (char*)" -g \0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
nctempchar1* nctemp1019=LibeStradd(nctemp1012,nctemp1015);
cmd=nctemp1019;
}
int nctemp1020 = (optimize ==1);
if(nctemp1020)
{
nctempchar1* nctemp1029= cmd;
struct nctempchar1 *nctemp1034;
static struct nctempchar1 nctemp1035 = {{ 6}, (char*)" -O3 \0"};
nctemp1034=&nctemp1035;
nctempchar1* nctemp1032= nctemp1034;
nctempchar1* nctemp1036=LibeStradd(nctemp1029,nctemp1032);
cmd=nctemp1036;
}
else{
nctempchar1* nctemp1042= cmd;
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 6}, (char*)" -O2 \0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
nctempchar1* nctemp1049=LibeStradd(nctemp1042,nctemp1045);
cmd=nctemp1049;
}
int nctemp1050 = (openmp ==1);
if(nctemp1050)
{
nctempchar1* nctemp1059= cmd;
struct nctempchar1 *nctemp1064;
static struct nctempchar1 nctemp1065 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1064=&nctemp1065;
nctempchar1* nctemp1062= nctemp1064;
nctempchar1* nctemp1066=LibeStradd(nctemp1059,nctemp1062);
cmd=nctemp1066;
}
nctempchar1* nctemp1072= cmd;
nctempchar1* nctemp1075= file;
nctempchar1* nctemp1078=LibeStradd(nctemp1072,nctemp1075);
cmd=nctemp1078;
tmp = cmd;
nctempchar1* nctemp1084= cmd;
struct nctempchar1 *nctemp1089;
static struct nctempchar1 nctemp1090 = {{ 3}, (char*)"\n\0"};
nctemp1089=&nctemp1090;
nctempchar1* nctemp1087= nctemp1089;
nctempchar1* nctemp1091=LibeStradd(nctemp1084,nctemp1087);
cmd=nctemp1091;
RunFree(tmp->a);
RunFree(tmp);
int nctemp1095 = (show ==1);
if(nctemp1095)
{
int nctemp1100= 4;
nctempchar1* nctemp1102= cmd;
int nctemp1105=LibePuts(nctemp1100,nctemp1102);
int nctemp1107= 4;
int nctemp1109=LibeFlush(nctemp1107);
}
nctempchar1* nctemp1111= cmd;
int nctemp1114=LibeSystem(nctemp1111);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1133;
static struct nctempchar1 nctemp1134 = {{ 4}, (char*)"rm \0"};
nctemp1133=&nctemp1134;
int nctemp1131=nctemp1133->d[0];int nctemp1137 = nctemp1131 + l;
int nctemp1139 = nctemp1137 + 2;
int nctemp1124=nctemp1139;
nctempchar1 *nctemp1123;
nctemp1123=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1148;
static struct nctempchar1 nctemp1149 = {{ 4}, (char*)"rm \0"};
nctemp1148=&nctemp1149;
int nctemp1146=nctemp1148->d[0];int nctemp1152 = nctemp1146 + l;
int nctemp1154 = nctemp1152 + 2;
nctemp1123->d[0]=nctemp1154;
nctemp1123->a=(char *)RunMalloc(sizeof(char)*nctemp1124);
cmd=nctemp1123;
struct nctempchar1 *nctemp1162;
static struct nctempchar1 nctemp1163 = {{ 4}, (char*)"rm \0"};
nctemp1162=&nctemp1163;
nctempchar1* nctemp1160= nctemp1162;
nctempchar1* nctemp1164= file;
nctempchar1* nctemp1167=LibeStradd(nctemp1160,nctemp1164);
cmd=nctemp1167;
tmp = cmd;
nctempchar1* nctemp1173= cmd;
struct nctempchar1 *nctemp1178;
static struct nctempchar1 nctemp1179 = {{ 3}, (char*)"\n\0"};
nctemp1178=&nctemp1179;
nctempchar1* nctemp1176= nctemp1178;
nctempchar1* nctemp1180=LibeStradd(nctemp1173,nctemp1176);
cmd=nctemp1180;
int nctemp1181 = (show ==1);
if(nctemp1181)
{
int nctemp1186= 4;
nctempchar1* nctemp1188= cmd;
int nctemp1191=LibePuts(nctemp1186,nctemp1188);
int nctemp1193= 4;
int nctemp1195=LibeFlush(nctemp1193);
}
nctempchar1* nctemp1197= cmd;
int nctemp1200=LibeSystem(nctemp1197);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
int l;
nctempchar1 *tmp;
nctempchar1 *cmd;
int nctemp1209=file->d[0];l =nctemp1209;
struct nctempchar1 *nctemp1218;
static struct nctempchar1 nctemp1219 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1218=&nctemp1219;
tmp=nctemp1218;
int nctemp1226=160;
nctempchar1 *nctemp1225;
nctemp1225=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1225->d[0]=160;
nctemp1225->a=(char *)RunMalloc(sizeof(char)*nctemp1226);
cmd=nctemp1225;
nctempchar1* nctemp1230= tmp;
nctempchar1* nctemp1233= cmd;
int nctemp1236=LibeStrcpy(nctemp1230,nctemp1233);
int nctemp1237 = (debug ==1);
if(nctemp1237)
{
struct nctempchar1 *nctemp1244;
static struct nctempchar1 nctemp1245 = {{ 5}, (char*)" -g \0"};
nctemp1244=&nctemp1245;
nctempchar1* nctemp1242= nctemp1244;
nctempchar1* nctemp1246= cmd;
int nctemp1249=LibeStrcat(nctemp1242,nctemp1246);
}
int nctemp1250 = (optimize ==1);
if(nctemp1250)
{
struct nctempchar1 *nctemp1257;
static struct nctempchar1 nctemp1258 = {{ 6}, (char*)" -O3 \0"};
nctemp1257=&nctemp1258;
nctempchar1* nctemp1255= nctemp1257;
nctempchar1* nctemp1259= cmd;
int nctemp1262=LibeStrcat(nctemp1255,nctemp1259);
}
int nctemp1263 = (openmp ==1);
if(nctemp1263)
{
struct nctempchar1 *nctemp1270;
static struct nctempchar1 nctemp1271 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1270=&nctemp1271;
nctempchar1* nctemp1268= nctemp1270;
nctempchar1* nctemp1272= cmd;
int nctemp1275=LibeStrcat(nctemp1268,nctemp1272);
}
nctempchar1* nctemp1277= file;
nctempchar1* nctemp1280= cmd;
int nctemp1283=LibeStrcat(nctemp1277,nctemp1280);
struct nctempchar1 *nctemp1287;
static struct nctempchar1 nctemp1288 = {{ 3}, (char*)"\n\0"};
nctemp1287=&nctemp1288;
nctempchar1* nctemp1285= nctemp1287;
nctempchar1* nctemp1289= cmd;
int nctemp1292=LibeStrcat(nctemp1285,nctemp1289);
int nctemp1293 = (show ==1);
if(nctemp1293)
{
int nctemp1298= 4;
nctempchar1* nctemp1300= cmd;
int nctemp1303=LibePuts(nctemp1298,nctemp1300);
int nctemp1305= 4;
int nctemp1307=LibeFlush(nctemp1305);
}
nctempchar1* nctemp1309= cmd;
int nctemp1312=LibeSystem(nctemp1309);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1331;
static struct nctempchar1 nctemp1332 = {{ 4}, (char*)"rm \0"};
nctemp1331=&nctemp1332;
int nctemp1329=nctemp1331->d[0];int nctemp1335 = nctemp1329 + l;
int nctemp1337 = nctemp1335 + 2;
int nctemp1322=nctemp1337;
nctempchar1 *nctemp1321;
nctemp1321=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1346;
static struct nctempchar1 nctemp1347 = {{ 4}, (char*)"rm \0"};
nctemp1346=&nctemp1347;
int nctemp1344=nctemp1346->d[0];int nctemp1350 = nctemp1344 + l;
int nctemp1352 = nctemp1350 + 2;
nctemp1321->d[0]=nctemp1352;
nctemp1321->a=(char *)RunMalloc(sizeof(char)*nctemp1322);
cmd=nctemp1321;
struct nctempchar1 *nctemp1356;
static struct nctempchar1 nctemp1357 = {{ 4}, (char*)"rm \0"};
nctemp1356=&nctemp1357;
nctempchar1* nctemp1354= nctemp1356;
nctempchar1* nctemp1358= cmd;
int nctemp1361=LibeStrcpy(nctemp1354,nctemp1358);
nctempchar1* nctemp1363= file;
nctempchar1* nctemp1366= cmd;
int nctemp1369=LibeStrcat(nctemp1363,nctemp1366);
struct nctempchar1 *nctemp1373;
static struct nctempchar1 nctemp1374 = {{ 3}, (char*)"\n\0"};
nctemp1373=&nctemp1374;
nctempchar1* nctemp1371= nctemp1373;
nctempchar1* nctemp1375= cmd;
int nctemp1378=LibeStrcat(nctemp1371,nctemp1375);
int nctemp1379 = (show ==1);
if(nctemp1379)
{
int nctemp1384= 4;
nctempchar1* nctemp1386= cmd;
int nctemp1389=LibePuts(nctemp1384,nctemp1386);
int nctemp1391= 4;
int nctemp1393=LibeFlush(nctemp1391);
}
nctempchar1* nctemp1395= cmd;
int nctemp1398=LibeSystem(nctemp1395);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int Main (struct nctempMainArg1 *MainArgs)
{
nctempchar1 *dev;
int openmp;
int optimize;
int debug;
int show;
int emit;
int etable;
int table;
int atree;
int btree;
int semantic;
int parse;
int obj;
int options;
int python;
int l;
int i;
struct nctempchar1 *infile;
nctempchar1 *outfile;
int fd;
nctempchar1 *outfilepy;
struct tree* p;
int nctemp1404=LibeInit();
struct nctempchar1 *nctemp1412;
static struct nctempchar1 nctemp1413 = {{ 5}, (char*)"none\0"};
nctemp1412=&nctemp1413;
nctempchar1* nctemp1410= nctemp1412;
nctempchar1* nctemp1414=LibeStrsave(nctemp1410);
dev=nctemp1414;
show = (debug = (optimize = (openmp = 0)));
btree = (atree = (table = (etable = (emit = 0))));
parse = (semantic = 0);
obj = 1;
options = 0;
python = 0;
int nctemp1416=PtreeInit();
int nctemp1418=CodeInit();
int nctemp1420=CodeArraycheckoff();
int nctemp1422=CodeDebugoff();
int nctemp1424= 1;
int nctemp1426=CodeSetarch(nctemp1424);
int nctemp1431=MainArgs->d[0];l =nctemp1431;
int nctemp1435 = (l <= 1);
if(nctemp1435)
{
struct nctempchar1 *nctemp1442;
static struct nctempchar1 nctemp1443 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1442=&nctemp1443;
nctempchar1* nctemp1440= nctemp1442;
int nctemp1444=MainError(nctemp1440);
}
i =1;
int nctemp1453=MainArgs->d[0];int nctemp1449 = (i < nctemp1453);
while(nctemp1449){
{
int nctemp1462=i;
nctempchar1* nctemp1460= MainArgs->a[nctemp1462].arg;
struct nctempchar1 *nctemp1467;
static struct nctempchar1 nctemp1468 = {{ 3}, (char*)"-h\0"};
nctemp1467=&nctemp1468;
nctempchar1* nctemp1465= nctemp1467;
int nctemp1469=LibeStrcmp(nctemp1460,nctemp1465);
int nctemp1457 = (nctemp1469 ==1);
if(nctemp1457)
{
int nctemp1474=CodeGetarch();
int nctemp1472= nctemp1474;
int nctemp1475=MainHelp(nctemp1472);
int nctemp1477=LibeExit();
}
int nctemp1483=i;
nctempchar1* nctemp1481= MainArgs->a[nctemp1483].arg;
struct nctempchar1 *nctemp1488;
static struct nctempchar1 nctemp1489 = {{ 3}, (char*)"-t\0"};
nctemp1488=&nctemp1489;
nctempchar1* nctemp1486= nctemp1488;
int nctemp1490=LibeStrcmp(nctemp1481,nctemp1486);
int nctemp1478 = (nctemp1490 ==1);
if(nctemp1478)
{
btree = 1;
parse = 1;
}
int nctemp1497=i;
nctempchar1* nctemp1495= MainArgs->a[nctemp1497].arg;
struct nctempchar1 *nctemp1502;
static struct nctempchar1 nctemp1503 = {{ 3}, (char*)"-a\0"};
nctemp1502=&nctemp1503;
nctempchar1* nctemp1500= nctemp1502;
int nctemp1504=LibeStrcmp(nctemp1495,nctemp1500);
int nctemp1492 = (nctemp1504 ==1);
if(nctemp1492)
{
atree = 1;
semantic = 1;
parse = 1;
}
int nctemp1511=i;
nctempchar1* nctemp1509= MainArgs->a[nctemp1511].arg;
struct nctempchar1 *nctemp1516;
static struct nctempchar1 nctemp1517 = {{ 3}, (char*)"-s\0"};
nctemp1516=&nctemp1517;
nctempchar1* nctemp1514= nctemp1516;
int nctemp1518=LibeStrcmp(nctemp1509,nctemp1514);
int nctemp1506 = (nctemp1518 ==1);
if(nctemp1506)
{
table = 1;
parse = 1;
semantic = 1;
}
int nctemp1525=i;
nctempchar1* nctemp1523= MainArgs->a[nctemp1525].arg;
struct nctempchar1 *nctemp1530;
static struct nctempchar1 nctemp1531 = {{ 3}, (char*)"-r\0"};
nctemp1530=&nctemp1531;
nctempchar1* nctemp1528= nctemp1530;
int nctemp1532=LibeStrcmp(nctemp1523,nctemp1528);
int nctemp1520 = (nctemp1532 ==1);
if(nctemp1520)
{
etable = 1;
parse = 1;
semantic = 1;
}
int nctemp1539=i;
nctempchar1* nctemp1537= MainArgs->a[nctemp1539].arg;
struct nctempchar1 *nctemp1544;
static struct nctempchar1 nctemp1545 = {{ 3}, (char*)"-e\0"};
nctemp1544=&nctemp1545;
nctempchar1* nctemp1542= nctemp1544;
int nctemp1546=LibeStrcmp(nctemp1537,nctemp1542);
int nctemp1534 = (nctemp1546 ==1);
if(nctemp1534)
{
emit = 1;
parse = 1;
semantic = 1;
}
int nctemp1553=i;
nctempchar1* nctemp1551= MainArgs->a[nctemp1553].arg;
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 3}, (char*)"-p\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
int nctemp1560=LibeStrcmp(nctemp1551,nctemp1556);
int nctemp1548 = (nctemp1560 ==1);
if(nctemp1548)
{
parse = 1;
}
int nctemp1567=i;
nctempchar1* nctemp1565= MainArgs->a[nctemp1567].arg;
struct nctempchar1 *nctemp1572;
static struct nctempchar1 nctemp1573 = {{ 3}, (char*)"-q\0"};
nctemp1572=&nctemp1573;
nctempchar1* nctemp1570= nctemp1572;
int nctemp1574=LibeStrcmp(nctemp1565,nctemp1570);
int nctemp1562 = (nctemp1574 ==1);
if(nctemp1562)
{
semantic = 1;
parse = 1;
}
int nctemp1581=i;
nctempchar1* nctemp1579= MainArgs->a[nctemp1581].arg;
struct nctempchar1 *nctemp1586;
static struct nctempchar1 nctemp1587 = {{ 3}, (char*)"-C\0"};
nctemp1586=&nctemp1587;
nctempchar1* nctemp1584= nctemp1586;
int nctemp1588=LibeStrcmp(nctemp1579,nctemp1584);
int nctemp1576 = (nctemp1588 ==1);
if(nctemp1576)
{
int nctemp1591=CodeArraycheckon();
int nctemp1593=CodeBreakon();
}
int nctemp1599=i;
nctempchar1* nctemp1597= MainArgs->a[nctemp1599].arg;
struct nctempchar1 *nctemp1604;
static struct nctempchar1 nctemp1605 = {{ 3}, (char*)"-i\0"};
nctemp1604=&nctemp1605;
nctempchar1* nctemp1602= nctemp1604;
int nctemp1606=LibeStrcmp(nctemp1597,nctemp1602);
int nctemp1594 = (nctemp1606 ==1);
if(nctemp1594)
{
int nctemp1609=CodeBreakon();
}
int nctemp1615=i;
nctempchar1* nctemp1613= MainArgs->a[nctemp1615].arg;
struct nctempchar1 *nctemp1620;
static struct nctempchar1 nctemp1621 = {{ 3}, (char*)"-g\0"};
nctemp1620=&nctemp1621;
nctempchar1* nctemp1618= nctemp1620;
int nctemp1622=LibeStrcmp(nctemp1613,nctemp1618);
int nctemp1610 = (nctemp1622 ==1);
if(nctemp1610)
{
debug = 1;
int nctemp1625=CodeDebugon();
}
int nctemp1631=i;
nctempchar1* nctemp1629= MainArgs->a[nctemp1631].arg;
struct nctempchar1 *nctemp1636;
static struct nctempchar1 nctemp1637 = {{ 3}, (char*)"-d\0"};
nctemp1636=&nctemp1637;
nctempchar1* nctemp1634= nctemp1636;
int nctemp1638=LibeStrcmp(nctemp1629,nctemp1634);
int nctemp1626 = (nctemp1638 ==1);
if(nctemp1626)
{
show = 1;
}
int nctemp1645=i;
nctempchar1* nctemp1643= MainArgs->a[nctemp1645].arg;
struct nctempchar1 *nctemp1650;
static struct nctempchar1 nctemp1651 = {{ 3}, (char*)"-O\0"};
nctemp1650=&nctemp1651;
nctempchar1* nctemp1648= nctemp1650;
int nctemp1652=LibeStrcmp(nctemp1643,nctemp1648);
int nctemp1640 = (nctemp1652 ==1);
if(nctemp1640)
{
optimize = 1;
}
int nctemp1659=i;
nctempchar1* nctemp1657= MainArgs->a[nctemp1659].arg;
struct nctempchar1 *nctemp1664;
static struct nctempchar1 nctemp1665 = {{ 3}, (char*)"-f\0"};
nctemp1664=&nctemp1665;
nctempchar1* nctemp1662= nctemp1664;
int nctemp1666=LibeStrcmp(nctemp1657,nctemp1662);
int nctemp1654 = (nctemp1666 ==1);
if(nctemp1654)
{
openmp = 1;
}
int nctemp1673=i;
nctempchar1* nctemp1671= MainArgs->a[nctemp1673].arg;
struct nctempchar1 *nctemp1678;
static struct nctempchar1 nctemp1679 = {{ 3}, (char*)"-c\0"};
nctemp1678=&nctemp1679;
nctempchar1* nctemp1676= nctemp1678;
int nctemp1680=LibeStrcmp(nctemp1671,nctemp1676);
int nctemp1668 = (nctemp1680 ==1);
if(nctemp1668)
{
obj = 0;
}
int nctemp1687=i;
nctempchar1* nctemp1685= MainArgs->a[nctemp1687].arg;
struct nctempchar1 *nctemp1692;
static struct nctempchar1 nctemp1693 = {{ 3}, (char*)"-x\0"};
nctemp1692=&nctemp1693;
nctempchar1* nctemp1690= nctemp1692;
int nctemp1694=LibeStrcmp(nctemp1685,nctemp1690);
int nctemp1682 = (nctemp1694 ==1);
if(nctemp1682)
{
int nctemp1699=MainArgs->d[0];int nctemp1696 = (nctemp1699 > i);
if(nctemp1696)
{
int nctemp1714 = i + 1;
int nctemp1709=nctemp1714;
nctempchar1* nctemp1707= MainArgs->a[nctemp1709].arg;
struct nctempchar1 *nctemp1718;
static struct nctempchar1 nctemp1719 = {{ 4}, (char*)"cpu\0"};
nctemp1718=&nctemp1719;
nctempchar1* nctemp1716= nctemp1718;
int nctemp1720=LibeStrcmp(nctemp1707,nctemp1716);
int nctemp1704 = (nctemp1720 ==1);
if(nctemp1704)
{
int nctemp1723= 1;
int nctemp1725=CodeSetarch(nctemp1723);
}
else{
int nctemp1736 = i + 1;
int nctemp1731=nctemp1736;
nctempchar1* nctemp1729= MainArgs->a[nctemp1731].arg;
struct nctempchar1 *nctemp1740;
static struct nctempchar1 nctemp1741 = {{ 5}, (char*)"cuda\0"};
nctemp1740=&nctemp1741;
nctempchar1* nctemp1738= nctemp1740;
int nctemp1742=LibeStrcmp(nctemp1729,nctemp1738);
int nctemp1726 = (nctemp1742 ==1);
if(nctemp1726)
{
int nctemp1745= 2;
int nctemp1747=CodeSetarch(nctemp1745);
}
else{
int nctemp1758 = i + 1;
int nctemp1753=nctemp1758;
nctempchar1* nctemp1751= MainArgs->a[nctemp1753].arg;
struct nctempchar1 *nctemp1762;
static struct nctempchar1 nctemp1763 = {{ 5}, (char*)"gomp\0"};
nctemp1762=&nctemp1763;
nctempchar1* nctemp1760= nctemp1762;
int nctemp1764=LibeStrcmp(nctemp1751,nctemp1760);
int nctemp1748 = (nctemp1764 ==1);
if(nctemp1748)
{
struct nctempchar1 *nctemp1769;
static struct nctempchar1 nctemp1770 = {{ 18}, (char*)"Not implemented\n\0"};
nctemp1769=&nctemp1770;
nctempchar1* nctemp1767= nctemp1769;
int nctemp1771=LibePs(nctemp1767);
int nctemp1773=LibeExit();
int nctemp1777=CodeGetarch();
int nctemp1775= nctemp1777;
int nctemp1778=LibePi(nctemp1775);
struct nctempchar1 *nctemp1782;
static struct nctempchar1 nctemp1783 = {{ 3}, (char*)"\n\0"};
nctemp1782=&nctemp1783;
nctempchar1* nctemp1780= nctemp1782;
int nctemp1784=LibePs(nctemp1780);
}
else{
struct nctempchar1 *nctemp1788;
static struct nctempchar1 nctemp1789 = {{ 23}, (char*)"Illegal option value\n\0"};
nctemp1788=&nctemp1789;
nctempchar1* nctemp1786= nctemp1788;
int nctemp1790=MainError(nctemp1786);
}
}
}
}
else{
int nctemp1792= 1;
int nctemp1794=CodeSetarch(nctemp1792);
}
}
int nctemp1800=i;
nctempchar1* nctemp1798= MainArgs->a[nctemp1800].arg;
struct nctempchar1 *nctemp1805;
static struct nctempchar1 nctemp1806 = {{ 3}, (char*)"-y\0"};
nctemp1805=&nctemp1806;
nctempchar1* nctemp1803= nctemp1805;
int nctemp1807=LibeStrcmp(nctemp1798,nctemp1803);
int nctemp1795 = (nctemp1807 ==1);
if(nctemp1795)
{
int nctemp1812=MainArgs->d[0];int nctemp1809 = (nctemp1812 > i);
if(nctemp1809)
{
int nctemp1829 = i + 1;
int nctemp1824=nctemp1829;
nctempchar1* nctemp1822= MainArgs->a[nctemp1824].arg;
nctempchar1* nctemp1831=LibeStrsave(nctemp1822);
dev=nctemp1831;
}
}
int nctemp1837=i;
nctempchar1* nctemp1835= MainArgs->a[nctemp1837].arg;
struct nctempchar1 *nctemp1842;
static struct nctempchar1 nctemp1843 = {{ 3}, (char*)"-z\0"};
nctemp1842=&nctemp1843;
nctempchar1* nctemp1840= nctemp1842;
int nctemp1844=LibeStrcmp(nctemp1835,nctemp1840);
int nctemp1832 = (nctemp1844 ==1);
if(nctemp1832)
{
python = 1;
}
int nctemp1852=i;
int nctemp1854=0;
char nctemp1857=(char)('-');
int nctemp1849 = (MainArgs->a[nctemp1852].arg->a[nctemp1854] ==nctemp1857);
int nctemp1846 = (nctemp1849 ==1);
if(nctemp1846)
{
options = (options + 1);
}
}
int nctemp1869 = i + 1;
i =nctemp1869;
int nctemp1874=MainArgs->d[0];int nctemp1870 = (i < nctemp1874);
nctemp1449=nctemp1870;
}
int nctemp1884 = (parse ==0);
int nctemp1889 = (semantic ==0);
int nctemp1881 = (nctemp1884 && nctemp1889);
int nctemp1894 = (emit ==0);
int nctemp1878 = (nctemp1881 && nctemp1894);
if(nctemp1878)
{
parse = (semantic = (emit = 1));
}
int nctemp1905 = options + 1;
int nctemp1907=MainArgs->d[0];int nctemp1898 = (nctemp1905 >= nctemp1907);
if(nctemp1898)
{
struct nctempchar1 *nctemp1914;
static struct nctempchar1 nctemp1915 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1914=&nctemp1915;
nctempchar1* nctemp1912= nctemp1914;
int nctemp1916=MainError(nctemp1912);
}
else{
int nctemp1926=MainArgs->d[0];int nctemp1931 = nctemp1926 - 1;
int nctemp1922=nctemp1931;
infile=MainArgs->a[nctemp1922].arg;
}
int nctemp1933 = (emit ==1);
if(nctemp1933)
{
nctempchar1* nctemp1942= infile;
int nctemp1947=CodeGetarch();
int nctemp1945= nctemp1947;
nctempchar1* nctemp1948=MainFout(nctemp1942,nctemp1945);
outfile=nctemp1948;
nctempchar1* nctemp1953= outfile;
struct nctempchar1 *nctemp1958;
static struct nctempchar1 nctemp1959 = {{ 2}, (char*)"w\0"};
nctemp1958=&nctemp1959;
nctempchar1* nctemp1956= nctemp1958;
int nctemp1960=LibeOpen(nctemp1953,nctemp1956);
fd =nctemp1960;
int nctemp1962= fd;
int nctemp1964=CodeSetfdout(nctemp1962);
}
int nctemp1965 = (emit ==1);
if(nctemp1965)
{
nctempchar1* nctemp1974= infile;
nctempchar1* nctemp1977=MainPythonout(nctemp1974);
outfilepy=nctemp1977;
}
int nctemp1978 = (python ==1);
if(nctemp1978)
{
nctempchar1* nctemp1986= outfilepy;
struct nctempchar1 *nctemp1991;
static struct nctempchar1 nctemp1992 = {{ 2}, (char*)"w\0"};
nctemp1991=&nctemp1992;
nctempchar1* nctemp1989= nctemp1991;
int nctemp1993=LibeOpen(nctemp1986,nctemp1989);
fd =nctemp1993;
int nctemp1995= fd;
struct nctempchar1 *nctemp1999;
static struct nctempchar1 nctemp2000 = {{ 23}, (char*)"from ctypes import *\n\0"};
nctemp1999=&nctemp2000;
nctempchar1* nctemp1997= nctemp1999;
int nctemp2001=LibePuts(nctemp1995,nctemp1997);
int nctemp2003= fd;
struct nctempchar1 *nctemp2007;
static struct nctempchar1 nctemp2008 = {{ 21}, (char*)"import numpy as np\n\0"};
nctemp2007=&nctemp2008;
nctempchar1* nctemp2005= nctemp2007;
int nctemp2009=LibePuts(nctemp2003,nctemp2005);
int nctemp2011= fd;
struct nctempchar1 *nctemp2015;
static struct nctempchar1 nctemp2016 = {{ 15}, (char*)"import pyeps\n\0"};
nctemp2015=&nctemp2016;
nctempchar1* nctemp2013= nctemp2015;
int nctemp2017=LibePuts(nctemp2011,nctemp2013);
int nctemp2019= fd;
struct nctempchar1 *nctemp2023;
static struct nctempchar1 nctemp2024 = {{ 16}, (char*)"import config\n\0"};
nctemp2023=&nctemp2024;
nctempchar1* nctemp2021= nctemp2023;
int nctemp2025=LibePuts(nctemp2019,nctemp2021);
int nctemp2027= 1;
int nctemp2029=CodeSetpython(nctemp2027);
int nctemp2031= fd;
int nctemp2033=CodeSetfdpython(nctemp2031);
}
nctempchar1* nctemp2037= infile;
int nctemp2040=ScanInit(nctemp2037);
int nctemp2034 = (nctemp2040 ==0);
if(nctemp2034)
{
int nctemp2043=LibeExit();
}
int nctemp2045= 1;
int nctemp2047=ScanSetline(nctemp2045);
int nctemp2049=ParseIniparse();
int nctemp2050 = (emit ==1);
if(nctemp2050)
{
int nctemp2055=CodePreamble();
}
struct symbol* nctemp2059=SymMktable();
struct symbol* nctemp2057= nctemp2059;
int nctemp2060=SymSetetp(nctemp2057);
int nctemp2061 = (parse ==1);
if(nctemp2061)
{
struct tree* nctemp2069=ParseParse();
p =nctemp2069;
}
int nctemp2070 = (btree ==1);
if(nctemp2070)
{
struct tree* nctemp2075= p;
int nctemp2077= 0;
int nctemp2079=PtreePrtree(nctemp2075,nctemp2077);
}
int nctemp2080 = (p !=0);
int nctemp2084=nctemp2080;
while(nctemp2084)
{{
int nctemp2085 = (semantic ==1);
if(nctemp2085)
{
int nctemp2089 = (p !=0);
if(nctemp2089)
{
struct tree* nctemp2094= p;
struct symbol* nctemp2098=SymGetetp();
struct symbol* nctemp2096= nctemp2098;
int nctemp2099=SemSem(nctemp2094,nctemp2096);
}
int nctemp2100 = (atree ==1);
if(nctemp2100)
{
struct tree* nctemp2105= p;
int nctemp2107= 0;
int nctemp2109=PtreePrtree(nctemp2105,nctemp2107);
}
int nctemp2110 = (table ==1);
if(nctemp2110)
{
struct symbol* nctemp2117=SymGetltp();
int nctemp2114 = (nctemp2117 !=0);
if(nctemp2114)
{
int nctemp2120= 3;
struct symbol* nctemp2124=SymGetltp();
struct symbol* nctemp2122= nctemp2124;
int nctemp2125= 0;
int nctemp2127=SymPrsym(nctemp2120,nctemp2122,nctemp2125);
}
}
}
int nctemp2128 = (emit ==1);
if(nctemp2128)
{
int nctemp2132 = (p !=0);
if(nctemp2132)
{
struct tree* nctemp2137= p;
struct symbol* nctemp2141=SymGetetp();
struct symbol* nctemp2139= nctemp2141;
int nctemp2142=CodeCode(nctemp2137,nctemp2139);
}
}
struct tree* nctemp2144= p;
int nctemp2146=PtreeRmtree(nctemp2144);
struct symbol* nctemp2150=SymGetltp();
struct symbol* nctemp2148= nctemp2150;
int nctemp2151=SymRmtable(nctemp2148);
int nctemp2152 = (parse ==1);
if(nctemp2152)
{
struct tree* nctemp2160=ParseParse();
p =nctemp2160;
int nctemp2161 = (btree ==1);
if(nctemp2161)
{
struct tree* nctemp2166= p;
int nctemp2168= 0;
int nctemp2170=PtreePrtree(nctemp2166,nctemp2168);
}
}
}
int nctemp2171 = (p !=0);
nctemp2084=nctemp2171;}int nctemp2178=ParseGetlookahead();
int nctemp2175 = (nctemp2178 !=19);
if(nctemp2175)
{
struct nctempchar1 *nctemp2183;
static struct nctempchar1 nctemp2184 = {{ 36}, (char*)"Parsing ended before reaching EOF\n\0"};
nctemp2183=&nctemp2184;
nctempchar1* nctemp2181= nctemp2183;
int nctemp2185=MainError(nctemp2181);
}
int nctemp2186 = (etable ==1);
if(nctemp2186)
{
int nctemp2191= 4;
int nctemp2193=LibeFlush(nctemp2191);
struct symbol* nctemp2197=SymGetetp();
int nctemp2194 = (nctemp2197 !=0);
if(nctemp2194)
{
int nctemp2200= 3;
struct symbol* nctemp2204=SymGetetp();
struct symbol* nctemp2202= nctemp2204;
int nctemp2205= 0;
int nctemp2207=SymPrsym(nctemp2200,nctemp2202,nctemp2205);
}
}
int nctemp2208 = (emit ==1);
if(nctemp2208)
{
int nctemp2213=CodePostamble();
}
int nctemp2217 = (emit ==1);
int nctemp2222 = (obj ==1);
int nctemp2214 = (nctemp2217 && nctemp2222);
if(nctemp2214)
{
int nctemp2229=CodeGetarch();
int nctemp2226 = (nctemp2229 ==1);
if(nctemp2226)
{
nctempchar1* nctemp2232= outfile;
int nctemp2235= debug;
int nctemp2237= optimize;
int nctemp2239= openmp;
int nctemp2241= show;
int nctemp2243=MainCcompcpu(nctemp2232,nctemp2235,nctemp2237,nctemp2239,nctemp2241);
}
else{
int nctemp2247=CodeGetarch();
int nctemp2244 = (nctemp2247 ==2);
if(nctemp2244)
{
nctempchar1* nctemp2250= outfile;
int nctemp2253= debug;
int nctemp2255= optimize;
int nctemp2257= openmp;
int nctemp2259= show;
nctempchar1* nctemp2261= dev;
int nctemp2264=MainCcompcuda(nctemp2250,nctemp2253,nctemp2255,nctemp2257,nctemp2259,nctemp2261);
}
else{
int nctemp2268=CodeGetarch();
int nctemp2265 = (nctemp2268 ==4);
if(nctemp2265)
{
nctempchar1* nctemp2271= outfile;
int nctemp2274= debug;
int nctemp2276= optimize;
int nctemp2278= openmp;
int nctemp2280= show;
int nctemp2282=MainCcompgomp(nctemp2271,nctemp2274,nctemp2276,nctemp2278,nctemp2280);
}
else{
int nctemp2286=CodeGetarch();
int nctemp2283 = (nctemp2286 ==3);
if(nctemp2283)
{
nctempchar1* nctemp2289= outfile;
int nctemp2292= debug;
int nctemp2294= optimize;
int nctemp2296= openmp;
int nctemp2298= show;
int nctemp2300=MainCcomphip(nctemp2289,nctemp2292,nctemp2294,nctemp2296,nctemp2298);
}
else{
struct nctempchar1 *nctemp2304;
static struct nctempchar1 nctemp2305 = {{ 23}, (char*)"Unknown architecture\n\0"};
nctemp2304=&nctemp2305;
nctempchar1* nctemp2302= nctemp2304;
int nctemp2306=MainError(nctemp2302);
}
}
}
}
}
int nctemp2307 = (emit ==1);
if(nctemp2307)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp2315= fd;
int nctemp2317=LibeClose(nctemp2315);
}
nctempchar1* nctemp2324= infile;
nctempchar1* nctemp2327=MainFmod(nctemp2324);
nctempchar1* nctemp2322= nctemp2327;
struct nctempchar1 *nctemp2330;
static struct nctempchar1 nctemp2331 = {{ 2}, (char*)"w\0"};
nctemp2330=&nctemp2331;
nctempchar1* nctemp2328= nctemp2330;
int nctemp2332=LibeOpen(nctemp2322,nctemp2328);
fd =nctemp2332;
int nctemp2334= fd;
struct symbol* nctemp2338=SymGetetp();
struct symbol* nctemp2336= nctemp2338;
int nctemp2339= 0;
int nctemp2341=SymExport(nctemp2334,nctemp2336,nctemp2339);
int nctemp2343= 3;
int nctemp2345=LibeFlush(nctemp2343);
return 1;
}
