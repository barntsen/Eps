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
char nctemp5673;
char nctemp5845;
char nctemp5861;
char nctemp5902;
char nctemp5994;
char nctemp6010;
char nctemp6053;
char nctemp6137;
int nctemp6138;
int nctemp6139;
int nctemp6140;
int nctemp6141;
int nctemp6142;
int nctemp6143;
int nctemp6144;
char nctemp6391;
char nctemp6420;
char nctemp6484;
char nctemp6490;
char nctemp6496;
char nctemp6577;
int nctemp6578;
int nctemp6579;
int nctemp6580;
int nctemp6581;
int nctemp6582;
int nctemp6583;
int nctemp6584;
char nctemp6645;
int nctemp6646;
int nctemp6647;
int nctemp6648;
char nctemp6655;
int nctemp6656;
int nctemp6657;
int nctemp6658;
int nctemp6659;
int nctemp6660;
int nctemp6661;
int nctemp6662;
char nctemp6884;
int nctemp6885;
int nctemp6886;
int nctemp6887;
char nctemp6924;
int nctemp6925;
int nctemp6926;
int nctemp6927;
char nctemp7350;
char nctemp7395;
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
char nctemp9;
char nctemp12;
char nctemp15;
char nctemp18;
char nctemp21;
char nctemp24;
char nctemp27;
char nctemp30;
char nctemp33;
char nctemp36;
char nctemp66;
char nctemp75;
char nctemp84;
char nctemp94;
char nctemp108;
char nctemp118;
char nctemp128;
char nctemp138;
char nctemp148;
char nctemp158;
char nctemp168;
char nctemp178;
char nctemp188;
char nctemp198;
char nctemp336;
char nctemp340;
char nctemp348;
char nctemp364;
char nctemp368;
char nctemp376;
char nctemp392;
char nctemp396;
char nctemp404;
char nctemp420;
char nctemp424;
char nctemp432;
char nctemp448;
char nctemp452;
char nctemp460;
char nctemp476;
char nctemp480;
char nctemp488;
char nctemp496;
char nctemp512;
char nctemp516;
char nctemp544;
char nctemp548;
char nctemp556;
char nctemp572;
char nctemp576;
char nctemp584;
char nctemp600;
char nctemp604;
char nctemp612;
char nctemp628;
char nctemp632;
char nctemp640;
char nctemp656;
char nctemp660;
char nctemp668;
char nctemp684;
char nctemp688;
char nctemp696;
char nctemp724;
char nctemp728;
char nctemp736;
char nctemp780;
char nctemp795;
char nctemp810;
char nctemp825;
char nctemp840;
char nctemp855;
char nctemp870;
char nctemp899;
char nctemp1040;
char nctemp1055;
char nctemp1070;
char nctemp1085;
char nctemp1100;
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
char nctemp36;
char nctemp83;
char nctemp113;
char nctemp123;
char nctemp133;
char nctemp143;
char nctemp157;
char nctemp171;
char nctemp181;
char nctemp191;
char nctemp201;
char nctemp211;
char nctemp221;
char nctemp262;
char nctemp308;
char nctemp311;
char nctemp314;
char nctemp317;
char nctemp320;
char nctemp325;
char nctemp328;
char nctemp331;
char nctemp334;
char nctemp337;
char nctemp352;
char nctemp362;
char nctemp376;
char nctemp386;
char nctemp396;
char nctemp406;
char nctemp416;
char nctemp426;
char nctemp436;
char nctemp446;
char nctemp456;
char nctemp466;
char nctemp530;
char nctemp534;
char nctemp541;
char nctemp545;
char nctemp549;
char nctemp556;
char nctemp560;
char nctemp564;
char nctemp571;
char nctemp575;
char nctemp579;
char nctemp586;
char nctemp590;
char nctemp594;
char nctemp601;
char nctemp605;
char nctemp609;
char nctemp616;
char nctemp632;
char nctemp636;
char nctemp643;
char nctemp647;
char nctemp651;
char nctemp658;
char nctemp662;
char nctemp666;
char nctemp673;
char nctemp677;
char nctemp681;
char nctemp688;
char nctemp692;
char nctemp696;
char nctemp703;
char nctemp731;
char nctemp743;
char nctemp755;
char nctemp780;
char nctemp783;
char nctemp786;
char nctemp789;
char nctemp792;
char nctemp797;
char nctemp800;
char nctemp803;
char nctemp806;
char nctemp1160;
char nctemp1175;
char nctemp1190;
char nctemp1205;
char nctemp1248;
char nctemp1263;
char nctemp1278;
char nctemp1293;
char nctemp1308;
char nctemp1323;
char nctemp1338;
char nctemp1353;
char nctemp1454;
char nctemp1474;
char nctemp1489;
char nctemp1504;
char nctemp1519;
char nctemp1562;
char nctemp1577;
char nctemp1592;
char nctemp1607;
char nctemp1622;
char nctemp1637;
char nctemp1652;
char nctemp1777;
char nctemp2055;
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
struct symbol* SymSetetp (struct symbol* etp);
struct symbol* SymGetltp ();
struct symbol* SymSetltp (struct symbol* ltp);
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* stp);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp);
nctempchar1 * SymGetname (struct symbol* np);
struct symbol* SymMktable ();
struct symbol* SymMvnext (struct symbol* np);
struct symbol* SymSetable (struct symbol* np,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
nctempchar1 * SymSetfield (nctempchar1 *field,nctempchar1 *value);
int SymSetype (struct symbol* np,nctempchar1 *type);
nctempchar1 * SymGetype (struct symbol* np);
int SymSetfunc (struct symbol* np,nctempchar1 *func);
nctempchar1 * SymGetfunc (struct symbol* np);
int SymSetarray (struct symbol* np,nctempchar1 *array);
nctempchar1 * SymGetarray (struct symbol* np);
int SymSetstruct (struct symbol* np,nctempchar1 *structure);
nctempchar1 * SymGetstruct (struct symbol* np);
int SymSetident (struct symbol* np,nctempchar1 *ident);
nctempchar1 * SymGetident (struct symbol* np);
int SymSetlval (struct symbol* np,nctempchar1 *lval);
nctempchar1 * SymGetlval (struct symbol* np);
int SymSetrank (struct symbol* np,int rank);
int SymGetrank (struct symbol* np);
int SymSetemit (struct symbol* np,int emit);
int SymGetemit (struct symbol* np);
int SymSetref (struct symbol* np,nctempchar1 *ref);
nctempchar1 * SymGetref (struct symbol* np);
int SymSetmodule (struct symbol* np,nctempchar1 *module);
nctempchar1 * SymGetmodule (struct symbol* np);
int SymSetforw (struct symbol* np,nctempchar1 *forw);
nctempchar1 * SymGetforw (struct symbol* np);
int SymSetdescr (struct symbol* np,nctempchar1 *descr);
nctempchar1 * SymGetdescr (struct symbol* np);
int SymSetglobal (struct symbol* np,nctempchar1 *global);
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
struct nctempchar1 *nctemp1224;
static struct nctempchar1 nctemp1225 = {{ 7}, (char*)"ARCH: \0"};
nctemp1224=&nctemp1225;
nctempchar1* nctemp1222= nctemp1224;
int nctemp1226=LibePs(nctemp1222);
int nctemp1228= 2;
int nctemp1230=LibePi(nctemp1228);
struct nctempchar1 *nctemp1234;
static struct nctempchar1 nctemp1235 = {{ 3}, (char*)"\n\0"};
nctemp1234=&nctemp1235;
nctempchar1* nctemp1232= nctemp1234;
int nctemp1236=LibePs(nctemp1232);
int nctemp1238= 2;
int nctemp1240=CodeSetarch(nctemp1238);
int nctemp1245=MainArgs->d[0];l =nctemp1245;
int nctemp1249 = (l <= 1);
if(nctemp1249)
{
struct nctempchar1 *nctemp1256;
static struct nctempchar1 nctemp1257 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1256=&nctemp1257;
nctempchar1* nctemp1254= nctemp1256;
int nctemp1258=MainError(nctemp1254);
}
i =1;
loop =1;
int nctemp1267 = (loop ==1);
int nctemp1271=nctemp1267;
while(nctemp1271)
{{
int nctemp1277=i;
nctempchar1* nctemp1275= MainArgs->a[nctemp1277].arg;
struct nctempchar1 *nctemp1282;
static struct nctempchar1 nctemp1283 = {{ 3}, (char*)"-h\0"};
nctemp1282=&nctemp1283;
nctempchar1* nctemp1280= nctemp1282;
int nctemp1284=LibeStrcmp(nctemp1275,nctemp1280);
int nctemp1272 = (nctemp1284 ==1);
if(nctemp1272)
{
int nctemp1287= 2;
int nctemp1289=MainHelp(nctemp1287);
int nctemp1291=LibeExit();
}
int nctemp1297=i;
nctempchar1* nctemp1295= MainArgs->a[nctemp1297].arg;
struct nctempchar1 *nctemp1302;
static struct nctempchar1 nctemp1303 = {{ 3}, (char*)"-t\0"};
nctemp1302=&nctemp1303;
nctempchar1* nctemp1300= nctemp1302;
int nctemp1304=LibeStrcmp(nctemp1295,nctemp1300);
int nctemp1292 = (nctemp1304 ==1);
if(nctemp1292)
{
btree =1;
parse =1;
}
int nctemp1319=i;
nctempchar1* nctemp1317= MainArgs->a[nctemp1319].arg;
struct nctempchar1 *nctemp1324;
static struct nctempchar1 nctemp1325 = {{ 3}, (char*)"-a\0"};
nctemp1324=&nctemp1325;
nctempchar1* nctemp1322= nctemp1324;
int nctemp1326=LibeStrcmp(nctemp1317,nctemp1322);
int nctemp1314 = (nctemp1326 ==1);
if(nctemp1314)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1345=i;
nctempchar1* nctemp1343= MainArgs->a[nctemp1345].arg;
struct nctempchar1 *nctemp1350;
static struct nctempchar1 nctemp1351 = {{ 3}, (char*)"-s\0"};
nctemp1350=&nctemp1351;
nctempchar1* nctemp1348= nctemp1350;
int nctemp1352=LibeStrcmp(nctemp1343,nctemp1348);
int nctemp1340 = (nctemp1352 ==1);
if(nctemp1340)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1371=i;
nctempchar1* nctemp1369= MainArgs->a[nctemp1371].arg;
struct nctempchar1 *nctemp1376;
static struct nctempchar1 nctemp1377 = {{ 3}, (char*)"-r\0"};
nctemp1376=&nctemp1377;
nctempchar1* nctemp1374= nctemp1376;
int nctemp1378=LibeStrcmp(nctemp1369,nctemp1374);
int nctemp1366 = (nctemp1378 ==1);
if(nctemp1366)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1397=i;
nctempchar1* nctemp1395= MainArgs->a[nctemp1397].arg;
struct nctempchar1 *nctemp1402;
static struct nctempchar1 nctemp1403 = {{ 3}, (char*)"-e\0"};
nctemp1402=&nctemp1403;
nctempchar1* nctemp1400= nctemp1402;
int nctemp1404=LibeStrcmp(nctemp1395,nctemp1400);
int nctemp1392 = (nctemp1404 ==1);
if(nctemp1392)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1423=i;
nctempchar1* nctemp1421= MainArgs->a[nctemp1423].arg;
struct nctempchar1 *nctemp1428;
static struct nctempchar1 nctemp1429 = {{ 3}, (char*)"-p\0"};
nctemp1428=&nctemp1429;
nctempchar1* nctemp1426= nctemp1428;
int nctemp1430=LibeStrcmp(nctemp1421,nctemp1426);
int nctemp1418 = (nctemp1430 ==1);
if(nctemp1418)
{
parse =1;
}
int nctemp1441=i;
nctempchar1* nctemp1439= MainArgs->a[nctemp1441].arg;
struct nctempchar1 *nctemp1446;
static struct nctempchar1 nctemp1447 = {{ 3}, (char*)"-q\0"};
nctemp1446=&nctemp1447;
nctempchar1* nctemp1444= nctemp1446;
int nctemp1448=LibeStrcmp(nctemp1439,nctemp1444);
int nctemp1436 = (nctemp1448 ==1);
if(nctemp1436)
{
semantic =1;
parse =1;
}
int nctemp1463=i;
nctempchar1* nctemp1461= MainArgs->a[nctemp1463].arg;
struct nctempchar1 *nctemp1468;
static struct nctempchar1 nctemp1469 = {{ 3}, (char*)"-C\0"};
nctemp1468=&nctemp1469;
nctempchar1* nctemp1466= nctemp1468;
int nctemp1470=LibeStrcmp(nctemp1461,nctemp1466);
int nctemp1458 = (nctemp1470 ==1);
if(nctemp1458)
{
int nctemp1473=CodeArraycheckon();
}
int nctemp1479=i;
nctempchar1* nctemp1477= MainArgs->a[nctemp1479].arg;
struct nctempchar1 *nctemp1484;
static struct nctempchar1 nctemp1485 = {{ 3}, (char*)"-g\0"};
nctemp1484=&nctemp1485;
nctempchar1* nctemp1482= nctemp1484;
int nctemp1486=LibeStrcmp(nctemp1477,nctemp1482);
int nctemp1474 = (nctemp1486 ==1);
if(nctemp1474)
{
debug =1;
int nctemp1493=CodeDebugon();
}
int nctemp1499=i;
nctempchar1* nctemp1497= MainArgs->a[nctemp1499].arg;
struct nctempchar1 *nctemp1504;
static struct nctempchar1 nctemp1505 = {{ 3}, (char*)"-d\0"};
nctemp1504=&nctemp1505;
nctempchar1* nctemp1502= nctemp1504;
int nctemp1506=LibeStrcmp(nctemp1497,nctemp1502);
int nctemp1494 = (nctemp1506 ==1);
if(nctemp1494)
{
show =1;
}
int nctemp1517=i;
nctempchar1* nctemp1515= MainArgs->a[nctemp1517].arg;
struct nctempchar1 *nctemp1522;
static struct nctempchar1 nctemp1523 = {{ 3}, (char*)"-O\0"};
nctemp1522=&nctemp1523;
nctempchar1* nctemp1520= nctemp1522;
int nctemp1524=LibeStrcmp(nctemp1515,nctemp1520);
int nctemp1512 = (nctemp1524 ==1);
if(nctemp1512)
{
optimize =1;
}
int nctemp1535=i;
nctempchar1* nctemp1533= MainArgs->a[nctemp1535].arg;
struct nctempchar1 *nctemp1540;
static struct nctempchar1 nctemp1541 = {{ 3}, (char*)"-f\0"};
nctemp1540=&nctemp1541;
nctempchar1* nctemp1538= nctemp1540;
int nctemp1542=LibeStrcmp(nctemp1533,nctemp1538);
int nctemp1530 = (nctemp1542 ==1);
if(nctemp1530)
{
openmp =1;
}
int nctemp1553=i;
nctempchar1* nctemp1551= MainArgs->a[nctemp1553].arg;
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 3}, (char*)"-c\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
int nctemp1560=LibeStrcmp(nctemp1551,nctemp1556);
int nctemp1548 = (nctemp1560 ==1);
if(nctemp1548)
{
obj =0;
}
int nctemp1573 = i + 1;
int nctemp1566 = (nctemp1573 < l);
if(nctemp1566)
{
int nctemp1581=i;
int nctemp1583=0;
char nctemp1586=(char)('-');
int nctemp1578 = (MainArgs->a[nctemp1581].arg->a[nctemp1583] ==nctemp1586);
int nctemp1575 = (nctemp1578 ==1);
if(nctemp1575)
{
loop =1;
int nctemp1602 = i + 1;
i =nctemp1602;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1611 = (loop ==1);
nctemp1271=nctemp1611;}int nctemp1621 = (parse ==0);
int nctemp1626 = (semantic ==0);
int nctemp1618 = (nctemp1621 && nctemp1626);
int nctemp1631 = (emit ==0);
int nctemp1615 = (nctemp1618 && nctemp1631);
if(nctemp1615)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1651=MainArgs->d[0];int nctemp1647 = (i >= nctemp1651);
if(nctemp1647)
{
struct nctempchar1 *nctemp1658;
static struct nctempchar1 nctemp1659 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1658=&nctemp1659;
nctempchar1* nctemp1656= nctemp1658;
int nctemp1660=MainError(nctemp1656);
}
else{
int nctemp1666=i;
infile=MainArgs->a[nctemp1666].arg;
}
int nctemp1669 = (emit ==1);
if(nctemp1669)
{
nctempchar1* nctemp1678= infile;
int nctemp1681= 2;
nctempchar1* nctemp1683=MainFout(nctemp1678,nctemp1681);
outfile=nctemp1683;
nctempchar1* nctemp1688= outfile;
struct nctempchar1 *nctemp1693;
static struct nctempchar1 nctemp1694 = {{ 2}, (char*)"w\0"};
nctemp1693=&nctemp1694;
nctempchar1* nctemp1691= nctemp1693;
int nctemp1695=LibeOpen(nctemp1688,nctemp1691);
fd =nctemp1695;
int nctemp1697= fd;
int nctemp1699=CodeSetfdout(nctemp1697);
}
nctempchar1* nctemp1703= infile;
int nctemp1706=ScanInit(nctemp1703);
int nctemp1700 = (nctemp1706 ==0);
if(nctemp1700)
{
int nctemp1709=LibeExit();
}
int nctemp1711= 1;
int nctemp1713=ScanSetline(nctemp1711);
int nctemp1715=ParseIniparse();
int nctemp1716 = (emit ==1);
if(nctemp1716)
{
int nctemp1721=CodePreamble();
}
struct symbol* nctemp1725=SymMktable();
struct symbol* nctemp1723= nctemp1725;
struct symbol* nctemp1726=SymSetetp(nctemp1723);
int nctemp1727 = (parse ==1);
if(nctemp1727)
{
struct tree* nctemp1735=ParseParse();
p =nctemp1735;
}
int nctemp1736 = (btree ==1);
if(nctemp1736)
{
struct tree* nctemp1741= p;
int nctemp1743= 0;
int nctemp1745=PtreePrtree(nctemp1741,nctemp1743);
}
int nctemp1746 = (p !=0);
int nctemp1750=nctemp1746;
while(nctemp1750)
{{
int nctemp1751 = (semantic ==1);
if(nctemp1751)
{
int nctemp1755 = (p !=0);
if(nctemp1755)
{
struct tree* nctemp1760= p;
struct symbol* nctemp1764=SymGetetp();
struct symbol* nctemp1762= nctemp1764;
int nctemp1765=SemSem(nctemp1760,nctemp1762);
}
int nctemp1766 = (atree ==1);
if(nctemp1766)
{
struct tree* nctemp1771= p;
int nctemp1773= 0;
int nctemp1775=PtreePrtree(nctemp1771,nctemp1773);
}
int nctemp1776 = (table ==1);
if(nctemp1776)
{
struct symbol* nctemp1783=SymGetltp();
int nctemp1780 = (nctemp1783 !=0);
if(nctemp1780)
{
int nctemp1786= 3;
struct symbol* nctemp1790=SymGetltp();
struct symbol* nctemp1788= nctemp1790;
int nctemp1791= 0;
int nctemp1793=SymPrsym(nctemp1786,nctemp1788,nctemp1791);
}
}
}
int nctemp1794 = (emit ==1);
if(nctemp1794)
{
int nctemp1798 = (p !=0);
if(nctemp1798)
{
struct tree* nctemp1803= p;
struct symbol* nctemp1807=SymGetetp();
struct symbol* nctemp1805= nctemp1807;
int nctemp1808=CodeCode(nctemp1803,nctemp1805);
}
}
struct tree* nctemp1810= p;
int nctemp1812=PtreeRmtree(nctemp1810);
struct symbol* nctemp1816=SymGetltp();
struct symbol* nctemp1814= nctemp1816;
int nctemp1817=SymRmtable(nctemp1814);
int nctemp1818 = (parse ==1);
if(nctemp1818)
{
struct tree* nctemp1826=ParseParse();
p =nctemp1826;
int nctemp1827 = (btree ==1);
if(nctemp1827)
{
struct tree* nctemp1832= p;
int nctemp1834= 0;
int nctemp1836=PtreePrtree(nctemp1832,nctemp1834);
}
}
}
int nctemp1837 = (p !=0);
nctemp1750=nctemp1837;}int nctemp1844=ParseGetlookahead();
int nctemp1841 = (nctemp1844 !=19);
if(nctemp1841)
{
struct nctempchar1 *nctemp1849;
static struct nctempchar1 nctemp1850 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1849=&nctemp1850;
nctempchar1* nctemp1847= nctemp1849;
int nctemp1851=MainError(nctemp1847);
}
int nctemp1852 = (etable ==1);
if(nctemp1852)
{
int nctemp1857= 4;
int nctemp1859=LibeFlush(nctemp1857);
struct symbol* nctemp1863=SymGetetp();
int nctemp1860 = (nctemp1863 !=0);
if(nctemp1860)
{
int nctemp1866= 3;
struct symbol* nctemp1870=SymGetetp();
struct symbol* nctemp1868= nctemp1870;
int nctemp1871= 0;
int nctemp1873=SymPrsym(nctemp1866,nctemp1868,nctemp1871);
}
}
int nctemp1874 = (emit ==1);
if(nctemp1874)
{
int nctemp1879=CodePostamble();
}
int nctemp1883 = (emit ==1);
int nctemp1888 = (obj ==1);
int nctemp1880 = (nctemp1883 && nctemp1888);
if(nctemp1880)
{
int nctemp1892 = (2 ==1);
if(nctemp1892)
{
nctempchar1* nctemp1897= outfile;
int nctemp1900= debug;
int nctemp1902= optimize;
int nctemp1904= openmp;
int nctemp1906= show;
int nctemp1908=MainCcompcpu(nctemp1897,nctemp1900,nctemp1902,nctemp1904,nctemp1906);
}
else{
int nctemp1909 = (2 ==2);
if(nctemp1909)
{
nctempchar1* nctemp1914= outfile;
int nctemp1917= debug;
int nctemp1919= optimize;
int nctemp1921= openmp;
int nctemp1923= show;
int nctemp1925=MainCcompcuda(nctemp1914,nctemp1917,nctemp1919,nctemp1921,nctemp1923);
}
else{
int nctemp1926 = (2 ==3);
if(nctemp1926)
{
nctempchar1* nctemp1931= outfile;
int nctemp1934= debug;
int nctemp1936= optimize;
int nctemp1938= openmp;
int nctemp1940= show;
int nctemp1942=MainCcomphip(nctemp1931,nctemp1934,nctemp1936,nctemp1938,nctemp1940);
}
else{
struct nctempchar1 *nctemp1946;
static struct nctempchar1 nctemp1947 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1946=&nctemp1947;
nctempchar1* nctemp1944= nctemp1946;
int nctemp1948=MainError(nctemp1944);
}
}
}
}
int nctemp1949 = (emit ==1);
if(nctemp1949)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1957= fd;
int nctemp1959=LibeClose(nctemp1957);
}
nctempchar1* nctemp1966= infile;
nctempchar1* nctemp1969=MainFmod(nctemp1966);
nctempchar1* nctemp1964= nctemp1969;
struct nctempchar1 *nctemp1972;
static struct nctempchar1 nctemp1973 = {{ 2}, (char*)"w\0"};
nctemp1972=&nctemp1973;
nctempchar1* nctemp1970= nctemp1972;
int nctemp1974=LibeOpen(nctemp1964,nctemp1970);
fd =nctemp1974;
int nctemp1976= fd;
struct symbol* nctemp1980=SymGetetp();
struct symbol* nctemp1978= nctemp1980;
int nctemp1981= 0;
int nctemp1983=SymExport(nctemp1976,nctemp1978,nctemp1981);
int nctemp1985= 3;
int nctemp1987=LibeFlush(nctemp1985);
return 1;
}
}
