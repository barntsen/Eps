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
static struct nctempchar1 nctemp32 = {{ 31}, (char*)"File extension have to be .e\n\0"};
nctemp31=&nctemp32;
nctempchar1* nctemp29= nctemp31;
int nctemp33=LibePuts(nctemp27,nctemp29);
int nctemp35=LibeExit();
}
return 1;
}
int MainHelp (int arch)
{
int nctemp38= 4;
struct nctempchar1 *nctemp42;
static struct nctempchar1 nctemp43 = {{ 10}, (char*)"Command\n\0"};
nctemp42=&nctemp43;
nctempchar1* nctemp40= nctemp42;
int nctemp44=LibePuts(nctemp38,nctemp40);
int nctemp46= 4;
struct nctempchar1 *nctemp50;
static struct nctempchar1 nctemp51 = {{ 3}, (char*)"\n\0"};
nctemp50=&nctemp51;
nctempchar1* nctemp48= nctemp50;
int nctemp52=LibePuts(nctemp46,nctemp48);
int nctemp53 = (arch ==1);
if(nctemp53)
{
int nctemp58= 4;
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 56}, (char*)"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=LibePuts(nctemp58,nctemp60);
int nctemp66= 4;
struct nctempchar1 *nctemp70;
static struct nctempchar1 nctemp71 = {{ 3}, (char*)"\n\0"};
nctemp70=&nctemp71;
nctempchar1* nctemp68= nctemp70;
int nctemp72=LibePuts(nctemp66,nctemp68);
int nctemp74= 4;
struct nctempchar1 *nctemp78;
static struct nctempchar1 nctemp79 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp78=&nctemp79;
nctempchar1* nctemp76= nctemp78;
int nctemp80=LibePuts(nctemp74,nctemp76);
}
else{
int nctemp81 = (arch ==2);
if(nctemp81)
{
int nctemp86= 4;
struct nctempchar1 *nctemp90;
static struct nctempchar1 nctemp91 = {{ 57}, (char*)"  ecc [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp90=&nctemp91;
nctempchar1* nctemp88= nctemp90;
int nctemp92=LibePuts(nctemp86,nctemp88);
int nctemp94= 4;
struct nctempchar1 *nctemp98;
static struct nctempchar1 nctemp99 = {{ 3}, (char*)"\n\0"};
nctemp98=&nctemp99;
nctempchar1* nctemp96= nctemp98;
int nctemp100=LibePuts(nctemp94,nctemp96);
int nctemp102= 4;
struct nctempchar1 *nctemp106;
static struct nctempchar1 nctemp107 = {{ 59}, (char*)"  The ecc command (without options) compiles an eps file\n\0"};
nctemp106=&nctemp107;
nctempchar1* nctemp104= nctemp106;
int nctemp108=LibePuts(nctemp102,nctemp104);
}
else{
int nctemp109 = (arch ==3);
if(nctemp109)
{
int nctemp114= 4;
struct nctempchar1 *nctemp118;
static struct nctempchar1 nctemp119 = {{ 57}, (char*)"  ech [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
int nctemp120=LibePuts(nctemp114,nctemp116);
int nctemp122= 4;
struct nctempchar1 *nctemp126;
static struct nctempchar1 nctemp127 = {{ 3}, (char*)"\n\0"};
nctemp126=&nctemp127;
nctempchar1* nctemp124= nctemp126;
int nctemp128=LibePuts(nctemp122,nctemp124);
int nctemp130= 4;
struct nctempchar1 *nctemp134;
static struct nctempchar1 nctemp135 = {{ 59}, (char*)"  The ech command (without options) compiles an eps file\n\0"};
nctemp134=&nctemp135;
nctempchar1* nctemp132= nctemp134;
int nctemp136=LibePuts(nctemp130,nctemp132);
}
else{
struct nctempchar1 *nctemp140;
static struct nctempchar1 nctemp141 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp140=&nctemp141;
nctempchar1* nctemp138= nctemp140;
int nctemp142=MainError(nctemp138);
}
}
}
int nctemp144= 4;
struct nctempchar1 *nctemp148;
static struct nctempchar1 nctemp149 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp148=&nctemp149;
nctempchar1* nctemp146= nctemp148;
int nctemp150=LibePuts(nctemp144,nctemp146);
int nctemp152= 4;
struct nctempchar1 *nctemp156;
static struct nctempchar1 nctemp157 = {{ 3}, (char*)"\n\0"};
nctemp156=&nctemp157;
nctempchar1* nctemp154= nctemp156;
int nctemp158=LibePuts(nctemp152,nctemp154);
int nctemp160= 4;
struct nctempchar1 *nctemp164;
static struct nctempchar1 nctemp165 = {{ 14}, (char*)"  Options: \n\0"};
nctemp164=&nctemp165;
nctempchar1* nctemp162= nctemp164;
int nctemp166=LibePuts(nctemp160,nctemp162);
int nctemp168= 4;
struct nctempchar1 *nctemp172;
static struct nctempchar1 nctemp173 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp172=&nctemp173;
nctempchar1* nctemp170= nctemp172;
int nctemp174=LibePuts(nctemp168,nctemp170);
int nctemp176= 4;
struct nctempchar1 *nctemp180;
static struct nctempchar1 nctemp181 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp180=&nctemp181;
nctempchar1* nctemp178= nctemp180;
int nctemp182=LibePuts(nctemp176,nctemp178);
int nctemp184= 4;
struct nctempchar1 *nctemp188;
static struct nctempchar1 nctemp189 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp188=&nctemp189;
nctempchar1* nctemp186= nctemp188;
int nctemp190=LibePuts(nctemp184,nctemp186);
int nctemp192= 4;
struct nctempchar1 *nctemp196;
static struct nctempchar1 nctemp197 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp196=&nctemp197;
nctempchar1* nctemp194= nctemp196;
int nctemp198=LibePuts(nctemp192,nctemp194);
int nctemp200= 4;
struct nctempchar1 *nctemp204;
static struct nctempchar1 nctemp205 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp204=&nctemp205;
nctempchar1* nctemp202= nctemp204;
int nctemp206=LibePuts(nctemp200,nctemp202);
int nctemp208= 4;
struct nctempchar1 *nctemp212;
static struct nctempchar1 nctemp213 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp212=&nctemp213;
nctempchar1* nctemp210= nctemp212;
int nctemp214=LibePuts(nctemp208,nctemp210);
int nctemp216= 4;
struct nctempchar1 *nctemp220;
static struct nctempchar1 nctemp221 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp220=&nctemp221;
nctempchar1* nctemp218= nctemp220;
int nctemp222=LibePuts(nctemp216,nctemp218);
int nctemp224= 4;
struct nctempchar1 *nctemp228;
static struct nctempchar1 nctemp229 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp228=&nctemp229;
nctempchar1* nctemp226= nctemp228;
int nctemp230=LibePuts(nctemp224,nctemp226);
int nctemp231 = (arch ==1);
if(nctemp231)
{
int nctemp236= 4;
struct nctempchar1 *nctemp240;
static struct nctempchar1 nctemp241 = {{ 57}, (char*)"   -c : Produce c-code but do not generate object code\n\0"};
nctemp240=&nctemp241;
nctempchar1* nctemp238= nctemp240;
int nctemp242=LibePuts(nctemp236,nctemp238);
}
else{
int nctemp243 = (arch ==2);
if(nctemp243)
{
int nctemp248= 4;
struct nctempchar1 *nctemp252;
static struct nctempchar1 nctemp253 = {{ 64}, (char*)"   -c : Produce c++/cuda-code but do not generate object code\n\0"};
nctemp252=&nctemp253;
nctempchar1* nctemp250= nctemp252;
int nctemp254=LibePuts(nctemp248,nctemp250);
}
else{
int nctemp255 = (arch ==3);
if(nctemp255)
{
int nctemp260= 4;
struct nctempchar1 *nctemp264;
static struct nctempchar1 nctemp265 = {{ 63}, (char*)"   -c : Produce c++/hip-code but do not generate object code\n\0"};
nctemp264=&nctemp265;
nctempchar1* nctemp262= nctemp264;
int nctemp266=LibePuts(nctemp260,nctemp262);
}
else{
struct nctempchar1 *nctemp270;
static struct nctempchar1 nctemp271 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp270=&nctemp271;
nctempchar1* nctemp268= nctemp270;
int nctemp272=MainError(nctemp268);
}
}
}
int nctemp274= 4;
struct nctempchar1 *nctemp278;
static struct nctempchar1 nctemp279 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp278=&nctemp279;
nctempchar1* nctemp276= nctemp278;
int nctemp280=LibePuts(nctemp274,nctemp276);
int nctemp282= 4;
struct nctempchar1 *nctemp286;
static struct nctempchar1 nctemp287 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp286=&nctemp287;
nctempchar1* nctemp284= nctemp286;
int nctemp288=LibePuts(nctemp282,nctemp284);
int nctemp290= 4;
struct nctempchar1 *nctemp294;
static struct nctempchar1 nctemp295 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp294=&nctemp295;
nctempchar1* nctemp292= nctemp294;
int nctemp296=LibePuts(nctemp290,nctemp292);
int nctemp298= 4;
struct nctempchar1 *nctemp302;
static struct nctempchar1 nctemp303 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp302=&nctemp303;
nctempchar1* nctemp300= nctemp302;
int nctemp304=LibePuts(nctemp298,nctemp300);
int nctemp306= 4;
int nctemp308=LibeFlush(nctemp306);
return 1;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp314=infile->d[0];l =nctemp314;
int nctemp318 = (l < 3);
if(nctemp318)
{
struct nctempchar1 *nctemp325;
static struct nctempchar1 nctemp326 = {{ 19}, (char*)" Illegal file name\0"};
nctemp325=&nctemp326;
nctempchar1* nctemp323= nctemp325;
int nctemp327=MainError(nctemp323);
}
int nctemp336 = l - 2;
int nctemp331=nctemp336;
char nctemp338=(char)('e');
int nctemp328 = (infile->a[nctemp331] !=nctemp338);
if(nctemp328)
{
struct nctempchar1 *nctemp344;
static struct nctempchar1 nctemp345 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp344=&nctemp345;
nctempchar1* nctemp342= nctemp344;
int nctemp346=MainError(nctemp342);
}
int nctemp347 = (arch ==1);
if(nctemp347)
{
int nctemp357=l;
nctempchar1 *nctemp356;
nctemp356=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp356->d[0]=l;
nctemp356->a=(char *)RunMalloc(sizeof(char)*nctemp357);
outfile=nctemp356;
nctempchar1* nctemp361= infile;
nctempchar1* nctemp364= outfile;
int nctemp367=LibeStrcpy(nctemp361,nctemp364);
int nctemp376 = l - 2;
int nctemp371=nctemp376;
char nctemp378=(char)('c');
outfile->a[nctemp371] =nctemp378;
}
else{
int nctemp381 = (arch ==2);
if(nctemp381)
{
int nctemp396 = l + 2;
int nctemp391=nctemp396;
nctempchar1 *nctemp390;
nctemp390=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp401 = l + 2;
nctemp390->d[0]=nctemp401;
nctemp390->a=(char *)RunMalloc(sizeof(char)*nctemp391);
outfile=nctemp390;
nctempchar1* nctemp403= infile;
nctempchar1* nctemp406= outfile;
int nctemp409=LibeStrcpy(nctemp403,nctemp406);
int nctemp418 = l - 2;
int nctemp413=nctemp418;
char nctemp420=(char)('c');
outfile->a[nctemp413] =nctemp420;
int nctemp431 = l - 1;
int nctemp426=nctemp431;
char nctemp433=(char)('p');
outfile->a[nctemp426] =nctemp433;
int nctemp444 = l - 0;
int nctemp439=nctemp444;
char nctemp446=(char)('p');
outfile->a[nctemp439] =nctemp446;
}
else{
int nctemp449 = (arch ==3);
if(nctemp449)
{
int nctemp464 = l + 2;
int nctemp459=nctemp464;
nctempchar1 *nctemp458;
nctemp458=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp469 = l + 2;
nctemp458->d[0]=nctemp469;
nctemp458->a=(char *)RunMalloc(sizeof(char)*nctemp459);
outfile=nctemp458;
nctempchar1* nctemp471= infile;
nctempchar1* nctemp474= outfile;
int nctemp477=LibeStrcpy(nctemp471,nctemp474);
int nctemp486 = l - 2;
int nctemp481=nctemp486;
char nctemp488=(char)('c');
outfile->a[nctemp481] =nctemp488;
int nctemp499 = l - 1;
int nctemp494=nctemp499;
char nctemp501=(char)('p');
outfile->a[nctemp494] =nctemp501;
int nctemp512 = l - 0;
int nctemp507=nctemp512;
char nctemp514=(char)('p');
outfile->a[nctemp507] =nctemp514;
}
else{
struct nctempchar1 *nctemp520;
static struct nctempchar1 nctemp521 = {{ 20}, (char*)"Unknow architecture\0"};
nctemp520=&nctemp521;
nctempchar1* nctemp518= nctemp520;
int nctemp522=MainError(nctemp518);
}
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp529=infile->d[0];l =nctemp529;
int nctemp533 = (l < 3);
if(nctemp533)
{
struct nctempchar1 *nctemp540;
static struct nctempchar1 nctemp541 = {{ 19}, (char*)" Illegal file name\0"};
nctemp540=&nctemp541;
nctempchar1* nctemp538= nctemp540;
int nctemp542=MainError(nctemp538);
}
int nctemp551 = l - 2;
int nctemp546=nctemp551;
char nctemp553=(char)('e');
int nctemp543 = (infile->a[nctemp546] !=nctemp553);
if(nctemp543)
{
struct nctempchar1 *nctemp559;
static struct nctempchar1 nctemp560 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp559=&nctemp560;
nctempchar1* nctemp557= nctemp559;
int nctemp561=MainError(nctemp557);
}
int nctemp568=l;
nctempchar1 *nctemp567;
nctemp567=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp567->d[0]=l;
nctemp567->a=(char *)RunMalloc(sizeof(char)*nctemp568);
outfile=nctemp567;
nctempchar1* nctemp572= infile;
nctempchar1* nctemp575= outfile;
int nctemp578=LibeStrcpy(nctemp572,nctemp575);
int nctemp587 = l - 2;
int nctemp582=nctemp587;
char nctemp589=(char)('m');
outfile->a[nctemp582] =nctemp589;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
struct nctempchar1 *nctemp599;
static struct nctempchar1 nctemp600 = {{ 20}, (char*)"gcc -c -ffast-math \0"};
nctemp599=&nctemp600;
cmd=nctemp599;
int nctemp601 = (debug ==1);
if(nctemp601)
{
nctempchar1* nctemp610= cmd;
struct nctempchar1 *nctemp615;
static struct nctempchar1 nctemp616 = {{ 5}, (char*)" -g \0"};
nctemp615=&nctemp616;
nctempchar1* nctemp613= nctemp615;
nctempchar1* nctemp617=LibeStradd(nctemp610,nctemp613);
cmd=nctemp617;
}
int nctemp618 = (optimize ==1);
if(nctemp618)
{
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
tmp=cmd;
nctempchar1* nctemp675= tmp;
struct nctempchar1 *nctemp680;
static struct nctempchar1 nctemp681 = {{ 3}, (char*)"\n\0"};
nctemp680=&nctemp681;
nctempchar1* nctemp678= nctemp680;
nctempchar1* nctemp682=LibeStradd(nctemp675,nctemp678);
cmd=nctemp682;
RunFree(tmp->a);
RunFree(tmp);
int nctemp686 = (show ==1);
if(nctemp686)
{
int nctemp691= 4;
nctempchar1* nctemp693= cmd;
int nctemp696=LibePuts(nctemp691,nctemp693);
int nctemp698= 4;
int nctemp700=LibeFlush(nctemp698);
}
nctempchar1* nctemp702= cmd;
int nctemp705=LibeSystem(nctemp702);
struct nctempchar1 *nctemp713;
static struct nctempchar1 nctemp714 = {{ 4}, (char*)"rm \0"};
nctemp713=&nctemp714;
nctempchar1* nctemp711= nctemp713;
nctempchar1* nctemp715= file;
nctempchar1* nctemp718=LibeStradd(nctemp711,nctemp715);
cmd=nctemp718;
tmp=cmd;
nctempchar1* nctemp730= cmd;
struct nctempchar1 *nctemp735;
static struct nctempchar1 nctemp736 = {{ 3}, (char*)"\n\0"};
nctemp735=&nctemp736;
nctempchar1* nctemp733= nctemp735;
nctempchar1* nctemp737=LibeStradd(nctemp730,nctemp733);
cmd=nctemp737;
RunFree(tmp->a);
RunFree(tmp);
int nctemp741 = (show ==1);
if(nctemp741)
{
int nctemp746= 4;
nctempchar1* nctemp748= cmd;
int nctemp751=LibePuts(nctemp746,nctemp748);
int nctemp753= 4;
int nctemp755=LibeFlush(nctemp753);
}
nctempchar1* nctemp757= cmd;
int nctemp760=LibeSystem(nctemp757);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp769=file->d[0];l =nctemp769;
struct nctempchar1 *nctemp778;
static struct nctempchar1 nctemp779 = {{ 57}, (char*)"nvcc -arch=native -use_fast_math --compiler-options -O2 \0"};
nctemp778=&nctemp779;
cmd=nctemp778;
nctempchar1* nctemp785= cmd;
struct nctempchar1 *nctemp790;
static struct nctempchar1 nctemp791 = {{ 43}, (char*)" --compiler-options -ffast-math  -c -x cu \0"};
nctemp790=&nctemp791;
nctempchar1* nctemp788= nctemp790;
nctempchar1* nctemp792=LibeStradd(nctemp785,nctemp788);
cmd=nctemp792;
int nctemp793 = (debug ==1);
if(nctemp793)
{
nctempchar1* nctemp802= cmd;
struct nctempchar1 *nctemp807;
static struct nctempchar1 nctemp808 = {{ 5}, (char*)" -g \0"};
nctemp807=&nctemp808;
nctempchar1* nctemp805= nctemp807;
nctempchar1* nctemp809=LibeStradd(nctemp802,nctemp805);
cmd=nctemp809;
}
int nctemp810 = (optimize ==1);
if(nctemp810)
{
nctempchar1* nctemp819= cmd;
struct nctempchar1 *nctemp824;
static struct nctempchar1 nctemp825 = {{ 6}, (char*)" -O2 \0"};
nctemp824=&nctemp825;
nctempchar1* nctemp822= nctemp824;
nctempchar1* nctemp826=LibeStradd(nctemp819,nctemp822);
cmd=nctemp826;
}
int nctemp827 = (openmp ==1);
if(nctemp827)
{
nctempchar1* nctemp836= cmd;
struct nctempchar1 *nctemp841;
static struct nctempchar1 nctemp842 = {{ 11}, (char*)" -fopenmp \0"};
nctemp841=&nctemp842;
nctempchar1* nctemp839= nctemp841;
nctempchar1* nctemp843=LibeStradd(nctemp836,nctemp839);
cmd=nctemp843;
}
nctempchar1* nctemp849= cmd;
nctempchar1* nctemp852= file;
nctempchar1* nctemp855=LibeStradd(nctemp849,nctemp852);
cmd=nctemp855;
tmp=cmd;
nctempchar1* nctemp867= cmd;
struct nctempchar1 *nctemp872;
static struct nctempchar1 nctemp873 = {{ 3}, (char*)"\n\0"};
nctemp872=&nctemp873;
nctempchar1* nctemp870= nctemp872;
nctempchar1* nctemp874=LibeStradd(nctemp867,nctemp870);
cmd=nctemp874;
RunFree(tmp->a);
RunFree(tmp);
int nctemp878 = (show ==1);
if(nctemp878)
{
int nctemp883= 4;
nctempchar1* nctemp885= cmd;
int nctemp888=LibePuts(nctemp883,nctemp885);
int nctemp890= 4;
int nctemp892=LibeFlush(nctemp890);
}
nctempchar1* nctemp894= cmd;
int nctemp897=LibeSystem(nctemp894);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp916;
static struct nctempchar1 nctemp917 = {{ 4}, (char*)"rm \0"};
nctemp916=&nctemp917;
int nctemp914=nctemp916->d[0];int nctemp920 = nctemp914 + l;
int nctemp922 = nctemp920 + 2;
int nctemp907=nctemp922;
nctempchar1 *nctemp906;
nctemp906=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 4}, (char*)"rm \0"};
nctemp931=&nctemp932;
int nctemp929=nctemp931->d[0];int nctemp935 = nctemp929 + l;
int nctemp937 = nctemp935 + 2;
nctemp906->d[0]=nctemp937;
nctemp906->a=(char *)RunMalloc(sizeof(char)*nctemp907);
cmd=nctemp906;
struct nctempchar1 *nctemp945;
static struct nctempchar1 nctemp946 = {{ 4}, (char*)"rm \0"};
nctemp945=&nctemp946;
nctempchar1* nctemp943= nctemp945;
nctempchar1* nctemp947= file;
nctempchar1* nctemp950=LibeStradd(nctemp943,nctemp947);
cmd=nctemp950;
tmp=cmd;
nctempchar1* nctemp962= cmd;
struct nctempchar1 *nctemp967;
static struct nctempchar1 nctemp968 = {{ 3}, (char*)"\n\0"};
nctemp967=&nctemp968;
nctempchar1* nctemp965= nctemp967;
nctempchar1* nctemp969=LibeStradd(nctemp962,nctemp965);
cmd=nctemp969;
int nctemp970 = (show ==1);
if(nctemp970)
{
int nctemp975= 4;
nctempchar1* nctemp977= cmd;
int nctemp980=LibePuts(nctemp975,nctemp977);
int nctemp982= 4;
int nctemp984=LibeFlush(nctemp982);
}
nctempchar1* nctemp986= cmd;
int nctemp989=LibeSystem(nctemp986);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp998=file->d[0];l =nctemp998;
struct nctempchar1 *nctemp1007;
static struct nctempchar1 nctemp1008 = {{ 10}, (char*)"hipcc -c \0"};
nctemp1007=&nctemp1008;
tmp=nctemp1007;
int nctemp1015=160;
nctempchar1 *nctemp1014;
nctemp1014=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1014->d[0]=160;
nctemp1014->a=(char *)RunMalloc(sizeof(char)*nctemp1015);
cmd=nctemp1014;
nctempchar1* nctemp1019= tmp;
nctempchar1* nctemp1022= cmd;
int nctemp1025=LibeStrcpy(nctemp1019,nctemp1022);
int nctemp1026 = (debug ==1);
if(nctemp1026)
{
struct nctempchar1 *nctemp1033;
static struct nctempchar1 nctemp1034 = {{ 5}, (char*)" -g \0"};
nctemp1033=&nctemp1034;
nctempchar1* nctemp1031= nctemp1033;
nctempchar1* nctemp1035= cmd;
int nctemp1038=LibeStrcat(nctemp1031,nctemp1035);
}
int nctemp1039 = (optimize ==1);
if(nctemp1039)
{
struct nctempchar1 *nctemp1046;
static struct nctempchar1 nctemp1047 = {{ 6}, (char*)" -O3 \0"};
nctemp1046=&nctemp1047;
nctempchar1* nctemp1044= nctemp1046;
nctempchar1* nctemp1048= cmd;
int nctemp1051=LibeStrcat(nctemp1044,nctemp1048);
}
int nctemp1052 = (openmp ==1);
if(nctemp1052)
{
struct nctempchar1 *nctemp1059;
static struct nctempchar1 nctemp1060 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1059=&nctemp1060;
nctempchar1* nctemp1057= nctemp1059;
nctempchar1* nctemp1061= cmd;
int nctemp1064=LibeStrcat(nctemp1057,nctemp1061);
}
nctempchar1* nctemp1066= file;
nctempchar1* nctemp1069= cmd;
int nctemp1072=LibeStrcat(nctemp1066,nctemp1069);
struct nctempchar1 *nctemp1076;
static struct nctempchar1 nctemp1077 = {{ 3}, (char*)"\n\0"};
nctemp1076=&nctemp1077;
nctempchar1* nctemp1074= nctemp1076;
nctempchar1* nctemp1078= cmd;
int nctemp1081=LibeStrcat(nctemp1074,nctemp1078);
int nctemp1082 = (show ==1);
if(nctemp1082)
{
int nctemp1087= 4;
nctempchar1* nctemp1089= cmd;
int nctemp1092=LibePuts(nctemp1087,nctemp1089);
int nctemp1094= 4;
int nctemp1096=LibeFlush(nctemp1094);
}
nctempchar1* nctemp1098= cmd;
int nctemp1101=LibeSystem(nctemp1098);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1120;
static struct nctempchar1 nctemp1121 = {{ 4}, (char*)"rm \0"};
nctemp1120=&nctemp1121;
int nctemp1118=nctemp1120->d[0];int nctemp1124 = nctemp1118 + l;
int nctemp1126 = nctemp1124 + 2;
int nctemp1111=nctemp1126;
nctempchar1 *nctemp1110;
nctemp1110=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 4}, (char*)"rm \0"};
nctemp1135=&nctemp1136;
int nctemp1133=nctemp1135->d[0];int nctemp1139 = nctemp1133 + l;
int nctemp1141 = nctemp1139 + 2;
nctemp1110->d[0]=nctemp1141;
nctemp1110->a=(char *)RunMalloc(sizeof(char)*nctemp1111);
cmd=nctemp1110;
struct nctempchar1 *nctemp1145;
static struct nctempchar1 nctemp1146 = {{ 4}, (char*)"rm \0"};
nctemp1145=&nctemp1146;
nctempchar1* nctemp1143= nctemp1145;
nctempchar1* nctemp1147= cmd;
int nctemp1150=LibeStrcpy(nctemp1143,nctemp1147);
nctempchar1* nctemp1152= file;
nctempchar1* nctemp1155= cmd;
int nctemp1158=LibeStrcat(nctemp1152,nctemp1155);
struct nctempchar1 *nctemp1162;
static struct nctempchar1 nctemp1163 = {{ 3}, (char*)"\n\0"};
nctemp1162=&nctemp1163;
nctempchar1* nctemp1160= nctemp1162;
nctempchar1* nctemp1164= cmd;
int nctemp1167=LibeStrcat(nctemp1160,nctemp1164);
int nctemp1168 = (show ==1);
if(nctemp1168)
{
int nctemp1173= 4;
nctempchar1* nctemp1175= cmd;
int nctemp1178=LibePuts(nctemp1173,nctemp1175);
int nctemp1180= 4;
int nctemp1182=LibeFlush(nctemp1180);
}
nctempchar1* nctemp1184= cmd;
int nctemp1187=LibeSystem(nctemp1184);
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
int nctemp1193=LibeInit();
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
int nctemp1243=PtreeInit();
int nctemp1245=CodeInit();
int nctemp1247=CodeArraycheckoff();
int nctemp1249=CodeDebugoff();
int nctemp1251= 1;
int nctemp1253=CodeSetarch(nctemp1251);
int nctemp1258=MainArgs->d[0];l =nctemp1258;
int nctemp1262 = (l <= 1);
if(nctemp1262)
{
struct nctempchar1 *nctemp1269;
static struct nctempchar1 nctemp1270 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1269=&nctemp1270;
nctempchar1* nctemp1267= nctemp1269;
int nctemp1271=MainError(nctemp1267);
}
i =1;
loop =1;
int nctemp1280 = (loop ==1);
int nctemp1284=nctemp1280;
while(nctemp1284)
{{
int nctemp1290=i;
nctempchar1* nctemp1288= MainArgs->a[nctemp1290].arg;
struct nctempchar1 *nctemp1295;
static struct nctempchar1 nctemp1296 = {{ 3}, (char*)"-h\0"};
nctemp1295=&nctemp1296;
nctempchar1* nctemp1293= nctemp1295;
int nctemp1297=LibeStrcmp(nctemp1288,nctemp1293);
int nctemp1285 = (nctemp1297 ==1);
if(nctemp1285)
{
int nctemp1300= 1;
int nctemp1302=MainHelp(nctemp1300);
int nctemp1304=LibeExit();
}
int nctemp1310=i;
nctempchar1* nctemp1308= MainArgs->a[nctemp1310].arg;
struct nctempchar1 *nctemp1315;
static struct nctempchar1 nctemp1316 = {{ 3}, (char*)"-t\0"};
nctemp1315=&nctemp1316;
nctempchar1* nctemp1313= nctemp1315;
int nctemp1317=LibeStrcmp(nctemp1308,nctemp1313);
int nctemp1305 = (nctemp1317 ==1);
if(nctemp1305)
{
btree =1;
parse =1;
}
int nctemp1332=i;
nctempchar1* nctemp1330= MainArgs->a[nctemp1332].arg;
struct nctempchar1 *nctemp1337;
static struct nctempchar1 nctemp1338 = {{ 3}, (char*)"-a\0"};
nctemp1337=&nctemp1338;
nctempchar1* nctemp1335= nctemp1337;
int nctemp1339=LibeStrcmp(nctemp1330,nctemp1335);
int nctemp1327 = (nctemp1339 ==1);
if(nctemp1327)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1358=i;
nctempchar1* nctemp1356= MainArgs->a[nctemp1358].arg;
struct nctempchar1 *nctemp1363;
static struct nctempchar1 nctemp1364 = {{ 3}, (char*)"-s\0"};
nctemp1363=&nctemp1364;
nctempchar1* nctemp1361= nctemp1363;
int nctemp1365=LibeStrcmp(nctemp1356,nctemp1361);
int nctemp1353 = (nctemp1365 ==1);
if(nctemp1353)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1384=i;
nctempchar1* nctemp1382= MainArgs->a[nctemp1384].arg;
struct nctempchar1 *nctemp1389;
static struct nctempchar1 nctemp1390 = {{ 3}, (char*)"-r\0"};
nctemp1389=&nctemp1390;
nctempchar1* nctemp1387= nctemp1389;
int nctemp1391=LibeStrcmp(nctemp1382,nctemp1387);
int nctemp1379 = (nctemp1391 ==1);
if(nctemp1379)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1410=i;
nctempchar1* nctemp1408= MainArgs->a[nctemp1410].arg;
struct nctempchar1 *nctemp1415;
static struct nctempchar1 nctemp1416 = {{ 3}, (char*)"-e\0"};
nctemp1415=&nctemp1416;
nctempchar1* nctemp1413= nctemp1415;
int nctemp1417=LibeStrcmp(nctemp1408,nctemp1413);
int nctemp1405 = (nctemp1417 ==1);
if(nctemp1405)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1436=i;
nctempchar1* nctemp1434= MainArgs->a[nctemp1436].arg;
struct nctempchar1 *nctemp1441;
static struct nctempchar1 nctemp1442 = {{ 3}, (char*)"-p\0"};
nctemp1441=&nctemp1442;
nctempchar1* nctemp1439= nctemp1441;
int nctemp1443=LibeStrcmp(nctemp1434,nctemp1439);
int nctemp1431 = (nctemp1443 ==1);
if(nctemp1431)
{
parse =1;
}
int nctemp1454=i;
nctempchar1* nctemp1452= MainArgs->a[nctemp1454].arg;
struct nctempchar1 *nctemp1459;
static struct nctempchar1 nctemp1460 = {{ 3}, (char*)"-q\0"};
nctemp1459=&nctemp1460;
nctempchar1* nctemp1457= nctemp1459;
int nctemp1461=LibeStrcmp(nctemp1452,nctemp1457);
int nctemp1449 = (nctemp1461 ==1);
if(nctemp1449)
{
semantic =1;
parse =1;
}
int nctemp1476=i;
nctempchar1* nctemp1474= MainArgs->a[nctemp1476].arg;
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 3}, (char*)"-C\0"};
nctemp1481=&nctemp1482;
nctempchar1* nctemp1479= nctemp1481;
int nctemp1483=LibeStrcmp(nctemp1474,nctemp1479);
int nctemp1471 = (nctemp1483 ==1);
if(nctemp1471)
{
int nctemp1486=CodeArraycheckon();
}
int nctemp1492=i;
nctempchar1* nctemp1490= MainArgs->a[nctemp1492].arg;
struct nctempchar1 *nctemp1497;
static struct nctempchar1 nctemp1498 = {{ 3}, (char*)"-g\0"};
nctemp1497=&nctemp1498;
nctempchar1* nctemp1495= nctemp1497;
int nctemp1499=LibeStrcmp(nctemp1490,nctemp1495);
int nctemp1487 = (nctemp1499 ==1);
if(nctemp1487)
{
debug =1;
int nctemp1506=CodeDebugon();
}
int nctemp1512=i;
nctempchar1* nctemp1510= MainArgs->a[nctemp1512].arg;
struct nctempchar1 *nctemp1517;
static struct nctempchar1 nctemp1518 = {{ 3}, (char*)"-d\0"};
nctemp1517=&nctemp1518;
nctempchar1* nctemp1515= nctemp1517;
int nctemp1519=LibeStrcmp(nctemp1510,nctemp1515);
int nctemp1507 = (nctemp1519 ==1);
if(nctemp1507)
{
show =1;
}
int nctemp1530=i;
nctempchar1* nctemp1528= MainArgs->a[nctemp1530].arg;
struct nctempchar1 *nctemp1535;
static struct nctempchar1 nctemp1536 = {{ 3}, (char*)"-O\0"};
nctemp1535=&nctemp1536;
nctempchar1* nctemp1533= nctemp1535;
int nctemp1537=LibeStrcmp(nctemp1528,nctemp1533);
int nctemp1525 = (nctemp1537 ==1);
if(nctemp1525)
{
optimize =1;
}
int nctemp1548=i;
nctempchar1* nctemp1546= MainArgs->a[nctemp1548].arg;
struct nctempchar1 *nctemp1553;
static struct nctempchar1 nctemp1554 = {{ 3}, (char*)"-f\0"};
nctemp1553=&nctemp1554;
nctempchar1* nctemp1551= nctemp1553;
int nctemp1555=LibeStrcmp(nctemp1546,nctemp1551);
int nctemp1543 = (nctemp1555 ==1);
if(nctemp1543)
{
openmp =1;
}
int nctemp1566=i;
nctempchar1* nctemp1564= MainArgs->a[nctemp1566].arg;
struct nctempchar1 *nctemp1571;
static struct nctempchar1 nctemp1572 = {{ 3}, (char*)"-c\0"};
nctemp1571=&nctemp1572;
nctempchar1* nctemp1569= nctemp1571;
int nctemp1573=LibeStrcmp(nctemp1564,nctemp1569);
int nctemp1561 = (nctemp1573 ==1);
if(nctemp1561)
{
obj =0;
}
int nctemp1586 = i + 1;
int nctemp1579 = (nctemp1586 < l);
if(nctemp1579)
{
int nctemp1594=i;
int nctemp1596=0;
char nctemp1599=(char)('-');
int nctemp1591 = (MainArgs->a[nctemp1594].arg->a[nctemp1596] ==nctemp1599);
int nctemp1588 = (nctemp1591 ==1);
if(nctemp1588)
{
loop =1;
int nctemp1615 = i + 1;
i =nctemp1615;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1624 = (loop ==1);
nctemp1284=nctemp1624;}int nctemp1634 = (parse ==0);
int nctemp1639 = (semantic ==0);
int nctemp1631 = (nctemp1634 && nctemp1639);
int nctemp1644 = (emit ==0);
int nctemp1628 = (nctemp1631 && nctemp1644);
if(nctemp1628)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1664=MainArgs->d[0];int nctemp1660 = (i >= nctemp1664);
if(nctemp1660)
{
struct nctempchar1 *nctemp1671;
static struct nctempchar1 nctemp1672 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1671=&nctemp1672;
nctempchar1* nctemp1669= nctemp1671;
int nctemp1673=MainError(nctemp1669);
}
else{
int nctemp1679=i;
infile=MainArgs->a[nctemp1679].arg;
}
int nctemp1682 = (emit ==1);
if(nctemp1682)
{
nctempchar1* nctemp1691= infile;
int nctemp1694= 1;
nctempchar1* nctemp1696=MainFout(nctemp1691,nctemp1694);
outfile=nctemp1696;
nctempchar1* nctemp1701= outfile;
struct nctempchar1 *nctemp1706;
static struct nctempchar1 nctemp1707 = {{ 2}, (char*)"w\0"};
nctemp1706=&nctemp1707;
nctempchar1* nctemp1704= nctemp1706;
int nctemp1708=LibeOpen(nctemp1701,nctemp1704);
fd =nctemp1708;
int nctemp1710= fd;
int nctemp1712=CodeSetfdout(nctemp1710);
}
nctempchar1* nctemp1716= infile;
int nctemp1719=ScanInit(nctemp1716);
int nctemp1713 = (nctemp1719 ==0);
if(nctemp1713)
{
int nctemp1722=LibeExit();
}
int nctemp1724= 1;
int nctemp1726=ScanSetline(nctemp1724);
int nctemp1728=ParseIniparse();
int nctemp1729 = (emit ==1);
if(nctemp1729)
{
int nctemp1734=CodePreamble();
}
struct symbol* nctemp1738=SymMktable();
struct symbol* nctemp1736= nctemp1738;
struct symbol* nctemp1739=SymSetetp(nctemp1736);
int nctemp1740 = (parse ==1);
if(nctemp1740)
{
struct tree* nctemp1748=ParseParse();
p =nctemp1748;
}
int nctemp1749 = (btree ==1);
if(nctemp1749)
{
struct tree* nctemp1754= p;
int nctemp1756= 0;
int nctemp1758=PtreePrtree(nctemp1754,nctemp1756);
}
int nctemp1759 = (p !=0);
int nctemp1763=nctemp1759;
while(nctemp1763)
{{
int nctemp1764 = (semantic ==1);
if(nctemp1764)
{
int nctemp1768 = (p !=0);
if(nctemp1768)
{
struct tree* nctemp1773= p;
struct symbol* nctemp1777=SymGetetp();
struct symbol* nctemp1775= nctemp1777;
int nctemp1778=SemSem(nctemp1773,nctemp1775);
}
int nctemp1779 = (atree ==1);
if(nctemp1779)
{
struct tree* nctemp1784= p;
int nctemp1786= 0;
int nctemp1788=PtreePrtree(nctemp1784,nctemp1786);
}
int nctemp1789 = (table ==1);
if(nctemp1789)
{
struct symbol* nctemp1796=SymGetltp();
int nctemp1793 = (nctemp1796 !=0);
if(nctemp1793)
{
int nctemp1799= 3;
struct symbol* nctemp1803=SymGetltp();
struct symbol* nctemp1801= nctemp1803;
int nctemp1804= 0;
int nctemp1806=SymPrsym(nctemp1799,nctemp1801,nctemp1804);
}
}
}
int nctemp1807 = (emit ==1);
if(nctemp1807)
{
int nctemp1811 = (p !=0);
if(nctemp1811)
{
struct tree* nctemp1816= p;
struct symbol* nctemp1820=SymGetetp();
struct symbol* nctemp1818= nctemp1820;
int nctemp1821=CodeCode(nctemp1816,nctemp1818);
}
}
struct tree* nctemp1823= p;
int nctemp1825=PtreeRmtree(nctemp1823);
struct symbol* nctemp1829=SymGetltp();
struct symbol* nctemp1827= nctemp1829;
int nctemp1830=SymRmtable(nctemp1827);
int nctemp1831 = (parse ==1);
if(nctemp1831)
{
struct tree* nctemp1839=ParseParse();
p =nctemp1839;
int nctemp1840 = (btree ==1);
if(nctemp1840)
{
struct tree* nctemp1845= p;
int nctemp1847= 0;
int nctemp1849=PtreePrtree(nctemp1845,nctemp1847);
}
}
}
int nctemp1850 = (p !=0);
nctemp1763=nctemp1850;}int nctemp1857=ParseGetlookahead();
int nctemp1854 = (nctemp1857 !=19);
if(nctemp1854)
{
struct nctempchar1 *nctemp1862;
static struct nctempchar1 nctemp1863 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1862=&nctemp1863;
nctempchar1* nctemp1860= nctemp1862;
int nctemp1864=MainError(nctemp1860);
}
int nctemp1865 = (etable ==1);
if(nctemp1865)
{
int nctemp1870= 4;
int nctemp1872=LibeFlush(nctemp1870);
struct symbol* nctemp1876=SymGetetp();
int nctemp1873 = (nctemp1876 !=0);
if(nctemp1873)
{
int nctemp1879= 3;
struct symbol* nctemp1883=SymGetetp();
struct symbol* nctemp1881= nctemp1883;
int nctemp1884= 0;
int nctemp1886=SymPrsym(nctemp1879,nctemp1881,nctemp1884);
}
}
int nctemp1887 = (emit ==1);
if(nctemp1887)
{
int nctemp1892=CodePostamble();
}
int nctemp1896 = (emit ==1);
int nctemp1901 = (obj ==1);
int nctemp1893 = (nctemp1896 && nctemp1901);
if(nctemp1893)
{
int nctemp1905 = (1 ==1);
if(nctemp1905)
{
nctempchar1* nctemp1910= outfile;
int nctemp1913= debug;
int nctemp1915= optimize;
int nctemp1917= openmp;
int nctemp1919= show;
int nctemp1921=MainCcompcpu(nctemp1910,nctemp1913,nctemp1915,nctemp1917,nctemp1919);
}
else{
int nctemp1922 = (1 ==2);
if(nctemp1922)
{
nctempchar1* nctemp1927= outfile;
int nctemp1930= debug;
int nctemp1932= optimize;
int nctemp1934= openmp;
int nctemp1936= show;
int nctemp1938=MainCcompcuda(nctemp1927,nctemp1930,nctemp1932,nctemp1934,nctemp1936);
}
else{
int nctemp1939 = (1 ==3);
if(nctemp1939)
{
nctempchar1* nctemp1944= outfile;
int nctemp1947= debug;
int nctemp1949= optimize;
int nctemp1951= openmp;
int nctemp1953= show;
int nctemp1955=MainCcomphip(nctemp1944,nctemp1947,nctemp1949,nctemp1951,nctemp1953);
}
else{
struct nctempchar1 *nctemp1959;
static struct nctempchar1 nctemp1960 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1959=&nctemp1960;
nctempchar1* nctemp1957= nctemp1959;
int nctemp1961=MainError(nctemp1957);
}
}
}
}
int nctemp1962 = (emit ==1);
if(nctemp1962)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1970= fd;
int nctemp1972=LibeClose(nctemp1970);
}
nctempchar1* nctemp1979= infile;
nctempchar1* nctemp1982=MainFmod(nctemp1979);
nctempchar1* nctemp1977= nctemp1982;
struct nctempchar1 *nctemp1985;
static struct nctempchar1 nctemp1986 = {{ 2}, (char*)"w\0"};
nctemp1985=&nctemp1986;
nctempchar1* nctemp1983= nctemp1985;
int nctemp1987=LibeOpen(nctemp1977,nctemp1983);
fd =nctemp1987;
int nctemp1989= fd;
struct symbol* nctemp1993=SymGetetp();
struct symbol* nctemp1991= nctemp1993;
int nctemp1994= 0;
int nctemp1996=SymExport(nctemp1989,nctemp1991,nctemp1994);
int nctemp1998= 3;
int nctemp2000=LibeFlush(nctemp1998);
return 1;
}
