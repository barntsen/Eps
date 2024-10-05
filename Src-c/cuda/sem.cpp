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
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
nctempchar1 * ScanPath ();
int SemCompstmnt (struct tree* p)
;
int SemStmnt (struct tree* p)
;
struct tree* SemExpr (struct tree* p)
;
struct tree* SemUnexpr (struct tree* p)
;
struct tree* SemPrimexpr (struct tree* p)
;
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
struct tree* nctemp4= p;
nctempchar1* nctemp6=PtreeGetfile(nctemp4);
nctempchar1* nctemp2= nctemp6;
struct tree* nctemp9= p;
nctempchar1* nctemp11=PtreeGetdef(nctemp9);
nctempchar1* nctemp7= nctemp11;
struct tree* nctemp14= p;
int nctemp16=PtreeGetline(nctemp14);
int nctemp12= nctemp16;
nctempchar1* nctemp17= s1;
nctempchar1* nctemp20= s2;
int nctemp23=ErrSerror(nctemp2,nctemp7,nctemp12,nctemp17,nctemp20);
return 1;
}
int SemImport (struct tree* p,struct symbol* etp)
{
nctempchar1 *module;
nctempchar1 *file;
nctempchar1 *path;
nctempchar1 *sysfile;
nctempchar1 *name;
int fd;
struct symbol* stp;
struct symbol* sp;
struct symbol* tp;
struct symbol* prev;
struct tree* nctemp30= p;
nctempchar1* nctemp32=PtreeGetdef(nctemp30);
module=nctemp32;
nctempchar1* nctemp38= module;
struct nctempchar1 *nctemp43;
static struct nctempchar1 nctemp44 = {{ 3}, (char*)".m\0"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
nctempchar1* nctemp45=LibeStradd(nctemp38,nctemp41);
file=nctemp45;
nctempchar1* nctemp50= file;
struct nctempchar1 *nctemp55;
static struct nctempchar1 nctemp56 = {{ 2}, (char*)"r\0"};
nctemp55=&nctemp56;
nctempchar1* nctemp53= nctemp55;
int nctemp57=LibeOpen(nctemp50,nctemp53);
fd =nctemp57;
int nctemp58 = (fd ==0);
if(nctemp58)
{
nctempchar1* nctemp67=ScanPath();
path=nctemp67;
nctempchar1* nctemp73= path;
nctempchar1* nctemp76= file;
nctempchar1* nctemp79=LibeStradd(nctemp73,nctemp76);
sysfile=nctemp79;
nctempchar1* nctemp81= sysfile;
int nctemp84=LibePs(nctemp81);
struct nctempchar1 *nctemp88;
static struct nctempchar1 nctemp89 = {{ 3}, (char*)"\n\0"};
nctemp88=&nctemp89;
nctempchar1* nctemp86= nctemp88;
int nctemp90=LibePs(nctemp86);
nctempchar1* nctemp95= sysfile;
struct nctempchar1 *nctemp100;
static struct nctempchar1 nctemp101 = {{ 2}, (char*)"r\0"};
nctemp100=&nctemp101;
nctempchar1* nctemp98= nctemp100;
int nctemp102=LibeOpen(nctemp95,nctemp98);
fd =nctemp102;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp109 = (fd ==0);
if(nctemp109)
{
struct tree* nctemp114= p;
struct nctempchar1 *nctemp118;
static struct nctempchar1 nctemp119 = {{ 24}, (char*)"Module file not found: \0"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
nctempchar1* nctemp120= file;
int nctemp123=SemSerror(nctemp114,nctemp116,nctemp120);
}
}
struct symbol* nctemp128=SymMktable();
stp =nctemp128;
int nctemp130= fd;
struct symbol* nctemp132= stp;
nctempchar1* nctemp134= module;
int nctemp137=SymReadsym(nctemp130,nctemp132,nctemp134);
int nctemp139= fd;
int nctemp141=LibeClose(nctemp139);
struct symbol* nctemp146= stp;
struct symbol* nctemp148=SymMvnext(nctemp146);
tp =nctemp148;
int nctemp149 = (tp !=0);
int nctemp153=nctemp149;
while(nctemp153)
{{
nctempchar1* nctemp157= name;
struct symbol* nctemp160= etp;
struct symbol* nctemp162=SymLookup(nctemp157,nctemp160);
int nctemp154 = (nctemp162 !=0);
if(nctemp154)
{
prev =tp;
struct symbol* nctemp172= tp;
struct symbol* nctemp174=SymMvnext(nctemp172);
tp =nctemp174;
nctempchar1* nctemp176= name;
struct symbol* nctemp179= stp;
struct symbol* nctemp181=SymRmname(nctemp176,nctemp179);
}
else{
struct symbol* nctemp186= tp;
struct symbol* nctemp188=SymMvnext(nctemp186);
tp =nctemp188;
}
}
int nctemp189 = (tp !=0);
nctemp153=nctemp189;}struct symbol* nctemp197= etp;
struct symbol* nctemp199= stp;
struct symbol* nctemp201=SymAddtble(nctemp197,nctemp199);
etp =nctemp201;
return 1;
}
int SemDeclaration (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
int rank;
int l;
nctempchar1 *s;
nctempchar1 *global;
struct tree* nctemp204= p;
struct tree* nctemp208= p;
nctempchar1* nctemp210=PtreeGetdef(nctemp208);
nctempchar1* nctemp206= nctemp210;
int nctemp211=PtreeSetype(nctemp204,nctemp206);
struct tree* nctemp217= p;
nctempchar1* nctemp219=PtreeGetglobal(nctemp217);
global=nctemp219;
rank =0;
struct tree* nctemp227= p;
nctempchar1* nctemp229=PtreeGetarray(nctemp227);
nctempchar1* nctemp225= nctemp229;
struct nctempchar1 *nctemp232;
static struct nctempchar1 nctemp233 = {{ 6}, (char*)"array\0"};
nctemp232=&nctemp233;
nctempchar1* nctemp230= nctemp232;
int nctemp234=LibeStrcmp(nctemp225,nctemp230);
if(nctemp234)
{
struct tree* nctemp239= p;
struct tree* nctemp241=PtreeMvchild(nctemp239);
np =nctemp241;
struct tree* nctemp246= np;
struct tree* nctemp248=PtreeMvchild(nctemp246);
np =nctemp248;
rank =1;
struct tree* nctemp260= np;
struct tree* nctemp262=PtreeMvsister(nctemp260);
np =nctemp262;
int nctemp253 = (np !=0);
int nctemp264=nctemp253;
while(nctemp264)
{{
int nctemp273 = rank + 1;
rank =nctemp273;
}
struct tree* nctemp281= np;
struct tree* nctemp283=PtreeMvsister(nctemp281);
np =nctemp283;
int nctemp274 = (np !=0);
nctemp264=nctemp274;}struct tree* nctemp289= p;
struct tree* nctemp291=PtreeMvchild(nctemp289);
np =nctemp291;
struct tree* nctemp296= np;
struct tree* nctemp298=PtreeMvsister(nctemp296);
np =nctemp298;
}
else{
struct tree* nctemp303= p;
struct tree* nctemp305=PtreeMvchild(nctemp303);
np =nctemp305;
}
int nctemp306 = (np !=0);
int nctemp310=nctemp306;
while(nctemp310)
{{
struct tree* nctemp312= np;
struct tree* nctemp316= p;
nctempchar1* nctemp318=PtreeGetype(nctemp316);
nctempchar1* nctemp314= nctemp318;
int nctemp319=PtreeSetype(nctemp312,nctemp314);
struct tree* nctemp329= np;
nctempchar1* nctemp331=PtreeGetdef(nctemp329);
nctempchar1* nctemp327= nctemp331;
struct symbol* nctemp332= tp;
struct symbol* nctemp334=SymMkname(nctemp327,nctemp332);
up =nctemp334;
int nctemp320 = (up ==0);
if(nctemp320)
{
struct tree* nctemp337= np;
struct nctempchar1 *nctemp341;
static struct nctempchar1 nctemp342 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp341=&nctemp342;
nctempchar1* nctemp339= nctemp341;
struct tree* nctemp345= np;
nctempchar1* nctemp347=PtreeGetdef(nctemp345);
nctempchar1* nctemp343= nctemp347;
int nctemp348=SemSerror(nctemp337,nctemp339,nctemp343);
}
else{
struct symbol* nctemp350= up;
struct nctempchar1 *nctemp354;
static struct nctempchar1 nctemp355 = {{ 11}, (char*)"identifier\0"};
nctemp354=&nctemp355;
nctempchar1* nctemp352= nctemp354;
int nctemp356=SymSetident(nctemp350,nctemp352);
struct symbol* nctemp358= up;
struct tree* nctemp362= p;
nctempchar1* nctemp364=PtreeGetype(nctemp362);
nctempchar1* nctemp360= nctemp364;
int nctemp365=SymSetype(nctemp358,nctemp360);
nctempchar1* nctemp369= global;
struct nctempchar1 *nctemp374;
static struct nctempchar1 nctemp375 = {{ 7}, (char*)"global\0"};
nctemp374=&nctemp375;
nctempchar1* nctemp372= nctemp374;
int nctemp376=LibeStrcmp(nctemp369,nctemp372);
int nctemp366 = (nctemp376 ==1);
if(nctemp366)
{
struct symbol* nctemp379= up;
struct nctempchar1 *nctemp383;
static struct nctempchar1 nctemp384 = {{ 7}, (char*)"global\0"};
nctemp383=&nctemp384;
nctempchar1* nctemp381= nctemp383;
int nctemp385=SymSetglobal(nctemp379,nctemp381);
}
struct tree* nctemp391= p;
nctempchar1* nctemp393=PtreeGetype(nctemp391);
nctempchar1* nctemp389= nctemp393;
struct nctempchar1 *nctemp396;
static struct nctempchar1 nctemp397 = {{ 6}, (char*)"const\0"};
nctemp396=&nctemp397;
nctempchar1* nctemp394= nctemp396;
int nctemp398=LibeStrcmp(nctemp389,nctemp394);
int nctemp386 = (nctemp398 ==1);
if(nctemp386)
{
struct tree* nctemp404= np;
struct tree* nctemp406=PtreeMvchild(nctemp404);
sp =nctemp406;
struct tree* nctemp411= sp;
struct tree* nctemp413=PtreeMvchild(nctemp411);
sp =nctemp413;
struct tree* nctemp419= sp;
nctempchar1* nctemp421=PtreeGetname(nctemp419);
nctempchar1* nctemp417= nctemp421;
struct nctempchar1 *nctemp424;
static struct nctempchar1 nctemp425 = {{ 7}, (char*)"unexpr\0"};
nctemp424=&nctemp425;
nctempchar1* nctemp422= nctemp424;
int nctemp426=LibeStrcmp(nctemp417,nctemp422);
int nctemp414 = (nctemp426 ==1);
if(nctemp414)
{
struct tree* nctemp432= sp;
struct tree* nctemp434=PtreeMvchild(nctemp432);
sp =nctemp434;
struct tree* nctemp447= sp;
nctempchar1* nctemp449=PtreeGetdef(nctemp447);
nctempchar1* nctemp445= nctemp449;
int nctemp450=LibeStrlen(nctemp445);
int nctemp452 = nctemp450 + 1;
int nctemp454 = nctemp452 + 3;
l =nctemp454;
int nctemp461=l;
nctempchar1 *nctemp460;
nctemp460=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp460->d[0]=l;
nctemp460->a=(char *)RunMalloc(sizeof(char)*nctemp461);
s=nctemp460;
struct nctempchar1 *nctemp467;
static struct nctempchar1 nctemp468 = {{ 3}, (char*)"(-\0"};
nctemp467=&nctemp468;
nctempchar1* nctemp465= nctemp467;
nctempchar1* nctemp469= s;
int nctemp472=LibeStrcpy(nctemp465,nctemp469);
struct tree* nctemp476= sp;
nctempchar1* nctemp478=PtreeGetdef(nctemp476);
nctempchar1* nctemp474= nctemp478;
nctempchar1* nctemp479= s;
int nctemp482=LibeStrcat(nctemp474,nctemp479);
struct nctempchar1 *nctemp486;
static struct nctempchar1 nctemp487 = {{ 2}, (char*)")\0"};
nctemp486=&nctemp487;
nctempchar1* nctemp484= nctemp486;
nctempchar1* nctemp488= s;
int nctemp491=LibeStrcat(nctemp484,nctemp488);
struct tree* nctemp493= sp;
nctempchar1* nctemp495= s;
int nctemp498=PtreeSetdef(nctemp493,nctemp495);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp503= up;
struct tree* nctemp507= sp;
nctempchar1* nctemp509=PtreeGetname(nctemp507);
nctempchar1* nctemp505= nctemp509;
int nctemp510=SymSetype(nctemp503,nctemp505);
struct symbol* nctemp512= up;
struct tree* nctemp516= sp;
nctempchar1* nctemp518=PtreeGetdef(nctemp516);
nctempchar1* nctemp514= nctemp518;
int nctemp519=SymSetdescr(nctemp512,nctemp514);
struct symbol* nctemp521= up;
int nctemp523= 0;
int nctemp525=SymSetemit(nctemp521,nctemp523);
}
struct symbol* nctemp527= up;
struct nctempchar1 *nctemp531;
static struct nctempchar1 nctemp532 = {{ 5}, (char*)"lval\0"};
nctemp531=&nctemp532;
nctempchar1* nctemp529= nctemp531;
int nctemp533=SymSetlval(nctemp527,nctemp529);
struct tree* nctemp537= p;
nctempchar1* nctemp539=PtreeGetstruct(nctemp537);
nctempchar1* nctemp535= nctemp539;
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 7}, (char*)"struct\0"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
int nctemp544=LibeStrcmp(nctemp535,nctemp540);
if(nctemp544)
{
struct tree* nctemp550= p;
nctempchar1* nctemp552=PtreeGetype(nctemp550);
nctempchar1* nctemp548= nctemp552;
struct symbol* nctemp555=SymGetetp();
struct symbol* nctemp553= nctemp555;
struct symbol* nctemp556=SymLookup(nctemp548,nctemp553);
int nctemp545 = (nctemp556 ==0);
if(nctemp545)
{
struct tree* nctemp559= p;
struct nctempchar1 *nctemp563;
static struct nctempchar1 nctemp564 = {{ 20}, (char*)"Undefined structure\0"};
nctemp563=&nctemp564;
nctempchar1* nctemp561= nctemp563;
struct tree* nctemp567= p;
nctempchar1* nctemp569=PtreeGetype(nctemp567);
nctempchar1* nctemp565= nctemp569;
int nctemp570=SemSerror(nctemp559,nctemp561,nctemp565);
}
struct symbol* nctemp572= up;
struct tree* nctemp576= p;
nctempchar1* nctemp578=PtreeGetstruct(nctemp576);
nctempchar1* nctemp574= nctemp578;
int nctemp579=SymSetstruct(nctemp572,nctemp574);
}
struct symbol* nctemp581= up;
struct tree* nctemp585= p;
nctempchar1* nctemp587=PtreeGetarray(nctemp585);
nctempchar1* nctemp583= nctemp587;
int nctemp588=SymSetarray(nctemp581,nctemp583);
struct symbol* nctemp590= up;
int nctemp592= rank;
int nctemp594=SymSetrank(nctemp590,nctemp592);
struct tree* nctemp596= np;
int nctemp598= rank;
int nctemp600=PtreeSetrank(nctemp596,nctemp598);
}
struct tree* nctemp605= np;
struct tree* nctemp607=PtreeMvsister(nctemp605);
np =nctemp607;
}
int nctemp608 = (np !=0);
nctemp310=nctemp608;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp613 = (p !=0);
int nctemp617=nctemp613;
while(nctemp617)
{{
struct tree* nctemp619= p;
struct symbol* nctemp621= tp;
int nctemp623=SemDeclaration(nctemp619,nctemp621);
struct tree* nctemp628= p;
struct tree* nctemp630=PtreeMvsister(nctemp628);
p =nctemp630;
}
int nctemp631 = (p !=0);
nctemp617=nctemp631;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp641= p;
nctempchar1* nctemp643=PtreeGetdef(nctemp641);
structure=nctemp643;
struct tree* nctemp648= p;
struct tree* nctemp650=PtreeMvchild(nctemp648);
p =nctemp650;
struct tree* nctemp655= p;
struct tree* nctemp657=PtreeMvchild(nctemp655);
p =nctemp657;
struct tree* nctemp661= p;
nctempchar1* nctemp663=PtreeGetname(nctemp661);
nctempchar1* nctemp659= nctemp663;
struct nctempchar1 *nctemp666;
static struct nctempchar1 nctemp667 = {{ 13}, (char*)"declarations\0"};
nctemp666=&nctemp667;
nctempchar1* nctemp664= nctemp666;
int nctemp668=LibeStrcmp(nctemp659,nctemp664);
if(nctemp668)
{
struct symbol* nctemp673=SymMktable();
up =nctemp673;
nctempchar1* nctemp681= structure;
struct symbol* nctemp684= tp;
struct symbol* nctemp686=SymMkname(nctemp681,nctemp684);
uup =nctemp686;
int nctemp674 = (uup ==0);
if(nctemp674)
{
struct tree* nctemp689= p;
struct nctempchar1 *nctemp693;
static struct nctempchar1 nctemp694 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp693=&nctemp694;
nctempchar1* nctemp691= nctemp693;
nctempchar1* nctemp695= structure;
int nctemp698=SemSerror(nctemp689,nctemp691,nctemp695);
}
else{
struct symbol* nctemp700= uup;
struct symbol* nctemp702= up;
struct symbol* nctemp704=SymSetable(nctemp700,nctemp702);
struct symbol* nctemp706= uup;
struct nctempchar1 *nctemp710;
static struct nctempchar1 nctemp711 = {{ 10}, (char*)"structdef\0"};
nctemp710=&nctemp711;
nctempchar1* nctemp708= nctemp710;
int nctemp712=SymSetstruct(nctemp706,nctemp708);
struct symbol* nctemp714= uup;
nctempchar1* nctemp716= structure;
int nctemp719=SymSetype(nctemp714,nctemp716);
struct tree* nctemp723= p;
struct tree* nctemp725=PtreeMvchild(nctemp723);
struct tree* nctemp721= nctemp725;
struct symbol* nctemp726= up;
int nctemp728=SemDeclarations(nctemp721,nctemp726);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp735= p;
nctempchar1* nctemp737=PtreeGetdef(nctemp735);
name=nctemp737;
struct symbol* nctemp743= tp;
nctempchar1* nctemp745=SymGetype(nctemp743);
nctempchar1* nctemp741= nctemp745;
struct tree* nctemp748= p;
nctempchar1* nctemp750=PtreeGetype(nctemp748);
nctempchar1* nctemp746= nctemp750;
int nctemp751=LibeStrcmp(nctemp741,nctemp746);
int nctemp738 = (nctemp751 ==0);
if(nctemp738)
{
struct tree* nctemp754= p;
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 50}, (char*)"Argument1 type does not match forward declaration\0"};
nctemp758=&nctemp759;
nctempchar1* nctemp756= nctemp758;
nctempchar1* nctemp760= name;
int nctemp763=SemSerror(nctemp754,nctemp756,nctemp760);
}
struct symbol* nctemp769= tp;
nctempchar1* nctemp771=SymGetref(nctemp769);
nctempchar1* nctemp767= nctemp771;
struct tree* nctemp774= p;
nctempchar1* nctemp776=PtreeGetref(nctemp774);
nctempchar1* nctemp772= nctemp776;
int nctemp777=LibeStrcmp(nctemp767,nctemp772);
int nctemp764 = (nctemp777 ==0);
if(nctemp764)
{
struct tree* nctemp780= p;
struct nctempchar1 *nctemp784;
static struct nctempchar1 nctemp785 = {{ 50}, (char*)"Argument2 type does not match forward declaration\0"};
nctemp784=&nctemp785;
nctempchar1* nctemp782= nctemp784;
nctempchar1* nctemp786= name;
int nctemp789=SemSerror(nctemp780,nctemp782,nctemp786);
}
struct symbol* nctemp795= tp;
nctempchar1* nctemp797=SymGetarray(nctemp795);
nctempchar1* nctemp793= nctemp797;
struct tree* nctemp800= p;
nctempchar1* nctemp802=PtreeGetarray(nctemp800);
nctempchar1* nctemp798= nctemp802;
int nctemp803=LibeStrcmp(nctemp793,nctemp798);
int nctemp790 = (nctemp803 ==0);
if(nctemp790)
{
struct tree* nctemp806= p;
struct nctempchar1 *nctemp810;
static struct nctempchar1 nctemp811 = {{ 50}, (char*)"Argument3 type does not match forward declaration\0"};
nctemp810=&nctemp811;
nctempchar1* nctemp808= nctemp810;
nctempchar1* nctemp812= name;
int nctemp815=SemSerror(nctemp806,nctemp808,nctemp812);
}
struct symbol* nctemp819= tp;
int nctemp821=SymGetrank(nctemp819);
struct tree* nctemp823= p;
int nctemp825=PtreeGetrank(nctemp823);
int nctemp816 = (nctemp821 !=nctemp825);
if(nctemp816)
{
struct tree* nctemp827= p;
struct nctempchar1 *nctemp831;
static struct nctempchar1 nctemp832 = {{ 50}, (char*)"Argument4 type does not match forward declaration\0"};
nctemp831=&nctemp832;
nctempchar1* nctemp829= nctemp831;
nctempchar1* nctemp833= name;
int nctemp836=SemSerror(nctemp827,nctemp829,nctemp833);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp843= p;
nctempchar1* nctemp845=PtreeGetarray(nctemp843);
nctempchar1* nctemp841= nctemp845;
struct nctempchar1 *nctemp848;
static struct nctempchar1 nctemp849 = {{ 6}, (char*)"array\0"};
nctemp848=&nctemp849;
nctempchar1* nctemp846= nctemp848;
int nctemp850=LibeStrcmp(nctemp841,nctemp846);
int nctemp838 = (nctemp850 ==0);
if(nctemp838)
{
struct tree* nctemp853= p;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 13}, (char*)"Not an array\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
struct tree* nctemp861= p;
nctempchar1* nctemp863=PtreeGetdef(nctemp861);
nctempchar1* nctemp859= nctemp863;
int nctemp864=SemSerror(nctemp853,nctemp855,nctemp859);
return 0;
}
struct tree* nctemp867= p;
struct nctempchar1 *nctemp871;
static struct nctempchar1 nctemp872 = {{ 11}, (char*)"identifier\0"};
nctemp871=&nctemp872;
nctempchar1* nctemp869= nctemp871;
int nctemp873=PtreeSetname(nctemp867,nctemp869);
struct tree* nctemp878= p;
struct tree* nctemp880=PtreeMvchild(nctemp878);
np =nctemp880;
struct tree* nctemp886= np;
nctempchar1* nctemp888=PtreeGetname(nctemp886);
nctempchar1* nctemp884= nctemp888;
struct nctempchar1 *nctemp891;
static struct nctempchar1 nctemp892 = {{ 9}, (char*)"exprlist\0"};
nctemp891=&nctemp892;
nctempchar1* nctemp889= nctemp891;
int nctemp893=LibeStrcmp(nctemp884,nctemp889);
int nctemp881 = (nctemp893 ==0);
if(nctemp881)
{
struct tree* nctemp896= p;
struct nctempchar1 *nctemp900;
static struct nctempchar1 nctemp901 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp900=&nctemp901;
nctempchar1* nctemp898= nctemp900;
struct tree* nctemp904= p;
nctempchar1* nctemp906=PtreeGetdef(nctemp904);
nctempchar1* nctemp902= nctemp906;
int nctemp907=SemSerror(nctemp896,nctemp898,nctemp902);
return 0;
}
struct tree* nctemp916= np;
struct tree* nctemp918=PtreeMvchild(nctemp916);
np =nctemp918;
int nctemp909 = (np !=0);
if(nctemp909)
{
rank =0;
int nctemp924 = (np !=0);
int nctemp928=nctemp924;
while(nctemp928)
{{
struct tree* nctemp930= np;
struct tree* nctemp932=SemExpr(nctemp930);
struct tree* nctemp937= np;
struct tree* nctemp939=PtreeMvsister(nctemp937);
np =nctemp939;
int nctemp948 = rank + 1;
rank =nctemp948;
}
int nctemp949 = (np !=0);
nctemp928=nctemp949;}}
struct symbol* nctemp957= tp;
int nctemp959=SymGetrank(nctemp957);
int nctemp953 = (rank !=nctemp959);
if(nctemp953)
{
struct tree* nctemp961= p;
struct nctempchar1 *nctemp965;
static struct nctempchar1 nctemp966 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp965=&nctemp966;
nctempchar1* nctemp963= nctemp965;
struct tree* nctemp969= p;
nctempchar1* nctemp971=PtreeGetdef(nctemp969);
nctempchar1* nctemp967= nctemp971;
int nctemp972=SemSerror(nctemp961,nctemp963,nctemp967);
return 0;
}
struct tree* nctemp975= p;
int nctemp977= rank;
int nctemp979=PtreeSetrank(nctemp975,nctemp977);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp986= p;
nctempchar1* nctemp988=PtreeGetstruct(nctemp986);
nctempchar1* nctemp984= nctemp988;
struct nctempchar1 *nctemp991;
static struct nctempchar1 nctemp992 = {{ 7}, (char*)"struct\0"};
nctemp991=&nctemp992;
nctempchar1* nctemp989= nctemp991;
int nctemp993=LibeStrcmp(nctemp984,nctemp989);
int nctemp981 = (nctemp993 ==0);
if(nctemp981)
{
struct tree* nctemp996= p;
struct nctempchar1 *nctemp1000;
static struct nctempchar1 nctemp1001 = {{ 16}, (char*)"Not a structure\0"};
nctemp1000=&nctemp1001;
nctempchar1* nctemp998= nctemp1000;
struct tree* nctemp1004= p;
nctempchar1* nctemp1006=PtreeGetdef(nctemp1004);
nctempchar1* nctemp1002= nctemp1006;
int nctemp1007=SemSerror(nctemp996,nctemp998,nctemp1002);
return 0;
}
struct tree* nctemp1010= p;
struct nctempchar1 *nctemp1014;
static struct nctempchar1 nctemp1015 = {{ 11}, (char*)"identifier\0"};
nctemp1014=&nctemp1015;
nctempchar1* nctemp1012= nctemp1014;
int nctemp1016=PtreeSetname(nctemp1010,nctemp1012);
struct symbol* nctemp1022= tp;
nctempchar1* nctemp1024=SymGetype(nctemp1022);
temp=nctemp1024;
nctempchar1* nctemp1032= temp;
struct symbol* nctemp1035=SymLook(nctemp1032);
up =nctemp1035;
int nctemp1025 = (up ==0);
if(nctemp1025)
{
nctempchar1* nctemp1044= temp;
struct symbol* nctemp1047=SymLook(nctemp1044);
up =nctemp1047;
int nctemp1037 = (up ==0);
if(nctemp1037)
{
struct tree* nctemp1050= p;
struct nctempchar1 *nctemp1054;
static struct nctempchar1 nctemp1055 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp1054=&nctemp1055;
nctempchar1* nctemp1052= nctemp1054;
struct nctempchar1 *nctemp1058;
static struct nctempchar1 nctemp1059 = {{ 2}, (char*)" \0"};
nctemp1058=&nctemp1059;
nctempchar1* nctemp1056= nctemp1058;
int nctemp1060=SemSerror(nctemp1050,nctemp1052,nctemp1056);
return 0;
}
}
struct symbol* nctemp1065= tp;
nctempchar1* nctemp1067=SymGetstruct(nctemp1065);
nctempchar1* nctemp1063= nctemp1067;
struct nctempchar1 *nctemp1070;
static struct nctempchar1 nctemp1071 = {{ 10}, (char*)"structdef\0"};
nctemp1070=&nctemp1071;
nctempchar1* nctemp1068= nctemp1070;
int nctemp1072=LibeStrcmp(nctemp1063,nctemp1068);
if(nctemp1072)
{
struct tree* nctemp1074= p;
struct nctempchar1 *nctemp1078;
static struct nctempchar1 nctemp1079 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1078=&nctemp1079;
nctempchar1* nctemp1076= nctemp1078;
struct tree* nctemp1082= p;
nctempchar1* nctemp1084=PtreeGetdef(nctemp1082);
nctempchar1* nctemp1080= nctemp1084;
int nctemp1085=SemSerror(nctemp1074,nctemp1076,nctemp1080);
return 0;
}
struct tree* nctemp1091= p;
struct tree* nctemp1093=PtreeMvchild(nctemp1091);
np =nctemp1093;
int nctemp1094 = (np ==0);
if(nctemp1094)
{
struct tree* nctemp1099= p;
struct nctempchar1 *nctemp1103;
static struct nctempchar1 nctemp1104 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1103=&nctemp1104;
nctempchar1* nctemp1101= nctemp1103;
struct tree* nctemp1107= p;
nctempchar1* nctemp1109=PtreeGetdef(nctemp1107);
nctempchar1* nctemp1105= nctemp1109;
int nctemp1110=SemSerror(nctemp1099,nctemp1101,nctemp1105);
return 0;
}
struct tree* nctemp1115= p;
nctempchar1* nctemp1117=PtreeGetarray(nctemp1115);
nctempchar1* nctemp1113= nctemp1117;
struct nctempchar1 *nctemp1120;
static struct nctempchar1 nctemp1121 = {{ 6}, (char*)"array\0"};
nctemp1120=&nctemp1121;
nctempchar1* nctemp1118= nctemp1120;
int nctemp1122=LibeStrcmp(nctemp1113,nctemp1118);
if(nctemp1122)
{
struct tree* nctemp1127= np;
struct tree* nctemp1129=PtreeMvsister(nctemp1127);
np =nctemp1129;
}
int nctemp1130 = (np ==0);
if(nctemp1130)
{
struct tree* nctemp1135= p;
struct nctempchar1 *nctemp1139;
static struct nctempchar1 nctemp1140 = {{ 20}, (char*)"Missing array index\0"};
nctemp1139=&nctemp1140;
nctempchar1* nctemp1137= nctemp1139;
struct tree* nctemp1143= p;
nctempchar1* nctemp1145=PtreeGetdef(nctemp1143);
nctempchar1* nctemp1141= nctemp1145;
int nctemp1146=SemSerror(nctemp1135,nctemp1137,nctemp1141);
return 0;
}
struct symbol* nctemp1152= up;
struct symbol* nctemp1154=SymGetable(nctemp1152);
uup =nctemp1154;
struct tree* nctemp1164= np;
nctempchar1* nctemp1166=PtreeGetdef(nctemp1164);
nctempchar1* nctemp1162= nctemp1166;
struct symbol* nctemp1167= uup;
struct symbol* nctemp1169=SymLookup(nctemp1162,nctemp1167);
tp =nctemp1169;
int nctemp1155 = (tp ==0);
if(nctemp1155)
{
struct tree* nctemp1172= np;
struct nctempchar1 *nctemp1176;
static struct nctempchar1 nctemp1177 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1176=&nctemp1177;
nctempchar1* nctemp1174= nctemp1176;
struct tree* nctemp1180= np;
nctempchar1* nctemp1182=PtreeGetdef(nctemp1180);
nctempchar1* nctemp1178= nctemp1182;
int nctemp1183=SemSerror(nctemp1172,nctemp1174,nctemp1178);
return 0;
}
struct symbol* nctemp1188= tp;
nctempchar1* nctemp1190=SymGetarray(nctemp1188);
nctempchar1* nctemp1186= nctemp1190;
struct nctempchar1 *nctemp1193;
static struct nctempchar1 nctemp1194 = {{ 6}, (char*)"array\0"};
nctemp1193=&nctemp1194;
nctempchar1* nctemp1191= nctemp1193;
int nctemp1195=LibeStrcmp(nctemp1186,nctemp1191);
if(nctemp1195)
{
struct tree* nctemp1199= np;
struct tree* nctemp1201=PtreeMvchild(nctemp1199);
int nctemp1196 = (nctemp1201 !=0);
if(nctemp1196)
{
struct tree* nctemp1204= np;
struct symbol* nctemp1206= tp;
int nctemp1208=SemArray(nctemp1204,nctemp1206);
struct symbol* nctemp1212= tp;
nctempchar1* nctemp1214=SymGetstruct(nctemp1212);
nctempchar1* nctemp1210= nctemp1214;
struct nctempchar1 *nctemp1217;
static struct nctempchar1 nctemp1218 = {{ 7}, (char*)"struct\0"};
nctemp1217=&nctemp1218;
nctempchar1* nctemp1215= nctemp1217;
int nctemp1219=LibeStrcmp(nctemp1210,nctemp1215);
if(nctemp1219)
{
struct tree* nctemp1221= np;
struct nctempchar1 *nctemp1225;
static struct nctempchar1 nctemp1226 = {{ 5}, (char*)"sref\0"};
nctemp1225=&nctemp1226;
nctempchar1* nctemp1223= nctemp1225;
int nctemp1227=PtreeSetref(nctemp1221,nctemp1223);
}
}
else{
struct tree* nctemp1229= np;
struct nctempchar1 *nctemp1233;
static struct nctempchar1 nctemp1234 = {{ 5}, (char*)"aref\0"};
nctemp1233=&nctemp1234;
nctempchar1* nctemp1231= nctemp1233;
int nctemp1235=PtreeSetref(nctemp1229,nctemp1231);
}
}
else{
struct symbol* nctemp1239= tp;
nctempchar1* nctemp1241=SymGetstruct(nctemp1239);
nctempchar1* nctemp1237= nctemp1241;
struct nctempchar1 *nctemp1244;
static struct nctempchar1 nctemp1245 = {{ 7}, (char*)"struct\0"};
nctemp1244=&nctemp1245;
nctempchar1* nctemp1242= nctemp1244;
int nctemp1246=LibeStrcmp(nctemp1237,nctemp1242);
if(nctemp1246)
{
struct tree* nctemp1248= np;
struct nctempchar1 *nctemp1252;
static struct nctempchar1 nctemp1253 = {{ 5}, (char*)"sref\0"};
nctemp1252=&nctemp1253;
nctempchar1* nctemp1250= nctemp1252;
int nctemp1254=PtreeSetref(nctemp1248,nctemp1250);
}
}
struct tree* nctemp1256= np;
struct symbol* nctemp1260= tp;
nctempchar1* nctemp1262=SymGetype(nctemp1260);
nctempchar1* nctemp1258= nctemp1262;
int nctemp1263=PtreeSetype(nctemp1256,nctemp1258);
struct tree* nctemp1265= np;
struct symbol* nctemp1269= tp;
nctempchar1* nctemp1271=SymGetarray(nctemp1269);
nctempchar1* nctemp1267= nctemp1271;
int nctemp1272=PtreeSetarray(nctemp1265,nctemp1267);
struct tree* nctemp1274= np;
struct symbol* nctemp1278= tp;
int nctemp1280=SymGetrank(nctemp1278);
int nctemp1276= nctemp1280;
int nctemp1281=PtreeSetrank(nctemp1274,nctemp1276);
struct tree* nctemp1283= np;
struct symbol* nctemp1287= tp;
nctempchar1* nctemp1289=SymGetlval(nctemp1287);
nctempchar1* nctemp1285= nctemp1289;
int nctemp1290=PtreeSetlval(nctemp1283,nctemp1285);
struct tree* nctemp1292= p;
struct symbol* nctemp1296= tp;
nctempchar1* nctemp1298=SymGetype(nctemp1296);
nctempchar1* nctemp1294= nctemp1298;
int nctemp1299=PtreeSetype(nctemp1292,nctemp1294);
struct tree* nctemp1301= p;
struct tree* nctemp1305= np;
nctempchar1* nctemp1307=PtreeGetref(nctemp1305);
nctempchar1* nctemp1303= nctemp1307;
int nctemp1308=PtreeSetref(nctemp1301,nctemp1303);
struct tree* nctemp1310= p;
struct symbol* nctemp1314= tp;
int nctemp1316=SymGetrank(nctemp1314);
int nctemp1312= nctemp1316;
int nctemp1317=PtreeSetrank(nctemp1310,nctemp1312);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1328= p;
nctempchar1* nctemp1330=PtreeGetdef(nctemp1328);
nctempchar1* nctemp1326= nctemp1330;
struct symbol* nctemp1331=SymLook(nctemp1326);
tp =nctemp1331;
int nctemp1319 = (tp ==0);
if(nctemp1319)
{
struct tree* nctemp1334= p;
struct nctempchar1 *nctemp1338;
static struct nctempchar1 nctemp1339 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1338=&nctemp1339;
nctempchar1* nctemp1336= nctemp1338;
struct tree* nctemp1342= p;
nctempchar1* nctemp1344=PtreeGetdef(nctemp1342);
nctempchar1* nctemp1340= nctemp1344;
int nctemp1345=SemSerror(nctemp1334,nctemp1336,nctemp1340);
}
struct symbol* nctemp1351= tp;
nctempchar1* nctemp1353=SymGetype(nctemp1351);
nctempchar1* nctemp1349= nctemp1353;
struct nctempchar1 *nctemp1356;
static struct nctempchar1 nctemp1357 = {{ 10}, (char*)"iconstant\0"};
nctemp1356=&nctemp1357;
nctempchar1* nctemp1354= nctemp1356;
int nctemp1358=LibeStrcmp(nctemp1349,nctemp1354);
int nctemp1346 = (nctemp1358 ==1);
if(nctemp1346)
{
struct tree* nctemp1361= p;
struct symbol* nctemp1365= tp;
nctempchar1* nctemp1367=SymGetype(nctemp1365);
nctempchar1* nctemp1363= nctemp1367;
int nctemp1368=PtreeSetname(nctemp1361,nctemp1363);
struct tree* nctemp1370= p;
struct symbol* nctemp1374= tp;
nctempchar1* nctemp1376=SymGetdescr(nctemp1374);
nctempchar1* nctemp1372= nctemp1376;
int nctemp1377=PtreeSetdef(nctemp1370,nctemp1372);
struct tree* nctemp1379= p;
struct nctempchar1 *nctemp1383;
static struct nctempchar1 nctemp1384 = {{ 4}, (char*)"int\0"};
nctemp1383=&nctemp1384;
nctempchar1* nctemp1381= nctemp1383;
int nctemp1385=PtreeSetype(nctemp1379,nctemp1381);
return 1;
}
else{
struct symbol* nctemp1392= tp;
nctempchar1* nctemp1394=SymGetype(nctemp1392);
nctempchar1* nctemp1390= nctemp1394;
struct nctempchar1 *nctemp1397;
static struct nctempchar1 nctemp1398 = {{ 10}, (char*)"rconstant\0"};
nctemp1397=&nctemp1398;
nctempchar1* nctemp1395= nctemp1397;
int nctemp1399=LibeStrcmp(nctemp1390,nctemp1395);
int nctemp1387 = (nctemp1399 ==1);
if(nctemp1387)
{
struct tree* nctemp1402= p;
struct symbol* nctemp1406= tp;
nctempchar1* nctemp1408=SymGetype(nctemp1406);
nctempchar1* nctemp1404= nctemp1408;
int nctemp1409=PtreeSetname(nctemp1402,nctemp1404);
struct tree* nctemp1411= p;
struct symbol* nctemp1415= tp;
nctempchar1* nctemp1417=SymGetdescr(nctemp1415);
nctempchar1* nctemp1413= nctemp1417;
int nctemp1418=PtreeSetdef(nctemp1411,nctemp1413);
struct tree* nctemp1420= p;
struct nctempchar1 *nctemp1424;
static struct nctempchar1 nctemp1425 = {{ 6}, (char*)"float\0"};
nctemp1424=&nctemp1425;
nctempchar1* nctemp1422= nctemp1424;
int nctemp1426=PtreeSetype(nctemp1420,nctemp1422);
return 1;
}
else{
struct symbol* nctemp1433= tp;
nctempchar1* nctemp1435=SymGetype(nctemp1433);
nctempchar1* nctemp1431= nctemp1435;
struct nctempchar1 *nctemp1438;
static struct nctempchar1 nctemp1439 = {{ 10}, (char*)"sconstant\0"};
nctemp1438=&nctemp1439;
nctempchar1* nctemp1436= nctemp1438;
int nctemp1440=LibeStrcmp(nctemp1431,nctemp1436);
int nctemp1428 = (nctemp1440 ==1);
if(nctemp1428)
{
struct tree* nctemp1443= p;
struct symbol* nctemp1447= tp;
nctempchar1* nctemp1449=SymGetype(nctemp1447);
nctempchar1* nctemp1445= nctemp1449;
int nctemp1450=PtreeSetname(nctemp1443,nctemp1445);
struct tree* nctemp1452= p;
struct symbol* nctemp1456= tp;
nctempchar1* nctemp1458=SymGetdescr(nctemp1456);
nctempchar1* nctemp1454= nctemp1458;
int nctemp1459=PtreeSetdef(nctemp1452,nctemp1454);
struct tree* nctemp1461= p;
struct nctempchar1 *nctemp1465;
static struct nctempchar1 nctemp1466 = {{ 5}, (char*)"char\0"};
nctemp1465=&nctemp1466;
nctempchar1* nctemp1463= nctemp1465;
int nctemp1467=PtreeSetype(nctemp1461,nctemp1463);
struct tree* nctemp1469= p;
struct nctempchar1 *nctemp1473;
static struct nctempchar1 nctemp1474 = {{ 6}, (char*)"array\0"};
nctemp1473=&nctemp1474;
nctempchar1* nctemp1471= nctemp1473;
int nctemp1475=PtreeSetarray(nctemp1469,nctemp1471);
struct tree* nctemp1477= p;
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 5}, (char*)"aref\0"};
nctemp1481=&nctemp1482;
nctempchar1* nctemp1479= nctemp1481;
int nctemp1483=PtreeSetref(nctemp1477,nctemp1479);
struct tree* nctemp1485= p;
int nctemp1487= 1;
int nctemp1489=PtreeSetrank(nctemp1485,nctemp1487);
return 1;
}
}
}
struct symbol* nctemp1494= tp;
nctempchar1* nctemp1496=SymGetstruct(nctemp1494);
nctempchar1* nctemp1492= nctemp1496;
struct nctempchar1 *nctemp1499;
static struct nctempchar1 nctemp1500 = {{ 10}, (char*)"structdef\0"};
nctemp1499=&nctemp1500;
nctempchar1* nctemp1497= nctemp1499;
int nctemp1501=LibeStrcmp(nctemp1492,nctemp1497);
if(nctemp1501)
{
struct tree* nctemp1503= p;
struct nctempchar1 *nctemp1507;
static struct nctempchar1 nctemp1508 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1507=&nctemp1508;
nctempchar1* nctemp1505= nctemp1507;
struct tree* nctemp1511= p;
nctempchar1* nctemp1513=PtreeGetdef(nctemp1511);
nctempchar1* nctemp1509= nctemp1513;
int nctemp1514=SemSerror(nctemp1503,nctemp1505,nctemp1509);
}
struct tree* nctemp1516= p;
struct symbol* nctemp1520= tp;
nctempchar1* nctemp1522=SymGetype(nctemp1520);
nctempchar1* nctemp1518= nctemp1522;
int nctemp1523=PtreeSetype(nctemp1516,nctemp1518);
struct tree* nctemp1525= p;
struct symbol* nctemp1529= tp;
nctempchar1* nctemp1531=SymGetarray(nctemp1529);
nctempchar1* nctemp1527= nctemp1531;
int nctemp1532=PtreeSetarray(nctemp1525,nctemp1527);
struct tree* nctemp1534= p;
struct symbol* nctemp1538= tp;
int nctemp1540=SymGetrank(nctemp1538);
int nctemp1536= nctemp1540;
int nctemp1541=PtreeSetrank(nctemp1534,nctemp1536);
struct tree* nctemp1543= p;
struct symbol* nctemp1547= tp;
nctempchar1* nctemp1549=SymGetstruct(nctemp1547);
nctempchar1* nctemp1545= nctemp1549;
int nctemp1550=PtreeSetstruct(nctemp1543,nctemp1545);
struct tree* nctemp1552= p;
struct symbol* nctemp1556= tp;
nctempchar1* nctemp1558=SymGetlval(nctemp1556);
nctempchar1* nctemp1554= nctemp1558;
int nctemp1559=PtreeSetlval(nctemp1552,nctemp1554);
struct tree* nctemp1564= p;
struct tree* nctemp1566=PtreeMvchild(nctemp1564);
np =nctemp1566;
int nctemp1567 = (np !=0);
if(nctemp1567)
{
struct tree* nctemp1574= np;
nctempchar1* nctemp1576=PtreeGetname(nctemp1574);
nctempchar1* nctemp1572= nctemp1576;
struct nctempchar1 *nctemp1579;
static struct nctempchar1 nctemp1580 = {{ 9}, (char*)"exprlist\0"};
nctemp1579=&nctemp1580;
nctempchar1* nctemp1577= nctemp1579;
int nctemp1581=LibeStrcmp(nctemp1572,nctemp1577);
if(nctemp1581)
{
struct tree* nctemp1583= p;
struct symbol* nctemp1585= tp;
int nctemp1587=SemArray(nctemp1583,nctemp1585);
struct tree* nctemp1591= np;
struct tree* nctemp1593=PtreeMvsister(nctemp1591);
int nctemp1588 = (nctemp1593 !=0);
if(nctemp1588)
{
struct tree* nctemp1596= p;
struct symbol* nctemp1598= tp;
int nctemp1600=SemStructure(nctemp1596,nctemp1598);
}
else{
struct tree* nctemp1604= p;
nctempchar1* nctemp1606=PtreeGetstruct(nctemp1604);
nctempchar1* nctemp1602= nctemp1606;
struct nctempchar1 *nctemp1609;
static struct nctempchar1 nctemp1610 = {{ 7}, (char*)"struct\0"};
nctemp1609=&nctemp1610;
nctempchar1* nctemp1607= nctemp1609;
int nctemp1611=LibeStrcmp(nctemp1602,nctemp1607);
if(nctemp1611)
{
struct tree* nctemp1613= p;
struct nctempchar1 *nctemp1617;
static struct nctempchar1 nctemp1618 = {{ 5}, (char*)"sref\0"};
nctemp1617=&nctemp1618;
nctempchar1* nctemp1615= nctemp1617;
int nctemp1619=PtreeSetref(nctemp1613,nctemp1615);
}
}
}
else{
struct tree* nctemp1623= np;
nctempchar1* nctemp1625=PtreeGetname(nctemp1623);
nctempchar1* nctemp1621= nctemp1625;
struct nctempchar1 *nctemp1628;
static struct nctempchar1 nctemp1629 = {{ 9}, (char*)"selector\0"};
nctemp1628=&nctemp1629;
nctempchar1* nctemp1626= nctemp1628;
int nctemp1630=LibeStrcmp(nctemp1621,nctemp1626);
if(nctemp1630)
{
struct tree* nctemp1632= p;
struct symbol* nctemp1634= tp;
int nctemp1636=SemStructure(nctemp1632,nctemp1634);
}
}
}
else{
struct tree* nctemp1640= p;
nctempchar1* nctemp1642=PtreeGetarray(nctemp1640);
nctempchar1* nctemp1638= nctemp1642;
struct nctempchar1 *nctemp1645;
static struct nctempchar1 nctemp1646 = {{ 6}, (char*)"array\0"};
nctemp1645=&nctemp1646;
nctempchar1* nctemp1643= nctemp1645;
int nctemp1647=LibeStrcmp(nctemp1638,nctemp1643);
if(nctemp1647)
{
struct tree* nctemp1649= p;
struct nctempchar1 *nctemp1653;
static struct nctempchar1 nctemp1654 = {{ 5}, (char*)"aref\0"};
nctemp1653=&nctemp1654;
nctempchar1* nctemp1651= nctemp1653;
int nctemp1655=PtreeSetref(nctemp1649,nctemp1651);
}
else{
struct tree* nctemp1659= p;
nctempchar1* nctemp1661=PtreeGetstruct(nctemp1659);
nctempchar1* nctemp1657= nctemp1661;
struct nctempchar1 *nctemp1664;
static struct nctempchar1 nctemp1665 = {{ 7}, (char*)"struct\0"};
nctemp1664=&nctemp1665;
nctempchar1* nctemp1662= nctemp1664;
int nctemp1666=LibeStrcmp(nctemp1657,nctemp1662);
if(nctemp1666)
{
struct tree* nctemp1668= p;
struct nctempchar1 *nctemp1672;
static struct nctempchar1 nctemp1673 = {{ 5}, (char*)"sref\0"};
nctemp1672=&nctemp1673;
nctempchar1* nctemp1670= nctemp1672;
int nctemp1674=PtreeSetref(nctemp1668,nctemp1670);
}
}
}
return 1;
}
int SemFcall (struct tree* p)
{
struct tree* np;
struct symbol* tp;
nctempchar1 *type;
struct tree* nctemp1679= p;
nctempchar1* nctemp1681=PtreeGetname(nctemp1679);
nctempchar1* nctemp1677= nctemp1681;
struct nctempchar1 *nctemp1684;
static struct nctempchar1 nctemp1685 = {{ 6}, (char*)"fcall\0"};
nctemp1684=&nctemp1685;
nctempchar1* nctemp1682= nctemp1684;
int nctemp1686=LibeStrcmp(nctemp1677,nctemp1682);
if(nctemp1686)
{
struct tree* nctemp1696= p;
nctempchar1* nctemp1698=PtreeGetdef(nctemp1696);
nctempchar1* nctemp1694= nctemp1698;
struct symbol* nctemp1701=SymGetetp();
struct symbol* nctemp1699= nctemp1701;
struct symbol* nctemp1702=SymLookup(nctemp1694,nctemp1699);
tp =nctemp1702;
int nctemp1687 = (tp ==0);
if(nctemp1687)
{
struct tree* nctemp1705= p;
struct nctempchar1 *nctemp1709;
static struct nctempchar1 nctemp1710 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1709=&nctemp1710;
nctempchar1* nctemp1707= nctemp1709;
struct tree* nctemp1713= p;
nctempchar1* nctemp1715=PtreeGetdef(nctemp1713);
nctempchar1* nctemp1711= nctemp1715;
int nctemp1716=SemSerror(nctemp1705,nctemp1707,nctemp1711);
return 0;
}
struct symbol* nctemp1723= tp;
nctempchar1* nctemp1725=SymGetfunc(nctemp1723);
nctempchar1* nctemp1721= nctemp1725;
struct nctempchar1 *nctemp1728;
static struct nctempchar1 nctemp1729 = {{ 5}, (char*)"fdef\0"};
nctemp1728=&nctemp1729;
nctempchar1* nctemp1726= nctemp1728;
int nctemp1730=LibeStrcmp(nctemp1721,nctemp1726);
int nctemp1718 = (nctemp1730 ==0);
if(nctemp1718)
{
struct tree* nctemp1733= p;
struct nctempchar1 *nctemp1737;
static struct nctempchar1 nctemp1738 = {{ 15}, (char*)"Not a function\0"};
nctemp1737=&nctemp1738;
nctempchar1* nctemp1735= nctemp1737;
struct tree* nctemp1741= p;
nctempchar1* nctemp1743=PtreeGetdef(nctemp1741);
nctempchar1* nctemp1739= nctemp1743;
int nctemp1744=SemSerror(nctemp1733,nctemp1735,nctemp1739);
return 0;
}
struct tree* nctemp1747= p;
struct symbol* nctemp1751= tp;
nctempchar1* nctemp1753=SymGetype(nctemp1751);
nctempchar1* nctemp1749= nctemp1753;
int nctemp1754=PtreeSetype(nctemp1747,nctemp1749);
struct tree* nctemp1756= p;
struct symbol* nctemp1760= tp;
nctempchar1* nctemp1762=SymGetstruct(nctemp1760);
nctempchar1* nctemp1758= nctemp1762;
int nctemp1763=PtreeSetstruct(nctemp1756,nctemp1758);
struct tree* nctemp1765= p;
struct symbol* nctemp1769= tp;
nctempchar1* nctemp1771=SymGetarray(nctemp1769);
nctempchar1* nctemp1767= nctemp1771;
int nctemp1772=PtreeSetarray(nctemp1765,nctemp1767);
struct tree* nctemp1774= p;
struct symbol* nctemp1778= tp;
int nctemp1780=SymGetrank(nctemp1778);
int nctemp1776= nctemp1780;
int nctemp1781=PtreeSetrank(nctemp1774,nctemp1776);
struct tree* nctemp1785= p;
nctempchar1* nctemp1787=PtreeGetarray(nctemp1785);
nctempchar1* nctemp1783= nctemp1787;
struct nctempchar1 *nctemp1790;
static struct nctempchar1 nctemp1791 = {{ 6}, (char*)"array\0"};
nctemp1790=&nctemp1791;
nctempchar1* nctemp1788= nctemp1790;
int nctemp1792=LibeStrcmp(nctemp1783,nctemp1788);
if(nctemp1792)
{
struct tree* nctemp1794= p;
struct nctempchar1 *nctemp1798;
static struct nctempchar1 nctemp1799 = {{ 5}, (char*)"aref\0"};
nctemp1798=&nctemp1799;
nctempchar1* nctemp1796= nctemp1798;
int nctemp1800=PtreeSetref(nctemp1794,nctemp1796);
}
else{
struct tree* nctemp1804= p;
nctempchar1* nctemp1806=PtreeGetstruct(nctemp1804);
nctempchar1* nctemp1802= nctemp1806;
struct nctempchar1 *nctemp1809;
static struct nctempchar1 nctemp1810 = {{ 7}, (char*)"struct\0"};
nctemp1809=&nctemp1810;
nctempchar1* nctemp1807= nctemp1809;
int nctemp1811=LibeStrcmp(nctemp1802,nctemp1807);
if(nctemp1811)
{
struct tree* nctemp1813= p;
struct nctempchar1 *nctemp1817;
static struct nctempchar1 nctemp1818 = {{ 5}, (char*)"sref\0"};
nctemp1817=&nctemp1818;
nctempchar1* nctemp1815= nctemp1817;
int nctemp1819=PtreeSetref(nctemp1813,nctemp1815);
}
}
struct symbol* nctemp1824= tp;
struct symbol* nctemp1826=SymGetable(nctemp1824);
tp =nctemp1826;
struct nctempchar1 *nctemp1833;
static struct nctempchar1 nctemp1834 = {{ 9}, (char*)"#arglist\0"};
nctemp1833=&nctemp1834;
nctempchar1* nctemp1831= nctemp1833;
struct symbol* nctemp1835= tp;
struct symbol* nctemp1837=SymLookup(nctemp1831,nctemp1835);
tp =nctemp1837;
int nctemp1838 = (tp !=0);
if(nctemp1838)
{
struct symbol* nctemp1846= tp;
struct symbol* nctemp1848=SymGetable(nctemp1846);
tp =nctemp1848;
}
struct tree* nctemp1856= p;
struct tree* nctemp1858=PtreeMvchild(nctemp1856);
np =nctemp1858;
int nctemp1849 = (np ==0);
if(nctemp1849)
{
struct symbol* nctemp1867= tp;
struct symbol* nctemp1869=SymMvnext(nctemp1867);
tp =nctemp1869;
int nctemp1860 = (tp !=0);
if(nctemp1860)
{
struct tree* nctemp1872= p;
struct nctempchar1 *nctemp1876;
static struct nctempchar1 nctemp1877 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1876=&nctemp1877;
nctempchar1* nctemp1874= nctemp1876;
struct tree* nctemp1880= p;
nctempchar1* nctemp1882=PtreeGetdef(nctemp1880);
nctempchar1* nctemp1878= nctemp1882;
int nctemp1883=SemSerror(nctemp1872,nctemp1874,nctemp1878);
return 0;
}
return 1;
}
struct tree* nctemp1892= p;
struct tree* nctemp1894=PtreeMvchild(nctemp1892);
struct tree* nctemp1890= nctemp1894;
struct tree* nctemp1895=PtreeMvchild(nctemp1890);
np =nctemp1895;
int nctemp1896 = (np !=0);
int nctemp1900=nctemp1896;
while(nctemp1900)
{{
struct symbol* nctemp1905= tp;
struct symbol* nctemp1907=SymMvnext(nctemp1905);
tp =nctemp1907;
int nctemp1908 = (tp ==0);
if(nctemp1908)
{
struct tree* nctemp1913= p;
struct nctempchar1 *nctemp1917;
static struct nctempchar1 nctemp1918 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1917=&nctemp1918;
nctempchar1* nctemp1915= nctemp1917;
struct tree* nctemp1921= p;
nctempchar1* nctemp1923=PtreeGetdef(nctemp1921);
nctempchar1* nctemp1919= nctemp1923;
int nctemp1924=SemSerror(nctemp1913,nctemp1915,nctemp1919);
return 0;
}
struct symbol* nctemp1931= tp;
nctempchar1* nctemp1933=SymGetype(nctemp1931);
type=nctemp1933;
struct tree* nctemp1935= np;
struct tree* nctemp1937=SemExpr(nctemp1935);
nctempchar1* nctemp1941= type;
struct tree* nctemp1946= np;
nctempchar1* nctemp1948=PtreeGetype(nctemp1946);
nctempchar1* nctemp1944= nctemp1948;
int nctemp1949=LibeStrcmp(nctemp1941,nctemp1944);
int nctemp1938 = (nctemp1949 ==0);
if(nctemp1938)
{
struct tree* nctemp1952= p;
struct nctempchar1 *nctemp1956;
static struct nctempchar1 nctemp1957 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1956=&nctemp1957;
nctempchar1* nctemp1954= nctemp1956;
struct tree* nctemp1960= p;
nctempchar1* nctemp1962=PtreeGetdef(nctemp1960);
nctempchar1* nctemp1958= nctemp1962;
int nctemp1963=SemSerror(nctemp1952,nctemp1954,nctemp1958);
return 0;
}
struct symbol* nctemp1968= tp;
nctempchar1* nctemp1970=SymGetarray(nctemp1968);
nctempchar1* nctemp1966= nctemp1970;
struct nctempchar1 *nctemp1973;
static struct nctempchar1 nctemp1974 = {{ 6}, (char*)"array\0"};
nctemp1973=&nctemp1974;
nctempchar1* nctemp1971= nctemp1973;
int nctemp1975=LibeStrcmp(nctemp1966,nctemp1971);
if(nctemp1975)
{
struct tree* nctemp1981= np;
nctempchar1* nctemp1983=PtreeGetref(nctemp1981);
nctempchar1* nctemp1979= nctemp1983;
struct nctempchar1 *nctemp1986;
static struct nctempchar1 nctemp1987 = {{ 5}, (char*)"aref\0"};
nctemp1986=&nctemp1987;
nctempchar1* nctemp1984= nctemp1986;
int nctemp1988=LibeStrcmp(nctemp1979,nctemp1984);
int nctemp1976 = (nctemp1988 ==0);
if(nctemp1976)
{
struct tree* nctemp1991= p;
struct nctempchar1 *nctemp1995;
static struct nctempchar1 nctemp1996 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1995=&nctemp1996;
nctempchar1* nctemp1993= nctemp1995;
struct tree* nctemp1999= p;
nctempchar1* nctemp2001=PtreeGetdef(nctemp1999);
nctempchar1* nctemp1997= nctemp2001;
int nctemp2002=SemSerror(nctemp1991,nctemp1993,nctemp1997);
}
struct tree* nctemp2006= np;
int nctemp2008=PtreeGetrank(nctemp2006);
struct symbol* nctemp2010= tp;
int nctemp2012=SymGetrank(nctemp2010);
int nctemp2003 = (nctemp2008 !=nctemp2012);
if(nctemp2003)
{
struct tree* nctemp2014= p;
struct nctempchar1 *nctemp2018;
static struct nctempchar1 nctemp2019 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp2018=&nctemp2019;
nctempchar1* nctemp2016= nctemp2018;
struct tree* nctemp2022= p;
nctempchar1* nctemp2024=PtreeGetdef(nctemp2022);
nctempchar1* nctemp2020= nctemp2024;
int nctemp2025=SemSerror(nctemp2014,nctemp2016,nctemp2020);
}
}
struct tree* nctemp2030= np;
struct tree* nctemp2032=PtreeMvsister(nctemp2030);
np =nctemp2032;
}
int nctemp2033 = (np !=0);
nctemp1900=nctemp2033;}struct symbol* nctemp2040= tp;
struct symbol* nctemp2042=SymMvnext(nctemp2040);
int nctemp2037 = (nctemp2042 !=0);
if(nctemp2037)
{
struct tree* nctemp2045= p;
struct nctempchar1 *nctemp2049;
static struct nctempchar1 nctemp2050 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp2049=&nctemp2050;
nctempchar1* nctemp2047= nctemp2049;
struct tree* nctemp2053= p;
nctempchar1* nctemp2055=PtreeGetdef(nctemp2053);
nctempchar1* nctemp2051= nctemp2055;
int nctemp2056=SemSerror(nctemp2045,nctemp2047,nctemp2051);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp2062= p;
nctempchar1* nctemp2064=PtreeGetname(nctemp2062);
nctempchar1* nctemp2060= nctemp2064;
struct nctempchar1 *nctemp2067;
static struct nctempchar1 nctemp2068 = {{ 9}, (char*)"exprlist\0"};
nctemp2067=&nctemp2068;
nctempchar1* nctemp2065= nctemp2067;
int nctemp2069=LibeStrcmp(nctemp2060,nctemp2065);
if(nctemp2069)
{
struct tree* nctemp2074= p;
struct tree* nctemp2076=PtreeMvchild(nctemp2074);
p =nctemp2076;
int nctemp2077 = (p !=0);
int nctemp2081=nctemp2077;
while(nctemp2081)
{{
struct tree* nctemp2083= p;
struct tree* nctemp2085=SemExpr(nctemp2083);
struct tree* nctemp2090= p;
struct tree* nctemp2092=PtreeMvsister(nctemp2090);
p =nctemp2092;
}
int nctemp2093 = (p !=0);
nctemp2081=nctemp2093;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2099= np;
struct tree* nctemp2103= p;
nctempchar1* nctemp2105=PtreeGetype(nctemp2103);
nctempchar1* nctemp2101= nctemp2105;
int nctemp2106=PtreeSetype(nctemp2099,nctemp2101);
struct tree* nctemp2108= np;
struct tree* nctemp2112= p;
nctempchar1* nctemp2114=PtreeGetstruct(nctemp2112);
nctempchar1* nctemp2110= nctemp2114;
int nctemp2115=PtreeSetstruct(nctemp2108,nctemp2110);
struct tree* nctemp2117= np;
struct tree* nctemp2121= p;
nctempchar1* nctemp2123=PtreeGetarray(nctemp2121);
nctempchar1* nctemp2119= nctemp2123;
int nctemp2124=PtreeSetarray(nctemp2117,nctemp2119);
struct tree* nctemp2126= np;
struct tree* nctemp2130= p;
nctempchar1* nctemp2132=PtreeGetref(nctemp2130);
nctempchar1* nctemp2128= nctemp2132;
int nctemp2133=PtreeSetref(nctemp2126,nctemp2128);
struct tree* nctemp2135= np;
struct tree* nctemp2139= p;
nctempchar1* nctemp2141=PtreeGetlval(nctemp2139);
nctempchar1* nctemp2137= nctemp2141;
int nctemp2142=PtreeSetlval(nctemp2135,nctemp2137);
struct tree* nctemp2144= np;
struct tree* nctemp2148= p;
int nctemp2150=PtreeGetrank(nctemp2148);
int nctemp2146= nctemp2150;
int nctemp2151=PtreeSetrank(nctemp2144,nctemp2146);
return 1;
}
int SemCast (struct tree* p)
{
struct tree* sp;
struct tree* np;
int resultrank;
nctempchar1 *resultype;
nctempchar1 *exptype;
nctempchar1 *resultref;
nctempchar1 *expref;
struct nctempchar1 *nctemp2158;
static struct nctempchar1 nctemp2159 = {{ 5}, (char*)"void\0"};
nctemp2158=&nctemp2159;
resultref=nctemp2158;
struct nctempchar1 *nctemp2165;
static struct nctempchar1 nctemp2166 = {{ 5}, (char*)"void\0"};
nctemp2165=&nctemp2166;
expref=nctemp2165;
struct tree* nctemp2170= p;
nctempchar1* nctemp2172=PtreeGetname(nctemp2170);
nctempchar1* nctemp2168= nctemp2172;
struct nctempchar1 *nctemp2175;
static struct nctempchar1 nctemp2176 = {{ 5}, (char*)"cast\0"};
nctemp2175=&nctemp2176;
nctempchar1* nctemp2173= nctemp2175;
int nctemp2177=LibeStrcmp(nctemp2168,nctemp2173);
if(nctemp2177)
{
struct tree* nctemp2182= p;
struct tree* nctemp2184=PtreeMvchild(nctemp2182);
np =nctemp2184;
struct tree* nctemp2190= np;
nctempchar1* nctemp2192=PtreeGetdef(nctemp2190);
resultype=nctemp2192;
struct tree* nctemp2194= np;
nctempchar1* nctemp2196= resultype;
int nctemp2199=PtreeSetype(nctemp2194,nctemp2196);
resultrank =0;
struct tree* nctemp2207= np;
nctempchar1* nctemp2209=PtreeGetarray(nctemp2207);
nctempchar1* nctemp2205= nctemp2209;
struct nctempchar1 *nctemp2212;
static struct nctempchar1 nctemp2213 = {{ 6}, (char*)"array\0"};
nctemp2212=&nctemp2213;
nctempchar1* nctemp2210= nctemp2212;
int nctemp2214=LibeStrcmp(nctemp2205,nctemp2210);
if(nctemp2214)
{
struct tree* nctemp2219= np;
struct tree* nctemp2221=PtreeMvchild(nctemp2219);
sp =nctemp2221;
struct tree* nctemp2226= sp;
struct tree* nctemp2228=PtreeMvchild(nctemp2226);
sp =nctemp2228;
struct tree* nctemp2233= sp;
struct tree* nctemp2235=PtreeMvchild(nctemp2233);
sp =nctemp2235;
struct tree* nctemp2237= sp;
struct tree* nctemp2239=SemExprlist(nctemp2237);
struct tree* nctemp2244= sp;
struct tree* nctemp2246=PtreeMvchild(nctemp2244);
sp =nctemp2246;
resultrank =1;
struct tree* nctemp2258= sp;
struct tree* nctemp2260=PtreeMvsister(nctemp2258);
sp =nctemp2260;
int nctemp2251 = (sp !=0);
int nctemp2262=nctemp2251;
while(nctemp2262)
{{
int nctemp2271 = resultrank + 1;
resultrank =nctemp2271;
}
struct tree* nctemp2279= sp;
struct tree* nctemp2281=PtreeMvsister(nctemp2279);
sp =nctemp2281;
int nctemp2272 = (sp !=0);
nctemp2262=nctemp2272;}struct tree* nctemp2284= np;
int nctemp2286= resultrank;
int nctemp2288=PtreeSetrank(nctemp2284,nctemp2286);
struct tree* nctemp2290= p;
int nctemp2292= resultrank;
int nctemp2294=PtreeSetrank(nctemp2290,nctemp2292);
struct tree* nctemp2296= np;
struct nctempchar1 *nctemp2300;
static struct nctempchar1 nctemp2301 = {{ 5}, (char*)"aref\0"};
nctemp2300=&nctemp2301;
nctempchar1* nctemp2298= nctemp2300;
int nctemp2302=PtreeSetref(nctemp2296,nctemp2298);
struct nctempchar1 *nctemp2310;
static struct nctempchar1 nctemp2311 = {{ 5}, (char*)"aref\0"};
nctemp2310=&nctemp2311;
nctempchar1* nctemp2308= nctemp2310;
nctempchar1* nctemp2312=LibeStrsave(nctemp2308);
resultref=nctemp2312;
}
else{
struct tree* nctemp2316= np;
nctempchar1* nctemp2318=PtreeGetstruct(nctemp2316);
nctempchar1* nctemp2314= nctemp2318;
struct nctempchar1 *nctemp2321;
static struct nctempchar1 nctemp2322 = {{ 7}, (char*)"struct\0"};
nctemp2321=&nctemp2322;
nctempchar1* nctemp2319= nctemp2321;
int nctemp2323=LibeStrcmp(nctemp2314,nctemp2319);
if(nctemp2323)
{
struct tree* nctemp2325= np;
struct nctempchar1 *nctemp2329;
static struct nctempchar1 nctemp2330 = {{ 5}, (char*)"sref\0"};
nctemp2329=&nctemp2330;
nctempchar1* nctemp2327= nctemp2329;
int nctemp2331=PtreeSetref(nctemp2325,nctemp2327);
struct nctempchar1 *nctemp2339;
static struct nctempchar1 nctemp2340 = {{ 5}, (char*)"sref\0"};
nctemp2339=&nctemp2340;
nctempchar1* nctemp2337= nctemp2339;
nctempchar1* nctemp2341=LibeStrsave(nctemp2337);
resultref=nctemp2341;
}
else{
struct nctempchar1 *nctemp2349;
static struct nctempchar1 nctemp2350 = {{ 5}, (char*)"void\0"};
nctemp2349=&nctemp2350;
nctempchar1* nctemp2347= nctemp2349;
nctempchar1* nctemp2351=LibeStrsave(nctemp2347);
resultref=nctemp2351;
}
}
struct tree* nctemp2353= np;
struct tree* nctemp2355= p;
int nctemp2357=SemCopytype(nctemp2353,nctemp2355);
struct tree* nctemp2362= np;
struct tree* nctemp2364=PtreeMvsister(nctemp2362);
np =nctemp2364;
struct tree* nctemp2366= np;
struct tree* nctemp2368=SemExpr(nctemp2366);
struct tree* nctemp2374= np;
nctempchar1* nctemp2376=PtreeGetype(nctemp2374);
exptype=nctemp2376;
struct tree* nctemp2382= np;
nctempchar1* nctemp2384=PtreeGetref(nctemp2382);
expref=nctemp2384;
nctempchar1* nctemp2388= resultref;
nctempchar1* nctemp2391= expref;
int nctemp2394=LibeStrcmp(nctemp2388,nctemp2391);
int nctemp2385 = (nctemp2394 ==0);
if(nctemp2385)
{
struct tree* nctemp2397= p;
struct nctempchar1 *nctemp2401;
static struct nctempchar1 nctemp2402 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
struct nctempchar1 *nctemp2405;
static struct nctempchar1 nctemp2406 = {{ 2}, (char*)" \0"};
nctemp2405=&nctemp2406;
nctempchar1* nctemp2403= nctemp2405;
int nctemp2407=SemSerror(nctemp2397,nctemp2399,nctemp2403);
return 0;
}
nctempchar1* nctemp2415= resultref;
struct nctempchar1 *nctemp2420;
static struct nctempchar1 nctemp2421 = {{ 5}, (char*)"aref\0"};
nctemp2420=&nctemp2421;
nctempchar1* nctemp2418= nctemp2420;
int nctemp2422=LibeStrcmp(nctemp2415,nctemp2418);
int nctemp2412 = (nctemp2422 ==0);
nctempchar1* nctemp2428= resultref;
struct nctempchar1 *nctemp2433;
static struct nctempchar1 nctemp2434 = {{ 5}, (char*)"sref\0"};
nctemp2433=&nctemp2434;
nctempchar1* nctemp2431= nctemp2433;
int nctemp2435=LibeStrcmp(nctemp2428,nctemp2431);
int nctemp2425 = (nctemp2435 ==0);
int nctemp2409 = (nctemp2412 || nctemp2425);
if(nctemp2409)
{
nctempchar1* nctemp2438= resultype;
struct nctempchar1 *nctemp2443;
static struct nctempchar1 nctemp2444 = {{ 8}, (char*)"complex\0"};
nctemp2443=&nctemp2444;
nctempchar1* nctemp2441= nctemp2443;
int nctemp2445=LibeStrcmp(nctemp2438,nctemp2441);
if(nctemp2445)
{
struct tree* nctemp2447= p;
struct nctempchar1 *nctemp2451;
static struct nctempchar1 nctemp2452 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2451=&nctemp2452;
nctempchar1* nctemp2449= nctemp2451;
struct nctempchar1 *nctemp2455;
static struct nctempchar1 nctemp2456 = {{ 2}, (char*)" \0"};
nctemp2455=&nctemp2456;
nctempchar1* nctemp2453= nctemp2455;
int nctemp2457=SemSerror(nctemp2447,nctemp2449,nctemp2453);
}
return 0;
nctempchar1* nctemp2460= resultype;
struct nctempchar1 *nctemp2465;
static struct nctempchar1 nctemp2466 = {{ 4}, (char*)"int\0"};
nctemp2465=&nctemp2466;
nctempchar1* nctemp2463= nctemp2465;
int nctemp2467=LibeStrcmp(nctemp2460,nctemp2463);
if(nctemp2467)
{
nctempchar1* nctemp2471= exptype;
struct nctempchar1 *nctemp2476;
static struct nctempchar1 nctemp2477 = {{ 5}, (char*)"char\0"};
nctemp2476=&nctemp2477;
nctempchar1* nctemp2474= nctemp2476;
int nctemp2478=LibeStrcmp(nctemp2471,nctemp2474);
int nctemp2468 = (nctemp2478 ==0);
if(nctemp2468)
{
nctempchar1* nctemp2483= exptype;
struct nctempchar1 *nctemp2488;
static struct nctempchar1 nctemp2489 = {{ 6}, (char*)"float\0"};
nctemp2488=&nctemp2489;
nctempchar1* nctemp2486= nctemp2488;
int nctemp2490=LibeStrcmp(nctemp2483,nctemp2486);
int nctemp2480 = (nctemp2490 ==0);
if(nctemp2480)
{
struct tree* nctemp2493= p;
struct nctempchar1 *nctemp2497;
static struct nctempchar1 nctemp2498 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2497=&nctemp2498;
nctempchar1* nctemp2495= nctemp2497;
struct nctempchar1 *nctemp2501;
static struct nctempchar1 nctemp2502 = {{ 2}, (char*)" \0"};
nctemp2501=&nctemp2502;
nctempchar1* nctemp2499= nctemp2501;
int nctemp2503=SemSerror(nctemp2493,nctemp2495,nctemp2499);
}
}
return 0;
}
else{
nctempchar1* nctemp2506= resultype;
struct nctempchar1 *nctemp2511;
static struct nctempchar1 nctemp2512 = {{ 5}, (char*)"char\0"};
nctemp2511=&nctemp2512;
nctempchar1* nctemp2509= nctemp2511;
int nctemp2513=LibeStrcmp(nctemp2506,nctemp2509);
if(nctemp2513)
{
nctempchar1* nctemp2517= exptype;
struct nctempchar1 *nctemp2522;
static struct nctempchar1 nctemp2523 = {{ 4}, (char*)"int\0"};
nctemp2522=&nctemp2523;
nctempchar1* nctemp2520= nctemp2522;
int nctemp2524=LibeStrcmp(nctemp2517,nctemp2520);
int nctemp2514 = (nctemp2524 ==0);
if(nctemp2514)
{
struct tree* nctemp2527= p;
struct nctempchar1 *nctemp2531;
static struct nctempchar1 nctemp2532 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2531=&nctemp2532;
nctempchar1* nctemp2529= nctemp2531;
struct nctempchar1 *nctemp2535;
static struct nctempchar1 nctemp2536 = {{ 2}, (char*)" \0"};
nctemp2535=&nctemp2536;
nctempchar1* nctemp2533= nctemp2535;
int nctemp2537=SemSerror(nctemp2527,nctemp2529,nctemp2533);
}
return 0;
}
else{
nctempchar1* nctemp2540= resultype;
struct nctempchar1 *nctemp2545;
static struct nctempchar1 nctemp2546 = {{ 6}, (char*)"float\0"};
nctemp2545=&nctemp2546;
nctempchar1* nctemp2543= nctemp2545;
int nctemp2547=LibeStrcmp(nctemp2540,nctemp2543);
if(nctemp2547)
{
nctempchar1* nctemp2551= exptype;
struct nctempchar1 *nctemp2556;
static struct nctempchar1 nctemp2557 = {{ 4}, (char*)"int\0"};
nctemp2556=&nctemp2557;
nctempchar1* nctemp2554= nctemp2556;
int nctemp2558=LibeStrcmp(nctemp2551,nctemp2554);
int nctemp2548 = (nctemp2558 ==0);
if(nctemp2548)
{
struct tree* nctemp2561= np;
struct nctempchar1 *nctemp2565;
static struct nctempchar1 nctemp2566 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2565=&nctemp2566;
nctempchar1* nctemp2563= nctemp2565;
struct nctempchar1 *nctemp2569;
static struct nctempchar1 nctemp2570 = {{ 2}, (char*)" \0"};
nctemp2569=&nctemp2570;
nctempchar1* nctemp2567= nctemp2569;
int nctemp2571=SemSerror(nctemp2561,nctemp2563,nctemp2567);
}
return 0;
}
}
}
}
}
return 1;
}
int SemNew (struct tree* p)
{
struct tree* np;
struct tree* sp;
int rank;
struct tree* nctemp2577= p;
nctempchar1* nctemp2579=PtreeGetname(nctemp2577);
nctempchar1* nctemp2575= nctemp2579;
struct nctempchar1 *nctemp2582;
static struct nctempchar1 nctemp2583 = {{ 4}, (char*)"new\0"};
nctemp2582=&nctemp2583;
nctempchar1* nctemp2580= nctemp2582;
int nctemp2584=LibeStrcmp(nctemp2575,nctemp2580);
if(nctemp2584)
{
struct tree* nctemp2589= p;
struct tree* nctemp2591=PtreeMvchild(nctemp2589);
np =nctemp2591;
struct tree* nctemp2593= np;
nctempchar1* nctemp2595=PtreeGetdef(nctemp2593);
struct tree* nctemp2597= np;
struct tree* nctemp2601= np;
nctempchar1* nctemp2603=PtreeGetdef(nctemp2601);
nctempchar1* nctemp2599= nctemp2603;
int nctemp2604=PtreeSetype(nctemp2597,nctemp2599);
struct tree* nctemp2606= np;
struct tree* nctemp2608= p;
int nctemp2610=SemCopytype(nctemp2606,nctemp2608);
struct tree* nctemp2616= np;
nctempchar1* nctemp2618=PtreeGetarray(nctemp2616);
nctempchar1* nctemp2614= nctemp2618;
struct nctempchar1 *nctemp2621;
static struct nctempchar1 nctemp2622 = {{ 6}, (char*)"array\0"};
nctemp2621=&nctemp2622;
nctempchar1* nctemp2619= nctemp2621;
int nctemp2623=LibeStrcmp(nctemp2614,nctemp2619);
int nctemp2611 = (nctemp2623 ==0);
if(nctemp2611)
{
struct tree* nctemp2630= np;
nctempchar1* nctemp2632=PtreeGetstruct(nctemp2630);
nctempchar1* nctemp2628= nctemp2632;
struct nctempchar1 *nctemp2635;
static struct nctempchar1 nctemp2636 = {{ 7}, (char*)"struct\0"};
nctemp2635=&nctemp2636;
nctempchar1* nctemp2633= nctemp2635;
int nctemp2637=LibeStrcmp(nctemp2628,nctemp2633);
int nctemp2625 = (nctemp2637 ==0);
if(nctemp2625)
{
struct tree* nctemp2640= np;
struct nctempchar1 *nctemp2644;
static struct nctempchar1 nctemp2645 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2644=&nctemp2645;
nctempchar1* nctemp2642= nctemp2644;
struct nctempchar1 *nctemp2648;
static struct nctempchar1 nctemp2649 = {{ 3}, (char*)"  \0"};
nctemp2648=&nctemp2649;
nctempchar1* nctemp2646= nctemp2648;
int nctemp2650=SemSerror(nctemp2640,nctemp2642,nctemp2646);
}
}
struct tree* nctemp2654= np;
nctempchar1* nctemp2656=PtreeGetarray(nctemp2654);
nctempchar1* nctemp2652= nctemp2656;
struct nctempchar1 *nctemp2659;
static struct nctempchar1 nctemp2660 = {{ 6}, (char*)"array\0"};
nctemp2659=&nctemp2660;
nctempchar1* nctemp2657= nctemp2659;
int nctemp2661=LibeStrcmp(nctemp2652,nctemp2657);
if(nctemp2661)
{
struct tree* nctemp2666= np;
struct tree* nctemp2668=PtreeMvchild(nctemp2666);
sp =nctemp2668;
struct tree* nctemp2673= sp;
struct tree* nctemp2675=PtreeMvchild(nctemp2673);
sp =nctemp2675;
struct tree* nctemp2680= sp;
struct tree* nctemp2682=PtreeMvchild(nctemp2680);
sp =nctemp2682;
struct tree* nctemp2687= sp;
struct tree* nctemp2689=PtreeMvchild(nctemp2687);
sp =nctemp2689;
rank =1;
int nctemp2694 = (sp ==0);
if(nctemp2694)
{
struct tree* nctemp2699= np;
struct nctempchar1 *nctemp2703;
static struct nctempchar1 nctemp2704 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2703=&nctemp2704;
nctempchar1* nctemp2701= nctemp2703;
struct nctempchar1 *nctemp2707;
static struct nctempchar1 nctemp2708 = {{ 2}, (char*)" \0"};
nctemp2707=&nctemp2708;
nctempchar1* nctemp2705= nctemp2707;
int nctemp2709=SemSerror(nctemp2699,nctemp2701,nctemp2705);
}
struct tree* nctemp2711= sp;
struct tree* nctemp2713=SemExpr(nctemp2711);
struct tree* nctemp2721= sp;
struct tree* nctemp2723=PtreeMvsister(nctemp2721);
sp =nctemp2723;
int nctemp2714 = (sp !=0);
int nctemp2725=nctemp2714;
while(nctemp2725)
{{
struct tree* nctemp2727= sp;
struct tree* nctemp2729=SemExpr(nctemp2727);
int nctemp2738 = rank + 1;
rank =nctemp2738;
}
struct tree* nctemp2746= sp;
struct tree* nctemp2748=PtreeMvsister(nctemp2746);
sp =nctemp2748;
int nctemp2739 = (sp !=0);
nctemp2725=nctemp2739;}struct tree* nctemp2751= np;
int nctemp2753= rank;
int nctemp2755=PtreeSetrank(nctemp2751,nctemp2753);
struct tree* nctemp2757= p;
int nctemp2759= rank;
int nctemp2761=PtreeSetrank(nctemp2757,nctemp2759);
struct tree* nctemp2763= p;
struct nctempchar1 *nctemp2767;
static struct nctempchar1 nctemp2768 = {{ 5}, (char*)"aref\0"};
nctemp2767=&nctemp2768;
nctempchar1* nctemp2765= nctemp2767;
int nctemp2769=PtreeSetref(nctemp2763,nctemp2765);
}
else{
struct tree* nctemp2771= p;
struct nctempchar1 *nctemp2775;
static struct nctempchar1 nctemp2776 = {{ 5}, (char*)"sref\0"};
nctemp2775=&nctemp2776;
nctempchar1* nctemp2773= nctemp2775;
int nctemp2777=PtreeSetref(nctemp2771,nctemp2773);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2782= p;
nctempchar1* nctemp2784=PtreeGetname(nctemp2782);
nctempchar1* nctemp2780= nctemp2784;
struct nctempchar1 *nctemp2787;
static struct nctempchar1 nctemp2788 = {{ 7}, (char*)"delete\0"};
nctemp2787=&nctemp2788;
nctempchar1* nctemp2785= nctemp2787;
int nctemp2789=LibeStrcmp(nctemp2780,nctemp2785);
if(nctemp2789)
{
struct tree* nctemp2794= p;
struct tree* nctemp2796=PtreeMvchild(nctemp2794);
np =nctemp2796;
struct tree* nctemp2798= np;
struct tree* nctemp2800=SemExpr(nctemp2798);
struct tree* nctemp2806= np;
nctempchar1* nctemp2808=PtreeGetref(nctemp2806);
nctempchar1* nctemp2804= nctemp2808;
struct nctempchar1 *nctemp2811;
static struct nctempchar1 nctemp2812 = {{ 5}, (char*)"aref\0"};
nctemp2811=&nctemp2812;
nctempchar1* nctemp2809= nctemp2811;
int nctemp2813=LibeStrcmp(nctemp2804,nctemp2809);
int nctemp2801 = (nctemp2813 ==0);
if(nctemp2801)
{
struct tree* nctemp2820= np;
nctempchar1* nctemp2822=PtreeGetref(nctemp2820);
nctempchar1* nctemp2818= nctemp2822;
struct nctempchar1 *nctemp2825;
static struct nctempchar1 nctemp2826 = {{ 5}, (char*)"sref\0"};
nctemp2825=&nctemp2826;
nctempchar1* nctemp2823= nctemp2825;
int nctemp2827=LibeStrcmp(nctemp2818,nctemp2823);
int nctemp2815 = (nctemp2827 ==0);
if(nctemp2815)
{
struct tree* nctemp2830= p;
struct nctempchar1 *nctemp2834;
static struct nctempchar1 nctemp2835 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2834=&nctemp2835;
nctempchar1* nctemp2832= nctemp2834;
struct tree* nctemp2838= p;
nctempchar1* nctemp2840=PtreeGetdef(nctemp2838);
nctempchar1* nctemp2836= nctemp2840;
int nctemp2841=SemSerror(nctemp2830,nctemp2832,nctemp2836);
}
}
else{
struct tree* nctemp2843= p;
struct tree* nctemp2847= np;
nctempchar1* nctemp2849=PtreeGetype(nctemp2847);
nctempchar1* nctemp2845= nctemp2849;
int nctemp2850=PtreeSetype(nctemp2843,nctemp2845);
struct tree* nctemp2852= p;
struct tree* nctemp2856= np;
nctempchar1* nctemp2858=PtreeGetref(nctemp2856);
nctempchar1* nctemp2854= nctemp2858;
int nctemp2859=PtreeSetref(nctemp2852,nctemp2854);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2864= p;
nctempchar1* nctemp2866=PtreeGetname(nctemp2864);
nctempchar1* nctemp2862= nctemp2866;
struct nctempchar1 *nctemp2869;
static struct nctempchar1 nctemp2870 = {{ 6}, (char*)"cmplx\0"};
nctemp2869=&nctemp2870;
nctempchar1* nctemp2867= nctemp2869;
int nctemp2871=LibeStrcmp(nctemp2862,nctemp2867);
if(nctemp2871)
{
struct tree* nctemp2876= p;
struct tree* nctemp2878=PtreeMvchild(nctemp2876);
np =nctemp2878;
struct tree* nctemp2883= np;
struct tree* nctemp2885=PtreeMvchild(nctemp2883);
np =nctemp2885;
struct tree* nctemp2887= np;
struct tree* nctemp2889=SemExpr(nctemp2887);
struct tree* nctemp2895= np;
nctempchar1* nctemp2897=PtreeGetype(nctemp2895);
nctempchar1* nctemp2893= nctemp2897;
struct nctempchar1 *nctemp2900;
static struct nctempchar1 nctemp2901 = {{ 6}, (char*)"float\0"};
nctemp2900=&nctemp2901;
nctempchar1* nctemp2898= nctemp2900;
int nctemp2902=LibeStrcmp(nctemp2893,nctemp2898);
int nctemp2890 = (nctemp2902 ==0);
if(nctemp2890)
{
struct tree* nctemp2905= p;
struct nctempchar1 *nctemp2909;
static struct nctempchar1 nctemp2910 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2909=&nctemp2910;
nctempchar1* nctemp2907= nctemp2909;
struct tree* nctemp2913= p;
nctempchar1* nctemp2915=PtreeGetdef(nctemp2913);
nctempchar1* nctemp2911= nctemp2915;
int nctemp2916=SemSerror(nctemp2905,nctemp2907,nctemp2911);
return 0;
}
struct tree* nctemp2923= np;
nctempchar1* nctemp2925=PtreeGetref(nctemp2923);
nctempchar1* nctemp2921= nctemp2925;
struct nctempchar1 *nctemp2928;
static struct nctempchar1 nctemp2929 = {{ 5}, (char*)"aref\0"};
nctemp2928=&nctemp2929;
nctempchar1* nctemp2926= nctemp2928;
int nctemp2930=LibeStrcmp(nctemp2921,nctemp2926);
struct tree* nctemp2934= np;
nctempchar1* nctemp2936=PtreeGetref(nctemp2934);
nctempchar1* nctemp2932= nctemp2936;
struct nctempchar1 *nctemp2939;
static struct nctempchar1 nctemp2940 = {{ 5}, (char*)"sref\0"};
nctemp2939=&nctemp2940;
nctempchar1* nctemp2937= nctemp2939;
int nctemp2941=LibeStrcmp(nctemp2932,nctemp2937);
int nctemp2918 = (nctemp2930 || nctemp2941);
if(nctemp2918)
{
struct tree* nctemp2943= p;
struct nctempchar1 *nctemp2947;
static struct nctempchar1 nctemp2948 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2947=&nctemp2948;
nctempchar1* nctemp2945= nctemp2947;
struct tree* nctemp2951= p;
nctempchar1* nctemp2953=PtreeGetdef(nctemp2951);
nctempchar1* nctemp2949= nctemp2953;
int nctemp2954=SemSerror(nctemp2943,nctemp2945,nctemp2949);
return 0;
}
struct tree* nctemp2960= np;
struct tree* nctemp2962=PtreeMvsister(nctemp2960);
np =nctemp2962;
struct tree* nctemp2964= np;
struct tree* nctemp2966=SemExpr(nctemp2964);
struct tree* nctemp2972= np;
nctempchar1* nctemp2974=PtreeGetype(nctemp2972);
nctempchar1* nctemp2970= nctemp2974;
struct nctempchar1 *nctemp2977;
static struct nctempchar1 nctemp2978 = {{ 6}, (char*)"float\0"};
nctemp2977=&nctemp2978;
nctempchar1* nctemp2975= nctemp2977;
int nctemp2979=LibeStrcmp(nctemp2970,nctemp2975);
int nctemp2967 = (nctemp2979 ==0);
if(nctemp2967)
{
struct tree* nctemp2982= p;
struct nctempchar1 *nctemp2986;
static struct nctempchar1 nctemp2987 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2986=&nctemp2987;
nctempchar1* nctemp2984= nctemp2986;
struct tree* nctemp2990= p;
nctempchar1* nctemp2992=PtreeGetdef(nctemp2990);
nctempchar1* nctemp2988= nctemp2992;
int nctemp2993=SemSerror(nctemp2982,nctemp2984,nctemp2988);
}
struct tree* nctemp2999= np;
nctempchar1* nctemp3001=PtreeGetref(nctemp2999);
nctempchar1* nctemp2997= nctemp3001;
struct nctempchar1 *nctemp3004;
static struct nctempchar1 nctemp3005 = {{ 5}, (char*)"aref\0"};
nctemp3004=&nctemp3005;
nctempchar1* nctemp3002= nctemp3004;
int nctemp3006=LibeStrcmp(nctemp2997,nctemp3002);
struct tree* nctemp3010= np;
nctempchar1* nctemp3012=PtreeGetref(nctemp3010);
nctempchar1* nctemp3008= nctemp3012;
struct nctempchar1 *nctemp3015;
static struct nctempchar1 nctemp3016 = {{ 5}, (char*)"sref\0"};
nctemp3015=&nctemp3016;
nctempchar1* nctemp3013= nctemp3015;
int nctemp3017=LibeStrcmp(nctemp3008,nctemp3013);
int nctemp2994 = (nctemp3006 || nctemp3017);
if(nctemp2994)
{
struct tree* nctemp3019= p;
struct nctempchar1 *nctemp3023;
static struct nctempchar1 nctemp3024 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3023=&nctemp3024;
nctempchar1* nctemp3021= nctemp3023;
struct tree* nctemp3027= p;
nctempchar1* nctemp3029=PtreeGetdef(nctemp3027);
nctempchar1* nctemp3025= nctemp3029;
int nctemp3030=SemSerror(nctemp3019,nctemp3021,nctemp3025);
return 0;
}
struct tree* nctemp3033= p;
struct nctempchar1 *nctemp3037;
static struct nctempchar1 nctemp3038 = {{ 8}, (char*)"complex\0"};
nctemp3037=&nctemp3038;
nctempchar1* nctemp3035= nctemp3037;
int nctemp3039=PtreeSetype(nctemp3033,nctemp3035);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp3044= p;
nctempchar1* nctemp3046=PtreeGetname(nctemp3044);
nctempchar1* nctemp3042= nctemp3046;
struct nctempchar1 *nctemp3049;
static struct nctempchar1 nctemp3050 = {{ 3}, (char*)"re\0"};
nctemp3049=&nctemp3050;
nctempchar1* nctemp3047= nctemp3049;
int nctemp3051=LibeStrcmp(nctemp3042,nctemp3047);
if(nctemp3051)
{
struct tree* nctemp3056= p;
struct tree* nctemp3058=PtreeMvchild(nctemp3056);
np =nctemp3058;
struct tree* nctemp3060= np;
struct tree* nctemp3062=SemExpr(nctemp3060);
struct tree* nctemp3068= np;
nctempchar1* nctemp3070=PtreeGetype(nctemp3068);
nctempchar1* nctemp3066= nctemp3070;
struct nctempchar1 *nctemp3073;
static struct nctempchar1 nctemp3074 = {{ 8}, (char*)"complex\0"};
nctemp3073=&nctemp3074;
nctempchar1* nctemp3071= nctemp3073;
int nctemp3075=LibeStrcmp(nctemp3066,nctemp3071);
int nctemp3063 = (nctemp3075 ==0);
if(nctemp3063)
{
struct tree* nctemp3078= p;
struct nctempchar1 *nctemp3082;
static struct nctempchar1 nctemp3083 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3082=&nctemp3083;
nctempchar1* nctemp3080= nctemp3082;
struct tree* nctemp3086= p;
nctempchar1* nctemp3088=PtreeGetdef(nctemp3086);
nctempchar1* nctemp3084= nctemp3088;
int nctemp3089=SemSerror(nctemp3078,nctemp3080,nctemp3084);
return 0;
}
struct tree* nctemp3096= np;
nctempchar1* nctemp3098=PtreeGetref(nctemp3096);
nctempchar1* nctemp3094= nctemp3098;
struct nctempchar1 *nctemp3101;
static struct nctempchar1 nctemp3102 = {{ 5}, (char*)"aref\0"};
nctemp3101=&nctemp3102;
nctempchar1* nctemp3099= nctemp3101;
int nctemp3103=LibeStrcmp(nctemp3094,nctemp3099);
struct tree* nctemp3107= np;
nctempchar1* nctemp3109=PtreeGetref(nctemp3107);
nctempchar1* nctemp3105= nctemp3109;
struct nctempchar1 *nctemp3112;
static struct nctempchar1 nctemp3113 = {{ 5}, (char*)"sref\0"};
nctemp3112=&nctemp3113;
nctempchar1* nctemp3110= nctemp3112;
int nctemp3114=LibeStrcmp(nctemp3105,nctemp3110);
int nctemp3091 = (nctemp3103 || nctemp3114);
if(nctemp3091)
{
struct tree* nctemp3116= p;
struct nctempchar1 *nctemp3120;
static struct nctempchar1 nctemp3121 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3120=&nctemp3121;
nctempchar1* nctemp3118= nctemp3120;
struct tree* nctemp3124= p;
nctempchar1* nctemp3126=PtreeGetdef(nctemp3124);
nctempchar1* nctemp3122= nctemp3126;
int nctemp3127=SemSerror(nctemp3116,nctemp3118,nctemp3122);
return 0;
}
struct tree* nctemp3130= p;
struct nctempchar1 *nctemp3134;
static struct nctempchar1 nctemp3135 = {{ 6}, (char*)"float\0"};
nctemp3134=&nctemp3135;
nctempchar1* nctemp3132= nctemp3134;
int nctemp3136=PtreeSetype(nctemp3130,nctemp3132);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3143= p;
nctempchar1* nctemp3145=PtreeGetname(nctemp3143);
nctempchar1* nctemp3141= nctemp3145;
struct nctempchar1 *nctemp3148;
static struct nctempchar1 nctemp3149 = {{ 4}, (char*)"len\0"};
nctemp3148=&nctemp3149;
nctempchar1* nctemp3146= nctemp3148;
int nctemp3150=LibeStrcmp(nctemp3141,nctemp3146);
int nctemp3138 = (nctemp3150 ==1);
if(nctemp3138)
{
struct tree* nctemp3153= p;
struct nctempchar1 *nctemp3157;
static struct nctempchar1 nctemp3158 = {{ 4}, (char*)"int\0"};
nctemp3157=&nctemp3158;
nctempchar1* nctemp3155= nctemp3157;
int nctemp3159=PtreeSetype(nctemp3153,nctemp3155);
struct tree* nctemp3164= p;
struct tree* nctemp3166=PtreeMvchild(nctemp3164);
np =nctemp3166;
struct tree* nctemp3168= np;
struct tree* nctemp3170=SemExpr(nctemp3168);
struct tree* nctemp3176= np;
nctempchar1* nctemp3178=PtreeGetref(nctemp3176);
nctempchar1* nctemp3174= nctemp3178;
struct nctempchar1 *nctemp3181;
static struct nctempchar1 nctemp3182 = {{ 5}, (char*)"aref\0"};
nctemp3181=&nctemp3182;
nctempchar1* nctemp3179= nctemp3181;
int nctemp3183=LibeStrcmp(nctemp3174,nctemp3179);
int nctemp3171 = (nctemp3183 ==0);
if(nctemp3171)
{
struct tree* nctemp3186= p;
struct nctempchar1 *nctemp3190;
static struct nctempchar1 nctemp3191 = {{ 13}, (char*)"not an array\0"};
nctemp3190=&nctemp3191;
nctempchar1* nctemp3188= nctemp3190;
struct tree* nctemp3194= p;
nctempchar1* nctemp3196=PtreeGetdef(nctemp3194);
nctempchar1* nctemp3192= nctemp3196;
int nctemp3197=SemSerror(nctemp3186,nctemp3188,nctemp3192);
}
struct tree* nctemp3202= np;
struct tree* nctemp3204=PtreeMvsister(nctemp3202);
np =nctemp3204;
struct tree* nctemp3206= np;
struct tree* nctemp3208=SemExpr(nctemp3206);
struct tree* nctemp3212= np;
nctempchar1* nctemp3214=PtreeGetref(nctemp3212);
nctempchar1* nctemp3210= nctemp3214;
struct nctempchar1 *nctemp3217;
static struct nctempchar1 nctemp3218 = {{ 5}, (char*)"aref\0"};
nctemp3217=&nctemp3218;
nctempchar1* nctemp3215= nctemp3217;
int nctemp3219=LibeStrcmp(nctemp3210,nctemp3215);
if(nctemp3219)
{
struct tree* nctemp3221= p;
struct nctempchar1 *nctemp3225;
static struct nctempchar1 nctemp3226 = {{ 13}, (char*)"not a scalar\0"};
nctemp3225=&nctemp3226;
nctempchar1* nctemp3223= nctemp3225;
struct tree* nctemp3229= p;
nctempchar1* nctemp3231=PtreeGetdef(nctemp3229);
nctempchar1* nctemp3227= nctemp3231;
int nctemp3232=SemSerror(nctemp3221,nctemp3223,nctemp3227);
}
struct tree* nctemp3238= np;
nctempchar1* nctemp3240=PtreeGetype(nctemp3238);
nctempchar1* nctemp3236= nctemp3240;
struct nctempchar1 *nctemp3243;
static struct nctempchar1 nctemp3244 = {{ 4}, (char*)"int\0"};
nctemp3243=&nctemp3244;
nctempchar1* nctemp3241= nctemp3243;
int nctemp3245=LibeStrcmp(nctemp3236,nctemp3241);
int nctemp3233 = (nctemp3245 ==0);
if(nctemp3233)
{
struct tree* nctemp3248= p;
struct nctempchar1 *nctemp3252;
static struct nctempchar1 nctemp3253 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3252=&nctemp3253;
nctempchar1* nctemp3250= nctemp3252;
struct tree* nctemp3256= p;
nctempchar1* nctemp3258=PtreeGetdef(nctemp3256);
nctempchar1* nctemp3254= nctemp3258;
int nctemp3259=SemSerror(nctemp3248,nctemp3250,nctemp3254);
}
struct tree* nctemp3267= np;
struct tree* nctemp3269=PtreeMvsister(nctemp3267);
np =nctemp3269;
int nctemp3260 = (np !=0);
if(nctemp3260)
{
struct tree* nctemp3272= p;
struct nctempchar1 *nctemp3276;
static struct nctempchar1 nctemp3277 = {{ 19}, (char*)"too many arguments\0"};
nctemp3276=&nctemp3277;
nctempchar1* nctemp3274= nctemp3276;
struct tree* nctemp3280= p;
nctempchar1* nctemp3282=PtreeGetdef(nctemp3280);
nctempchar1* nctemp3278= nctemp3282;
int nctemp3283=SemSerror(nctemp3272,nctemp3274,nctemp3278);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3288= p;
nctempchar1* nctemp3290=PtreeGetname(nctemp3288);
nctempchar1* nctemp3286= nctemp3290;
struct nctempchar1 *nctemp3293;
static struct nctempchar1 nctemp3294 = {{ 3}, (char*)"im\0"};
nctemp3293=&nctemp3294;
nctempchar1* nctemp3291= nctemp3293;
int nctemp3295=LibeStrcmp(nctemp3286,nctemp3291);
if(nctemp3295)
{
struct tree* nctemp3300= p;
struct tree* nctemp3302=PtreeMvchild(nctemp3300);
np =nctemp3302;
struct tree* nctemp3304= np;
struct tree* nctemp3306=SemExpr(nctemp3304);
struct tree* nctemp3312= np;
nctempchar1* nctemp3314=PtreeGetype(nctemp3312);
nctempchar1* nctemp3310= nctemp3314;
struct nctempchar1 *nctemp3317;
static struct nctempchar1 nctemp3318 = {{ 8}, (char*)"complex\0"};
nctemp3317=&nctemp3318;
nctempchar1* nctemp3315= nctemp3317;
int nctemp3319=LibeStrcmp(nctemp3310,nctemp3315);
int nctemp3307 = (nctemp3319 ==0);
if(nctemp3307)
{
struct tree* nctemp3322= p;
struct nctempchar1 *nctemp3326;
static struct nctempchar1 nctemp3327 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3326=&nctemp3327;
nctempchar1* nctemp3324= nctemp3326;
struct tree* nctemp3330= p;
nctempchar1* nctemp3332=PtreeGetdef(nctemp3330);
nctempchar1* nctemp3328= nctemp3332;
int nctemp3333=SemSerror(nctemp3322,nctemp3324,nctemp3328);
return 0;
}
struct tree* nctemp3340= np;
nctempchar1* nctemp3342=PtreeGetref(nctemp3340);
nctempchar1* nctemp3338= nctemp3342;
struct nctempchar1 *nctemp3345;
static struct nctempchar1 nctemp3346 = {{ 5}, (char*)"aref\0"};
nctemp3345=&nctemp3346;
nctempchar1* nctemp3343= nctemp3345;
int nctemp3347=LibeStrcmp(nctemp3338,nctemp3343);
struct tree* nctemp3351= np;
nctempchar1* nctemp3353=PtreeGetref(nctemp3351);
nctempchar1* nctemp3349= nctemp3353;
struct nctempchar1 *nctemp3356;
static struct nctempchar1 nctemp3357 = {{ 5}, (char*)"sref\0"};
nctemp3356=&nctemp3357;
nctempchar1* nctemp3354= nctemp3356;
int nctemp3358=LibeStrcmp(nctemp3349,nctemp3354);
int nctemp3335 = (nctemp3347 || nctemp3358);
if(nctemp3335)
{
struct tree* nctemp3360= p;
struct nctempchar1 *nctemp3364;
static struct nctempchar1 nctemp3365 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3364=&nctemp3365;
nctempchar1* nctemp3362= nctemp3364;
struct tree* nctemp3368= p;
nctempchar1* nctemp3370=PtreeGetdef(nctemp3368);
nctempchar1* nctemp3366= nctemp3370;
int nctemp3371=SemSerror(nctemp3360,nctemp3362,nctemp3366);
return 0;
}
struct tree* nctemp3374= p;
struct nctempchar1 *nctemp3378;
static struct nctempchar1 nctemp3379 = {{ 6}, (char*)"float\0"};
nctemp3378=&nctemp3379;
nctempchar1* nctemp3376= nctemp3378;
int nctemp3380=PtreeSetype(nctemp3374,nctemp3376);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3385= p;
nctempchar1* nctemp3387=PtreeGetname(nctemp3385);
nctempchar1* nctemp3383= nctemp3387;
struct nctempchar1 *nctemp3390;
static struct nctempchar1 nctemp3391 = {{ 7}, (char*)"sizeof\0"};
nctemp3390=&nctemp3391;
nctempchar1* nctemp3388= nctemp3390;
int nctemp3392=LibeStrcmp(nctemp3383,nctemp3388);
if(nctemp3392)
{
struct tree* nctemp3394= p;
struct nctempchar1 *nctemp3398;
static struct nctempchar1 nctemp3399 = {{ 4}, (char*)"int\0"};
nctemp3398=&nctemp3399;
nctempchar1* nctemp3396= nctemp3398;
int nctemp3400=PtreeSetype(nctemp3394,nctemp3396);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval =1;
struct tree* nctemp3411= p;
nctempchar1* nctemp3413=PtreeGetype(nctemp3411);
nctempchar1* nctemp3409= nctemp3413;
struct tree* nctemp3416= np;
nctempchar1* nctemp3418=PtreeGetype(nctemp3416);
nctempchar1* nctemp3414= nctemp3418;
int nctemp3419=LibeStrcmp(nctemp3409,nctemp3414);
int nctemp3406 = (nctemp3419 ==0);
if(nctemp3406)
{
rval =0;
}
struct tree* nctemp3430= p;
nctempchar1* nctemp3432=PtreeGetref(nctemp3430);
nctempchar1* nctemp3428= nctemp3432;
struct tree* nctemp3435= np;
nctempchar1* nctemp3437=PtreeGetref(nctemp3435);
nctempchar1* nctemp3433= nctemp3437;
int nctemp3438=LibeStrcmp(nctemp3428,nctemp3433);
int nctemp3425 = (nctemp3438 ==0);
if(nctemp3425)
{
struct tree* nctemp3443= np;
nctempchar1* nctemp3445=PtreeGetname(nctemp3443);
nctempchar1* nctemp3441= nctemp3445;
struct nctempchar1 *nctemp3448;
static struct nctempchar1 nctemp3449 = {{ 10}, (char*)"iconstant\0"};
nctemp3448=&nctemp3449;
nctempchar1* nctemp3446= nctemp3448;
int nctemp3450=LibeStrcmp(nctemp3441,nctemp3446);
if(nctemp3450)
{
struct tree* nctemp3454= np;
nctempchar1* nctemp3456=PtreeGetdef(nctemp3454);
nctempchar1* nctemp3452= nctemp3456;
struct nctempchar1 *nctemp3459;
static struct nctempchar1 nctemp3460 = {{ 2}, (char*)"0\0"};
nctemp3459=&nctemp3460;
nctempchar1* nctemp3457= nctemp3459;
int nctemp3461=LibeStrcmp(nctemp3452,nctemp3457);
if(nctemp3461)
{
rval =1;
}
else{
rval =0;
}
}
else{
rval =0;
}
}
else{
struct tree* nctemp3479= p;
nctempchar1* nctemp3481=PtreeGetref(nctemp3479);
nctempchar1* nctemp3477= nctemp3481;
struct nctempchar1 *nctemp3484;
static struct nctempchar1 nctemp3485 = {{ 5}, (char*)"aref\0"};
nctemp3484=&nctemp3485;
nctempchar1* nctemp3482= nctemp3484;
int nctemp3486=LibeStrcmp(nctemp3477,nctemp3482);
int nctemp3474 = (nctemp3486 ==1);
if(nctemp3474)
{
struct tree* nctemp3491= p;
int nctemp3493=PtreeGetrank(nctemp3491);
struct tree* nctemp3495= np;
int nctemp3497=PtreeGetrank(nctemp3495);
int nctemp3488 = (nctemp3493 !=nctemp3497);
if(nctemp3488)
{
rval =0;
}
}
}
return rval;
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp3507= p;
struct tree* nctemp3509=PtreeMvchild(nctemp3507);
np =nctemp3509;
struct tree* nctemp3515= np;
nctempchar1* nctemp3517=PtreeGetlval(nctemp3515);
nctempchar1* nctemp3513= nctemp3517;
struct nctempchar1 *nctemp3520;
static struct nctempchar1 nctemp3521 = {{ 5}, (char*)"lval\0"};
nctemp3520=&nctemp3521;
nctempchar1* nctemp3518= nctemp3520;
int nctemp3522=LibeStrcmp(nctemp3513,nctemp3518);
int nctemp3510 = (nctemp3522 ==0);
if(nctemp3510)
{
struct tree* nctemp3525= np;
struct nctempchar1 *nctemp3529;
static struct nctempchar1 nctemp3530 = {{ 17}, (char*)"Not a left value\0"};
nctemp3529=&nctemp3530;
nctempchar1* nctemp3527= nctemp3529;
struct tree* nctemp3533= np;
nctempchar1* nctemp3535=PtreeGetdef(nctemp3533);
nctempchar1* nctemp3531= nctemp3535;
int nctemp3536=SemSerror(nctemp3525,nctemp3527,nctemp3531);
}
else{
struct tree* nctemp3538= p;
struct nctempchar1 *nctemp3542;
static struct nctempchar1 nctemp3543 = {{ 5}, (char*)"lval\0"};
nctemp3542=&nctemp3543;
nctempchar1* nctemp3540= nctemp3542;
int nctemp3544=PtreeSetlval(nctemp3538,nctemp3540);
}
struct tree* nctemp3546= np;
struct tree* nctemp3548= p;
int nctemp3550=SemCopytype(nctemp3546,nctemp3548);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3556= p;
struct tree* nctemp3558=PtreeMvchild(nctemp3556);
np =nctemp3558;
struct tree* nctemp3563= np;
struct tree* nctemp3565=PtreeMvsister(nctemp3563);
rp =nctemp3565;
struct tree* nctemp3571= p;
nctempchar1* nctemp3573=PtreeGetdef(nctemp3571);
nctempchar1* nctemp3569= nctemp3573;
struct nctempchar1 *nctemp3576;
static struct nctempchar1 nctemp3577 = {{ 3}, (char*)"==\0"};
nctemp3576=&nctemp3577;
nctempchar1* nctemp3574= nctemp3576;
int nctemp3578=LibeStrcmp(nctemp3569,nctemp3574);
int nctemp3566 = (nctemp3578 ==0);
if(nctemp3566)
{
struct tree* nctemp3585= p;
nctempchar1* nctemp3587=PtreeGetdef(nctemp3585);
nctempchar1* nctemp3583= nctemp3587;
struct nctempchar1 *nctemp3590;
static struct nctempchar1 nctemp3591 = {{ 3}, (char*)"!=\0"};
nctemp3590=&nctemp3591;
nctempchar1* nctemp3588= nctemp3590;
int nctemp3592=LibeStrcmp(nctemp3583,nctemp3588);
int nctemp3580 = (nctemp3592 ==0);
if(nctemp3580)
{
struct tree* nctemp3599= np;
nctempchar1* nctemp3601=PtreeGetref(nctemp3599);
nctempchar1* nctemp3597= nctemp3601;
struct nctempchar1 *nctemp3604;
static struct nctempchar1 nctemp3605 = {{ 5}, (char*)"aref\0"};
nctemp3604=&nctemp3605;
nctempchar1* nctemp3602= nctemp3604;
int nctemp3606=LibeStrcmp(nctemp3597,nctemp3602);
struct tree* nctemp3610= np;
nctempchar1* nctemp3612=PtreeGetref(nctemp3610);
nctempchar1* nctemp3608= nctemp3612;
struct nctempchar1 *nctemp3615;
static struct nctempchar1 nctemp3616 = {{ 5}, (char*)"sref\0"};
nctemp3615=&nctemp3616;
nctempchar1* nctemp3613= nctemp3615;
int nctemp3617=LibeStrcmp(nctemp3608,nctemp3613);
int nctemp3594 = (nctemp3606 || nctemp3617);
if(nctemp3594)
{
struct tree* nctemp3619= p;
struct nctempchar1 *nctemp3623;
static struct nctempchar1 nctemp3624 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3623=&nctemp3624;
nctempchar1* nctemp3621= nctemp3623;
struct nctempchar1 *nctemp3627;
static struct nctempchar1 nctemp3628 = {{ 2}, (char*)" \0"};
nctemp3627=&nctemp3628;
nctempchar1* nctemp3625= nctemp3627;
int nctemp3629=SemSerror(nctemp3619,nctemp3621,nctemp3625);
}
else{
struct tree* nctemp3635= rp;
nctempchar1* nctemp3637=PtreeGetref(nctemp3635);
nctempchar1* nctemp3633= nctemp3637;
struct nctempchar1 *nctemp3640;
static struct nctempchar1 nctemp3641 = {{ 5}, (char*)"aref\0"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=LibeStrcmp(nctemp3633,nctemp3638);
struct tree* nctemp3646= np;
nctempchar1* nctemp3648=PtreeGetref(nctemp3646);
nctempchar1* nctemp3644= nctemp3648;
struct nctempchar1 *nctemp3651;
static struct nctempchar1 nctemp3652 = {{ 5}, (char*)"sref\0"};
nctemp3651=&nctemp3652;
nctempchar1* nctemp3649= nctemp3651;
int nctemp3653=LibeStrcmp(nctemp3644,nctemp3649);
int nctemp3630 = (nctemp3642 || nctemp3653);
if(nctemp3630)
{
struct tree* nctemp3655= p;
struct nctempchar1 *nctemp3659;
static struct nctempchar1 nctemp3660 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3659=&nctemp3660;
nctempchar1* nctemp3657= nctemp3659;
struct nctempchar1 *nctemp3663;
static struct nctempchar1 nctemp3664 = {{ 2}, (char*)" \0"};
nctemp3663=&nctemp3664;
nctempchar1* nctemp3661= nctemp3663;
int nctemp3665=SemSerror(nctemp3655,nctemp3657,nctemp3661);
}
}
}
else{
struct tree* nctemp3669= np;
nctempchar1* nctemp3671=PtreeGetype(nctemp3669);
nctempchar1* nctemp3667= nctemp3671;
struct nctempchar1 *nctemp3674;
static struct nctempchar1 nctemp3675 = {{ 8}, (char*)"complex\0"};
nctemp3674=&nctemp3675;
nctempchar1* nctemp3672= nctemp3674;
int nctemp3676=LibeStrcmp(nctemp3667,nctemp3672);
if(nctemp3676)
{
struct tree* nctemp3678= p;
struct nctempchar1 *nctemp3682;
static struct nctempchar1 nctemp3683 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3682=&nctemp3683;
nctempchar1* nctemp3680= nctemp3682;
struct nctempchar1 *nctemp3686;
static struct nctempchar1 nctemp3687 = {{ 2}, (char*)" \0"};
nctemp3686=&nctemp3687;
nctempchar1* nctemp3684= nctemp3686;
int nctemp3688=SemSerror(nctemp3678,nctemp3680,nctemp3684);
}
}
}
struct tree* nctemp3690= p;
struct nctempchar1 *nctemp3694;
static struct nctempchar1 nctemp3695 = {{ 4}, (char*)"int\0"};
nctemp3694=&nctemp3695;
nctempchar1* nctemp3692= nctemp3694;
int nctemp3696=PtreeSetype(nctemp3690,nctemp3692);
struct tree* nctemp3698= p;
struct nctempchar1 *nctemp3702;
static struct nctempchar1 nctemp3703 = {{ 5}, (char*)"void\0"};
nctemp3702=&nctemp3703;
nctempchar1* nctemp3700= nctemp3702;
int nctemp3704=PtreeSetlval(nctemp3698,nctemp3700);
struct tree* nctemp3706= p;
struct nctempchar1 *nctemp3710;
static struct nctempchar1 nctemp3711 = {{ 5}, (char*)"void\0"};
nctemp3710=&nctemp3711;
nctempchar1* nctemp3708= nctemp3710;
int nctemp3712=PtreeSetstruct(nctemp3706,nctemp3708);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3718= p;
struct tree* nctemp3720=PtreeMvchild(nctemp3718);
np =nctemp3720;
struct tree* nctemp3725= np;
struct tree* nctemp3727=PtreeMvsister(nctemp3725);
rp =nctemp3727;
struct tree* nctemp3731= np;
nctempchar1* nctemp3733=PtreeGetref(nctemp3731);
nctempchar1* nctemp3729= nctemp3733;
struct nctempchar1 *nctemp3736;
static struct nctempchar1 nctemp3737 = {{ 5}, (char*)"sref\0"};
nctemp3736=&nctemp3737;
nctempchar1* nctemp3734= nctemp3736;
int nctemp3738=LibeStrcmp(nctemp3729,nctemp3734);
if(nctemp3738)
{
struct tree* nctemp3740= np;
struct nctempchar1 *nctemp3744;
static struct nctempchar1 nctemp3745 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3744=&nctemp3745;
nctempchar1* nctemp3742= nctemp3744;
struct nctempchar1 *nctemp3748;
static struct nctempchar1 nctemp3749 = {{ 2}, (char*)" \0"};
nctemp3748=&nctemp3749;
nctempchar1* nctemp3746= nctemp3748;
int nctemp3750=SemSerror(nctemp3740,nctemp3742,nctemp3746);
}
else{
struct tree* nctemp3754= rp;
nctempchar1* nctemp3756=PtreeGetref(nctemp3754);
nctempchar1* nctemp3752= nctemp3756;
struct nctempchar1 *nctemp3759;
static struct nctempchar1 nctemp3760 = {{ 5}, (char*)"sref\0"};
nctemp3759=&nctemp3760;
nctempchar1* nctemp3757= nctemp3759;
int nctemp3761=LibeStrcmp(nctemp3752,nctemp3757);
if(nctemp3761)
{
struct tree* nctemp3763= np;
struct nctempchar1 *nctemp3767;
static struct nctempchar1 nctemp3768 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3767=&nctemp3768;
nctempchar1* nctemp3765= nctemp3767;
struct nctempchar1 *nctemp3771;
static struct nctempchar1 nctemp3772 = {{ 2}, (char*)" \0"};
nctemp3771=&nctemp3772;
nctempchar1* nctemp3769= nctemp3771;
int nctemp3773=SemSerror(nctemp3763,nctemp3765,nctemp3769);
}
else{
struct tree* nctemp3775= np;
struct tree* nctemp3777= p;
int nctemp3779=SemCopytype(nctemp3775,nctemp3777);
struct tree* nctemp3781= p;
struct nctempchar1 *nctemp3785;
static struct nctempchar1 nctemp3786 = {{ 5}, (char*)"void\0"};
nctemp3785=&nctemp3786;
nctempchar1* nctemp3783= nctemp3785;
int nctemp3787=PtreeSetlval(nctemp3781,nctemp3783);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np =p;
struct tree* nctemp3796= p;
nctempchar1* nctemp3798=PtreeGetname(nctemp3796);
nctempchar1* nctemp3794= nctemp3798;
struct nctempchar1 *nctemp3801;
static struct nctempchar1 nctemp3802 = {{ 8}, (char*)"binexpr\0"};
nctemp3801=&nctemp3802;
nctempchar1* nctemp3799= nctemp3801;
int nctemp3803=LibeStrcmp(nctemp3794,nctemp3799);
if(nctemp3803)
{
struct tree* nctemp3808= p;
struct tree* nctemp3810=PtreeMvchild(nctemp3808);
p =nctemp3810;
struct tree* nctemp3815= p;
struct tree* nctemp3817=SemUnexpr(nctemp3815);
leftp =nctemp3817;
struct tree* nctemp3822= p;
struct tree* nctemp3824=PtreeMvsister(nctemp3822);
p =nctemp3824;
struct tree* nctemp3829= p;
struct tree* nctemp3831=SemUnexpr(nctemp3829);
rightp =nctemp3831;
struct tree* nctemp3835= leftp;
struct tree* nctemp3837= rightp;
int nctemp3839=SemComparetype(nctemp3835,nctemp3837);
int nctemp3832 = (nctemp3839 ==0);
if(nctemp3832)
{
struct tree* nctemp3842= p;
struct nctempchar1 *nctemp3846;
static struct nctempchar1 nctemp3847 = {{ 11}, (char*)"Type error\0"};
nctemp3846=&nctemp3847;
nctempchar1* nctemp3844= nctemp3846;
struct nctempchar1 *nctemp3850;
static struct nctempchar1 nctemp3851 = {{ 2}, (char*)" \0"};
nctemp3850=&nctemp3851;
nctempchar1* nctemp3848= nctemp3850;
int nctemp3852=SemSerror(nctemp3842,nctemp3844,nctemp3848);
return p;
}
else{
struct tree* nctemp3857= np;
nctempchar1* nctemp3859=PtreeGetdef(nctemp3857);
nctempchar1* nctemp3855= nctemp3859;
struct nctempchar1 *nctemp3862;
static struct nctempchar1 nctemp3863 = {{ 2}, (char*)"=\0"};
nctemp3862=&nctemp3863;
nctempchar1* nctemp3860= nctemp3862;
int nctemp3864=LibeStrcmp(nctemp3855,nctemp3860);
if(nctemp3864)
{
struct tree* nctemp3866= np;
struct tree* nctemp3868=SemAsgexpr(nctemp3866);
}
else{
struct tree* nctemp3892= np;
nctempchar1* nctemp3894=PtreeGetdef(nctemp3892);
nctempchar1* nctemp3890= nctemp3894;
struct nctempchar1 *nctemp3897;
static struct nctempchar1 nctemp3898 = {{ 3}, (char*)"!=\0"};
nctemp3897=&nctemp3898;
nctempchar1* nctemp3895= nctemp3897;
int nctemp3899=LibeStrcmp(nctemp3890,nctemp3895);
struct tree* nctemp3903= np;
nctempchar1* nctemp3905=PtreeGetdef(nctemp3903);
nctempchar1* nctemp3901= nctemp3905;
struct nctempchar1 *nctemp3908;
static struct nctempchar1 nctemp3909 = {{ 3}, (char*)"==\0"};
nctemp3908=&nctemp3909;
nctempchar1* nctemp3906= nctemp3908;
int nctemp3910=LibeStrcmp(nctemp3901,nctemp3906);
int nctemp3887 = (nctemp3899 || nctemp3910);
struct tree* nctemp3914= np;
nctempchar1* nctemp3916=PtreeGetdef(nctemp3914);
nctempchar1* nctemp3912= nctemp3916;
struct nctempchar1 *nctemp3919;
static struct nctempchar1 nctemp3920 = {{ 3}, (char*)"||\0"};
nctemp3919=&nctemp3920;
nctempchar1* nctemp3917= nctemp3919;
int nctemp3921=LibeStrcmp(nctemp3912,nctemp3917);
int nctemp3884 = (nctemp3887 || nctemp3921);
struct tree* nctemp3925= np;
nctempchar1* nctemp3927=PtreeGetdef(nctemp3925);
nctempchar1* nctemp3923= nctemp3927;
struct nctempchar1 *nctemp3930;
static struct nctempchar1 nctemp3931 = {{ 3}, (char*)"<=\0"};
nctemp3930=&nctemp3931;
nctempchar1* nctemp3928= nctemp3930;
int nctemp3932=LibeStrcmp(nctemp3923,nctemp3928);
int nctemp3881 = (nctemp3884 || nctemp3932);
struct tree* nctemp3936= np;
nctempchar1* nctemp3938=PtreeGetdef(nctemp3936);
nctempchar1* nctemp3934= nctemp3938;
struct nctempchar1 *nctemp3941;
static struct nctempchar1 nctemp3942 = {{ 3}, (char*)">=\0"};
nctemp3941=&nctemp3942;
nctempchar1* nctemp3939= nctemp3941;
int nctemp3943=LibeStrcmp(nctemp3934,nctemp3939);
int nctemp3878 = (nctemp3881 || nctemp3943);
struct tree* nctemp3947= np;
nctempchar1* nctemp3949=PtreeGetdef(nctemp3947);
nctempchar1* nctemp3945= nctemp3949;
struct nctempchar1 *nctemp3952;
static struct nctempchar1 nctemp3953 = {{ 2}, (char*)"<\0"};
nctemp3952=&nctemp3953;
nctempchar1* nctemp3950= nctemp3952;
int nctemp3954=LibeStrcmp(nctemp3945,nctemp3950);
int nctemp3875 = (nctemp3878 || nctemp3954);
struct tree* nctemp3958= np;
nctempchar1* nctemp3960=PtreeGetdef(nctemp3958);
nctempchar1* nctemp3956= nctemp3960;
struct nctempchar1 *nctemp3963;
static struct nctempchar1 nctemp3964 = {{ 2}, (char*)">\0"};
nctemp3963=&nctemp3964;
nctempchar1* nctemp3961= nctemp3963;
int nctemp3965=LibeStrcmp(nctemp3956,nctemp3961);
int nctemp3872 = (nctemp3875 || nctemp3965);
struct tree* nctemp3969= np;
nctempchar1* nctemp3971=PtreeGetdef(nctemp3969);
nctempchar1* nctemp3967= nctemp3971;
struct nctempchar1 *nctemp3974;
static struct nctempchar1 nctemp3975 = {{ 3}, (char*)"&&\0"};
nctemp3974=&nctemp3975;
nctempchar1* nctemp3972= nctemp3974;
int nctemp3976=LibeStrcmp(nctemp3967,nctemp3972);
int nctemp3869 = (nctemp3872 || nctemp3976);
if(nctemp3869)
{
struct tree* nctemp3978= np;
struct tree* nctemp3980=SemRelexpr(nctemp3978);
}
else{
struct tree* nctemp3992= np;
nctempchar1* nctemp3994=PtreeGetdef(nctemp3992);
nctempchar1* nctemp3990= nctemp3994;
struct nctempchar1 *nctemp3997;
static struct nctempchar1 nctemp3998 = {{ 2}, (char*)"+\0"};
nctemp3997=&nctemp3998;
nctempchar1* nctemp3995= nctemp3997;
int nctemp3999=LibeStrcmp(nctemp3990,nctemp3995);
struct tree* nctemp4003= np;
nctempchar1* nctemp4005=PtreeGetdef(nctemp4003);
nctempchar1* nctemp4001= nctemp4005;
struct nctempchar1 *nctemp4008;
static struct nctempchar1 nctemp4009 = {{ 2}, (char*)"-\0"};
nctemp4008=&nctemp4009;
nctempchar1* nctemp4006= nctemp4008;
int nctemp4010=LibeStrcmp(nctemp4001,nctemp4006);
int nctemp3987 = (nctemp3999 || nctemp4010);
struct tree* nctemp4014= np;
nctempchar1* nctemp4016=PtreeGetdef(nctemp4014);
nctempchar1* nctemp4012= nctemp4016;
struct nctempchar1 *nctemp4019;
static struct nctempchar1 nctemp4020 = {{ 2}, (char*)"*\0"};
nctemp4019=&nctemp4020;
nctempchar1* nctemp4017= nctemp4019;
int nctemp4021=LibeStrcmp(nctemp4012,nctemp4017);
int nctemp3984 = (nctemp3987 || nctemp4021);
struct tree* nctemp4025= np;
nctempchar1* nctemp4027=PtreeGetdef(nctemp4025);
nctempchar1* nctemp4023= nctemp4027;
struct nctempchar1 *nctemp4030;
static struct nctempchar1 nctemp4031 = {{ 2}, (char*)"/\0"};
nctemp4030=&nctemp4031;
nctempchar1* nctemp4028= nctemp4030;
int nctemp4032=LibeStrcmp(nctemp4023,nctemp4028);
int nctemp3981 = (nctemp3984 || nctemp4032);
if(nctemp3981)
{
struct tree* nctemp4034= np;
struct tree* nctemp4036=SemAddexpr(nctemp4034);
}
}
}
return np;
}
}
else{
struct tree* nctemp4039= p;
struct tree* nctemp4041=SemUnexpr(nctemp4039);
return nctemp4041;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp4046= p;
struct tree* nctemp4048=PtreeMvchild(nctemp4046);
sp =nctemp4048;
struct tree* nctemp4053= sp;
struct tree* nctemp4055=SemBinexpr(nctemp4053);
sp =nctemp4055;
struct tree* nctemp4057= sp;
struct tree* nctemp4059= p;
int nctemp4061=SemCopytype(nctemp4057,nctemp4059);
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np =p;
struct tree* nctemp4070= p;
nctempchar1* nctemp4072=PtreeGetname(nctemp4070);
nctempchar1* nctemp4068= nctemp4072;
struct nctempchar1 *nctemp4075;
static struct nctempchar1 nctemp4076 = {{ 7}, (char*)"unexpr\0"};
nctemp4075=&nctemp4076;
nctempchar1* nctemp4073= nctemp4075;
int nctemp4077=LibeStrcmp(nctemp4068,nctemp4073);
if(nctemp4077)
{
struct tree* nctemp4082= p;
struct tree* nctemp4084=PtreeMvchild(nctemp4082);
p =nctemp4084;
struct tree* nctemp4089= p;
struct tree* nctemp4091=SemPrimexpr(nctemp4089);
p =nctemp4091;
struct tree* nctemp4093= p;
struct tree* nctemp4095= np;
int nctemp4097=SemCopytype(nctemp4093,nctemp4095);
return np;
}
else{
struct tree* nctemp4100= p;
struct tree* nctemp4102=SemPrimexpr(nctemp4100);
return nctemp4102;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4106= p;
nctempchar1* nctemp4108=PtreeGetname(nctemp4106);
nctempchar1* nctemp4104= nctemp4108;
struct nctempchar1 *nctemp4111;
static struct nctempchar1 nctemp4112 = {{ 11}, (char*)"identifier\0"};
nctemp4111=&nctemp4112;
nctempchar1* nctemp4109= nctemp4111;
int nctemp4113=LibeStrcmp(nctemp4104,nctemp4109);
if(nctemp4113)
{
struct tree* nctemp4115= p;
int nctemp4117=SemId(nctemp4115);
return p;
}
else{
struct tree* nctemp4122= p;
nctempchar1* nctemp4124=PtreeGetname(nctemp4122);
nctempchar1* nctemp4120= nctemp4124;
struct nctempchar1 *nctemp4127;
static struct nctempchar1 nctemp4128 = {{ 6}, (char*)"fcall\0"};
nctemp4127=&nctemp4128;
nctempchar1* nctemp4125= nctemp4127;
int nctemp4129=LibeStrcmp(nctemp4120,nctemp4125);
if(nctemp4129)
{
struct tree* nctemp4131= p;
int nctemp4133=SemFcall(nctemp4131);
return p;
}
else{
struct tree* nctemp4138= p;
nctempchar1* nctemp4140=PtreeGetname(nctemp4138);
nctempchar1* nctemp4136= nctemp4140;
struct nctempchar1 *nctemp4143;
static struct nctempchar1 nctemp4144 = {{ 5}, (char*)"cast\0"};
nctemp4143=&nctemp4144;
nctempchar1* nctemp4141= nctemp4143;
int nctemp4145=LibeStrcmp(nctemp4136,nctemp4141);
if(nctemp4145)
{
struct tree* nctemp4147= p;
int nctemp4149=SemCast(nctemp4147);
return p;
}
else{
struct tree* nctemp4154= p;
nctempchar1* nctemp4156=PtreeGetname(nctemp4154);
nctempchar1* nctemp4152= nctemp4156;
struct nctempchar1 *nctemp4159;
static struct nctempchar1 nctemp4160 = {{ 4}, (char*)"new\0"};
nctemp4159=&nctemp4160;
nctempchar1* nctemp4157= nctemp4159;
int nctemp4161=LibeStrcmp(nctemp4152,nctemp4157);
if(nctemp4161)
{
struct tree* nctemp4163= p;
int nctemp4165=SemNew(nctemp4163);
return p;
}
else{
struct tree* nctemp4170= p;
nctempchar1* nctemp4172=PtreeGetname(nctemp4170);
nctempchar1* nctemp4168= nctemp4172;
struct nctempchar1 *nctemp4175;
static struct nctempchar1 nctemp4176 = {{ 7}, (char*)"delete\0"};
nctemp4175=&nctemp4176;
nctempchar1* nctemp4173= nctemp4175;
int nctemp4177=LibeStrcmp(nctemp4168,nctemp4173);
if(nctemp4177)
{
struct tree* nctemp4179= p;
int nctemp4181=SemDelete(nctemp4179);
return p;
}
else{
struct tree* nctemp4186= p;
nctempchar1* nctemp4188=PtreeGetname(nctemp4186);
nctempchar1* nctemp4184= nctemp4188;
struct nctempchar1 *nctemp4191;
static struct nctempchar1 nctemp4192 = {{ 6}, (char*)"cmplx\0"};
nctemp4191=&nctemp4192;
nctempchar1* nctemp4189= nctemp4191;
int nctemp4193=LibeStrcmp(nctemp4184,nctemp4189);
if(nctemp4193)
{
struct tree* nctemp4195= p;
int nctemp4197=SemCmplx(nctemp4195);
return p;
}
else{
struct tree* nctemp4202= p;
nctempchar1* nctemp4204=PtreeGetname(nctemp4202);
nctempchar1* nctemp4200= nctemp4204;
struct nctempchar1 *nctemp4207;
static struct nctempchar1 nctemp4208 = {{ 3}, (char*)"re\0"};
nctemp4207=&nctemp4208;
nctempchar1* nctemp4205= nctemp4207;
int nctemp4209=LibeStrcmp(nctemp4200,nctemp4205);
if(nctemp4209)
{
struct tree* nctemp4211= p;
int nctemp4213=SemRe(nctemp4211);
return p;
}
else{
struct tree* nctemp4218= p;
nctempchar1* nctemp4220=PtreeGetname(nctemp4218);
nctempchar1* nctemp4216= nctemp4220;
struct nctempchar1 *nctemp4223;
static struct nctempchar1 nctemp4224 = {{ 4}, (char*)"len\0"};
nctemp4223=&nctemp4224;
nctempchar1* nctemp4221= nctemp4223;
int nctemp4225=LibeStrcmp(nctemp4216,nctemp4221);
if(nctemp4225)
{
struct tree* nctemp4227= p;
int nctemp4229=SemLen(nctemp4227);
return p;
}
else{
struct tree* nctemp4234= p;
nctempchar1* nctemp4236=PtreeGetname(nctemp4234);
nctempchar1* nctemp4232= nctemp4236;
struct nctempchar1 *nctemp4239;
static struct nctempchar1 nctemp4240 = {{ 3}, (char*)"im\0"};
nctemp4239=&nctemp4240;
nctempchar1* nctemp4237= nctemp4239;
int nctemp4241=LibeStrcmp(nctemp4232,nctemp4237);
if(nctemp4241)
{
struct tree* nctemp4243= p;
int nctemp4245=SemIm(nctemp4243);
return p;
}
else{
struct tree* nctemp4250= p;
nctempchar1* nctemp4252=PtreeGetname(nctemp4250);
nctempchar1* nctemp4248= nctemp4252;
struct nctempchar1 *nctemp4255;
static struct nctempchar1 nctemp4256 = {{ 7}, (char*)"sizeof\0"};
nctemp4255=&nctemp4256;
nctempchar1* nctemp4253= nctemp4255;
int nctemp4257=LibeStrcmp(nctemp4248,nctemp4253);
if(nctemp4257)
{
struct tree* nctemp4259= p;
int nctemp4261=SemSizeof(nctemp4259);
return p;
}
else{
struct tree* nctemp4266= p;
nctempchar1* nctemp4268=PtreeGetname(nctemp4266);
nctempchar1* nctemp4264= nctemp4268;
struct nctempchar1 *nctemp4271;
static struct nctempchar1 nctemp4272 = {{ 10}, (char*)"iconstant\0"};
nctemp4271=&nctemp4272;
nctempchar1* nctemp4269= nctemp4271;
int nctemp4273=LibeStrcmp(nctemp4264,nctemp4269);
if(nctemp4273)
{
struct tree* nctemp4275= p;
struct nctempchar1 *nctemp4279;
static struct nctempchar1 nctemp4280 = {{ 4}, (char*)"int\0"};
nctemp4279=&nctemp4280;
nctempchar1* nctemp4277= nctemp4279;
int nctemp4281=PtreeSetype(nctemp4275,nctemp4277);
return p;
}
else{
struct tree* nctemp4286= p;
nctempchar1* nctemp4288=PtreeGetname(nctemp4286);
nctempchar1* nctemp4284= nctemp4288;
struct nctempchar1 *nctemp4291;
static struct nctempchar1 nctemp4292 = {{ 10}, (char*)"rconstant\0"};
nctemp4291=&nctemp4292;
nctempchar1* nctemp4289= nctemp4291;
int nctemp4293=LibeStrcmp(nctemp4284,nctemp4289);
if(nctemp4293)
{
struct tree* nctemp4295= p;
struct nctempchar1 *nctemp4299;
static struct nctempchar1 nctemp4300 = {{ 6}, (char*)"float\0"};
nctemp4299=&nctemp4300;
nctempchar1* nctemp4297= nctemp4299;
int nctemp4301=PtreeSetype(nctemp4295,nctemp4297);
return p;
}
else{
struct tree* nctemp4306= p;
nctempchar1* nctemp4308=PtreeGetname(nctemp4306);
nctempchar1* nctemp4304= nctemp4308;
struct nctempchar1 *nctemp4311;
static struct nctempchar1 nctemp4312 = {{ 10}, (char*)"sconstant\0"};
nctemp4311=&nctemp4312;
nctempchar1* nctemp4309= nctemp4311;
int nctemp4313=LibeStrcmp(nctemp4304,nctemp4309);
if(nctemp4313)
{
struct tree* nctemp4315= p;
struct nctempchar1 *nctemp4319;
static struct nctempchar1 nctemp4320 = {{ 5}, (char*)"char\0"};
nctemp4319=&nctemp4320;
nctempchar1* nctemp4317= nctemp4319;
int nctemp4321=PtreeSetype(nctemp4315,nctemp4317);
struct tree* nctemp4323= p;
struct nctempchar1 *nctemp4327;
static struct nctempchar1 nctemp4328 = {{ 5}, (char*)"aref\0"};
nctemp4327=&nctemp4328;
nctempchar1* nctemp4325= nctemp4327;
int nctemp4329=PtreeSetref(nctemp4323,nctemp4325);
struct tree* nctemp4331= p;
int nctemp4333= 1;
int nctemp4335=PtreeSetrank(nctemp4331,nctemp4333);
return p;
}
else{
struct tree* nctemp4338= p;
struct tree* nctemp4340=SemBinexpr(nctemp4338);
return nctemp4340;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
int SemCopyparallel (struct tree* p,struct tree* np)
{
struct tree* nctemp4342= p;
struct tree* nctemp4346= np;
nctempchar1* nctemp4348=PtreeGetparallel(nctemp4346);
nctempchar1* nctemp4344= nctemp4348;
int nctemp4349=PtreeSetparallel(nctemp4342,nctemp4344);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4356= tp;
nctempchar1* nctemp4358=SymGetname(nctemp4356);
name=nctemp4358;
struct tree* nctemp4360= p;
struct symbol* nctemp4362= tp;
int nctemp4364=SemArgtype(nctemp4360,nctemp4362);
struct tree* nctemp4369= p;
struct tree* nctemp4371=PtreeMvchild(nctemp4369);
p =nctemp4371;
struct tree* nctemp4377= p;
nctempchar1* nctemp4379=PtreeGetname(nctemp4377);
nctempchar1* nctemp4375= nctemp4379;
struct nctempchar1 *nctemp4382;
static struct nctempchar1 nctemp4383 = {{ 8}, (char*)"arglist\0"};
nctemp4382=&nctemp4383;
nctempchar1* nctemp4380= nctemp4382;
int nctemp4384=LibeStrcmp(nctemp4375,nctemp4380);
int nctemp4372 = (nctemp4384 ==0);
if(nctemp4372)
{
struct symbol* nctemp4393= tp;
struct symbol* nctemp4395=SymGetable(nctemp4393);
tp =nctemp4395;
int nctemp4386 = (tp !=0);
if(nctemp4386)
{
struct tree* nctemp4398= p;
struct nctempchar1 *nctemp4402;
static struct nctempchar1 nctemp4403 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4402=&nctemp4403;
nctempchar1* nctemp4400= nctemp4402;
struct tree* nctemp4406= p;
nctempchar1* nctemp4408=PtreeGetdef(nctemp4406);
nctempchar1* nctemp4404= nctemp4408;
int nctemp4409=SemSerror(nctemp4398,nctemp4400,nctemp4404);
return 0;
}
return 1;
}
struct tree* nctemp4418= p;
struct tree* nctemp4420=PtreeMvchild(nctemp4418);
struct tree* nctemp4416= nctemp4420;
struct tree* nctemp4421=PtreeMvchild(nctemp4416);
p =nctemp4421;
struct symbol* nctemp4426= tp;
struct symbol* nctemp4428=SymGetable(nctemp4426);
tp =nctemp4428;
struct nctempchar1 *nctemp4435;
static struct nctempchar1 nctemp4436 = {{ 9}, (char*)"#arglist\0"};
nctemp4435=&nctemp4436;
nctempchar1* nctemp4433= nctemp4435;
struct symbol* nctemp4437= tp;
struct symbol* nctemp4439=SymLookup(nctemp4433,nctemp4437);
tp =nctemp4439;
int nctemp4440 = (tp ==0);
if(nctemp4440)
{
struct tree* nctemp4445= p;
struct nctempchar1 *nctemp4449;
static struct nctempchar1 nctemp4450 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4449=&nctemp4450;
nctempchar1* nctemp4447= nctemp4449;
nctempchar1* nctemp4451= name;
int nctemp4454=SemSerror(nctemp4445,nctemp4447,nctemp4451);
}
else{
struct symbol* nctemp4459= tp;
struct symbol* nctemp4461=SymGetable(nctemp4459);
tp =nctemp4461;
}
struct symbol* nctemp4466= tp;
struct symbol* nctemp4468=SymMvnext(nctemp4466);
tp =nctemp4468;
int nctemp4469 = (p !=0);
int nctemp4473=nctemp4469;
while(nctemp4473)
{{
struct tree* nctemp4475= p;
struct symbol* nctemp4477= tp;
int nctemp4479=SemArgtype(nctemp4475,nctemp4477);
struct tree* nctemp4484= p;
struct tree* nctemp4486=PtreeMvsister(nctemp4484);
p =nctemp4486;
struct symbol* nctemp4491= tp;
struct symbol* nctemp4493=SymMvnext(nctemp4491);
tp =nctemp4493;
}
int nctemp4494 = (p !=0);
nctemp4473=nctemp4494;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* fname;
struct symbol* fsub;
struct symbol* arg;
struct symbol* argsub;
struct symbol* args;
struct symbol* up;
struct symbol* ftp;
struct symbol* uup;
struct symbol* ltp;
struct symbol* atp;
nctempchar1 *type;
int rank;
struct tree* nctemp4500= p;
struct nctempchar1 *nctemp4504;
static struct nctempchar1 nctemp4505 = {{ 5}, (char*)"fdef\0"};
nctemp4504=&nctemp4505;
nctempchar1* nctemp4502= nctemp4504;
int nctemp4506=PtreeSetname(nctemp4500,nctemp4502);
struct symbol* nctemp4508= tp;
struct nctempchar1 *nctemp4512;
static struct nctempchar1 nctemp4513 = {{ 5}, (char*)"void\0"};
nctemp4512=&nctemp4513;
nctempchar1* nctemp4510= nctemp4512;
int nctemp4514=SymSetforw(nctemp4508,nctemp4510);
struct tree* nctemp4519= p;
struct tree* nctemp4521=PtreeMvchild(nctemp4519);
np =nctemp4521;
struct symbol* nctemp4526=SymMktable();
ltp =nctemp4526;
struct symbol* nctemp4528= ltp;
struct symbol* nctemp4530=SymSetltp(nctemp4528);
struct nctempchar1 *nctemp4537;
static struct nctempchar1 nctemp4538 = {{ 6}, (char*)"#self\0"};
nctemp4537=&nctemp4538;
nctempchar1* nctemp4535= nctemp4537;
struct symbol* nctemp4539= ltp;
struct symbol* nctemp4541=SymMkname(nctemp4535,nctemp4539);
up =nctemp4541;
struct symbol* nctemp4543= up;
struct tree* nctemp4547= p;
nctempchar1* nctemp4549=PtreeGetdef(nctemp4547);
nctempchar1* nctemp4545= nctemp4549;
int nctemp4550=SymSetfunc(nctemp4543,nctemp4545);
struct tree* nctemp4556= np;
nctempchar1* nctemp4558=PtreeGetname(nctemp4556);
nctempchar1* nctemp4554= nctemp4558;
struct nctempchar1 *nctemp4561;
static struct nctempchar1 nctemp4562 = {{ 8}, (char*)"arglist\0"};
nctemp4561=&nctemp4562;
nctempchar1* nctemp4559= nctemp4561;
int nctemp4563=LibeStrcmp(nctemp4554,nctemp4559);
int nctemp4551 = (nctemp4563 ==1);
if(nctemp4551)
{
struct tree* nctemp4569= np;
struct tree* nctemp4571=PtreeMvsister(nctemp4569);
sp =nctemp4571;
}
else{
sp =np;
}
struct tree* nctemp4581= np;
nctempchar1* nctemp4583=PtreeGetname(nctemp4581);
nctempchar1* nctemp4579= nctemp4583;
struct nctempchar1 *nctemp4586;
static struct nctempchar1 nctemp4587 = {{ 8}, (char*)"arglist\0"};
nctemp4586=&nctemp4587;
nctempchar1* nctemp4584= nctemp4586;
int nctemp4588=LibeStrcmp(nctemp4579,nctemp4584);
int nctemp4576 = (nctemp4588 ==1);
if(nctemp4576)
{
struct tree* nctemp4594= np;
struct tree* nctemp4596=PtreeMvchild(nctemp4594);
np =nctemp4596;
struct nctempchar1 *nctemp4603;
static struct nctempchar1 nctemp4604 = {{ 9}, (char*)"#arglist\0"};
nctemp4603=&nctemp4604;
nctempchar1* nctemp4601= nctemp4603;
struct symbol* nctemp4605= ltp;
struct symbol* nctemp4607=SymMkname(nctemp4601,nctemp4605);
up =nctemp4607;
struct symbol* nctemp4612=SymMktable();
ftp =nctemp4612;
struct symbol* nctemp4614= up;
struct symbol* nctemp4616= ftp;
struct symbol* nctemp4618=SymSetable(nctemp4614,nctemp4616);
struct tree* nctemp4620= np;
struct symbol* nctemp4622= ftp;
int nctemp4624=SemDeclarations(nctemp4620,nctemp4622);
}
struct tree* nctemp4626= p;
struct symbol* nctemp4628= tp;
int nctemp4630=SemArgtypes(nctemp4626,nctemp4628);
struct symbol* nctemp4632= tp;
int nctemp4634= 1;
int nctemp4636=SymSetemit(nctemp4632,nctemp4634);
struct tree* nctemp4638= sp;
int nctemp4640=SemCompstmnt(nctemp4638);
struct tree* nctemp4642= p;
struct tree* nctemp4644= sp;
int nctemp4646=SemCopyparallel(nctemp4642,nctemp4644);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4652= p;
struct tree* nctemp4654=PtreeMvchild(nctemp4652);
np =nctemp4654;
struct tree* nctemp4660= np;
nctempchar1* nctemp4662=PtreeGetname(nctemp4660);
nctempchar1* nctemp4658= nctemp4662;
struct nctempchar1 *nctemp4665;
static struct nctempchar1 nctemp4666 = {{ 8}, (char*)"arglist\0"};
nctemp4665=&nctemp4666;
nctempchar1* nctemp4663= nctemp4665;
int nctemp4667=LibeStrcmp(nctemp4658,nctemp4663);
int nctemp4655 = (nctemp4667 ==1);
if(nctemp4655)
{
struct tree* nctemp4673= np;
struct tree* nctemp4675=PtreeMvsister(nctemp4673);
np =nctemp4675;
struct tree* nctemp4680= np;
struct tree* nctemp4682=PtreeMvchild(nctemp4680);
np =nctemp4682;
int nctemp4683 = (np ==0);
if(nctemp4683)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4694= np;
nctempchar1* nctemp4696=PtreeGetname(nctemp4694);
nctempchar1* nctemp4692= nctemp4696;
struct nctempchar1 *nctemp4699;
static struct nctempchar1 nctemp4700 = {{ 10}, (char*)"compstmnt\0"};
nctemp4699=&nctemp4700;
nctempchar1* nctemp4697= nctemp4699;
int nctemp4701=LibeStrcmp(nctemp4692,nctemp4697);
int nctemp4689 = (nctemp4701 ==1);
if(nctemp4689)
{
struct tree* nctemp4707= np;
struct tree* nctemp4709=PtreeMvchild(nctemp4707);
np =nctemp4709;
int nctemp4710 = (np ==0);
if(nctemp4710)
{
return 1;
}
else{
return 0;
}
}
}
}
int SemFdef (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* fname;
struct symbol* fsub;
struct symbol* arg;
struct symbol* argsub;
struct symbol* args;
struct symbol* up;
struct symbol* ftp;
struct symbol* uup;
struct symbol* ltp;
struct symbol* atp;
struct symbol* qp;
nctempchar1 *type;
int rank;
int nobody;
struct tree* nctemp4719= p;
nctempchar1* nctemp4721=PtreeGetarray(nctemp4719);
nctempchar1* nctemp4717= nctemp4721;
struct nctempchar1 *nctemp4724;
static struct nctempchar1 nctemp4725 = {{ 6}, (char*)"array\0"};
nctemp4724=&nctemp4725;
nctempchar1* nctemp4722= nctemp4724;
int nctemp4726=LibeStrcmp(nctemp4717,nctemp4722);
if(nctemp4726)
{
rank =1;
struct tree* nctemp4735= p;
struct tree* nctemp4737=PtreeMvchild(nctemp4735);
np =nctemp4737;
struct tree* nctemp4742= np;
struct tree* nctemp4744=PtreeMvchild(nctemp4742);
sp =nctemp4744;
struct tree* nctemp4749= np;
struct tree* nctemp4751=PtreeMvsister(nctemp4749);
np =nctemp4751;
struct tree* nctemp4759= sp;
struct tree* nctemp4761=PtreeMvsister(nctemp4759);
sp =nctemp4761;
int nctemp4752 = (sp !=0);
int nctemp4763=nctemp4752;
while(nctemp4763)
{{
int nctemp4772 = rank + 1;
rank =nctemp4772;
}
struct tree* nctemp4780= sp;
struct tree* nctemp4782=PtreeMvsister(nctemp4780);
sp =nctemp4782;
int nctemp4773 = (sp !=0);
nctemp4763=nctemp4773;}}
else{
rank =0;
struct tree* nctemp4792= p;
struct tree* nctemp4794=PtreeMvchild(nctemp4792);
np =nctemp4794;
}
struct tree* nctemp4796= p;
int nctemp4798= rank;
int nctemp4800=PtreeSetrank(nctemp4796,nctemp4798);
struct tree* nctemp4802= p;
struct tree* nctemp4804= np;
int nctemp4806=SemCopytype(nctemp4802,nctemp4804);
struct tree* nctemp4808= np;
struct tree* nctemp4812= p;
nctempchar1* nctemp4814=PtreeGetdef(nctemp4812);
nctempchar1* nctemp4810= nctemp4814;
int nctemp4815=PtreeSetype(nctemp4808,nctemp4810);
p =np;
nobody =0;
struct tree* nctemp4827= p;
int nctemp4829=Semisnobody(nctemp4827);
int nctemp4824 = (nctemp4829 ==1);
if(nctemp4824)
{
struct tree* nctemp4832= p;
struct nctempchar1 *nctemp4836;
static struct nctempchar1 nctemp4837 = {{ 5}, (char*)"forw\0"};
nctemp4836=&nctemp4837;
nctempchar1* nctemp4834= nctemp4836;
int nctemp4838=PtreeSetforw(nctemp4832,nctemp4834);
nobody =1;
}
struct tree* nctemp4852= p;
nctempchar1* nctemp4854=PtreeGetdef(nctemp4852);
nctempchar1* nctemp4850= nctemp4854;
struct symbol* nctemp4855= tp;
struct symbol* nctemp4857=SymMkname(nctemp4850,nctemp4855);
fname =nctemp4857;
int nctemp4843 = (fname ==0);
if(nctemp4843)
{
struct tree* nctemp4865= p;
nctempchar1* nctemp4867=PtreeGetdef(nctemp4865);
nctempchar1* nctemp4863= nctemp4867;
struct symbol* nctemp4868= tp;
struct symbol* nctemp4870=SymLookup(nctemp4863,nctemp4868);
qp =nctemp4870;
struct symbol* nctemp4876= qp;
nctempchar1* nctemp4878=SymGetforw(nctemp4876);
nctempchar1* nctemp4874= nctemp4878;
struct nctempchar1 *nctemp4881;
static struct nctempchar1 nctemp4882 = {{ 5}, (char*)"forw\0"};
nctemp4881=&nctemp4882;
nctempchar1* nctemp4879= nctemp4881;
int nctemp4883=LibeStrcmp(nctemp4874,nctemp4879);
int nctemp4871 = (nctemp4883 !=1);
if(nctemp4871)
{
struct tree* nctemp4886= np;
struct nctempchar1 *nctemp4890;
static struct nctempchar1 nctemp4891 = {{ 25}, (char*)"Function already defined\0"};
nctemp4890=&nctemp4891;
nctempchar1* nctemp4888= nctemp4890;
struct tree* nctemp4894= p;
nctempchar1* nctemp4896=PtreeGetdef(nctemp4894);
nctempchar1* nctemp4892= nctemp4896;
int nctemp4897=SemSerror(nctemp4886,nctemp4888,nctemp4892);
}
else{
struct tree* nctemp4899= p;
struct symbol* nctemp4901= qp;
int nctemp4903=SemFdef2(nctemp4899,nctemp4901);
return 1;
}
}
struct symbol* nctemp4906= fname;
struct tree* nctemp4910= p;
nctempchar1* nctemp4912=PtreeGetype(nctemp4910);
nctempchar1* nctemp4908= nctemp4912;
int nctemp4913=SymSetype(nctemp4906,nctemp4908);
struct symbol* nctemp4915= fname;
struct tree* nctemp4919= p;
nctempchar1* nctemp4921=PtreeGetstruct(nctemp4919);
nctempchar1* nctemp4917= nctemp4921;
int nctemp4922=SymSetstruct(nctemp4915,nctemp4917);
struct symbol* nctemp4924= fname;
struct tree* nctemp4928= p;
nctempchar1* nctemp4930=PtreeGetarray(nctemp4928);
nctempchar1* nctemp4926= nctemp4930;
int nctemp4931=SymSetarray(nctemp4924,nctemp4926);
struct symbol* nctemp4933= fname;
struct tree* nctemp4937= p;
int nctemp4939=PtreeGetrank(nctemp4937);
int nctemp4935= nctemp4939;
int nctemp4940=SymSetrank(nctemp4933,nctemp4935);
struct symbol* nctemp4942= fname;
struct nctempchar1 *nctemp4946;
static struct nctempchar1 nctemp4947 = {{ 5}, (char*)"fdef\0"};
nctemp4946=&nctemp4947;
nctempchar1* nctemp4944= nctemp4946;
int nctemp4948=SymSetfunc(nctemp4942,nctemp4944);
int nctemp4949 = (nobody ==1);
if(nctemp4949)
{
struct symbol* nctemp4954= fname;
struct nctempchar1 *nctemp4958;
static struct nctempchar1 nctemp4959 = {{ 5}, (char*)"forw\0"};
nctemp4958=&nctemp4959;
nctempchar1* nctemp4956= nctemp4958;
int nctemp4960=SymSetforw(nctemp4954,nctemp4956);
}
struct tree* nctemp4965= p;
struct tree* nctemp4967=PtreeMvchild(nctemp4965);
np =nctemp4967;
struct symbol* nctemp4972=SymMktable();
ltp =nctemp4972;
struct symbol* nctemp4974= ltp;
struct symbol* nctemp4976=SymSetltp(nctemp4974);
struct nctempchar1 *nctemp4983;
static struct nctempchar1 nctemp4984 = {{ 6}, (char*)"#self\0"};
nctemp4983=&nctemp4984;
nctempchar1* nctemp4981= nctemp4983;
struct symbol* nctemp4985= ltp;
struct symbol* nctemp4987=SymMkname(nctemp4981,nctemp4985);
up =nctemp4987;
struct symbol* nctemp4989= up;
struct tree* nctemp4993= p;
nctempchar1* nctemp4995=PtreeGetdef(nctemp4993);
nctempchar1* nctemp4991= nctemp4995;
int nctemp4996=SymSetfunc(nctemp4989,nctemp4991);
struct tree* nctemp5002= np;
nctempchar1* nctemp5004=PtreeGetname(nctemp5002);
nctempchar1* nctemp5000= nctemp5004;
struct nctempchar1 *nctemp5007;
static struct nctempchar1 nctemp5008 = {{ 8}, (char*)"arglist\0"};
nctemp5007=&nctemp5008;
nctempchar1* nctemp5005= nctemp5007;
int nctemp5009=LibeStrcmp(nctemp5000,nctemp5005);
int nctemp4997 = (nctemp5009 ==1);
if(nctemp4997)
{
struct tree* nctemp5015= np;
struct tree* nctemp5017=PtreeMvsister(nctemp5015);
sp =nctemp5017;
}
else{
sp =np;
}
struct tree* nctemp5027= np;
nctempchar1* nctemp5029=PtreeGetname(nctemp5027);
nctempchar1* nctemp5025= nctemp5029;
struct nctempchar1 *nctemp5032;
static struct nctempchar1 nctemp5033 = {{ 8}, (char*)"arglist\0"};
nctemp5032=&nctemp5033;
nctempchar1* nctemp5030= nctemp5032;
int nctemp5034=LibeStrcmp(nctemp5025,nctemp5030);
int nctemp5022 = (nctemp5034 ==1);
if(nctemp5022)
{
struct tree* nctemp5040= np;
struct tree* nctemp5042=PtreeMvchild(nctemp5040);
np =nctemp5042;
struct nctempchar1 *nctemp5049;
static struct nctempchar1 nctemp5050 = {{ 9}, (char*)"#arglist\0"};
nctemp5049=&nctemp5050;
nctempchar1* nctemp5047= nctemp5049;
struct symbol* nctemp5051= ltp;
struct symbol* nctemp5053=SymMkname(nctemp5047,nctemp5051);
up =nctemp5053;
struct symbol* nctemp5058=SymMktable();
ftp =nctemp5058;
struct symbol* nctemp5060= up;
struct symbol* nctemp5062= ftp;
struct symbol* nctemp5064=SymSetable(nctemp5060,nctemp5062);
struct tree* nctemp5066= np;
struct symbol* nctemp5068= ftp;
int nctemp5070=SemDeclarations(nctemp5066,nctemp5068);
struct symbol* nctemp5075=SymMktable();
fsub =nctemp5075;
struct symbol* nctemp5077= fname;
struct symbol* nctemp5079= fsub;
struct symbol* nctemp5081=SymSetable(nctemp5077,nctemp5079);
struct nctempchar1 *nctemp5088;
static struct nctempchar1 nctemp5089 = {{ 9}, (char*)"#arglist\0"};
nctemp5088=&nctemp5089;
nctempchar1* nctemp5086= nctemp5088;
struct symbol* nctemp5090= fsub;
struct symbol* nctemp5092=SymMkname(nctemp5086,nctemp5090);
arg =nctemp5092;
struct symbol* nctemp5097=SymMktable();
argsub =nctemp5097;
struct symbol* nctemp5099= arg;
struct symbol* nctemp5101= argsub;
struct symbol* nctemp5103=SymSetable(nctemp5099,nctemp5101);
struct symbol* nctemp5105= ftp;
struct symbol* nctemp5107= argsub;
int nctemp5109=SymCpytble(nctemp5105,nctemp5107);
}
struct tree* nctemp5111= sp;
int nctemp5113=SemCompstmnt(nctemp5111);
struct tree* nctemp5115= p;
struct tree* nctemp5117= sp;
int nctemp5119=SemCopyparallel(nctemp5115,nctemp5117);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5124= p;
nctempchar1* nctemp5126=PtreeGetname(nctemp5124);
nctempchar1* nctemp5122= nctemp5126;
struct nctempchar1 *nctemp5129;
static struct nctempchar1 nctemp5130 = {{ 8}, (char*)"extdecl\0"};
nctemp5129=&nctemp5130;
nctempchar1* nctemp5127= nctemp5129;
int nctemp5131=LibeStrcmp(nctemp5122,nctemp5127);
if(nctemp5131)
{
struct tree* nctemp5136= p;
struct tree* nctemp5138=PtreeMvchild(nctemp5136);
np =nctemp5138;
struct tree* nctemp5140= np;
struct nctempchar1 *nctemp5144;
static struct nctempchar1 nctemp5145 = {{ 7}, (char*)"global\0"};
nctemp5144=&nctemp5145;
nctempchar1* nctemp5142= nctemp5144;
int nctemp5146=PtreeSetglobal(nctemp5140,nctemp5142);
struct tree* nctemp5152= np;
nctempchar1* nctemp5154=PtreeGetname(nctemp5152);
nctempchar1* nctemp5150= nctemp5154;
struct nctempchar1 *nctemp5157;
static struct nctempchar1 nctemp5158 = {{ 7}, (char*)"import\0"};
nctemp5157=&nctemp5158;
nctempchar1* nctemp5155= nctemp5157;
int nctemp5159=LibeStrcmp(nctemp5150,nctemp5155);
int nctemp5147 = (nctemp5159 ==1);
if(nctemp5147)
{
struct tree* nctemp5162= np;
struct symbol* nctemp5166=SymGetetp();
struct symbol* nctemp5164= nctemp5166;
int nctemp5167=SemImport(nctemp5162,nctemp5164);
return 1;
}
int nctemp5169 = (np !=0);
int nctemp5173=nctemp5169;
while(nctemp5173)
{{
struct tree* nctemp5178= np;
struct tree* nctemp5180=PtreeMvchild(nctemp5178);
sp =nctemp5180;
struct tree* nctemp5184= np;
nctempchar1* nctemp5186=PtreeGetarray(nctemp5184);
nctempchar1* nctemp5182= nctemp5186;
struct nctempchar1 *nctemp5189;
static struct nctempchar1 nctemp5190 = {{ 6}, (char*)"array\0"};
nctemp5189=&nctemp5190;
nctempchar1* nctemp5187= nctemp5189;
int nctemp5191=LibeStrcmp(nctemp5182,nctemp5187);
if(nctemp5191)
{
struct tree* nctemp5196= sp;
struct tree* nctemp5198=PtreeMvsister(nctemp5196);
sp =nctemp5198;
}
struct tree* nctemp5202= sp;
nctempchar1* nctemp5204=PtreeGetname(nctemp5202);
nctempchar1* nctemp5200= nctemp5204;
struct nctempchar1 *nctemp5207;
static struct nctempchar1 nctemp5208 = {{ 10}, (char*)"structdec\0"};
nctemp5207=&nctemp5208;
nctempchar1* nctemp5205= nctemp5207;
int nctemp5209=LibeStrcmp(nctemp5200,nctemp5205);
if(nctemp5209)
{
struct tree* nctemp5211= np;
struct symbol* nctemp5215=SymGetetp();
struct symbol* nctemp5213= nctemp5215;
int nctemp5216=SemStructdecl(nctemp5211,nctemp5213);
}
else{
struct tree* nctemp5220= sp;
nctempchar1* nctemp5222=PtreeGetname(nctemp5220);
nctempchar1* nctemp5218= nctemp5222;
struct nctempchar1 *nctemp5225;
static struct nctempchar1 nctemp5226 = {{ 5}, (char*)"fdef\0"};
nctemp5225=&nctemp5226;
nctempchar1* nctemp5223= nctemp5225;
int nctemp5227=LibeStrcmp(nctemp5218,nctemp5223);
if(nctemp5227)
{
struct tree* nctemp5229= np;
struct symbol* nctemp5233=SymGetetp();
struct symbol* nctemp5231= nctemp5233;
int nctemp5234=SemFdef(nctemp5229,nctemp5231);
}
else{
struct tree* nctemp5236= np;
struct symbol* nctemp5240=SymGetetp();
struct symbol* nctemp5238= nctemp5240;
int nctemp5241=SemDeclaration(nctemp5236,nctemp5238);
}
}
struct tree* nctemp5246= np;
struct tree* nctemp5248=PtreeMvsister(nctemp5246);
np =nctemp5248;
}
int nctemp5249 = (np !=0);
nctemp5173=nctemp5249;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5255= tp;
struct symbol* nctemp5257=SymSetetp(nctemp5255);
ltp =0;
struct symbol* nctemp5263= ltp;
struct symbol* nctemp5265=SymSetltp(nctemp5263);
struct tree* nctemp5267= p;
int nctemp5269=SemExtdecl(nctemp5267);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5279= p;
struct tree* nctemp5281=PtreeMvchild(nctemp5279);
p =nctemp5281;
struct tree* nctemp5283= p;
struct tree* nctemp5285=SemExpr(nctemp5283);
struct tree* nctemp5287= p;
int nctemp5289= 1;
int nctemp5291=PtreeSetopexpr(nctemp5287,nctemp5289);
struct tree* nctemp5296= p;
struct tree* nctemp5298=PtreeMvsister(nctemp5296);
p =nctemp5298;
struct tree* nctemp5300= p;
int nctemp5302=SemStmnt(nctemp5300);
struct tree* nctemp5304= q;
struct tree* nctemp5306= p;
int nctemp5308=SemCopyparallel(nctemp5304,nctemp5306);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5318= p;
struct tree* nctemp5320=PtreeMvchild(nctemp5318);
p =nctemp5320;
struct tree* nctemp5322= p;
struct tree* nctemp5324=SemExpr(nctemp5322);
struct tree* nctemp5326= p;
int nctemp5328= 1;
int nctemp5330=PtreeSetopexpr(nctemp5326,nctemp5328);
struct tree* nctemp5335= p;
struct tree* nctemp5337=PtreeMvsister(nctemp5335);
p =nctemp5337;
struct tree* nctemp5339= p;
struct tree* nctemp5341=SemExpr(nctemp5339);
struct tree* nctemp5343= p;
int nctemp5345= 1;
int nctemp5347=PtreeSetopexpr(nctemp5343,nctemp5345);
struct tree* nctemp5352= p;
struct tree* nctemp5354=PtreeMvsister(nctemp5352);
p =nctemp5354;
struct tree* nctemp5356= p;
struct tree* nctemp5358=SemExpr(nctemp5356);
struct tree* nctemp5360= p;
int nctemp5362= 1;
int nctemp5364=PtreeSetopexpr(nctemp5360,nctemp5362);
struct tree* nctemp5369= p;
struct tree* nctemp5371=PtreeMvsister(nctemp5369);
p =nctemp5371;
struct tree* nctemp5373= p;
int nctemp5375=SemStmnt(nctemp5373);
struct tree* nctemp5377= q;
struct tree* nctemp5379= p;
int nctemp5381=SemCopyparallel(nctemp5377,nctemp5379);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank =0;
struct tree* nctemp5391= p;
struct tree* nctemp5393=PtreeMvchild(nctemp5391);
sp =nctemp5393;
struct tree* nctemp5398= sp;
struct tree* nctemp5400=PtreeMvchild(nctemp5398);
sp =nctemp5400;
int nctemp5401 = (sp !=0);
int nctemp5405=nctemp5401;
while(nctemp5405)
{{
struct tree* nctemp5410= sp;
struct tree* nctemp5412=PtreeMvchild(nctemp5410);
rp =nctemp5412;
struct tree* nctemp5414= rp;
struct tree* nctemp5416=SemExpr(nctemp5414);
struct tree* nctemp5418= rp;
int nctemp5420= 1;
int nctemp5422=PtreeSetopexpr(nctemp5418,nctemp5420);
struct tree* nctemp5427= rp;
struct tree* nctemp5429=PtreeMvsister(nctemp5427);
rp =nctemp5429;
struct tree* nctemp5431= rp;
struct tree* nctemp5433=SemExpr(nctemp5431);
struct tree* nctemp5435= rp;
int nctemp5437= 1;
int nctemp5439=PtreeSetopexpr(nctemp5435,nctemp5437);
struct tree* nctemp5447= rp;
struct tree* nctemp5449=PtreeMvsister(nctemp5447);
rp =nctemp5449;
int nctemp5440 = (rp !=0);
if(nctemp5440)
{
struct tree* nctemp5452= rp;
struct tree* nctemp5454=SemExpr(nctemp5452);
struct tree* nctemp5456= rp;
int nctemp5458= 1;
int nctemp5460=PtreeSetopexpr(nctemp5456,nctemp5458);
}
struct tree* nctemp5464= sp;
struct tree* nctemp5466=PtreeMvsister(nctemp5464);
int nctemp5461 = (nctemp5466 !=0);
if(nctemp5461)
{
struct tree* nctemp5472= sp;
struct tree* nctemp5474=PtreeMvsister(nctemp5472);
rp =nctemp5474;
}
struct tree* nctemp5479= sp;
struct tree* nctemp5481=PtreeMvsister(nctemp5479);
sp =nctemp5481;
int nctemp5490 = rank + 1;
rank =nctemp5490;
}
int nctemp5491 = (sp !=0);
nctemp5405=nctemp5491;}struct tree* nctemp5496= p;
int nctemp5498= rank;
int nctemp5500=PtreeSetrank(nctemp5496,nctemp5498);
struct tree* nctemp5505= p;
struct tree* nctemp5507=PtreeMvchild(nctemp5505);
sp =nctemp5507;
struct tree* nctemp5512= sp;
struct tree* nctemp5514=PtreeMvsister(nctemp5512);
sp =nctemp5514;
struct tree* nctemp5516= sp;
int nctemp5518=SemStmnt(nctemp5516);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5528= p;
struct tree* nctemp5530=PtreeMvchild(nctemp5528);
p =nctemp5530;
struct tree* nctemp5532= p;
struct tree* nctemp5534=SemExpr(nctemp5532);
struct tree* nctemp5536= p;
int nctemp5538= 1;
int nctemp5540=PtreeSetopexpr(nctemp5536,nctemp5538);
struct tree* nctemp5545= p;
struct tree* nctemp5547=PtreeMvsister(nctemp5545);
p =nctemp5547;
struct tree* nctemp5549= p;
int nctemp5551=SemStmnt(nctemp5549);
struct tree* nctemp5553= q;
struct tree* nctemp5555= p;
int nctemp5557=SemCopyparallel(nctemp5553,nctemp5555);
struct tree* nctemp5565= p;
struct tree* nctemp5567=PtreeMvsister(nctemp5565);
p =nctemp5567;
int nctemp5558 = (p !=0);
if(nctemp5558)
{
struct tree* nctemp5572= p;
nctempchar1* nctemp5574=PtreeGetname(nctemp5572);
nctempchar1* nctemp5570= nctemp5574;
struct nctempchar1 *nctemp5577;
static struct nctempchar1 nctemp5578 = {{ 5}, (char*)"else\0"};
nctemp5577=&nctemp5578;
nctempchar1* nctemp5575= nctemp5577;
int nctemp5579=LibeStrcmp(nctemp5570,nctemp5575);
if(nctemp5579)
{
struct tree* nctemp5584= p;
struct tree* nctemp5586=PtreeMvchild(nctemp5584);
p =nctemp5586;
struct tree* nctemp5588= p;
int nctemp5590=SemStmnt(nctemp5588);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5596= p;
struct tree* nctemp5598=PtreeMvchild(nctemp5596);
sp =nctemp5598;
int nctemp5599 = (sp !=0);
if(nctemp5599)
{
struct tree* nctemp5604= sp;
struct tree* nctemp5606=SemExpr(nctemp5604);
struct tree* nctemp5608= sp;
int nctemp5610= 1;
int nctemp5612=PtreeSetopexpr(nctemp5608,nctemp5610);
struct nctempchar1 *nctemp5619;
static struct nctempchar1 nctemp5620 = {{ 6}, (char*)"#self\0"};
nctemp5619=&nctemp5620;
nctempchar1* nctemp5617= nctemp5619;
struct symbol* nctemp5623=SymGetltp();
struct symbol* nctemp5621= nctemp5623;
struct symbol* nctemp5624=SymLookup(nctemp5617,nctemp5621);
up =nctemp5624;
struct symbol* nctemp5631= up;
nctempchar1* nctemp5633=SymGetfunc(nctemp5631);
nctempchar1* nctemp5629= nctemp5633;
struct symbol* nctemp5634=SymLook(nctemp5629);
up =nctemp5634;
struct tree* nctemp5636= p;
struct symbol* nctemp5640= up;
nctempchar1* nctemp5642=SymGetype(nctemp5640);
nctempchar1* nctemp5638= nctemp5642;
int nctemp5643=PtreeSetype(nctemp5636,nctemp5638);
struct tree* nctemp5645= p;
struct symbol* nctemp5649= up;
nctempchar1* nctemp5651=SymGetstruct(nctemp5649);
nctempchar1* nctemp5647= nctemp5651;
int nctemp5652=PtreeSetstruct(nctemp5645,nctemp5647);
struct tree* nctemp5654= p;
struct symbol* nctemp5658= up;
nctempchar1* nctemp5660=SymGetarray(nctemp5658);
nctempchar1* nctemp5656= nctemp5660;
int nctemp5661=PtreeSetarray(nctemp5654,nctemp5656);
struct tree* nctemp5663= p;
struct tree* nctemp5667= sp;
nctempchar1* nctemp5669=PtreeGetref(nctemp5667);
nctempchar1* nctemp5665= nctemp5669;
int nctemp5670=PtreeSetref(nctemp5663,nctemp5665);
struct tree* nctemp5672= p;
struct symbol* nctemp5676= up;
int nctemp5678=SymGetrank(nctemp5676);
int nctemp5674= nctemp5678;
int nctemp5679=PtreeSetrank(nctemp5672,nctemp5674);
struct tree* nctemp5683= p;
struct tree* nctemp5685= sp;
int nctemp5687=SemComparetype(nctemp5683,nctemp5685);
int nctemp5680 = (nctemp5687 ==0);
if(nctemp5680)
{
struct tree* nctemp5690= p;
struct nctempchar1 *nctemp5694;
static struct nctempchar1 nctemp5695 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5694=&nctemp5695;
nctempchar1* nctemp5692= nctemp5694;
struct nctempchar1 *nctemp5698;
static struct nctempchar1 nctemp5699 = {{ 2}, (char*)" \0"};
nctemp5698=&nctemp5699;
nctempchar1* nctemp5696= nctemp5698;
int nctemp5700=SemSerror(nctemp5690,nctemp5692,nctemp5696);
}
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5713= p;
nctempchar1* nctemp5715=PtreeGetname(nctemp5713);
nctempchar1* nctemp5711= nctemp5715;
struct nctempchar1 *nctemp5718;
static struct nctempchar1 nctemp5719 = {{ 13}, (char*)"declarations\0"};
nctemp5718=&nctemp5719;
nctempchar1* nctemp5716= nctemp5718;
int nctemp5720=LibeStrcmp(nctemp5711,nctemp5716);
if(nctemp5720)
{
struct tree* nctemp5722= p;
struct symbol* nctemp5726=SymGetltp();
struct symbol* nctemp5724= nctemp5726;
int nctemp5727=SemDeclarations(nctemp5722,nctemp5724);
struct tree* nctemp5732= p;
struct tree* nctemp5734=PtreeMvsister(nctemp5732);
p =nctemp5734;
}
int nctemp5735 = (p !=0);
int nctemp5739=nctemp5735;
while(nctemp5739)
{{
struct tree* nctemp5743= p;
nctempchar1* nctemp5745=PtreeGetname(nctemp5743);
nctempchar1* nctemp5741= nctemp5745;
struct nctempchar1 *nctemp5748;
static struct nctempchar1 nctemp5749 = {{ 5}, (char*)"expr\0"};
nctemp5748=&nctemp5749;
nctempchar1* nctemp5746= nctemp5748;
int nctemp5750=LibeStrcmp(nctemp5741,nctemp5746);
if(nctemp5750)
{
struct tree* nctemp5752= p;
struct tree* nctemp5754=SemExpr(nctemp5752);
struct tree* nctemp5756= p;
int nctemp5758= 1;
int nctemp5760=PtreeSetopexpr(nctemp5756,nctemp5758);
}
struct tree* nctemp5764= p;
nctempchar1* nctemp5766=PtreeGetname(nctemp5764);
nctempchar1* nctemp5762= nctemp5766;
struct nctempchar1 *nctemp5769;
static struct nctempchar1 nctemp5770 = {{ 10}, (char*)"compstmnt\0"};
nctemp5769=&nctemp5770;
nctempchar1* nctemp5767= nctemp5769;
int nctemp5771=LibeStrcmp(nctemp5762,nctemp5767);
if(nctemp5771)
{
struct tree* nctemp5773= p;
int nctemp5775=SemCompstmnt(nctemp5773);
}
struct tree* nctemp5779= p;
nctempchar1* nctemp5781=PtreeGetname(nctemp5779);
nctempchar1* nctemp5777= nctemp5781;
struct nctempchar1 *nctemp5784;
static struct nctempchar1 nctemp5785 = {{ 6}, (char*)"while\0"};
nctemp5784=&nctemp5785;
nctempchar1* nctemp5782= nctemp5784;
int nctemp5786=LibeStrcmp(nctemp5777,nctemp5782);
if(nctemp5786)
{
struct tree* nctemp5788= p;
int nctemp5790=SemWhilestmnt(nctemp5788);
}
struct tree* nctemp5794= p;
nctempchar1* nctemp5796=PtreeGetname(nctemp5794);
nctempchar1* nctemp5792= nctemp5796;
struct nctempchar1 *nctemp5799;
static struct nctempchar1 nctemp5800 = {{ 4}, (char*)"for\0"};
nctemp5799=&nctemp5800;
nctempchar1* nctemp5797= nctemp5799;
int nctemp5801=LibeStrcmp(nctemp5792,nctemp5797);
if(nctemp5801)
{
struct tree* nctemp5803= p;
int nctemp5805=SemForstmnt(nctemp5803);
}
struct tree* nctemp5809= p;
nctempchar1* nctemp5811=PtreeGetname(nctemp5809);
nctempchar1* nctemp5807= nctemp5811;
struct nctempchar1 *nctemp5814;
static struct nctempchar1 nctemp5815 = {{ 9}, (char*)"parallel\0"};
nctemp5814=&nctemp5815;
nctempchar1* nctemp5812= nctemp5814;
int nctemp5816=LibeStrcmp(nctemp5807,nctemp5812);
if(nctemp5816)
{
parflag =1;
}
struct tree* nctemp5824= p;
nctempchar1* nctemp5826=PtreeGetname(nctemp5824);
nctempchar1* nctemp5822= nctemp5826;
struct nctempchar1 *nctemp5829;
static struct nctempchar1 nctemp5830 = {{ 3}, (char*)"if\0"};
nctemp5829=&nctemp5830;
nctempchar1* nctemp5827= nctemp5829;
int nctemp5831=LibeStrcmp(nctemp5822,nctemp5827);
if(nctemp5831)
{
struct tree* nctemp5833= p;
int nctemp5835=SemIfstmnt(nctemp5833);
}
struct tree* nctemp5839= p;
nctempchar1* nctemp5841=PtreeGetname(nctemp5839);
nctempchar1* nctemp5837= nctemp5841;
struct nctempchar1 *nctemp5844;
static struct nctempchar1 nctemp5845 = {{ 7}, (char*)"return\0"};
nctemp5844=&nctemp5845;
nctempchar1* nctemp5842= nctemp5844;
int nctemp5846=LibeStrcmp(nctemp5837,nctemp5842);
if(nctemp5846)
{
struct tree* nctemp5848= p;
int nctemp5850=SemReturnstmnt(nctemp5848);
}
struct tree* nctemp5855= p;
struct tree* nctemp5857=PtreeMvsister(nctemp5855);
p =nctemp5857;
}
int nctemp5858 = (p !=0);
nctemp5739=nctemp5858;}int nctemp5862 = (parflag ==1);
if(nctemp5862)
{
struct tree* nctemp5867= q;
struct nctempchar1 *nctemp5871;
static struct nctempchar1 nctemp5872 = {{ 9}, (char*)"parallel\0"};
nctemp5871=&nctemp5872;
nctempchar1* nctemp5869= nctemp5871;
int nctemp5873=PtreeSetparallel(nctemp5867,nctemp5869);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5887= p;
struct tree* nctemp5889=PtreeMvchild(nctemp5887);
p =nctemp5889;
int nctemp5890 = (p ==0);
if(nctemp5890)
{
return 1;
}
struct tree* nctemp5898= p;
nctempchar1* nctemp5900=PtreeGetname(nctemp5898);
nctempchar1* nctemp5896= nctemp5900;
struct nctempchar1 *nctemp5903;
static struct nctempchar1 nctemp5904 = {{ 13}, (char*)"declarations\0"};
nctemp5903=&nctemp5904;
nctempchar1* nctemp5901= nctemp5903;
int nctemp5905=LibeStrcmp(nctemp5896,nctemp5901);
if(nctemp5905)
{
struct tree* nctemp5909= p;
struct tree* nctemp5911=PtreeMvchild(nctemp5909);
struct tree* nctemp5907= nctemp5911;
struct symbol* nctemp5914=SymGetltp();
struct symbol* nctemp5912= nctemp5914;
int nctemp5915=SemDeclarations(nctemp5907,nctemp5912);
struct tree* nctemp5920= p;
struct tree* nctemp5922=PtreeMvsister(nctemp5920);
p =nctemp5922;
}
int nctemp5923 = (p !=0);
int nctemp5927=nctemp5923;
while(nctemp5927)
{{
struct tree* nctemp5931= p;
nctempchar1* nctemp5933=PtreeGetname(nctemp5931);
nctempchar1* nctemp5929= nctemp5933;
struct nctempchar1 *nctemp5936;
static struct nctempchar1 nctemp5937 = {{ 5}, (char*)"expr\0"};
nctemp5936=&nctemp5937;
nctempchar1* nctemp5934= nctemp5936;
int nctemp5938=LibeStrcmp(nctemp5929,nctemp5934);
if(nctemp5938)
{
struct tree* nctemp5940= p;
struct tree* nctemp5942=SemExpr(nctemp5940);
struct tree* nctemp5944= p;
int nctemp5946= 1;
int nctemp5948=PtreeSetopexpr(nctemp5944,nctemp5946);
}
struct tree* nctemp5952= p;
nctempchar1* nctemp5954=PtreeGetname(nctemp5952);
nctempchar1* nctemp5950= nctemp5954;
struct nctempchar1 *nctemp5957;
static struct nctempchar1 nctemp5958 = {{ 6}, (char*)"while\0"};
nctemp5957=&nctemp5958;
nctempchar1* nctemp5955= nctemp5957;
int nctemp5959=LibeStrcmp(nctemp5950,nctemp5955);
if(nctemp5959)
{
struct tree* nctemp5961= p;
int nctemp5963=SemWhilestmnt(nctemp5961);
}
struct tree* nctemp5967= p;
nctempchar1* nctemp5969=PtreeGetname(nctemp5967);
nctempchar1* nctemp5965= nctemp5969;
struct nctempchar1 *nctemp5972;
static struct nctempchar1 nctemp5973 = {{ 4}, (char*)"for\0"};
nctemp5972=&nctemp5973;
nctempchar1* nctemp5970= nctemp5972;
int nctemp5974=LibeStrcmp(nctemp5965,nctemp5970);
if(nctemp5974)
{
struct tree* nctemp5976= p;
int nctemp5978=SemForstmnt(nctemp5976);
}
struct tree* nctemp5982= p;
nctempchar1* nctemp5984=PtreeGetname(nctemp5982);
nctempchar1* nctemp5980= nctemp5984;
struct nctempchar1 *nctemp5987;
static struct nctempchar1 nctemp5988 = {{ 9}, (char*)"parallel\0"};
nctemp5987=&nctemp5988;
nctempchar1* nctemp5985= nctemp5987;
int nctemp5989=LibeStrcmp(nctemp5980,nctemp5985);
if(nctemp5989)
{
struct tree* nctemp5991= p;
int nctemp5993=SemParallelstmnt(nctemp5991);
struct tree* nctemp5995= p;
struct nctempchar1 *nctemp5999;
static struct nctempchar1 nctemp6000 = {{ 9}, (char*)"parallel\0"};
nctemp5999=&nctemp6000;
nctempchar1* nctemp5997= nctemp5999;
int nctemp6001=PtreeSetparallel(nctemp5995,nctemp5997);
}
struct tree* nctemp6005= p;
nctempchar1* nctemp6007=PtreeGetname(nctemp6005);
nctempchar1* nctemp6003= nctemp6007;
struct nctempchar1 *nctemp6010;
static struct nctempchar1 nctemp6011 = {{ 3}, (char*)"if\0"};
nctemp6010=&nctemp6011;
nctempchar1* nctemp6008= nctemp6010;
int nctemp6012=LibeStrcmp(nctemp6003,nctemp6008);
if(nctemp6012)
{
struct tree* nctemp6014= p;
int nctemp6016=SemIfstmnt(nctemp6014);
}
struct tree* nctemp6020= p;
nctempchar1* nctemp6022=PtreeGetname(nctemp6020);
nctempchar1* nctemp6018= nctemp6022;
struct nctempchar1 *nctemp6025;
static struct nctempchar1 nctemp6026 = {{ 7}, (char*)"return\0"};
nctemp6025=&nctemp6026;
nctempchar1* nctemp6023= nctemp6025;
int nctemp6027=LibeStrcmp(nctemp6018,nctemp6023);
if(nctemp6027)
{
struct tree* nctemp6029= p;
int nctemp6031=SemReturnstmnt(nctemp6029);
}
struct tree* nctemp6035= p;
nctempchar1* nctemp6037=PtreeGetparallel(nctemp6035);
nctempchar1* nctemp6033= nctemp6037;
struct nctempchar1 *nctemp6040;
static struct nctempchar1 nctemp6041 = {{ 9}, (char*)"parallel\0"};
nctemp6040=&nctemp6041;
nctempchar1* nctemp6038= nctemp6040;
int nctemp6042=LibeStrcmp(nctemp6033,nctemp6038);
if(nctemp6042)
{
parflag =1;
}
struct tree* nctemp6051= p;
struct tree* nctemp6053=PtreeMvsister(nctemp6051);
p =nctemp6053;
}
int nctemp6054 = (p !=0);
nctemp5927=nctemp6054;}int nctemp6058 = (parflag ==1);
if(nctemp6058)
{
struct tree* nctemp6063= q;
struct nctempchar1 *nctemp6067;
static struct nctempchar1 nctemp6068 = {{ 9}, (char*)"parallel\0"};
nctemp6067=&nctemp6068;
nctempchar1* nctemp6065= nctemp6067;
int nctemp6069=PtreeSetparallel(nctemp6063,nctemp6065);
}
return 1;
}
}
