//  Translated by epsc  version December 2021  
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
int SymIstemp (nctempchar1 *name);
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
int nctemp360=l;
nctempchar1 *nctemp359;
nctemp359=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp359->d[0]=l;
nctemp359->a=(char *)RunMalloc(sizeof(char)*nctemp360);
outfile=nctemp359;
nctempchar1* nctemp364= infile;
nctempchar1* nctemp367= outfile;
int nctemp370=LibeStrcpy(nctemp364,nctemp367);
int nctemp379 = l - 2;
int nctemp374=nctemp379;
char nctemp381=(char)('c');
outfile->a[nctemp374] =nctemp381;
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp390=infile->d[0];l =nctemp390;
int nctemp394 = (l < 3);
if(nctemp394)
{
struct nctempchar1 *nctemp401;
static struct nctempchar1 nctemp402 = {{ 19}, (char*)" Illegal file name\0"};
nctemp401=&nctemp402;
nctempchar1* nctemp399= nctemp401;
int nctemp403=MainError(nctemp399);
}
int nctemp412 = l - 2;
int nctemp407=nctemp412;
char nctemp414=(char)('e');
int nctemp404 = (infile->a[nctemp407] !=nctemp414);
if(nctemp404)
{
struct nctempchar1 *nctemp420;
static struct nctempchar1 nctemp421 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp420=&nctemp421;
nctempchar1* nctemp418= nctemp420;
int nctemp422=MainError(nctemp418);
}
int nctemp429=l;
nctempchar1 *nctemp428;
nctemp428=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp428->d[0]=l;
nctemp428->a=(char *)RunMalloc(sizeof(char)*nctemp429);
outfile=nctemp428;
nctempchar1* nctemp433= infile;
nctempchar1* nctemp436= outfile;
int nctemp439=LibeStrcpy(nctemp433,nctemp436);
int nctemp448 = l - 2;
int nctemp443=nctemp448;
char nctemp450=(char)('m');
outfile->a[nctemp443] =nctemp450;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp460;
static struct nctempchar1 nctemp461 = {{ 20}, (char*)"gcc -c -ffast-math \0"};
nctemp460=&nctemp461;
cmd=nctemp460;
int nctemp462 = (debug ==1);
if(nctemp462)
{
nctempchar1* nctemp471= cmd;
struct nctempchar1 *nctemp476;
static struct nctempchar1 nctemp477 = {{ 5}, (char*)" -g \0"};
nctemp476=&nctemp477;
nctempchar1* nctemp474= nctemp476;
nctempchar1* nctemp478=LibeStradd(nctemp471,nctemp474);
cmd=nctemp478;
}
int nctemp479 = (optimize ==1);
if(nctemp479)
{
nctempchar1* nctemp488= cmd;
struct nctempchar1 *nctemp493;
static struct nctempchar1 nctemp494 = {{ 6}, (char*)" -O3 \0"};
nctemp493=&nctemp494;
nctempchar1* nctemp491= nctemp493;
nctempchar1* nctemp495=LibeStradd(nctemp488,nctemp491);
cmd=nctemp495;
}
else{
nctempchar1* nctemp501= cmd;
struct nctempchar1 *nctemp506;
static struct nctempchar1 nctemp507 = {{ 6}, (char*)" -O2 \0"};
nctemp506=&nctemp507;
nctempchar1* nctemp504= nctemp506;
nctempchar1* nctemp508=LibeStradd(nctemp501,nctemp504);
cmd=nctemp508;
}
int nctemp509 = (openmp ==1);
if(nctemp509)
{
nctempchar1* nctemp518= cmd;
struct nctempchar1 *nctemp523;
static struct nctempchar1 nctemp524 = {{ 11}, (char*)" -fopenmp \0"};
nctemp523=&nctemp524;
nctempchar1* nctemp521= nctemp523;
nctempchar1* nctemp525=LibeStradd(nctemp518,nctemp521);
cmd=nctemp525;
}
nctempchar1* nctemp531= cmd;
nctempchar1* nctemp534= file;
nctempchar1* nctemp537=LibeStradd(nctemp531,nctemp534);
cmd=nctemp537;
tmp = cmd;
nctempchar1* nctemp543= tmp;
struct nctempchar1 *nctemp548;
static struct nctempchar1 nctemp549 = {{ 3}, (char*)"\n\0"};
nctemp548=&nctemp549;
nctempchar1* nctemp546= nctemp548;
nctempchar1* nctemp550=LibeStradd(nctemp543,nctemp546);
cmd=nctemp550;
RunFree(tmp->a);
RunFree(tmp);
int nctemp554 = (show ==1);
if(nctemp554)
{
int nctemp559= 4;
nctempchar1* nctemp561= cmd;
int nctemp564=LibePuts(nctemp559,nctemp561);
int nctemp566= 4;
int nctemp568=LibeFlush(nctemp566);
}
nctempchar1* nctemp570= cmd;
int nctemp573=LibeSystem(nctemp570);
struct nctempchar1 *nctemp581;
static struct nctempchar1 nctemp582 = {{ 4}, (char*)"rm \0"};
nctemp581=&nctemp582;
nctempchar1* nctemp579= nctemp581;
nctempchar1* nctemp583= file;
nctempchar1* nctemp586=LibeStradd(nctemp579,nctemp583);
cmd=nctemp586;
tmp = cmd;
nctempchar1* nctemp592= cmd;
struct nctempchar1 *nctemp597;
static struct nctempchar1 nctemp598 = {{ 3}, (char*)"\n\0"};
nctemp597=&nctemp598;
nctempchar1* nctemp595= nctemp597;
nctempchar1* nctemp599=LibeStradd(nctemp592,nctemp595);
cmd=nctemp599;
RunFree(tmp->a);
RunFree(tmp);
int nctemp603 = (show ==1);
if(nctemp603)
{
int nctemp608= 4;
nctempchar1* nctemp610= cmd;
int nctemp613=LibePuts(nctemp608,nctemp610);
int nctemp615= 4;
int nctemp617=LibeFlush(nctemp615);
}
nctempchar1* nctemp619= cmd;
int nctemp622=LibeSystem(nctemp619);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp631=file->d[0];l =nctemp631;
struct nctempchar1 *nctemp640;
static struct nctempchar1 nctemp641 = {{ 56}, (char*)"nvcc -arch=sm_80 -use_fast_math --compiler-options -O2 \0"};
nctemp640=&nctemp641;
cmd=nctemp640;
nctempchar1* nctemp647= cmd;
struct nctempchar1 *nctemp652;
static struct nctempchar1 nctemp653 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp652=&nctemp653;
nctempchar1* nctemp650= nctemp652;
nctempchar1* nctemp654=LibeStradd(nctemp647,nctemp650);
cmd=nctemp654;
int nctemp655 = (debug ==1);
if(nctemp655)
{
nctempchar1* nctemp664= cmd;
struct nctempchar1 *nctemp669;
static struct nctempchar1 nctemp670 = {{ 5}, (char*)" -g \0"};
nctemp669=&nctemp670;
nctempchar1* nctemp667= nctemp669;
nctempchar1* nctemp671=LibeStradd(nctemp664,nctemp667);
cmd=nctemp671;
}
int nctemp672 = (optimize ==1);
if(nctemp672)
{
nctempchar1* nctemp681= cmd;
struct nctempchar1 *nctemp686;
static struct nctempchar1 nctemp687 = {{ 6}, (char*)" -O3 \0"};
nctemp686=&nctemp687;
nctempchar1* nctemp684= nctemp686;
nctempchar1* nctemp688=LibeStradd(nctemp681,nctemp684);
cmd=nctemp688;
}
else{
nctempchar1* nctemp694= cmd;
struct nctempchar1 *nctemp699;
static struct nctempchar1 nctemp700 = {{ 6}, (char*)" -O2 \0"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
nctempchar1* nctemp701=LibeStradd(nctemp694,nctemp697);
cmd=nctemp701;
}
int nctemp702 = (openmp ==1);
if(nctemp702)
{
nctempchar1* nctemp711= cmd;
struct nctempchar1 *nctemp716;
static struct nctempchar1 nctemp717 = {{ 11}, (char*)" -fopenmp \0"};
nctemp716=&nctemp717;
nctempchar1* nctemp714= nctemp716;
nctempchar1* nctemp718=LibeStradd(nctemp711,nctemp714);
cmd=nctemp718;
}
nctempchar1* nctemp724= cmd;
nctempchar1* nctemp727= file;
nctempchar1* nctemp730=LibeStradd(nctemp724,nctemp727);
cmd=nctemp730;
tmp = cmd;
nctempchar1* nctemp736= cmd;
struct nctempchar1 *nctemp741;
static struct nctempchar1 nctemp742 = {{ 3}, (char*)"\n\0"};
nctemp741=&nctemp742;
nctempchar1* nctemp739= nctemp741;
nctempchar1* nctemp743=LibeStradd(nctemp736,nctemp739);
cmd=nctemp743;
RunFree(tmp->a);
RunFree(tmp);
int nctemp747 = (show ==1);
if(nctemp747)
{
int nctemp752= 4;
nctempchar1* nctemp754= cmd;
int nctemp757=LibePuts(nctemp752,nctemp754);
int nctemp759= 4;
int nctemp761=LibeFlush(nctemp759);
}
nctempchar1* nctemp763= cmd;
int nctemp766=LibeSystem(nctemp763);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 4}, (char*)"rm \0"};
nctemp785=&nctemp786;
int nctemp783=nctemp785->d[0];int nctemp789 = nctemp783 + l;
int nctemp791 = nctemp789 + 2;
int nctemp776=nctemp791;
nctempchar1 *nctemp775;
nctemp775=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp800;
static struct nctempchar1 nctemp801 = {{ 4}, (char*)"rm \0"};
nctemp800=&nctemp801;
int nctemp798=nctemp800->d[0];int nctemp804 = nctemp798 + l;
int nctemp806 = nctemp804 + 2;
nctemp775->d[0]=nctemp806;
nctemp775->a=(char *)RunMalloc(sizeof(char)*nctemp776);
cmd=nctemp775;
struct nctempchar1 *nctemp814;
static struct nctempchar1 nctemp815 = {{ 4}, (char*)"rm \0"};
nctemp814=&nctemp815;
nctempchar1* nctemp812= nctemp814;
nctempchar1* nctemp816= file;
nctempchar1* nctemp819=LibeStradd(nctemp812,nctemp816);
cmd=nctemp819;
tmp = cmd;
nctempchar1* nctemp825= cmd;
struct nctempchar1 *nctemp830;
static struct nctempchar1 nctemp831 = {{ 3}, (char*)"\n\0"};
nctemp830=&nctemp831;
nctempchar1* nctemp828= nctemp830;
nctempchar1* nctemp832=LibeStradd(nctemp825,nctemp828);
cmd=nctemp832;
int nctemp833 = (show ==1);
if(nctemp833)
{
int nctemp838= 4;
nctempchar1* nctemp840= cmd;
int nctemp843=LibePuts(nctemp838,nctemp840);
int nctemp845= 4;
int nctemp847=LibeFlush(nctemp845);
}
nctempchar1* nctemp849= cmd;
int nctemp852=LibeSystem(nctemp849);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp861=file->d[0];l =nctemp861;
struct nctempchar1 *nctemp870;
static struct nctempchar1 nctemp871 = {{ 10}, (char*)"hipcc -c \0"};
nctemp870=&nctemp871;
tmp=nctemp870;
int nctemp878=160;
nctempchar1 *nctemp877;
nctemp877=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp877->d[0]=160;
nctemp877->a=(char *)RunMalloc(sizeof(char)*nctemp878);
cmd=nctemp877;
nctempchar1* nctemp882= tmp;
nctempchar1* nctemp885= cmd;
int nctemp888=LibeStrcpy(nctemp882,nctemp885);
int nctemp889 = (debug ==1);
if(nctemp889)
{
struct nctempchar1 *nctemp896;
static struct nctempchar1 nctemp897 = {{ 5}, (char*)" -g \0"};
nctemp896=&nctemp897;
nctempchar1* nctemp894= nctemp896;
nctempchar1* nctemp898= cmd;
int nctemp901=LibeStrcat(nctemp894,nctemp898);
}
int nctemp902 = (optimize ==1);
if(nctemp902)
{
struct nctempchar1 *nctemp909;
static struct nctempchar1 nctemp910 = {{ 6}, (char*)" -O3 \0"};
nctemp909=&nctemp910;
nctempchar1* nctemp907= nctemp909;
nctempchar1* nctemp911= cmd;
int nctemp914=LibeStrcat(nctemp907,nctemp911);
}
int nctemp915 = (openmp ==1);
if(nctemp915)
{
struct nctempchar1 *nctemp922;
static struct nctempchar1 nctemp923 = {{ 11}, (char*)" -fopenmp \0"};
nctemp922=&nctemp923;
nctempchar1* nctemp920= nctemp922;
nctempchar1* nctemp924= cmd;
int nctemp927=LibeStrcat(nctemp920,nctemp924);
}
nctempchar1* nctemp929= file;
nctempchar1* nctemp932= cmd;
int nctemp935=LibeStrcat(nctemp929,nctemp932);
struct nctempchar1 *nctemp939;
static struct nctempchar1 nctemp940 = {{ 3}, (char*)"\n\0"};
nctemp939=&nctemp940;
nctempchar1* nctemp937= nctemp939;
nctempchar1* nctemp941= cmd;
int nctemp944=LibeStrcat(nctemp937,nctemp941);
int nctemp945 = (show ==1);
if(nctemp945)
{
int nctemp950= 4;
nctempchar1* nctemp952= cmd;
int nctemp955=LibePuts(nctemp950,nctemp952);
int nctemp957= 4;
int nctemp959=LibeFlush(nctemp957);
}
nctempchar1* nctemp961= cmd;
int nctemp964=LibeSystem(nctemp961);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp983;
static struct nctempchar1 nctemp984 = {{ 4}, (char*)"rm \0"};
nctemp983=&nctemp984;
int nctemp981=nctemp983->d[0];int nctemp987 = nctemp981 + l;
int nctemp989 = nctemp987 + 2;
int nctemp974=nctemp989;
nctempchar1 *nctemp973;
nctemp973=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp998;
static struct nctempchar1 nctemp999 = {{ 4}, (char*)"rm \0"};
nctemp998=&nctemp999;
int nctemp996=nctemp998->d[0];int nctemp1002 = nctemp996 + l;
int nctemp1004 = nctemp1002 + 2;
nctemp973->d[0]=nctemp1004;
nctemp973->a=(char *)RunMalloc(sizeof(char)*nctemp974);
cmd=nctemp973;
struct nctempchar1 *nctemp1008;
static struct nctempchar1 nctemp1009 = {{ 4}, (char*)"rm \0"};
nctemp1008=&nctemp1009;
nctempchar1* nctemp1006= nctemp1008;
nctempchar1* nctemp1010= cmd;
int nctemp1013=LibeStrcpy(nctemp1006,nctemp1010);
nctempchar1* nctemp1015= file;
nctempchar1* nctemp1018= cmd;
int nctemp1021=LibeStrcat(nctemp1015,nctemp1018);
struct nctempchar1 *nctemp1025;
static struct nctempchar1 nctemp1026 = {{ 3}, (char*)"\n\0"};
nctemp1025=&nctemp1026;
nctempchar1* nctemp1023= nctemp1025;
nctempchar1* nctemp1027= cmd;
int nctemp1030=LibeStrcat(nctemp1023,nctemp1027);
int nctemp1031 = (show ==1);
if(nctemp1031)
{
int nctemp1036= 4;
nctempchar1* nctemp1038= cmd;
int nctemp1041=LibePuts(nctemp1036,nctemp1038);
int nctemp1043= 4;
int nctemp1045=LibeFlush(nctemp1043);
}
nctempchar1* nctemp1047= cmd;
int nctemp1050=LibeSystem(nctemp1047);
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
int nctemp1056=LibeInit();
show = (debug = (optimize = (openmp = 0)));
btree = (atree = (table = (etable = (emit = 0))));
parse = (semantic = 0);
obj = 1;
options = 0;
int nctemp1058=PtreeInit();
int nctemp1060=CodeInit();
int nctemp1062=CodeArraycheckoff();
int nctemp1064=CodeDebugoff();
int nctemp1066= 2;
int nctemp1068=CodeSetarch(nctemp1066);
int nctemp1073=MainArgs->d[0];l =nctemp1073;
int nctemp1077 = (l <= 1);
if(nctemp1077)
{
struct nctempchar1 *nctemp1084;
static struct nctempchar1 nctemp1085 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1084=&nctemp1085;
nctempchar1* nctemp1082= nctemp1084;
int nctemp1086=MainError(nctemp1082);
}
i =1;
int nctemp1095=MainArgs->d[0];int nctemp1091 = (i < nctemp1095);
while(nctemp1091){
{
int nctemp1104=i;
nctempchar1* nctemp1102= MainArgs->a[nctemp1104].arg;
struct nctempchar1 *nctemp1109;
static struct nctempchar1 nctemp1110 = {{ 3}, (char*)"-h\0"};
nctemp1109=&nctemp1110;
nctempchar1* nctemp1107= nctemp1109;
int nctemp1111=LibeStrcmp(nctemp1102,nctemp1107);
int nctemp1099 = (nctemp1111 ==1);
if(nctemp1099)
{
int nctemp1114= 2;
int nctemp1116=MainHelp(nctemp1114);
int nctemp1118=LibeExit();
}
int nctemp1124=i;
nctempchar1* nctemp1122= MainArgs->a[nctemp1124].arg;
struct nctempchar1 *nctemp1129;
static struct nctempchar1 nctemp1130 = {{ 3}, (char*)"-t\0"};
nctemp1129=&nctemp1130;
nctempchar1* nctemp1127= nctemp1129;
int nctemp1131=LibeStrcmp(nctemp1122,nctemp1127);
int nctemp1119 = (nctemp1131 ==1);
if(nctemp1119)
{
btree = 1;
parse = 1;
}
int nctemp1138=i;
nctempchar1* nctemp1136= MainArgs->a[nctemp1138].arg;
struct nctempchar1 *nctemp1143;
static struct nctempchar1 nctemp1144 = {{ 3}, (char*)"-a\0"};
nctemp1143=&nctemp1144;
nctempchar1* nctemp1141= nctemp1143;
int nctemp1145=LibeStrcmp(nctemp1136,nctemp1141);
int nctemp1133 = (nctemp1145 ==1);
if(nctemp1133)
{
atree = 1;
semantic = 1;
parse = 1;
}
int nctemp1152=i;
nctempchar1* nctemp1150= MainArgs->a[nctemp1152].arg;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 3}, (char*)"-s\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=LibeStrcmp(nctemp1150,nctemp1155);
int nctemp1147 = (nctemp1159 ==1);
if(nctemp1147)
{
table = 1;
parse = 1;
semantic = 1;
}
int nctemp1166=i;
nctempchar1* nctemp1164= MainArgs->a[nctemp1166].arg;
struct nctempchar1 *nctemp1171;
static struct nctempchar1 nctemp1172 = {{ 3}, (char*)"-r\0"};
nctemp1171=&nctemp1172;
nctempchar1* nctemp1169= nctemp1171;
int nctemp1173=LibeStrcmp(nctemp1164,nctemp1169);
int nctemp1161 = (nctemp1173 ==1);
if(nctemp1161)
{
etable = 1;
parse = 1;
semantic = 1;
}
int nctemp1180=i;
nctempchar1* nctemp1178= MainArgs->a[nctemp1180].arg;
struct nctempchar1 *nctemp1185;
static struct nctempchar1 nctemp1186 = {{ 3}, (char*)"-e\0"};
nctemp1185=&nctemp1186;
nctempchar1* nctemp1183= nctemp1185;
int nctemp1187=LibeStrcmp(nctemp1178,nctemp1183);
int nctemp1175 = (nctemp1187 ==1);
if(nctemp1175)
{
emit = 1;
parse = 1;
semantic = 1;
}
int nctemp1194=i;
nctempchar1* nctemp1192= MainArgs->a[nctemp1194].arg;
struct nctempchar1 *nctemp1199;
static struct nctempchar1 nctemp1200 = {{ 3}, (char*)"-p\0"};
nctemp1199=&nctemp1200;
nctempchar1* nctemp1197= nctemp1199;
int nctemp1201=LibeStrcmp(nctemp1192,nctemp1197);
int nctemp1189 = (nctemp1201 ==1);
if(nctemp1189)
{
parse = 1;
}
int nctemp1208=i;
nctempchar1* nctemp1206= MainArgs->a[nctemp1208].arg;
struct nctempchar1 *nctemp1213;
static struct nctempchar1 nctemp1214 = {{ 3}, (char*)"-q\0"};
nctemp1213=&nctemp1214;
nctempchar1* nctemp1211= nctemp1213;
int nctemp1215=LibeStrcmp(nctemp1206,nctemp1211);
int nctemp1203 = (nctemp1215 ==1);
if(nctemp1203)
{
semantic = 1;
parse = 1;
}
int nctemp1222=i;
nctempchar1* nctemp1220= MainArgs->a[nctemp1222].arg;
struct nctempchar1 *nctemp1227;
static struct nctempchar1 nctemp1228 = {{ 3}, (char*)"-C\0"};
nctemp1227=&nctemp1228;
nctempchar1* nctemp1225= nctemp1227;
int nctemp1229=LibeStrcmp(nctemp1220,nctemp1225);
int nctemp1217 = (nctemp1229 ==1);
if(nctemp1217)
{
int nctemp1232=CodeArraycheckon();
}
int nctemp1238=i;
nctempchar1* nctemp1236= MainArgs->a[nctemp1238].arg;
struct nctempchar1 *nctemp1243;
static struct nctempchar1 nctemp1244 = {{ 3}, (char*)"-i\0"};
nctemp1243=&nctemp1244;
nctempchar1* nctemp1241= nctemp1243;
int nctemp1245=LibeStrcmp(nctemp1236,nctemp1241);
int nctemp1233 = (nctemp1245 ==1);
if(nctemp1233)
{
int nctemp1248=CodeBreakon();
}
int nctemp1254=i;
nctempchar1* nctemp1252= MainArgs->a[nctemp1254].arg;
struct nctempchar1 *nctemp1259;
static struct nctempchar1 nctemp1260 = {{ 3}, (char*)"-g\0"};
nctemp1259=&nctemp1260;
nctempchar1* nctemp1257= nctemp1259;
int nctemp1261=LibeStrcmp(nctemp1252,nctemp1257);
int nctemp1249 = (nctemp1261 ==1);
if(nctemp1249)
{
debug = 1;
int nctemp1264=CodeDebugon();
}
int nctemp1270=i;
nctempchar1* nctemp1268= MainArgs->a[nctemp1270].arg;
struct nctempchar1 *nctemp1275;
static struct nctempchar1 nctemp1276 = {{ 3}, (char*)"-d\0"};
nctemp1275=&nctemp1276;
nctempchar1* nctemp1273= nctemp1275;
int nctemp1277=LibeStrcmp(nctemp1268,nctemp1273);
int nctemp1265 = (nctemp1277 ==1);
if(nctemp1265)
{
show = 1;
}
int nctemp1284=i;
nctempchar1* nctemp1282= MainArgs->a[nctemp1284].arg;
struct nctempchar1 *nctemp1289;
static struct nctempchar1 nctemp1290 = {{ 3}, (char*)"-O\0"};
nctemp1289=&nctemp1290;
nctempchar1* nctemp1287= nctemp1289;
int nctemp1291=LibeStrcmp(nctemp1282,nctemp1287);
int nctemp1279 = (nctemp1291 ==1);
if(nctemp1279)
{
optimize = 1;
}
int nctemp1298=i;
nctempchar1* nctemp1296= MainArgs->a[nctemp1298].arg;
struct nctempchar1 *nctemp1303;
static struct nctempchar1 nctemp1304 = {{ 3}, (char*)"-f\0"};
nctemp1303=&nctemp1304;
nctempchar1* nctemp1301= nctemp1303;
int nctemp1305=LibeStrcmp(nctemp1296,nctemp1301);
int nctemp1293 = (nctemp1305 ==1);
if(nctemp1293)
{
openmp = 1;
}
int nctemp1312=i;
nctempchar1* nctemp1310= MainArgs->a[nctemp1312].arg;
struct nctempchar1 *nctemp1317;
static struct nctempchar1 nctemp1318 = {{ 3}, (char*)"-c\0"};
nctemp1317=&nctemp1318;
nctempchar1* nctemp1315= nctemp1317;
int nctemp1319=LibeStrcmp(nctemp1310,nctemp1315);
int nctemp1307 = (nctemp1319 ==1);
if(nctemp1307)
{
obj = 0;
}
int nctemp1327=i;
int nctemp1329=0;
char nctemp1332=(char)('-');
int nctemp1324 = (MainArgs->a[nctemp1327].arg->a[nctemp1329] ==nctemp1332);
int nctemp1321 = (nctemp1324 ==1);
if(nctemp1321)
{
options = (options + 1);
}
}
int nctemp1344 = i + 1;
i =nctemp1344;
int nctemp1349=MainArgs->d[0];int nctemp1345 = (i < nctemp1349);
nctemp1091=nctemp1345;
}
int nctemp1359 = (parse ==0);
int nctemp1364 = (semantic ==0);
int nctemp1356 = (nctemp1359 && nctemp1364);
int nctemp1369 = (emit ==0);
int nctemp1353 = (nctemp1356 && nctemp1369);
if(nctemp1353)
{
parse = (semantic = (emit = 1));
}
int nctemp1380 = options + 1;
int nctemp1382=MainArgs->d[0];int nctemp1373 = (nctemp1380 >= nctemp1382);
if(nctemp1373)
{
struct nctempchar1 *nctemp1389;
static struct nctempchar1 nctemp1390 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1389=&nctemp1390;
nctempchar1* nctemp1387= nctemp1389;
int nctemp1391=MainError(nctemp1387);
}
else{
int nctemp1401=MainArgs->d[0];int nctemp1406 = nctemp1401 - 1;
int nctemp1397=nctemp1406;
infile=MainArgs->a[nctemp1397].arg;
}
int nctemp1408 = (emit ==1);
if(nctemp1408)
{
nctempchar1* nctemp1417= infile;
int nctemp1420= 2;
nctempchar1* nctemp1422=MainFout(nctemp1417,nctemp1420);
outfile=nctemp1422;
nctempchar1* nctemp1427= outfile;
struct nctempchar1 *nctemp1432;
static struct nctempchar1 nctemp1433 = {{ 2}, (char*)"w\0"};
nctemp1432=&nctemp1433;
nctempchar1* nctemp1430= nctemp1432;
int nctemp1434=LibeOpen(nctemp1427,nctemp1430);
fd =nctemp1434;
int nctemp1436= fd;
int nctemp1438=CodeSetfdout(nctemp1436);
}
nctempchar1* nctemp1442= infile;
int nctemp1445=ScanInit(nctemp1442);
int nctemp1439 = (nctemp1445 ==0);
if(nctemp1439)
{
int nctemp1448=LibeExit();
}
int nctemp1450= 1;
int nctemp1452=ScanSetline(nctemp1450);
int nctemp1454=ParseIniparse();
int nctemp1455 = (emit ==1);
if(nctemp1455)
{
int nctemp1460=CodePreamble();
}
struct symbol* nctemp1464=SymMktable();
struct symbol* nctemp1462= nctemp1464;
int nctemp1465=SymSetetp(nctemp1462);
int nctemp1466 = (parse ==1);
if(nctemp1466)
{
struct tree* nctemp1474=ParseParse();
p =nctemp1474;
}
int nctemp1475 = (btree ==1);
if(nctemp1475)
{
struct tree* nctemp1480= p;
int nctemp1482= 0;
int nctemp1484=PtreePrtree(nctemp1480,nctemp1482);
}
int nctemp1485 = (p !=0);
int nctemp1489=nctemp1485;
while(nctemp1489)
{{
int nctemp1490 = (semantic ==1);
if(nctemp1490)
{
int nctemp1494 = (p !=0);
if(nctemp1494)
{
struct tree* nctemp1499= p;
struct symbol* nctemp1503=SymGetetp();
struct symbol* nctemp1501= nctemp1503;
int nctemp1504=SemSem(nctemp1499,nctemp1501);
}
int nctemp1505 = (atree ==1);
if(nctemp1505)
{
struct tree* nctemp1510= p;
int nctemp1512= 0;
int nctemp1514=PtreePrtree(nctemp1510,nctemp1512);
}
int nctemp1515 = (table ==1);
if(nctemp1515)
{
struct symbol* nctemp1522=SymGetltp();
int nctemp1519 = (nctemp1522 !=0);
if(nctemp1519)
{
int nctemp1525= 3;
struct symbol* nctemp1529=SymGetltp();
struct symbol* nctemp1527= nctemp1529;
int nctemp1530= 0;
int nctemp1532=SymPrsym(nctemp1525,nctemp1527,nctemp1530);
}
}
}
int nctemp1533 = (emit ==1);
if(nctemp1533)
{
int nctemp1537 = (p !=0);
if(nctemp1537)
{
struct tree* nctemp1542= p;
struct symbol* nctemp1546=SymGetetp();
struct symbol* nctemp1544= nctemp1546;
int nctemp1547=CodeCode(nctemp1542,nctemp1544);
}
}
struct tree* nctemp1549= p;
int nctemp1551=PtreeRmtree(nctemp1549);
struct symbol* nctemp1555=SymGetltp();
struct symbol* nctemp1553= nctemp1555;
int nctemp1556=SymRmtable(nctemp1553);
int nctemp1557 = (parse ==1);
if(nctemp1557)
{
struct tree* nctemp1565=ParseParse();
p =nctemp1565;
int nctemp1566 = (btree ==1);
if(nctemp1566)
{
struct tree* nctemp1571= p;
int nctemp1573= 0;
int nctemp1575=PtreePrtree(nctemp1571,nctemp1573);
}
}
}
int nctemp1576 = (p !=0);
nctemp1489=nctemp1576;}int nctemp1583=ParseGetlookahead();
int nctemp1580 = (nctemp1583 !=19);
if(nctemp1580)
{
struct nctempchar1 *nctemp1588;
static struct nctempchar1 nctemp1589 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1588=&nctemp1589;
nctempchar1* nctemp1586= nctemp1588;
int nctemp1590=MainError(nctemp1586);
}
int nctemp1591 = (etable ==1);
if(nctemp1591)
{
int nctemp1596= 4;
int nctemp1598=LibeFlush(nctemp1596);
struct symbol* nctemp1602=SymGetetp();
int nctemp1599 = (nctemp1602 !=0);
if(nctemp1599)
{
int nctemp1605= 3;
struct symbol* nctemp1609=SymGetetp();
struct symbol* nctemp1607= nctemp1609;
int nctemp1610= 0;
int nctemp1612=SymPrsym(nctemp1605,nctemp1607,nctemp1610);
}
}
int nctemp1613 = (emit ==1);
if(nctemp1613)
{
int nctemp1618=CodePostamble();
}
int nctemp1622 = (emit ==1);
int nctemp1627 = (obj ==1);
int nctemp1619 = (nctemp1622 && nctemp1627);
if(nctemp1619)
{
int nctemp1631 = (2 ==1);
if(nctemp1631)
{
nctempchar1* nctemp1636= outfile;
int nctemp1639= debug;
int nctemp1641= optimize;
int nctemp1643= openmp;
int nctemp1645= show;
int nctemp1647=MainCcompcpu(nctemp1636,nctemp1639,nctemp1641,nctemp1643,nctemp1645);
}
else{
int nctemp1648 = (2 ==2);
if(nctemp1648)
{
nctempchar1* nctemp1653= outfile;
int nctemp1656= debug;
int nctemp1658= optimize;
int nctemp1660= openmp;
int nctemp1662= show;
int nctemp1664=MainCcompcuda(nctemp1653,nctemp1656,nctemp1658,nctemp1660,nctemp1662);
}
else{
int nctemp1665 = (2 ==3);
if(nctemp1665)
{
nctempchar1* nctemp1670= outfile;
int nctemp1673= debug;
int nctemp1675= optimize;
int nctemp1677= openmp;
int nctemp1679= show;
int nctemp1681=MainCcomphip(nctemp1670,nctemp1673,nctemp1675,nctemp1677,nctemp1679);
}
else{
struct nctempchar1 *nctemp1685;
static struct nctempchar1 nctemp1686 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1685=&nctemp1686;
nctempchar1* nctemp1683= nctemp1685;
int nctemp1687=MainError(nctemp1683);
}
}
}
}
int nctemp1688 = (emit ==1);
if(nctemp1688)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1696= fd;
int nctemp1698=LibeClose(nctemp1696);
}
nctempchar1* nctemp1705= infile;
nctempchar1* nctemp1708=MainFmod(nctemp1705);
nctempchar1* nctemp1703= nctemp1708;
struct nctempchar1 *nctemp1711;
static struct nctempchar1 nctemp1712 = {{ 2}, (char*)"w\0"};
nctemp1711=&nctemp1712;
nctempchar1* nctemp1709= nctemp1711;
int nctemp1713=LibeOpen(nctemp1703,nctemp1709);
fd =nctemp1713;
int nctemp1715= fd;
struct symbol* nctemp1719=SymGetetp();
struct symbol* nctemp1717= nctemp1719;
int nctemp1720= 0;
int nctemp1722=SymExport(nctemp1715,nctemp1717,nctemp1720);
int nctemp1724= 3;
int nctemp1726=LibeFlush(nctemp1724);
return 1;
}
