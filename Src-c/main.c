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
static struct nctempchar1 nctemp106 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp105=&nctemp106;
nctempchar1* nctemp103= nctemp105;
int nctemp107=LibePuts(nctemp101,nctemp103);
int nctemp109= 4;
struct nctempchar1 *nctemp113;
static struct nctempchar1 nctemp114 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp113=&nctemp114;
nctempchar1* nctemp111= nctemp113;
int nctemp115=LibePuts(nctemp109,nctemp111);
int nctemp117= 4;
struct nctempchar1 *nctemp121;
static struct nctempchar1 nctemp122 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp121=&nctemp122;
nctempchar1* nctemp119= nctemp121;
int nctemp123=LibePuts(nctemp117,nctemp119);
int nctemp125= 4;
struct nctempchar1 *nctemp129;
static struct nctempchar1 nctemp130 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp129=&nctemp130;
nctempchar1* nctemp127= nctemp129;
int nctemp131=LibePuts(nctemp125,nctemp127);
int nctemp133= 4;
struct nctempchar1 *nctemp137;
static struct nctempchar1 nctemp138 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp137=&nctemp138;
nctempchar1* nctemp135= nctemp137;
int nctemp139=LibePuts(nctemp133,nctemp135);
int nctemp141= 4;
struct nctempchar1 *nctemp145;
static struct nctempchar1 nctemp146 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp145=&nctemp146;
nctempchar1* nctemp143= nctemp145;
int nctemp147=LibePuts(nctemp141,nctemp143);
int nctemp149= 4;
struct nctempchar1 *nctemp153;
static struct nctempchar1 nctemp154 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp153=&nctemp154;
nctempchar1* nctemp151= nctemp153;
int nctemp155=LibePuts(nctemp149,nctemp151);
int nctemp157= 4;
struct nctempchar1 *nctemp161;
static struct nctempchar1 nctemp162 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp161=&nctemp162;
nctempchar1* nctemp159= nctemp161;
int nctemp163=LibePuts(nctemp157,nctemp159);
int nctemp165= 4;
struct nctempchar1 *nctemp169;
static struct nctempchar1 nctemp170 = {{ 32}, (char*)"   -i : Break up expressions \n\0"};
nctemp169=&nctemp170;
nctempchar1* nctemp167= nctemp169;
int nctemp171=LibePuts(nctemp165,nctemp167);
int nctemp173= 4;
struct nctempchar1 *nctemp177;
static struct nctempchar1 nctemp178 = {{ 61}, (char*)"   -c : Produce c/c++ code but do not generate object code\n\0"};
nctemp177=&nctemp178;
nctempchar1* nctemp175= nctemp177;
int nctemp179=LibePuts(nctemp173,nctemp175);
int nctemp181= 4;
struct nctempchar1 *nctemp185;
static struct nctempchar1 nctemp186 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp185=&nctemp186;
nctempchar1* nctemp183= nctemp185;
int nctemp187=LibePuts(nctemp181,nctemp183);
int nctemp189= 4;
struct nctempchar1 *nctemp193;
static struct nctempchar1 nctemp194 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp193=&nctemp194;
nctempchar1* nctemp191= nctemp193;
int nctemp195=LibePuts(nctemp189,nctemp191);
int nctemp197= 4;
struct nctempchar1 *nctemp201;
static struct nctempchar1 nctemp202 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp201=&nctemp202;
nctempchar1* nctemp199= nctemp201;
int nctemp203=LibePuts(nctemp197,nctemp199);
int nctemp205= 4;
struct nctempchar1 *nctemp209;
static struct nctempchar1 nctemp210 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp209=&nctemp210;
nctempchar1* nctemp207= nctemp209;
int nctemp211=LibePuts(nctemp205,nctemp207);
int nctemp213= 4;
struct nctempchar1 *nctemp217;
static struct nctempchar1 nctemp218 = {{ 58}, (char*)"   -x arch : where arch is either cpu (default) or cuda\n\0"};
nctemp217=&nctemp218;
nctempchar1* nctemp215= nctemp217;
int nctemp219=LibePuts(nctemp213,nctemp215);
int nctemp221= 4;
struct nctempchar1 *nctemp225;
static struct nctempchar1 nctemp226 = {{ 77}, (char*)"   -y dev  : where dev is either none, native or device name such as sm_86\n\0"};
nctemp225=&nctemp226;
nctempchar1* nctemp223= nctemp225;
int nctemp227=LibePuts(nctemp221,nctemp223);
int nctemp229= 4;
int nctemp231=LibeFlush(nctemp229);
return 1;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp237=infile->d[0];l =nctemp237;
int nctemp241 = (l < 3);
if(nctemp241)
{
struct nctempchar1 *nctemp248;
static struct nctempchar1 nctemp249 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp248=&nctemp249;
nctempchar1* nctemp246= nctemp248;
int nctemp250=MainError(nctemp246);
}
int nctemp259 = l - 2;
int nctemp254=nctemp259;
char nctemp261=(char)('e');
int nctemp251 = (infile->a[nctemp254] !=nctemp261);
if(nctemp251)
{
struct nctempchar1 *nctemp267;
static struct nctempchar1 nctemp268 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp267=&nctemp268;
nctempchar1* nctemp265= nctemp267;
int nctemp269=MainError(nctemp265);
}
int nctemp270 = (arch ==1);
if(nctemp270)
{
int nctemp280=l;
nctempchar1 *nctemp279;
nctemp279=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp279->d[0]=l;
nctemp279->a=(char *)RunMalloc(sizeof(char)*nctemp280);
outfile=nctemp279;
nctempchar1* nctemp284= infile;
nctempchar1* nctemp287= outfile;
int nctemp290=LibeStrcpy(nctemp284,nctemp287);
int nctemp299 = l - 2;
int nctemp294=nctemp299;
char nctemp301=(char)('c');
outfile->a[nctemp294] =nctemp301;
}
else{
int nctemp304 = (arch ==2);
if(nctemp304)
{
int nctemp319 = l + 2;
int nctemp314=nctemp319;
nctempchar1 *nctemp313;
nctemp313=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp324 = l + 2;
nctemp313->d[0]=nctemp324;
nctemp313->a=(char *)RunMalloc(sizeof(char)*nctemp314);
outfile=nctemp313;
nctempchar1* nctemp326= infile;
nctempchar1* nctemp329= outfile;
int nctemp332=LibeStrcpy(nctemp326,nctemp329);
int nctemp341 = l - 2;
int nctemp336=nctemp341;
char nctemp343=(char)('c');
outfile->a[nctemp336] =nctemp343;
int nctemp354 = l - 1;
int nctemp349=nctemp354;
char nctemp356=(char)('p');
outfile->a[nctemp349] =nctemp356;
int nctemp367 = l - 0;
int nctemp362=nctemp367;
char nctemp369=(char)('p');
outfile->a[nctemp362] =nctemp369;
}
else{
struct nctempchar1 *nctemp375;
static struct nctempchar1 nctemp376 = {{ 22}, (char*)"Unknow architecture\n\0"};
nctemp375=&nctemp376;
nctempchar1* nctemp373= nctemp375;
int nctemp377=MainError(nctemp373);
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp384=infile->d[0];l =nctemp384;
int nctemp388 = (l < 3);
if(nctemp388)
{
struct nctempchar1 *nctemp395;
static struct nctempchar1 nctemp396 = {{ 21}, (char*)" Illegal file name\n\0"};
nctemp395=&nctemp396;
nctempchar1* nctemp393= nctemp395;
int nctemp397=MainError(nctemp393);
}
int nctemp406 = l - 2;
int nctemp401=nctemp406;
char nctemp408=(char)('e');
int nctemp398 = (infile->a[nctemp401] !=nctemp408);
if(nctemp398)
{
struct nctempchar1 *nctemp414;
static struct nctempchar1 nctemp415 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp414=&nctemp415;
nctempchar1* nctemp412= nctemp414;
int nctemp416=MainError(nctemp412);
}
int nctemp423=l;
nctempchar1 *nctemp422;
nctemp422=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp422->d[0]=l;
nctemp422->a=(char *)RunMalloc(sizeof(char)*nctemp423);
outfile=nctemp422;
nctempchar1* nctemp427= infile;
nctempchar1* nctemp430= outfile;
int nctemp433=LibeStrcpy(nctemp427,nctemp430);
int nctemp442 = l - 2;
int nctemp437=nctemp442;
char nctemp444=(char)('m');
outfile->a[nctemp437] =nctemp444;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp454;
static struct nctempchar1 nctemp455 = {{ 20}, (char*)"gcc -c -ffast-math \0"};
nctemp454=&nctemp455;
cmd=nctemp454;
int nctemp456 = (debug ==1);
if(nctemp456)
{
nctempchar1* nctemp465= cmd;
struct nctempchar1 *nctemp470;
static struct nctempchar1 nctemp471 = {{ 5}, (char*)" -g \0"};
nctemp470=&nctemp471;
nctempchar1* nctemp468= nctemp470;
nctempchar1* nctemp472=LibeStradd(nctemp465,nctemp468);
cmd=nctemp472;
}
int nctemp473 = (optimize ==1);
if(nctemp473)
{
nctempchar1* nctemp482= cmd;
struct nctempchar1 *nctemp487;
static struct nctempchar1 nctemp488 = {{ 6}, (char*)" -O3 \0"};
nctemp487=&nctemp488;
nctempchar1* nctemp485= nctemp487;
nctempchar1* nctemp489=LibeStradd(nctemp482,nctemp485);
cmd=nctemp489;
}
else{
nctempchar1* nctemp495= cmd;
struct nctempchar1 *nctemp500;
static struct nctempchar1 nctemp501 = {{ 6}, (char*)" -O2 \0"};
nctemp500=&nctemp501;
nctempchar1* nctemp498= nctemp500;
nctempchar1* nctemp502=LibeStradd(nctemp495,nctemp498);
cmd=nctemp502;
}
int nctemp503 = (openmp ==1);
if(nctemp503)
{
nctempchar1* nctemp512= cmd;
struct nctempchar1 *nctemp517;
static struct nctempchar1 nctemp518 = {{ 11}, (char*)" -fopenmp \0"};
nctemp517=&nctemp518;
nctempchar1* nctemp515= nctemp517;
nctempchar1* nctemp519=LibeStradd(nctemp512,nctemp515);
cmd=nctemp519;
}
nctempchar1* nctemp525= cmd;
nctempchar1* nctemp528= file;
nctempchar1* nctemp531=LibeStradd(nctemp525,nctemp528);
cmd=nctemp531;
tmp = cmd;
nctempchar1* nctemp537= tmp;
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 3}, (char*)"\n\0"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
nctempchar1* nctemp544=LibeStradd(nctemp537,nctemp540);
cmd=nctemp544;
RunFree(tmp->a);
RunFree(tmp);
int nctemp548 = (show ==1);
if(nctemp548)
{
int nctemp553= 4;
nctempchar1* nctemp555= cmd;
int nctemp558=LibePuts(nctemp553,nctemp555);
int nctemp560= 4;
int nctemp562=LibeFlush(nctemp560);
}
nctempchar1* nctemp564= cmd;
int nctemp567=LibeSystem(nctemp564);
struct nctempchar1 *nctemp575;
static struct nctempchar1 nctemp576 = {{ 4}, (char*)"rm \0"};
nctemp575=&nctemp576;
nctempchar1* nctemp573= nctemp575;
nctempchar1* nctemp577= file;
nctempchar1* nctemp580=LibeStradd(nctemp573,nctemp577);
cmd=nctemp580;
tmp = cmd;
nctempchar1* nctemp586= cmd;
struct nctempchar1 *nctemp591;
static struct nctempchar1 nctemp592 = {{ 3}, (char*)"\n\0"};
nctemp591=&nctemp592;
nctempchar1* nctemp589= nctemp591;
nctempchar1* nctemp593=LibeStradd(nctemp586,nctemp589);
cmd=nctemp593;
RunFree(tmp->a);
RunFree(tmp);
int nctemp597 = (show ==1);
if(nctemp597)
{
int nctemp602= 4;
nctempchar1* nctemp604= cmd;
int nctemp607=LibePuts(nctemp602,nctemp604);
int nctemp609= 4;
int nctemp611=LibeFlush(nctemp609);
}
nctempchar1* nctemp613= cmd;
int nctemp616=LibeSystem(nctemp613);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show,nctempchar1 *dev)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp625=file->d[0];l =nctemp625;
struct nctempchar1 *nctemp634;
static struct nctempchar1 nctemp635 = {{ 45}, (char*)"nvcc  -use_fast_math --compiler-options -O2 \0"};
nctemp634=&nctemp635;
cmd=nctemp634;
nctempchar1* nctemp639= dev;
struct nctempchar1 *nctemp644;
static struct nctempchar1 nctemp645 = {{ 5}, (char*)"none\0"};
nctemp644=&nctemp645;
nctempchar1* nctemp642= nctemp644;
int nctemp646=LibeStrcmp(nctemp639,nctemp642);
int nctemp636 = (nctemp646 !=1);
if(nctemp636)
{
nctempchar1* nctemp653= cmd;
struct nctempchar1 *nctemp658;
static struct nctempchar1 nctemp659 = {{ 8}, (char*)" -arch \0"};
nctemp658=&nctemp659;
nctempchar1* nctemp656= nctemp658;
nctempchar1* nctemp660=LibeStradd(nctemp653,nctemp656);
cmd=nctemp660;
nctempchar1* nctemp666= cmd;
nctempchar1* nctemp669= dev;
nctempchar1* nctemp672=LibeStradd(nctemp666,nctemp669);
cmd=nctemp672;
nctempchar1* nctemp678= cmd;
struct nctempchar1 *nctemp683;
static struct nctempchar1 nctemp684 = {{ 2}, (char*)" \0"};
nctemp683=&nctemp684;
nctempchar1* nctemp681= nctemp683;
nctempchar1* nctemp685=LibeStradd(nctemp678,nctemp681);
cmd=nctemp685;
}
nctempchar1* nctemp691= cmd;
struct nctempchar1 *nctemp696;
static struct nctempchar1 nctemp697 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp696=&nctemp697;
nctempchar1* nctemp694= nctemp696;
nctempchar1* nctemp698=LibeStradd(nctemp691,nctemp694);
cmd=nctemp698;
int nctemp699 = (debug ==1);
if(nctemp699)
{
nctempchar1* nctemp708= cmd;
struct nctempchar1 *nctemp713;
static struct nctempchar1 nctemp714 = {{ 5}, (char*)" -g \0"};
nctemp713=&nctemp714;
nctempchar1* nctemp711= nctemp713;
nctempchar1* nctemp715=LibeStradd(nctemp708,nctemp711);
cmd=nctemp715;
}
int nctemp716 = (optimize ==1);
if(nctemp716)
{
nctempchar1* nctemp725= cmd;
struct nctempchar1 *nctemp730;
static struct nctempchar1 nctemp731 = {{ 6}, (char*)" -O3 \0"};
nctemp730=&nctemp731;
nctempchar1* nctemp728= nctemp730;
nctempchar1* nctemp732=LibeStradd(nctemp725,nctemp728);
cmd=nctemp732;
}
else{
nctempchar1* nctemp738= cmd;
struct nctempchar1 *nctemp743;
static struct nctempchar1 nctemp744 = {{ 6}, (char*)" -O2 \0"};
nctemp743=&nctemp744;
nctempchar1* nctemp741= nctemp743;
nctempchar1* nctemp745=LibeStradd(nctemp738,nctemp741);
cmd=nctemp745;
}
int nctemp746 = (openmp ==1);
if(nctemp746)
{
nctempchar1* nctemp755= cmd;
struct nctempchar1 *nctemp760;
static struct nctempchar1 nctemp761 = {{ 11}, (char*)" -fopenmp \0"};
nctemp760=&nctemp761;
nctempchar1* nctemp758= nctemp760;
nctempchar1* nctemp762=LibeStradd(nctemp755,nctemp758);
cmd=nctemp762;
}
nctempchar1* nctemp768= cmd;
nctempchar1* nctemp771= file;
nctempchar1* nctemp774=LibeStradd(nctemp768,nctemp771);
cmd=nctemp774;
tmp = cmd;
nctempchar1* nctemp780= cmd;
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 3}, (char*)"\n\0"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
nctempchar1* nctemp787=LibeStradd(nctemp780,nctemp783);
cmd=nctemp787;
RunFree(tmp->a);
RunFree(tmp);
int nctemp791 = (show ==1);
if(nctemp791)
{
int nctemp796= 4;
nctempchar1* nctemp798= cmd;
int nctemp801=LibePuts(nctemp796,nctemp798);
int nctemp803= 4;
int nctemp805=LibeFlush(nctemp803);
}
nctempchar1* nctemp807= cmd;
int nctemp810=LibeSystem(nctemp807);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp829;
static struct nctempchar1 nctemp830 = {{ 4}, (char*)"rm \0"};
nctemp829=&nctemp830;
int nctemp827=nctemp829->d[0];int nctemp833 = nctemp827 + l;
int nctemp835 = nctemp833 + 2;
int nctemp820=nctemp835;
nctempchar1 *nctemp819;
nctemp819=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp844;
static struct nctempchar1 nctemp845 = {{ 4}, (char*)"rm \0"};
nctemp844=&nctemp845;
int nctemp842=nctemp844->d[0];int nctemp848 = nctemp842 + l;
int nctemp850 = nctemp848 + 2;
nctemp819->d[0]=nctemp850;
nctemp819->a=(char *)RunMalloc(sizeof(char)*nctemp820);
cmd=nctemp819;
struct nctempchar1 *nctemp858;
static struct nctempchar1 nctemp859 = {{ 4}, (char*)"rm \0"};
nctemp858=&nctemp859;
nctempchar1* nctemp856= nctemp858;
nctempchar1* nctemp860= file;
nctempchar1* nctemp863=LibeStradd(nctemp856,nctemp860);
cmd=nctemp863;
tmp = cmd;
nctempchar1* nctemp869= cmd;
struct nctempchar1 *nctemp874;
static struct nctempchar1 nctemp875 = {{ 3}, (char*)"\n\0"};
nctemp874=&nctemp875;
nctempchar1* nctemp872= nctemp874;
nctempchar1* nctemp876=LibeStradd(nctemp869,nctemp872);
cmd=nctemp876;
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
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp905=file->d[0];l =nctemp905;
struct nctempchar1 *nctemp914;
static struct nctempchar1 nctemp915 = {{ 10}, (char*)"hipcc -c \0"};
nctemp914=&nctemp915;
tmp=nctemp914;
int nctemp922=160;
nctempchar1 *nctemp921;
nctemp921=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp921->d[0]=160;
nctemp921->a=(char *)RunMalloc(sizeof(char)*nctemp922);
cmd=nctemp921;
nctempchar1* nctemp926= tmp;
nctempchar1* nctemp929= cmd;
int nctemp932=LibeStrcpy(nctemp926,nctemp929);
int nctemp933 = (debug ==1);
if(nctemp933)
{
struct nctempchar1 *nctemp940;
static struct nctempchar1 nctemp941 = {{ 5}, (char*)" -g \0"};
nctemp940=&nctemp941;
nctempchar1* nctemp938= nctemp940;
nctempchar1* nctemp942= cmd;
int nctemp945=LibeStrcat(nctemp938,nctemp942);
}
int nctemp946 = (optimize ==1);
if(nctemp946)
{
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 6}, (char*)" -O3 \0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
nctempchar1* nctemp955= cmd;
int nctemp958=LibeStrcat(nctemp951,nctemp955);
}
int nctemp959 = (openmp ==1);
if(nctemp959)
{
struct nctempchar1 *nctemp966;
static struct nctempchar1 nctemp967 = {{ 11}, (char*)" -fopenmp \0"};
nctemp966=&nctemp967;
nctempchar1* nctemp964= nctemp966;
nctempchar1* nctemp968= cmd;
int nctemp971=LibeStrcat(nctemp964,nctemp968);
}
nctempchar1* nctemp973= file;
nctempchar1* nctemp976= cmd;
int nctemp979=LibeStrcat(nctemp973,nctemp976);
struct nctempchar1 *nctemp983;
static struct nctempchar1 nctemp984 = {{ 3}, (char*)"\n\0"};
nctemp983=&nctemp984;
nctempchar1* nctemp981= nctemp983;
nctempchar1* nctemp985= cmd;
int nctemp988=LibeStrcat(nctemp981,nctemp985);
int nctemp989 = (show ==1);
if(nctemp989)
{
int nctemp994= 4;
nctempchar1* nctemp996= cmd;
int nctemp999=LibePuts(nctemp994,nctemp996);
int nctemp1001= 4;
int nctemp1003=LibeFlush(nctemp1001);
}
nctempchar1* nctemp1005= cmd;
int nctemp1008=LibeSystem(nctemp1005);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1027;
static struct nctempchar1 nctemp1028 = {{ 4}, (char*)"rm \0"};
nctemp1027=&nctemp1028;
int nctemp1025=nctemp1027->d[0];int nctemp1031 = nctemp1025 + l;
int nctemp1033 = nctemp1031 + 2;
int nctemp1018=nctemp1033;
nctempchar1 *nctemp1017;
nctemp1017=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1042;
static struct nctempchar1 nctemp1043 = {{ 4}, (char*)"rm \0"};
nctemp1042=&nctemp1043;
int nctemp1040=nctemp1042->d[0];int nctemp1046 = nctemp1040 + l;
int nctemp1048 = nctemp1046 + 2;
nctemp1017->d[0]=nctemp1048;
nctemp1017->a=(char *)RunMalloc(sizeof(char)*nctemp1018);
cmd=nctemp1017;
struct nctempchar1 *nctemp1052;
static struct nctempchar1 nctemp1053 = {{ 4}, (char*)"rm \0"};
nctemp1052=&nctemp1053;
nctempchar1* nctemp1050= nctemp1052;
nctempchar1* nctemp1054= cmd;
int nctemp1057=LibeStrcpy(nctemp1050,nctemp1054);
nctempchar1* nctemp1059= file;
nctempchar1* nctemp1062= cmd;
int nctemp1065=LibeStrcat(nctemp1059,nctemp1062);
struct nctempchar1 *nctemp1069;
static struct nctempchar1 nctemp1070 = {{ 3}, (char*)"\n\0"};
nctemp1069=&nctemp1070;
nctempchar1* nctemp1067= nctemp1069;
nctempchar1* nctemp1071= cmd;
int nctemp1074=LibeStrcat(nctemp1067,nctemp1071);
int nctemp1075 = (show ==1);
if(nctemp1075)
{
int nctemp1080= 4;
nctempchar1* nctemp1082= cmd;
int nctemp1085=LibePuts(nctemp1080,nctemp1082);
int nctemp1087= 4;
int nctemp1089=LibeFlush(nctemp1087);
}
nctempchar1* nctemp1091= cmd;
int nctemp1094=LibeSystem(nctemp1091);
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
nctempchar1 *dev;
int options;
int i;
int l;
int nctemp1100=LibeInit();
struct nctempchar1 *nctemp1108;
static struct nctempchar1 nctemp1109 = {{ 5}, (char*)"none\0"};
nctemp1108=&nctemp1109;
nctempchar1* nctemp1106= nctemp1108;
nctempchar1* nctemp1110=LibeStrsave(nctemp1106);
dev=nctemp1110;
show = (debug = (optimize = (openmp = 0)));
btree = (atree = (table = (etable = (emit = 0))));
parse = (semantic = 0);
obj = 1;
options = 0;
int nctemp1112=PtreeInit();
int nctemp1114=CodeInit();
int nctemp1116=CodeArraycheckoff();
int nctemp1118=CodeDebugoff();
int nctemp1120= 1;
int nctemp1122=CodeSetarch(nctemp1120);
int nctemp1127=MainArgs->d[0];l =nctemp1127;
int nctemp1131 = (l <= 1);
if(nctemp1131)
{
struct nctempchar1 *nctemp1138;
static struct nctempchar1 nctemp1139 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1138=&nctemp1139;
nctempchar1* nctemp1136= nctemp1138;
int nctemp1140=MainError(nctemp1136);
}
i =1;
int nctemp1149=MainArgs->d[0];int nctemp1145 = (i < nctemp1149);
while(nctemp1145){
{
int nctemp1158=i;
nctempchar1* nctemp1156= MainArgs->a[nctemp1158].arg;
struct nctempchar1 *nctemp1163;
static struct nctempchar1 nctemp1164 = {{ 3}, (char*)"-h\0"};
nctemp1163=&nctemp1164;
nctempchar1* nctemp1161= nctemp1163;
int nctemp1165=LibeStrcmp(nctemp1156,nctemp1161);
int nctemp1153 = (nctemp1165 ==1);
if(nctemp1153)
{
int nctemp1170=CodeGetarch();
int nctemp1168= nctemp1170;
int nctemp1171=MainHelp(nctemp1168);
int nctemp1173=LibeExit();
}
int nctemp1179=i;
nctempchar1* nctemp1177= MainArgs->a[nctemp1179].arg;
struct nctempchar1 *nctemp1184;
static struct nctempchar1 nctemp1185 = {{ 3}, (char*)"-t\0"};
nctemp1184=&nctemp1185;
nctempchar1* nctemp1182= nctemp1184;
int nctemp1186=LibeStrcmp(nctemp1177,nctemp1182);
int nctemp1174 = (nctemp1186 ==1);
if(nctemp1174)
{
btree = 1;
parse = 1;
}
int nctemp1193=i;
nctempchar1* nctemp1191= MainArgs->a[nctemp1193].arg;
struct nctempchar1 *nctemp1198;
static struct nctempchar1 nctemp1199 = {{ 3}, (char*)"-a\0"};
nctemp1198=&nctemp1199;
nctempchar1* nctemp1196= nctemp1198;
int nctemp1200=LibeStrcmp(nctemp1191,nctemp1196);
int nctemp1188 = (nctemp1200 ==1);
if(nctemp1188)
{
atree = 1;
semantic = 1;
parse = 1;
}
int nctemp1207=i;
nctempchar1* nctemp1205= MainArgs->a[nctemp1207].arg;
struct nctempchar1 *nctemp1212;
static struct nctempchar1 nctemp1213 = {{ 3}, (char*)"-s\0"};
nctemp1212=&nctemp1213;
nctempchar1* nctemp1210= nctemp1212;
int nctemp1214=LibeStrcmp(nctemp1205,nctemp1210);
int nctemp1202 = (nctemp1214 ==1);
if(nctemp1202)
{
table = 1;
parse = 1;
semantic = 1;
}
int nctemp1221=i;
nctempchar1* nctemp1219= MainArgs->a[nctemp1221].arg;
struct nctempchar1 *nctemp1226;
static struct nctempchar1 nctemp1227 = {{ 3}, (char*)"-r\0"};
nctemp1226=&nctemp1227;
nctempchar1* nctemp1224= nctemp1226;
int nctemp1228=LibeStrcmp(nctemp1219,nctemp1224);
int nctemp1216 = (nctemp1228 ==1);
if(nctemp1216)
{
etable = 1;
parse = 1;
semantic = 1;
}
int nctemp1235=i;
nctempchar1* nctemp1233= MainArgs->a[nctemp1235].arg;
struct nctempchar1 *nctemp1240;
static struct nctempchar1 nctemp1241 = {{ 3}, (char*)"-e\0"};
nctemp1240=&nctemp1241;
nctempchar1* nctemp1238= nctemp1240;
int nctemp1242=LibeStrcmp(nctemp1233,nctemp1238);
int nctemp1230 = (nctemp1242 ==1);
if(nctemp1230)
{
emit = 1;
parse = 1;
semantic = 1;
}
int nctemp1249=i;
nctempchar1* nctemp1247= MainArgs->a[nctemp1249].arg;
struct nctempchar1 *nctemp1254;
static struct nctempchar1 nctemp1255 = {{ 3}, (char*)"-p\0"};
nctemp1254=&nctemp1255;
nctempchar1* nctemp1252= nctemp1254;
int nctemp1256=LibeStrcmp(nctemp1247,nctemp1252);
int nctemp1244 = (nctemp1256 ==1);
if(nctemp1244)
{
parse = 1;
}
int nctemp1263=i;
nctempchar1* nctemp1261= MainArgs->a[nctemp1263].arg;
struct nctempchar1 *nctemp1268;
static struct nctempchar1 nctemp1269 = {{ 3}, (char*)"-q\0"};
nctemp1268=&nctemp1269;
nctempchar1* nctemp1266= nctemp1268;
int nctemp1270=LibeStrcmp(nctemp1261,nctemp1266);
int nctemp1258 = (nctemp1270 ==1);
if(nctemp1258)
{
semantic = 1;
parse = 1;
}
int nctemp1277=i;
nctempchar1* nctemp1275= MainArgs->a[nctemp1277].arg;
struct nctempchar1 *nctemp1282;
static struct nctempchar1 nctemp1283 = {{ 3}, (char*)"-C\0"};
nctemp1282=&nctemp1283;
nctempchar1* nctemp1280= nctemp1282;
int nctemp1284=LibeStrcmp(nctemp1275,nctemp1280);
int nctemp1272 = (nctemp1284 ==1);
if(nctemp1272)
{
int nctemp1287=CodeArraycheckon();
int nctemp1289=CodeBreakon();
}
int nctemp1295=i;
nctempchar1* nctemp1293= MainArgs->a[nctemp1295].arg;
struct nctempchar1 *nctemp1300;
static struct nctempchar1 nctemp1301 = {{ 3}, (char*)"-i\0"};
nctemp1300=&nctemp1301;
nctempchar1* nctemp1298= nctemp1300;
int nctemp1302=LibeStrcmp(nctemp1293,nctemp1298);
int nctemp1290 = (nctemp1302 ==1);
if(nctemp1290)
{
int nctemp1305=CodeBreakon();
}
int nctemp1311=i;
nctempchar1* nctemp1309= MainArgs->a[nctemp1311].arg;
struct nctempchar1 *nctemp1316;
static struct nctempchar1 nctemp1317 = {{ 3}, (char*)"-g\0"};
nctemp1316=&nctemp1317;
nctempchar1* nctemp1314= nctemp1316;
int nctemp1318=LibeStrcmp(nctemp1309,nctemp1314);
int nctemp1306 = (nctemp1318 ==1);
if(nctemp1306)
{
debug = 1;
int nctemp1321=CodeDebugon();
}
int nctemp1327=i;
nctempchar1* nctemp1325= MainArgs->a[nctemp1327].arg;
struct nctempchar1 *nctemp1332;
static struct nctempchar1 nctemp1333 = {{ 3}, (char*)"-d\0"};
nctemp1332=&nctemp1333;
nctempchar1* nctemp1330= nctemp1332;
int nctemp1334=LibeStrcmp(nctemp1325,nctemp1330);
int nctemp1322 = (nctemp1334 ==1);
if(nctemp1322)
{
show = 1;
}
int nctemp1341=i;
nctempchar1* nctemp1339= MainArgs->a[nctemp1341].arg;
struct nctempchar1 *nctemp1346;
static struct nctempchar1 nctemp1347 = {{ 3}, (char*)"-O\0"};
nctemp1346=&nctemp1347;
nctempchar1* nctemp1344= nctemp1346;
int nctemp1348=LibeStrcmp(nctemp1339,nctemp1344);
int nctemp1336 = (nctemp1348 ==1);
if(nctemp1336)
{
optimize = 1;
}
int nctemp1355=i;
nctempchar1* nctemp1353= MainArgs->a[nctemp1355].arg;
struct nctempchar1 *nctemp1360;
static struct nctempchar1 nctemp1361 = {{ 3}, (char*)"-f\0"};
nctemp1360=&nctemp1361;
nctempchar1* nctemp1358= nctemp1360;
int nctemp1362=LibeStrcmp(nctemp1353,nctemp1358);
int nctemp1350 = (nctemp1362 ==1);
if(nctemp1350)
{
openmp = 1;
}
int nctemp1369=i;
nctempchar1* nctemp1367= MainArgs->a[nctemp1369].arg;
struct nctempchar1 *nctemp1374;
static struct nctempchar1 nctemp1375 = {{ 3}, (char*)"-c\0"};
nctemp1374=&nctemp1375;
nctempchar1* nctemp1372= nctemp1374;
int nctemp1376=LibeStrcmp(nctemp1367,nctemp1372);
int nctemp1364 = (nctemp1376 ==1);
if(nctemp1364)
{
obj = 0;
}
int nctemp1383=i;
nctempchar1* nctemp1381= MainArgs->a[nctemp1383].arg;
struct nctempchar1 *nctemp1388;
static struct nctempchar1 nctemp1389 = {{ 3}, (char*)"-x\0"};
nctemp1388=&nctemp1389;
nctempchar1* nctemp1386= nctemp1388;
int nctemp1390=LibeStrcmp(nctemp1381,nctemp1386);
int nctemp1378 = (nctemp1390 ==1);
if(nctemp1378)
{
int nctemp1395=MainArgs->d[0];int nctemp1392 = (nctemp1395 > i);
if(nctemp1392)
{
int nctemp1410 = i + 1;
int nctemp1405=nctemp1410;
nctempchar1* nctemp1403= MainArgs->a[nctemp1405].arg;
struct nctempchar1 *nctemp1414;
static struct nctempchar1 nctemp1415 = {{ 4}, (char*)"cpu\0"};
nctemp1414=&nctemp1415;
nctempchar1* nctemp1412= nctemp1414;
int nctemp1416=LibeStrcmp(nctemp1403,nctemp1412);
int nctemp1400 = (nctemp1416 ==1);
if(nctemp1400)
{
int nctemp1419= 1;
int nctemp1421=CodeSetarch(nctemp1419);
}
else{
int nctemp1432 = i + 1;
int nctemp1427=nctemp1432;
nctempchar1* nctemp1425= MainArgs->a[nctemp1427].arg;
struct nctempchar1 *nctemp1436;
static struct nctempchar1 nctemp1437 = {{ 5}, (char*)"cuda\0"};
nctemp1436=&nctemp1437;
nctempchar1* nctemp1434= nctemp1436;
int nctemp1438=LibeStrcmp(nctemp1425,nctemp1434);
int nctemp1422 = (nctemp1438 ==1);
if(nctemp1422)
{
int nctemp1441= 2;
int nctemp1443=CodeSetarch(nctemp1441);
}
else{
struct nctempchar1 *nctemp1447;
static struct nctempchar1 nctemp1448 = {{ 23}, (char*)"Illegal option value\n\0"};
nctemp1447=&nctemp1448;
nctempchar1* nctemp1445= nctemp1447;
int nctemp1449=MainError(nctemp1445);
}
}
}
else{
int nctemp1451= 1;
int nctemp1453=CodeSetarch(nctemp1451);
}
}
int nctemp1459=i;
nctempchar1* nctemp1457= MainArgs->a[nctemp1459].arg;
struct nctempchar1 *nctemp1464;
static struct nctempchar1 nctemp1465 = {{ 3}, (char*)"-y\0"};
nctemp1464=&nctemp1465;
nctempchar1* nctemp1462= nctemp1464;
int nctemp1466=LibeStrcmp(nctemp1457,nctemp1462);
int nctemp1454 = (nctemp1466 ==1);
if(nctemp1454)
{
int nctemp1471=MainArgs->d[0];int nctemp1468 = (nctemp1471 > i);
if(nctemp1468)
{
int nctemp1488 = i + 1;
int nctemp1483=nctemp1488;
nctempchar1* nctemp1481= MainArgs->a[nctemp1483].arg;
nctempchar1* nctemp1490=LibeStrsave(nctemp1481);
dev=nctemp1490;
}
}
int nctemp1497=i;
int nctemp1499=0;
char nctemp1502=(char)('-');
int nctemp1494 = (MainArgs->a[nctemp1497].arg->a[nctemp1499] ==nctemp1502);
int nctemp1491 = (nctemp1494 ==1);
if(nctemp1491)
{
options = (options + 1);
}
}
int nctemp1514 = i + 1;
i =nctemp1514;
int nctemp1519=MainArgs->d[0];int nctemp1515 = (i < nctemp1519);
nctemp1145=nctemp1515;
}
int nctemp1529 = (parse ==0);
int nctemp1534 = (semantic ==0);
int nctemp1526 = (nctemp1529 && nctemp1534);
int nctemp1539 = (emit ==0);
int nctemp1523 = (nctemp1526 && nctemp1539);
if(nctemp1523)
{
parse = (semantic = (emit = 1));
}
int nctemp1550 = options + 1;
int nctemp1552=MainArgs->d[0];int nctemp1543 = (nctemp1550 >= nctemp1552);
if(nctemp1543)
{
struct nctempchar1 *nctemp1559;
static struct nctempchar1 nctemp1560 = {{ 26}, (char*)"Missing input file name\n\0"};
nctemp1559=&nctemp1560;
nctempchar1* nctemp1557= nctemp1559;
int nctemp1561=MainError(nctemp1557);
}
else{
int nctemp1571=MainArgs->d[0];int nctemp1576 = nctemp1571 - 1;
int nctemp1567=nctemp1576;
infile=MainArgs->a[nctemp1567].arg;
}
int nctemp1578 = (emit ==1);
if(nctemp1578)
{
nctempchar1* nctemp1587= infile;
int nctemp1592=CodeGetarch();
int nctemp1590= nctemp1592;
nctempchar1* nctemp1593=MainFout(nctemp1587,nctemp1590);
outfile=nctemp1593;
nctempchar1* nctemp1598= outfile;
struct nctempchar1 *nctemp1603;
static struct nctempchar1 nctemp1604 = {{ 2}, (char*)"w\0"};
nctemp1603=&nctemp1604;
nctempchar1* nctemp1601= nctemp1603;
int nctemp1605=LibeOpen(nctemp1598,nctemp1601);
fd =nctemp1605;
int nctemp1607= fd;
int nctemp1609=CodeSetfdout(nctemp1607);
}
nctempchar1* nctemp1613= infile;
int nctemp1616=ScanInit(nctemp1613);
int nctemp1610 = (nctemp1616 ==0);
if(nctemp1610)
{
int nctemp1619=LibeExit();
}
int nctemp1621= 1;
int nctemp1623=ScanSetline(nctemp1621);
int nctemp1625=ParseIniparse();
int nctemp1626 = (emit ==1);
if(nctemp1626)
{
int nctemp1631=CodePreamble();
}
struct symbol* nctemp1635=SymMktable();
struct symbol* nctemp1633= nctemp1635;
int nctemp1636=SymSetetp(nctemp1633);
int nctemp1637 = (parse ==1);
if(nctemp1637)
{
struct tree* nctemp1645=ParseParse();
p =nctemp1645;
}
int nctemp1646 = (btree ==1);
if(nctemp1646)
{
struct tree* nctemp1651= p;
int nctemp1653= 0;
int nctemp1655=PtreePrtree(nctemp1651,nctemp1653);
}
int nctemp1656 = (p !=0);
int nctemp1660=nctemp1656;
while(nctemp1660)
{{
int nctemp1661 = (semantic ==1);
if(nctemp1661)
{
int nctemp1665 = (p !=0);
if(nctemp1665)
{
struct tree* nctemp1670= p;
struct symbol* nctemp1674=SymGetetp();
struct symbol* nctemp1672= nctemp1674;
int nctemp1675=SemSem(nctemp1670,nctemp1672);
}
int nctemp1676 = (atree ==1);
if(nctemp1676)
{
struct tree* nctemp1681= p;
int nctemp1683= 0;
int nctemp1685=PtreePrtree(nctemp1681,nctemp1683);
}
int nctemp1686 = (table ==1);
if(nctemp1686)
{
struct symbol* nctemp1693=SymGetltp();
int nctemp1690 = (nctemp1693 !=0);
if(nctemp1690)
{
int nctemp1696= 3;
struct symbol* nctemp1700=SymGetltp();
struct symbol* nctemp1698= nctemp1700;
int nctemp1701= 0;
int nctemp1703=SymPrsym(nctemp1696,nctemp1698,nctemp1701);
}
}
}
int nctemp1704 = (emit ==1);
if(nctemp1704)
{
int nctemp1708 = (p !=0);
if(nctemp1708)
{
struct tree* nctemp1713= p;
struct symbol* nctemp1717=SymGetetp();
struct symbol* nctemp1715= nctemp1717;
int nctemp1718=CodeCode(nctemp1713,nctemp1715);
}
}
struct tree* nctemp1720= p;
int nctemp1722=PtreeRmtree(nctemp1720);
struct symbol* nctemp1726=SymGetltp();
struct symbol* nctemp1724= nctemp1726;
int nctemp1727=SymRmtable(nctemp1724);
int nctemp1728 = (parse ==1);
if(nctemp1728)
{
struct tree* nctemp1736=ParseParse();
p =nctemp1736;
int nctemp1737 = (btree ==1);
if(nctemp1737)
{
struct tree* nctemp1742= p;
int nctemp1744= 0;
int nctemp1746=PtreePrtree(nctemp1742,nctemp1744);
}
}
}
int nctemp1747 = (p !=0);
nctemp1660=nctemp1747;}int nctemp1754=ParseGetlookahead();
int nctemp1751 = (nctemp1754 !=19);
if(nctemp1751)
{
struct nctempchar1 *nctemp1759;
static struct nctempchar1 nctemp1760 = {{ 36}, (char*)"Parsing ended before reaching EOF\n\0"};
nctemp1759=&nctemp1760;
nctempchar1* nctemp1757= nctemp1759;
int nctemp1761=MainError(nctemp1757);
}
int nctemp1762 = (etable ==1);
if(nctemp1762)
{
int nctemp1767= 4;
int nctemp1769=LibeFlush(nctemp1767);
struct symbol* nctemp1773=SymGetetp();
int nctemp1770 = (nctemp1773 !=0);
if(nctemp1770)
{
int nctemp1776= 3;
struct symbol* nctemp1780=SymGetetp();
struct symbol* nctemp1778= nctemp1780;
int nctemp1781= 0;
int nctemp1783=SymPrsym(nctemp1776,nctemp1778,nctemp1781);
}
}
int nctemp1784 = (emit ==1);
if(nctemp1784)
{
int nctemp1789=CodePostamble();
}
int nctemp1793 = (emit ==1);
int nctemp1798 = (obj ==1);
int nctemp1790 = (nctemp1793 && nctemp1798);
if(nctemp1790)
{
int nctemp1805=CodeGetarch();
int nctemp1802 = (nctemp1805 ==1);
if(nctemp1802)
{
nctempchar1* nctemp1808= outfile;
int nctemp1811= debug;
int nctemp1813= optimize;
int nctemp1815= openmp;
int nctemp1817= show;
int nctemp1819=MainCcompcpu(nctemp1808,nctemp1811,nctemp1813,nctemp1815,nctemp1817);
}
else{
int nctemp1823=CodeGetarch();
int nctemp1820 = (nctemp1823 ==2);
if(nctemp1820)
{
nctempchar1* nctemp1826= outfile;
int nctemp1829= debug;
int nctemp1831= optimize;
int nctemp1833= openmp;
int nctemp1835= show;
nctempchar1* nctemp1837= dev;
int nctemp1840=MainCcompcuda(nctemp1826,nctemp1829,nctemp1831,nctemp1833,nctemp1835,nctemp1837);
}
else{
int nctemp1844=CodeGetarch();
int nctemp1841 = (nctemp1844 ==3);
if(nctemp1841)
{
nctempchar1* nctemp1847= outfile;
int nctemp1850= debug;
int nctemp1852= optimize;
int nctemp1854= openmp;
int nctemp1856= show;
int nctemp1858=MainCcomphip(nctemp1847,nctemp1850,nctemp1852,nctemp1854,nctemp1856);
}
else{
struct nctempchar1 *nctemp1862;
static struct nctempchar1 nctemp1863 = {{ 23}, (char*)"Unknown architecture\n\0"};
nctemp1862=&nctemp1863;
nctempchar1* nctemp1860= nctemp1862;
int nctemp1864=MainError(nctemp1860);
}
}
}
}
int nctemp1865 = (emit ==1);
if(nctemp1865)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1873= fd;
int nctemp1875=LibeClose(nctemp1873);
}
nctempchar1* nctemp1882= infile;
nctempchar1* nctemp1885=MainFmod(nctemp1882);
nctempchar1* nctemp1880= nctemp1885;
struct nctempchar1 *nctemp1888;
static struct nctempchar1 nctemp1889 = {{ 2}, (char*)"w\0"};
nctemp1888=&nctemp1889;
nctempchar1* nctemp1886= nctemp1888;
int nctemp1890=LibeOpen(nctemp1880,nctemp1886);
fd =nctemp1890;
int nctemp1892= fd;
struct symbol* nctemp1896=SymGetetp();
struct symbol* nctemp1894= nctemp1896;
int nctemp1897= 0;
int nctemp1899=SymExport(nctemp1892,nctemp1894,nctemp1897);
int nctemp1901= 3;
int nctemp1903=LibeFlush(nctemp1901);
return 1;
}
