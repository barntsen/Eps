//  Translated by epsc  version: Mon Feb  2 14:03:07 2026

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
struct nctempchar1 *nctemp473;
static struct nctempchar1 nctemp474 = {{ 22}, (char*)"Unknow architecture\n\0"};
nctemp473=&nctemp474;
nctempchar1* nctemp471= nctemp473;
int nctemp475=MainError(nctemp471);
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp482=infile->d[0];l =nctemp482;
int nctemp486 = (l < 3);
if(nctemp486)
{
struct nctempchar1 *nctemp493;
static struct nctempchar1 nctemp494 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp493=&nctemp494;
nctempchar1* nctemp491= nctemp493;
int nctemp495=MainError(nctemp491);
}
int nctemp504 = l - 2;
int nctemp499=nctemp504;
char nctemp506=(char)('e');
int nctemp496 = (infile->a[nctemp499] !=nctemp506);
if(nctemp496)
{
struct nctempchar1 *nctemp512;
static struct nctempchar1 nctemp513 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp512=&nctemp513;
nctempchar1* nctemp510= nctemp512;
int nctemp514=MainError(nctemp510);
}
int nctemp521=l;
nctempchar1 *nctemp520;
nctemp520=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp520->d[0]=l;
nctemp520->a=(char *)RunMalloc(sizeof(char)*nctemp521);
outfile=nctemp520;
nctempchar1* nctemp525= infile;
nctempchar1* nctemp528= outfile;
int nctemp531=LibeStrcpy(nctemp525,nctemp528);
int nctemp540 = l - 2;
int nctemp535=nctemp540;
char nctemp542=(char)('m');
outfile->a[nctemp535] =nctemp542;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp552;
static struct nctempchar1 nctemp553 = {{ 25}, (char*)"gcc -c -ffast-math -fPIC\0"};
nctemp552=&nctemp553;
cmd=nctemp552;
int nctemp554 = (debug ==1);
if(nctemp554)
{
nctempchar1* nctemp563= cmd;
struct nctempchar1 *nctemp568;
static struct nctempchar1 nctemp569 = {{ 5}, (char*)" -g \0"};
nctemp568=&nctemp569;
nctempchar1* nctemp566= nctemp568;
nctempchar1* nctemp570=LibeStradd(nctemp563,nctemp566);
cmd=nctemp570;
}
int nctemp571 = (optimize ==1);
if(nctemp571)
{
nctempchar1* nctemp580= cmd;
struct nctempchar1 *nctemp585;
static struct nctempchar1 nctemp586 = {{ 6}, (char*)" -O3 \0"};
nctemp585=&nctemp586;
nctempchar1* nctemp583= nctemp585;
nctempchar1* nctemp587=LibeStradd(nctemp580,nctemp583);
cmd=nctemp587;
}
else{
nctempchar1* nctemp593= cmd;
struct nctempchar1 *nctemp598;
static struct nctempchar1 nctemp599 = {{ 6}, (char*)" -O2 \0"};
nctemp598=&nctemp599;
nctempchar1* nctemp596= nctemp598;
nctempchar1* nctemp600=LibeStradd(nctemp593,nctemp596);
cmd=nctemp600;
}
int nctemp601 = (openmp ==1);
if(nctemp601)
{
nctempchar1* nctemp610= cmd;
struct nctempchar1 *nctemp615;
static struct nctempchar1 nctemp616 = {{ 11}, (char*)" -fopenmp \0"};
nctemp615=&nctemp616;
nctempchar1* nctemp613= nctemp615;
nctempchar1* nctemp617=LibeStradd(nctemp610,nctemp613);
cmd=nctemp617;
}
nctempchar1* nctemp623= cmd;
nctempchar1* nctemp626= file;
nctempchar1* nctemp629=LibeStradd(nctemp623,nctemp626);
cmd=nctemp629;
tmp = cmd;
nctempchar1* nctemp635= tmp;
struct nctempchar1 *nctemp640;
static struct nctempchar1 nctemp641 = {{ 3}, (char*)"\n\0"};
nctemp640=&nctemp641;
nctempchar1* nctemp638= nctemp640;
nctempchar1* nctemp642=LibeStradd(nctemp635,nctemp638);
cmd=nctemp642;
RunFree(tmp->a);
RunFree(tmp);
int nctemp646 = (show ==1);
if(nctemp646)
{
int nctemp651= 4;
nctempchar1* nctemp653= cmd;
int nctemp656=LibePuts(nctemp651,nctemp653);
int nctemp658= 4;
int nctemp660=LibeFlush(nctemp658);
}
nctempchar1* nctemp662= cmd;
int nctemp665=LibeSystem(nctemp662);
struct nctempchar1 *nctemp673;
static struct nctempchar1 nctemp674 = {{ 4}, (char*)"rm \0"};
nctemp673=&nctemp674;
nctempchar1* nctemp671= nctemp673;
nctempchar1* nctemp675= file;
nctempchar1* nctemp678=LibeStradd(nctemp671,nctemp675);
cmd=nctemp678;
tmp = cmd;
nctempchar1* nctemp684= cmd;
struct nctempchar1 *nctemp689;
static struct nctempchar1 nctemp690 = {{ 3}, (char*)"\n\0"};
nctemp689=&nctemp690;
nctempchar1* nctemp687= nctemp689;
nctempchar1* nctemp691=LibeStradd(nctemp684,nctemp687);
cmd=nctemp691;
RunFree(tmp->a);
RunFree(tmp);
int nctemp695 = (show ==1);
if(nctemp695)
{
int nctemp700= 4;
nctempchar1* nctemp702= cmd;
int nctemp705=LibePuts(nctemp700,nctemp702);
int nctemp707= 4;
int nctemp709=LibeFlush(nctemp707);
}
nctempchar1* nctemp711= cmd;
int nctemp714=LibeSystem(nctemp711);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show,nctempchar1 *dev)
{
int l;
nctempchar1 *cmd;
nctempchar1 *tmp;
int nctemp723=file->d[0];l =nctemp723;
struct nctempchar1 *nctemp732;
static struct nctempchar1 nctemp733 = {{ 45}, (char*)"nvcc  -use_fast_math --compiler-options -O2 \0"};
nctemp732=&nctemp733;
cmd=nctemp732;
nctempchar1* nctemp737= dev;
struct nctempchar1 *nctemp742;
static struct nctempchar1 nctemp743 = {{ 5}, (char*)"none\0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
int nctemp744=LibeStrcmp(nctemp737,nctemp740);
int nctemp734 = (nctemp744 !=1);
if(nctemp734)
{
nctempchar1* nctemp751= cmd;
struct nctempchar1 *nctemp756;
static struct nctempchar1 nctemp757 = {{ 8}, (char*)" -arch \0"};
nctemp756=&nctemp757;
nctempchar1* nctemp754= nctemp756;
nctempchar1* nctemp758=LibeStradd(nctemp751,nctemp754);
cmd=nctemp758;
nctempchar1* nctemp764= cmd;
nctempchar1* nctemp767= dev;
nctempchar1* nctemp770=LibeStradd(nctemp764,nctemp767);
cmd=nctemp770;
nctempchar1* nctemp776= cmd;
struct nctempchar1 *nctemp781;
static struct nctempchar1 nctemp782 = {{ 2}, (char*)" \0"};
nctemp781=&nctemp782;
nctempchar1* nctemp779= nctemp781;
nctempchar1* nctemp783=LibeStradd(nctemp776,nctemp779);
cmd=nctemp783;
}
nctempchar1* nctemp789= cmd;
struct nctempchar1 *nctemp794;
static struct nctempchar1 nctemp795 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp794=&nctemp795;
nctempchar1* nctemp792= nctemp794;
nctempchar1* nctemp796=LibeStradd(nctemp789,nctemp792);
cmd=nctemp796;
int nctemp797 = (debug ==1);
if(nctemp797)
{
nctempchar1* nctemp806= cmd;
struct nctempchar1 *nctemp811;
static struct nctempchar1 nctemp812 = {{ 5}, (char*)" -g \0"};
nctemp811=&nctemp812;
nctempchar1* nctemp809= nctemp811;
nctempchar1* nctemp813=LibeStradd(nctemp806,nctemp809);
cmd=nctemp813;
}
int nctemp814 = (optimize ==1);
if(nctemp814)
{
nctempchar1* nctemp823= cmd;
struct nctempchar1 *nctemp828;
static struct nctempchar1 nctemp829 = {{ 6}, (char*)" -O3 \0"};
nctemp828=&nctemp829;
nctempchar1* nctemp826= nctemp828;
nctempchar1* nctemp830=LibeStradd(nctemp823,nctemp826);
cmd=nctemp830;
}
else{
nctempchar1* nctemp836= cmd;
struct nctempchar1 *nctemp841;
static struct nctempchar1 nctemp842 = {{ 6}, (char*)" -O2 \0"};
nctemp841=&nctemp842;
nctempchar1* nctemp839= nctemp841;
nctempchar1* nctemp843=LibeStradd(nctemp836,nctemp839);
cmd=nctemp843;
}
int nctemp844 = (openmp ==1);
if(nctemp844)
{
nctempchar1* nctemp853= cmd;
struct nctempchar1 *nctemp858;
static struct nctempchar1 nctemp859 = {{ 11}, (char*)" -fopenmp \0"};
nctemp858=&nctemp859;
nctempchar1* nctemp856= nctemp858;
nctempchar1* nctemp860=LibeStradd(nctemp853,nctemp856);
cmd=nctemp860;
}
nctempchar1* nctemp866= cmd;
nctempchar1* nctemp869= file;
nctempchar1* nctemp872=LibeStradd(nctemp866,nctemp869);
cmd=nctemp872;
tmp = cmd;
nctempchar1* nctemp878= cmd;
struct nctempchar1 *nctemp883;
static struct nctempchar1 nctemp884 = {{ 3}, (char*)"\n\0"};
nctemp883=&nctemp884;
nctempchar1* nctemp881= nctemp883;
nctempchar1* nctemp885=LibeStradd(nctemp878,nctemp881);
cmd=nctemp885;
RunFree(tmp->a);
RunFree(tmp);
int nctemp889 = (show ==1);
if(nctemp889)
{
int nctemp894= 4;
nctempchar1* nctemp896= cmd;
int nctemp899=LibePuts(nctemp894,nctemp896);
int nctemp901= 4;
int nctemp903=LibeFlush(nctemp901);
}
nctempchar1* nctemp905= cmd;
int nctemp908=LibeSystem(nctemp905);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp927;
static struct nctempchar1 nctemp928 = {{ 4}, (char*)"rm \0"};
nctemp927=&nctemp928;
int nctemp925=nctemp927->d[0];int nctemp931 = nctemp925 + l;
int nctemp933 = nctemp931 + 2;
int nctemp918=nctemp933;
nctempchar1 *nctemp917;
nctemp917=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp942;
static struct nctempchar1 nctemp943 = {{ 4}, (char*)"rm \0"};
nctemp942=&nctemp943;
int nctemp940=nctemp942->d[0];int nctemp946 = nctemp940 + l;
int nctemp948 = nctemp946 + 2;
nctemp917->d[0]=nctemp948;
nctemp917->a=(char *)RunMalloc(sizeof(char)*nctemp918);
cmd=nctemp917;
struct nctempchar1 *nctemp956;
static struct nctempchar1 nctemp957 = {{ 4}, (char*)"rm \0"};
nctemp956=&nctemp957;
nctempchar1* nctemp954= nctemp956;
nctempchar1* nctemp958= file;
nctempchar1* nctemp961=LibeStradd(nctemp954,nctemp958);
cmd=nctemp961;
tmp = cmd;
nctempchar1* nctemp967= cmd;
struct nctempchar1 *nctemp972;
static struct nctempchar1 nctemp973 = {{ 3}, (char*)"\n\0"};
nctemp972=&nctemp973;
nctempchar1* nctemp970= nctemp972;
nctempchar1* nctemp974=LibeStradd(nctemp967,nctemp970);
cmd=nctemp974;
int nctemp975 = (show ==1);
if(nctemp975)
{
int nctemp980= 4;
nctempchar1* nctemp982= cmd;
int nctemp985=LibePuts(nctemp980,nctemp982);
int nctemp987= 4;
int nctemp989=LibeFlush(nctemp987);
}
nctempchar1* nctemp991= cmd;
int nctemp994=LibeSystem(nctemp991);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
int l;
nctempchar1 *tmp;
nctempchar1 *cmd;
int nctemp1003=file->d[0];l =nctemp1003;
struct nctempchar1 *nctemp1012;
static struct nctempchar1 nctemp1013 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1012=&nctemp1013;
tmp=nctemp1012;
int nctemp1020=160;
nctempchar1 *nctemp1019;
nctemp1019=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1019->d[0]=160;
nctemp1019->a=(char *)RunMalloc(sizeof(char)*nctemp1020);
cmd=nctemp1019;
nctempchar1* nctemp1024= tmp;
nctempchar1* nctemp1027= cmd;
int nctemp1030=LibeStrcpy(nctemp1024,nctemp1027);
int nctemp1031 = (debug ==1);
if(nctemp1031)
{
struct nctempchar1 *nctemp1038;
static struct nctempchar1 nctemp1039 = {{ 5}, (char*)" -g \0"};
nctemp1038=&nctemp1039;
nctempchar1* nctemp1036= nctemp1038;
nctempchar1* nctemp1040= cmd;
int nctemp1043=LibeStrcat(nctemp1036,nctemp1040);
}
int nctemp1044 = (optimize ==1);
if(nctemp1044)
{
struct nctempchar1 *nctemp1051;
static struct nctempchar1 nctemp1052 = {{ 6}, (char*)" -O3 \0"};
nctemp1051=&nctemp1052;
nctempchar1* nctemp1049= nctemp1051;
nctempchar1* nctemp1053= cmd;
int nctemp1056=LibeStrcat(nctemp1049,nctemp1053);
}
int nctemp1057 = (openmp ==1);
if(nctemp1057)
{
struct nctempchar1 *nctemp1064;
static struct nctempchar1 nctemp1065 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1064=&nctemp1065;
nctempchar1* nctemp1062= nctemp1064;
nctempchar1* nctemp1066= cmd;
int nctemp1069=LibeStrcat(nctemp1062,nctemp1066);
}
nctempchar1* nctemp1071= file;
nctempchar1* nctemp1074= cmd;
int nctemp1077=LibeStrcat(nctemp1071,nctemp1074);
struct nctempchar1 *nctemp1081;
static struct nctempchar1 nctemp1082 = {{ 3}, (char*)"\n\0"};
nctemp1081=&nctemp1082;
nctempchar1* nctemp1079= nctemp1081;
nctempchar1* nctemp1083= cmd;
int nctemp1086=LibeStrcat(nctemp1079,nctemp1083);
int nctemp1087 = (show ==1);
if(nctemp1087)
{
int nctemp1092= 4;
nctempchar1* nctemp1094= cmd;
int nctemp1097=LibePuts(nctemp1092,nctemp1094);
int nctemp1099= 4;
int nctemp1101=LibeFlush(nctemp1099);
}
nctempchar1* nctemp1103= cmd;
int nctemp1106=LibeSystem(nctemp1103);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1125;
static struct nctempchar1 nctemp1126 = {{ 4}, (char*)"rm \0"};
nctemp1125=&nctemp1126;
int nctemp1123=nctemp1125->d[0];int nctemp1129 = nctemp1123 + l;
int nctemp1131 = nctemp1129 + 2;
int nctemp1116=nctemp1131;
nctempchar1 *nctemp1115;
nctemp1115=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1140;
static struct nctempchar1 nctemp1141 = {{ 4}, (char*)"rm \0"};
nctemp1140=&nctemp1141;
int nctemp1138=nctemp1140->d[0];int nctemp1144 = nctemp1138 + l;
int nctemp1146 = nctemp1144 + 2;
nctemp1115->d[0]=nctemp1146;
nctemp1115->a=(char *)RunMalloc(sizeof(char)*nctemp1116);
cmd=nctemp1115;
struct nctempchar1 *nctemp1150;
static struct nctempchar1 nctemp1151 = {{ 4}, (char*)"rm \0"};
nctemp1150=&nctemp1151;
nctempchar1* nctemp1148= nctemp1150;
nctempchar1* nctemp1152= cmd;
int nctemp1155=LibeStrcpy(nctemp1148,nctemp1152);
nctempchar1* nctemp1157= file;
nctempchar1* nctemp1160= cmd;
int nctemp1163=LibeStrcat(nctemp1157,nctemp1160);
struct nctempchar1 *nctemp1167;
static struct nctempchar1 nctemp1168 = {{ 3}, (char*)"\n\0"};
nctemp1167=&nctemp1168;
nctempchar1* nctemp1165= nctemp1167;
nctempchar1* nctemp1169= cmd;
int nctemp1172=LibeStrcat(nctemp1165,nctemp1169);
int nctemp1173 = (show ==1);
if(nctemp1173)
{
int nctemp1178= 4;
nctempchar1* nctemp1180= cmd;
int nctemp1183=LibePuts(nctemp1178,nctemp1180);
int nctemp1185= 4;
int nctemp1187=LibeFlush(nctemp1185);
}
nctempchar1* nctemp1189= cmd;
int nctemp1192=LibeSystem(nctemp1189);
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
int nctemp1198=LibeInit();
struct nctempchar1 *nctemp1206;
static struct nctempchar1 nctemp1207 = {{ 5}, (char*)"none\0"};
nctemp1206=&nctemp1207;
nctempchar1* nctemp1204= nctemp1206;
nctempchar1* nctemp1208=LibeStrsave(nctemp1204);
dev=nctemp1208;
show = (debug = (optimize = (openmp = 0)));
btree = (atree = (table = (etable = (emit = 0))));
parse = (semantic = 0);
obj = 1;
options = 0;
python = 0;
int nctemp1210=PtreeInit();
int nctemp1212=CodeInit();
int nctemp1214=CodeArraycheckoff();
int nctemp1216=CodeDebugoff();
int nctemp1218= 1;
int nctemp1220=CodeSetarch(nctemp1218);
int nctemp1225=MainArgs->d[0];l =nctemp1225;
int nctemp1229 = (l <= 1);
if(nctemp1229)
{
struct nctempchar1 *nctemp1236;
static struct nctempchar1 nctemp1237 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1236=&nctemp1237;
nctempchar1* nctemp1234= nctemp1236;
int nctemp1238=MainError(nctemp1234);
}
i =1;
int nctemp1247=MainArgs->d[0];int nctemp1243 = (i < nctemp1247);
while(nctemp1243){
{
int nctemp1256=i;
nctempchar1* nctemp1254= MainArgs->a[nctemp1256].arg;
struct nctempchar1 *nctemp1261;
static struct nctempchar1 nctemp1262 = {{ 3}, (char*)"-h\0"};
nctemp1261=&nctemp1262;
nctempchar1* nctemp1259= nctemp1261;
int nctemp1263=LibeStrcmp(nctemp1254,nctemp1259);
int nctemp1251 = (nctemp1263 ==1);
if(nctemp1251)
{
int nctemp1268=CodeGetarch();
int nctemp1266= nctemp1268;
int nctemp1269=MainHelp(nctemp1266);
int nctemp1271=LibeExit();
}
int nctemp1277=i;
nctempchar1* nctemp1275= MainArgs->a[nctemp1277].arg;
struct nctempchar1 *nctemp1282;
static struct nctempchar1 nctemp1283 = {{ 3}, (char*)"-t\0"};
nctemp1282=&nctemp1283;
nctempchar1* nctemp1280= nctemp1282;
int nctemp1284=LibeStrcmp(nctemp1275,nctemp1280);
int nctemp1272 = (nctemp1284 ==1);
if(nctemp1272)
{
btree = 1;
parse = 1;
}
int nctemp1291=i;
nctempchar1* nctemp1289= MainArgs->a[nctemp1291].arg;
struct nctempchar1 *nctemp1296;
static struct nctempchar1 nctemp1297 = {{ 3}, (char*)"-a\0"};
nctemp1296=&nctemp1297;
nctempchar1* nctemp1294= nctemp1296;
int nctemp1298=LibeStrcmp(nctemp1289,nctemp1294);
int nctemp1286 = (nctemp1298 ==1);
if(nctemp1286)
{
atree = 1;
semantic = 1;
parse = 1;
}
int nctemp1305=i;
nctempchar1* nctemp1303= MainArgs->a[nctemp1305].arg;
struct nctempchar1 *nctemp1310;
static struct nctempchar1 nctemp1311 = {{ 3}, (char*)"-s\0"};
nctemp1310=&nctemp1311;
nctempchar1* nctemp1308= nctemp1310;
int nctemp1312=LibeStrcmp(nctemp1303,nctemp1308);
int nctemp1300 = (nctemp1312 ==1);
if(nctemp1300)
{
table = 1;
parse = 1;
semantic = 1;
}
int nctemp1319=i;
nctempchar1* nctemp1317= MainArgs->a[nctemp1319].arg;
struct nctempchar1 *nctemp1324;
static struct nctempchar1 nctemp1325 = {{ 3}, (char*)"-r\0"};
nctemp1324=&nctemp1325;
nctempchar1* nctemp1322= nctemp1324;
int nctemp1326=LibeStrcmp(nctemp1317,nctemp1322);
int nctemp1314 = (nctemp1326 ==1);
if(nctemp1314)
{
etable = 1;
parse = 1;
semantic = 1;
}
int nctemp1333=i;
nctempchar1* nctemp1331= MainArgs->a[nctemp1333].arg;
struct nctempchar1 *nctemp1338;
static struct nctempchar1 nctemp1339 = {{ 3}, (char*)"-e\0"};
nctemp1338=&nctemp1339;
nctempchar1* nctemp1336= nctemp1338;
int nctemp1340=LibeStrcmp(nctemp1331,nctemp1336);
int nctemp1328 = (nctemp1340 ==1);
if(nctemp1328)
{
emit = 1;
parse = 1;
semantic = 1;
}
int nctemp1347=i;
nctempchar1* nctemp1345= MainArgs->a[nctemp1347].arg;
struct nctempchar1 *nctemp1352;
static struct nctempchar1 nctemp1353 = {{ 3}, (char*)"-p\0"};
nctemp1352=&nctemp1353;
nctempchar1* nctemp1350= nctemp1352;
int nctemp1354=LibeStrcmp(nctemp1345,nctemp1350);
int nctemp1342 = (nctemp1354 ==1);
if(nctemp1342)
{
parse = 1;
}
int nctemp1361=i;
nctempchar1* nctemp1359= MainArgs->a[nctemp1361].arg;
struct nctempchar1 *nctemp1366;
static struct nctempchar1 nctemp1367 = {{ 3}, (char*)"-q\0"};
nctemp1366=&nctemp1367;
nctempchar1* nctemp1364= nctemp1366;
int nctemp1368=LibeStrcmp(nctemp1359,nctemp1364);
int nctemp1356 = (nctemp1368 ==1);
if(nctemp1356)
{
semantic = 1;
parse = 1;
}
int nctemp1375=i;
nctempchar1* nctemp1373= MainArgs->a[nctemp1375].arg;
struct nctempchar1 *nctemp1380;
static struct nctempchar1 nctemp1381 = {{ 3}, (char*)"-C\0"};
nctemp1380=&nctemp1381;
nctempchar1* nctemp1378= nctemp1380;
int nctemp1382=LibeStrcmp(nctemp1373,nctemp1378);
int nctemp1370 = (nctemp1382 ==1);
if(nctemp1370)
{
int nctemp1385=CodeArraycheckon();
int nctemp1387=CodeBreakon();
}
int nctemp1393=i;
nctempchar1* nctemp1391= MainArgs->a[nctemp1393].arg;
struct nctempchar1 *nctemp1398;
static struct nctempchar1 nctemp1399 = {{ 3}, (char*)"-i\0"};
nctemp1398=&nctemp1399;
nctempchar1* nctemp1396= nctemp1398;
int nctemp1400=LibeStrcmp(nctemp1391,nctemp1396);
int nctemp1388 = (nctemp1400 ==1);
if(nctemp1388)
{
int nctemp1403=CodeBreakon();
}
int nctemp1409=i;
nctempchar1* nctemp1407= MainArgs->a[nctemp1409].arg;
struct nctempchar1 *nctemp1414;
static struct nctempchar1 nctemp1415 = {{ 3}, (char*)"-g\0"};
nctemp1414=&nctemp1415;
nctempchar1* nctemp1412= nctemp1414;
int nctemp1416=LibeStrcmp(nctemp1407,nctemp1412);
int nctemp1404 = (nctemp1416 ==1);
if(nctemp1404)
{
debug = 1;
int nctemp1419=CodeDebugon();
}
int nctemp1425=i;
nctempchar1* nctemp1423= MainArgs->a[nctemp1425].arg;
struct nctempchar1 *nctemp1430;
static struct nctempchar1 nctemp1431 = {{ 3}, (char*)"-d\0"};
nctemp1430=&nctemp1431;
nctempchar1* nctemp1428= nctemp1430;
int nctemp1432=LibeStrcmp(nctemp1423,nctemp1428);
int nctemp1420 = (nctemp1432 ==1);
if(nctemp1420)
{
show = 1;
}
int nctemp1439=i;
nctempchar1* nctemp1437= MainArgs->a[nctemp1439].arg;
struct nctempchar1 *nctemp1444;
static struct nctempchar1 nctemp1445 = {{ 3}, (char*)"-O\0"};
nctemp1444=&nctemp1445;
nctempchar1* nctemp1442= nctemp1444;
int nctemp1446=LibeStrcmp(nctemp1437,nctemp1442);
int nctemp1434 = (nctemp1446 ==1);
if(nctemp1434)
{
optimize = 1;
}
int nctemp1453=i;
nctempchar1* nctemp1451= MainArgs->a[nctemp1453].arg;
struct nctempchar1 *nctemp1458;
static struct nctempchar1 nctemp1459 = {{ 3}, (char*)"-f\0"};
nctemp1458=&nctemp1459;
nctempchar1* nctemp1456= nctemp1458;
int nctemp1460=LibeStrcmp(nctemp1451,nctemp1456);
int nctemp1448 = (nctemp1460 ==1);
if(nctemp1448)
{
openmp = 1;
}
int nctemp1467=i;
nctempchar1* nctemp1465= MainArgs->a[nctemp1467].arg;
struct nctempchar1 *nctemp1472;
static struct nctempchar1 nctemp1473 = {{ 3}, (char*)"-c\0"};
nctemp1472=&nctemp1473;
nctempchar1* nctemp1470= nctemp1472;
int nctemp1474=LibeStrcmp(nctemp1465,nctemp1470);
int nctemp1462 = (nctemp1474 ==1);
if(nctemp1462)
{
obj = 0;
}
int nctemp1481=i;
nctempchar1* nctemp1479= MainArgs->a[nctemp1481].arg;
struct nctempchar1 *nctemp1486;
static struct nctempchar1 nctemp1487 = {{ 3}, (char*)"-x\0"};
nctemp1486=&nctemp1487;
nctempchar1* nctemp1484= nctemp1486;
int nctemp1488=LibeStrcmp(nctemp1479,nctemp1484);
int nctemp1476 = (nctemp1488 ==1);
if(nctemp1476)
{
int nctemp1493=MainArgs->d[0];int nctemp1490 = (nctemp1493 > i);
if(nctemp1490)
{
int nctemp1508 = i + 1;
int nctemp1503=nctemp1508;
nctempchar1* nctemp1501= MainArgs->a[nctemp1503].arg;
struct nctempchar1 *nctemp1512;
static struct nctempchar1 nctemp1513 = {{ 4}, (char*)"cpu\0"};
nctemp1512=&nctemp1513;
nctempchar1* nctemp1510= nctemp1512;
int nctemp1514=LibeStrcmp(nctemp1501,nctemp1510);
int nctemp1498 = (nctemp1514 ==1);
if(nctemp1498)
{
int nctemp1517= 1;
int nctemp1519=CodeSetarch(nctemp1517);
}
else{
int nctemp1530 = i + 1;
int nctemp1525=nctemp1530;
nctempchar1* nctemp1523= MainArgs->a[nctemp1525].arg;
struct nctempchar1 *nctemp1534;
static struct nctempchar1 nctemp1535 = {{ 5}, (char*)"cuda\0"};
nctemp1534=&nctemp1535;
nctempchar1* nctemp1532= nctemp1534;
int nctemp1536=LibeStrcmp(nctemp1523,nctemp1532);
int nctemp1520 = (nctemp1536 ==1);
if(nctemp1520)
{
int nctemp1539= 2;
int nctemp1541=CodeSetarch(nctemp1539);
}
else{
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 23}, (char*)"Illegal option value\n\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=MainError(nctemp1543);
}
}
}
else{
int nctemp1549= 1;
int nctemp1551=CodeSetarch(nctemp1549);
}
}
int nctemp1557=i;
nctempchar1* nctemp1555= MainArgs->a[nctemp1557].arg;
struct nctempchar1 *nctemp1562;
static struct nctempchar1 nctemp1563 = {{ 3}, (char*)"-y\0"};
nctemp1562=&nctemp1563;
nctempchar1* nctemp1560= nctemp1562;
int nctemp1564=LibeStrcmp(nctemp1555,nctemp1560);
int nctemp1552 = (nctemp1564 ==1);
if(nctemp1552)
{
int nctemp1569=MainArgs->d[0];int nctemp1566 = (nctemp1569 > i);
if(nctemp1566)
{
int nctemp1586 = i + 1;
int nctemp1581=nctemp1586;
nctempchar1* nctemp1579= MainArgs->a[nctemp1581].arg;
nctempchar1* nctemp1588=LibeStrsave(nctemp1579);
dev=nctemp1588;
}
}
int nctemp1594=i;
nctempchar1* nctemp1592= MainArgs->a[nctemp1594].arg;
struct nctempchar1 *nctemp1599;
static struct nctempchar1 nctemp1600 = {{ 3}, (char*)"-z\0"};
nctemp1599=&nctemp1600;
nctempchar1* nctemp1597= nctemp1599;
int nctemp1601=LibeStrcmp(nctemp1592,nctemp1597);
int nctemp1589 = (nctemp1601 ==1);
if(nctemp1589)
{
python = 1;
}
int nctemp1609=i;
int nctemp1611=0;
char nctemp1614=(char)('-');
int nctemp1606 = (MainArgs->a[nctemp1609].arg->a[nctemp1611] ==nctemp1614);
int nctemp1603 = (nctemp1606 ==1);
if(nctemp1603)
{
options = (options + 1);
}
}
int nctemp1626 = i + 1;
i =nctemp1626;
int nctemp1631=MainArgs->d[0];int nctemp1627 = (i < nctemp1631);
nctemp1243=nctemp1627;
}
int nctemp1641 = (parse ==0);
int nctemp1646 = (semantic ==0);
int nctemp1638 = (nctemp1641 && nctemp1646);
int nctemp1651 = (emit ==0);
int nctemp1635 = (nctemp1638 && nctemp1651);
if(nctemp1635)
{
parse = (semantic = (emit = 1));
}
int nctemp1662 = options + 1;
int nctemp1664=MainArgs->d[0];int nctemp1655 = (nctemp1662 >= nctemp1664);
if(nctemp1655)
{
struct nctempchar1 *nctemp1671;
static struct nctempchar1 nctemp1672 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1671=&nctemp1672;
nctempchar1* nctemp1669= nctemp1671;
int nctemp1673=MainError(nctemp1669);
}
else{
int nctemp1683=MainArgs->d[0];int nctemp1688 = nctemp1683 - 1;
int nctemp1679=nctemp1688;
infile=MainArgs->a[nctemp1679].arg;
}
int nctemp1690 = (emit ==1);
if(nctemp1690)
{
nctempchar1* nctemp1699= infile;
int nctemp1704=CodeGetarch();
int nctemp1702= nctemp1704;
nctempchar1* nctemp1705=MainFout(nctemp1699,nctemp1702);
outfile=nctemp1705;
nctempchar1* nctemp1710= outfile;
struct nctempchar1 *nctemp1715;
static struct nctempchar1 nctemp1716 = {{ 2}, (char*)"w\0"};
nctemp1715=&nctemp1716;
nctempchar1* nctemp1713= nctemp1715;
int nctemp1717=LibeOpen(nctemp1710,nctemp1713);
fd =nctemp1717;
int nctemp1719= fd;
int nctemp1721=CodeSetfdout(nctemp1719);
}
int nctemp1722 = (emit ==1);
if(nctemp1722)
{
nctempchar1* nctemp1731= infile;
nctempchar1* nctemp1734=MainPythonout(nctemp1731);
outfilepy=nctemp1734;
}
int nctemp1735 = (python ==1);
if(nctemp1735)
{
nctempchar1* nctemp1743= outfilepy;
struct nctempchar1 *nctemp1748;
static struct nctempchar1 nctemp1749 = {{ 2}, (char*)"w\0"};
nctemp1748=&nctemp1749;
nctempchar1* nctemp1746= nctemp1748;
int nctemp1750=LibeOpen(nctemp1743,nctemp1746);
fd =nctemp1750;
int nctemp1752= fd;
struct nctempchar1 *nctemp1756;
static struct nctempchar1 nctemp1757 = {{ 15}, (char*)"import pyeps\n\0"};
nctemp1756=&nctemp1757;
nctempchar1* nctemp1754= nctemp1756;
int nctemp1758=LibePuts(nctemp1752,nctemp1754);
int nctemp1760= fd;
struct nctempchar1 *nctemp1764;
static struct nctempchar1 nctemp1765 = {{ 23}, (char*)"from ctypes import *\n\0"};
nctemp1764=&nctemp1765;
nctempchar1* nctemp1762= nctemp1764;
int nctemp1766=LibePuts(nctemp1760,nctemp1762);
int nctemp1768= fd;
struct nctempchar1 *nctemp1772;
static struct nctempchar1 nctemp1773 = {{ 21}, (char*)"import numpy as np\n\0"};
nctemp1772=&nctemp1773;
nctempchar1* nctemp1770= nctemp1772;
int nctemp1774=LibePuts(nctemp1768,nctemp1770);
int nctemp1776= 1;
int nctemp1778=CodeSetpython(nctemp1776);
int nctemp1780= fd;
int nctemp1782=CodeSetfdpython(nctemp1780);
}
nctempchar1* nctemp1786= infile;
int nctemp1789=ScanInit(nctemp1786);
int nctemp1783 = (nctemp1789 ==0);
if(nctemp1783)
{
int nctemp1792=LibeExit();
}
int nctemp1794= 1;
int nctemp1796=ScanSetline(nctemp1794);
int nctemp1798=ParseIniparse();
int nctemp1799 = (emit ==1);
if(nctemp1799)
{
int nctemp1804=CodePreamble();
}
struct symbol* nctemp1808=SymMktable();
struct symbol* nctemp1806= nctemp1808;
int nctemp1809=SymSetetp(nctemp1806);
int nctemp1810 = (parse ==1);
if(nctemp1810)
{
struct tree* nctemp1818=ParseParse();
p =nctemp1818;
}
int nctemp1819 = (btree ==1);
if(nctemp1819)
{
struct tree* nctemp1824= p;
int nctemp1826= 0;
int nctemp1828=PtreePrtree(nctemp1824,nctemp1826);
}
int nctemp1829 = (p !=0);
int nctemp1833=nctemp1829;
while(nctemp1833)
{{
int nctemp1834 = (semantic ==1);
if(nctemp1834)
{
int nctemp1838 = (p !=0);
if(nctemp1838)
{
struct tree* nctemp1843= p;
struct symbol* nctemp1847=SymGetetp();
struct symbol* nctemp1845= nctemp1847;
int nctemp1848=SemSem(nctemp1843,nctemp1845);
}
int nctemp1849 = (atree ==1);
if(nctemp1849)
{
struct tree* nctemp1854= p;
int nctemp1856= 0;
int nctemp1858=PtreePrtree(nctemp1854,nctemp1856);
}
int nctemp1859 = (table ==1);
if(nctemp1859)
{
struct symbol* nctemp1866=SymGetltp();
int nctemp1863 = (nctemp1866 !=0);
if(nctemp1863)
{
int nctemp1869= 3;
struct symbol* nctemp1873=SymGetltp();
struct symbol* nctemp1871= nctemp1873;
int nctemp1874= 0;
int nctemp1876=SymPrsym(nctemp1869,nctemp1871,nctemp1874);
}
}
}
int nctemp1877 = (emit ==1);
if(nctemp1877)
{
int nctemp1881 = (p !=0);
if(nctemp1881)
{
struct tree* nctemp1886= p;
struct symbol* nctemp1890=SymGetetp();
struct symbol* nctemp1888= nctemp1890;
int nctemp1891=CodeCode(nctemp1886,nctemp1888);
}
}
struct tree* nctemp1893= p;
int nctemp1895=PtreeRmtree(nctemp1893);
struct symbol* nctemp1899=SymGetltp();
struct symbol* nctemp1897= nctemp1899;
int nctemp1900=SymRmtable(nctemp1897);
int nctemp1901 = (parse ==1);
if(nctemp1901)
{
struct tree* nctemp1909=ParseParse();
p =nctemp1909;
int nctemp1910 = (btree ==1);
if(nctemp1910)
{
struct tree* nctemp1915= p;
int nctemp1917= 0;
int nctemp1919=PtreePrtree(nctemp1915,nctemp1917);
}
}
}
int nctemp1920 = (p !=0);
nctemp1833=nctemp1920;}int nctemp1927=ParseGetlookahead();
int nctemp1924 = (nctemp1927 !=19);
if(nctemp1924)
{
struct nctempchar1 *nctemp1932;
static struct nctempchar1 nctemp1933 = {{ 36}, (char*)"Parsing ended before reaching EOF\n\0"};
nctemp1932=&nctemp1933;
nctempchar1* nctemp1930= nctemp1932;
int nctemp1934=MainError(nctemp1930);
}
int nctemp1935 = (etable ==1);
if(nctemp1935)
{
int nctemp1940= 4;
int nctemp1942=LibeFlush(nctemp1940);
struct symbol* nctemp1946=SymGetetp();
int nctemp1943 = (nctemp1946 !=0);
if(nctemp1943)
{
int nctemp1949= 3;
struct symbol* nctemp1953=SymGetetp();
struct symbol* nctemp1951= nctemp1953;
int nctemp1954= 0;
int nctemp1956=SymPrsym(nctemp1949,nctemp1951,nctemp1954);
}
}
int nctemp1957 = (emit ==1);
if(nctemp1957)
{
int nctemp1962=CodePostamble();
}
int nctemp1966 = (emit ==1);
int nctemp1971 = (obj ==1);
int nctemp1963 = (nctemp1966 && nctemp1971);
if(nctemp1963)
{
int nctemp1978=CodeGetarch();
int nctemp1975 = (nctemp1978 ==1);
if(nctemp1975)
{
nctempchar1* nctemp1981= outfile;
int nctemp1984= debug;
int nctemp1986= optimize;
int nctemp1988= openmp;
int nctemp1990= show;
int nctemp1992=MainCcompcpu(nctemp1981,nctemp1984,nctemp1986,nctemp1988,nctemp1990);
}
else{
int nctemp1996=CodeGetarch();
int nctemp1993 = (nctemp1996 ==2);
if(nctemp1993)
{
nctempchar1* nctemp1999= outfile;
int nctemp2002= debug;
int nctemp2004= optimize;
int nctemp2006= openmp;
int nctemp2008= show;
nctempchar1* nctemp2010= dev;
int nctemp2013=MainCcompcuda(nctemp1999,nctemp2002,nctemp2004,nctemp2006,nctemp2008,nctemp2010);
}
else{
int nctemp2017=CodeGetarch();
int nctemp2014 = (nctemp2017 ==3);
if(nctemp2014)
{
nctempchar1* nctemp2020= outfile;
int nctemp2023= debug;
int nctemp2025= optimize;
int nctemp2027= openmp;
int nctemp2029= show;
int nctemp2031=MainCcomphip(nctemp2020,nctemp2023,nctemp2025,nctemp2027,nctemp2029);
}
else{
struct nctempchar1 *nctemp2035;
static struct nctempchar1 nctemp2036 = {{ 23}, (char*)"Unknown architecture\n\0"};
nctemp2035=&nctemp2036;
nctempchar1* nctemp2033= nctemp2035;
int nctemp2037=MainError(nctemp2033);
}
}
}
}
int nctemp2038 = (emit ==1);
if(nctemp2038)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp2046= fd;
int nctemp2048=LibeClose(nctemp2046);
}
nctempchar1* nctemp2055= infile;
nctempchar1* nctemp2058=MainFmod(nctemp2055);
nctempchar1* nctemp2053= nctemp2058;
struct nctempchar1 *nctemp2061;
static struct nctempchar1 nctemp2062 = {{ 2}, (char*)"w\0"};
nctemp2061=&nctemp2062;
nctempchar1* nctemp2059= nctemp2061;
int nctemp2063=LibeOpen(nctemp2053,nctemp2059);
fd =nctemp2063;
int nctemp2065= fd;
struct symbol* nctemp2069=SymGetetp();
struct symbol* nctemp2067= nctemp2069;
int nctemp2070= 0;
int nctemp2072=SymExport(nctemp2065,nctemp2067,nctemp2070);
int nctemp2074= 3;
int nctemp2076=LibeFlush(nctemp2074);
return 1;
}
