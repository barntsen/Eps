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
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
int ScanInfile;
nctempchar1 *ScanInfilename;
nctempchar1 *ScanFile;
nctempchar1 * ScanGetfile ();
int ScanGetline ();
int ScanError (nctempchar1 *s);
int ScanInit (nctempchar1 *infile);
int ScanGetch ();
int ScanIncline ();
int ScanUngetch ();
int ScanWhite ();
int ScanComment ();
int ScanLcomment ();
int ScanFtail (int p);
int ScanLex ();
nctempchar1 * ScanSetfile (nctempchar1 *fname);
int ScanInclude ();
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
nctempchar1* nctemp4=ScanGetfile();
nctempchar1* nctemp2= nctemp4;
int nctemp7=ScanGetline();
int nctemp5= nctemp7;
nctempchar1* nctemp8= s;
int nctemp11=ErrError(nctemp2,nctemp5,nctemp8);
}
int MainHelp (int arch)
{
int nctemp13= 4;
struct nctempchar1 *nctemp17;
static struct nctempchar1 nctemp18 = {{ 10}, (char*)"Command\n\0"};
nctemp17=&nctemp18;
nctempchar1* nctemp15= nctemp17;
int nctemp19=LibePuts(nctemp13,nctemp15);
int nctemp21= 4;
struct nctempchar1 *nctemp25;
static struct nctempchar1 nctemp26 = {{ 3}, (char*)"\n\0"};
nctemp25=&nctemp26;
nctempchar1* nctemp23= nctemp25;
int nctemp27=LibePuts(nctemp21,nctemp23);
int nctemp28 = (arch ==1);
if(nctemp28)
{
int nctemp33= 4;
struct nctempchar1 *nctemp37;
static struct nctempchar1 nctemp38 = {{ 56}, (char*)"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp37=&nctemp38;
nctempchar1* nctemp35= nctemp37;
int nctemp39=LibePuts(nctemp33,nctemp35);
int nctemp41= 4;
struct nctempchar1 *nctemp45;
static struct nctempchar1 nctemp46 = {{ 3}, (char*)"\n\0"};
nctemp45=&nctemp46;
nctempchar1* nctemp43= nctemp45;
int nctemp47=LibePuts(nctemp41,nctemp43);
int nctemp49= 4;
struct nctempchar1 *nctemp53;
static struct nctempchar1 nctemp54 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp53=&nctemp54;
nctempchar1* nctemp51= nctemp53;
int nctemp55=LibePuts(nctemp49,nctemp51);
}
else{
int nctemp56 = (arch ==2);
if(nctemp56)
{
int nctemp61= 4;
struct nctempchar1 *nctemp65;
static struct nctempchar1 nctemp66 = {{ 57}, (char*)"  ecc [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp65=&nctemp66;
nctempchar1* nctemp63= nctemp65;
int nctemp67=LibePuts(nctemp61,nctemp63);
int nctemp69= 4;
struct nctempchar1 *nctemp73;
static struct nctempchar1 nctemp74 = {{ 3}, (char*)"\n\0"};
nctemp73=&nctemp74;
nctempchar1* nctemp71= nctemp73;
int nctemp75=LibePuts(nctemp69,nctemp71);
int nctemp77= 4;
struct nctempchar1 *nctemp81;
static struct nctempchar1 nctemp82 = {{ 59}, (char*)"  The ecc command (without options) compiles an eps file\n\0"};
nctemp81=&nctemp82;
nctempchar1* nctemp79= nctemp81;
int nctemp83=LibePuts(nctemp77,nctemp79);
}
else{
int nctemp84 = (arch ==3);
if(nctemp84)
{
int nctemp89= 4;
struct nctempchar1 *nctemp93;
static struct nctempchar1 nctemp94 = {{ 57}, (char*)"  ech [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp93=&nctemp94;
nctempchar1* nctemp91= nctemp93;
int nctemp95=LibePuts(nctemp89,nctemp91);
int nctemp97= 4;
struct nctempchar1 *nctemp101;
static struct nctempchar1 nctemp102 = {{ 3}, (char*)"\n\0"};
nctemp101=&nctemp102;
nctempchar1* nctemp99= nctemp101;
int nctemp103=LibePuts(nctemp97,nctemp99);
int nctemp105= 4;
struct nctempchar1 *nctemp109;
static struct nctempchar1 nctemp110 = {{ 59}, (char*)"  The ech command (without options) compiles an eps file\n\0"};
nctemp109=&nctemp110;
nctempchar1* nctemp107= nctemp109;
int nctemp111=LibePuts(nctemp105,nctemp107);
}
else{
struct nctempchar1 *nctemp115;
static struct nctempchar1 nctemp116 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp115=&nctemp116;
nctempchar1* nctemp113= nctemp115;
int nctemp117=MainError(nctemp113);
}
}
}
int nctemp119= 4;
struct nctempchar1 *nctemp123;
static struct nctempchar1 nctemp124 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp123=&nctemp124;
nctempchar1* nctemp121= nctemp123;
int nctemp125=LibePuts(nctemp119,nctemp121);
int nctemp127= 4;
struct nctempchar1 *nctemp131;
static struct nctempchar1 nctemp132 = {{ 3}, (char*)"\n\0"};
nctemp131=&nctemp132;
nctempchar1* nctemp129= nctemp131;
int nctemp133=LibePuts(nctemp127,nctemp129);
int nctemp135= 4;
struct nctempchar1 *nctemp139;
static struct nctempchar1 nctemp140 = {{ 14}, (char*)"  Options: \n\0"};
nctemp139=&nctemp140;
nctempchar1* nctemp137= nctemp139;
int nctemp141=LibePuts(nctemp135,nctemp137);
int nctemp143= 4;
struct nctempchar1 *nctemp147;
static struct nctempchar1 nctemp148 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp147=&nctemp148;
nctempchar1* nctemp145= nctemp147;
int nctemp149=LibePuts(nctemp143,nctemp145);
int nctemp151= 4;
struct nctempchar1 *nctemp155;
static struct nctempchar1 nctemp156 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp155=&nctemp156;
nctempchar1* nctemp153= nctemp155;
int nctemp157=LibePuts(nctemp151,nctemp153);
int nctemp159= 4;
struct nctempchar1 *nctemp163;
static struct nctempchar1 nctemp164 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp163=&nctemp164;
nctempchar1* nctemp161= nctemp163;
int nctemp165=LibePuts(nctemp159,nctemp161);
int nctemp167= 4;
struct nctempchar1 *nctemp171;
static struct nctempchar1 nctemp172 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp171=&nctemp172;
nctempchar1* nctemp169= nctemp171;
int nctemp173=LibePuts(nctemp167,nctemp169);
int nctemp175= 4;
struct nctempchar1 *nctemp179;
static struct nctempchar1 nctemp180 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp179=&nctemp180;
nctempchar1* nctemp177= nctemp179;
int nctemp181=LibePuts(nctemp175,nctemp177);
int nctemp183= 4;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
int nctemp189=LibePuts(nctemp183,nctemp185);
int nctemp191= 4;
struct nctempchar1 *nctemp195;
static struct nctempchar1 nctemp196 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp195=&nctemp196;
nctempchar1* nctemp193= nctemp195;
int nctemp197=LibePuts(nctemp191,nctemp193);
int nctemp199= 4;
struct nctempchar1 *nctemp203;
static struct nctempchar1 nctemp204 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
int nctemp205=LibePuts(nctemp199,nctemp201);
int nctemp206 = (arch ==1);
if(nctemp206)
{
int nctemp211= 4;
struct nctempchar1 *nctemp215;
static struct nctempchar1 nctemp216 = {{ 57}, (char*)"   -c : Produce c-code but do not generate object code\n\0"};
nctemp215=&nctemp216;
nctempchar1* nctemp213= nctemp215;
int nctemp217=LibePuts(nctemp211,nctemp213);
}
else{
int nctemp218 = (arch ==2);
if(nctemp218)
{
int nctemp223= 4;
struct nctempchar1 *nctemp227;
static struct nctempchar1 nctemp228 = {{ 64}, (char*)"   -c : Produce c++/cuda-code but do not generate object code\n\0"};
nctemp227=&nctemp228;
nctempchar1* nctemp225= nctemp227;
int nctemp229=LibePuts(nctemp223,nctemp225);
}
else{
int nctemp230 = (arch ==3);
if(nctemp230)
{
int nctemp235= 4;
struct nctempchar1 *nctemp239;
static struct nctempchar1 nctemp240 = {{ 63}, (char*)"   -c : Produce c++/hip-code but do not generate object code\n\0"};
nctemp239=&nctemp240;
nctempchar1* nctemp237= nctemp239;
int nctemp241=LibePuts(nctemp235,nctemp237);
}
else{
struct nctempchar1 *nctemp245;
static struct nctempchar1 nctemp246 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp245=&nctemp246;
nctempchar1* nctemp243= nctemp245;
int nctemp247=MainError(nctemp243);
}
}
}
int nctemp249= 4;
struct nctempchar1 *nctemp253;
static struct nctempchar1 nctemp254 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp253=&nctemp254;
nctempchar1* nctemp251= nctemp253;
int nctemp255=LibePuts(nctemp249,nctemp251);
int nctemp257= 4;
struct nctempchar1 *nctemp261;
static struct nctempchar1 nctemp262 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp261=&nctemp262;
nctempchar1* nctemp259= nctemp261;
int nctemp263=LibePuts(nctemp257,nctemp259);
int nctemp265= 4;
struct nctempchar1 *nctemp269;
static struct nctempchar1 nctemp270 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp269=&nctemp270;
nctempchar1* nctemp267= nctemp269;
int nctemp271=LibePuts(nctemp265,nctemp267);
int nctemp273= 4;
struct nctempchar1 *nctemp277;
static struct nctempchar1 nctemp278 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp277=&nctemp278;
nctempchar1* nctemp275= nctemp277;
int nctemp279=LibePuts(nctemp273,nctemp275);
int nctemp281= 4;
int nctemp283=LibeFlush(nctemp281);
return 1;
}
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp289=infile->d[0];l =nctemp289;
int nctemp293 = (l < 3);
if(nctemp293)
{
struct nctempchar1 *nctemp300;
static struct nctempchar1 nctemp301 = {{ 19}, (char*)" Illegal file name\0"};
nctemp300=&nctemp301;
nctempchar1* nctemp298= nctemp300;
int nctemp302=MainError(nctemp298);
}
int nctemp311 = l - 2;
int nctemp306=nctemp311;
char nctemp313=(char)('e');
int nctemp303 = (infile->a[nctemp306] !=nctemp313);
if(nctemp303)
{
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=MainError(nctemp317);
}
int nctemp322 = (arch ==1);
if(nctemp322)
{
int nctemp332=l;
nctempchar1 *nctemp331;
nctemp331=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp331->d[0]=l;
nctemp331->a=(char *)RunMalloc(sizeof(char)*nctemp332);
outfile=nctemp331;
nctempchar1* nctemp336= infile;
nctempchar1* nctemp339= outfile;
int nctemp342=LibeStrcpy(nctemp336,nctemp339);
int nctemp351 = l - 2;
int nctemp346=nctemp351;
char nctemp353=(char)('c');
outfile->a[nctemp346] =nctemp353;
}
else{
int nctemp356 = (arch ==2);
if(nctemp356)
{
int nctemp371 = l + 2;
int nctemp366=nctemp371;
nctempchar1 *nctemp365;
nctemp365=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp376 = l + 2;
nctemp365->d[0]=nctemp376;
nctemp365->a=(char *)RunMalloc(sizeof(char)*nctemp366);
outfile=nctemp365;
nctempchar1* nctemp378= infile;
nctempchar1* nctemp381= outfile;
int nctemp384=LibeStrcpy(nctemp378,nctemp381);
int nctemp393 = l - 2;
int nctemp388=nctemp393;
char nctemp395=(char)('c');
outfile->a[nctemp388] =nctemp395;
int nctemp406 = l - 1;
int nctemp401=nctemp406;
char nctemp408=(char)('p');
outfile->a[nctemp401] =nctemp408;
int nctemp419 = l - 0;
int nctemp414=nctemp419;
char nctemp421=(char)('p');
outfile->a[nctemp414] =nctemp421;
}
else{
int nctemp424 = (arch ==3);
if(nctemp424)
{
int nctemp439 = l + 2;
int nctemp434=nctemp439;
nctempchar1 *nctemp433;
nctemp433=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp444 = l + 2;
nctemp433->d[0]=nctemp444;
nctemp433->a=(char *)RunMalloc(sizeof(char)*nctemp434);
outfile=nctemp433;
nctempchar1* nctemp446= infile;
nctempchar1* nctemp449= outfile;
int nctemp452=LibeStrcpy(nctemp446,nctemp449);
int nctemp461 = l - 2;
int nctemp456=nctemp461;
char nctemp463=(char)('c');
outfile->a[nctemp456] =nctemp463;
int nctemp474 = l - 1;
int nctemp469=nctemp474;
char nctemp476=(char)('p');
outfile->a[nctemp469] =nctemp476;
int nctemp487 = l - 0;
int nctemp482=nctemp487;
char nctemp489=(char)('p');
outfile->a[nctemp482] =nctemp489;
}
else{
struct nctempchar1 *nctemp495;
static struct nctempchar1 nctemp496 = {{ 20}, (char*)"Unknow architecture\0"};
nctemp495=&nctemp496;
nctempchar1* nctemp493= nctemp495;
int nctemp497=MainError(nctemp493);
}
}
}
return outfile;
}
nctempchar1 * MainFmod (nctempchar1 *infile)
{
nctempchar1 *outfile;
int l;
int nctemp504=infile->d[0];l =nctemp504;
int nctemp508 = (l < 3);
if(nctemp508)
{
struct nctempchar1 *nctemp515;
static struct nctempchar1 nctemp516 = {{ 19}, (char*)" Illegal file name\0"};
nctemp515=&nctemp516;
nctempchar1* nctemp513= nctemp515;
int nctemp517=MainError(nctemp513);
}
int nctemp526 = l - 2;
int nctemp521=nctemp526;
char nctemp528=(char)('e');
int nctemp518 = (infile->a[nctemp521] !=nctemp528);
if(nctemp518)
{
struct nctempchar1 *nctemp534;
static struct nctempchar1 nctemp535 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp534=&nctemp535;
nctempchar1* nctemp532= nctemp534;
int nctemp536=MainError(nctemp532);
}
int nctemp543=l;
nctempchar1 *nctemp542;
nctemp542=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp542->d[0]=l;
nctemp542->a=(char *)RunMalloc(sizeof(char)*nctemp543);
outfile=nctemp542;
nctempchar1* nctemp547= infile;
nctempchar1* nctemp550= outfile;
int nctemp553=LibeStrcpy(nctemp547,nctemp550);
int nctemp562 = l - 2;
int nctemp557=nctemp562;
char nctemp564=(char)('m');
outfile->a[nctemp557] =nctemp564;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp573=file->d[0];l =nctemp573;
struct nctempchar1 *nctemp582;
static struct nctempchar1 nctemp583 = {{ 8}, (char*)"gcc -c \0"};
nctemp582=&nctemp583;
tmp=nctemp582;
int nctemp590=80;
nctempchar1 *nctemp589;
nctemp589=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp589->d[0]=80;
nctemp589->a=(char *)RunMalloc(sizeof(char)*nctemp590);
cmd=nctemp589;
nctempchar1* nctemp594= tmp;
nctempchar1* nctemp597= cmd;
int nctemp600=LibeStrcpy(nctemp594,nctemp597);
int nctemp601 = (debug ==1);
if(nctemp601)
{
struct nctempchar1 *nctemp608;
static struct nctempchar1 nctemp609 = {{ 5}, (char*)" -g \0"};
nctemp608=&nctemp609;
nctempchar1* nctemp606= nctemp608;
nctempchar1* nctemp610= cmd;
int nctemp613=LibeStrcat(nctemp606,nctemp610);
}
int nctemp614 = (optimize ==1);
if(nctemp614)
{
struct nctempchar1 *nctemp621;
static struct nctempchar1 nctemp622 = {{ 5}, (char*)" -O \0"};
nctemp621=&nctemp622;
nctempchar1* nctemp619= nctemp621;
nctempchar1* nctemp623= cmd;
int nctemp626=LibeStrcat(nctemp619,nctemp623);
}
int nctemp627 = (openmp ==1);
if(nctemp627)
{
struct nctempchar1 *nctemp634;
static struct nctempchar1 nctemp635 = {{ 11}, (char*)" -fopenmp \0"};
nctemp634=&nctemp635;
nctempchar1* nctemp632= nctemp634;
nctempchar1* nctemp636= cmd;
int nctemp639=LibeStrcat(nctemp632,nctemp636);
}
nctempchar1* nctemp641= file;
nctempchar1* nctemp644= cmd;
int nctemp647=LibeStrcat(nctemp641,nctemp644);
struct nctempchar1 *nctemp651;
static struct nctempchar1 nctemp652 = {{ 3}, (char*)"\n\0"};
nctemp651=&nctemp652;
nctempchar1* nctemp649= nctemp651;
nctempchar1* nctemp653= cmd;
int nctemp656=LibeStrcat(nctemp649,nctemp653);
int nctemp657 = (show ==1);
if(nctemp657)
{
int nctemp662= 4;
nctempchar1* nctemp664= cmd;
int nctemp667=LibePuts(nctemp662,nctemp664);
int nctemp669= 4;
int nctemp671=LibeFlush(nctemp669);
}
nctempchar1* nctemp673= cmd;
int nctemp676=LibeSystem(nctemp673);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp695;
static struct nctempchar1 nctemp696 = {{ 4}, (char*)"rm \0"};
nctemp695=&nctemp696;
int nctemp693=nctemp695->d[0];int nctemp699 = nctemp693 + l;
int nctemp701 = nctemp699 + 2;
int nctemp686=nctemp701;
nctempchar1 *nctemp685;
nctemp685=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp710;
static struct nctempchar1 nctemp711 = {{ 4}, (char*)"rm \0"};
nctemp710=&nctemp711;
int nctemp708=nctemp710->d[0];int nctemp714 = nctemp708 + l;
int nctemp716 = nctemp714 + 2;
nctemp685->d[0]=nctemp716;
nctemp685->a=(char *)RunMalloc(sizeof(char)*nctemp686);
cmd=nctemp685;
struct nctempchar1 *nctemp720;
static struct nctempchar1 nctemp721 = {{ 4}, (char*)"rm \0"};
nctemp720=&nctemp721;
nctempchar1* nctemp718= nctemp720;
nctempchar1* nctemp722= cmd;
int nctemp725=LibeStrcpy(nctemp718,nctemp722);
nctempchar1* nctemp727= file;
nctempchar1* nctemp730= cmd;
int nctemp733=LibeStrcat(nctemp727,nctemp730);
struct nctempchar1 *nctemp737;
static struct nctempchar1 nctemp738 = {{ 3}, (char*)"\n\0"};
nctemp737=&nctemp738;
nctempchar1* nctemp735= nctemp737;
nctempchar1* nctemp739= cmd;
int nctemp742=LibeStrcat(nctemp735,nctemp739);
int nctemp743 = (show ==1);
if(nctemp743)
{
int nctemp748= 4;
nctempchar1* nctemp750= cmd;
int nctemp753=LibePuts(nctemp748,nctemp750);
int nctemp755= 4;
int nctemp757=LibeFlush(nctemp755);
}
nctempchar1* nctemp759= cmd;
int nctemp762=LibeSystem(nctemp759);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp771=file->d[0];l =nctemp771;
struct nctempchar1 *nctemp780;
static struct nctempchar1 nctemp781 = {{ 15}, (char*)"nvcc -c -x cu \0"};
nctemp780=&nctemp781;
tmp=nctemp780;
int nctemp788=80;
nctempchar1 *nctemp787;
nctemp787=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp787->d[0]=80;
nctemp787->a=(char *)RunMalloc(sizeof(char)*nctemp788);
cmd=nctemp787;
nctempchar1* nctemp792= tmp;
nctempchar1* nctemp795= cmd;
int nctemp798=LibeStrcpy(nctemp792,nctemp795);
int nctemp799 = (debug ==1);
if(nctemp799)
{
struct nctempchar1 *nctemp806;
static struct nctempchar1 nctemp807 = {{ 5}, (char*)" -g \0"};
nctemp806=&nctemp807;
nctempchar1* nctemp804= nctemp806;
nctempchar1* nctemp808= cmd;
int nctemp811=LibeStrcat(nctemp804,nctemp808);
}
int nctemp812 = (optimize ==1);
if(nctemp812)
{
struct nctempchar1 *nctemp819;
static struct nctempchar1 nctemp820 = {{ 6}, (char*)" -O3 \0"};
nctemp819=&nctemp820;
nctempchar1* nctemp817= nctemp819;
nctempchar1* nctemp821= cmd;
int nctemp824=LibeStrcat(nctemp817,nctemp821);
}
int nctemp825 = (openmp ==1);
if(nctemp825)
{
struct nctempchar1 *nctemp832;
static struct nctempchar1 nctemp833 = {{ 11}, (char*)" -fopenmp \0"};
nctemp832=&nctemp833;
nctempchar1* nctemp830= nctemp832;
nctempchar1* nctemp834= cmd;
int nctemp837=LibeStrcat(nctemp830,nctemp834);
}
nctempchar1* nctemp839= file;
nctempchar1* nctemp842= cmd;
int nctemp845=LibeStrcat(nctemp839,nctemp842);
struct nctempchar1 *nctemp849;
static struct nctempchar1 nctemp850 = {{ 3}, (char*)"\n\0"};
nctemp849=&nctemp850;
nctempchar1* nctemp847= nctemp849;
nctempchar1* nctemp851= cmd;
int nctemp854=LibeStrcat(nctemp847,nctemp851);
int nctemp855 = (show ==1);
if(nctemp855)
{
int nctemp860= 4;
nctempchar1* nctemp862= cmd;
int nctemp865=LibePuts(nctemp860,nctemp862);
int nctemp867= 4;
int nctemp869=LibeFlush(nctemp867);
}
nctempchar1* nctemp871= cmd;
int nctemp874=LibeSystem(nctemp871);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp893;
static struct nctempchar1 nctemp894 = {{ 4}, (char*)"rm \0"};
nctemp893=&nctemp894;
int nctemp891=nctemp893->d[0];int nctemp897 = nctemp891 + l;
int nctemp899 = nctemp897 + 2;
int nctemp884=nctemp899;
nctempchar1 *nctemp883;
nctemp883=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp908;
static struct nctempchar1 nctemp909 = {{ 4}, (char*)"rm \0"};
nctemp908=&nctemp909;
int nctemp906=nctemp908->d[0];int nctemp912 = nctemp906 + l;
int nctemp914 = nctemp912 + 2;
nctemp883->d[0]=nctemp914;
nctemp883->a=(char *)RunMalloc(sizeof(char)*nctemp884);
cmd=nctemp883;
struct nctempchar1 *nctemp918;
static struct nctempchar1 nctemp919 = {{ 4}, (char*)"rm \0"};
nctemp918=&nctemp919;
nctempchar1* nctemp916= nctemp918;
nctempchar1* nctemp920= cmd;
int nctemp923=LibeStrcpy(nctemp916,nctemp920);
nctempchar1* nctemp925= file;
nctempchar1* nctemp928= cmd;
int nctemp931=LibeStrcat(nctemp925,nctemp928);
struct nctempchar1 *nctemp935;
static struct nctempchar1 nctemp936 = {{ 3}, (char*)"\n\0"};
nctemp935=&nctemp936;
nctempchar1* nctemp933= nctemp935;
nctempchar1* nctemp937= cmd;
int nctemp940=LibeStrcat(nctemp933,nctemp937);
int nctemp941 = (show ==1);
if(nctemp941)
{
int nctemp946= 4;
nctempchar1* nctemp948= cmd;
int nctemp951=LibePuts(nctemp946,nctemp948);
int nctemp953= 4;
int nctemp955=LibeFlush(nctemp953);
}
nctempchar1* nctemp957= cmd;
int nctemp960=LibeSystem(nctemp957);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp969=file->d[0];l =nctemp969;
struct nctempchar1 *nctemp978;
static struct nctempchar1 nctemp979 = {{ 10}, (char*)"hipcc -c \0"};
nctemp978=&nctemp979;
tmp=nctemp978;
int nctemp986=80;
nctempchar1 *nctemp985;
nctemp985=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp985->d[0]=80;
nctemp985->a=(char *)RunMalloc(sizeof(char)*nctemp986);
cmd=nctemp985;
nctempchar1* nctemp990= tmp;
nctempchar1* nctemp993= cmd;
int nctemp996=LibeStrcpy(nctemp990,nctemp993);
int nctemp997 = (debug ==1);
if(nctemp997)
{
struct nctempchar1 *nctemp1004;
static struct nctempchar1 nctemp1005 = {{ 5}, (char*)" -g \0"};
nctemp1004=&nctemp1005;
nctempchar1* nctemp1002= nctemp1004;
nctempchar1* nctemp1006= cmd;
int nctemp1009=LibeStrcat(nctemp1002,nctemp1006);
}
int nctemp1010 = (optimize ==1);
if(nctemp1010)
{
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 6}, (char*)" -O3 \0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
nctempchar1* nctemp1019= cmd;
int nctemp1022=LibeStrcat(nctemp1015,nctemp1019);
}
int nctemp1023 = (openmp ==1);
if(nctemp1023)
{
struct nctempchar1 *nctemp1030;
static struct nctempchar1 nctemp1031 = {{ 11}, (char*)" -fopenmp \0"};
nctemp1030=&nctemp1031;
nctempchar1* nctemp1028= nctemp1030;
nctempchar1* nctemp1032= cmd;
int nctemp1035=LibeStrcat(nctemp1028,nctemp1032);
}
nctempchar1* nctemp1037= file;
nctempchar1* nctemp1040= cmd;
int nctemp1043=LibeStrcat(nctemp1037,nctemp1040);
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 3}, (char*)"\n\0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
nctempchar1* nctemp1049= cmd;
int nctemp1052=LibeStrcat(nctemp1045,nctemp1049);
int nctemp1053 = (show ==1);
if(nctemp1053)
{
int nctemp1058= 4;
nctempchar1* nctemp1060= cmd;
int nctemp1063=LibePuts(nctemp1058,nctemp1060);
int nctemp1065= 4;
int nctemp1067=LibeFlush(nctemp1065);
}
nctempchar1* nctemp1069= cmd;
int nctemp1072=LibeSystem(nctemp1069);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1091;
static struct nctempchar1 nctemp1092 = {{ 4}, (char*)"rm \0"};
nctemp1091=&nctemp1092;
int nctemp1089=nctemp1091->d[0];int nctemp1095 = nctemp1089 + l;
int nctemp1097 = nctemp1095 + 2;
int nctemp1082=nctemp1097;
nctempchar1 *nctemp1081;
nctemp1081=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1106;
static struct nctempchar1 nctemp1107 = {{ 4}, (char*)"rm \0"};
nctemp1106=&nctemp1107;
int nctemp1104=nctemp1106->d[0];int nctemp1110 = nctemp1104 + l;
int nctemp1112 = nctemp1110 + 2;
nctemp1081->d[0]=nctemp1112;
nctemp1081->a=(char *)RunMalloc(sizeof(char)*nctemp1082);
cmd=nctemp1081;
struct nctempchar1 *nctemp1116;
static struct nctempchar1 nctemp1117 = {{ 4}, (char*)"rm \0"};
nctemp1116=&nctemp1117;
nctempchar1* nctemp1114= nctemp1116;
nctempchar1* nctemp1118= cmd;
int nctemp1121=LibeStrcpy(nctemp1114,nctemp1118);
nctempchar1* nctemp1123= file;
nctempchar1* nctemp1126= cmd;
int nctemp1129=LibeStrcat(nctemp1123,nctemp1126);
struct nctempchar1 *nctemp1133;
static struct nctempchar1 nctemp1134 = {{ 3}, (char*)"\n\0"};
nctemp1133=&nctemp1134;
nctempchar1* nctemp1131= nctemp1133;
nctempchar1* nctemp1135= cmd;
int nctemp1138=LibeStrcat(nctemp1131,nctemp1135);
int nctemp1139 = (show ==1);
if(nctemp1139)
{
int nctemp1144= 4;
nctempchar1* nctemp1146= cmd;
int nctemp1149=LibePuts(nctemp1144,nctemp1146);
int nctemp1151= 4;
int nctemp1153=LibeFlush(nctemp1151);
}
nctempchar1* nctemp1155= cmd;
int nctemp1158=LibeSystem(nctemp1155);
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
int nctemp1164=LibeInit();
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
int nctemp1214=PtreeInit();
int nctemp1216=CodeInit();
int nctemp1218=CodeArraycheckoff();
int nctemp1220=CodeDebugoff();
int nctemp1222= 2;
int nctemp1224=CodeSetarch(nctemp1222);
int nctemp1229=MainArgs->d[0];l =nctemp1229;
int nctemp1233 = (l <= 1);
if(nctemp1233)
{
struct nctempchar1 *nctemp1240;
static struct nctempchar1 nctemp1241 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1240=&nctemp1241;
nctempchar1* nctemp1238= nctemp1240;
int nctemp1242=MainError(nctemp1238);
}
i =1;
loop =1;
int nctemp1251 = (loop ==1);
int nctemp1255=nctemp1251;
while(nctemp1255)
{{
int nctemp1261=i;
nctempchar1* nctemp1259= MainArgs->a[nctemp1261].arg;
struct nctempchar1 *nctemp1266;
static struct nctempchar1 nctemp1267 = {{ 3}, (char*)"-h\0"};
nctemp1266=&nctemp1267;
nctempchar1* nctemp1264= nctemp1266;
int nctemp1268=LibeStrcmp(nctemp1259,nctemp1264);
int nctemp1256 = (nctemp1268 ==1);
if(nctemp1256)
{
int nctemp1271= 2;
int nctemp1273=MainHelp(nctemp1271);
int nctemp1275=LibeExit();
}
int nctemp1281=i;
nctempchar1* nctemp1279= MainArgs->a[nctemp1281].arg;
struct nctempchar1 *nctemp1286;
static struct nctempchar1 nctemp1287 = {{ 3}, (char*)"-t\0"};
nctemp1286=&nctemp1287;
nctempchar1* nctemp1284= nctemp1286;
int nctemp1288=LibeStrcmp(nctemp1279,nctemp1284);
int nctemp1276 = (nctemp1288 ==1);
if(nctemp1276)
{
btree =1;
parse =1;
}
int nctemp1303=i;
nctempchar1* nctemp1301= MainArgs->a[nctemp1303].arg;
struct nctempchar1 *nctemp1308;
static struct nctempchar1 nctemp1309 = {{ 3}, (char*)"-a\0"};
nctemp1308=&nctemp1309;
nctempchar1* nctemp1306= nctemp1308;
int nctemp1310=LibeStrcmp(nctemp1301,nctemp1306);
int nctemp1298 = (nctemp1310 ==1);
if(nctemp1298)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1329=i;
nctempchar1* nctemp1327= MainArgs->a[nctemp1329].arg;
struct nctempchar1 *nctemp1334;
static struct nctempchar1 nctemp1335 = {{ 3}, (char*)"-s\0"};
nctemp1334=&nctemp1335;
nctempchar1* nctemp1332= nctemp1334;
int nctemp1336=LibeStrcmp(nctemp1327,nctemp1332);
int nctemp1324 = (nctemp1336 ==1);
if(nctemp1324)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1355=i;
nctempchar1* nctemp1353= MainArgs->a[nctemp1355].arg;
struct nctempchar1 *nctemp1360;
static struct nctempchar1 nctemp1361 = {{ 3}, (char*)"-r\0"};
nctemp1360=&nctemp1361;
nctempchar1* nctemp1358= nctemp1360;
int nctemp1362=LibeStrcmp(nctemp1353,nctemp1358);
int nctemp1350 = (nctemp1362 ==1);
if(nctemp1350)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1381=i;
nctempchar1* nctemp1379= MainArgs->a[nctemp1381].arg;
struct nctempchar1 *nctemp1386;
static struct nctempchar1 nctemp1387 = {{ 3}, (char*)"-e\0"};
nctemp1386=&nctemp1387;
nctempchar1* nctemp1384= nctemp1386;
int nctemp1388=LibeStrcmp(nctemp1379,nctemp1384);
int nctemp1376 = (nctemp1388 ==1);
if(nctemp1376)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1407=i;
nctempchar1* nctemp1405= MainArgs->a[nctemp1407].arg;
struct nctempchar1 *nctemp1412;
static struct nctempchar1 nctemp1413 = {{ 3}, (char*)"-p\0"};
nctemp1412=&nctemp1413;
nctempchar1* nctemp1410= nctemp1412;
int nctemp1414=LibeStrcmp(nctemp1405,nctemp1410);
int nctemp1402 = (nctemp1414 ==1);
if(nctemp1402)
{
parse =1;
}
int nctemp1425=i;
nctempchar1* nctemp1423= MainArgs->a[nctemp1425].arg;
struct nctempchar1 *nctemp1430;
static struct nctempchar1 nctemp1431 = {{ 3}, (char*)"-q\0"};
nctemp1430=&nctemp1431;
nctempchar1* nctemp1428= nctemp1430;
int nctemp1432=LibeStrcmp(nctemp1423,nctemp1428);
int nctemp1420 = (nctemp1432 ==1);
if(nctemp1420)
{
semantic =1;
parse =1;
}
int nctemp1447=i;
nctempchar1* nctemp1445= MainArgs->a[nctemp1447].arg;
struct nctempchar1 *nctemp1452;
static struct nctempchar1 nctemp1453 = {{ 3}, (char*)"-C\0"};
nctemp1452=&nctemp1453;
nctempchar1* nctemp1450= nctemp1452;
int nctemp1454=LibeStrcmp(nctemp1445,nctemp1450);
int nctemp1442 = (nctemp1454 ==1);
if(nctemp1442)
{
int nctemp1457=CodeArraycheckon();
}
int nctemp1463=i;
nctempchar1* nctemp1461= MainArgs->a[nctemp1463].arg;
struct nctempchar1 *nctemp1468;
static struct nctempchar1 nctemp1469 = {{ 3}, (char*)"-g\0"};
nctemp1468=&nctemp1469;
nctempchar1* nctemp1466= nctemp1468;
int nctemp1470=LibeStrcmp(nctemp1461,nctemp1466);
int nctemp1458 = (nctemp1470 ==1);
if(nctemp1458)
{
debug =1;
int nctemp1477=CodeDebugon();
}
int nctemp1483=i;
nctempchar1* nctemp1481= MainArgs->a[nctemp1483].arg;
struct nctempchar1 *nctemp1488;
static struct nctempchar1 nctemp1489 = {{ 3}, (char*)"-d\0"};
nctemp1488=&nctemp1489;
nctempchar1* nctemp1486= nctemp1488;
int nctemp1490=LibeStrcmp(nctemp1481,nctemp1486);
int nctemp1478 = (nctemp1490 ==1);
if(nctemp1478)
{
show =1;
}
int nctemp1501=i;
nctempchar1* nctemp1499= MainArgs->a[nctemp1501].arg;
struct nctempchar1 *nctemp1506;
static struct nctempchar1 nctemp1507 = {{ 3}, (char*)"-O\0"};
nctemp1506=&nctemp1507;
nctempchar1* nctemp1504= nctemp1506;
int nctemp1508=LibeStrcmp(nctemp1499,nctemp1504);
int nctemp1496 = (nctemp1508 ==1);
if(nctemp1496)
{
optimize =1;
}
int nctemp1519=i;
nctempchar1* nctemp1517= MainArgs->a[nctemp1519].arg;
struct nctempchar1 *nctemp1524;
static struct nctempchar1 nctemp1525 = {{ 3}, (char*)"-f\0"};
nctemp1524=&nctemp1525;
nctempchar1* nctemp1522= nctemp1524;
int nctemp1526=LibeStrcmp(nctemp1517,nctemp1522);
int nctemp1514 = (nctemp1526 ==1);
if(nctemp1514)
{
openmp =1;
}
int nctemp1537=i;
nctempchar1* nctemp1535= MainArgs->a[nctemp1537].arg;
struct nctempchar1 *nctemp1542;
static struct nctempchar1 nctemp1543 = {{ 3}, (char*)"-c\0"};
nctemp1542=&nctemp1543;
nctempchar1* nctemp1540= nctemp1542;
int nctemp1544=LibeStrcmp(nctemp1535,nctemp1540);
int nctemp1532 = (nctemp1544 ==1);
if(nctemp1532)
{
obj =0;
}
int nctemp1557 = i + 1;
int nctemp1550 = (nctemp1557 < l);
if(nctemp1550)
{
int nctemp1565=i;
int nctemp1567=0;
char nctemp1570=(char)('-');
int nctemp1562 = (MainArgs->a[nctemp1565].arg->a[nctemp1567] ==nctemp1570);
int nctemp1559 = (nctemp1562 ==1);
if(nctemp1559)
{
loop =1;
int nctemp1586 = i + 1;
i =nctemp1586;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1595 = (loop ==1);
nctemp1255=nctemp1595;}int nctemp1605 = (parse ==0);
int nctemp1610 = (semantic ==0);
int nctemp1602 = (nctemp1605 && nctemp1610);
int nctemp1615 = (emit ==0);
int nctemp1599 = (nctemp1602 && nctemp1615);
if(nctemp1599)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1635=MainArgs->d[0];int nctemp1631 = (i >= nctemp1635);
if(nctemp1631)
{
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1642=&nctemp1643;
nctempchar1* nctemp1640= nctemp1642;
int nctemp1644=MainError(nctemp1640);
}
else{
int nctemp1650=i;
infile=MainArgs->a[nctemp1650].arg;
}
int nctemp1653 = (emit ==1);
if(nctemp1653)
{
nctempchar1* nctemp1662= infile;
int nctemp1665= 2;
nctempchar1* nctemp1667=MainFout(nctemp1662,nctemp1665);
outfile=nctemp1667;
nctempchar1* nctemp1672= outfile;
struct nctempchar1 *nctemp1677;
static struct nctempchar1 nctemp1678 = {{ 2}, (char*)"w\0"};
nctemp1677=&nctemp1678;
nctempchar1* nctemp1675= nctemp1677;
int nctemp1679=LibeOpen(nctemp1672,nctemp1675);
fd =nctemp1679;
int nctemp1681= fd;
int nctemp1683=CodeSetfdout(nctemp1681);
}
nctempchar1* nctemp1687= infile;
int nctemp1690=ScanInit(nctemp1687);
int nctemp1684 = (nctemp1690 ==0);
if(nctemp1684)
{
int nctemp1693=LibeExit();
}
int nctemp1695= 1;
int nctemp1697=ScanSetline(nctemp1695);
int nctemp1699=ParseIniparse();
int nctemp1700 = (emit ==1);
if(nctemp1700)
{
int nctemp1705=CodePreamble();
}
struct symbol* nctemp1709=SymMktable();
struct symbol* nctemp1707= nctemp1709;
struct symbol* nctemp1710=SymSetetp(nctemp1707);
int nctemp1711 = (parse ==1);
if(nctemp1711)
{
struct tree* nctemp1719=ParseParse();
p =nctemp1719;
}
int nctemp1720 = (btree ==1);
if(nctemp1720)
{
struct tree* nctemp1725= p;
int nctemp1727= 0;
int nctemp1729=PtreePrtree(nctemp1725,nctemp1727);
}
int nctemp1730 = (p !=0);
int nctemp1734=nctemp1730;
while(nctemp1734)
{{
int nctemp1735 = (semantic ==1);
if(nctemp1735)
{
int nctemp1739 = (p !=0);
if(nctemp1739)
{
struct tree* nctemp1744= p;
struct symbol* nctemp1748=SymGetetp();
struct symbol* nctemp1746= nctemp1748;
int nctemp1749=SemSem(nctemp1744,nctemp1746);
}
int nctemp1750 = (atree ==1);
if(nctemp1750)
{
struct tree* nctemp1755= p;
int nctemp1757= 0;
int nctemp1759=PtreePrtree(nctemp1755,nctemp1757);
}
int nctemp1760 = (table ==1);
if(nctemp1760)
{
struct symbol* nctemp1767=SymGetltp();
int nctemp1764 = (nctemp1767 !=0);
if(nctemp1764)
{
int nctemp1770= 3;
struct symbol* nctemp1774=SymGetltp();
struct symbol* nctemp1772= nctemp1774;
int nctemp1775= 0;
int nctemp1777=SymPrsym(nctemp1770,nctemp1772,nctemp1775);
}
}
}
int nctemp1778 = (emit ==1);
if(nctemp1778)
{
int nctemp1782 = (p !=0);
if(nctemp1782)
{
struct tree* nctemp1787= p;
struct symbol* nctemp1791=SymGetetp();
struct symbol* nctemp1789= nctemp1791;
int nctemp1792=CodeCode(nctemp1787,nctemp1789);
}
}
struct tree* nctemp1794= p;
int nctemp1796=PtreeRmtree(nctemp1794);
struct symbol* nctemp1800=SymGetltp();
struct symbol* nctemp1798= nctemp1800;
int nctemp1801=SymRmtable(nctemp1798);
int nctemp1802 = (parse ==1);
if(nctemp1802)
{
struct tree* nctemp1810=ParseParse();
p =nctemp1810;
int nctemp1811 = (btree ==1);
if(nctemp1811)
{
struct tree* nctemp1816= p;
int nctemp1818= 0;
int nctemp1820=PtreePrtree(nctemp1816,nctemp1818);
}
}
}
int nctemp1821 = (p !=0);
nctemp1734=nctemp1821;}int nctemp1828=ParseGetlookahead();
int nctemp1825 = (nctemp1828 !=19);
if(nctemp1825)
{
struct nctempchar1 *nctemp1833;
static struct nctempchar1 nctemp1834 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1833=&nctemp1834;
nctempchar1* nctemp1831= nctemp1833;
int nctemp1835=MainError(nctemp1831);
}
int nctemp1836 = (etable ==1);
if(nctemp1836)
{
int nctemp1841= 4;
int nctemp1843=LibeFlush(nctemp1841);
struct symbol* nctemp1847=SymGetetp();
int nctemp1844 = (nctemp1847 !=0);
if(nctemp1844)
{
int nctemp1850= 3;
struct symbol* nctemp1854=SymGetetp();
struct symbol* nctemp1852= nctemp1854;
int nctemp1855= 0;
int nctemp1857=SymPrsym(nctemp1850,nctemp1852,nctemp1855);
}
}
int nctemp1858 = (emit ==1);
if(nctemp1858)
{
int nctemp1863=CodePostamble();
}
int nctemp1867 = (emit ==1);
int nctemp1872 = (obj ==1);
int nctemp1864 = (nctemp1867 && nctemp1872);
if(nctemp1864)
{
int nctemp1876 = (2 ==1);
if(nctemp1876)
{
nctempchar1* nctemp1881= outfile;
int nctemp1884= debug;
int nctemp1886= optimize;
int nctemp1888= openmp;
int nctemp1890= show;
int nctemp1892=MainCcompcpu(nctemp1881,nctemp1884,nctemp1886,nctemp1888,nctemp1890);
}
else{
int nctemp1893 = (2 ==2);
if(nctemp1893)
{
nctempchar1* nctemp1898= outfile;
int nctemp1901= debug;
int nctemp1903= optimize;
int nctemp1905= openmp;
int nctemp1907= show;
int nctemp1909=MainCcompcuda(nctemp1898,nctemp1901,nctemp1903,nctemp1905,nctemp1907);
}
else{
int nctemp1910 = (2 ==3);
if(nctemp1910)
{
nctempchar1* nctemp1915= outfile;
int nctemp1918= debug;
int nctemp1920= optimize;
int nctemp1922= openmp;
int nctemp1924= show;
int nctemp1926=MainCcomphip(nctemp1915,nctemp1918,nctemp1920,nctemp1922,nctemp1924);
}
else{
struct nctempchar1 *nctemp1930;
static struct nctempchar1 nctemp1931 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1930=&nctemp1931;
nctempchar1* nctemp1928= nctemp1930;
int nctemp1932=MainError(nctemp1928);
}
}
}
}
int nctemp1933 = (emit ==1);
if(nctemp1933)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1941= fd;
int nctemp1943=LibeClose(nctemp1941);
}
nctempchar1* nctemp1950= infile;
nctempchar1* nctemp1953=MainFmod(nctemp1950);
nctempchar1* nctemp1948= nctemp1953;
struct nctempchar1 *nctemp1956;
static struct nctempchar1 nctemp1957 = {{ 2}, (char*)"w\0"};
nctemp1956=&nctemp1957;
nctempchar1* nctemp1954= nctemp1956;
int nctemp1958=LibeOpen(nctemp1948,nctemp1954);
fd =nctemp1958;
int nctemp1960= fd;
struct symbol* nctemp1964=SymGetetp();
struct symbol* nctemp1962= nctemp1964;
int nctemp1965= 0;
int nctemp1967=SymExport(nctemp1960,nctemp1962,nctemp1965);
int nctemp1969= 3;
int nctemp1971=LibeFlush(nctemp1969);
return 1;
}
}
