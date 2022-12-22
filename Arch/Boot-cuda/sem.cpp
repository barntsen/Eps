/*  Translated by epsc  version December 2021 */
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
extern "C" {
#include <stdlib.h>
#include <string.h>
}
#define NBLOCKS 256
#define NTHREADS 64000
void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
struct nctempMainArg1 {int d[1]; struct MainArg *a; } ;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
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
int LibeClock ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
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
int emit;
struct symbol* tbl;
struct symbol* next;
struct symbol* last;
};
struct nctempsymbol1 {int d[1]; struct symbol *a; } ;
struct nctempsymbol2 {int d[2]; struct symbol *a; } ;
struct nctempsymbol3 {int d[3]; struct symbol *a; } ;
struct nctempsymbol4 {int d[4]; struct symbol *a; } ;
struct symbol* SymGetetp ();
struct symbol* SymSetetp (struct symbol* etp);
struct symbol* SymGetltp ();
struct symbol* SymSetltp (struct symbol* etp);
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* etp);
struct symbol* SymMktable ();
struct symbol* SymSetable (struct symbol* np,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp);
int SymRmtable (struct symbol* p);
int SymRmsubtables (struct symbol* p);
nctempchar1* SymGetname (struct symbol* np);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
int SymSetype (struct symbol* np,nctempchar1 *type);
nctempchar1* SymGetype (struct symbol* np);
int SymSetident (struct symbol* np,nctempchar1 *ident);
nctempchar1* SymGetident (struct symbol* np);
int SymSetlval (struct symbol* np,nctempchar1 *lval);
nctempchar1* SymGetlval (struct symbol* np);
int SymSetref (struct symbol* np,nctempchar1 *ref);
nctempchar1* SymGetref (struct symbol* np);
int SymSetfunc (struct symbol* np,nctempchar1 *func);
nctempchar1* SymGetfunc (struct symbol* np);
int SymSetarray (struct symbol* np,nctempchar1 *array);
nctempchar1* SymGetarray (struct symbol* np);
int SymSetrank (struct symbol* np,int rank);
int SymGetrank (struct symbol* np);
int SymSetemit (struct symbol* np,int emit);
int SymGetemit (struct symbol* np);
int SymSetstruct (struct symbol* np,nctempchar1 *structure);
nctempchar1* SymGetstruct (struct symbol* np);
int SymSetdescr (struct symbol* np,nctempchar1 *descr);
nctempchar1* SymGetdescr (struct symbol* np);
int SymSetglobal (struct symbol* np,nctempchar1 *descr);
nctempchar1* SymGetglobal (struct symbol* np);
struct symbol* SymMvnext (struct symbol* np);
struct symbol* SymLook (nctempchar1 *name);
int SymPrsym (struct symbol* p,int level);
int SymCpytble (struct symbol* tp,struct symbol* up);
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
nctempchar1 *ref;
int rank;
int simple;
int topexpr;
nctempchar1 *descr;
struct tree* child;
struct tree* sister;
};
struct nctemptree1 {int d[1]; struct tree *a; } ;
struct nctemptree2 {int d[2]; struct tree *a; } ;
struct nctemptree3 {int d[3]; struct tree *a; } ;
struct nctemptree4 {int d[4]; struct tree *a; } ;
int PtreeInit ();
int PtreeRmtree (struct tree* p);
int PtreeRmnode (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1* PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *def);
nctempchar1* PtreeGetdef (struct tree* p);
int PtreeSetype (struct tree* p,nctempchar1 *type);
nctempchar1* PtreeGetype (struct tree* p);
int PtreeSetstruct (struct tree* p,nctempchar1 *structure);
nctempchar1* PtreeGetstruct (struct tree* p);
int PtreeSetempr (struct tree* p,nctempchar1 *tempr);
nctempchar1* PtreeGetempr (struct tree* p);
int PtreeSetempi (struct tree* p,nctempchar1 *tempi);
nctempchar1* PtreeGetempi (struct tree* p);
int PtreeGetline (struct tree* p);
int PtreeSetline (struct tree* p,int line);
nctempchar1* PtreeGetfile (struct tree* p);
int PtreeSetrank (struct tree* p,int rank);
int PtreeGetrank (struct tree* p);
int PtreeSetlval (struct tree* p,nctempchar1 *lval);
nctempchar1* PtreeGetlval (struct tree* p);
int PtreeSetarray (struct tree* p,nctempchar1 *array);
nctempchar1* PtreeGetarray (struct tree* p);
int PtreeSetparallel (struct tree* p,nctempchar1 *paral);
nctempchar1* PtreeGetparallel (struct tree* p);
int PtreeSetref (struct tree* p,nctempchar1 *ref);
nctempchar1* PtreeGetref (struct tree* p);
int PtreeSetdescr (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetdescr (struct tree* p);
int PtreeSetglobal (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetglobal (struct tree* p);
int PtreeSetopexpr (struct tree* p,int topexpr);
int PtreeGetopexpr (struct tree* p);
int PtreeSetsimple (struct tree* p,int simple);
int PtreeGetsimple (struct tree* p);
int PtreePrtree (struct tree* p,int level);
int ErrError (nctempchar1 *s);
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int ErrPanic (nctempchar1 *s);
int SemInit ();
int SemSem (struct tree* p,struct symbol* tp);
int SemExtdecl (struct tree* p);
int SemStructdecl (struct tree* p,struct symbol* tp);
int SemFdecl (struct tree* p,struct symbol* tp);
int SemDeclarations (struct tree* p,struct symbol* tp);
int SemDeclaration (struct tree* p,struct symbol* tp);
int SemCompstmnt (struct tree* p);
int SemStmnt (struct tree* p);
int SemWhilestmnt (struct tree* p);
int SemForstmnt (struct tree* p);
int SemParallelstmnt (struct tree* p);
int SemIfstmnt (struct tree* p);
int SemReturnstmnt (struct tree* p);
struct tree* SemExprlist (struct tree* p);
struct tree* SemExpr (struct tree* p);
struct tree* SemBinexpr (struct tree* p);
struct tree* SemAsgexpr (struct tree* p);
struct tree* SemRelexpr (struct tree* p);
struct tree* SemAddexpr (struct tree* p);
struct tree* SemUnexpr (struct tree* p);
struct tree* SemPrimexpr (struct tree* p);
int SemId (struct tree* p);
int SemFcall (struct tree* p);
int SemStructure (struct tree* p,struct symbol* tp);
int SemArray (struct tree* p,struct symbol* tp);
int SemCast (struct tree* p);
int SemNew (struct tree* p);
int SemDelete (struct tree* p);
int SemLen (struct tree* p);
int SemSizeof (struct tree* p);
int SemCmplx (struct tree* p);
int SemRe (struct tree* p);
int SemIm (struct tree* p);
int SemCopytype (struct tree* p,struct tree* np);
int SemCopyparallel (struct tree* p,struct tree* np);
int SemComparetype (struct tree* p,struct tree* np);
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp2= tp;
struct symbol* nctemp4=SymSetetp(nctemp2);
ltp =0;
struct symbol* nctemp10= ltp;
struct symbol* nctemp12=SymSetltp(nctemp10);
struct tree* nctemp14= p;
int nctemp16=SemExtdecl(nctemp14);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp21= p;
nctempchar1* nctemp23=PtreeGetname(nctemp21);
nctempchar1* nctemp19= nctemp23;
struct nctempchar1 *nctemp26;
struct nctempchar1 nctemp27 = {{ 8}, (char*)"extdecl"};
nctemp26=&nctemp27;
nctempchar1* nctemp24= nctemp26;
int nctemp28=LibeStrcmp(nctemp19,nctemp24);
if(nctemp28)
{
struct tree* nctemp33= p;
struct tree* nctemp35=PtreeMvchild(nctemp33);
np =nctemp35;
struct tree* nctemp37= np;
struct nctempchar1 *nctemp41;
struct nctempchar1 nctemp42 = {{ 7}, (char*)"global"};
nctemp41=&nctemp42;
nctempchar1* nctemp39= nctemp41;
int nctemp43=PtreeSetglobal(nctemp37,nctemp39);
int nctemp44 = (np !=0);
int nctemp48=nctemp44;
while(nctemp48)
{{
struct tree* nctemp53= np;
struct tree* nctemp55=PtreeMvchild(nctemp53);
sp =nctemp55;
struct tree* nctemp59= np;
nctempchar1* nctemp61=PtreeGetarray(nctemp59);
nctempchar1* nctemp57= nctemp61;
struct nctempchar1 *nctemp64;
struct nctempchar1 nctemp65 = {{ 6}, (char*)"array"};
nctemp64=&nctemp65;
nctempchar1* nctemp62= nctemp64;
int nctemp66=LibeStrcmp(nctemp57,nctemp62);
if(nctemp66)
{
struct tree* nctemp71= sp;
struct tree* nctemp73=PtreeMvsister(nctemp71);
sp =nctemp73;
}
struct tree* nctemp77= sp;
nctempchar1* nctemp79=PtreeGetname(nctemp77);
nctempchar1* nctemp75= nctemp79;
struct nctempchar1 *nctemp82;
struct nctempchar1 nctemp83 = {{ 10}, (char*)"structdec"};
nctemp82=&nctemp83;
nctempchar1* nctemp80= nctemp82;
int nctemp84=LibeStrcmp(nctemp75,nctemp80);
if(nctemp84)
{
struct tree* nctemp86= np;
struct symbol* nctemp90=SymGetetp();
struct symbol* nctemp88= nctemp90;
int nctemp91=SemStructdecl(nctemp86,nctemp88);
}
else{
struct tree* nctemp95= sp;
nctempchar1* nctemp97=PtreeGetname(nctemp95);
nctempchar1* nctemp93= nctemp97;
struct nctempchar1 *nctemp100;
struct nctempchar1 nctemp101 = {{ 6}, (char*)"fdecl"};
nctemp100=&nctemp101;
nctempchar1* nctemp98= nctemp100;
int nctemp102=LibeStrcmp(nctemp93,nctemp98);
if(nctemp102)
{
struct tree* nctemp104= np;
struct symbol* nctemp108=SymGetetp();
struct symbol* nctemp106= nctemp108;
int nctemp109=SemFdecl(nctemp104,nctemp106);
}
else{
struct tree* nctemp111= np;
struct symbol* nctemp115=SymGetetp();
struct symbol* nctemp113= nctemp115;
int nctemp116=SemDeclaration(nctemp111,nctemp113);
}
}
struct tree* nctemp121= np;
struct tree* nctemp123=PtreeMvsister(nctemp121);
np =nctemp123;
}
int nctemp124 = (np !=0);
nctemp48=nctemp124;}}
return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp134= p;
nctempchar1* nctemp136=PtreeGetdef(nctemp134);
structure=nctemp136;
struct tree* nctemp141= p;
struct tree* nctemp143=PtreeMvchild(nctemp141);
p =nctemp143;
struct tree* nctemp148= p;
struct tree* nctemp150=PtreeMvchild(nctemp148);
p =nctemp150;
struct tree* nctemp154= p;
nctempchar1* nctemp156=PtreeGetname(nctemp154);
nctempchar1* nctemp152= nctemp156;
struct nctempchar1 *nctemp159;
struct nctempchar1 nctemp160 = {{ 13}, (char*)"declarations"};
nctemp159=&nctemp160;
nctempchar1* nctemp157= nctemp159;
int nctemp161=LibeStrcmp(nctemp152,nctemp157);
if(nctemp161)
{
struct symbol* nctemp166=SymMktable();
up =nctemp166;
nctempchar1* nctemp174= structure;
struct symbol* nctemp177= tp;
struct symbol* nctemp179=SymMkname(nctemp174,nctemp177);
uup =nctemp179;
int nctemp167 = (uup ==0);
if(nctemp167)
{
struct tree* nctemp182= p;
struct nctempchar1 *nctemp186;
struct nctempchar1 nctemp187 = {{ 21}, (char*)"Multiple declaration"};
nctemp186=&nctemp187;
nctempchar1* nctemp184= nctemp186;
nctempchar1* nctemp188= structure;
int nctemp191=ErrSerror(nctemp182,nctemp184,nctemp188);
}
else{
struct symbol* nctemp193= uup;
struct symbol* nctemp195= up;
struct symbol* nctemp197=SymSetable(nctemp193,nctemp195);
struct symbol* nctemp199= uup;
struct nctempchar1 *nctemp203;
struct nctempchar1 nctemp204 = {{ 10}, (char*)"structdef"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
int nctemp205=SymSetstruct(nctemp199,nctemp201);
struct symbol* nctemp207= uup;
nctempchar1* nctemp209= structure;
int nctemp212=SymSetype(nctemp207,nctemp209);
struct tree* nctemp216= p;
struct tree* nctemp218=PtreeMvchild(nctemp216);
struct tree* nctemp214= nctemp218;
struct symbol* nctemp219= up;
int nctemp221=SemDeclarations(nctemp214,nctemp219);
}
}
return 1;
}
int SemFdecl (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct tree* tmp;
struct symbol* up;
struct symbol* uup;
struct symbol* ltp;
nctempchar1 *type;
int rank;
struct tree* nctemp226= p;
nctempchar1* nctemp228=PtreeGetarray(nctemp226);
nctempchar1* nctemp224= nctemp228;
struct nctempchar1 *nctemp231;
struct nctempchar1 nctemp232 = {{ 6}, (char*)"array"};
nctemp231=&nctemp232;
nctempchar1* nctemp229= nctemp231;
int nctemp233=LibeStrcmp(nctemp224,nctemp229);
if(nctemp233)
{
rank =1;
struct tree* nctemp242= p;
struct tree* nctemp244=PtreeMvchild(nctemp242);
np =nctemp244;
struct tree* nctemp249= np;
struct tree* nctemp251=PtreeMvchild(nctemp249);
sp =nctemp251;
struct tree* nctemp256= np;
struct tree* nctemp258=PtreeMvsister(nctemp256);
np =nctemp258;
struct tree* nctemp266= sp;
struct tree* nctemp268=PtreeMvsister(nctemp266);
sp =nctemp268;
int nctemp259 = (sp !=0);
int nctemp270=nctemp259;
while(nctemp270)
{{
int nctemp279 = rank + 1;
rank =nctemp279;
}
struct tree* nctemp287= sp;
struct tree* nctemp289=PtreeMvsister(nctemp287);
sp =nctemp289;
int nctemp280 = (sp !=0);
nctemp270=nctemp280;}}
else{
rank =0;
struct tree* nctemp299= p;
struct tree* nctemp301=PtreeMvchild(nctemp299);
np =nctemp301;
}
struct tree* nctemp303= p;
int nctemp305= rank;
int nctemp307=PtreeSetrank(nctemp303,nctemp305);
struct tree* nctemp309= p;
struct tree* nctemp311= np;
int nctemp313=SemCopytype(nctemp309,nctemp311);
struct tree* nctemp315= np;
struct tree* nctemp319= p;
nctempchar1* nctemp321=PtreeGetdef(nctemp319);
nctempchar1* nctemp317= nctemp321;
int nctemp322=PtreeSetype(nctemp315,nctemp317);
p =np;
struct tree* nctemp331= p;
struct tree* nctemp333=PtreeMvchild(nctemp331);
np =nctemp333;
struct tree* nctemp337= np;
nctempchar1* nctemp339=PtreeGetname(nctemp337);
nctempchar1* nctemp335= nctemp339;
struct nctempchar1 *nctemp342;
struct nctempchar1 nctemp343 = {{ 8}, (char*)"arglist"};
nctemp342=&nctemp343;
nctempchar1* nctemp340= nctemp342;
int nctemp344=LibeStrcmp(nctemp335,nctemp340);
if(nctemp344)
{
struct tree* nctemp349= np;
struct tree* nctemp351=PtreeMvchild(nctemp349);
tmp =nctemp351;
}
else{
tmp =0;
}
struct tree* nctemp360= np;
struct tree* nctemp362=PtreeMvsister(nctemp360);
sp =nctemp362;
int nctemp363 = (sp ==0);
if(nctemp363)
{
sp =np;
np =0;
}
else{
struct tree* nctemp379= np;
struct tree* nctemp381=PtreeMvchild(nctemp379);
np =nctemp381;
}
struct tree* nctemp385= sp;
struct tree* nctemp387=PtreeMvchild(nctemp385);
int nctemp382 = (nctemp387 ==0);
if(nctemp382)
{
struct tree* nctemp398= p;
nctempchar1* nctemp400=PtreeGetdef(nctemp398);
nctempchar1* nctemp396= nctemp400;
struct symbol* nctemp401= tp;
struct symbol* nctemp403=SymMkname(nctemp396,nctemp401);
up =nctemp403;
int nctemp389 = (up ==0);
if(nctemp389)
{
struct tree* nctemp406= np;
struct nctempchar1 *nctemp410;
struct nctempchar1 nctemp411 = {{ 40}, (char*)"Multiple function prototype declaration"};
nctemp410=&nctemp411;
nctempchar1* nctemp408= nctemp410;
struct tree* nctemp414= p;
nctempchar1* nctemp416=PtreeGetdef(nctemp414);
nctempchar1* nctemp412= nctemp416;
int nctemp417=ErrSerror(nctemp406,nctemp408,nctemp412);
}
struct symbol* nctemp419= up;
struct tree* nctemp423= p;
nctempchar1* nctemp425=PtreeGetype(nctemp423);
nctempchar1* nctemp421= nctemp425;
int nctemp426=SymSetype(nctemp419,nctemp421);
struct symbol* nctemp428= up;
struct tree* nctemp432= p;
nctempchar1* nctemp434=PtreeGetstruct(nctemp432);
nctempchar1* nctemp430= nctemp434;
int nctemp435=SymSetstruct(nctemp428,nctemp430);
struct symbol* nctemp437= up;
struct tree* nctemp441= p;
nctempchar1* nctemp443=PtreeGetarray(nctemp441);
nctempchar1* nctemp439= nctemp443;
int nctemp444=SymSetarray(nctemp437,nctemp439);
struct symbol* nctemp446= up;
struct tree* nctemp450= p;
int nctemp452=PtreeGetrank(nctemp450);
int nctemp448= nctemp452;
int nctemp453=SymSetrank(nctemp446,nctemp448);
struct symbol* nctemp455= up;
struct nctempchar1 *nctemp459;
struct nctempchar1 nctemp460 = {{ 6}, (char*)"fdecl"};
nctemp459=&nctemp460;
nctempchar1* nctemp457= nctemp459;
int nctemp461=SymSetfunc(nctemp455,nctemp457);
struct symbol* nctemp466=SymMktable();
ltp =nctemp466;
struct symbol* nctemp468= up;
struct symbol* nctemp470= ltp;
struct symbol* nctemp472=SymSetable(nctemp468,nctemp470);
struct nctempchar1 *nctemp479;
struct nctempchar1 nctemp480 = {{ 9}, (char*)"#arglist"};
nctemp479=&nctemp480;
nctempchar1* nctemp477= nctemp479;
struct symbol* nctemp481= ltp;
struct symbol* nctemp483=SymMkname(nctemp477,nctemp481);
up =nctemp483;
struct symbol* nctemp488=SymMktable();
uup =nctemp488;
struct symbol* nctemp490= up;
struct symbol* nctemp492= uup;
struct symbol* nctemp494=SymSetable(nctemp490,nctemp492);
int nctemp495 = (np !=0);
if(nctemp495)
{
struct tree* nctemp500= np;
struct symbol* nctemp502= uup;
int nctemp504=SemDeclarations(nctemp500,nctemp502);
}
struct nctempchar1 *nctemp511;
struct nctempchar1 nctemp512 = {{ 6}, (char*)"#self"};
nctemp511=&nctemp512;
nctempchar1* nctemp509= nctemp511;
struct symbol* nctemp513= ltp;
struct symbol* nctemp515=SymMkname(nctemp509,nctemp513);
up =nctemp515;
struct symbol* nctemp517= up;
struct tree* nctemp521= p;
nctempchar1* nctemp523=PtreeGetdef(nctemp521);
nctempchar1* nctemp519= nctemp523;
int nctemp524=SymSetfunc(nctemp517,nctemp519);
struct symbol* nctemp526= up;
int nctemp528= 0;
int nctemp530=SymSetemit(nctemp526,nctemp528);
}
else{
struct tree* nctemp540= p;
nctempchar1* nctemp542=PtreeGetdef(nctemp540);
nctempchar1* nctemp538= nctemp542;
struct symbol* nctemp543= tp;
struct symbol* nctemp545=SymLookup(nctemp538,nctemp543);
up =nctemp545;
int nctemp531 = (up ==0);
if(nctemp531)
{
struct tree* nctemp548= p;
struct nctempchar1 *nctemp552;
struct nctempchar1 nctemp553 = {{ 20}, (char*)"Undeclared function"};
nctemp552=&nctemp553;
nctempchar1* nctemp550= nctemp552;
struct tree* nctemp556= p;
nctempchar1* nctemp558=PtreeGetdef(nctemp556);
nctempchar1* nctemp554= nctemp558;
int nctemp559=ErrSerror(nctemp548,nctemp550,nctemp554);
}
else{
struct symbol* nctemp563= up;
nctempchar1* nctemp565=SymGetfunc(nctemp563);
nctempchar1* nctemp561= nctemp565;
struct nctempchar1 *nctemp568;
struct nctempchar1 nctemp569 = {{ 5}, (char*)"fdef"};
nctemp568=&nctemp569;
nctempchar1* nctemp566= nctemp568;
int nctemp570=LibeStrcmp(nctemp561,nctemp566);
if(nctemp570)
{
struct tree* nctemp572= p;
struct nctempchar1 *nctemp576;
struct nctempchar1 nctemp577 = {{ 25}, (char*)"Redefinition of function"};
nctemp576=&nctemp577;
nctempchar1* nctemp574= nctemp576;
struct tree* nctemp580= p;
nctempchar1* nctemp582=PtreeGetdef(nctemp580);
nctempchar1* nctemp578= nctemp582;
int nctemp583=ErrSerror(nctemp572,nctemp574,nctemp578);
}
}
struct symbol* nctemp589= up;
nctempchar1* nctemp591=SymGetype(nctemp589);
nctempchar1* nctemp587= nctemp591;
struct tree* nctemp594= p;
nctempchar1* nctemp596=PtreeGetype(nctemp594);
nctempchar1* nctemp592= nctemp596;
int nctemp597=LibeStrcmp(nctemp587,nctemp592);
int nctemp584 = (nctemp597 ==0);
if(nctemp584)
{
struct tree* nctemp600= p;
struct nctempchar1 *nctemp604;
struct nctempchar1 nctemp605 = {{ 41}, (char*)"Function type does not match declaration"};
nctemp604=&nctemp605;
nctempchar1* nctemp602= nctemp604;
struct tree* nctemp608= p;
nctempchar1* nctemp610=PtreeGetdef(nctemp608);
nctempchar1* nctemp606= nctemp610;
int nctemp611=ErrSerror(nctemp600,nctemp602,nctemp606);
}
struct symbol* nctemp617= up;
nctempchar1* nctemp619=SymGetarray(nctemp617);
nctempchar1* nctemp615= nctemp619;
struct tree* nctemp622= p;
nctempchar1* nctemp624=PtreeGetarray(nctemp622);
nctempchar1* nctemp620= nctemp624;
int nctemp625=LibeStrcmp(nctemp615,nctemp620);
int nctemp612 = (nctemp625 ==0);
if(nctemp612)
{
struct tree* nctemp628= p;
struct nctempchar1 *nctemp632;
struct nctempchar1 nctemp633 = {{ 41}, (char*)"Function type does not match declaration"};
nctemp632=&nctemp633;
nctempchar1* nctemp630= nctemp632;
struct tree* nctemp636= p;
nctempchar1* nctemp638=PtreeGetdef(nctemp636);
nctempchar1* nctemp634= nctemp638;
int nctemp639=ErrSerror(nctemp628,nctemp630,nctemp634);
}
struct symbol* nctemp641= up;
struct nctempchar1 *nctemp645;
struct nctempchar1 nctemp646 = {{ 5}, (char*)"fdef"};
nctemp645=&nctemp646;
nctempchar1* nctemp643= nctemp645;
int nctemp647=SymSetfunc(nctemp641,nctemp643);
struct tree* nctemp649= p;
struct nctempchar1 *nctemp653;
struct nctempchar1 nctemp654 = {{ 5}, (char*)"fdef"};
nctemp653=&nctemp654;
nctempchar1* nctemp651= nctemp653;
int nctemp655=PtreeSetname(nctemp649,nctemp651);
struct symbol* nctemp660= up;
struct symbol* nctemp662=SymGetable(nctemp660);
up =nctemp662;
struct symbol* nctemp664= up;
struct symbol* nctemp666=SymSetltp(nctemp664);
int nctemp667 = (up !=0);
if(nctemp667)
{
struct nctempchar1 *nctemp677;
struct nctempchar1 nctemp678 = {{ 9}, (char*)"#arglist"};
nctemp677=&nctemp678;
nctempchar1* nctemp675= nctemp677;
struct symbol* nctemp679= up;
struct symbol* nctemp681=SymLookup(nctemp675,nctemp679);
uup =nctemp681;
}
int nctemp682 = (uup !=0);
if(nctemp682)
{
struct symbol* nctemp690= uup;
struct symbol* nctemp692=SymGetable(nctemp690);
uup =nctemp692;
}
int nctemp693 = (np !=0);
int nctemp697=nctemp693;
while(nctemp697)
{{
struct symbol* nctemp702= uup;
struct symbol* nctemp704=SymMvnext(nctemp702);
uup =nctemp704;
int nctemp705 = (uup ==0);
if(nctemp705)
{
struct tree* nctemp710= p;
struct nctempchar1 *nctemp714;
struct nctempchar1 nctemp715 = {{ 47}, (char*)"Function definition does not match declaration"};
nctemp714=&nctemp715;
nctempchar1* nctemp712= nctemp714;
struct tree* nctemp718= p;
nctempchar1* nctemp720=PtreeGetdef(nctemp718);
nctempchar1* nctemp716= nctemp720;
int nctemp721=ErrSerror(nctemp710,nctemp712,nctemp716);
}
struct symbol* nctemp727= uup;
nctempchar1* nctemp729=SymGetype(nctemp727);
type=nctemp729;
struct tree* nctemp731= np;
struct tree* nctemp735= np;
nctempchar1* nctemp737=PtreeGetdef(nctemp735);
nctempchar1* nctemp733= nctemp737;
int nctemp738=PtreeSetype(nctemp731,nctemp733);
nctempchar1* nctemp742= type;
struct tree* nctemp747= np;
nctempchar1* nctemp749=PtreeGetype(nctemp747);
nctempchar1* nctemp745= nctemp749;
int nctemp750=LibeStrcmp(nctemp742,nctemp745);
int nctemp739 = (nctemp750 ==0);
if(nctemp739)
{
struct tree* nctemp753= p;
struct nctempchar1 *nctemp757;
struct nctempchar1 nctemp758 = {{ 47}, (char*)"Function definition does not match declaration"};
nctemp757=&nctemp758;
nctempchar1* nctemp755= nctemp757;
struct tree* nctemp761= p;
nctempchar1* nctemp763=PtreeGetdef(nctemp761);
nctempchar1* nctemp759= nctemp763;
int nctemp764=ErrSerror(nctemp753,nctemp755,nctemp759);
}
struct symbol* nctemp770= uup;
nctempchar1* nctemp772=SymGetarray(nctemp770);
nctempchar1* nctemp768= nctemp772;
struct tree* nctemp775= np;
nctempchar1* nctemp777=PtreeGetarray(nctemp775);
nctempchar1* nctemp773= nctemp777;
int nctemp778=LibeStrcmp(nctemp768,nctemp773);
int nctemp765 = (nctemp778 ==0);
if(nctemp765)
{
struct tree* nctemp781= p;
struct nctempchar1 *nctemp785;
struct nctempchar1 nctemp786 = {{ 47}, (char*)"Function definition does not match declaration"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
struct tree* nctemp789= p;
nctempchar1* nctemp791=PtreeGetdef(nctemp789);
nctempchar1* nctemp787= nctemp791;
int nctemp792=ErrSerror(nctemp781,nctemp783,nctemp787);
}
struct tree* nctemp797= np;
struct tree* nctemp799=PtreeMvsister(nctemp797);
np =nctemp799;
}
int nctemp800 = (np !=0);
nctemp697=nctemp800;}struct symbol* nctemp807= uup;
struct symbol* nctemp809=SymMvnext(nctemp807);
int nctemp804 = (nctemp809 !=0);
if(nctemp804)
{
struct tree* nctemp812= p;
struct nctempchar1 *nctemp816;
struct nctempchar1 nctemp817 = {{ 47}, (char*)"Function definition does not match declaration"};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
struct tree* nctemp820= p;
nctempchar1* nctemp822=PtreeGetdef(nctemp820);
nctempchar1* nctemp818= nctemp822;
int nctemp823=ErrSerror(nctemp812,nctemp814,nctemp818);
}
struct symbol* nctemp827=SymGetltp();
int nctemp824 = (nctemp827 !=0);
if(nctemp824)
{
struct nctempchar1 *nctemp835;
struct nctempchar1 nctemp836 = {{ 9}, (char*)"#arglist"};
nctemp835=&nctemp836;
nctempchar1* nctemp833= nctemp835;
struct symbol* nctemp839=SymGetltp();
struct symbol* nctemp837= nctemp839;
struct symbol* nctemp840=SymLookup(nctemp833,nctemp837);
up =nctemp840;
}
int nctemp841 = (up !=0);
if(nctemp841)
{
struct symbol* nctemp849= up;
struct symbol* nctemp851=SymGetable(nctemp849);
uup =nctemp851;
struct symbol* nctemp853= uup;
int nctemp855=SymRmtable(nctemp853);
struct symbol* nctemp860=SymMktable();
uup =nctemp860;
struct symbol* nctemp862= up;
struct symbol* nctemp864= uup;
struct symbol* nctemp866=SymSetable(nctemp862,nctemp864);
int nctemp867 = (tmp !=0);
if(nctemp867)
{
struct tree* nctemp872= tmp;
struct symbol* nctemp874= uup;
int nctemp876=SemDeclarations(nctemp872,nctemp874);
}
}
struct tree* nctemp878= sp;
int nctemp880=SemCompstmnt(nctemp878);
struct tree* nctemp882= p;
struct tree* nctemp884= sp;
int nctemp886=SemCopyparallel(nctemp882,nctemp884);
}
return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp888 = (p !=0);
int nctemp892=nctemp888;
while(nctemp892)
{{
struct tree* nctemp894= p;
struct symbol* nctemp896= tp;
int nctemp898=SemDeclaration(nctemp894,nctemp896);
struct tree* nctemp903= p;
struct tree* nctemp905=PtreeMvsister(nctemp903);
p =nctemp905;
}
int nctemp906 = (p !=0);
nctemp892=nctemp906;}return 1;
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
struct tree* nctemp912= p;
struct tree* nctemp916= p;
nctempchar1* nctemp918=PtreeGetdef(nctemp916);
nctempchar1* nctemp914= nctemp918;
int nctemp919=PtreeSetype(nctemp912,nctemp914);
struct tree* nctemp925= p;
nctempchar1* nctemp927=PtreeGetglobal(nctemp925);
global=nctemp927;
rank =0;
struct tree* nctemp935= p;
nctempchar1* nctemp937=PtreeGetarray(nctemp935);
nctempchar1* nctemp933= nctemp937;
struct nctempchar1 *nctemp940;
struct nctempchar1 nctemp941 = {{ 6}, (char*)"array"};
nctemp940=&nctemp941;
nctempchar1* nctemp938= nctemp940;
int nctemp942=LibeStrcmp(nctemp933,nctemp938);
if(nctemp942)
{
struct tree* nctemp947= p;
struct tree* nctemp949=PtreeMvchild(nctemp947);
np =nctemp949;
struct tree* nctemp954= np;
struct tree* nctemp956=PtreeMvchild(nctemp954);
np =nctemp956;
rank =1;
struct tree* nctemp968= np;
struct tree* nctemp970=PtreeMvsister(nctemp968);
np =nctemp970;
int nctemp961 = (np !=0);
int nctemp972=nctemp961;
while(nctemp972)
{{
int nctemp981 = rank + 1;
rank =nctemp981;
}
struct tree* nctemp989= np;
struct tree* nctemp991=PtreeMvsister(nctemp989);
np =nctemp991;
int nctemp982 = (np !=0);
nctemp972=nctemp982;}struct tree* nctemp997= p;
struct tree* nctemp999=PtreeMvchild(nctemp997);
np =nctemp999;
struct tree* nctemp1004= np;
struct tree* nctemp1006=PtreeMvsister(nctemp1004);
np =nctemp1006;
}
else{
struct tree* nctemp1011= p;
struct tree* nctemp1013=PtreeMvchild(nctemp1011);
np =nctemp1013;
}
int nctemp1014 = (np !=0);
int nctemp1018=nctemp1014;
while(nctemp1018)
{{
struct tree* nctemp1020= np;
struct tree* nctemp1024= p;
nctempchar1* nctemp1026=PtreeGetype(nctemp1024);
nctempchar1* nctemp1022= nctemp1026;
int nctemp1027=PtreeSetype(nctemp1020,nctemp1022);
struct tree* nctemp1037= np;
nctempchar1* nctemp1039=PtreeGetdef(nctemp1037);
nctempchar1* nctemp1035= nctemp1039;
struct symbol* nctemp1040= tp;
struct symbol* nctemp1042=SymMkname(nctemp1035,nctemp1040);
up =nctemp1042;
int nctemp1028 = (up ==0);
if(nctemp1028)
{
struct tree* nctemp1045= np;
struct nctempchar1 *nctemp1049;
struct nctempchar1 nctemp1050 = {{ 21}, (char*)"Multiple declaration"};
nctemp1049=&nctemp1050;
nctempchar1* nctemp1047= nctemp1049;
struct tree* nctemp1053= np;
nctempchar1* nctemp1055=PtreeGetdef(nctemp1053);
nctempchar1* nctemp1051= nctemp1055;
int nctemp1056=ErrSerror(nctemp1045,nctemp1047,nctemp1051);
}
else{
struct symbol* nctemp1058= up;
struct nctempchar1 *nctemp1062;
struct nctempchar1 nctemp1063 = {{ 11}, (char*)"identifier"};
nctemp1062=&nctemp1063;
nctempchar1* nctemp1060= nctemp1062;
int nctemp1064=SymSetident(nctemp1058,nctemp1060);
struct symbol* nctemp1066= up;
struct tree* nctemp1070= p;
nctempchar1* nctemp1072=PtreeGetype(nctemp1070);
nctempchar1* nctemp1068= nctemp1072;
int nctemp1073=SymSetype(nctemp1066,nctemp1068);
nctempchar1* nctemp1077= global;
struct nctempchar1 *nctemp1082;
struct nctempchar1 nctemp1083 = {{ 7}, (char*)"global"};
nctemp1082=&nctemp1083;
nctempchar1* nctemp1080= nctemp1082;
int nctemp1084=LibeStrcmp(nctemp1077,nctemp1080);
int nctemp1074 = (nctemp1084 ==1);
if(nctemp1074)
{
struct symbol* nctemp1087= up;
struct nctempchar1 *nctemp1091;
struct nctempchar1 nctemp1092 = {{ 7}, (char*)"global"};
nctemp1091=&nctemp1092;
nctempchar1* nctemp1089= nctemp1091;
int nctemp1093=SymSetglobal(nctemp1087,nctemp1089);
}
struct tree* nctemp1099= p;
nctempchar1* nctemp1101=PtreeGetype(nctemp1099);
nctempchar1* nctemp1097= nctemp1101;
struct nctempchar1 *nctemp1104;
struct nctempchar1 nctemp1105 = {{ 6}, (char*)"const"};
nctemp1104=&nctemp1105;
nctempchar1* nctemp1102= nctemp1104;
int nctemp1106=LibeStrcmp(nctemp1097,nctemp1102);
int nctemp1094 = (nctemp1106 ==1);
if(nctemp1094)
{
struct tree* nctemp1112= np;
struct tree* nctemp1114=PtreeMvchild(nctemp1112);
sp =nctemp1114;
struct tree* nctemp1119= sp;
struct tree* nctemp1121=PtreeMvchild(nctemp1119);
sp =nctemp1121;
struct tree* nctemp1127= sp;
nctempchar1* nctemp1129=PtreeGetname(nctemp1127);
nctempchar1* nctemp1125= nctemp1129;
struct nctempchar1 *nctemp1132;
struct nctempchar1 nctemp1133 = {{ 7}, (char*)"unexpr"};
nctemp1132=&nctemp1133;
nctempchar1* nctemp1130= nctemp1132;
int nctemp1134=LibeStrcmp(nctemp1125,nctemp1130);
int nctemp1122 = (nctemp1134 ==1);
if(nctemp1122)
{
struct tree* nctemp1140= sp;
struct tree* nctemp1142=PtreeMvchild(nctemp1140);
sp =nctemp1142;
struct tree* nctemp1155= sp;
nctempchar1* nctemp1157=PtreeGetdef(nctemp1155);
nctempchar1* nctemp1153= nctemp1157;
int nctemp1158=LibeStrlen(nctemp1153);
int nctemp1160 = nctemp1158 + 1;
int nctemp1162 = nctemp1160 + 3;
l =nctemp1162;
int nctemp1169=l;
nctempchar1 *nctemp1168;
nctemp1168=(nctempchar1*)GpuNew(sizeof(nctempchar1));
nctemp1168->d[0]=l;
nctemp1168->a=(char *)GpuNew(sizeof(char)*nctemp1169);
s=nctemp1168;
struct nctempchar1 *nctemp1175;
struct nctempchar1 nctemp1176 = {{ 3}, (char*)"(-"};
nctemp1175=&nctemp1176;
nctempchar1* nctemp1173= nctemp1175;
nctempchar1* nctemp1177= s;
int nctemp1180=LibeStrcpy(nctemp1173,nctemp1177);
struct tree* nctemp1184= sp;
nctempchar1* nctemp1186=PtreeGetdef(nctemp1184);
nctempchar1* nctemp1182= nctemp1186;
nctempchar1* nctemp1187= s;
int nctemp1190=LibeStrcat(nctemp1182,nctemp1187);
struct nctempchar1 *nctemp1194;
struct nctempchar1 nctemp1195 = {{ 2}, (char*)")"};
nctemp1194=&nctemp1195;
nctempchar1* nctemp1192= nctemp1194;
nctempchar1* nctemp1196= s;
int nctemp1199=LibeStrcat(nctemp1192,nctemp1196);
struct tree* nctemp1201= sp;
nctempchar1* nctemp1203= s;
int nctemp1206=PtreeSetdef(nctemp1201,nctemp1203);
GpuDelete(s->a);
}
struct symbol* nctemp1211= up;
struct tree* nctemp1215= sp;
nctempchar1* nctemp1217=PtreeGetname(nctemp1215);
nctempchar1* nctemp1213= nctemp1217;
int nctemp1218=SymSetype(nctemp1211,nctemp1213);
struct symbol* nctemp1220= up;
struct tree* nctemp1224= sp;
nctempchar1* nctemp1226=PtreeGetdef(nctemp1224);
nctempchar1* nctemp1222= nctemp1226;
int nctemp1227=SymSetdescr(nctemp1220,nctemp1222);
struct symbol* nctemp1229= up;
int nctemp1231= 0;
int nctemp1233=SymSetemit(nctemp1229,nctemp1231);
}
struct symbol* nctemp1235= up;
struct nctempchar1 *nctemp1239;
struct nctempchar1 nctemp1240 = {{ 5}, (char*)"lval"};
nctemp1239=&nctemp1240;
nctempchar1* nctemp1237= nctemp1239;
int nctemp1241=SymSetlval(nctemp1235,nctemp1237);
struct tree* nctemp1245= p;
nctempchar1* nctemp1247=PtreeGetstruct(nctemp1245);
nctempchar1* nctemp1243= nctemp1247;
struct nctempchar1 *nctemp1250;
struct nctempchar1 nctemp1251 = {{ 7}, (char*)"struct"};
nctemp1250=&nctemp1251;
nctempchar1* nctemp1248= nctemp1250;
int nctemp1252=LibeStrcmp(nctemp1243,nctemp1248);
if(nctemp1252)
{
struct tree* nctemp1258= p;
nctempchar1* nctemp1260=PtreeGetype(nctemp1258);
nctempchar1* nctemp1256= nctemp1260;
struct symbol* nctemp1263=SymGetetp();
struct symbol* nctemp1261= nctemp1263;
struct symbol* nctemp1264=SymLookup(nctemp1256,nctemp1261);
int nctemp1253 = (nctemp1264 ==0);
if(nctemp1253)
{
struct tree* nctemp1267= p;
struct nctempchar1 *nctemp1271;
struct nctempchar1 nctemp1272 = {{ 20}, (char*)"Undefined structure"};
nctemp1271=&nctemp1272;
nctempchar1* nctemp1269= nctemp1271;
struct tree* nctemp1275= p;
nctempchar1* nctemp1277=PtreeGetype(nctemp1275);
nctempchar1* nctemp1273= nctemp1277;
int nctemp1278=ErrSerror(nctemp1267,nctemp1269,nctemp1273);
}
struct symbol* nctemp1280= up;
struct tree* nctemp1284= p;
nctempchar1* nctemp1286=PtreeGetstruct(nctemp1284);
nctempchar1* nctemp1282= nctemp1286;
int nctemp1287=SymSetstruct(nctemp1280,nctemp1282);
}
struct symbol* nctemp1289= up;
struct tree* nctemp1293= p;
nctempchar1* nctemp1295=PtreeGetarray(nctemp1293);
nctempchar1* nctemp1291= nctemp1295;
int nctemp1296=SymSetarray(nctemp1289,nctemp1291);
struct symbol* nctemp1298= up;
int nctemp1300= rank;
int nctemp1302=SymSetrank(nctemp1298,nctemp1300);
struct tree* nctemp1304= np;
int nctemp1306= rank;
int nctemp1308=PtreeSetrank(nctemp1304,nctemp1306);
}
struct tree* nctemp1313= np;
struct tree* nctemp1315=PtreeMvsister(nctemp1313);
np =nctemp1315;
}
int nctemp1316 = (np !=0);
nctemp1018=nctemp1316;}return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp1329= p;
struct tree* nctemp1331=PtreeMvchild(nctemp1329);
p =nctemp1331;
struct tree* nctemp1335= p;
nctempchar1* nctemp1337=PtreeGetname(nctemp1335);
nctempchar1* nctemp1333= nctemp1337;
struct nctempchar1 *nctemp1340;
struct nctempchar1 nctemp1341 = {{ 13}, (char*)"declarations"};
nctemp1340=&nctemp1341;
nctempchar1* nctemp1338= nctemp1340;
int nctemp1342=LibeStrcmp(nctemp1333,nctemp1338);
if(nctemp1342)
{
struct tree* nctemp1346= p;
struct tree* nctemp1348=PtreeMvchild(nctemp1346);
struct tree* nctemp1344= nctemp1348;
struct symbol* nctemp1351=SymGetltp();
struct symbol* nctemp1349= nctemp1351;
int nctemp1352=SemDeclarations(nctemp1344,nctemp1349);
struct tree* nctemp1357= p;
struct tree* nctemp1359=PtreeMvsister(nctemp1357);
p =nctemp1359;
}
int nctemp1360 = (p !=0);
int nctemp1364=nctemp1360;
while(nctemp1364)
{{
struct tree* nctemp1368= p;
nctempchar1* nctemp1370=PtreeGetname(nctemp1368);
nctempchar1* nctemp1366= nctemp1370;
struct nctempchar1 *nctemp1373;
struct nctempchar1 nctemp1374 = {{ 5}, (char*)"expr"};
nctemp1373=&nctemp1374;
nctempchar1* nctemp1371= nctemp1373;
int nctemp1375=LibeStrcmp(nctemp1366,nctemp1371);
if(nctemp1375)
{
struct tree* nctemp1377= p;
struct tree* nctemp1379=SemExpr(nctemp1377);
struct tree* nctemp1381= p;
int nctemp1383= 1;
int nctemp1385=PtreeSetopexpr(nctemp1381,nctemp1383);
}
struct tree* nctemp1389= p;
nctempchar1* nctemp1391=PtreeGetname(nctemp1389);
nctempchar1* nctemp1387= nctemp1391;
struct nctempchar1 *nctemp1394;
struct nctempchar1 nctemp1395 = {{ 6}, (char*)"while"};
nctemp1394=&nctemp1395;
nctempchar1* nctemp1392= nctemp1394;
int nctemp1396=LibeStrcmp(nctemp1387,nctemp1392);
if(nctemp1396)
{
struct tree* nctemp1398= p;
int nctemp1400=SemWhilestmnt(nctemp1398);
}
struct tree* nctemp1404= p;
nctempchar1* nctemp1406=PtreeGetname(nctemp1404);
nctempchar1* nctemp1402= nctemp1406;
struct nctempchar1 *nctemp1409;
struct nctempchar1 nctemp1410 = {{ 4}, (char*)"for"};
nctemp1409=&nctemp1410;
nctempchar1* nctemp1407= nctemp1409;
int nctemp1411=LibeStrcmp(nctemp1402,nctemp1407);
if(nctemp1411)
{
struct tree* nctemp1413= p;
int nctemp1415=SemForstmnt(nctemp1413);
}
struct tree* nctemp1419= p;
nctempchar1* nctemp1421=PtreeGetname(nctemp1419);
nctempchar1* nctemp1417= nctemp1421;
struct nctempchar1 *nctemp1424;
struct nctempchar1 nctemp1425 = {{ 9}, (char*)"parallel"};
nctemp1424=&nctemp1425;
nctempchar1* nctemp1422= nctemp1424;
int nctemp1426=LibeStrcmp(nctemp1417,nctemp1422);
if(nctemp1426)
{
struct tree* nctemp1428= p;
int nctemp1430=SemParallelstmnt(nctemp1428);
struct tree* nctemp1432= q;
struct nctempchar1 *nctemp1436;
struct nctempchar1 nctemp1437 = {{ 9}, (char*)"parallel"};
nctemp1436=&nctemp1437;
nctempchar1* nctemp1434= nctemp1436;
int nctemp1438=PtreeSetparallel(nctemp1432,nctemp1434);
}
struct tree* nctemp1442= p;
nctempchar1* nctemp1444=PtreeGetname(nctemp1442);
nctempchar1* nctemp1440= nctemp1444;
struct nctempchar1 *nctemp1447;
struct nctempchar1 nctemp1448 = {{ 3}, (char*)"if"};
nctemp1447=&nctemp1448;
nctempchar1* nctemp1445= nctemp1447;
int nctemp1449=LibeStrcmp(nctemp1440,nctemp1445);
if(nctemp1449)
{
struct tree* nctemp1451= p;
int nctemp1453=SemIfstmnt(nctemp1451);
}
struct tree* nctemp1457= p;
nctempchar1* nctemp1459=PtreeGetname(nctemp1457);
nctempchar1* nctemp1455= nctemp1459;
struct nctempchar1 *nctemp1462;
struct nctempchar1 nctemp1463 = {{ 7}, (char*)"return"};
nctemp1462=&nctemp1463;
nctempchar1* nctemp1460= nctemp1462;
int nctemp1464=LibeStrcmp(nctemp1455,nctemp1460);
if(nctemp1464)
{
struct tree* nctemp1466= p;
int nctemp1468=SemReturnstmnt(nctemp1466);
}
struct tree* nctemp1473= p;
struct tree* nctemp1475=PtreeMvsister(nctemp1473);
p =nctemp1475;
}
int nctemp1476 = (p !=0);
nctemp1364=nctemp1476;}return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
struct tree* nctemp1484= p;
nctempchar1* nctemp1486=PtreeGetname(nctemp1484);
nctempchar1* nctemp1482= nctemp1486;
struct nctempchar1 *nctemp1489;
struct nctempchar1 nctemp1490 = {{ 13}, (char*)"declarations"};
nctemp1489=&nctemp1490;
nctempchar1* nctemp1487= nctemp1489;
int nctemp1491=LibeStrcmp(nctemp1482,nctemp1487);
if(nctemp1491)
{
struct tree* nctemp1493= p;
struct symbol* nctemp1497=SymGetltp();
struct symbol* nctemp1495= nctemp1497;
int nctemp1498=SemDeclarations(nctemp1493,nctemp1495);
q =p;
struct tree* nctemp1507= p;
struct tree* nctemp1509=PtreeMvsister(nctemp1507);
p =nctemp1509;
}
int nctemp1510 = (p !=0);
int nctemp1514=nctemp1510;
while(nctemp1514)
{{
struct tree* nctemp1518= p;
nctempchar1* nctemp1520=PtreeGetname(nctemp1518);
nctempchar1* nctemp1516= nctemp1520;
struct nctempchar1 *nctemp1523;
struct nctempchar1 nctemp1524 = {{ 5}, (char*)"expr"};
nctemp1523=&nctemp1524;
nctempchar1* nctemp1521= nctemp1523;
int nctemp1525=LibeStrcmp(nctemp1516,nctemp1521);
if(nctemp1525)
{
struct tree* nctemp1527= p;
struct tree* nctemp1529=SemExpr(nctemp1527);
struct tree* nctemp1531= p;
int nctemp1533= 1;
int nctemp1535=PtreeSetopexpr(nctemp1531,nctemp1533);
}
struct tree* nctemp1539= p;
nctempchar1* nctemp1541=PtreeGetname(nctemp1539);
nctempchar1* nctemp1537= nctemp1541;
struct nctempchar1 *nctemp1544;
struct nctempchar1 nctemp1545 = {{ 10}, (char*)"compstmnt"};
nctemp1544=&nctemp1545;
nctempchar1* nctemp1542= nctemp1544;
int nctemp1546=LibeStrcmp(nctemp1537,nctemp1542);
if(nctemp1546)
{
struct tree* nctemp1548= p;
int nctemp1550=SemCompstmnt(nctemp1548);
}
struct tree* nctemp1554= p;
nctempchar1* nctemp1556=PtreeGetname(nctemp1554);
nctempchar1* nctemp1552= nctemp1556;
struct nctempchar1 *nctemp1559;
struct nctempchar1 nctemp1560 = {{ 6}, (char*)"while"};
nctemp1559=&nctemp1560;
nctempchar1* nctemp1557= nctemp1559;
int nctemp1561=LibeStrcmp(nctemp1552,nctemp1557);
if(nctemp1561)
{
struct tree* nctemp1563= p;
int nctemp1565=SemWhilestmnt(nctemp1563);
}
struct tree* nctemp1569= p;
nctempchar1* nctemp1571=PtreeGetname(nctemp1569);
nctempchar1* nctemp1567= nctemp1571;
struct nctempchar1 *nctemp1574;
struct nctempchar1 nctemp1575 = {{ 4}, (char*)"for"};
nctemp1574=&nctemp1575;
nctempchar1* nctemp1572= nctemp1574;
int nctemp1576=LibeStrcmp(nctemp1567,nctemp1572);
if(nctemp1576)
{
struct tree* nctemp1578= p;
int nctemp1580=SemForstmnt(nctemp1578);
}
struct tree* nctemp1584= p;
nctempchar1* nctemp1586=PtreeGetname(nctemp1584);
nctempchar1* nctemp1582= nctemp1586;
struct nctempchar1 *nctemp1589;
struct nctempchar1 nctemp1590 = {{ 9}, (char*)"parallel"};
nctemp1589=&nctemp1590;
nctempchar1* nctemp1587= nctemp1589;
int nctemp1591=LibeStrcmp(nctemp1582,nctemp1587);
if(nctemp1591)
{
struct tree* nctemp1593= p;
int nctemp1595=SemParallelstmnt(nctemp1593);
struct tree* nctemp1597= q;
struct nctempchar1 *nctemp1601;
struct nctempchar1 nctemp1602 = {{ 9}, (char*)"parallel"};
nctemp1601=&nctemp1602;
nctempchar1* nctemp1599= nctemp1601;
int nctemp1603=PtreeSetparallel(nctemp1597,nctemp1599);
}
struct tree* nctemp1607= p;
nctempchar1* nctemp1609=PtreeGetname(nctemp1607);
nctempchar1* nctemp1605= nctemp1609;
struct nctempchar1 *nctemp1612;
struct nctempchar1 nctemp1613 = {{ 3}, (char*)"if"};
nctemp1612=&nctemp1613;
nctempchar1* nctemp1610= nctemp1612;
int nctemp1614=LibeStrcmp(nctemp1605,nctemp1610);
if(nctemp1614)
{
struct tree* nctemp1616= p;
int nctemp1618=SemIfstmnt(nctemp1616);
}
struct tree* nctemp1622= p;
nctempchar1* nctemp1624=PtreeGetname(nctemp1622);
nctempchar1* nctemp1620= nctemp1624;
struct nctempchar1 *nctemp1627;
struct nctempchar1 nctemp1628 = {{ 7}, (char*)"return"};
nctemp1627=&nctemp1628;
nctempchar1* nctemp1625= nctemp1627;
int nctemp1629=LibeStrcmp(nctemp1620,nctemp1625);
if(nctemp1629)
{
struct tree* nctemp1631= p;
int nctemp1633=SemReturnstmnt(nctemp1631);
}
struct tree* nctemp1638= p;
struct tree* nctemp1640=PtreeMvsister(nctemp1638);
p =nctemp1640;
}
int nctemp1641 = (p !=0);
nctemp1514=nctemp1641;}return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* nctemp1650= p;
struct tree* nctemp1652=PtreeMvchild(nctemp1650);
p =nctemp1652;
struct tree* nctemp1654= p;
struct tree* nctemp1656=SemExpr(nctemp1654);
struct tree* nctemp1658= p;
int nctemp1660= 1;
int nctemp1662=PtreeSetopexpr(nctemp1658,nctemp1660);
struct tree* nctemp1667= p;
struct tree* nctemp1669=PtreeMvsister(nctemp1667);
p =nctemp1669;
struct tree* nctemp1671= p;
int nctemp1673=SemStmnt(nctemp1671);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* nctemp1679= p;
struct tree* nctemp1681=PtreeMvchild(nctemp1679);
p =nctemp1681;
struct tree* nctemp1683= p;
struct tree* nctemp1685=SemExpr(nctemp1683);
struct tree* nctemp1687= p;
int nctemp1689= 1;
int nctemp1691=PtreeSetopexpr(nctemp1687,nctemp1689);
struct tree* nctemp1696= p;
struct tree* nctemp1698=PtreeMvsister(nctemp1696);
p =nctemp1698;
struct tree* nctemp1700= p;
struct tree* nctemp1702=SemExpr(nctemp1700);
struct tree* nctemp1704= p;
int nctemp1706= 1;
int nctemp1708=PtreeSetopexpr(nctemp1704,nctemp1706);
struct tree* nctemp1713= p;
struct tree* nctemp1715=PtreeMvsister(nctemp1713);
p =nctemp1715;
struct tree* nctemp1717= p;
struct tree* nctemp1719=SemExpr(nctemp1717);
struct tree* nctemp1721= p;
int nctemp1723= 1;
int nctemp1725=PtreeSetopexpr(nctemp1721,nctemp1723);
struct tree* nctemp1730= p;
struct tree* nctemp1732=PtreeMvsister(nctemp1730);
p =nctemp1732;
struct tree* nctemp1734= p;
int nctemp1736=SemStmnt(nctemp1734);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank =0;
struct tree* nctemp1746= p;
struct tree* nctemp1748=PtreeMvchild(nctemp1746);
sp =nctemp1748;
struct tree* nctemp1753= sp;
struct tree* nctemp1755=PtreeMvchild(nctemp1753);
sp =nctemp1755;
int nctemp1756 = (sp !=0);
int nctemp1760=nctemp1756;
while(nctemp1760)
{{
struct tree* nctemp1765= sp;
struct tree* nctemp1767=PtreeMvchild(nctemp1765);
rp =nctemp1767;
struct tree* nctemp1769= rp;
struct tree* nctemp1771=SemExpr(nctemp1769);
struct tree* nctemp1773= rp;
int nctemp1775= 1;
int nctemp1777=PtreeSetopexpr(nctemp1773,nctemp1775);
struct tree* nctemp1782= rp;
struct tree* nctemp1784=PtreeMvsister(nctemp1782);
rp =nctemp1784;
struct tree* nctemp1786= rp;
struct tree* nctemp1788=SemExpr(nctemp1786);
struct tree* nctemp1790= rp;
int nctemp1792= 1;
int nctemp1794=PtreeSetopexpr(nctemp1790,nctemp1792);
struct tree* nctemp1802= rp;
struct tree* nctemp1804=PtreeMvsister(nctemp1802);
rp =nctemp1804;
int nctemp1795 = (rp !=0);
if(nctemp1795)
{
struct tree* nctemp1807= rp;
struct tree* nctemp1809=SemExpr(nctemp1807);
struct tree* nctemp1811= rp;
int nctemp1813= 1;
int nctemp1815=PtreeSetopexpr(nctemp1811,nctemp1813);
}
struct tree* nctemp1819= sp;
struct tree* nctemp1821=PtreeMvsister(nctemp1819);
int nctemp1816 = (nctemp1821 !=0);
if(nctemp1816)
{
struct tree* nctemp1827= sp;
struct tree* nctemp1829=PtreeMvsister(nctemp1827);
rp =nctemp1829;
}
struct tree* nctemp1834= sp;
struct tree* nctemp1836=PtreeMvsister(nctemp1834);
sp =nctemp1836;
int nctemp1845 = rank + 1;
rank =nctemp1845;
}
int nctemp1846 = (sp !=0);
nctemp1760=nctemp1846;}struct tree* nctemp1851= p;
int nctemp1853= rank;
int nctemp1855=PtreeSetrank(nctemp1851,nctemp1853);
struct tree* nctemp1860= p;
struct tree* nctemp1862=PtreeMvchild(nctemp1860);
sp =nctemp1862;
struct tree* nctemp1867= sp;
struct tree* nctemp1869=PtreeMvsister(nctemp1867);
sp =nctemp1869;
struct tree* nctemp1871= sp;
int nctemp1873=SemStmnt(nctemp1871);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* nctemp1879= p;
struct tree* nctemp1881=PtreeMvchild(nctemp1879);
p =nctemp1881;
struct tree* nctemp1883= p;
struct tree* nctemp1885=SemExpr(nctemp1883);
struct tree* nctemp1887= p;
int nctemp1889= 1;
int nctemp1891=PtreeSetopexpr(nctemp1887,nctemp1889);
struct tree* nctemp1896= p;
struct tree* nctemp1898=PtreeMvsister(nctemp1896);
p =nctemp1898;
struct tree* nctemp1900= p;
int nctemp1902=SemStmnt(nctemp1900);
struct tree* nctemp1910= p;
struct tree* nctemp1912=PtreeMvsister(nctemp1910);
p =nctemp1912;
int nctemp1903 = (p !=0);
if(nctemp1903)
{
struct tree* nctemp1917= p;
nctempchar1* nctemp1919=PtreeGetname(nctemp1917);
nctempchar1* nctemp1915= nctemp1919;
struct nctempchar1 *nctemp1922;
struct nctempchar1 nctemp1923 = {{ 5}, (char*)"else"};
nctemp1922=&nctemp1923;
nctempchar1* nctemp1920= nctemp1922;
int nctemp1924=LibeStrcmp(nctemp1915,nctemp1920);
if(nctemp1924)
{
struct tree* nctemp1929= p;
struct tree* nctemp1931=PtreeMvchild(nctemp1929);
p =nctemp1931;
struct tree* nctemp1933= p;
int nctemp1935=SemStmnt(nctemp1933);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp1941= p;
struct tree* nctemp1943=PtreeMvchild(nctemp1941);
sp =nctemp1943;
int nctemp1944 = (sp !=0);
if(nctemp1944)
{
struct tree* nctemp1949= sp;
struct tree* nctemp1951=SemExpr(nctemp1949);
struct tree* nctemp1953= sp;
int nctemp1955= 1;
int nctemp1957=PtreeSetopexpr(nctemp1953,nctemp1955);
struct nctempchar1 *nctemp1964;
struct nctempchar1 nctemp1965 = {{ 6}, (char*)"#self"};
nctemp1964=&nctemp1965;
nctempchar1* nctemp1962= nctemp1964;
struct symbol* nctemp1968=SymGetltp();
struct symbol* nctemp1966= nctemp1968;
struct symbol* nctemp1969=SymLookup(nctemp1962,nctemp1966);
up =nctemp1969;
struct symbol* nctemp1976= up;
nctempchar1* nctemp1978=SymGetfunc(nctemp1976);
nctempchar1* nctemp1974= nctemp1978;
struct symbol* nctemp1979=SymLook(nctemp1974);
up =nctemp1979;
struct tree* nctemp1981= p;
struct symbol* nctemp1985= up;
nctempchar1* nctemp1987=SymGetype(nctemp1985);
nctempchar1* nctemp1983= nctemp1987;
int nctemp1988=PtreeSetype(nctemp1981,nctemp1983);
struct tree* nctemp1990= p;
struct symbol* nctemp1994= up;
nctempchar1* nctemp1996=SymGetstruct(nctemp1994);
nctempchar1* nctemp1992= nctemp1996;
int nctemp1997=PtreeSetstruct(nctemp1990,nctemp1992);
struct tree* nctemp1999= p;
struct symbol* nctemp2003= up;
nctempchar1* nctemp2005=SymGetarray(nctemp2003);
nctempchar1* nctemp2001= nctemp2005;
int nctemp2006=PtreeSetarray(nctemp1999,nctemp2001);
struct tree* nctemp2008= p;
struct tree* nctemp2012= sp;
nctempchar1* nctemp2014=PtreeGetref(nctemp2012);
nctempchar1* nctemp2010= nctemp2014;
int nctemp2015=PtreeSetref(nctemp2008,nctemp2010);
struct tree* nctemp2017= p;
struct symbol* nctemp2021= up;
int nctemp2023=SymGetrank(nctemp2021);
int nctemp2019= nctemp2023;
int nctemp2024=PtreeSetrank(nctemp2017,nctemp2019);
struct tree* nctemp2028= p;
struct tree* nctemp2030= sp;
int nctemp2032=SemComparetype(nctemp2028,nctemp2030);
int nctemp2025 = (nctemp2032 ==0);
if(nctemp2025)
{
struct tree* nctemp2035= p;
struct nctempchar1 *nctemp2039;
struct nctempchar1 nctemp2040 = {{ 26}, (char*)"Return type is incorrect "};
nctemp2039=&nctemp2040;
nctempchar1* nctemp2037= nctemp2039;
struct nctempchar1 *nctemp2043;
struct nctempchar1 nctemp2044 = {{ 2}, (char*)" "};
nctemp2043=&nctemp2044;
nctempchar1* nctemp2041= nctemp2043;
int nctemp2045=ErrSerror(nctemp2035,nctemp2037,nctemp2041);
}
}
return 1;
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp2051= p;
struct tree* nctemp2053=PtreeMvchild(nctemp2051);
sp =nctemp2053;
struct tree* nctemp2058= sp;
struct tree* nctemp2060=SemBinexpr(nctemp2058);
sp =nctemp2060;
struct tree* nctemp2062= sp;
struct tree* nctemp2064= p;
int nctemp2066=SemCopytype(nctemp2062,nctemp2064);
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np =p;
struct tree* nctemp2075= p;
nctempchar1* nctemp2077=PtreeGetname(nctemp2075);
nctempchar1* nctemp2073= nctemp2077;
struct nctempchar1 *nctemp2080;
struct nctempchar1 nctemp2081 = {{ 8}, (char*)"binexpr"};
nctemp2080=&nctemp2081;
nctempchar1* nctemp2078= nctemp2080;
int nctemp2082=LibeStrcmp(nctemp2073,nctemp2078);
if(nctemp2082)
{
struct tree* nctemp2087= p;
struct tree* nctemp2089=PtreeMvchild(nctemp2087);
p =nctemp2089;
struct tree* nctemp2094= p;
struct tree* nctemp2096=SemUnexpr(nctemp2094);
leftp =nctemp2096;
struct tree* nctemp2101= p;
struct tree* nctemp2103=PtreeMvsister(nctemp2101);
p =nctemp2103;
struct tree* nctemp2108= p;
struct tree* nctemp2110=SemUnexpr(nctemp2108);
rightp =nctemp2110;
struct tree* nctemp2114= leftp;
struct tree* nctemp2116= rightp;
int nctemp2118=SemComparetype(nctemp2114,nctemp2116);
int nctemp2111 = (nctemp2118 ==0);
if(nctemp2111)
{
struct tree* nctemp2121= p;
struct nctempchar1 *nctemp2125;
struct nctempchar1 nctemp2126 = {{ 11}, (char*)"Type error"};
nctemp2125=&nctemp2126;
nctempchar1* nctemp2123= nctemp2125;
struct nctempchar1 *nctemp2129;
struct nctempchar1 nctemp2130 = {{ 2}, (char*)" "};
nctemp2129=&nctemp2130;
nctempchar1* nctemp2127= nctemp2129;
int nctemp2131=ErrSerror(nctemp2121,nctemp2123,nctemp2127);
return p;
}
else{
struct tree* nctemp2136= np;
nctempchar1* nctemp2138=PtreeGetdef(nctemp2136);
nctempchar1* nctemp2134= nctemp2138;
struct nctempchar1 *nctemp2141;
struct nctempchar1 nctemp2142 = {{ 2}, (char*)"="};
nctemp2141=&nctemp2142;
nctempchar1* nctemp2139= nctemp2141;
int nctemp2143=LibeStrcmp(nctemp2134,nctemp2139);
if(nctemp2143)
{
struct tree* nctemp2145= np;
struct tree* nctemp2147=SemAsgexpr(nctemp2145);
}
else{
struct tree* nctemp2171= np;
nctempchar1* nctemp2173=PtreeGetdef(nctemp2171);
nctempchar1* nctemp2169= nctemp2173;
struct nctempchar1 *nctemp2176;
struct nctempchar1 nctemp2177 = {{ 3}, (char*)"!="};
nctemp2176=&nctemp2177;
nctempchar1* nctemp2174= nctemp2176;
int nctemp2178=LibeStrcmp(nctemp2169,nctemp2174);
struct tree* nctemp2182= np;
nctempchar1* nctemp2184=PtreeGetdef(nctemp2182);
nctempchar1* nctemp2180= nctemp2184;
struct nctempchar1 *nctemp2187;
struct nctempchar1 nctemp2188 = {{ 3}, (char*)"=="};
nctemp2187=&nctemp2188;
nctempchar1* nctemp2185= nctemp2187;
int nctemp2189=LibeStrcmp(nctemp2180,nctemp2185);
int nctemp2166 = (nctemp2178 || nctemp2189);
struct tree* nctemp2193= np;
nctempchar1* nctemp2195=PtreeGetdef(nctemp2193);
nctempchar1* nctemp2191= nctemp2195;
struct nctempchar1 *nctemp2198;
struct nctempchar1 nctemp2199 = {{ 3}, (char*)"||"};
nctemp2198=&nctemp2199;
nctempchar1* nctemp2196= nctemp2198;
int nctemp2200=LibeStrcmp(nctemp2191,nctemp2196);
int nctemp2163 = (nctemp2166 || nctemp2200);
struct tree* nctemp2204= np;
nctempchar1* nctemp2206=PtreeGetdef(nctemp2204);
nctempchar1* nctemp2202= nctemp2206;
struct nctempchar1 *nctemp2209;
struct nctempchar1 nctemp2210 = {{ 3}, (char*)"<="};
nctemp2209=&nctemp2210;
nctempchar1* nctemp2207= nctemp2209;
int nctemp2211=LibeStrcmp(nctemp2202,nctemp2207);
int nctemp2160 = (nctemp2163 || nctemp2211);
struct tree* nctemp2215= np;
nctempchar1* nctemp2217=PtreeGetdef(nctemp2215);
nctempchar1* nctemp2213= nctemp2217;
struct nctempchar1 *nctemp2220;
struct nctempchar1 nctemp2221 = {{ 3}, (char*)">="};
nctemp2220=&nctemp2221;
nctempchar1* nctemp2218= nctemp2220;
int nctemp2222=LibeStrcmp(nctemp2213,nctemp2218);
int nctemp2157 = (nctemp2160 || nctemp2222);
struct tree* nctemp2226= np;
nctempchar1* nctemp2228=PtreeGetdef(nctemp2226);
nctempchar1* nctemp2224= nctemp2228;
struct nctempchar1 *nctemp2231;
struct nctempchar1 nctemp2232 = {{ 2}, (char*)"<"};
nctemp2231=&nctemp2232;
nctempchar1* nctemp2229= nctemp2231;
int nctemp2233=LibeStrcmp(nctemp2224,nctemp2229);
int nctemp2154 = (nctemp2157 || nctemp2233);
struct tree* nctemp2237= np;
nctempchar1* nctemp2239=PtreeGetdef(nctemp2237);
nctempchar1* nctemp2235= nctemp2239;
struct nctempchar1 *nctemp2242;
struct nctempchar1 nctemp2243 = {{ 2}, (char*)">"};
nctemp2242=&nctemp2243;
nctempchar1* nctemp2240= nctemp2242;
int nctemp2244=LibeStrcmp(nctemp2235,nctemp2240);
int nctemp2151 = (nctemp2154 || nctemp2244);
struct tree* nctemp2248= np;
nctempchar1* nctemp2250=PtreeGetdef(nctemp2248);
nctempchar1* nctemp2246= nctemp2250;
struct nctempchar1 *nctemp2253;
struct nctempchar1 nctemp2254 = {{ 3}, (char*)"&&"};
nctemp2253=&nctemp2254;
nctempchar1* nctemp2251= nctemp2253;
int nctemp2255=LibeStrcmp(nctemp2246,nctemp2251);
int nctemp2148 = (nctemp2151 || nctemp2255);
if(nctemp2148)
{
struct tree* nctemp2257= np;
struct tree* nctemp2259=SemRelexpr(nctemp2257);
}
else{
struct tree* nctemp2271= np;
nctempchar1* nctemp2273=PtreeGetdef(nctemp2271);
nctempchar1* nctemp2269= nctemp2273;
struct nctempchar1 *nctemp2276;
struct nctempchar1 nctemp2277 = {{ 2}, (char*)"+"};
nctemp2276=&nctemp2277;
nctempchar1* nctemp2274= nctemp2276;
int nctemp2278=LibeStrcmp(nctemp2269,nctemp2274);
struct tree* nctemp2282= np;
nctempchar1* nctemp2284=PtreeGetdef(nctemp2282);
nctempchar1* nctemp2280= nctemp2284;
struct nctempchar1 *nctemp2287;
struct nctempchar1 nctemp2288 = {{ 2}, (char*)"-"};
nctemp2287=&nctemp2288;
nctempchar1* nctemp2285= nctemp2287;
int nctemp2289=LibeStrcmp(nctemp2280,nctemp2285);
int nctemp2266 = (nctemp2278 || nctemp2289);
struct tree* nctemp2293= np;
nctempchar1* nctemp2295=PtreeGetdef(nctemp2293);
nctempchar1* nctemp2291= nctemp2295;
struct nctempchar1 *nctemp2298;
struct nctempchar1 nctemp2299 = {{ 2}, (char*)"*"};
nctemp2298=&nctemp2299;
nctempchar1* nctemp2296= nctemp2298;
int nctemp2300=LibeStrcmp(nctemp2291,nctemp2296);
int nctemp2263 = (nctemp2266 || nctemp2300);
struct tree* nctemp2304= np;
nctempchar1* nctemp2306=PtreeGetdef(nctemp2304);
nctempchar1* nctemp2302= nctemp2306;
struct nctempchar1 *nctemp2309;
struct nctempchar1 nctemp2310 = {{ 2}, (char*)"/"};
nctemp2309=&nctemp2310;
nctempchar1* nctemp2307= nctemp2309;
int nctemp2311=LibeStrcmp(nctemp2302,nctemp2307);
int nctemp2260 = (nctemp2263 || nctemp2311);
if(nctemp2260)
{
struct tree* nctemp2313= np;
struct tree* nctemp2315=SemAddexpr(nctemp2313);
}
}
}
return np;
}
}
else{
struct tree* nctemp2318= p;
struct tree* nctemp2320=SemUnexpr(nctemp2318);
return nctemp2320;
}
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp2325= p;
struct tree* nctemp2327=PtreeMvchild(nctemp2325);
np =nctemp2327;
struct tree* nctemp2333= np;
nctempchar1* nctemp2335=PtreeGetlval(nctemp2333);
nctempchar1* nctemp2331= nctemp2335;
struct nctempchar1 *nctemp2338;
struct nctempchar1 nctemp2339 = {{ 5}, (char*)"lval"};
nctemp2338=&nctemp2339;
nctempchar1* nctemp2336= nctemp2338;
int nctemp2340=LibeStrcmp(nctemp2331,nctemp2336);
int nctemp2328 = (nctemp2340 ==0);
if(nctemp2328)
{
struct tree* nctemp2343= np;
struct nctempchar1 *nctemp2347;
struct nctempchar1 nctemp2348 = {{ 17}, (char*)"Not a left value"};
nctemp2347=&nctemp2348;
nctempchar1* nctemp2345= nctemp2347;
struct tree* nctemp2351= np;
nctempchar1* nctemp2353=PtreeGetdef(nctemp2351);
nctempchar1* nctemp2349= nctemp2353;
int nctemp2354=ErrSerror(nctemp2343,nctemp2345,nctemp2349);
}
else{
struct tree* nctemp2356= p;
struct nctempchar1 *nctemp2360;
struct nctempchar1 nctemp2361 = {{ 5}, (char*)"lval"};
nctemp2360=&nctemp2361;
nctempchar1* nctemp2358= nctemp2360;
int nctemp2362=PtreeSetlval(nctemp2356,nctemp2358);
}
struct tree* nctemp2364= np;
struct tree* nctemp2366= p;
int nctemp2368=SemCopytype(nctemp2364,nctemp2366);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp2374= p;
struct tree* nctemp2376=PtreeMvchild(nctemp2374);
np =nctemp2376;
struct tree* nctemp2381= np;
struct tree* nctemp2383=PtreeMvsister(nctemp2381);
rp =nctemp2383;
struct tree* nctemp2389= p;
nctempchar1* nctemp2391=PtreeGetdef(nctemp2389);
nctempchar1* nctemp2387= nctemp2391;
struct nctempchar1 *nctemp2394;
struct nctempchar1 nctemp2395 = {{ 3}, (char*)"=="};
nctemp2394=&nctemp2395;
nctempchar1* nctemp2392= nctemp2394;
int nctemp2396=LibeStrcmp(nctemp2387,nctemp2392);
int nctemp2384 = (nctemp2396 ==0);
if(nctemp2384)
{
struct tree* nctemp2403= p;
nctempchar1* nctemp2405=PtreeGetdef(nctemp2403);
nctempchar1* nctemp2401= nctemp2405;
struct nctempchar1 *nctemp2408;
struct nctempchar1 nctemp2409 = {{ 3}, (char*)"!="};
nctemp2408=&nctemp2409;
nctempchar1* nctemp2406= nctemp2408;
int nctemp2410=LibeStrcmp(nctemp2401,nctemp2406);
int nctemp2398 = (nctemp2410 ==0);
if(nctemp2398)
{
struct tree* nctemp2417= np;
nctempchar1* nctemp2419=PtreeGetref(nctemp2417);
nctempchar1* nctemp2415= nctemp2419;
struct nctempchar1 *nctemp2422;
struct nctempchar1 nctemp2423 = {{ 5}, (char*)"aref"};
nctemp2422=&nctemp2423;
nctempchar1* nctemp2420= nctemp2422;
int nctemp2424=LibeStrcmp(nctemp2415,nctemp2420);
struct tree* nctemp2428= np;
nctempchar1* nctemp2430=PtreeGetref(nctemp2428);
nctempchar1* nctemp2426= nctemp2430;
struct nctempchar1 *nctemp2433;
struct nctempchar1 nctemp2434 = {{ 5}, (char*)"sref"};
nctemp2433=&nctemp2434;
nctempchar1* nctemp2431= nctemp2433;
int nctemp2435=LibeStrcmp(nctemp2426,nctemp2431);
int nctemp2412 = (nctemp2424 || nctemp2435);
if(nctemp2412)
{
struct tree* nctemp2437= p;
struct nctempchar1 *nctemp2441;
struct nctempchar1 nctemp2442 = {{ 18}, (char*)"Illegal operation"};
nctemp2441=&nctemp2442;
nctempchar1* nctemp2439= nctemp2441;
struct nctempchar1 *nctemp2445;
struct nctempchar1 nctemp2446 = {{ 2}, (char*)" "};
nctemp2445=&nctemp2446;
nctempchar1* nctemp2443= nctemp2445;
int nctemp2447=ErrSerror(nctemp2437,nctemp2439,nctemp2443);
}
else{
struct tree* nctemp2453= rp;
nctempchar1* nctemp2455=PtreeGetref(nctemp2453);
nctempchar1* nctemp2451= nctemp2455;
struct nctempchar1 *nctemp2458;
struct nctempchar1 nctemp2459 = {{ 5}, (char*)"aref"};
nctemp2458=&nctemp2459;
nctempchar1* nctemp2456= nctemp2458;
int nctemp2460=LibeStrcmp(nctemp2451,nctemp2456);
struct tree* nctemp2464= np;
nctempchar1* nctemp2466=PtreeGetref(nctemp2464);
nctempchar1* nctemp2462= nctemp2466;
struct nctempchar1 *nctemp2469;
struct nctempchar1 nctemp2470 = {{ 5}, (char*)"sref"};
nctemp2469=&nctemp2470;
nctempchar1* nctemp2467= nctemp2469;
int nctemp2471=LibeStrcmp(nctemp2462,nctemp2467);
int nctemp2448 = (nctemp2460 || nctemp2471);
if(nctemp2448)
{
struct tree* nctemp2473= p;
struct nctempchar1 *nctemp2477;
struct nctempchar1 nctemp2478 = {{ 18}, (char*)"Illegal operation"};
nctemp2477=&nctemp2478;
nctempchar1* nctemp2475= nctemp2477;
struct nctempchar1 *nctemp2481;
struct nctempchar1 nctemp2482 = {{ 2}, (char*)" "};
nctemp2481=&nctemp2482;
nctempchar1* nctemp2479= nctemp2481;
int nctemp2483=ErrSerror(nctemp2473,nctemp2475,nctemp2479);
}
}
}
else{
struct tree* nctemp2487= np;
nctempchar1* nctemp2489=PtreeGetype(nctemp2487);
nctempchar1* nctemp2485= nctemp2489;
struct nctempchar1 *nctemp2492;
struct nctempchar1 nctemp2493 = {{ 8}, (char*)"complex"};
nctemp2492=&nctemp2493;
nctempchar1* nctemp2490= nctemp2492;
int nctemp2494=LibeStrcmp(nctemp2485,nctemp2490);
if(nctemp2494)
{
struct tree* nctemp2496= p;
struct nctempchar1 *nctemp2500;
struct nctempchar1 nctemp2501 = {{ 18}, (char*)"Illegal operation"};
nctemp2500=&nctemp2501;
nctempchar1* nctemp2498= nctemp2500;
struct nctempchar1 *nctemp2504;
struct nctempchar1 nctemp2505 = {{ 2}, (char*)" "};
nctemp2504=&nctemp2505;
nctempchar1* nctemp2502= nctemp2504;
int nctemp2506=ErrSerror(nctemp2496,nctemp2498,nctemp2502);
}
}
}
struct tree* nctemp2508= p;
struct nctempchar1 *nctemp2512;
struct nctempchar1 nctemp2513 = {{ 4}, (char*)"int"};
nctemp2512=&nctemp2513;
nctempchar1* nctemp2510= nctemp2512;
int nctemp2514=PtreeSetype(nctemp2508,nctemp2510);
struct tree* nctemp2516= p;
struct nctempchar1 *nctemp2520;
struct nctempchar1 nctemp2521 = {{ 5}, (char*)"void"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
int nctemp2522=PtreeSetlval(nctemp2516,nctemp2518);
struct tree* nctemp2524= p;
struct nctempchar1 *nctemp2528;
struct nctempchar1 nctemp2529 = {{ 5}, (char*)"void"};
nctemp2528=&nctemp2529;
nctempchar1* nctemp2526= nctemp2528;
int nctemp2530=PtreeSetstruct(nctemp2524,nctemp2526);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp2536= p;
struct tree* nctemp2538=PtreeMvchild(nctemp2536);
np =nctemp2538;
struct tree* nctemp2543= np;
struct tree* nctemp2545=PtreeMvsister(nctemp2543);
rp =nctemp2545;
struct tree* nctemp2549= np;
nctempchar1* nctemp2551=PtreeGetref(nctemp2549);
nctempchar1* nctemp2547= nctemp2551;
struct nctempchar1 *nctemp2554;
struct nctempchar1 nctemp2555 = {{ 5}, (char*)"sref"};
nctemp2554=&nctemp2555;
nctempchar1* nctemp2552= nctemp2554;
int nctemp2556=LibeStrcmp(nctemp2547,nctemp2552);
if(nctemp2556)
{
struct tree* nctemp2558= np;
struct nctempchar1 *nctemp2562;
struct nctempchar1 nctemp2563 = {{ 18}, (char*)"Illegal operation"};
nctemp2562=&nctemp2563;
nctempchar1* nctemp2560= nctemp2562;
struct nctempchar1 *nctemp2566;
struct nctempchar1 nctemp2567 = {{ 2}, (char*)" "};
nctemp2566=&nctemp2567;
nctempchar1* nctemp2564= nctemp2566;
int nctemp2568=ErrSerror(nctemp2558,nctemp2560,nctemp2564);
}
else{
struct tree* nctemp2572= rp;
nctempchar1* nctemp2574=PtreeGetref(nctemp2572);
nctempchar1* nctemp2570= nctemp2574;
struct nctempchar1 *nctemp2577;
struct nctempchar1 nctemp2578 = {{ 5}, (char*)"sref"};
nctemp2577=&nctemp2578;
nctempchar1* nctemp2575= nctemp2577;
int nctemp2579=LibeStrcmp(nctemp2570,nctemp2575);
if(nctemp2579)
{
struct tree* nctemp2581= np;
struct nctempchar1 *nctemp2585;
struct nctempchar1 nctemp2586 = {{ 18}, (char*)"Illegal operation"};
nctemp2585=&nctemp2586;
nctempchar1* nctemp2583= nctemp2585;
struct nctempchar1 *nctemp2589;
struct nctempchar1 nctemp2590 = {{ 2}, (char*)" "};
nctemp2589=&nctemp2590;
nctempchar1* nctemp2587= nctemp2589;
int nctemp2591=ErrSerror(nctemp2581,nctemp2583,nctemp2587);
}
else{
struct tree* nctemp2593= np;
struct tree* nctemp2595= p;
int nctemp2597=SemCopytype(nctemp2593,nctemp2595);
struct tree* nctemp2599= p;
struct nctempchar1 *nctemp2603;
struct nctempchar1 nctemp2604 = {{ 5}, (char*)"void"};
nctemp2603=&nctemp2604;
nctempchar1* nctemp2601= nctemp2603;
int nctemp2605=PtreeSetlval(nctemp2599,nctemp2601);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np =p;
struct tree* nctemp2614= p;
nctempchar1* nctemp2616=PtreeGetname(nctemp2614);
nctempchar1* nctemp2612= nctemp2616;
struct nctempchar1 *nctemp2619;
struct nctempchar1 nctemp2620 = {{ 7}, (char*)"unexpr"};
nctemp2619=&nctemp2620;
nctempchar1* nctemp2617= nctemp2619;
int nctemp2621=LibeStrcmp(nctemp2612,nctemp2617);
if(nctemp2621)
{
struct tree* nctemp2626= p;
struct tree* nctemp2628=PtreeMvchild(nctemp2626);
p =nctemp2628;
struct tree* nctemp2633= p;
struct tree* nctemp2635=SemPrimexpr(nctemp2633);
p =nctemp2635;
struct tree* nctemp2637= p;
struct tree* nctemp2639= np;
int nctemp2641=SemCopytype(nctemp2637,nctemp2639);
return np;
}
else{
struct tree* nctemp2644= p;
struct tree* nctemp2646=SemPrimexpr(nctemp2644);
return nctemp2646;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp2650= p;
nctempchar1* nctemp2652=PtreeGetname(nctemp2650);
nctempchar1* nctemp2648= nctemp2652;
struct nctempchar1 *nctemp2655;
struct nctempchar1 nctemp2656 = {{ 11}, (char*)"identifier"};
nctemp2655=&nctemp2656;
nctempchar1* nctemp2653= nctemp2655;
int nctemp2657=LibeStrcmp(nctemp2648,nctemp2653);
if(nctemp2657)
{
struct tree* nctemp2659= p;
int nctemp2661=SemId(nctemp2659);
return p;
}
else{
struct tree* nctemp2666= p;
nctempchar1* nctemp2668=PtreeGetname(nctemp2666);
nctempchar1* nctemp2664= nctemp2668;
struct nctempchar1 *nctemp2671;
struct nctempchar1 nctemp2672 = {{ 6}, (char*)"fcall"};
nctemp2671=&nctemp2672;
nctempchar1* nctemp2669= nctemp2671;
int nctemp2673=LibeStrcmp(nctemp2664,nctemp2669);
if(nctemp2673)
{
struct tree* nctemp2675= p;
int nctemp2677=SemFcall(nctemp2675);
return p;
}
else{
struct tree* nctemp2682= p;
nctempchar1* nctemp2684=PtreeGetname(nctemp2682);
nctempchar1* nctemp2680= nctemp2684;
struct nctempchar1 *nctemp2687;
struct nctempchar1 nctemp2688 = {{ 5}, (char*)"cast"};
nctemp2687=&nctemp2688;
nctempchar1* nctemp2685= nctemp2687;
int nctemp2689=LibeStrcmp(nctemp2680,nctemp2685);
if(nctemp2689)
{
struct tree* nctemp2691= p;
int nctemp2693=SemCast(nctemp2691);
return p;
}
else{
struct tree* nctemp2698= p;
nctempchar1* nctemp2700=PtreeGetname(nctemp2698);
nctempchar1* nctemp2696= nctemp2700;
struct nctempchar1 *nctemp2703;
struct nctempchar1 nctemp2704 = {{ 4}, (char*)"new"};
nctemp2703=&nctemp2704;
nctempchar1* nctemp2701= nctemp2703;
int nctemp2705=LibeStrcmp(nctemp2696,nctemp2701);
if(nctemp2705)
{
struct tree* nctemp2707= p;
int nctemp2709=SemNew(nctemp2707);
return p;
}
else{
struct tree* nctemp2714= p;
nctempchar1* nctemp2716=PtreeGetname(nctemp2714);
nctempchar1* nctemp2712= nctemp2716;
struct nctempchar1 *nctemp2719;
struct nctempchar1 nctemp2720 = {{ 7}, (char*)"delete"};
nctemp2719=&nctemp2720;
nctempchar1* nctemp2717= nctemp2719;
int nctemp2721=LibeStrcmp(nctemp2712,nctemp2717);
if(nctemp2721)
{
struct tree* nctemp2723= p;
int nctemp2725=SemDelete(nctemp2723);
return p;
}
else{
struct tree* nctemp2730= p;
nctempchar1* nctemp2732=PtreeGetname(nctemp2730);
nctempchar1* nctemp2728= nctemp2732;
struct nctempchar1 *nctemp2735;
struct nctempchar1 nctemp2736 = {{ 6}, (char*)"cmplx"};
nctemp2735=&nctemp2736;
nctempchar1* nctemp2733= nctemp2735;
int nctemp2737=LibeStrcmp(nctemp2728,nctemp2733);
if(nctemp2737)
{
struct tree* nctemp2739= p;
int nctemp2741=SemCmplx(nctemp2739);
return p;
}
else{
struct tree* nctemp2746= p;
nctempchar1* nctemp2748=PtreeGetname(nctemp2746);
nctempchar1* nctemp2744= nctemp2748;
struct nctempchar1 *nctemp2751;
struct nctempchar1 nctemp2752 = {{ 3}, (char*)"re"};
nctemp2751=&nctemp2752;
nctempchar1* nctemp2749= nctemp2751;
int nctemp2753=LibeStrcmp(nctemp2744,nctemp2749);
if(nctemp2753)
{
struct tree* nctemp2755= p;
int nctemp2757=SemRe(nctemp2755);
return p;
}
else{
struct tree* nctemp2762= p;
nctempchar1* nctemp2764=PtreeGetname(nctemp2762);
nctempchar1* nctemp2760= nctemp2764;
struct nctempchar1 *nctemp2767;
struct nctempchar1 nctemp2768 = {{ 4}, (char*)"len"};
nctemp2767=&nctemp2768;
nctempchar1* nctemp2765= nctemp2767;
int nctemp2769=LibeStrcmp(nctemp2760,nctemp2765);
if(nctemp2769)
{
struct tree* nctemp2771= p;
int nctemp2773=SemLen(nctemp2771);
return p;
}
else{
struct tree* nctemp2778= p;
nctempchar1* nctemp2780=PtreeGetname(nctemp2778);
nctempchar1* nctemp2776= nctemp2780;
struct nctempchar1 *nctemp2783;
struct nctempchar1 nctemp2784 = {{ 3}, (char*)"im"};
nctemp2783=&nctemp2784;
nctempchar1* nctemp2781= nctemp2783;
int nctemp2785=LibeStrcmp(nctemp2776,nctemp2781);
if(nctemp2785)
{
struct tree* nctemp2787= p;
int nctemp2789=SemIm(nctemp2787);
return p;
}
else{
struct tree* nctemp2794= p;
nctempchar1* nctemp2796=PtreeGetname(nctemp2794);
nctempchar1* nctemp2792= nctemp2796;
struct nctempchar1 *nctemp2799;
struct nctempchar1 nctemp2800 = {{ 7}, (char*)"sizeof"};
nctemp2799=&nctemp2800;
nctempchar1* nctemp2797= nctemp2799;
int nctemp2801=LibeStrcmp(nctemp2792,nctemp2797);
if(nctemp2801)
{
struct tree* nctemp2803= p;
int nctemp2805=SemSizeof(nctemp2803);
return p;
}
else{
struct tree* nctemp2810= p;
nctempchar1* nctemp2812=PtreeGetname(nctemp2810);
nctempchar1* nctemp2808= nctemp2812;
struct nctempchar1 *nctemp2815;
struct nctempchar1 nctemp2816 = {{ 10}, (char*)"iconstant"};
nctemp2815=&nctemp2816;
nctempchar1* nctemp2813= nctemp2815;
int nctemp2817=LibeStrcmp(nctemp2808,nctemp2813);
if(nctemp2817)
{
struct tree* nctemp2819= p;
struct nctempchar1 *nctemp2823;
struct nctempchar1 nctemp2824 = {{ 4}, (char*)"int"};
nctemp2823=&nctemp2824;
nctempchar1* nctemp2821= nctemp2823;
int nctemp2825=PtreeSetype(nctemp2819,nctemp2821);
return p;
}
else{
struct tree* nctemp2830= p;
nctempchar1* nctemp2832=PtreeGetname(nctemp2830);
nctempchar1* nctemp2828= nctemp2832;
struct nctempchar1 *nctemp2835;
struct nctempchar1 nctemp2836 = {{ 10}, (char*)"rconstant"};
nctemp2835=&nctemp2836;
nctempchar1* nctemp2833= nctemp2835;
int nctemp2837=LibeStrcmp(nctemp2828,nctemp2833);
if(nctemp2837)
{
struct tree* nctemp2839= p;
struct nctempchar1 *nctemp2843;
struct nctempchar1 nctemp2844 = {{ 6}, (char*)"float"};
nctemp2843=&nctemp2844;
nctempchar1* nctemp2841= nctemp2843;
int nctemp2845=PtreeSetype(nctemp2839,nctemp2841);
return p;
}
else{
struct tree* nctemp2850= p;
nctempchar1* nctemp2852=PtreeGetname(nctemp2850);
nctempchar1* nctemp2848= nctemp2852;
struct nctempchar1 *nctemp2855;
struct nctempchar1 nctemp2856 = {{ 10}, (char*)"sconstant"};
nctemp2855=&nctemp2856;
nctempchar1* nctemp2853= nctemp2855;
int nctemp2857=LibeStrcmp(nctemp2848,nctemp2853);
if(nctemp2857)
{
struct tree* nctemp2859= p;
struct nctempchar1 *nctemp2863;
struct nctempchar1 nctemp2864 = {{ 5}, (char*)"char"};
nctemp2863=&nctemp2864;
nctempchar1* nctemp2861= nctemp2863;
int nctemp2865=PtreeSetype(nctemp2859,nctemp2861);
struct tree* nctemp2867= p;
struct nctempchar1 *nctemp2871;
struct nctempchar1 nctemp2872 = {{ 5}, (char*)"aref"};
nctemp2871=&nctemp2872;
nctempchar1* nctemp2869= nctemp2871;
int nctemp2873=PtreeSetref(nctemp2867,nctemp2869);
struct tree* nctemp2875= p;
int nctemp2877= 1;
int nctemp2879=PtreeSetrank(nctemp2875,nctemp2877);
return p;
}
else{
struct tree* nctemp2882= p;
struct tree* nctemp2884=SemBinexpr(nctemp2882);
return nctemp2884;
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
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp2894= p;
nctempchar1* nctemp2896=PtreeGetdef(nctemp2894);
nctempchar1* nctemp2892= nctemp2896;
struct symbol* nctemp2897=SymLook(nctemp2892);
tp =nctemp2897;
int nctemp2885 = (tp ==0);
if(nctemp2885)
{
struct tree* nctemp2900= p;
struct nctempchar1 *nctemp2904;
struct nctempchar1 nctemp2905 = {{ 22}, (char*)"Undeclared identifier"};
nctemp2904=&nctemp2905;
nctempchar1* nctemp2902= nctemp2904;
struct tree* nctemp2908= p;
nctempchar1* nctemp2910=PtreeGetdef(nctemp2908);
nctempchar1* nctemp2906= nctemp2910;
int nctemp2911=ErrSerror(nctemp2900,nctemp2902,nctemp2906);
}
struct symbol* nctemp2917= tp;
nctempchar1* nctemp2919=SymGetype(nctemp2917);
nctempchar1* nctemp2915= nctemp2919;
struct nctempchar1 *nctemp2922;
struct nctempchar1 nctemp2923 = {{ 10}, (char*)"iconstant"};
nctemp2922=&nctemp2923;
nctempchar1* nctemp2920= nctemp2922;
int nctemp2924=LibeStrcmp(nctemp2915,nctemp2920);
int nctemp2912 = (nctemp2924 ==1);
if(nctemp2912)
{
struct tree* nctemp2927= p;
struct symbol* nctemp2931= tp;
nctempchar1* nctemp2933=SymGetype(nctemp2931);
nctempchar1* nctemp2929= nctemp2933;
int nctemp2934=PtreeSetname(nctemp2927,nctemp2929);
struct tree* nctemp2936= p;
struct symbol* nctemp2940= tp;
nctempchar1* nctemp2942=SymGetdescr(nctemp2940);
nctempchar1* nctemp2938= nctemp2942;
int nctemp2943=PtreeSetdef(nctemp2936,nctemp2938);
struct tree* nctemp2945= p;
struct nctempchar1 *nctemp2949;
struct nctempchar1 nctemp2950 = {{ 4}, (char*)"int"};
nctemp2949=&nctemp2950;
nctempchar1* nctemp2947= nctemp2949;
int nctemp2951=PtreeSetype(nctemp2945,nctemp2947);
return 1;
}
else{
struct symbol* nctemp2958= tp;
nctempchar1* nctemp2960=SymGetype(nctemp2958);
nctempchar1* nctemp2956= nctemp2960;
struct nctempchar1 *nctemp2963;
struct nctempchar1 nctemp2964 = {{ 10}, (char*)"rconstant"};
nctemp2963=&nctemp2964;
nctempchar1* nctemp2961= nctemp2963;
int nctemp2965=LibeStrcmp(nctemp2956,nctemp2961);
int nctemp2953 = (nctemp2965 ==1);
if(nctemp2953)
{
struct tree* nctemp2968= p;
struct symbol* nctemp2972= tp;
nctempchar1* nctemp2974=SymGetype(nctemp2972);
nctempchar1* nctemp2970= nctemp2974;
int nctemp2975=PtreeSetname(nctemp2968,nctemp2970);
struct tree* nctemp2977= p;
struct symbol* nctemp2981= tp;
nctempchar1* nctemp2983=SymGetdescr(nctemp2981);
nctempchar1* nctemp2979= nctemp2983;
int nctemp2984=PtreeSetdef(nctemp2977,nctemp2979);
struct tree* nctemp2986= p;
struct nctempchar1 *nctemp2990;
struct nctempchar1 nctemp2991 = {{ 6}, (char*)"float"};
nctemp2990=&nctemp2991;
nctempchar1* nctemp2988= nctemp2990;
int nctemp2992=PtreeSetype(nctemp2986,nctemp2988);
return 1;
}
else{
struct symbol* nctemp2999= tp;
nctempchar1* nctemp3001=SymGetype(nctemp2999);
nctempchar1* nctemp2997= nctemp3001;
struct nctempchar1 *nctemp3004;
struct nctempchar1 nctemp3005 = {{ 10}, (char*)"sconstant"};
nctemp3004=&nctemp3005;
nctempchar1* nctemp3002= nctemp3004;
int nctemp3006=LibeStrcmp(nctemp2997,nctemp3002);
int nctemp2994 = (nctemp3006 ==1);
if(nctemp2994)
{
struct tree* nctemp3009= p;
struct symbol* nctemp3013= tp;
nctempchar1* nctemp3015=SymGetype(nctemp3013);
nctempchar1* nctemp3011= nctemp3015;
int nctemp3016=PtreeSetname(nctemp3009,nctemp3011);
struct tree* nctemp3018= p;
struct symbol* nctemp3022= tp;
nctempchar1* nctemp3024=SymGetdescr(nctemp3022);
nctempchar1* nctemp3020= nctemp3024;
int nctemp3025=PtreeSetdef(nctemp3018,nctemp3020);
struct tree* nctemp3027= p;
struct nctempchar1 *nctemp3031;
struct nctempchar1 nctemp3032 = {{ 5}, (char*)"char"};
nctemp3031=&nctemp3032;
nctempchar1* nctemp3029= nctemp3031;
int nctemp3033=PtreeSetype(nctemp3027,nctemp3029);
struct tree* nctemp3035= p;
struct nctempchar1 *nctemp3039;
struct nctempchar1 nctemp3040 = {{ 6}, (char*)"array"};
nctemp3039=&nctemp3040;
nctempchar1* nctemp3037= nctemp3039;
int nctemp3041=PtreeSetarray(nctemp3035,nctemp3037);
struct tree* nctemp3043= p;
struct nctempchar1 *nctemp3047;
struct nctempchar1 nctemp3048 = {{ 5}, (char*)"aref"};
nctemp3047=&nctemp3048;
nctempchar1* nctemp3045= nctemp3047;
int nctemp3049=PtreeSetref(nctemp3043,nctemp3045);
struct tree* nctemp3051= p;
int nctemp3053= 1;
int nctemp3055=PtreeSetrank(nctemp3051,nctemp3053);
return 1;
}
}
}
struct symbol* nctemp3060= tp;
nctempchar1* nctemp3062=SymGetstruct(nctemp3060);
nctempchar1* nctemp3058= nctemp3062;
struct nctempchar1 *nctemp3065;
struct nctempchar1 nctemp3066 = {{ 10}, (char*)"structdef"};
nctemp3065=&nctemp3066;
nctempchar1* nctemp3063= nctemp3065;
int nctemp3067=LibeStrcmp(nctemp3058,nctemp3063);
if(nctemp3067)
{
struct tree* nctemp3069= p;
struct nctempchar1 *nctemp3073;
struct nctempchar1 nctemp3074 = {{ 43}, (char*)"Struct names can not be used as a variable"};
nctemp3073=&nctemp3074;
nctempchar1* nctemp3071= nctemp3073;
struct tree* nctemp3077= p;
nctempchar1* nctemp3079=PtreeGetdef(nctemp3077);
nctempchar1* nctemp3075= nctemp3079;
int nctemp3080=ErrSerror(nctemp3069,nctemp3071,nctemp3075);
}
struct tree* nctemp3082= p;
struct symbol* nctemp3086= tp;
nctempchar1* nctemp3088=SymGetype(nctemp3086);
nctempchar1* nctemp3084= nctemp3088;
int nctemp3089=PtreeSetype(nctemp3082,nctemp3084);
struct tree* nctemp3091= p;
struct symbol* nctemp3095= tp;
nctempchar1* nctemp3097=SymGetarray(nctemp3095);
nctempchar1* nctemp3093= nctemp3097;
int nctemp3098=PtreeSetarray(nctemp3091,nctemp3093);
struct tree* nctemp3100= p;
struct symbol* nctemp3104= tp;
int nctemp3106=SymGetrank(nctemp3104);
int nctemp3102= nctemp3106;
int nctemp3107=PtreeSetrank(nctemp3100,nctemp3102);
struct tree* nctemp3109= p;
struct symbol* nctemp3113= tp;
nctempchar1* nctemp3115=SymGetstruct(nctemp3113);
nctempchar1* nctemp3111= nctemp3115;
int nctemp3116=PtreeSetstruct(nctemp3109,nctemp3111);
struct tree* nctemp3118= p;
struct symbol* nctemp3122= tp;
nctempchar1* nctemp3124=SymGetlval(nctemp3122);
nctempchar1* nctemp3120= nctemp3124;
int nctemp3125=PtreeSetlval(nctemp3118,nctemp3120);
struct tree* nctemp3130= p;
struct tree* nctemp3132=PtreeMvchild(nctemp3130);
np =nctemp3132;
int nctemp3133 = (np !=0);
if(nctemp3133)
{
struct tree* nctemp3140= np;
nctempchar1* nctemp3142=PtreeGetname(nctemp3140);
nctempchar1* nctemp3138= nctemp3142;
struct nctempchar1 *nctemp3145;
struct nctempchar1 nctemp3146 = {{ 9}, (char*)"exprlist"};
nctemp3145=&nctemp3146;
nctempchar1* nctemp3143= nctemp3145;
int nctemp3147=LibeStrcmp(nctemp3138,nctemp3143);
if(nctemp3147)
{
struct tree* nctemp3149= p;
struct symbol* nctemp3151= tp;
int nctemp3153=SemArray(nctemp3149,nctemp3151);
struct tree* nctemp3157= np;
struct tree* nctemp3159=PtreeMvsister(nctemp3157);
int nctemp3154 = (nctemp3159 !=0);
if(nctemp3154)
{
struct tree* nctemp3162= p;
struct symbol* nctemp3164= tp;
int nctemp3166=SemStructure(nctemp3162,nctemp3164);
}
else{
struct tree* nctemp3170= p;
nctempchar1* nctemp3172=PtreeGetstruct(nctemp3170);
nctempchar1* nctemp3168= nctemp3172;
struct nctempchar1 *nctemp3175;
struct nctempchar1 nctemp3176 = {{ 7}, (char*)"struct"};
nctemp3175=&nctemp3176;
nctempchar1* nctemp3173= nctemp3175;
int nctemp3177=LibeStrcmp(nctemp3168,nctemp3173);
if(nctemp3177)
{
struct tree* nctemp3179= p;
struct nctempchar1 *nctemp3183;
struct nctempchar1 nctemp3184 = {{ 5}, (char*)"sref"};
nctemp3183=&nctemp3184;
nctempchar1* nctemp3181= nctemp3183;
int nctemp3185=PtreeSetref(nctemp3179,nctemp3181);
}
}
}
else{
struct tree* nctemp3189= np;
nctempchar1* nctemp3191=PtreeGetname(nctemp3189);
nctempchar1* nctemp3187= nctemp3191;
struct nctempchar1 *nctemp3194;
struct nctempchar1 nctemp3195 = {{ 9}, (char*)"selector"};
nctemp3194=&nctemp3195;
nctempchar1* nctemp3192= nctemp3194;
int nctemp3196=LibeStrcmp(nctemp3187,nctemp3192);
if(nctemp3196)
{
struct tree* nctemp3198= p;
struct symbol* nctemp3200= tp;
int nctemp3202=SemStructure(nctemp3198,nctemp3200);
}
}
}
else{
struct tree* nctemp3206= p;
nctempchar1* nctemp3208=PtreeGetarray(nctemp3206);
nctempchar1* nctemp3204= nctemp3208;
struct nctempchar1 *nctemp3211;
struct nctempchar1 nctemp3212 = {{ 6}, (char*)"array"};
nctemp3211=&nctemp3212;
nctempchar1* nctemp3209= nctemp3211;
int nctemp3213=LibeStrcmp(nctemp3204,nctemp3209);
if(nctemp3213)
{
struct tree* nctemp3215= p;
struct nctempchar1 *nctemp3219;
struct nctempchar1 nctemp3220 = {{ 5}, (char*)"aref"};
nctemp3219=&nctemp3220;
nctempchar1* nctemp3217= nctemp3219;
int nctemp3221=PtreeSetref(nctemp3215,nctemp3217);
}
else{
struct tree* nctemp3225= p;
nctempchar1* nctemp3227=PtreeGetstruct(nctemp3225);
nctempchar1* nctemp3223= nctemp3227;
struct nctempchar1 *nctemp3230;
struct nctempchar1 nctemp3231 = {{ 7}, (char*)"struct"};
nctemp3230=&nctemp3231;
nctempchar1* nctemp3228= nctemp3230;
int nctemp3232=LibeStrcmp(nctemp3223,nctemp3228);
if(nctemp3232)
{
struct tree* nctemp3234= p;
struct nctempchar1 *nctemp3238;
struct nctempchar1 nctemp3239 = {{ 5}, (char*)"sref"};
nctemp3238=&nctemp3239;
nctempchar1* nctemp3236= nctemp3238;
int nctemp3240=PtreeSetref(nctemp3234,nctemp3236);
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
struct tree* nctemp3245= p;
nctempchar1* nctemp3247=PtreeGetname(nctemp3245);
nctempchar1* nctemp3243= nctemp3247;
struct nctempchar1 *nctemp3250;
struct nctempchar1 nctemp3251 = {{ 6}, (char*)"fcall"};
nctemp3250=&nctemp3251;
nctempchar1* nctemp3248= nctemp3250;
int nctemp3252=LibeStrcmp(nctemp3243,nctemp3248);
if(nctemp3252)
{
struct tree* nctemp3262= p;
nctempchar1* nctemp3264=PtreeGetdef(nctemp3262);
nctempchar1* nctemp3260= nctemp3264;
struct symbol* nctemp3267=SymGetetp();
struct symbol* nctemp3265= nctemp3267;
struct symbol* nctemp3268=SymLookup(nctemp3260,nctemp3265);
tp =nctemp3268;
int nctemp3253 = (tp ==0);
if(nctemp3253)
{
struct tree* nctemp3271= p;
struct nctempchar1 *nctemp3275;
struct nctempchar1 nctemp3276 = {{ 20}, (char*)"Undeclared function"};
nctemp3275=&nctemp3276;
nctempchar1* nctemp3273= nctemp3275;
struct tree* nctemp3279= p;
nctempchar1* nctemp3281=PtreeGetdef(nctemp3279);
nctempchar1* nctemp3277= nctemp3281;
int nctemp3282=ErrSerror(nctemp3271,nctemp3273,nctemp3277);
return 0;
}
struct symbol* nctemp3289= tp;
nctempchar1* nctemp3291=SymGetfunc(nctemp3289);
nctempchar1* nctemp3287= nctemp3291;
struct nctempchar1 *nctemp3294;
struct nctempchar1 nctemp3295 = {{ 6}, (char*)"fdecl"};
nctemp3294=&nctemp3295;
nctempchar1* nctemp3292= nctemp3294;
int nctemp3296=LibeStrcmp(nctemp3287,nctemp3292);
int nctemp3284 = (nctemp3296 ==0);
if(nctemp3284)
{
struct symbol* nctemp3303= tp;
nctempchar1* nctemp3305=SymGetfunc(nctemp3303);
nctempchar1* nctemp3301= nctemp3305;
struct nctempchar1 *nctemp3308;
struct nctempchar1 nctemp3309 = {{ 5}, (char*)"fdef"};
nctemp3308=&nctemp3309;
nctempchar1* nctemp3306= nctemp3308;
int nctemp3310=LibeStrcmp(nctemp3301,nctemp3306);
int nctemp3298 = (nctemp3310 ==0);
if(nctemp3298)
{
struct tree* nctemp3313= p;
struct nctempchar1 *nctemp3317;
struct nctempchar1 nctemp3318 = {{ 15}, (char*)"Not a function"};
nctemp3317=&nctemp3318;
nctempchar1* nctemp3315= nctemp3317;
struct tree* nctemp3321= p;
nctempchar1* nctemp3323=PtreeGetdef(nctemp3321);
nctempchar1* nctemp3319= nctemp3323;
int nctemp3324=ErrSerror(nctemp3313,nctemp3315,nctemp3319);
return 0;
}
}
struct tree* nctemp3327= p;
struct symbol* nctemp3331= tp;
nctempchar1* nctemp3333=SymGetype(nctemp3331);
nctempchar1* nctemp3329= nctemp3333;
int nctemp3334=PtreeSetype(nctemp3327,nctemp3329);
struct tree* nctemp3336= p;
struct symbol* nctemp3340= tp;
nctempchar1* nctemp3342=SymGetstruct(nctemp3340);
nctempchar1* nctemp3338= nctemp3342;
int nctemp3343=PtreeSetstruct(nctemp3336,nctemp3338);
struct tree* nctemp3345= p;
struct symbol* nctemp3349= tp;
nctempchar1* nctemp3351=SymGetarray(nctemp3349);
nctempchar1* nctemp3347= nctemp3351;
int nctemp3352=PtreeSetarray(nctemp3345,nctemp3347);
struct tree* nctemp3354= p;
struct symbol* nctemp3358= tp;
int nctemp3360=SymGetrank(nctemp3358);
int nctemp3356= nctemp3360;
int nctemp3361=PtreeSetrank(nctemp3354,nctemp3356);
struct tree* nctemp3365= p;
nctempchar1* nctemp3367=PtreeGetarray(nctemp3365);
nctempchar1* nctemp3363= nctemp3367;
struct nctempchar1 *nctemp3370;
struct nctempchar1 nctemp3371 = {{ 6}, (char*)"array"};
nctemp3370=&nctemp3371;
nctempchar1* nctemp3368= nctemp3370;
int nctemp3372=LibeStrcmp(nctemp3363,nctemp3368);
if(nctemp3372)
{
struct tree* nctemp3374= p;
struct nctempchar1 *nctemp3378;
struct nctempchar1 nctemp3379 = {{ 5}, (char*)"aref"};
nctemp3378=&nctemp3379;
nctempchar1* nctemp3376= nctemp3378;
int nctemp3380=PtreeSetref(nctemp3374,nctemp3376);
}
else{
struct tree* nctemp3384= p;
nctempchar1* nctemp3386=PtreeGetstruct(nctemp3384);
nctempchar1* nctemp3382= nctemp3386;
struct nctempchar1 *nctemp3389;
struct nctempchar1 nctemp3390 = {{ 7}, (char*)"struct"};
nctemp3389=&nctemp3390;
nctempchar1* nctemp3387= nctemp3389;
int nctemp3391=LibeStrcmp(nctemp3382,nctemp3387);
if(nctemp3391)
{
struct tree* nctemp3393= p;
struct nctempchar1 *nctemp3397;
struct nctempchar1 nctemp3398 = {{ 5}, (char*)"sref"};
nctemp3397=&nctemp3398;
nctempchar1* nctemp3395= nctemp3397;
int nctemp3399=PtreeSetref(nctemp3393,nctemp3395);
}
}
struct symbol* nctemp3404= tp;
struct symbol* nctemp3406=SymGetable(nctemp3404);
tp =nctemp3406;
struct nctempchar1 *nctemp3413;
struct nctempchar1 nctemp3414 = {{ 9}, (char*)"#arglist"};
nctemp3413=&nctemp3414;
nctempchar1* nctemp3411= nctemp3413;
struct symbol* nctemp3415= tp;
struct symbol* nctemp3417=SymLookup(nctemp3411,nctemp3415);
tp =nctemp3417;
int nctemp3418 = (tp !=0);
if(nctemp3418)
{
struct symbol* nctemp3426= tp;
struct symbol* nctemp3428=SymGetable(nctemp3426);
tp =nctemp3428;
}
struct tree* nctemp3436= p;
struct tree* nctemp3438=PtreeMvchild(nctemp3436);
np =nctemp3438;
int nctemp3429 = (np ==0);
if(nctemp3429)
{
struct symbol* nctemp3447= tp;
struct symbol* nctemp3449=SymMvnext(nctemp3447);
tp =nctemp3449;
int nctemp3440 = (tp !=0);
if(nctemp3440)
{
struct tree* nctemp3452= p;
struct nctempchar1 *nctemp3456;
struct nctempchar1 nctemp3457 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3456=&nctemp3457;
nctempchar1* nctemp3454= nctemp3456;
struct tree* nctemp3460= p;
nctempchar1* nctemp3462=PtreeGetdef(nctemp3460);
nctempchar1* nctemp3458= nctemp3462;
int nctemp3463=ErrSerror(nctemp3452,nctemp3454,nctemp3458);
return 0;
}
return 1;
}
struct tree* nctemp3472= p;
struct tree* nctemp3474=PtreeMvchild(nctemp3472);
struct tree* nctemp3470= nctemp3474;
struct tree* nctemp3475=PtreeMvchild(nctemp3470);
np =nctemp3475;
int nctemp3476 = (np !=0);
int nctemp3480=nctemp3476;
while(nctemp3480)
{{
struct symbol* nctemp3485= tp;
struct symbol* nctemp3487=SymMvnext(nctemp3485);
tp =nctemp3487;
int nctemp3488 = (tp ==0);
if(nctemp3488)
{
struct tree* nctemp3493= p;
struct nctempchar1 *nctemp3497;
struct nctempchar1 nctemp3498 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3497=&nctemp3498;
nctempchar1* nctemp3495= nctemp3497;
struct tree* nctemp3501= p;
nctempchar1* nctemp3503=PtreeGetdef(nctemp3501);
nctempchar1* nctemp3499= nctemp3503;
int nctemp3504=ErrSerror(nctemp3493,nctemp3495,nctemp3499);
return 0;
}
struct symbol* nctemp3511= tp;
nctempchar1* nctemp3513=SymGetype(nctemp3511);
type=nctemp3513;
struct tree* nctemp3515= np;
struct tree* nctemp3517=SemExpr(nctemp3515);
nctempchar1* nctemp3521= type;
struct tree* nctemp3526= np;
nctempchar1* nctemp3528=PtreeGetype(nctemp3526);
nctempchar1* nctemp3524= nctemp3528;
int nctemp3529=LibeStrcmp(nctemp3521,nctemp3524);
int nctemp3518 = (nctemp3529 ==0);
if(nctemp3518)
{
struct tree* nctemp3532= p;
struct nctempchar1 *nctemp3536;
struct nctempchar1 nctemp3537 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3536=&nctemp3537;
nctempchar1* nctemp3534= nctemp3536;
struct tree* nctemp3540= p;
nctempchar1* nctemp3542=PtreeGetdef(nctemp3540);
nctempchar1* nctemp3538= nctemp3542;
int nctemp3543=ErrSerror(nctemp3532,nctemp3534,nctemp3538);
return 0;
}
struct symbol* nctemp3548= tp;
nctempchar1* nctemp3550=SymGetarray(nctemp3548);
nctempchar1* nctemp3546= nctemp3550;
struct nctempchar1 *nctemp3553;
struct nctempchar1 nctemp3554 = {{ 6}, (char*)"array"};
nctemp3553=&nctemp3554;
nctempchar1* nctemp3551= nctemp3553;
int nctemp3555=LibeStrcmp(nctemp3546,nctemp3551);
if(nctemp3555)
{
struct tree* nctemp3561= np;
nctempchar1* nctemp3563=PtreeGetref(nctemp3561);
nctempchar1* nctemp3559= nctemp3563;
struct nctempchar1 *nctemp3566;
struct nctempchar1 nctemp3567 = {{ 5}, (char*)"aref"};
nctemp3566=&nctemp3567;
nctempchar1* nctemp3564= nctemp3566;
int nctemp3568=LibeStrcmp(nctemp3559,nctemp3564);
int nctemp3556 = (nctemp3568 ==0);
if(nctemp3556)
{
struct tree* nctemp3571= p;
struct nctempchar1 *nctemp3575;
struct nctempchar1 nctemp3576 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3575=&nctemp3576;
nctempchar1* nctemp3573= nctemp3575;
struct tree* nctemp3579= p;
nctempchar1* nctemp3581=PtreeGetdef(nctemp3579);
nctempchar1* nctemp3577= nctemp3581;
int nctemp3582=ErrSerror(nctemp3571,nctemp3573,nctemp3577);
}
struct tree* nctemp3586= np;
int nctemp3588=PtreeGetrank(nctemp3586);
struct symbol* nctemp3590= tp;
int nctemp3592=SymGetrank(nctemp3590);
int nctemp3583 = (nctemp3588 !=nctemp3592);
if(nctemp3583)
{
struct tree* nctemp3594= p;
struct nctempchar1 *nctemp3598;
struct nctempchar1 nctemp3599 = {{ 36}, (char*)"Illegal array rank in function call"};
nctemp3598=&nctemp3599;
nctempchar1* nctemp3596= nctemp3598;
struct tree* nctemp3602= p;
nctempchar1* nctemp3604=PtreeGetdef(nctemp3602);
nctempchar1* nctemp3600= nctemp3604;
int nctemp3605=ErrSerror(nctemp3594,nctemp3596,nctemp3600);
}
}
struct tree* nctemp3610= np;
struct tree* nctemp3612=PtreeMvsister(nctemp3610);
np =nctemp3612;
}
int nctemp3613 = (np !=0);
nctemp3480=nctemp3613;}struct symbol* nctemp3620= tp;
struct symbol* nctemp3622=SymMvnext(nctemp3620);
int nctemp3617 = (nctemp3622 !=0);
if(nctemp3617)
{
struct tree* nctemp3625= p;
struct nctempchar1 *nctemp3629;
struct nctempchar1 nctemp3630 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3629=&nctemp3630;
nctempchar1* nctemp3627= nctemp3629;
struct tree* nctemp3633= p;
nctempchar1* nctemp3635=PtreeGetdef(nctemp3633);
nctempchar1* nctemp3631= nctemp3635;
int nctemp3636=ErrSerror(nctemp3625,nctemp3627,nctemp3631);
return 0;
}
}
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
struct nctempchar1 *nctemp3644;
struct nctempchar1 nctemp3645 = {{ 5}, (char*)"void"};
nctemp3644=&nctemp3645;
resultref=nctemp3644;
struct nctempchar1 *nctemp3651;
struct nctempchar1 nctemp3652 = {{ 5}, (char*)"void"};
nctemp3651=&nctemp3652;
expref=nctemp3651;
struct tree* nctemp3656= p;
nctempchar1* nctemp3658=PtreeGetname(nctemp3656);
nctempchar1* nctemp3654= nctemp3658;
struct nctempchar1 *nctemp3661;
struct nctempchar1 nctemp3662 = {{ 5}, (char*)"cast"};
nctemp3661=&nctemp3662;
nctempchar1* nctemp3659= nctemp3661;
int nctemp3663=LibeStrcmp(nctemp3654,nctemp3659);
if(nctemp3663)
{
struct tree* nctemp3668= p;
struct tree* nctemp3670=PtreeMvchild(nctemp3668);
np =nctemp3670;
struct tree* nctemp3676= np;
nctempchar1* nctemp3678=PtreeGetdef(nctemp3676);
resultype=nctemp3678;
struct tree* nctemp3680= np;
nctempchar1* nctemp3682= resultype;
int nctemp3685=PtreeSetype(nctemp3680,nctemp3682);
resultrank =0;
struct tree* nctemp3693= np;
nctempchar1* nctemp3695=PtreeGetarray(nctemp3693);
nctempchar1* nctemp3691= nctemp3695;
struct nctempchar1 *nctemp3698;
struct nctempchar1 nctemp3699 = {{ 6}, (char*)"array"};
nctemp3698=&nctemp3699;
nctempchar1* nctemp3696= nctemp3698;
int nctemp3700=LibeStrcmp(nctemp3691,nctemp3696);
if(nctemp3700)
{
struct tree* nctemp3705= np;
struct tree* nctemp3707=PtreeMvchild(nctemp3705);
sp =nctemp3707;
struct tree* nctemp3712= sp;
struct tree* nctemp3714=PtreeMvchild(nctemp3712);
sp =nctemp3714;
struct tree* nctemp3719= sp;
struct tree* nctemp3721=PtreeMvchild(nctemp3719);
sp =nctemp3721;
struct tree* nctemp3723= sp;
struct tree* nctemp3725=SemExprlist(nctemp3723);
struct tree* nctemp3730= sp;
struct tree* nctemp3732=PtreeMvchild(nctemp3730);
sp =nctemp3732;
resultrank =1;
struct tree* nctemp3744= sp;
struct tree* nctemp3746=PtreeMvsister(nctemp3744);
sp =nctemp3746;
int nctemp3737 = (sp !=0);
int nctemp3748=nctemp3737;
while(nctemp3748)
{{
int nctemp3757 = resultrank + 1;
resultrank =nctemp3757;
}
struct tree* nctemp3765= sp;
struct tree* nctemp3767=PtreeMvsister(nctemp3765);
sp =nctemp3767;
int nctemp3758 = (sp !=0);
nctemp3748=nctemp3758;}struct tree* nctemp3770= np;
int nctemp3772= resultrank;
int nctemp3774=PtreeSetrank(nctemp3770,nctemp3772);
struct tree* nctemp3776= p;
int nctemp3778= resultrank;
int nctemp3780=PtreeSetrank(nctemp3776,nctemp3778);
struct tree* nctemp3782= np;
struct nctempchar1 *nctemp3786;
struct nctempchar1 nctemp3787 = {{ 5}, (char*)"aref"};
nctemp3786=&nctemp3787;
nctempchar1* nctemp3784= nctemp3786;
int nctemp3788=PtreeSetref(nctemp3782,nctemp3784);
struct nctempchar1 *nctemp3796;
struct nctempchar1 nctemp3797 = {{ 5}, (char*)"aref"};
nctemp3796=&nctemp3797;
nctempchar1* nctemp3794= nctemp3796;
nctempchar1* nctemp3798=LibeStrsave(nctemp3794);
resultref=nctemp3798;
}
else{
struct tree* nctemp3802= np;
nctempchar1* nctemp3804=PtreeGetstruct(nctemp3802);
nctempchar1* nctemp3800= nctemp3804;
struct nctempchar1 *nctemp3807;
struct nctempchar1 nctemp3808 = {{ 7}, (char*)"struct"};
nctemp3807=&nctemp3808;
nctempchar1* nctemp3805= nctemp3807;
int nctemp3809=LibeStrcmp(nctemp3800,nctemp3805);
if(nctemp3809)
{
struct tree* nctemp3811= np;
struct nctempchar1 *nctemp3815;
struct nctempchar1 nctemp3816 = {{ 5}, (char*)"sref"};
nctemp3815=&nctemp3816;
nctempchar1* nctemp3813= nctemp3815;
int nctemp3817=PtreeSetref(nctemp3811,nctemp3813);
struct nctempchar1 *nctemp3825;
struct nctempchar1 nctemp3826 = {{ 5}, (char*)"sref"};
nctemp3825=&nctemp3826;
nctempchar1* nctemp3823= nctemp3825;
nctempchar1* nctemp3827=LibeStrsave(nctemp3823);
resultref=nctemp3827;
}
else{
struct nctempchar1 *nctemp3835;
struct nctempchar1 nctemp3836 = {{ 5}, (char*)"void"};
nctemp3835=&nctemp3836;
nctempchar1* nctemp3833= nctemp3835;
nctempchar1* nctemp3837=LibeStrsave(nctemp3833);
resultref=nctemp3837;
}
}
struct tree* nctemp3839= np;
struct tree* nctemp3841= p;
int nctemp3843=SemCopytype(nctemp3839,nctemp3841);
struct tree* nctemp3848= np;
struct tree* nctemp3850=PtreeMvsister(nctemp3848);
np =nctemp3850;
struct tree* nctemp3852= np;
struct tree* nctemp3854=SemExpr(nctemp3852);
struct tree* nctemp3860= np;
nctempchar1* nctemp3862=PtreeGetype(nctemp3860);
exptype=nctemp3862;
struct tree* nctemp3868= np;
nctempchar1* nctemp3870=PtreeGetref(nctemp3868);
expref=nctemp3870;
nctempchar1* nctemp3874= resultref;
nctempchar1* nctemp3877= expref;
int nctemp3880=LibeStrcmp(nctemp3874,nctemp3877);
int nctemp3871 = (nctemp3880 ==0);
if(nctemp3871)
{
struct tree* nctemp3883= p;
struct nctempchar1 *nctemp3887;
struct nctempchar1 nctemp3888 = {{ 19}, (char*)"Illegal conversion"};
nctemp3887=&nctemp3888;
nctempchar1* nctemp3885= nctemp3887;
struct nctempchar1 *nctemp3891;
struct nctempchar1 nctemp3892 = {{ 2}, (char*)" "};
nctemp3891=&nctemp3892;
nctempchar1* nctemp3889= nctemp3891;
int nctemp3893=ErrSerror(nctemp3883,nctemp3885,nctemp3889);
return 0;
}
nctempchar1* nctemp3901= resultref;
struct nctempchar1 *nctemp3906;
struct nctempchar1 nctemp3907 = {{ 5}, (char*)"aref"};
nctemp3906=&nctemp3907;
nctempchar1* nctemp3904= nctemp3906;
int nctemp3908=LibeStrcmp(nctemp3901,nctemp3904);
int nctemp3898 = (nctemp3908 ==0);
nctempchar1* nctemp3914= resultref;
struct nctempchar1 *nctemp3919;
struct nctempchar1 nctemp3920 = {{ 5}, (char*)"sref"};
nctemp3919=&nctemp3920;
nctempchar1* nctemp3917= nctemp3919;
int nctemp3921=LibeStrcmp(nctemp3914,nctemp3917);
int nctemp3911 = (nctemp3921 ==0);
int nctemp3895 = (nctemp3898 || nctemp3911);
if(nctemp3895)
{
nctempchar1* nctemp3924= resultype;
struct nctempchar1 *nctemp3929;
struct nctempchar1 nctemp3930 = {{ 8}, (char*)"complex"};
nctemp3929=&nctemp3930;
nctempchar1* nctemp3927= nctemp3929;
int nctemp3931=LibeStrcmp(nctemp3924,nctemp3927);
if(nctemp3931)
{
struct tree* nctemp3933= p;
struct nctempchar1 *nctemp3937;
struct nctempchar1 nctemp3938 = {{ 19}, (char*)"Illegal conversion"};
nctemp3937=&nctemp3938;
nctempchar1* nctemp3935= nctemp3937;
struct nctempchar1 *nctemp3941;
struct nctempchar1 nctemp3942 = {{ 2}, (char*)" "};
nctemp3941=&nctemp3942;
nctempchar1* nctemp3939= nctemp3941;
int nctemp3943=ErrSerror(nctemp3933,nctemp3935,nctemp3939);
}
return 0;
nctempchar1* nctemp3946= resultype;
struct nctempchar1 *nctemp3951;
struct nctempchar1 nctemp3952 = {{ 4}, (char*)"int"};
nctemp3951=&nctemp3952;
nctempchar1* nctemp3949= nctemp3951;
int nctemp3953=LibeStrcmp(nctemp3946,nctemp3949);
if(nctemp3953)
{
nctempchar1* nctemp3957= exptype;
struct nctempchar1 *nctemp3962;
struct nctempchar1 nctemp3963 = {{ 5}, (char*)"char"};
nctemp3962=&nctemp3963;
nctempchar1* nctemp3960= nctemp3962;
int nctemp3964=LibeStrcmp(nctemp3957,nctemp3960);
int nctemp3954 = (nctemp3964 ==0);
if(nctemp3954)
{
nctempchar1* nctemp3969= exptype;
struct nctempchar1 *nctemp3974;
struct nctempchar1 nctemp3975 = {{ 6}, (char*)"float"};
nctemp3974=&nctemp3975;
nctempchar1* nctemp3972= nctemp3974;
int nctemp3976=LibeStrcmp(nctemp3969,nctemp3972);
int nctemp3966 = (nctemp3976 ==0);
if(nctemp3966)
{
struct tree* nctemp3979= p;
struct nctempchar1 *nctemp3983;
struct nctempchar1 nctemp3984 = {{ 19}, (char*)"Illegal conversion"};
nctemp3983=&nctemp3984;
nctempchar1* nctemp3981= nctemp3983;
struct nctempchar1 *nctemp3987;
struct nctempchar1 nctemp3988 = {{ 2}, (char*)" "};
nctemp3987=&nctemp3988;
nctempchar1* nctemp3985= nctemp3987;
int nctemp3989=ErrSerror(nctemp3979,nctemp3981,nctemp3985);
}
}
return 0;
}
else{
nctempchar1* nctemp3992= resultype;
struct nctempchar1 *nctemp3997;
struct nctempchar1 nctemp3998 = {{ 5}, (char*)"char"};
nctemp3997=&nctemp3998;
nctempchar1* nctemp3995= nctemp3997;
int nctemp3999=LibeStrcmp(nctemp3992,nctemp3995);
if(nctemp3999)
{
nctempchar1* nctemp4003= exptype;
struct nctempchar1 *nctemp4008;
struct nctempchar1 nctemp4009 = {{ 4}, (char*)"int"};
nctemp4008=&nctemp4009;
nctempchar1* nctemp4006= nctemp4008;
int nctemp4010=LibeStrcmp(nctemp4003,nctemp4006);
int nctemp4000 = (nctemp4010 ==0);
if(nctemp4000)
{
struct tree* nctemp4013= p;
struct nctempchar1 *nctemp4017;
struct nctempchar1 nctemp4018 = {{ 19}, (char*)"Illegal conversion"};
nctemp4017=&nctemp4018;
nctempchar1* nctemp4015= nctemp4017;
struct nctempchar1 *nctemp4021;
struct nctempchar1 nctemp4022 = {{ 2}, (char*)" "};
nctemp4021=&nctemp4022;
nctempchar1* nctemp4019= nctemp4021;
int nctemp4023=ErrSerror(nctemp4013,nctemp4015,nctemp4019);
}
return 0;
}
else{
nctempchar1* nctemp4026= resultype;
struct nctempchar1 *nctemp4031;
struct nctempchar1 nctemp4032 = {{ 6}, (char*)"float"};
nctemp4031=&nctemp4032;
nctempchar1* nctemp4029= nctemp4031;
int nctemp4033=LibeStrcmp(nctemp4026,nctemp4029);
if(nctemp4033)
{
nctempchar1* nctemp4037= exptype;
struct nctempchar1 *nctemp4042;
struct nctempchar1 nctemp4043 = {{ 4}, (char*)"int"};
nctemp4042=&nctemp4043;
nctempchar1* nctemp4040= nctemp4042;
int nctemp4044=LibeStrcmp(nctemp4037,nctemp4040);
int nctemp4034 = (nctemp4044 ==0);
if(nctemp4034)
{
struct tree* nctemp4047= np;
struct nctempchar1 *nctemp4051;
struct nctempchar1 nctemp4052 = {{ 19}, (char*)"Illegal conversion"};
nctemp4051=&nctemp4052;
nctempchar1* nctemp4049= nctemp4051;
struct nctempchar1 *nctemp4055;
struct nctempchar1 nctemp4056 = {{ 2}, (char*)" "};
nctemp4055=&nctemp4056;
nctempchar1* nctemp4053= nctemp4055;
int nctemp4057=ErrSerror(nctemp4047,nctemp4049,nctemp4053);
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
struct tree* nctemp4063= p;
nctempchar1* nctemp4065=PtreeGetname(nctemp4063);
nctempchar1* nctemp4061= nctemp4065;
struct nctempchar1 *nctemp4068;
struct nctempchar1 nctemp4069 = {{ 4}, (char*)"new"};
nctemp4068=&nctemp4069;
nctempchar1* nctemp4066= nctemp4068;
int nctemp4070=LibeStrcmp(nctemp4061,nctemp4066);
if(nctemp4070)
{
struct tree* nctemp4075= p;
struct tree* nctemp4077=PtreeMvchild(nctemp4075);
np =nctemp4077;
struct tree* nctemp4079= np;
nctempchar1* nctemp4081=PtreeGetdef(nctemp4079);
struct tree* nctemp4083= np;
struct tree* nctemp4087= np;
nctempchar1* nctemp4089=PtreeGetdef(nctemp4087);
nctempchar1* nctemp4085= nctemp4089;
int nctemp4090=PtreeSetype(nctemp4083,nctemp4085);
struct tree* nctemp4092= np;
struct tree* nctemp4094= p;
int nctemp4096=SemCopytype(nctemp4092,nctemp4094);
struct tree* nctemp4102= np;
nctempchar1* nctemp4104=PtreeGetarray(nctemp4102);
nctempchar1* nctemp4100= nctemp4104;
struct nctempchar1 *nctemp4107;
struct nctempchar1 nctemp4108 = {{ 6}, (char*)"array"};
nctemp4107=&nctemp4108;
nctempchar1* nctemp4105= nctemp4107;
int nctemp4109=LibeStrcmp(nctemp4100,nctemp4105);
int nctemp4097 = (nctemp4109 ==0);
if(nctemp4097)
{
struct tree* nctemp4116= np;
nctempchar1* nctemp4118=PtreeGetstruct(nctemp4116);
nctempchar1* nctemp4114= nctemp4118;
struct nctempchar1 *nctemp4121;
struct nctempchar1 nctemp4122 = {{ 7}, (char*)"struct"};
nctemp4121=&nctemp4122;
nctempchar1* nctemp4119= nctemp4121;
int nctemp4123=LibeStrcmp(nctemp4114,nctemp4119);
int nctemp4111 = (nctemp4123 ==0);
if(nctemp4111)
{
struct tree* nctemp4126= np;
struct nctempchar1 *nctemp4130;
struct nctempchar1 nctemp4131 = {{ 44}, (char*)"Argument limited to array or structure type"};
nctemp4130=&nctemp4131;
nctempchar1* nctemp4128= nctemp4130;
struct nctempchar1 *nctemp4134;
struct nctempchar1 nctemp4135 = {{ 3}, (char*)"  "};
nctemp4134=&nctemp4135;
nctempchar1* nctemp4132= nctemp4134;
int nctemp4136=ErrSerror(nctemp4126,nctemp4128,nctemp4132);
}
}
struct tree* nctemp4140= np;
nctempchar1* nctemp4142=PtreeGetarray(nctemp4140);
nctempchar1* nctemp4138= nctemp4142;
struct nctempchar1 *nctemp4145;
struct nctempchar1 nctemp4146 = {{ 6}, (char*)"array"};
nctemp4145=&nctemp4146;
nctempchar1* nctemp4143= nctemp4145;
int nctemp4147=LibeStrcmp(nctemp4138,nctemp4143);
if(nctemp4147)
{
struct tree* nctemp4152= np;
struct tree* nctemp4154=PtreeMvchild(nctemp4152);
sp =nctemp4154;
struct tree* nctemp4159= sp;
struct tree* nctemp4161=PtreeMvchild(nctemp4159);
sp =nctemp4161;
struct tree* nctemp4166= sp;
struct tree* nctemp4168=PtreeMvchild(nctemp4166);
sp =nctemp4168;
struct tree* nctemp4173= sp;
struct tree* nctemp4175=PtreeMvchild(nctemp4173);
sp =nctemp4175;
rank =1;
int nctemp4180 = (sp ==0);
if(nctemp4180)
{
struct tree* nctemp4185= np;
struct nctempchar1 *nctemp4189;
struct nctempchar1 nctemp4190 = {{ 35}, (char*)"Missing array size in new operator"};
nctemp4189=&nctemp4190;
nctempchar1* nctemp4187= nctemp4189;
struct nctempchar1 *nctemp4193;
struct nctempchar1 nctemp4194 = {{ 2}, (char*)" "};
nctemp4193=&nctemp4194;
nctempchar1* nctemp4191= nctemp4193;
int nctemp4195=ErrSerror(nctemp4185,nctemp4187,nctemp4191);
}
struct tree* nctemp4197= sp;
struct tree* nctemp4199=SemExpr(nctemp4197);
struct tree* nctemp4207= sp;
struct tree* nctemp4209=PtreeMvsister(nctemp4207);
sp =nctemp4209;
int nctemp4200 = (sp !=0);
int nctemp4211=nctemp4200;
while(nctemp4211)
{{
struct tree* nctemp4213= sp;
struct tree* nctemp4215=SemExpr(nctemp4213);
int nctemp4224 = rank + 1;
rank =nctemp4224;
}
struct tree* nctemp4232= sp;
struct tree* nctemp4234=PtreeMvsister(nctemp4232);
sp =nctemp4234;
int nctemp4225 = (sp !=0);
nctemp4211=nctemp4225;}struct tree* nctemp4237= np;
int nctemp4239= rank;
int nctemp4241=PtreeSetrank(nctemp4237,nctemp4239);
struct tree* nctemp4243= p;
int nctemp4245= rank;
int nctemp4247=PtreeSetrank(nctemp4243,nctemp4245);
struct tree* nctemp4249= p;
struct nctempchar1 *nctemp4253;
struct nctempchar1 nctemp4254 = {{ 5}, (char*)"aref"};
nctemp4253=&nctemp4254;
nctempchar1* nctemp4251= nctemp4253;
int nctemp4255=PtreeSetref(nctemp4249,nctemp4251);
}
else{
struct tree* nctemp4257= p;
struct nctempchar1 *nctemp4261;
struct nctempchar1 nctemp4262 = {{ 5}, (char*)"sref"};
nctemp4261=&nctemp4262;
nctempchar1* nctemp4259= nctemp4261;
int nctemp4263=PtreeSetref(nctemp4257,nctemp4259);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp4268= p;
nctempchar1* nctemp4270=PtreeGetname(nctemp4268);
nctempchar1* nctemp4266= nctemp4270;
struct nctempchar1 *nctemp4273;
struct nctempchar1 nctemp4274 = {{ 7}, (char*)"delete"};
nctemp4273=&nctemp4274;
nctempchar1* nctemp4271= nctemp4273;
int nctemp4275=LibeStrcmp(nctemp4266,nctemp4271);
if(nctemp4275)
{
struct tree* nctemp4280= p;
struct tree* nctemp4282=PtreeMvchild(nctemp4280);
np =nctemp4282;
struct tree* nctemp4284= np;
struct tree* nctemp4286=SemExpr(nctemp4284);
struct tree* nctemp4292= np;
nctempchar1* nctemp4294=PtreeGetref(nctemp4292);
nctempchar1* nctemp4290= nctemp4294;
struct nctempchar1 *nctemp4297;
struct nctempchar1 nctemp4298 = {{ 5}, (char*)"aref"};
nctemp4297=&nctemp4298;
nctempchar1* nctemp4295= nctemp4297;
int nctemp4299=LibeStrcmp(nctemp4290,nctemp4295);
int nctemp4287 = (nctemp4299 ==0);
if(nctemp4287)
{
struct tree* nctemp4306= np;
nctempchar1* nctemp4308=PtreeGetref(nctemp4306);
nctempchar1* nctemp4304= nctemp4308;
struct nctempchar1 *nctemp4311;
struct nctempchar1 nctemp4312 = {{ 5}, (char*)"sref"};
nctemp4311=&nctemp4312;
nctempchar1* nctemp4309= nctemp4311;
int nctemp4313=LibeStrcmp(nctemp4304,nctemp4309);
int nctemp4301 = (nctemp4313 ==0);
if(nctemp4301)
{
struct tree* nctemp4316= p;
struct nctempchar1 *nctemp4320;
struct nctempchar1 nctemp4321 = {{ 25}, (char*)"not a array or structure"};
nctemp4320=&nctemp4321;
nctempchar1* nctemp4318= nctemp4320;
struct tree* nctemp4324= p;
nctempchar1* nctemp4326=PtreeGetdef(nctemp4324);
nctempchar1* nctemp4322= nctemp4326;
int nctemp4327=ErrSerror(nctemp4316,nctemp4318,nctemp4322);
}
}
else{
struct tree* nctemp4329= p;
struct tree* nctemp4333= np;
nctempchar1* nctemp4335=PtreeGetype(nctemp4333);
nctempchar1* nctemp4331= nctemp4335;
int nctemp4336=PtreeSetype(nctemp4329,nctemp4331);
struct tree* nctemp4338= p;
struct tree* nctemp4342= np;
nctempchar1* nctemp4344=PtreeGetref(nctemp4342);
nctempchar1* nctemp4340= nctemp4344;
int nctemp4345=PtreeSetref(nctemp4338,nctemp4340);
}
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp4350= p;
nctempchar1* nctemp4352=PtreeGetname(nctemp4350);
nctempchar1* nctemp4348= nctemp4352;
struct nctempchar1 *nctemp4355;
struct nctempchar1 nctemp4356 = {{ 7}, (char*)"sizeof"};
nctemp4355=&nctemp4356;
nctempchar1* nctemp4353= nctemp4355;
int nctemp4357=LibeStrcmp(nctemp4348,nctemp4353);
if(nctemp4357)
{
struct tree* nctemp4359= p;
struct nctempchar1 *nctemp4363;
struct nctempchar1 nctemp4364 = {{ 4}, (char*)"int"};
nctemp4363=&nctemp4364;
nctempchar1* nctemp4361= nctemp4363;
int nctemp4365=PtreeSetype(nctemp4359,nctemp4361);
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp4370= p;
nctempchar1* nctemp4372=PtreeGetname(nctemp4370);
nctempchar1* nctemp4368= nctemp4372;
struct nctempchar1 *nctemp4375;
struct nctempchar1 nctemp4376 = {{ 6}, (char*)"cmplx"};
nctemp4375=&nctemp4376;
nctempchar1* nctemp4373= nctemp4375;
int nctemp4377=LibeStrcmp(nctemp4368,nctemp4373);
if(nctemp4377)
{
struct tree* nctemp4382= p;
struct tree* nctemp4384=PtreeMvchild(nctemp4382);
np =nctemp4384;
struct tree* nctemp4389= np;
struct tree* nctemp4391=PtreeMvchild(nctemp4389);
np =nctemp4391;
struct tree* nctemp4393= np;
struct tree* nctemp4395=SemExpr(nctemp4393);
struct tree* nctemp4401= np;
nctempchar1* nctemp4403=PtreeGetype(nctemp4401);
nctempchar1* nctemp4399= nctemp4403;
struct nctempchar1 *nctemp4406;
struct nctempchar1 nctemp4407 = {{ 6}, (char*)"float"};
nctemp4406=&nctemp4407;
nctempchar1* nctemp4404= nctemp4406;
int nctemp4408=LibeStrcmp(nctemp4399,nctemp4404);
int nctemp4396 = (nctemp4408 ==0);
if(nctemp4396)
{
struct tree* nctemp4411= p;
struct nctempchar1 *nctemp4415;
struct nctempchar1 nctemp4416 = {{ 33}, (char*)"Argument to cmplx is not a float"};
nctemp4415=&nctemp4416;
nctempchar1* nctemp4413= nctemp4415;
struct tree* nctemp4419= p;
nctempchar1* nctemp4421=PtreeGetdef(nctemp4419);
nctempchar1* nctemp4417= nctemp4421;
int nctemp4422=ErrSerror(nctemp4411,nctemp4413,nctemp4417);
return 0;
}
struct tree* nctemp4429= np;
nctempchar1* nctemp4431=PtreeGetref(nctemp4429);
nctempchar1* nctemp4427= nctemp4431;
struct nctempchar1 *nctemp4434;
struct nctempchar1 nctemp4435 = {{ 5}, (char*)"aref"};
nctemp4434=&nctemp4435;
nctempchar1* nctemp4432= nctemp4434;
int nctemp4436=LibeStrcmp(nctemp4427,nctemp4432);
struct tree* nctemp4440= np;
nctempchar1* nctemp4442=PtreeGetref(nctemp4440);
nctempchar1* nctemp4438= nctemp4442;
struct nctempchar1 *nctemp4445;
struct nctempchar1 nctemp4446 = {{ 5}, (char*)"sref"};
nctemp4445=&nctemp4446;
nctempchar1* nctemp4443= nctemp4445;
int nctemp4447=LibeStrcmp(nctemp4438,nctemp4443);
int nctemp4424 = (nctemp4436 || nctemp4447);
if(nctemp4424)
{
struct tree* nctemp4449= p;
struct nctempchar1 *nctemp4453;
struct nctempchar1 nctemp4454 = {{ 34}, (char*)"Argument to cmplx is not a scalar"};
nctemp4453=&nctemp4454;
nctempchar1* nctemp4451= nctemp4453;
struct tree* nctemp4457= p;
nctempchar1* nctemp4459=PtreeGetdef(nctemp4457);
nctempchar1* nctemp4455= nctemp4459;
int nctemp4460=ErrSerror(nctemp4449,nctemp4451,nctemp4455);
return 0;
}
struct tree* nctemp4466= np;
struct tree* nctemp4468=PtreeMvsister(nctemp4466);
np =nctemp4468;
struct tree* nctemp4470= np;
struct tree* nctemp4472=SemExpr(nctemp4470);
struct tree* nctemp4478= np;
nctempchar1* nctemp4480=PtreeGetype(nctemp4478);
nctempchar1* nctemp4476= nctemp4480;
struct nctempchar1 *nctemp4483;
struct nctempchar1 nctemp4484 = {{ 6}, (char*)"float"};
nctemp4483=&nctemp4484;
nctempchar1* nctemp4481= nctemp4483;
int nctemp4485=LibeStrcmp(nctemp4476,nctemp4481);
int nctemp4473 = (nctemp4485 ==0);
if(nctemp4473)
{
struct tree* nctemp4488= p;
struct nctempchar1 *nctemp4492;
struct nctempchar1 nctemp4493 = {{ 33}, (char*)"Argument to cmplx is not a float"};
nctemp4492=&nctemp4493;
nctempchar1* nctemp4490= nctemp4492;
struct tree* nctemp4496= p;
nctempchar1* nctemp4498=PtreeGetdef(nctemp4496);
nctempchar1* nctemp4494= nctemp4498;
int nctemp4499=ErrSerror(nctemp4488,nctemp4490,nctemp4494);
}
struct tree* nctemp4505= np;
nctempchar1* nctemp4507=PtreeGetref(nctemp4505);
nctempchar1* nctemp4503= nctemp4507;
struct nctempchar1 *nctemp4510;
struct nctempchar1 nctemp4511 = {{ 5}, (char*)"aref"};
nctemp4510=&nctemp4511;
nctempchar1* nctemp4508= nctemp4510;
int nctemp4512=LibeStrcmp(nctemp4503,nctemp4508);
struct tree* nctemp4516= np;
nctempchar1* nctemp4518=PtreeGetref(nctemp4516);
nctempchar1* nctemp4514= nctemp4518;
struct nctempchar1 *nctemp4521;
struct nctempchar1 nctemp4522 = {{ 5}, (char*)"sref"};
nctemp4521=&nctemp4522;
nctempchar1* nctemp4519= nctemp4521;
int nctemp4523=LibeStrcmp(nctemp4514,nctemp4519);
int nctemp4500 = (nctemp4512 || nctemp4523);
if(nctemp4500)
{
struct tree* nctemp4525= p;
struct nctempchar1 *nctemp4529;
struct nctempchar1 nctemp4530 = {{ 34}, (char*)"Argument to cmplx is not a scalar"};
nctemp4529=&nctemp4530;
nctempchar1* nctemp4527= nctemp4529;
struct tree* nctemp4533= p;
nctempchar1* nctemp4535=PtreeGetdef(nctemp4533);
nctempchar1* nctemp4531= nctemp4535;
int nctemp4536=ErrSerror(nctemp4525,nctemp4527,nctemp4531);
return 0;
}
struct tree* nctemp4539= p;
struct nctempchar1 *nctemp4543;
struct nctempchar1 nctemp4544 = {{ 8}, (char*)"complex"};
nctemp4543=&nctemp4544;
nctempchar1* nctemp4541= nctemp4543;
int nctemp4545=PtreeSetype(nctemp4539,nctemp4541);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp4550= p;
nctempchar1* nctemp4552=PtreeGetname(nctemp4550);
nctempchar1* nctemp4548= nctemp4552;
struct nctempchar1 *nctemp4555;
struct nctempchar1 nctemp4556 = {{ 3}, (char*)"re"};
nctemp4555=&nctemp4556;
nctempchar1* nctemp4553= nctemp4555;
int nctemp4557=LibeStrcmp(nctemp4548,nctemp4553);
if(nctemp4557)
{
struct tree* nctemp4562= p;
struct tree* nctemp4564=PtreeMvchild(nctemp4562);
np =nctemp4564;
struct tree* nctemp4566= np;
struct tree* nctemp4568=SemExpr(nctemp4566);
struct tree* nctemp4574= np;
nctempchar1* nctemp4576=PtreeGetype(nctemp4574);
nctempchar1* nctemp4572= nctemp4576;
struct nctempchar1 *nctemp4579;
struct nctempchar1 nctemp4580 = {{ 8}, (char*)"complex"};
nctemp4579=&nctemp4580;
nctempchar1* nctemp4577= nctemp4579;
int nctemp4581=LibeStrcmp(nctemp4572,nctemp4577);
int nctemp4569 = (nctemp4581 ==0);
if(nctemp4569)
{
struct tree* nctemp4584= p;
struct nctempchar1 *nctemp4588;
struct nctempchar1 nctemp4589 = {{ 40}, (char*)"Argument to re is not a of type complex"};
nctemp4588=&nctemp4589;
nctempchar1* nctemp4586= nctemp4588;
struct tree* nctemp4592= p;
nctempchar1* nctemp4594=PtreeGetdef(nctemp4592);
nctempchar1* nctemp4590= nctemp4594;
int nctemp4595=ErrSerror(nctemp4584,nctemp4586,nctemp4590);
return 0;
}
struct tree* nctemp4602= np;
nctempchar1* nctemp4604=PtreeGetref(nctemp4602);
nctempchar1* nctemp4600= nctemp4604;
struct nctempchar1 *nctemp4607;
struct nctempchar1 nctemp4608 = {{ 5}, (char*)"aref"};
nctemp4607=&nctemp4608;
nctempchar1* nctemp4605= nctemp4607;
int nctemp4609=LibeStrcmp(nctemp4600,nctemp4605);
struct tree* nctemp4613= np;
nctempchar1* nctemp4615=PtreeGetref(nctemp4613);
nctempchar1* nctemp4611= nctemp4615;
struct nctempchar1 *nctemp4618;
struct nctempchar1 nctemp4619 = {{ 5}, (char*)"sref"};
nctemp4618=&nctemp4619;
nctempchar1* nctemp4616= nctemp4618;
int nctemp4620=LibeStrcmp(nctemp4611,nctemp4616);
int nctemp4597 = (nctemp4609 || nctemp4620);
if(nctemp4597)
{
struct tree* nctemp4622= p;
struct nctempchar1 *nctemp4626;
struct nctempchar1 nctemp4627 = {{ 31}, (char*)"Argument to re is not a scalar"};
nctemp4626=&nctemp4627;
nctempchar1* nctemp4624= nctemp4626;
struct tree* nctemp4630= p;
nctempchar1* nctemp4632=PtreeGetdef(nctemp4630);
nctempchar1* nctemp4628= nctemp4632;
int nctemp4633=ErrSerror(nctemp4622,nctemp4624,nctemp4628);
return 0;
}
struct tree* nctemp4636= p;
struct nctempchar1 *nctemp4640;
struct nctempchar1 nctemp4641 = {{ 6}, (char*)"float"};
nctemp4640=&nctemp4641;
nctempchar1* nctemp4638= nctemp4640;
int nctemp4642=PtreeSetype(nctemp4636,nctemp4638);
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp4647= p;
nctempchar1* nctemp4649=PtreeGetname(nctemp4647);
nctempchar1* nctemp4645= nctemp4649;
struct nctempchar1 *nctemp4652;
struct nctempchar1 nctemp4653 = {{ 3}, (char*)"im"};
nctemp4652=&nctemp4653;
nctempchar1* nctemp4650= nctemp4652;
int nctemp4654=LibeStrcmp(nctemp4645,nctemp4650);
if(nctemp4654)
{
struct tree* nctemp4659= p;
struct tree* nctemp4661=PtreeMvchild(nctemp4659);
np =nctemp4661;
struct tree* nctemp4663= np;
struct tree* nctemp4665=SemExpr(nctemp4663);
struct tree* nctemp4671= np;
nctempchar1* nctemp4673=PtreeGetype(nctemp4671);
nctempchar1* nctemp4669= nctemp4673;
struct nctempchar1 *nctemp4676;
struct nctempchar1 nctemp4677 = {{ 8}, (char*)"complex"};
nctemp4676=&nctemp4677;
nctempchar1* nctemp4674= nctemp4676;
int nctemp4678=LibeStrcmp(nctemp4669,nctemp4674);
int nctemp4666 = (nctemp4678 ==0);
if(nctemp4666)
{
struct tree* nctemp4681= p;
struct nctempchar1 *nctemp4685;
struct nctempchar1 nctemp4686 = {{ 38}, (char*)"Argument to re is not of type complex"};
nctemp4685=&nctemp4686;
nctempchar1* nctemp4683= nctemp4685;
struct tree* nctemp4689= p;
nctempchar1* nctemp4691=PtreeGetdef(nctemp4689);
nctempchar1* nctemp4687= nctemp4691;
int nctemp4692=ErrSerror(nctemp4681,nctemp4683,nctemp4687);
return 0;
}
struct tree* nctemp4699= np;
nctempchar1* nctemp4701=PtreeGetref(nctemp4699);
nctempchar1* nctemp4697= nctemp4701;
struct nctempchar1 *nctemp4704;
struct nctempchar1 nctemp4705 = {{ 5}, (char*)"aref"};
nctemp4704=&nctemp4705;
nctempchar1* nctemp4702= nctemp4704;
int nctemp4706=LibeStrcmp(nctemp4697,nctemp4702);
struct tree* nctemp4710= np;
nctempchar1* nctemp4712=PtreeGetref(nctemp4710);
nctempchar1* nctemp4708= nctemp4712;
struct nctempchar1 *nctemp4715;
struct nctempchar1 nctemp4716 = {{ 5}, (char*)"sref"};
nctemp4715=&nctemp4716;
nctempchar1* nctemp4713= nctemp4715;
int nctemp4717=LibeStrcmp(nctemp4708,nctemp4713);
int nctemp4694 = (nctemp4706 || nctemp4717);
if(nctemp4694)
{
struct tree* nctemp4719= p;
struct nctempchar1 *nctemp4723;
struct nctempchar1 nctemp4724 = {{ 31}, (char*)"Argument to re is not a scalar"};
nctemp4723=&nctemp4724;
nctempchar1* nctemp4721= nctemp4723;
struct tree* nctemp4727= p;
nctempchar1* nctemp4729=PtreeGetdef(nctemp4727);
nctempchar1* nctemp4725= nctemp4729;
int nctemp4730=ErrSerror(nctemp4719,nctemp4721,nctemp4725);
return 0;
}
struct tree* nctemp4733= p;
struct nctempchar1 *nctemp4737;
struct nctempchar1 nctemp4738 = {{ 6}, (char*)"float"};
nctemp4737=&nctemp4738;
nctempchar1* nctemp4735= nctemp4737;
int nctemp4739=PtreeSetype(nctemp4733,nctemp4735);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp4746= p;
nctempchar1* nctemp4748=PtreeGetname(nctemp4746);
nctempchar1* nctemp4744= nctemp4748;
struct nctempchar1 *nctemp4751;
struct nctempchar1 nctemp4752 = {{ 4}, (char*)"len"};
nctemp4751=&nctemp4752;
nctempchar1* nctemp4749= nctemp4751;
int nctemp4753=LibeStrcmp(nctemp4744,nctemp4749);
int nctemp4741 = (nctemp4753 ==1);
if(nctemp4741)
{
struct tree* nctemp4756= p;
struct nctempchar1 *nctemp4760;
struct nctempchar1 nctemp4761 = {{ 4}, (char*)"int"};
nctemp4760=&nctemp4761;
nctempchar1* nctemp4758= nctemp4760;
int nctemp4762=PtreeSetype(nctemp4756,nctemp4758);
struct tree* nctemp4767= p;
struct tree* nctemp4769=PtreeMvchild(nctemp4767);
np =nctemp4769;
struct tree* nctemp4771= np;
struct tree* nctemp4773=SemExpr(nctemp4771);
struct tree* nctemp4779= np;
nctempchar1* nctemp4781=PtreeGetref(nctemp4779);
nctempchar1* nctemp4777= nctemp4781;
struct nctempchar1 *nctemp4784;
struct nctempchar1 nctemp4785 = {{ 5}, (char*)"aref"};
nctemp4784=&nctemp4785;
nctempchar1* nctemp4782= nctemp4784;
int nctemp4786=LibeStrcmp(nctemp4777,nctemp4782);
int nctemp4774 = (nctemp4786 ==0);
if(nctemp4774)
{
struct tree* nctemp4789= p;
struct nctempchar1 *nctemp4793;
struct nctempchar1 nctemp4794 = {{ 13}, (char*)"not an array"};
nctemp4793=&nctemp4794;
nctempchar1* nctemp4791= nctemp4793;
struct tree* nctemp4797= p;
nctempchar1* nctemp4799=PtreeGetdef(nctemp4797);
nctempchar1* nctemp4795= nctemp4799;
int nctemp4800=ErrSerror(nctemp4789,nctemp4791,nctemp4795);
}
struct tree* nctemp4805= np;
struct tree* nctemp4807=PtreeMvsister(nctemp4805);
np =nctemp4807;
struct tree* nctemp4809= np;
struct tree* nctemp4811=SemExpr(nctemp4809);
struct tree* nctemp4815= np;
nctempchar1* nctemp4817=PtreeGetref(nctemp4815);
nctempchar1* nctemp4813= nctemp4817;
struct nctempchar1 *nctemp4820;
struct nctempchar1 nctemp4821 = {{ 5}, (char*)"aref"};
nctemp4820=&nctemp4821;
nctempchar1* nctemp4818= nctemp4820;
int nctemp4822=LibeStrcmp(nctemp4813,nctemp4818);
if(nctemp4822)
{
struct tree* nctemp4824= p;
struct nctempchar1 *nctemp4828;
struct nctempchar1 nctemp4829 = {{ 13}, (char*)"not a scalar"};
nctemp4828=&nctemp4829;
nctempchar1* nctemp4826= nctemp4828;
struct tree* nctemp4832= p;
nctempchar1* nctemp4834=PtreeGetdef(nctemp4832);
nctempchar1* nctemp4830= nctemp4834;
int nctemp4835=ErrSerror(nctemp4824,nctemp4826,nctemp4830);
}
struct tree* nctemp4841= np;
nctempchar1* nctemp4843=PtreeGetype(nctemp4841);
nctempchar1* nctemp4839= nctemp4843;
struct nctempchar1 *nctemp4846;
struct nctempchar1 nctemp4847 = {{ 4}, (char*)"int"};
nctemp4846=&nctemp4847;
nctempchar1* nctemp4844= nctemp4846;
int nctemp4848=LibeStrcmp(nctemp4839,nctemp4844);
int nctemp4836 = (nctemp4848 ==0);
if(nctemp4836)
{
struct tree* nctemp4851= p;
struct nctempchar1 *nctemp4855;
struct nctempchar1 nctemp4856 = {{ 26}, (char*)"not an integer expression"};
nctemp4855=&nctemp4856;
nctempchar1* nctemp4853= nctemp4855;
struct tree* nctemp4859= p;
nctempchar1* nctemp4861=PtreeGetdef(nctemp4859);
nctempchar1* nctemp4857= nctemp4861;
int nctemp4862=ErrSerror(nctemp4851,nctemp4853,nctemp4857);
}
struct tree* nctemp4870= np;
struct tree* nctemp4872=PtreeMvsister(nctemp4870);
np =nctemp4872;
int nctemp4863 = (np !=0);
if(nctemp4863)
{
struct tree* nctemp4875= p;
struct nctempchar1 *nctemp4879;
struct nctempchar1 nctemp4880 = {{ 19}, (char*)"too many arguments"};
nctemp4879=&nctemp4880;
nctempchar1* nctemp4877= nctemp4879;
struct tree* nctemp4883= p;
nctempchar1* nctemp4885=PtreeGetdef(nctemp4883);
nctempchar1* nctemp4881= nctemp4885;
int nctemp4886=ErrSerror(nctemp4875,nctemp4877,nctemp4881);
}
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp4893= p;
nctempchar1* nctemp4895=PtreeGetarray(nctemp4893);
nctempchar1* nctemp4891= nctemp4895;
struct nctempchar1 *nctemp4898;
struct nctempchar1 nctemp4899 = {{ 6}, (char*)"array"};
nctemp4898=&nctemp4899;
nctempchar1* nctemp4896= nctemp4898;
int nctemp4900=LibeStrcmp(nctemp4891,nctemp4896);
int nctemp4888 = (nctemp4900 ==0);
if(nctemp4888)
{
struct tree* nctemp4903= p;
struct nctempchar1 *nctemp4907;
struct nctempchar1 nctemp4908 = {{ 13}, (char*)"Not an array"};
nctemp4907=&nctemp4908;
nctempchar1* nctemp4905= nctemp4907;
struct tree* nctemp4911= p;
nctempchar1* nctemp4913=PtreeGetdef(nctemp4911);
nctempchar1* nctemp4909= nctemp4913;
int nctemp4914=ErrSerror(nctemp4903,nctemp4905,nctemp4909);
return 0;
}
struct tree* nctemp4917= p;
struct nctempchar1 *nctemp4921;
struct nctempchar1 nctemp4922 = {{ 11}, (char*)"identifier"};
nctemp4921=&nctemp4922;
nctempchar1* nctemp4919= nctemp4921;
int nctemp4923=PtreeSetname(nctemp4917,nctemp4919);
struct tree* nctemp4928= p;
struct tree* nctemp4930=PtreeMvchild(nctemp4928);
np =nctemp4930;
struct tree* nctemp4936= np;
nctempchar1* nctemp4938=PtreeGetname(nctemp4936);
nctempchar1* nctemp4934= nctemp4938;
struct nctempchar1 *nctemp4941;
struct nctempchar1 nctemp4942 = {{ 9}, (char*)"exprlist"};
nctemp4941=&nctemp4942;
nctempchar1* nctemp4939= nctemp4941;
int nctemp4943=LibeStrcmp(nctemp4934,nctemp4939);
int nctemp4931 = (nctemp4943 ==0);
if(nctemp4931)
{
struct tree* nctemp4946= p;
struct nctempchar1 *nctemp4950;
struct nctempchar1 nctemp4951 = {{ 22}, (char*)"Missing array indexes"};
nctemp4950=&nctemp4951;
nctempchar1* nctemp4948= nctemp4950;
struct tree* nctemp4954= p;
nctempchar1* nctemp4956=PtreeGetdef(nctemp4954);
nctempchar1* nctemp4952= nctemp4956;
int nctemp4957=ErrSerror(nctemp4946,nctemp4948,nctemp4952);
return 0;
}
struct tree* nctemp4966= np;
struct tree* nctemp4968=PtreeMvchild(nctemp4966);
np =nctemp4968;
int nctemp4959 = (np !=0);
if(nctemp4959)
{
rank =0;
int nctemp4974 = (np !=0);
int nctemp4978=nctemp4974;
while(nctemp4978)
{{
struct tree* nctemp4980= np;
struct tree* nctemp4982=SemExpr(nctemp4980);
struct tree* nctemp4987= np;
struct tree* nctemp4989=PtreeMvsister(nctemp4987);
np =nctemp4989;
int nctemp4998 = rank + 1;
rank =nctemp4998;
}
int nctemp4999 = (np !=0);
nctemp4978=nctemp4999;}}
struct symbol* nctemp5007= tp;
int nctemp5009=SymGetrank(nctemp5007);
int nctemp5003 = (rank !=nctemp5009);
if(nctemp5003)
{
struct tree* nctemp5011= p;
struct nctempchar1 *nctemp5015;
struct nctempchar1 nctemp5016 = {{ 24}, (char*)"Illegal array dimension"};
nctemp5015=&nctemp5016;
nctempchar1* nctemp5013= nctemp5015;
struct tree* nctemp5019= p;
nctempchar1* nctemp5021=PtreeGetdef(nctemp5019);
nctempchar1* nctemp5017= nctemp5021;
int nctemp5022=ErrSerror(nctemp5011,nctemp5013,nctemp5017);
return 0;
}
struct tree* nctemp5025= p;
int nctemp5027= rank;
int nctemp5029=PtreeSetrank(nctemp5025,nctemp5027);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp5036= p;
nctempchar1* nctemp5038=PtreeGetstruct(nctemp5036);
nctempchar1* nctemp5034= nctemp5038;
struct nctempchar1 *nctemp5041;
struct nctempchar1 nctemp5042 = {{ 7}, (char*)"struct"};
nctemp5041=&nctemp5042;
nctempchar1* nctemp5039= nctemp5041;
int nctemp5043=LibeStrcmp(nctemp5034,nctemp5039);
int nctemp5031 = (nctemp5043 ==0);
if(nctemp5031)
{
struct tree* nctemp5046= p;
struct nctempchar1 *nctemp5050;
struct nctempchar1 nctemp5051 = {{ 16}, (char*)"Not a structure"};
nctemp5050=&nctemp5051;
nctempchar1* nctemp5048= nctemp5050;
struct tree* nctemp5054= p;
nctempchar1* nctemp5056=PtreeGetdef(nctemp5054);
nctempchar1* nctemp5052= nctemp5056;
int nctemp5057=ErrSerror(nctemp5046,nctemp5048,nctemp5052);
return 0;
}
struct tree* nctemp5060= p;
struct nctempchar1 *nctemp5064;
struct nctempchar1 nctemp5065 = {{ 11}, (char*)"identifier"};
nctemp5064=&nctemp5065;
nctempchar1* nctemp5062= nctemp5064;
int nctemp5066=PtreeSetname(nctemp5060,nctemp5062);
struct symbol* nctemp5072= tp;
nctempchar1* nctemp5074=SymGetype(nctemp5072);
temp=nctemp5074;
nctempchar1* nctemp5082= temp;
struct symbol* nctemp5085=SymLook(nctemp5082);
up =nctemp5085;
int nctemp5075 = (up ==0);
if(nctemp5075)
{
nctempchar1* nctemp5094= temp;
struct symbol* nctemp5097=SymLook(nctemp5094);
up =nctemp5097;
int nctemp5087 = (up ==0);
if(nctemp5087)
{
struct tree* nctemp5100= p;
struct nctempchar1 *nctemp5104;
struct nctempchar1 nctemp5105 = {{ 26}, (char*)"Undeclared structure type"};
nctemp5104=&nctemp5105;
nctempchar1* nctemp5102= nctemp5104;
struct nctempchar1 *nctemp5108;
struct nctempchar1 nctemp5109 = {{ 2}, (char*)" "};
nctemp5108=&nctemp5109;
nctempchar1* nctemp5106= nctemp5108;
int nctemp5110=ErrSerror(nctemp5100,nctemp5102,nctemp5106);
return 0;
}
}
struct symbol* nctemp5115= tp;
nctempchar1* nctemp5117=SymGetstruct(nctemp5115);
nctempchar1* nctemp5113= nctemp5117;
struct nctempchar1 *nctemp5120;
struct nctempchar1 nctemp5121 = {{ 10}, (char*)"structdef"};
nctemp5120=&nctemp5121;
nctempchar1* nctemp5118= nctemp5120;
int nctemp5122=LibeStrcmp(nctemp5113,nctemp5118);
if(nctemp5122)
{
struct tree* nctemp5124= p;
struct nctempchar1 *nctemp5128;
struct nctempchar1 nctemp5129 = {{ 43}, (char*)"Struct names can not be used as a variable"};
nctemp5128=&nctemp5129;
nctempchar1* nctemp5126= nctemp5128;
struct tree* nctemp5132= p;
nctempchar1* nctemp5134=PtreeGetdef(nctemp5132);
nctempchar1* nctemp5130= nctemp5134;
int nctemp5135=ErrSerror(nctemp5124,nctemp5126,nctemp5130);
return 0;
}
struct tree* nctemp5141= p;
struct tree* nctemp5143=PtreeMvchild(nctemp5141);
np =nctemp5143;
int nctemp5144 = (np ==0);
if(nctemp5144)
{
struct tree* nctemp5149= p;
struct nctempchar1 *nctemp5153;
struct nctempchar1 nctemp5154 = {{ 27}, (char*)"Missing structure selector"};
nctemp5153=&nctemp5154;
nctempchar1* nctemp5151= nctemp5153;
struct tree* nctemp5157= p;
nctempchar1* nctemp5159=PtreeGetdef(nctemp5157);
nctempchar1* nctemp5155= nctemp5159;
int nctemp5160=ErrSerror(nctemp5149,nctemp5151,nctemp5155);
return 0;
}
struct tree* nctemp5165= p;
nctempchar1* nctemp5167=PtreeGetarray(nctemp5165);
nctempchar1* nctemp5163= nctemp5167;
struct nctempchar1 *nctemp5170;
struct nctempchar1 nctemp5171 = {{ 6}, (char*)"array"};
nctemp5170=&nctemp5171;
nctempchar1* nctemp5168= nctemp5170;
int nctemp5172=LibeStrcmp(nctemp5163,nctemp5168);
if(nctemp5172)
{
struct tree* nctemp5177= np;
struct tree* nctemp5179=PtreeMvsister(nctemp5177);
np =nctemp5179;
}
int nctemp5180 = (np ==0);
if(nctemp5180)
{
struct tree* nctemp5185= p;
struct nctempchar1 *nctemp5189;
struct nctempchar1 nctemp5190 = {{ 20}, (char*)"Missing array index"};
nctemp5189=&nctemp5190;
nctempchar1* nctemp5187= nctemp5189;
struct tree* nctemp5193= p;
nctempchar1* nctemp5195=PtreeGetdef(nctemp5193);
nctempchar1* nctemp5191= nctemp5195;
int nctemp5196=ErrSerror(nctemp5185,nctemp5187,nctemp5191);
return 0;
}
struct symbol* nctemp5202= up;
struct symbol* nctemp5204=SymGetable(nctemp5202);
uup =nctemp5204;
struct tree* nctemp5214= np;
nctempchar1* nctemp5216=PtreeGetdef(nctemp5214);
nctempchar1* nctemp5212= nctemp5216;
struct symbol* nctemp5217= uup;
struct symbol* nctemp5219=SymLookup(nctemp5212,nctemp5217);
tp =nctemp5219;
int nctemp5205 = (tp ==0);
if(nctemp5205)
{
struct tree* nctemp5222= np;
struct nctempchar1 *nctemp5226;
struct nctempchar1 nctemp5227 = {{ 28}, (char*)"Undeclared structure member"};
nctemp5226=&nctemp5227;
nctempchar1* nctemp5224= nctemp5226;
struct tree* nctemp5230= np;
nctempchar1* nctemp5232=PtreeGetdef(nctemp5230);
nctempchar1* nctemp5228= nctemp5232;
int nctemp5233=ErrSerror(nctemp5222,nctemp5224,nctemp5228);
return 0;
}
struct symbol* nctemp5238= tp;
nctempchar1* nctemp5240=SymGetarray(nctemp5238);
nctempchar1* nctemp5236= nctemp5240;
struct nctempchar1 *nctemp5243;
struct nctempchar1 nctemp5244 = {{ 6}, (char*)"array"};
nctemp5243=&nctemp5244;
nctempchar1* nctemp5241= nctemp5243;
int nctemp5245=LibeStrcmp(nctemp5236,nctemp5241);
if(nctemp5245)
{
struct tree* nctemp5249= np;
struct tree* nctemp5251=PtreeMvchild(nctemp5249);
int nctemp5246 = (nctemp5251 !=0);
if(nctemp5246)
{
struct tree* nctemp5254= np;
struct symbol* nctemp5256= tp;
int nctemp5258=SemArray(nctemp5254,nctemp5256);
struct symbol* nctemp5262= tp;
nctempchar1* nctemp5264=SymGetstruct(nctemp5262);
nctempchar1* nctemp5260= nctemp5264;
struct nctempchar1 *nctemp5267;
struct nctempchar1 nctemp5268 = {{ 7}, (char*)"struct"};
nctemp5267=&nctemp5268;
nctempchar1* nctemp5265= nctemp5267;
int nctemp5269=LibeStrcmp(nctemp5260,nctemp5265);
if(nctemp5269)
{
struct tree* nctemp5271= np;
struct nctempchar1 *nctemp5275;
struct nctempchar1 nctemp5276 = {{ 5}, (char*)"sref"};
nctemp5275=&nctemp5276;
nctempchar1* nctemp5273= nctemp5275;
int nctemp5277=PtreeSetref(nctemp5271,nctemp5273);
}
}
else{
struct tree* nctemp5279= np;
struct nctempchar1 *nctemp5283;
struct nctempchar1 nctemp5284 = {{ 5}, (char*)"aref"};
nctemp5283=&nctemp5284;
nctempchar1* nctemp5281= nctemp5283;
int nctemp5285=PtreeSetref(nctemp5279,nctemp5281);
}
}
else{
struct symbol* nctemp5289= tp;
nctempchar1* nctemp5291=SymGetstruct(nctemp5289);
nctempchar1* nctemp5287= nctemp5291;
struct nctempchar1 *nctemp5294;
struct nctempchar1 nctemp5295 = {{ 7}, (char*)"struct"};
nctemp5294=&nctemp5295;
nctempchar1* nctemp5292= nctemp5294;
int nctemp5296=LibeStrcmp(nctemp5287,nctemp5292);
if(nctemp5296)
{
struct tree* nctemp5298= np;
struct nctempchar1 *nctemp5302;
struct nctempchar1 nctemp5303 = {{ 5}, (char*)"sref"};
nctemp5302=&nctemp5303;
nctempchar1* nctemp5300= nctemp5302;
int nctemp5304=PtreeSetref(nctemp5298,nctemp5300);
}
}
struct tree* nctemp5306= np;
struct symbol* nctemp5310= tp;
nctempchar1* nctemp5312=SymGetype(nctemp5310);
nctempchar1* nctemp5308= nctemp5312;
int nctemp5313=PtreeSetype(nctemp5306,nctemp5308);
struct tree* nctemp5315= np;
struct symbol* nctemp5319= tp;
nctempchar1* nctemp5321=SymGetarray(nctemp5319);
nctempchar1* nctemp5317= nctemp5321;
int nctemp5322=PtreeSetarray(nctemp5315,nctemp5317);
struct tree* nctemp5324= np;
struct symbol* nctemp5328= tp;
int nctemp5330=SymGetrank(nctemp5328);
int nctemp5326= nctemp5330;
int nctemp5331=PtreeSetrank(nctemp5324,nctemp5326);
struct tree* nctemp5333= np;
struct symbol* nctemp5337= tp;
nctempchar1* nctemp5339=SymGetlval(nctemp5337);
nctempchar1* nctemp5335= nctemp5339;
int nctemp5340=PtreeSetlval(nctemp5333,nctemp5335);
struct tree* nctemp5342= p;
struct symbol* nctemp5346= tp;
nctempchar1* nctemp5348=SymGetype(nctemp5346);
nctempchar1* nctemp5344= nctemp5348;
int nctemp5349=PtreeSetype(nctemp5342,nctemp5344);
struct tree* nctemp5351= p;
struct tree* nctemp5355= np;
nctempchar1* nctemp5357=PtreeGetref(nctemp5355);
nctempchar1* nctemp5353= nctemp5357;
int nctemp5358=PtreeSetref(nctemp5351,nctemp5353);
struct tree* nctemp5360= p;
struct symbol* nctemp5364= tp;
int nctemp5366=SymGetrank(nctemp5364);
int nctemp5362= nctemp5366;
int nctemp5367=PtreeSetrank(nctemp5360,nctemp5362);
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp5372= p;
nctempchar1* nctemp5374=PtreeGetname(nctemp5372);
nctempchar1* nctemp5370= nctemp5374;
struct nctempchar1 *nctemp5377;
struct nctempchar1 nctemp5378 = {{ 9}, (char*)"exprlist"};
nctemp5377=&nctemp5378;
nctempchar1* nctemp5375= nctemp5377;
int nctemp5379=LibeStrcmp(nctemp5370,nctemp5375);
if(nctemp5379)
{
struct tree* nctemp5384= p;
struct tree* nctemp5386=PtreeMvchild(nctemp5384);
p =nctemp5386;
int nctemp5387 = (p !=0);
int nctemp5391=nctemp5387;
while(nctemp5391)
{{
struct tree* nctemp5393= p;
struct tree* nctemp5395=SemExpr(nctemp5393);
struct tree* nctemp5400= p;
struct tree* nctemp5402=PtreeMvsister(nctemp5400);
p =nctemp5402;
}
int nctemp5403 = (p !=0);
nctemp5391=nctemp5403;}}
return p;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval =1;
struct tree* nctemp5417= p;
nctempchar1* nctemp5419=PtreeGetype(nctemp5417);
nctempchar1* nctemp5415= nctemp5419;
struct tree* nctemp5422= np;
nctempchar1* nctemp5424=PtreeGetype(nctemp5422);
nctempchar1* nctemp5420= nctemp5424;
int nctemp5425=LibeStrcmp(nctemp5415,nctemp5420);
int nctemp5412 = (nctemp5425 ==0);
if(nctemp5412)
{
rval =0;
}
struct tree* nctemp5436= p;
nctempchar1* nctemp5438=PtreeGetref(nctemp5436);
nctempchar1* nctemp5434= nctemp5438;
struct tree* nctemp5441= np;
nctempchar1* nctemp5443=PtreeGetref(nctemp5441);
nctempchar1* nctemp5439= nctemp5443;
int nctemp5444=LibeStrcmp(nctemp5434,nctemp5439);
int nctemp5431 = (nctemp5444 ==0);
if(nctemp5431)
{
struct tree* nctemp5449= np;
nctempchar1* nctemp5451=PtreeGetname(nctemp5449);
nctempchar1* nctemp5447= nctemp5451;
struct nctempchar1 *nctemp5454;
struct nctempchar1 nctemp5455 = {{ 10}, (char*)"iconstant"};
nctemp5454=&nctemp5455;
nctempchar1* nctemp5452= nctemp5454;
int nctemp5456=LibeStrcmp(nctemp5447,nctemp5452);
if(nctemp5456)
{
struct tree* nctemp5460= np;
nctempchar1* nctemp5462=PtreeGetdef(nctemp5460);
nctempchar1* nctemp5458= nctemp5462;
struct nctempchar1 *nctemp5465;
struct nctempchar1 nctemp5466 = {{ 2}, (char*)"0"};
nctemp5465=&nctemp5466;
nctempchar1* nctemp5463= nctemp5465;
int nctemp5467=LibeStrcmp(nctemp5458,nctemp5463);
if(nctemp5467)
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
struct tree* nctemp5485= p;
nctempchar1* nctemp5487=PtreeGetref(nctemp5485);
nctempchar1* nctemp5483= nctemp5487;
struct nctempchar1 *nctemp5490;
struct nctempchar1 nctemp5491 = {{ 5}, (char*)"aref"};
nctemp5490=&nctemp5491;
nctempchar1* nctemp5488= nctemp5490;
int nctemp5492=LibeStrcmp(nctemp5483,nctemp5488);
int nctemp5480 = (nctemp5492 ==1);
if(nctemp5480)
{
struct tree* nctemp5497= p;
int nctemp5499=PtreeGetrank(nctemp5497);
struct tree* nctemp5501= np;
int nctemp5503=PtreeGetrank(nctemp5501);
int nctemp5494 = (nctemp5499 !=nctemp5503);
if(nctemp5494)
{
rval =0;
}
}
}
return rval;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp5510= np;
struct tree* nctemp5514= p;
nctempchar1* nctemp5516=PtreeGetype(nctemp5514);
nctempchar1* nctemp5512= nctemp5516;
int nctemp5517=PtreeSetype(nctemp5510,nctemp5512);
struct tree* nctemp5519= np;
struct tree* nctemp5523= p;
nctempchar1* nctemp5525=PtreeGetstruct(nctemp5523);
nctempchar1* nctemp5521= nctemp5525;
int nctemp5526=PtreeSetstruct(nctemp5519,nctemp5521);
struct tree* nctemp5528= np;
struct tree* nctemp5532= p;
nctempchar1* nctemp5534=PtreeGetarray(nctemp5532);
nctempchar1* nctemp5530= nctemp5534;
int nctemp5535=PtreeSetarray(nctemp5528,nctemp5530);
struct tree* nctemp5537= np;
struct tree* nctemp5541= p;
nctempchar1* nctemp5543=PtreeGetref(nctemp5541);
nctempchar1* nctemp5539= nctemp5543;
int nctemp5544=PtreeSetref(nctemp5537,nctemp5539);
struct tree* nctemp5546= np;
struct tree* nctemp5550= p;
nctempchar1* nctemp5552=PtreeGetlval(nctemp5550);
nctempchar1* nctemp5548= nctemp5552;
int nctemp5553=PtreeSetlval(nctemp5546,nctemp5548);
struct tree* nctemp5555= np;
struct tree* nctemp5559= p;
int nctemp5561=PtreeGetrank(nctemp5559);
int nctemp5557= nctemp5561;
int nctemp5562=PtreeSetrank(nctemp5555,nctemp5557);
return 1;
}
int SemCopyparallel (struct tree* p,struct tree* np)
{
struct tree* nctemp5565= p;
struct tree* nctemp5569= np;
nctempchar1* nctemp5571=PtreeGetparallel(nctemp5569);
nctempchar1* nctemp5567= nctemp5571;
int nctemp5572=PtreeSetparallel(nctemp5565,nctemp5567);
return 1;
}
