/*  Translated by epsc  version December 2021 */
#include <stddef.h>
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
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
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
float LibeClock ();
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
typedef struct nctempsymbol1 {int d[1]; struct symbol *a; } nctempsymbol1;
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
typedef struct nctemptree1 {int d[1]; struct tree *a; } nctemptree1;
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
nctemp1168=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp1168->d[0]=l;
nctemp1168->a=(char *)malloc(sizeof(char)*nctemp1169);
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
free(s->a);
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
int parflag;
parflag =0;
q =p;
struct tree* nctemp1333= p;
struct tree* nctemp1335=PtreeMvchild(nctemp1333);
p =nctemp1335;
int nctemp1336 = (p ==0);
if(nctemp1336)
{
return 1;
}
struct tree* nctemp1344= p;
nctempchar1* nctemp1346=PtreeGetname(nctemp1344);
nctempchar1* nctemp1342= nctemp1346;
struct nctempchar1 *nctemp1349;
struct nctempchar1 nctemp1350 = {{ 13}, (char*)"declarations"};
nctemp1349=&nctemp1350;
nctempchar1* nctemp1347= nctemp1349;
int nctemp1351=LibeStrcmp(nctemp1342,nctemp1347);
if(nctemp1351)
{
struct tree* nctemp1355= p;
struct tree* nctemp1357=PtreeMvchild(nctemp1355);
struct tree* nctemp1353= nctemp1357;
struct symbol* nctemp1360=SymGetltp();
struct symbol* nctemp1358= nctemp1360;
int nctemp1361=SemDeclarations(nctemp1353,nctemp1358);
struct tree* nctemp1366= p;
struct tree* nctemp1368=PtreeMvsister(nctemp1366);
p =nctemp1368;
}
int nctemp1369 = (p !=0);
int nctemp1373=nctemp1369;
while(nctemp1373)
{{
struct tree* nctemp1377= p;
nctempchar1* nctemp1379=PtreeGetname(nctemp1377);
nctempchar1* nctemp1375= nctemp1379;
struct nctempchar1 *nctemp1382;
struct nctempchar1 nctemp1383 = {{ 5}, (char*)"expr"};
nctemp1382=&nctemp1383;
nctempchar1* nctemp1380= nctemp1382;
int nctemp1384=LibeStrcmp(nctemp1375,nctemp1380);
if(nctemp1384)
{
struct tree* nctemp1386= p;
struct tree* nctemp1388=SemExpr(nctemp1386);
struct tree* nctemp1390= p;
int nctemp1392= 1;
int nctemp1394=PtreeSetopexpr(nctemp1390,nctemp1392);
}
struct tree* nctemp1398= p;
nctempchar1* nctemp1400=PtreeGetname(nctemp1398);
nctempchar1* nctemp1396= nctemp1400;
struct nctempchar1 *nctemp1403;
struct nctempchar1 nctemp1404 = {{ 6}, (char*)"while"};
nctemp1403=&nctemp1404;
nctempchar1* nctemp1401= nctemp1403;
int nctemp1405=LibeStrcmp(nctemp1396,nctemp1401);
if(nctemp1405)
{
struct tree* nctemp1407= p;
int nctemp1409=SemWhilestmnt(nctemp1407);
}
struct tree* nctemp1413= p;
nctempchar1* nctemp1415=PtreeGetname(nctemp1413);
nctempchar1* nctemp1411= nctemp1415;
struct nctempchar1 *nctemp1418;
struct nctempchar1 nctemp1419 = {{ 4}, (char*)"for"};
nctemp1418=&nctemp1419;
nctempchar1* nctemp1416= nctemp1418;
int nctemp1420=LibeStrcmp(nctemp1411,nctemp1416);
if(nctemp1420)
{
struct tree* nctemp1422= p;
int nctemp1424=SemForstmnt(nctemp1422);
}
struct tree* nctemp1428= p;
nctempchar1* nctemp1430=PtreeGetname(nctemp1428);
nctempchar1* nctemp1426= nctemp1430;
struct nctempchar1 *nctemp1433;
struct nctempchar1 nctemp1434 = {{ 9}, (char*)"parallel"};
nctemp1433=&nctemp1434;
nctempchar1* nctemp1431= nctemp1433;
int nctemp1435=LibeStrcmp(nctemp1426,nctemp1431);
if(nctemp1435)
{
struct tree* nctemp1437= p;
int nctemp1439=SemParallelstmnt(nctemp1437);
struct tree* nctemp1441= p;
struct nctempchar1 *nctemp1445;
struct nctempchar1 nctemp1446 = {{ 9}, (char*)"parallel"};
nctemp1445=&nctemp1446;
nctempchar1* nctemp1443= nctemp1445;
int nctemp1447=PtreeSetparallel(nctemp1441,nctemp1443);
}
struct tree* nctemp1451= p;
nctempchar1* nctemp1453=PtreeGetname(nctemp1451);
nctempchar1* nctemp1449= nctemp1453;
struct nctempchar1 *nctemp1456;
struct nctempchar1 nctemp1457 = {{ 3}, (char*)"if"};
nctemp1456=&nctemp1457;
nctempchar1* nctemp1454= nctemp1456;
int nctemp1458=LibeStrcmp(nctemp1449,nctemp1454);
if(nctemp1458)
{
struct tree* nctemp1460= p;
int nctemp1462=SemIfstmnt(nctemp1460);
}
struct tree* nctemp1466= p;
nctempchar1* nctemp1468=PtreeGetname(nctemp1466);
nctempchar1* nctemp1464= nctemp1468;
struct nctempchar1 *nctemp1471;
struct nctempchar1 nctemp1472 = {{ 7}, (char*)"return"};
nctemp1471=&nctemp1472;
nctempchar1* nctemp1469= nctemp1471;
int nctemp1473=LibeStrcmp(nctemp1464,nctemp1469);
if(nctemp1473)
{
struct tree* nctemp1475= p;
int nctemp1477=SemReturnstmnt(nctemp1475);
}
struct tree* nctemp1481= p;
nctempchar1* nctemp1483=PtreeGetparallel(nctemp1481);
nctempchar1* nctemp1479= nctemp1483;
struct nctempchar1 *nctemp1486;
struct nctempchar1 nctemp1487 = {{ 9}, (char*)"parallel"};
nctemp1486=&nctemp1487;
nctempchar1* nctemp1484= nctemp1486;
int nctemp1488=LibeStrcmp(nctemp1479,nctemp1484);
if(nctemp1488)
{
parflag =1;
}
struct tree* nctemp1497= p;
struct tree* nctemp1499=PtreeMvsister(nctemp1497);
p =nctemp1499;
}
int nctemp1500 = (p !=0);
nctemp1373=nctemp1500;}int nctemp1504 = (parflag ==1);
if(nctemp1504)
{
struct tree* nctemp1509= q;
struct nctempchar1 *nctemp1513;
struct nctempchar1 nctemp1514 = {{ 9}, (char*)"parallel"};
nctemp1513=&nctemp1514;
nctempchar1* nctemp1511= nctemp1513;
int nctemp1515=PtreeSetparallel(nctemp1509,nctemp1511);
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp1528= p;
nctempchar1* nctemp1530=PtreeGetname(nctemp1528);
nctempchar1* nctemp1526= nctemp1530;
struct nctempchar1 *nctemp1533;
struct nctempchar1 nctemp1534 = {{ 13}, (char*)"declarations"};
nctemp1533=&nctemp1534;
nctempchar1* nctemp1531= nctemp1533;
int nctemp1535=LibeStrcmp(nctemp1526,nctemp1531);
if(nctemp1535)
{
struct tree* nctemp1537= p;
struct symbol* nctemp1541=SymGetltp();
struct symbol* nctemp1539= nctemp1541;
int nctemp1542=SemDeclarations(nctemp1537,nctemp1539);
struct tree* nctemp1547= p;
struct tree* nctemp1549=PtreeMvsister(nctemp1547);
p =nctemp1549;
}
int nctemp1550 = (p !=0);
int nctemp1554=nctemp1550;
while(nctemp1554)
{{
struct tree* nctemp1558= p;
nctempchar1* nctemp1560=PtreeGetname(nctemp1558);
nctempchar1* nctemp1556= nctemp1560;
struct nctempchar1 *nctemp1563;
struct nctempchar1 nctemp1564 = {{ 5}, (char*)"expr"};
nctemp1563=&nctemp1564;
nctempchar1* nctemp1561= nctemp1563;
int nctemp1565=LibeStrcmp(nctemp1556,nctemp1561);
if(nctemp1565)
{
struct tree* nctemp1567= p;
struct tree* nctemp1569=SemExpr(nctemp1567);
struct tree* nctemp1571= p;
int nctemp1573= 1;
int nctemp1575=PtreeSetopexpr(nctemp1571,nctemp1573);
}
struct tree* nctemp1579= p;
nctempchar1* nctemp1581=PtreeGetname(nctemp1579);
nctempchar1* nctemp1577= nctemp1581;
struct nctempchar1 *nctemp1584;
struct nctempchar1 nctemp1585 = {{ 10}, (char*)"compstmnt"};
nctemp1584=&nctemp1585;
nctempchar1* nctemp1582= nctemp1584;
int nctemp1586=LibeStrcmp(nctemp1577,nctemp1582);
if(nctemp1586)
{
struct tree* nctemp1588= p;
int nctemp1590=SemCompstmnt(nctemp1588);
}
struct tree* nctemp1594= p;
nctempchar1* nctemp1596=PtreeGetname(nctemp1594);
nctempchar1* nctemp1592= nctemp1596;
struct nctempchar1 *nctemp1599;
struct nctempchar1 nctemp1600 = {{ 6}, (char*)"while"};
nctemp1599=&nctemp1600;
nctempchar1* nctemp1597= nctemp1599;
int nctemp1601=LibeStrcmp(nctemp1592,nctemp1597);
if(nctemp1601)
{
struct tree* nctemp1603= p;
int nctemp1605=SemWhilestmnt(nctemp1603);
}
struct tree* nctemp1609= p;
nctempchar1* nctemp1611=PtreeGetname(nctemp1609);
nctempchar1* nctemp1607= nctemp1611;
struct nctempchar1 *nctemp1614;
struct nctempchar1 nctemp1615 = {{ 4}, (char*)"for"};
nctemp1614=&nctemp1615;
nctempchar1* nctemp1612= nctemp1614;
int nctemp1616=LibeStrcmp(nctemp1607,nctemp1612);
if(nctemp1616)
{
struct tree* nctemp1618= p;
int nctemp1620=SemForstmnt(nctemp1618);
}
struct tree* nctemp1624= p;
nctempchar1* nctemp1626=PtreeGetname(nctemp1624);
nctempchar1* nctemp1622= nctemp1626;
struct nctempchar1 *nctemp1629;
struct nctempchar1 nctemp1630 = {{ 9}, (char*)"parallel"};
nctemp1629=&nctemp1630;
nctempchar1* nctemp1627= nctemp1629;
int nctemp1631=LibeStrcmp(nctemp1622,nctemp1627);
if(nctemp1631)
{
parflag =1;
}
struct tree* nctemp1639= p;
nctempchar1* nctemp1641=PtreeGetname(nctemp1639);
nctempchar1* nctemp1637= nctemp1641;
struct nctempchar1 *nctemp1644;
struct nctempchar1 nctemp1645 = {{ 3}, (char*)"if"};
nctemp1644=&nctemp1645;
nctempchar1* nctemp1642= nctemp1644;
int nctemp1646=LibeStrcmp(nctemp1637,nctemp1642);
if(nctemp1646)
{
struct tree* nctemp1648= p;
int nctemp1650=SemIfstmnt(nctemp1648);
}
struct tree* nctemp1654= p;
nctempchar1* nctemp1656=PtreeGetname(nctemp1654);
nctempchar1* nctemp1652= nctemp1656;
struct nctempchar1 *nctemp1659;
struct nctempchar1 nctemp1660 = {{ 7}, (char*)"return"};
nctemp1659=&nctemp1660;
nctempchar1* nctemp1657= nctemp1659;
int nctemp1661=LibeStrcmp(nctemp1652,nctemp1657);
if(nctemp1661)
{
struct tree* nctemp1663= p;
int nctemp1665=SemReturnstmnt(nctemp1663);
}
struct tree* nctemp1670= p;
struct tree* nctemp1672=PtreeMvsister(nctemp1670);
p =nctemp1672;
}
int nctemp1673 = (p !=0);
nctemp1554=nctemp1673;}int nctemp1677 = (parflag ==1);
if(nctemp1677)
{
struct tree* nctemp1682= q;
struct nctempchar1 *nctemp1686;
struct nctempchar1 nctemp1687 = {{ 9}, (char*)"parallel"};
nctemp1686=&nctemp1687;
nctempchar1* nctemp1684= nctemp1686;
int nctemp1688=PtreeSetparallel(nctemp1682,nctemp1684);
}
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp1698= p;
struct tree* nctemp1700=PtreeMvchild(nctemp1698);
p =nctemp1700;
struct tree* nctemp1702= p;
struct tree* nctemp1704=SemExpr(nctemp1702);
struct tree* nctemp1706= p;
int nctemp1708= 1;
int nctemp1710=PtreeSetopexpr(nctemp1706,nctemp1708);
struct tree* nctemp1715= p;
struct tree* nctemp1717=PtreeMvsister(nctemp1715);
p =nctemp1717;
struct tree* nctemp1719= p;
int nctemp1721=SemStmnt(nctemp1719);
struct tree* nctemp1723= q;
struct tree* nctemp1725= p;
int nctemp1727=SemCopyparallel(nctemp1723,nctemp1725);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp1737= p;
struct tree* nctemp1739=PtreeMvchild(nctemp1737);
p =nctemp1739;
struct tree* nctemp1741= p;
struct tree* nctemp1743=SemExpr(nctemp1741);
struct tree* nctemp1745= p;
int nctemp1747= 1;
int nctemp1749=PtreeSetopexpr(nctemp1745,nctemp1747);
struct tree* nctemp1754= p;
struct tree* nctemp1756=PtreeMvsister(nctemp1754);
p =nctemp1756;
struct tree* nctemp1758= p;
struct tree* nctemp1760=SemExpr(nctemp1758);
struct tree* nctemp1762= p;
int nctemp1764= 1;
int nctemp1766=PtreeSetopexpr(nctemp1762,nctemp1764);
struct tree* nctemp1771= p;
struct tree* nctemp1773=PtreeMvsister(nctemp1771);
p =nctemp1773;
struct tree* nctemp1775= p;
struct tree* nctemp1777=SemExpr(nctemp1775);
struct tree* nctemp1779= p;
int nctemp1781= 1;
int nctemp1783=PtreeSetopexpr(nctemp1779,nctemp1781);
struct tree* nctemp1788= p;
struct tree* nctemp1790=PtreeMvsister(nctemp1788);
p =nctemp1790;
struct tree* nctemp1792= p;
int nctemp1794=SemStmnt(nctemp1792);
struct tree* nctemp1796= q;
struct tree* nctemp1798= p;
int nctemp1800=SemCopyparallel(nctemp1796,nctemp1798);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank =0;
struct tree* nctemp1810= p;
struct tree* nctemp1812=PtreeMvchild(nctemp1810);
sp =nctemp1812;
struct tree* nctemp1817= sp;
struct tree* nctemp1819=PtreeMvchild(nctemp1817);
sp =nctemp1819;
int nctemp1820 = (sp !=0);
int nctemp1824=nctemp1820;
while(nctemp1824)
{{
struct tree* nctemp1829= sp;
struct tree* nctemp1831=PtreeMvchild(nctemp1829);
rp =nctemp1831;
struct tree* nctemp1833= rp;
struct tree* nctemp1835=SemExpr(nctemp1833);
struct tree* nctemp1837= rp;
int nctemp1839= 1;
int nctemp1841=PtreeSetopexpr(nctemp1837,nctemp1839);
struct tree* nctemp1846= rp;
struct tree* nctemp1848=PtreeMvsister(nctemp1846);
rp =nctemp1848;
struct tree* nctemp1850= rp;
struct tree* nctemp1852=SemExpr(nctemp1850);
struct tree* nctemp1854= rp;
int nctemp1856= 1;
int nctemp1858=PtreeSetopexpr(nctemp1854,nctemp1856);
struct tree* nctemp1866= rp;
struct tree* nctemp1868=PtreeMvsister(nctemp1866);
rp =nctemp1868;
int nctemp1859 = (rp !=0);
if(nctemp1859)
{
struct tree* nctemp1871= rp;
struct tree* nctemp1873=SemExpr(nctemp1871);
struct tree* nctemp1875= rp;
int nctemp1877= 1;
int nctemp1879=PtreeSetopexpr(nctemp1875,nctemp1877);
}
struct tree* nctemp1883= sp;
struct tree* nctemp1885=PtreeMvsister(nctemp1883);
int nctemp1880 = (nctemp1885 !=0);
if(nctemp1880)
{
struct tree* nctemp1891= sp;
struct tree* nctemp1893=PtreeMvsister(nctemp1891);
rp =nctemp1893;
}
struct tree* nctemp1898= sp;
struct tree* nctemp1900=PtreeMvsister(nctemp1898);
sp =nctemp1900;
int nctemp1909 = rank + 1;
rank =nctemp1909;
}
int nctemp1910 = (sp !=0);
nctemp1824=nctemp1910;}struct tree* nctemp1915= p;
int nctemp1917= rank;
int nctemp1919=PtreeSetrank(nctemp1915,nctemp1917);
struct tree* nctemp1924= p;
struct tree* nctemp1926=PtreeMvchild(nctemp1924);
sp =nctemp1926;
struct tree* nctemp1931= sp;
struct tree* nctemp1933=PtreeMvsister(nctemp1931);
sp =nctemp1933;
struct tree* nctemp1935= sp;
int nctemp1937=SemStmnt(nctemp1935);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp1947= p;
struct tree* nctemp1949=PtreeMvchild(nctemp1947);
p =nctemp1949;
struct tree* nctemp1951= p;
struct tree* nctemp1953=SemExpr(nctemp1951);
struct tree* nctemp1955= p;
int nctemp1957= 1;
int nctemp1959=PtreeSetopexpr(nctemp1955,nctemp1957);
struct tree* nctemp1964= p;
struct tree* nctemp1966=PtreeMvsister(nctemp1964);
p =nctemp1966;
struct tree* nctemp1968= p;
int nctemp1970=SemStmnt(nctemp1968);
struct tree* nctemp1972= q;
struct tree* nctemp1974= p;
int nctemp1976=SemCopyparallel(nctemp1972,nctemp1974);
struct tree* nctemp1984= p;
struct tree* nctemp1986=PtreeMvsister(nctemp1984);
p =nctemp1986;
int nctemp1977 = (p !=0);
if(nctemp1977)
{
struct tree* nctemp1991= p;
nctempchar1* nctemp1993=PtreeGetname(nctemp1991);
nctempchar1* nctemp1989= nctemp1993;
struct nctempchar1 *nctemp1996;
struct nctempchar1 nctemp1997 = {{ 5}, (char*)"else"};
nctemp1996=&nctemp1997;
nctempchar1* nctemp1994= nctemp1996;
int nctemp1998=LibeStrcmp(nctemp1989,nctemp1994);
if(nctemp1998)
{
struct tree* nctemp2003= p;
struct tree* nctemp2005=PtreeMvchild(nctemp2003);
p =nctemp2005;
struct tree* nctemp2007= p;
int nctemp2009=SemStmnt(nctemp2007);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp2015= p;
struct tree* nctemp2017=PtreeMvchild(nctemp2015);
sp =nctemp2017;
int nctemp2018 = (sp !=0);
if(nctemp2018)
{
struct tree* nctemp2023= sp;
struct tree* nctemp2025=SemExpr(nctemp2023);
struct tree* nctemp2027= sp;
int nctemp2029= 1;
int nctemp2031=PtreeSetopexpr(nctemp2027,nctemp2029);
struct nctempchar1 *nctemp2038;
struct nctempchar1 nctemp2039 = {{ 6}, (char*)"#self"};
nctemp2038=&nctemp2039;
nctempchar1* nctemp2036= nctemp2038;
struct symbol* nctemp2042=SymGetltp();
struct symbol* nctemp2040= nctemp2042;
struct symbol* nctemp2043=SymLookup(nctemp2036,nctemp2040);
up =nctemp2043;
struct symbol* nctemp2050= up;
nctempchar1* nctemp2052=SymGetfunc(nctemp2050);
nctempchar1* nctemp2048= nctemp2052;
struct symbol* nctemp2053=SymLook(nctemp2048);
up =nctemp2053;
struct tree* nctemp2055= p;
struct symbol* nctemp2059= up;
nctempchar1* nctemp2061=SymGetype(nctemp2059);
nctempchar1* nctemp2057= nctemp2061;
int nctemp2062=PtreeSetype(nctemp2055,nctemp2057);
struct tree* nctemp2064= p;
struct symbol* nctemp2068= up;
nctempchar1* nctemp2070=SymGetstruct(nctemp2068);
nctempchar1* nctemp2066= nctemp2070;
int nctemp2071=PtreeSetstruct(nctemp2064,nctemp2066);
struct tree* nctemp2073= p;
struct symbol* nctemp2077= up;
nctempchar1* nctemp2079=SymGetarray(nctemp2077);
nctempchar1* nctemp2075= nctemp2079;
int nctemp2080=PtreeSetarray(nctemp2073,nctemp2075);
struct tree* nctemp2082= p;
struct tree* nctemp2086= sp;
nctempchar1* nctemp2088=PtreeGetref(nctemp2086);
nctempchar1* nctemp2084= nctemp2088;
int nctemp2089=PtreeSetref(nctemp2082,nctemp2084);
struct tree* nctemp2091= p;
struct symbol* nctemp2095= up;
int nctemp2097=SymGetrank(nctemp2095);
int nctemp2093= nctemp2097;
int nctemp2098=PtreeSetrank(nctemp2091,nctemp2093);
struct tree* nctemp2102= p;
struct tree* nctemp2104= sp;
int nctemp2106=SemComparetype(nctemp2102,nctemp2104);
int nctemp2099 = (nctemp2106 ==0);
if(nctemp2099)
{
struct tree* nctemp2109= p;
struct nctempchar1 *nctemp2113;
struct nctempchar1 nctemp2114 = {{ 26}, (char*)"Return type is incorrect "};
nctemp2113=&nctemp2114;
nctempchar1* nctemp2111= nctemp2113;
struct nctempchar1 *nctemp2117;
struct nctempchar1 nctemp2118 = {{ 2}, (char*)" "};
nctemp2117=&nctemp2118;
nctempchar1* nctemp2115= nctemp2117;
int nctemp2119=ErrSerror(nctemp2109,nctemp2111,nctemp2115);
}
}
return 1;
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp2125= p;
struct tree* nctemp2127=PtreeMvchild(nctemp2125);
sp =nctemp2127;
struct tree* nctemp2132= sp;
struct tree* nctemp2134=SemBinexpr(nctemp2132);
sp =nctemp2134;
struct tree* nctemp2136= sp;
struct tree* nctemp2138= p;
int nctemp2140=SemCopytype(nctemp2136,nctemp2138);
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np =p;
struct tree* nctemp2149= p;
nctempchar1* nctemp2151=PtreeGetname(nctemp2149);
nctempchar1* nctemp2147= nctemp2151;
struct nctempchar1 *nctemp2154;
struct nctempchar1 nctemp2155 = {{ 8}, (char*)"binexpr"};
nctemp2154=&nctemp2155;
nctempchar1* nctemp2152= nctemp2154;
int nctemp2156=LibeStrcmp(nctemp2147,nctemp2152);
if(nctemp2156)
{
struct tree* nctemp2161= p;
struct tree* nctemp2163=PtreeMvchild(nctemp2161);
p =nctemp2163;
struct tree* nctemp2168= p;
struct tree* nctemp2170=SemUnexpr(nctemp2168);
leftp =nctemp2170;
struct tree* nctemp2175= p;
struct tree* nctemp2177=PtreeMvsister(nctemp2175);
p =nctemp2177;
struct tree* nctemp2182= p;
struct tree* nctemp2184=SemUnexpr(nctemp2182);
rightp =nctemp2184;
struct tree* nctemp2188= leftp;
struct tree* nctemp2190= rightp;
int nctemp2192=SemComparetype(nctemp2188,nctemp2190);
int nctemp2185 = (nctemp2192 ==0);
if(nctemp2185)
{
struct tree* nctemp2195= p;
struct nctempchar1 *nctemp2199;
struct nctempchar1 nctemp2200 = {{ 11}, (char*)"Type error"};
nctemp2199=&nctemp2200;
nctempchar1* nctemp2197= nctemp2199;
struct nctempchar1 *nctemp2203;
struct nctempchar1 nctemp2204 = {{ 2}, (char*)" "};
nctemp2203=&nctemp2204;
nctempchar1* nctemp2201= nctemp2203;
int nctemp2205=ErrSerror(nctemp2195,nctemp2197,nctemp2201);
return p;
}
else{
struct tree* nctemp2210= np;
nctempchar1* nctemp2212=PtreeGetdef(nctemp2210);
nctempchar1* nctemp2208= nctemp2212;
struct nctempchar1 *nctemp2215;
struct nctempchar1 nctemp2216 = {{ 2}, (char*)"="};
nctemp2215=&nctemp2216;
nctempchar1* nctemp2213= nctemp2215;
int nctemp2217=LibeStrcmp(nctemp2208,nctemp2213);
if(nctemp2217)
{
struct tree* nctemp2219= np;
struct tree* nctemp2221=SemAsgexpr(nctemp2219);
}
else{
struct tree* nctemp2245= np;
nctempchar1* nctemp2247=PtreeGetdef(nctemp2245);
nctempchar1* nctemp2243= nctemp2247;
struct nctempchar1 *nctemp2250;
struct nctempchar1 nctemp2251 = {{ 3}, (char*)"!="};
nctemp2250=&nctemp2251;
nctempchar1* nctemp2248= nctemp2250;
int nctemp2252=LibeStrcmp(nctemp2243,nctemp2248);
struct tree* nctemp2256= np;
nctempchar1* nctemp2258=PtreeGetdef(nctemp2256);
nctempchar1* nctemp2254= nctemp2258;
struct nctempchar1 *nctemp2261;
struct nctempchar1 nctemp2262 = {{ 3}, (char*)"=="};
nctemp2261=&nctemp2262;
nctempchar1* nctemp2259= nctemp2261;
int nctemp2263=LibeStrcmp(nctemp2254,nctemp2259);
int nctemp2240 = (nctemp2252 || nctemp2263);
struct tree* nctemp2267= np;
nctempchar1* nctemp2269=PtreeGetdef(nctemp2267);
nctempchar1* nctemp2265= nctemp2269;
struct nctempchar1 *nctemp2272;
struct nctempchar1 nctemp2273 = {{ 3}, (char*)"||"};
nctemp2272=&nctemp2273;
nctempchar1* nctemp2270= nctemp2272;
int nctemp2274=LibeStrcmp(nctemp2265,nctemp2270);
int nctemp2237 = (nctemp2240 || nctemp2274);
struct tree* nctemp2278= np;
nctempchar1* nctemp2280=PtreeGetdef(nctemp2278);
nctempchar1* nctemp2276= nctemp2280;
struct nctempchar1 *nctemp2283;
struct nctempchar1 nctemp2284 = {{ 3}, (char*)"<="};
nctemp2283=&nctemp2284;
nctempchar1* nctemp2281= nctemp2283;
int nctemp2285=LibeStrcmp(nctemp2276,nctemp2281);
int nctemp2234 = (nctemp2237 || nctemp2285);
struct tree* nctemp2289= np;
nctempchar1* nctemp2291=PtreeGetdef(nctemp2289);
nctempchar1* nctemp2287= nctemp2291;
struct nctempchar1 *nctemp2294;
struct nctempchar1 nctemp2295 = {{ 3}, (char*)">="};
nctemp2294=&nctemp2295;
nctempchar1* nctemp2292= nctemp2294;
int nctemp2296=LibeStrcmp(nctemp2287,nctemp2292);
int nctemp2231 = (nctemp2234 || nctemp2296);
struct tree* nctemp2300= np;
nctempchar1* nctemp2302=PtreeGetdef(nctemp2300);
nctempchar1* nctemp2298= nctemp2302;
struct nctempchar1 *nctemp2305;
struct nctempchar1 nctemp2306 = {{ 2}, (char*)"<"};
nctemp2305=&nctemp2306;
nctempchar1* nctemp2303= nctemp2305;
int nctemp2307=LibeStrcmp(nctemp2298,nctemp2303);
int nctemp2228 = (nctemp2231 || nctemp2307);
struct tree* nctemp2311= np;
nctempchar1* nctemp2313=PtreeGetdef(nctemp2311);
nctempchar1* nctemp2309= nctemp2313;
struct nctempchar1 *nctemp2316;
struct nctempchar1 nctemp2317 = {{ 2}, (char*)">"};
nctemp2316=&nctemp2317;
nctempchar1* nctemp2314= nctemp2316;
int nctemp2318=LibeStrcmp(nctemp2309,nctemp2314);
int nctemp2225 = (nctemp2228 || nctemp2318);
struct tree* nctemp2322= np;
nctempchar1* nctemp2324=PtreeGetdef(nctemp2322);
nctempchar1* nctemp2320= nctemp2324;
struct nctempchar1 *nctemp2327;
struct nctempchar1 nctemp2328 = {{ 3}, (char*)"&&"};
nctemp2327=&nctemp2328;
nctempchar1* nctemp2325= nctemp2327;
int nctemp2329=LibeStrcmp(nctemp2320,nctemp2325);
int nctemp2222 = (nctemp2225 || nctemp2329);
if(nctemp2222)
{
struct tree* nctemp2331= np;
struct tree* nctemp2333=SemRelexpr(nctemp2331);
}
else{
struct tree* nctemp2345= np;
nctempchar1* nctemp2347=PtreeGetdef(nctemp2345);
nctempchar1* nctemp2343= nctemp2347;
struct nctempchar1 *nctemp2350;
struct nctempchar1 nctemp2351 = {{ 2}, (char*)"+"};
nctemp2350=&nctemp2351;
nctempchar1* nctemp2348= nctemp2350;
int nctemp2352=LibeStrcmp(nctemp2343,nctemp2348);
struct tree* nctemp2356= np;
nctempchar1* nctemp2358=PtreeGetdef(nctemp2356);
nctempchar1* nctemp2354= nctemp2358;
struct nctempchar1 *nctemp2361;
struct nctempchar1 nctemp2362 = {{ 2}, (char*)"-"};
nctemp2361=&nctemp2362;
nctempchar1* nctemp2359= nctemp2361;
int nctemp2363=LibeStrcmp(nctemp2354,nctemp2359);
int nctemp2340 = (nctemp2352 || nctemp2363);
struct tree* nctemp2367= np;
nctempchar1* nctemp2369=PtreeGetdef(nctemp2367);
nctempchar1* nctemp2365= nctemp2369;
struct nctempchar1 *nctemp2372;
struct nctempchar1 nctemp2373 = {{ 2}, (char*)"*"};
nctemp2372=&nctemp2373;
nctempchar1* nctemp2370= nctemp2372;
int nctemp2374=LibeStrcmp(nctemp2365,nctemp2370);
int nctemp2337 = (nctemp2340 || nctemp2374);
struct tree* nctemp2378= np;
nctempchar1* nctemp2380=PtreeGetdef(nctemp2378);
nctempchar1* nctemp2376= nctemp2380;
struct nctempchar1 *nctemp2383;
struct nctempchar1 nctemp2384 = {{ 2}, (char*)"/"};
nctemp2383=&nctemp2384;
nctempchar1* nctemp2381= nctemp2383;
int nctemp2385=LibeStrcmp(nctemp2376,nctemp2381);
int nctemp2334 = (nctemp2337 || nctemp2385);
if(nctemp2334)
{
struct tree* nctemp2387= np;
struct tree* nctemp2389=SemAddexpr(nctemp2387);
}
}
}
return np;
}
}
else{
struct tree* nctemp2392= p;
struct tree* nctemp2394=SemUnexpr(nctemp2392);
return nctemp2394;
}
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp2399= p;
struct tree* nctemp2401=PtreeMvchild(nctemp2399);
np =nctemp2401;
struct tree* nctemp2407= np;
nctempchar1* nctemp2409=PtreeGetlval(nctemp2407);
nctempchar1* nctemp2405= nctemp2409;
struct nctempchar1 *nctemp2412;
struct nctempchar1 nctemp2413 = {{ 5}, (char*)"lval"};
nctemp2412=&nctemp2413;
nctempchar1* nctemp2410= nctemp2412;
int nctemp2414=LibeStrcmp(nctemp2405,nctemp2410);
int nctemp2402 = (nctemp2414 ==0);
if(nctemp2402)
{
struct tree* nctemp2417= np;
struct nctempchar1 *nctemp2421;
struct nctempchar1 nctemp2422 = {{ 17}, (char*)"Not a left value"};
nctemp2421=&nctemp2422;
nctempchar1* nctemp2419= nctemp2421;
struct tree* nctemp2425= np;
nctempchar1* nctemp2427=PtreeGetdef(nctemp2425);
nctempchar1* nctemp2423= nctemp2427;
int nctemp2428=ErrSerror(nctemp2417,nctemp2419,nctemp2423);
}
else{
struct tree* nctemp2430= p;
struct nctempchar1 *nctemp2434;
struct nctempchar1 nctemp2435 = {{ 5}, (char*)"lval"};
nctemp2434=&nctemp2435;
nctempchar1* nctemp2432= nctemp2434;
int nctemp2436=PtreeSetlval(nctemp2430,nctemp2432);
}
struct tree* nctemp2438= np;
struct tree* nctemp2440= p;
int nctemp2442=SemCopytype(nctemp2438,nctemp2440);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp2448= p;
struct tree* nctemp2450=PtreeMvchild(nctemp2448);
np =nctemp2450;
struct tree* nctemp2455= np;
struct tree* nctemp2457=PtreeMvsister(nctemp2455);
rp =nctemp2457;
struct tree* nctemp2463= p;
nctempchar1* nctemp2465=PtreeGetdef(nctemp2463);
nctempchar1* nctemp2461= nctemp2465;
struct nctempchar1 *nctemp2468;
struct nctempchar1 nctemp2469 = {{ 3}, (char*)"=="};
nctemp2468=&nctemp2469;
nctempchar1* nctemp2466= nctemp2468;
int nctemp2470=LibeStrcmp(nctemp2461,nctemp2466);
int nctemp2458 = (nctemp2470 ==0);
if(nctemp2458)
{
struct tree* nctemp2477= p;
nctempchar1* nctemp2479=PtreeGetdef(nctemp2477);
nctempchar1* nctemp2475= nctemp2479;
struct nctempchar1 *nctemp2482;
struct nctempchar1 nctemp2483 = {{ 3}, (char*)"!="};
nctemp2482=&nctemp2483;
nctempchar1* nctemp2480= nctemp2482;
int nctemp2484=LibeStrcmp(nctemp2475,nctemp2480);
int nctemp2472 = (nctemp2484 ==0);
if(nctemp2472)
{
struct tree* nctemp2491= np;
nctempchar1* nctemp2493=PtreeGetref(nctemp2491);
nctempchar1* nctemp2489= nctemp2493;
struct nctempchar1 *nctemp2496;
struct nctempchar1 nctemp2497 = {{ 5}, (char*)"aref"};
nctemp2496=&nctemp2497;
nctempchar1* nctemp2494= nctemp2496;
int nctemp2498=LibeStrcmp(nctemp2489,nctemp2494);
struct tree* nctemp2502= np;
nctempchar1* nctemp2504=PtreeGetref(nctemp2502);
nctempchar1* nctemp2500= nctemp2504;
struct nctempchar1 *nctemp2507;
struct nctempchar1 nctemp2508 = {{ 5}, (char*)"sref"};
nctemp2507=&nctemp2508;
nctempchar1* nctemp2505= nctemp2507;
int nctemp2509=LibeStrcmp(nctemp2500,nctemp2505);
int nctemp2486 = (nctemp2498 || nctemp2509);
if(nctemp2486)
{
struct tree* nctemp2511= p;
struct nctempchar1 *nctemp2515;
struct nctempchar1 nctemp2516 = {{ 18}, (char*)"Illegal operation"};
nctemp2515=&nctemp2516;
nctempchar1* nctemp2513= nctemp2515;
struct nctempchar1 *nctemp2519;
struct nctempchar1 nctemp2520 = {{ 2}, (char*)" "};
nctemp2519=&nctemp2520;
nctempchar1* nctemp2517= nctemp2519;
int nctemp2521=ErrSerror(nctemp2511,nctemp2513,nctemp2517);
}
else{
struct tree* nctemp2527= rp;
nctempchar1* nctemp2529=PtreeGetref(nctemp2527);
nctempchar1* nctemp2525= nctemp2529;
struct nctempchar1 *nctemp2532;
struct nctempchar1 nctemp2533 = {{ 5}, (char*)"aref"};
nctemp2532=&nctemp2533;
nctempchar1* nctemp2530= nctemp2532;
int nctemp2534=LibeStrcmp(nctemp2525,nctemp2530);
struct tree* nctemp2538= np;
nctempchar1* nctemp2540=PtreeGetref(nctemp2538);
nctempchar1* nctemp2536= nctemp2540;
struct nctempchar1 *nctemp2543;
struct nctempchar1 nctemp2544 = {{ 5}, (char*)"sref"};
nctemp2543=&nctemp2544;
nctempchar1* nctemp2541= nctemp2543;
int nctemp2545=LibeStrcmp(nctemp2536,nctemp2541);
int nctemp2522 = (nctemp2534 || nctemp2545);
if(nctemp2522)
{
struct tree* nctemp2547= p;
struct nctempchar1 *nctemp2551;
struct nctempchar1 nctemp2552 = {{ 18}, (char*)"Illegal operation"};
nctemp2551=&nctemp2552;
nctempchar1* nctemp2549= nctemp2551;
struct nctempchar1 *nctemp2555;
struct nctempchar1 nctemp2556 = {{ 2}, (char*)" "};
nctemp2555=&nctemp2556;
nctempchar1* nctemp2553= nctemp2555;
int nctemp2557=ErrSerror(nctemp2547,nctemp2549,nctemp2553);
}
}
}
else{
struct tree* nctemp2561= np;
nctempchar1* nctemp2563=PtreeGetype(nctemp2561);
nctempchar1* nctemp2559= nctemp2563;
struct nctempchar1 *nctemp2566;
struct nctempchar1 nctemp2567 = {{ 8}, (char*)"complex"};
nctemp2566=&nctemp2567;
nctempchar1* nctemp2564= nctemp2566;
int nctemp2568=LibeStrcmp(nctemp2559,nctemp2564);
if(nctemp2568)
{
struct tree* nctemp2570= p;
struct nctempchar1 *nctemp2574;
struct nctempchar1 nctemp2575 = {{ 18}, (char*)"Illegal operation"};
nctemp2574=&nctemp2575;
nctempchar1* nctemp2572= nctemp2574;
struct nctempchar1 *nctemp2578;
struct nctempchar1 nctemp2579 = {{ 2}, (char*)" "};
nctemp2578=&nctemp2579;
nctempchar1* nctemp2576= nctemp2578;
int nctemp2580=ErrSerror(nctemp2570,nctemp2572,nctemp2576);
}
}
}
struct tree* nctemp2582= p;
struct nctempchar1 *nctemp2586;
struct nctempchar1 nctemp2587 = {{ 4}, (char*)"int"};
nctemp2586=&nctemp2587;
nctempchar1* nctemp2584= nctemp2586;
int nctemp2588=PtreeSetype(nctemp2582,nctemp2584);
struct tree* nctemp2590= p;
struct nctempchar1 *nctemp2594;
struct nctempchar1 nctemp2595 = {{ 5}, (char*)"void"};
nctemp2594=&nctemp2595;
nctempchar1* nctemp2592= nctemp2594;
int nctemp2596=PtreeSetlval(nctemp2590,nctemp2592);
struct tree* nctemp2598= p;
struct nctempchar1 *nctemp2602;
struct nctempchar1 nctemp2603 = {{ 5}, (char*)"void"};
nctemp2602=&nctemp2603;
nctempchar1* nctemp2600= nctemp2602;
int nctemp2604=PtreeSetstruct(nctemp2598,nctemp2600);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp2610= p;
struct tree* nctemp2612=PtreeMvchild(nctemp2610);
np =nctemp2612;
struct tree* nctemp2617= np;
struct tree* nctemp2619=PtreeMvsister(nctemp2617);
rp =nctemp2619;
struct tree* nctemp2623= np;
nctempchar1* nctemp2625=PtreeGetref(nctemp2623);
nctempchar1* nctemp2621= nctemp2625;
struct nctempchar1 *nctemp2628;
struct nctempchar1 nctemp2629 = {{ 5}, (char*)"sref"};
nctemp2628=&nctemp2629;
nctempchar1* nctemp2626= nctemp2628;
int nctemp2630=LibeStrcmp(nctemp2621,nctemp2626);
if(nctemp2630)
{
struct tree* nctemp2632= np;
struct nctempchar1 *nctemp2636;
struct nctempchar1 nctemp2637 = {{ 18}, (char*)"Illegal operation"};
nctemp2636=&nctemp2637;
nctempchar1* nctemp2634= nctemp2636;
struct nctempchar1 *nctemp2640;
struct nctempchar1 nctemp2641 = {{ 2}, (char*)" "};
nctemp2640=&nctemp2641;
nctempchar1* nctemp2638= nctemp2640;
int nctemp2642=ErrSerror(nctemp2632,nctemp2634,nctemp2638);
}
else{
struct tree* nctemp2646= rp;
nctempchar1* nctemp2648=PtreeGetref(nctemp2646);
nctempchar1* nctemp2644= nctemp2648;
struct nctempchar1 *nctemp2651;
struct nctempchar1 nctemp2652 = {{ 5}, (char*)"sref"};
nctemp2651=&nctemp2652;
nctempchar1* nctemp2649= nctemp2651;
int nctemp2653=LibeStrcmp(nctemp2644,nctemp2649);
if(nctemp2653)
{
struct tree* nctemp2655= np;
struct nctempchar1 *nctemp2659;
struct nctempchar1 nctemp2660 = {{ 18}, (char*)"Illegal operation"};
nctemp2659=&nctemp2660;
nctempchar1* nctemp2657= nctemp2659;
struct nctempchar1 *nctemp2663;
struct nctempchar1 nctemp2664 = {{ 2}, (char*)" "};
nctemp2663=&nctemp2664;
nctempchar1* nctemp2661= nctemp2663;
int nctemp2665=ErrSerror(nctemp2655,nctemp2657,nctemp2661);
}
else{
struct tree* nctemp2667= np;
struct tree* nctemp2669= p;
int nctemp2671=SemCopytype(nctemp2667,nctemp2669);
struct tree* nctemp2673= p;
struct nctempchar1 *nctemp2677;
struct nctempchar1 nctemp2678 = {{ 5}, (char*)"void"};
nctemp2677=&nctemp2678;
nctempchar1* nctemp2675= nctemp2677;
int nctemp2679=PtreeSetlval(nctemp2673,nctemp2675);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np =p;
struct tree* nctemp2688= p;
nctempchar1* nctemp2690=PtreeGetname(nctemp2688);
nctempchar1* nctemp2686= nctemp2690;
struct nctempchar1 *nctemp2693;
struct nctempchar1 nctemp2694 = {{ 7}, (char*)"unexpr"};
nctemp2693=&nctemp2694;
nctempchar1* nctemp2691= nctemp2693;
int nctemp2695=LibeStrcmp(nctemp2686,nctemp2691);
if(nctemp2695)
{
struct tree* nctemp2700= p;
struct tree* nctemp2702=PtreeMvchild(nctemp2700);
p =nctemp2702;
struct tree* nctemp2707= p;
struct tree* nctemp2709=SemPrimexpr(nctemp2707);
p =nctemp2709;
struct tree* nctemp2711= p;
struct tree* nctemp2713= np;
int nctemp2715=SemCopytype(nctemp2711,nctemp2713);
return np;
}
else{
struct tree* nctemp2718= p;
struct tree* nctemp2720=SemPrimexpr(nctemp2718);
return nctemp2720;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp2724= p;
nctempchar1* nctemp2726=PtreeGetname(nctemp2724);
nctempchar1* nctemp2722= nctemp2726;
struct nctempchar1 *nctemp2729;
struct nctempchar1 nctemp2730 = {{ 11}, (char*)"identifier"};
nctemp2729=&nctemp2730;
nctempchar1* nctemp2727= nctemp2729;
int nctemp2731=LibeStrcmp(nctemp2722,nctemp2727);
if(nctemp2731)
{
struct tree* nctemp2733= p;
int nctemp2735=SemId(nctemp2733);
return p;
}
else{
struct tree* nctemp2740= p;
nctempchar1* nctemp2742=PtreeGetname(nctemp2740);
nctempchar1* nctemp2738= nctemp2742;
struct nctempchar1 *nctemp2745;
struct nctempchar1 nctemp2746 = {{ 6}, (char*)"fcall"};
nctemp2745=&nctemp2746;
nctempchar1* nctemp2743= nctemp2745;
int nctemp2747=LibeStrcmp(nctemp2738,nctemp2743);
if(nctemp2747)
{
struct tree* nctemp2749= p;
int nctemp2751=SemFcall(nctemp2749);
return p;
}
else{
struct tree* nctemp2756= p;
nctempchar1* nctemp2758=PtreeGetname(nctemp2756);
nctempchar1* nctemp2754= nctemp2758;
struct nctempchar1 *nctemp2761;
struct nctempchar1 nctemp2762 = {{ 5}, (char*)"cast"};
nctemp2761=&nctemp2762;
nctempchar1* nctemp2759= nctemp2761;
int nctemp2763=LibeStrcmp(nctemp2754,nctemp2759);
if(nctemp2763)
{
struct tree* nctemp2765= p;
int nctemp2767=SemCast(nctemp2765);
return p;
}
else{
struct tree* nctemp2772= p;
nctempchar1* nctemp2774=PtreeGetname(nctemp2772);
nctempchar1* nctemp2770= nctemp2774;
struct nctempchar1 *nctemp2777;
struct nctempchar1 nctemp2778 = {{ 4}, (char*)"new"};
nctemp2777=&nctemp2778;
nctempchar1* nctemp2775= nctemp2777;
int nctemp2779=LibeStrcmp(nctemp2770,nctemp2775);
if(nctemp2779)
{
struct tree* nctemp2781= p;
int nctemp2783=SemNew(nctemp2781);
return p;
}
else{
struct tree* nctemp2788= p;
nctempchar1* nctemp2790=PtreeGetname(nctemp2788);
nctempchar1* nctemp2786= nctemp2790;
struct nctempchar1 *nctemp2793;
struct nctempchar1 nctemp2794 = {{ 7}, (char*)"delete"};
nctemp2793=&nctemp2794;
nctempchar1* nctemp2791= nctemp2793;
int nctemp2795=LibeStrcmp(nctemp2786,nctemp2791);
if(nctemp2795)
{
struct tree* nctemp2797= p;
int nctemp2799=SemDelete(nctemp2797);
return p;
}
else{
struct tree* nctemp2804= p;
nctempchar1* nctemp2806=PtreeGetname(nctemp2804);
nctempchar1* nctemp2802= nctemp2806;
struct nctempchar1 *nctemp2809;
struct nctempchar1 nctemp2810 = {{ 6}, (char*)"cmplx"};
nctemp2809=&nctemp2810;
nctempchar1* nctemp2807= nctemp2809;
int nctemp2811=LibeStrcmp(nctemp2802,nctemp2807);
if(nctemp2811)
{
struct tree* nctemp2813= p;
int nctemp2815=SemCmplx(nctemp2813);
return p;
}
else{
struct tree* nctemp2820= p;
nctempchar1* nctemp2822=PtreeGetname(nctemp2820);
nctempchar1* nctemp2818= nctemp2822;
struct nctempchar1 *nctemp2825;
struct nctempchar1 nctemp2826 = {{ 3}, (char*)"re"};
nctemp2825=&nctemp2826;
nctempchar1* nctemp2823= nctemp2825;
int nctemp2827=LibeStrcmp(nctemp2818,nctemp2823);
if(nctemp2827)
{
struct tree* nctemp2829= p;
int nctemp2831=SemRe(nctemp2829);
return p;
}
else{
struct tree* nctemp2836= p;
nctempchar1* nctemp2838=PtreeGetname(nctemp2836);
nctempchar1* nctemp2834= nctemp2838;
struct nctempchar1 *nctemp2841;
struct nctempchar1 nctemp2842 = {{ 4}, (char*)"len"};
nctemp2841=&nctemp2842;
nctempchar1* nctemp2839= nctemp2841;
int nctemp2843=LibeStrcmp(nctemp2834,nctemp2839);
if(nctemp2843)
{
struct tree* nctemp2845= p;
int nctemp2847=SemLen(nctemp2845);
return p;
}
else{
struct tree* nctemp2852= p;
nctempchar1* nctemp2854=PtreeGetname(nctemp2852);
nctempchar1* nctemp2850= nctemp2854;
struct nctempchar1 *nctemp2857;
struct nctempchar1 nctemp2858 = {{ 3}, (char*)"im"};
nctemp2857=&nctemp2858;
nctempchar1* nctemp2855= nctemp2857;
int nctemp2859=LibeStrcmp(nctemp2850,nctemp2855);
if(nctemp2859)
{
struct tree* nctemp2861= p;
int nctemp2863=SemIm(nctemp2861);
return p;
}
else{
struct tree* nctemp2868= p;
nctempchar1* nctemp2870=PtreeGetname(nctemp2868);
nctempchar1* nctemp2866= nctemp2870;
struct nctempchar1 *nctemp2873;
struct nctempchar1 nctemp2874 = {{ 7}, (char*)"sizeof"};
nctemp2873=&nctemp2874;
nctempchar1* nctemp2871= nctemp2873;
int nctemp2875=LibeStrcmp(nctemp2866,nctemp2871);
if(nctemp2875)
{
struct tree* nctemp2877= p;
int nctemp2879=SemSizeof(nctemp2877);
return p;
}
else{
struct tree* nctemp2884= p;
nctempchar1* nctemp2886=PtreeGetname(nctemp2884);
nctempchar1* nctemp2882= nctemp2886;
struct nctempchar1 *nctemp2889;
struct nctempchar1 nctemp2890 = {{ 10}, (char*)"iconstant"};
nctemp2889=&nctemp2890;
nctempchar1* nctemp2887= nctemp2889;
int nctemp2891=LibeStrcmp(nctemp2882,nctemp2887);
if(nctemp2891)
{
struct tree* nctemp2893= p;
struct nctempchar1 *nctemp2897;
struct nctempchar1 nctemp2898 = {{ 4}, (char*)"int"};
nctemp2897=&nctemp2898;
nctempchar1* nctemp2895= nctemp2897;
int nctemp2899=PtreeSetype(nctemp2893,nctemp2895);
return p;
}
else{
struct tree* nctemp2904= p;
nctempchar1* nctemp2906=PtreeGetname(nctemp2904);
nctempchar1* nctemp2902= nctemp2906;
struct nctempchar1 *nctemp2909;
struct nctempchar1 nctemp2910 = {{ 10}, (char*)"rconstant"};
nctemp2909=&nctemp2910;
nctempchar1* nctemp2907= nctemp2909;
int nctemp2911=LibeStrcmp(nctemp2902,nctemp2907);
if(nctemp2911)
{
struct tree* nctemp2913= p;
struct nctempchar1 *nctemp2917;
struct nctempchar1 nctemp2918 = {{ 6}, (char*)"float"};
nctemp2917=&nctemp2918;
nctempchar1* nctemp2915= nctemp2917;
int nctemp2919=PtreeSetype(nctemp2913,nctemp2915);
return p;
}
else{
struct tree* nctemp2924= p;
nctempchar1* nctemp2926=PtreeGetname(nctemp2924);
nctempchar1* nctemp2922= nctemp2926;
struct nctempchar1 *nctemp2929;
struct nctempchar1 nctemp2930 = {{ 10}, (char*)"sconstant"};
nctemp2929=&nctemp2930;
nctempchar1* nctemp2927= nctemp2929;
int nctemp2931=LibeStrcmp(nctemp2922,nctemp2927);
if(nctemp2931)
{
struct tree* nctemp2933= p;
struct nctempchar1 *nctemp2937;
struct nctempchar1 nctemp2938 = {{ 5}, (char*)"char"};
nctemp2937=&nctemp2938;
nctempchar1* nctemp2935= nctemp2937;
int nctemp2939=PtreeSetype(nctemp2933,nctemp2935);
struct tree* nctemp2941= p;
struct nctempchar1 *nctemp2945;
struct nctempchar1 nctemp2946 = {{ 5}, (char*)"aref"};
nctemp2945=&nctemp2946;
nctempchar1* nctemp2943= nctemp2945;
int nctemp2947=PtreeSetref(nctemp2941,nctemp2943);
struct tree* nctemp2949= p;
int nctemp2951= 1;
int nctemp2953=PtreeSetrank(nctemp2949,nctemp2951);
return p;
}
else{
struct tree* nctemp2956= p;
struct tree* nctemp2958=SemBinexpr(nctemp2956);
return nctemp2958;
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
struct tree* nctemp2968= p;
nctempchar1* nctemp2970=PtreeGetdef(nctemp2968);
nctempchar1* nctemp2966= nctemp2970;
struct symbol* nctemp2971=SymLook(nctemp2966);
tp =nctemp2971;
int nctemp2959 = (tp ==0);
if(nctemp2959)
{
struct tree* nctemp2974= p;
struct nctempchar1 *nctemp2978;
struct nctempchar1 nctemp2979 = {{ 22}, (char*)"Undeclared identifier"};
nctemp2978=&nctemp2979;
nctempchar1* nctemp2976= nctemp2978;
struct tree* nctemp2982= p;
nctempchar1* nctemp2984=PtreeGetdef(nctemp2982);
nctempchar1* nctemp2980= nctemp2984;
int nctemp2985=ErrSerror(nctemp2974,nctemp2976,nctemp2980);
}
struct symbol* nctemp2991= tp;
nctempchar1* nctemp2993=SymGetype(nctemp2991);
nctempchar1* nctemp2989= nctemp2993;
struct nctempchar1 *nctemp2996;
struct nctempchar1 nctemp2997 = {{ 10}, (char*)"iconstant"};
nctemp2996=&nctemp2997;
nctempchar1* nctemp2994= nctemp2996;
int nctemp2998=LibeStrcmp(nctemp2989,nctemp2994);
int nctemp2986 = (nctemp2998 ==1);
if(nctemp2986)
{
struct tree* nctemp3001= p;
struct symbol* nctemp3005= tp;
nctempchar1* nctemp3007=SymGetype(nctemp3005);
nctempchar1* nctemp3003= nctemp3007;
int nctemp3008=PtreeSetname(nctemp3001,nctemp3003);
struct tree* nctemp3010= p;
struct symbol* nctemp3014= tp;
nctempchar1* nctemp3016=SymGetdescr(nctemp3014);
nctempchar1* nctemp3012= nctemp3016;
int nctemp3017=PtreeSetdef(nctemp3010,nctemp3012);
struct tree* nctemp3019= p;
struct nctempchar1 *nctemp3023;
struct nctempchar1 nctemp3024 = {{ 4}, (char*)"int"};
nctemp3023=&nctemp3024;
nctempchar1* nctemp3021= nctemp3023;
int nctemp3025=PtreeSetype(nctemp3019,nctemp3021);
return 1;
}
else{
struct symbol* nctemp3032= tp;
nctempchar1* nctemp3034=SymGetype(nctemp3032);
nctempchar1* nctemp3030= nctemp3034;
struct nctempchar1 *nctemp3037;
struct nctempchar1 nctemp3038 = {{ 10}, (char*)"rconstant"};
nctemp3037=&nctemp3038;
nctempchar1* nctemp3035= nctemp3037;
int nctemp3039=LibeStrcmp(nctemp3030,nctemp3035);
int nctemp3027 = (nctemp3039 ==1);
if(nctemp3027)
{
struct tree* nctemp3042= p;
struct symbol* nctemp3046= tp;
nctempchar1* nctemp3048=SymGetype(nctemp3046);
nctempchar1* nctemp3044= nctemp3048;
int nctemp3049=PtreeSetname(nctemp3042,nctemp3044);
struct tree* nctemp3051= p;
struct symbol* nctemp3055= tp;
nctempchar1* nctemp3057=SymGetdescr(nctemp3055);
nctempchar1* nctemp3053= nctemp3057;
int nctemp3058=PtreeSetdef(nctemp3051,nctemp3053);
struct tree* nctemp3060= p;
struct nctempchar1 *nctemp3064;
struct nctempchar1 nctemp3065 = {{ 6}, (char*)"float"};
nctemp3064=&nctemp3065;
nctempchar1* nctemp3062= nctemp3064;
int nctemp3066=PtreeSetype(nctemp3060,nctemp3062);
return 1;
}
else{
struct symbol* nctemp3073= tp;
nctempchar1* nctemp3075=SymGetype(nctemp3073);
nctempchar1* nctemp3071= nctemp3075;
struct nctempchar1 *nctemp3078;
struct nctempchar1 nctemp3079 = {{ 10}, (char*)"sconstant"};
nctemp3078=&nctemp3079;
nctempchar1* nctemp3076= nctemp3078;
int nctemp3080=LibeStrcmp(nctemp3071,nctemp3076);
int nctemp3068 = (nctemp3080 ==1);
if(nctemp3068)
{
struct tree* nctemp3083= p;
struct symbol* nctemp3087= tp;
nctempchar1* nctemp3089=SymGetype(nctemp3087);
nctempchar1* nctemp3085= nctemp3089;
int nctemp3090=PtreeSetname(nctemp3083,nctemp3085);
struct tree* nctemp3092= p;
struct symbol* nctemp3096= tp;
nctempchar1* nctemp3098=SymGetdescr(nctemp3096);
nctempchar1* nctemp3094= nctemp3098;
int nctemp3099=PtreeSetdef(nctemp3092,nctemp3094);
struct tree* nctemp3101= p;
struct nctempchar1 *nctemp3105;
struct nctempchar1 nctemp3106 = {{ 5}, (char*)"char"};
nctemp3105=&nctemp3106;
nctempchar1* nctemp3103= nctemp3105;
int nctemp3107=PtreeSetype(nctemp3101,nctemp3103);
struct tree* nctemp3109= p;
struct nctempchar1 *nctemp3113;
struct nctempchar1 nctemp3114 = {{ 6}, (char*)"array"};
nctemp3113=&nctemp3114;
nctempchar1* nctemp3111= nctemp3113;
int nctemp3115=PtreeSetarray(nctemp3109,nctemp3111);
struct tree* nctemp3117= p;
struct nctempchar1 *nctemp3121;
struct nctempchar1 nctemp3122 = {{ 5}, (char*)"aref"};
nctemp3121=&nctemp3122;
nctempchar1* nctemp3119= nctemp3121;
int nctemp3123=PtreeSetref(nctemp3117,nctemp3119);
struct tree* nctemp3125= p;
int nctemp3127= 1;
int nctemp3129=PtreeSetrank(nctemp3125,nctemp3127);
return 1;
}
}
}
struct symbol* nctemp3134= tp;
nctempchar1* nctemp3136=SymGetstruct(nctemp3134);
nctempchar1* nctemp3132= nctemp3136;
struct nctempchar1 *nctemp3139;
struct nctempchar1 nctemp3140 = {{ 10}, (char*)"structdef"};
nctemp3139=&nctemp3140;
nctempchar1* nctemp3137= nctemp3139;
int nctemp3141=LibeStrcmp(nctemp3132,nctemp3137);
if(nctemp3141)
{
struct tree* nctemp3143= p;
struct nctempchar1 *nctemp3147;
struct nctempchar1 nctemp3148 = {{ 43}, (char*)"Struct names can not be used as a variable"};
nctemp3147=&nctemp3148;
nctempchar1* nctemp3145= nctemp3147;
struct tree* nctemp3151= p;
nctempchar1* nctemp3153=PtreeGetdef(nctemp3151);
nctempchar1* nctemp3149= nctemp3153;
int nctemp3154=ErrSerror(nctemp3143,nctemp3145,nctemp3149);
}
struct tree* nctemp3156= p;
struct symbol* nctemp3160= tp;
nctempchar1* nctemp3162=SymGetype(nctemp3160);
nctempchar1* nctemp3158= nctemp3162;
int nctemp3163=PtreeSetype(nctemp3156,nctemp3158);
struct tree* nctemp3165= p;
struct symbol* nctemp3169= tp;
nctempchar1* nctemp3171=SymGetarray(nctemp3169);
nctempchar1* nctemp3167= nctemp3171;
int nctemp3172=PtreeSetarray(nctemp3165,nctemp3167);
struct tree* nctemp3174= p;
struct symbol* nctemp3178= tp;
int nctemp3180=SymGetrank(nctemp3178);
int nctemp3176= nctemp3180;
int nctemp3181=PtreeSetrank(nctemp3174,nctemp3176);
struct tree* nctemp3183= p;
struct symbol* nctemp3187= tp;
nctempchar1* nctemp3189=SymGetstruct(nctemp3187);
nctempchar1* nctemp3185= nctemp3189;
int nctemp3190=PtreeSetstruct(nctemp3183,nctemp3185);
struct tree* nctemp3192= p;
struct symbol* nctemp3196= tp;
nctempchar1* nctemp3198=SymGetlval(nctemp3196);
nctempchar1* nctemp3194= nctemp3198;
int nctemp3199=PtreeSetlval(nctemp3192,nctemp3194);
struct tree* nctemp3204= p;
struct tree* nctemp3206=PtreeMvchild(nctemp3204);
np =nctemp3206;
int nctemp3207 = (np !=0);
if(nctemp3207)
{
struct tree* nctemp3214= np;
nctempchar1* nctemp3216=PtreeGetname(nctemp3214);
nctempchar1* nctemp3212= nctemp3216;
struct nctempchar1 *nctemp3219;
struct nctempchar1 nctemp3220 = {{ 9}, (char*)"exprlist"};
nctemp3219=&nctemp3220;
nctempchar1* nctemp3217= nctemp3219;
int nctemp3221=LibeStrcmp(nctemp3212,nctemp3217);
if(nctemp3221)
{
struct tree* nctemp3223= p;
struct symbol* nctemp3225= tp;
int nctemp3227=SemArray(nctemp3223,nctemp3225);
struct tree* nctemp3231= np;
struct tree* nctemp3233=PtreeMvsister(nctemp3231);
int nctemp3228 = (nctemp3233 !=0);
if(nctemp3228)
{
struct tree* nctemp3236= p;
struct symbol* nctemp3238= tp;
int nctemp3240=SemStructure(nctemp3236,nctemp3238);
}
else{
struct tree* nctemp3244= p;
nctempchar1* nctemp3246=PtreeGetstruct(nctemp3244);
nctempchar1* nctemp3242= nctemp3246;
struct nctempchar1 *nctemp3249;
struct nctempchar1 nctemp3250 = {{ 7}, (char*)"struct"};
nctemp3249=&nctemp3250;
nctempchar1* nctemp3247= nctemp3249;
int nctemp3251=LibeStrcmp(nctemp3242,nctemp3247);
if(nctemp3251)
{
struct tree* nctemp3253= p;
struct nctempchar1 *nctemp3257;
struct nctempchar1 nctemp3258 = {{ 5}, (char*)"sref"};
nctemp3257=&nctemp3258;
nctempchar1* nctemp3255= nctemp3257;
int nctemp3259=PtreeSetref(nctemp3253,nctemp3255);
}
}
}
else{
struct tree* nctemp3263= np;
nctempchar1* nctemp3265=PtreeGetname(nctemp3263);
nctempchar1* nctemp3261= nctemp3265;
struct nctempchar1 *nctemp3268;
struct nctempchar1 nctemp3269 = {{ 9}, (char*)"selector"};
nctemp3268=&nctemp3269;
nctempchar1* nctemp3266= nctemp3268;
int nctemp3270=LibeStrcmp(nctemp3261,nctemp3266);
if(nctemp3270)
{
struct tree* nctemp3272= p;
struct symbol* nctemp3274= tp;
int nctemp3276=SemStructure(nctemp3272,nctemp3274);
}
}
}
else{
struct tree* nctemp3280= p;
nctempchar1* nctemp3282=PtreeGetarray(nctemp3280);
nctempchar1* nctemp3278= nctemp3282;
struct nctempchar1 *nctemp3285;
struct nctempchar1 nctemp3286 = {{ 6}, (char*)"array"};
nctemp3285=&nctemp3286;
nctempchar1* nctemp3283= nctemp3285;
int nctemp3287=LibeStrcmp(nctemp3278,nctemp3283);
if(nctemp3287)
{
struct tree* nctemp3289= p;
struct nctempchar1 *nctemp3293;
struct nctempchar1 nctemp3294 = {{ 5}, (char*)"aref"};
nctemp3293=&nctemp3294;
nctempchar1* nctemp3291= nctemp3293;
int nctemp3295=PtreeSetref(nctemp3289,nctemp3291);
}
else{
struct tree* nctemp3299= p;
nctempchar1* nctemp3301=PtreeGetstruct(nctemp3299);
nctempchar1* nctemp3297= nctemp3301;
struct nctempchar1 *nctemp3304;
struct nctempchar1 nctemp3305 = {{ 7}, (char*)"struct"};
nctemp3304=&nctemp3305;
nctempchar1* nctemp3302= nctemp3304;
int nctemp3306=LibeStrcmp(nctemp3297,nctemp3302);
if(nctemp3306)
{
struct tree* nctemp3308= p;
struct nctempchar1 *nctemp3312;
struct nctempchar1 nctemp3313 = {{ 5}, (char*)"sref"};
nctemp3312=&nctemp3313;
nctempchar1* nctemp3310= nctemp3312;
int nctemp3314=PtreeSetref(nctemp3308,nctemp3310);
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
struct tree* nctemp3319= p;
nctempchar1* nctemp3321=PtreeGetname(nctemp3319);
nctempchar1* nctemp3317= nctemp3321;
struct nctempchar1 *nctemp3324;
struct nctempchar1 nctemp3325 = {{ 6}, (char*)"fcall"};
nctemp3324=&nctemp3325;
nctempchar1* nctemp3322= nctemp3324;
int nctemp3326=LibeStrcmp(nctemp3317,nctemp3322);
if(nctemp3326)
{
struct tree* nctemp3336= p;
nctempchar1* nctemp3338=PtreeGetdef(nctemp3336);
nctempchar1* nctemp3334= nctemp3338;
struct symbol* nctemp3341=SymGetetp();
struct symbol* nctemp3339= nctemp3341;
struct symbol* nctemp3342=SymLookup(nctemp3334,nctemp3339);
tp =nctemp3342;
int nctemp3327 = (tp ==0);
if(nctemp3327)
{
struct tree* nctemp3345= p;
struct nctempchar1 *nctemp3349;
struct nctempchar1 nctemp3350 = {{ 20}, (char*)"Undeclared function"};
nctemp3349=&nctemp3350;
nctempchar1* nctemp3347= nctemp3349;
struct tree* nctemp3353= p;
nctempchar1* nctemp3355=PtreeGetdef(nctemp3353);
nctempchar1* nctemp3351= nctemp3355;
int nctemp3356=ErrSerror(nctemp3345,nctemp3347,nctemp3351);
return 0;
}
struct symbol* nctemp3363= tp;
nctempchar1* nctemp3365=SymGetfunc(nctemp3363);
nctempchar1* nctemp3361= nctemp3365;
struct nctempchar1 *nctemp3368;
struct nctempchar1 nctemp3369 = {{ 6}, (char*)"fdecl"};
nctemp3368=&nctemp3369;
nctempchar1* nctemp3366= nctemp3368;
int nctemp3370=LibeStrcmp(nctemp3361,nctemp3366);
int nctemp3358 = (nctemp3370 ==0);
if(nctemp3358)
{
struct symbol* nctemp3377= tp;
nctempchar1* nctemp3379=SymGetfunc(nctemp3377);
nctempchar1* nctemp3375= nctemp3379;
struct nctempchar1 *nctemp3382;
struct nctempchar1 nctemp3383 = {{ 5}, (char*)"fdef"};
nctemp3382=&nctemp3383;
nctempchar1* nctemp3380= nctemp3382;
int nctemp3384=LibeStrcmp(nctemp3375,nctemp3380);
int nctemp3372 = (nctemp3384 ==0);
if(nctemp3372)
{
struct tree* nctemp3387= p;
struct nctempchar1 *nctemp3391;
struct nctempchar1 nctemp3392 = {{ 15}, (char*)"Not a function"};
nctemp3391=&nctemp3392;
nctempchar1* nctemp3389= nctemp3391;
struct tree* nctemp3395= p;
nctempchar1* nctemp3397=PtreeGetdef(nctemp3395);
nctempchar1* nctemp3393= nctemp3397;
int nctemp3398=ErrSerror(nctemp3387,nctemp3389,nctemp3393);
return 0;
}
}
struct tree* nctemp3401= p;
struct symbol* nctemp3405= tp;
nctempchar1* nctemp3407=SymGetype(nctemp3405);
nctempchar1* nctemp3403= nctemp3407;
int nctemp3408=PtreeSetype(nctemp3401,nctemp3403);
struct tree* nctemp3410= p;
struct symbol* nctemp3414= tp;
nctempchar1* nctemp3416=SymGetstruct(nctemp3414);
nctempchar1* nctemp3412= nctemp3416;
int nctemp3417=PtreeSetstruct(nctemp3410,nctemp3412);
struct tree* nctemp3419= p;
struct symbol* nctemp3423= tp;
nctempchar1* nctemp3425=SymGetarray(nctemp3423);
nctempchar1* nctemp3421= nctemp3425;
int nctemp3426=PtreeSetarray(nctemp3419,nctemp3421);
struct tree* nctemp3428= p;
struct symbol* nctemp3432= tp;
int nctemp3434=SymGetrank(nctemp3432);
int nctemp3430= nctemp3434;
int nctemp3435=PtreeSetrank(nctemp3428,nctemp3430);
struct tree* nctemp3439= p;
nctempchar1* nctemp3441=PtreeGetarray(nctemp3439);
nctempchar1* nctemp3437= nctemp3441;
struct nctempchar1 *nctemp3444;
struct nctempchar1 nctemp3445 = {{ 6}, (char*)"array"};
nctemp3444=&nctemp3445;
nctempchar1* nctemp3442= nctemp3444;
int nctemp3446=LibeStrcmp(nctemp3437,nctemp3442);
if(nctemp3446)
{
struct tree* nctemp3448= p;
struct nctempchar1 *nctemp3452;
struct nctempchar1 nctemp3453 = {{ 5}, (char*)"aref"};
nctemp3452=&nctemp3453;
nctempchar1* nctemp3450= nctemp3452;
int nctemp3454=PtreeSetref(nctemp3448,nctemp3450);
}
else{
struct tree* nctemp3458= p;
nctempchar1* nctemp3460=PtreeGetstruct(nctemp3458);
nctempchar1* nctemp3456= nctemp3460;
struct nctempchar1 *nctemp3463;
struct nctempchar1 nctemp3464 = {{ 7}, (char*)"struct"};
nctemp3463=&nctemp3464;
nctempchar1* nctemp3461= nctemp3463;
int nctemp3465=LibeStrcmp(nctemp3456,nctemp3461);
if(nctemp3465)
{
struct tree* nctemp3467= p;
struct nctempchar1 *nctemp3471;
struct nctempchar1 nctemp3472 = {{ 5}, (char*)"sref"};
nctemp3471=&nctemp3472;
nctempchar1* nctemp3469= nctemp3471;
int nctemp3473=PtreeSetref(nctemp3467,nctemp3469);
}
}
struct symbol* nctemp3478= tp;
struct symbol* nctemp3480=SymGetable(nctemp3478);
tp =nctemp3480;
struct nctempchar1 *nctemp3487;
struct nctempchar1 nctemp3488 = {{ 9}, (char*)"#arglist"};
nctemp3487=&nctemp3488;
nctempchar1* nctemp3485= nctemp3487;
struct symbol* nctemp3489= tp;
struct symbol* nctemp3491=SymLookup(nctemp3485,nctemp3489);
tp =nctemp3491;
int nctemp3492 = (tp !=0);
if(nctemp3492)
{
struct symbol* nctemp3500= tp;
struct symbol* nctemp3502=SymGetable(nctemp3500);
tp =nctemp3502;
}
struct tree* nctemp3510= p;
struct tree* nctemp3512=PtreeMvchild(nctemp3510);
np =nctemp3512;
int nctemp3503 = (np ==0);
if(nctemp3503)
{
struct symbol* nctemp3521= tp;
struct symbol* nctemp3523=SymMvnext(nctemp3521);
tp =nctemp3523;
int nctemp3514 = (tp !=0);
if(nctemp3514)
{
struct tree* nctemp3526= p;
struct nctempchar1 *nctemp3530;
struct nctempchar1 nctemp3531 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3530=&nctemp3531;
nctempchar1* nctemp3528= nctemp3530;
struct tree* nctemp3534= p;
nctempchar1* nctemp3536=PtreeGetdef(nctemp3534);
nctempchar1* nctemp3532= nctemp3536;
int nctemp3537=ErrSerror(nctemp3526,nctemp3528,nctemp3532);
return 0;
}
return 1;
}
struct tree* nctemp3546= p;
struct tree* nctemp3548=PtreeMvchild(nctemp3546);
struct tree* nctemp3544= nctemp3548;
struct tree* nctemp3549=PtreeMvchild(nctemp3544);
np =nctemp3549;
int nctemp3550 = (np !=0);
int nctemp3554=nctemp3550;
while(nctemp3554)
{{
struct symbol* nctemp3559= tp;
struct symbol* nctemp3561=SymMvnext(nctemp3559);
tp =nctemp3561;
int nctemp3562 = (tp ==0);
if(nctemp3562)
{
struct tree* nctemp3567= p;
struct nctempchar1 *nctemp3571;
struct nctempchar1 nctemp3572 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3571=&nctemp3572;
nctempchar1* nctemp3569= nctemp3571;
struct tree* nctemp3575= p;
nctempchar1* nctemp3577=PtreeGetdef(nctemp3575);
nctempchar1* nctemp3573= nctemp3577;
int nctemp3578=ErrSerror(nctemp3567,nctemp3569,nctemp3573);
return 0;
}
struct symbol* nctemp3585= tp;
nctempchar1* nctemp3587=SymGetype(nctemp3585);
type=nctemp3587;
struct tree* nctemp3589= np;
struct tree* nctemp3591=SemExpr(nctemp3589);
nctempchar1* nctemp3595= type;
struct tree* nctemp3600= np;
nctempchar1* nctemp3602=PtreeGetype(nctemp3600);
nctempchar1* nctemp3598= nctemp3602;
int nctemp3603=LibeStrcmp(nctemp3595,nctemp3598);
int nctemp3592 = (nctemp3603 ==0);
if(nctemp3592)
{
struct tree* nctemp3606= p;
struct nctempchar1 *nctemp3610;
struct nctempchar1 nctemp3611 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3610=&nctemp3611;
nctempchar1* nctemp3608= nctemp3610;
struct tree* nctemp3614= p;
nctempchar1* nctemp3616=PtreeGetdef(nctemp3614);
nctempchar1* nctemp3612= nctemp3616;
int nctemp3617=ErrSerror(nctemp3606,nctemp3608,nctemp3612);
return 0;
}
struct symbol* nctemp3622= tp;
nctempchar1* nctemp3624=SymGetarray(nctemp3622);
nctempchar1* nctemp3620= nctemp3624;
struct nctempchar1 *nctemp3627;
struct nctempchar1 nctemp3628 = {{ 6}, (char*)"array"};
nctemp3627=&nctemp3628;
nctempchar1* nctemp3625= nctemp3627;
int nctemp3629=LibeStrcmp(nctemp3620,nctemp3625);
if(nctemp3629)
{
struct tree* nctemp3635= np;
nctempchar1* nctemp3637=PtreeGetref(nctemp3635);
nctempchar1* nctemp3633= nctemp3637;
struct nctempchar1 *nctemp3640;
struct nctempchar1 nctemp3641 = {{ 5}, (char*)"aref"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=LibeStrcmp(nctemp3633,nctemp3638);
int nctemp3630 = (nctemp3642 ==0);
if(nctemp3630)
{
struct tree* nctemp3645= p;
struct nctempchar1 *nctemp3649;
struct nctempchar1 nctemp3650 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3649=&nctemp3650;
nctempchar1* nctemp3647= nctemp3649;
struct tree* nctemp3653= p;
nctempchar1* nctemp3655=PtreeGetdef(nctemp3653);
nctempchar1* nctemp3651= nctemp3655;
int nctemp3656=ErrSerror(nctemp3645,nctemp3647,nctemp3651);
}
struct tree* nctemp3660= np;
int nctemp3662=PtreeGetrank(nctemp3660);
struct symbol* nctemp3664= tp;
int nctemp3666=SymGetrank(nctemp3664);
int nctemp3657 = (nctemp3662 !=nctemp3666);
if(nctemp3657)
{
struct tree* nctemp3668= p;
struct nctempchar1 *nctemp3672;
struct nctempchar1 nctemp3673 = {{ 36}, (char*)"Illegal array rank in function call"};
nctemp3672=&nctemp3673;
nctempchar1* nctemp3670= nctemp3672;
struct tree* nctemp3676= p;
nctempchar1* nctemp3678=PtreeGetdef(nctemp3676);
nctempchar1* nctemp3674= nctemp3678;
int nctemp3679=ErrSerror(nctemp3668,nctemp3670,nctemp3674);
}
}
struct tree* nctemp3684= np;
struct tree* nctemp3686=PtreeMvsister(nctemp3684);
np =nctemp3686;
}
int nctemp3687 = (np !=0);
nctemp3554=nctemp3687;}struct symbol* nctemp3694= tp;
struct symbol* nctemp3696=SymMvnext(nctemp3694);
int nctemp3691 = (nctemp3696 !=0);
if(nctemp3691)
{
struct tree* nctemp3699= p;
struct nctempchar1 *nctemp3703;
struct nctempchar1 nctemp3704 = {{ 41}, (char*)"Function call does not match declaration"};
nctemp3703=&nctemp3704;
nctempchar1* nctemp3701= nctemp3703;
struct tree* nctemp3707= p;
nctempchar1* nctemp3709=PtreeGetdef(nctemp3707);
nctempchar1* nctemp3705= nctemp3709;
int nctemp3710=ErrSerror(nctemp3699,nctemp3701,nctemp3705);
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
struct nctempchar1 *nctemp3718;
struct nctempchar1 nctemp3719 = {{ 5}, (char*)"void"};
nctemp3718=&nctemp3719;
resultref=nctemp3718;
struct nctempchar1 *nctemp3725;
struct nctempchar1 nctemp3726 = {{ 5}, (char*)"void"};
nctemp3725=&nctemp3726;
expref=nctemp3725;
struct tree* nctemp3730= p;
nctempchar1* nctemp3732=PtreeGetname(nctemp3730);
nctempchar1* nctemp3728= nctemp3732;
struct nctempchar1 *nctemp3735;
struct nctempchar1 nctemp3736 = {{ 5}, (char*)"cast"};
nctemp3735=&nctemp3736;
nctempchar1* nctemp3733= nctemp3735;
int nctemp3737=LibeStrcmp(nctemp3728,nctemp3733);
if(nctemp3737)
{
struct tree* nctemp3742= p;
struct tree* nctemp3744=PtreeMvchild(nctemp3742);
np =nctemp3744;
struct tree* nctemp3750= np;
nctempchar1* nctemp3752=PtreeGetdef(nctemp3750);
resultype=nctemp3752;
struct tree* nctemp3754= np;
nctempchar1* nctemp3756= resultype;
int nctemp3759=PtreeSetype(nctemp3754,nctemp3756);
resultrank =0;
struct tree* nctemp3767= np;
nctempchar1* nctemp3769=PtreeGetarray(nctemp3767);
nctempchar1* nctemp3765= nctemp3769;
struct nctempchar1 *nctemp3772;
struct nctempchar1 nctemp3773 = {{ 6}, (char*)"array"};
nctemp3772=&nctemp3773;
nctempchar1* nctemp3770= nctemp3772;
int nctemp3774=LibeStrcmp(nctemp3765,nctemp3770);
if(nctemp3774)
{
struct tree* nctemp3779= np;
struct tree* nctemp3781=PtreeMvchild(nctemp3779);
sp =nctemp3781;
struct tree* nctemp3786= sp;
struct tree* nctemp3788=PtreeMvchild(nctemp3786);
sp =nctemp3788;
struct tree* nctemp3793= sp;
struct tree* nctemp3795=PtreeMvchild(nctemp3793);
sp =nctemp3795;
struct tree* nctemp3797= sp;
struct tree* nctemp3799=SemExprlist(nctemp3797);
struct tree* nctemp3804= sp;
struct tree* nctemp3806=PtreeMvchild(nctemp3804);
sp =nctemp3806;
resultrank =1;
struct tree* nctemp3818= sp;
struct tree* nctemp3820=PtreeMvsister(nctemp3818);
sp =nctemp3820;
int nctemp3811 = (sp !=0);
int nctemp3822=nctemp3811;
while(nctemp3822)
{{
int nctemp3831 = resultrank + 1;
resultrank =nctemp3831;
}
struct tree* nctemp3839= sp;
struct tree* nctemp3841=PtreeMvsister(nctemp3839);
sp =nctemp3841;
int nctemp3832 = (sp !=0);
nctemp3822=nctemp3832;}struct tree* nctemp3844= np;
int nctemp3846= resultrank;
int nctemp3848=PtreeSetrank(nctemp3844,nctemp3846);
struct tree* nctemp3850= p;
int nctemp3852= resultrank;
int nctemp3854=PtreeSetrank(nctemp3850,nctemp3852);
struct tree* nctemp3856= np;
struct nctempchar1 *nctemp3860;
struct nctempchar1 nctemp3861 = {{ 5}, (char*)"aref"};
nctemp3860=&nctemp3861;
nctempchar1* nctemp3858= nctemp3860;
int nctemp3862=PtreeSetref(nctemp3856,nctemp3858);
struct nctempchar1 *nctemp3870;
struct nctempchar1 nctemp3871 = {{ 5}, (char*)"aref"};
nctemp3870=&nctemp3871;
nctempchar1* nctemp3868= nctemp3870;
nctempchar1* nctemp3872=LibeStrsave(nctemp3868);
resultref=nctemp3872;
}
else{
struct tree* nctemp3876= np;
nctempchar1* nctemp3878=PtreeGetstruct(nctemp3876);
nctempchar1* nctemp3874= nctemp3878;
struct nctempchar1 *nctemp3881;
struct nctempchar1 nctemp3882 = {{ 7}, (char*)"struct"};
nctemp3881=&nctemp3882;
nctempchar1* nctemp3879= nctemp3881;
int nctemp3883=LibeStrcmp(nctemp3874,nctemp3879);
if(nctemp3883)
{
struct tree* nctemp3885= np;
struct nctempchar1 *nctemp3889;
struct nctempchar1 nctemp3890 = {{ 5}, (char*)"sref"};
nctemp3889=&nctemp3890;
nctempchar1* nctemp3887= nctemp3889;
int nctemp3891=PtreeSetref(nctemp3885,nctemp3887);
struct nctempchar1 *nctemp3899;
struct nctempchar1 nctemp3900 = {{ 5}, (char*)"sref"};
nctemp3899=&nctemp3900;
nctempchar1* nctemp3897= nctemp3899;
nctempchar1* nctemp3901=LibeStrsave(nctemp3897);
resultref=nctemp3901;
}
else{
struct nctempchar1 *nctemp3909;
struct nctempchar1 nctemp3910 = {{ 5}, (char*)"void"};
nctemp3909=&nctemp3910;
nctempchar1* nctemp3907= nctemp3909;
nctempchar1* nctemp3911=LibeStrsave(nctemp3907);
resultref=nctemp3911;
}
}
struct tree* nctemp3913= np;
struct tree* nctemp3915= p;
int nctemp3917=SemCopytype(nctemp3913,nctemp3915);
struct tree* nctemp3922= np;
struct tree* nctemp3924=PtreeMvsister(nctemp3922);
np =nctemp3924;
struct tree* nctemp3926= np;
struct tree* nctemp3928=SemExpr(nctemp3926);
struct tree* nctemp3934= np;
nctempchar1* nctemp3936=PtreeGetype(nctemp3934);
exptype=nctemp3936;
struct tree* nctemp3942= np;
nctempchar1* nctemp3944=PtreeGetref(nctemp3942);
expref=nctemp3944;
nctempchar1* nctemp3948= resultref;
nctempchar1* nctemp3951= expref;
int nctemp3954=LibeStrcmp(nctemp3948,nctemp3951);
int nctemp3945 = (nctemp3954 ==0);
if(nctemp3945)
{
struct tree* nctemp3957= p;
struct nctempchar1 *nctemp3961;
struct nctempchar1 nctemp3962 = {{ 19}, (char*)"Illegal conversion"};
nctemp3961=&nctemp3962;
nctempchar1* nctemp3959= nctemp3961;
struct nctempchar1 *nctemp3965;
struct nctempchar1 nctemp3966 = {{ 2}, (char*)" "};
nctemp3965=&nctemp3966;
nctempchar1* nctemp3963= nctemp3965;
int nctemp3967=ErrSerror(nctemp3957,nctemp3959,nctemp3963);
return 0;
}
nctempchar1* nctemp3975= resultref;
struct nctempchar1 *nctemp3980;
struct nctempchar1 nctemp3981 = {{ 5}, (char*)"aref"};
nctemp3980=&nctemp3981;
nctempchar1* nctemp3978= nctemp3980;
int nctemp3982=LibeStrcmp(nctemp3975,nctemp3978);
int nctemp3972 = (nctemp3982 ==0);
nctempchar1* nctemp3988= resultref;
struct nctempchar1 *nctemp3993;
struct nctempchar1 nctemp3994 = {{ 5}, (char*)"sref"};
nctemp3993=&nctemp3994;
nctempchar1* nctemp3991= nctemp3993;
int nctemp3995=LibeStrcmp(nctemp3988,nctemp3991);
int nctemp3985 = (nctemp3995 ==0);
int nctemp3969 = (nctemp3972 || nctemp3985);
if(nctemp3969)
{
nctempchar1* nctemp3998= resultype;
struct nctempchar1 *nctemp4003;
struct nctempchar1 nctemp4004 = {{ 8}, (char*)"complex"};
nctemp4003=&nctemp4004;
nctempchar1* nctemp4001= nctemp4003;
int nctemp4005=LibeStrcmp(nctemp3998,nctemp4001);
if(nctemp4005)
{
struct tree* nctemp4007= p;
struct nctempchar1 *nctemp4011;
struct nctempchar1 nctemp4012 = {{ 19}, (char*)"Illegal conversion"};
nctemp4011=&nctemp4012;
nctempchar1* nctemp4009= nctemp4011;
struct nctempchar1 *nctemp4015;
struct nctempchar1 nctemp4016 = {{ 2}, (char*)" "};
nctemp4015=&nctemp4016;
nctempchar1* nctemp4013= nctemp4015;
int nctemp4017=ErrSerror(nctemp4007,nctemp4009,nctemp4013);
}
return 0;
nctempchar1* nctemp4020= resultype;
struct nctempchar1 *nctemp4025;
struct nctempchar1 nctemp4026 = {{ 4}, (char*)"int"};
nctemp4025=&nctemp4026;
nctempchar1* nctemp4023= nctemp4025;
int nctemp4027=LibeStrcmp(nctemp4020,nctemp4023);
if(nctemp4027)
{
nctempchar1* nctemp4031= exptype;
struct nctempchar1 *nctemp4036;
struct nctempchar1 nctemp4037 = {{ 5}, (char*)"char"};
nctemp4036=&nctemp4037;
nctempchar1* nctemp4034= nctemp4036;
int nctemp4038=LibeStrcmp(nctemp4031,nctemp4034);
int nctemp4028 = (nctemp4038 ==0);
if(nctemp4028)
{
nctempchar1* nctemp4043= exptype;
struct nctempchar1 *nctemp4048;
struct nctempchar1 nctemp4049 = {{ 6}, (char*)"float"};
nctemp4048=&nctemp4049;
nctempchar1* nctemp4046= nctemp4048;
int nctemp4050=LibeStrcmp(nctemp4043,nctemp4046);
int nctemp4040 = (nctemp4050 ==0);
if(nctemp4040)
{
struct tree* nctemp4053= p;
struct nctempchar1 *nctemp4057;
struct nctempchar1 nctemp4058 = {{ 19}, (char*)"Illegal conversion"};
nctemp4057=&nctemp4058;
nctempchar1* nctemp4055= nctemp4057;
struct nctempchar1 *nctemp4061;
struct nctempchar1 nctemp4062 = {{ 2}, (char*)" "};
nctemp4061=&nctemp4062;
nctempchar1* nctemp4059= nctemp4061;
int nctemp4063=ErrSerror(nctemp4053,nctemp4055,nctemp4059);
}
}
return 0;
}
else{
nctempchar1* nctemp4066= resultype;
struct nctempchar1 *nctemp4071;
struct nctempchar1 nctemp4072 = {{ 5}, (char*)"char"};
nctemp4071=&nctemp4072;
nctempchar1* nctemp4069= nctemp4071;
int nctemp4073=LibeStrcmp(nctemp4066,nctemp4069);
if(nctemp4073)
{
nctempchar1* nctemp4077= exptype;
struct nctempchar1 *nctemp4082;
struct nctempchar1 nctemp4083 = {{ 4}, (char*)"int"};
nctemp4082=&nctemp4083;
nctempchar1* nctemp4080= nctemp4082;
int nctemp4084=LibeStrcmp(nctemp4077,nctemp4080);
int nctemp4074 = (nctemp4084 ==0);
if(nctemp4074)
{
struct tree* nctemp4087= p;
struct nctempchar1 *nctemp4091;
struct nctempchar1 nctemp4092 = {{ 19}, (char*)"Illegal conversion"};
nctemp4091=&nctemp4092;
nctempchar1* nctemp4089= nctemp4091;
struct nctempchar1 *nctemp4095;
struct nctempchar1 nctemp4096 = {{ 2}, (char*)" "};
nctemp4095=&nctemp4096;
nctempchar1* nctemp4093= nctemp4095;
int nctemp4097=ErrSerror(nctemp4087,nctemp4089,nctemp4093);
}
return 0;
}
else{
nctempchar1* nctemp4100= resultype;
struct nctempchar1 *nctemp4105;
struct nctempchar1 nctemp4106 = {{ 6}, (char*)"float"};
nctemp4105=&nctemp4106;
nctempchar1* nctemp4103= nctemp4105;
int nctemp4107=LibeStrcmp(nctemp4100,nctemp4103);
if(nctemp4107)
{
nctempchar1* nctemp4111= exptype;
struct nctempchar1 *nctemp4116;
struct nctempchar1 nctemp4117 = {{ 4}, (char*)"int"};
nctemp4116=&nctemp4117;
nctempchar1* nctemp4114= nctemp4116;
int nctemp4118=LibeStrcmp(nctemp4111,nctemp4114);
int nctemp4108 = (nctemp4118 ==0);
if(nctemp4108)
{
struct tree* nctemp4121= np;
struct nctempchar1 *nctemp4125;
struct nctempchar1 nctemp4126 = {{ 19}, (char*)"Illegal conversion"};
nctemp4125=&nctemp4126;
nctempchar1* nctemp4123= nctemp4125;
struct nctempchar1 *nctemp4129;
struct nctempchar1 nctemp4130 = {{ 2}, (char*)" "};
nctemp4129=&nctemp4130;
nctempchar1* nctemp4127= nctemp4129;
int nctemp4131=ErrSerror(nctemp4121,nctemp4123,nctemp4127);
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
struct tree* nctemp4137= p;
nctempchar1* nctemp4139=PtreeGetname(nctemp4137);
nctempchar1* nctemp4135= nctemp4139;
struct nctempchar1 *nctemp4142;
struct nctempchar1 nctemp4143 = {{ 4}, (char*)"new"};
nctemp4142=&nctemp4143;
nctempchar1* nctemp4140= nctemp4142;
int nctemp4144=LibeStrcmp(nctemp4135,nctemp4140);
if(nctemp4144)
{
struct tree* nctemp4149= p;
struct tree* nctemp4151=PtreeMvchild(nctemp4149);
np =nctemp4151;
struct tree* nctemp4153= np;
nctempchar1* nctemp4155=PtreeGetdef(nctemp4153);
struct tree* nctemp4157= np;
struct tree* nctemp4161= np;
nctempchar1* nctemp4163=PtreeGetdef(nctemp4161);
nctempchar1* nctemp4159= nctemp4163;
int nctemp4164=PtreeSetype(nctemp4157,nctemp4159);
struct tree* nctemp4166= np;
struct tree* nctemp4168= p;
int nctemp4170=SemCopytype(nctemp4166,nctemp4168);
struct tree* nctemp4176= np;
nctempchar1* nctemp4178=PtreeGetarray(nctemp4176);
nctempchar1* nctemp4174= nctemp4178;
struct nctempchar1 *nctemp4181;
struct nctempchar1 nctemp4182 = {{ 6}, (char*)"array"};
nctemp4181=&nctemp4182;
nctempchar1* nctemp4179= nctemp4181;
int nctemp4183=LibeStrcmp(nctemp4174,nctemp4179);
int nctemp4171 = (nctemp4183 ==0);
if(nctemp4171)
{
struct tree* nctemp4190= np;
nctempchar1* nctemp4192=PtreeGetstruct(nctemp4190);
nctempchar1* nctemp4188= nctemp4192;
struct nctempchar1 *nctemp4195;
struct nctempchar1 nctemp4196 = {{ 7}, (char*)"struct"};
nctemp4195=&nctemp4196;
nctempchar1* nctemp4193= nctemp4195;
int nctemp4197=LibeStrcmp(nctemp4188,nctemp4193);
int nctemp4185 = (nctemp4197 ==0);
if(nctemp4185)
{
struct tree* nctemp4200= np;
struct nctempchar1 *nctemp4204;
struct nctempchar1 nctemp4205 = {{ 44}, (char*)"Argument limited to array or structure type"};
nctemp4204=&nctemp4205;
nctempchar1* nctemp4202= nctemp4204;
struct nctempchar1 *nctemp4208;
struct nctempchar1 nctemp4209 = {{ 3}, (char*)"  "};
nctemp4208=&nctemp4209;
nctempchar1* nctemp4206= nctemp4208;
int nctemp4210=ErrSerror(nctemp4200,nctemp4202,nctemp4206);
}
}
struct tree* nctemp4214= np;
nctempchar1* nctemp4216=PtreeGetarray(nctemp4214);
nctempchar1* nctemp4212= nctemp4216;
struct nctempchar1 *nctemp4219;
struct nctempchar1 nctemp4220 = {{ 6}, (char*)"array"};
nctemp4219=&nctemp4220;
nctempchar1* nctemp4217= nctemp4219;
int nctemp4221=LibeStrcmp(nctemp4212,nctemp4217);
if(nctemp4221)
{
struct tree* nctemp4226= np;
struct tree* nctemp4228=PtreeMvchild(nctemp4226);
sp =nctemp4228;
struct tree* nctemp4233= sp;
struct tree* nctemp4235=PtreeMvchild(nctemp4233);
sp =nctemp4235;
struct tree* nctemp4240= sp;
struct tree* nctemp4242=PtreeMvchild(nctemp4240);
sp =nctemp4242;
struct tree* nctemp4247= sp;
struct tree* nctemp4249=PtreeMvchild(nctemp4247);
sp =nctemp4249;
rank =1;
int nctemp4254 = (sp ==0);
if(nctemp4254)
{
struct tree* nctemp4259= np;
struct nctempchar1 *nctemp4263;
struct nctempchar1 nctemp4264 = {{ 35}, (char*)"Missing array size in new operator"};
nctemp4263=&nctemp4264;
nctempchar1* nctemp4261= nctemp4263;
struct nctempchar1 *nctemp4267;
struct nctempchar1 nctemp4268 = {{ 2}, (char*)" "};
nctemp4267=&nctemp4268;
nctempchar1* nctemp4265= nctemp4267;
int nctemp4269=ErrSerror(nctemp4259,nctemp4261,nctemp4265);
}
struct tree* nctemp4271= sp;
struct tree* nctemp4273=SemExpr(nctemp4271);
struct tree* nctemp4281= sp;
struct tree* nctemp4283=PtreeMvsister(nctemp4281);
sp =nctemp4283;
int nctemp4274 = (sp !=0);
int nctemp4285=nctemp4274;
while(nctemp4285)
{{
struct tree* nctemp4287= sp;
struct tree* nctemp4289=SemExpr(nctemp4287);
int nctemp4298 = rank + 1;
rank =nctemp4298;
}
struct tree* nctemp4306= sp;
struct tree* nctemp4308=PtreeMvsister(nctemp4306);
sp =nctemp4308;
int nctemp4299 = (sp !=0);
nctemp4285=nctemp4299;}struct tree* nctemp4311= np;
int nctemp4313= rank;
int nctemp4315=PtreeSetrank(nctemp4311,nctemp4313);
struct tree* nctemp4317= p;
int nctemp4319= rank;
int nctemp4321=PtreeSetrank(nctemp4317,nctemp4319);
struct tree* nctemp4323= p;
struct nctempchar1 *nctemp4327;
struct nctempchar1 nctemp4328 = {{ 5}, (char*)"aref"};
nctemp4327=&nctemp4328;
nctempchar1* nctemp4325= nctemp4327;
int nctemp4329=PtreeSetref(nctemp4323,nctemp4325);
}
else{
struct tree* nctemp4331= p;
struct nctempchar1 *nctemp4335;
struct nctempchar1 nctemp4336 = {{ 5}, (char*)"sref"};
nctemp4335=&nctemp4336;
nctempchar1* nctemp4333= nctemp4335;
int nctemp4337=PtreeSetref(nctemp4331,nctemp4333);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp4342= p;
nctempchar1* nctemp4344=PtreeGetname(nctemp4342);
nctempchar1* nctemp4340= nctemp4344;
struct nctempchar1 *nctemp4347;
struct nctempchar1 nctemp4348 = {{ 7}, (char*)"delete"};
nctemp4347=&nctemp4348;
nctempchar1* nctemp4345= nctemp4347;
int nctemp4349=LibeStrcmp(nctemp4340,nctemp4345);
if(nctemp4349)
{
struct tree* nctemp4354= p;
struct tree* nctemp4356=PtreeMvchild(nctemp4354);
np =nctemp4356;
struct tree* nctemp4358= np;
struct tree* nctemp4360=SemExpr(nctemp4358);
struct tree* nctemp4366= np;
nctempchar1* nctemp4368=PtreeGetref(nctemp4366);
nctempchar1* nctemp4364= nctemp4368;
struct nctempchar1 *nctemp4371;
struct nctempchar1 nctemp4372 = {{ 5}, (char*)"aref"};
nctemp4371=&nctemp4372;
nctempchar1* nctemp4369= nctemp4371;
int nctemp4373=LibeStrcmp(nctemp4364,nctemp4369);
int nctemp4361 = (nctemp4373 ==0);
if(nctemp4361)
{
struct tree* nctemp4380= np;
nctempchar1* nctemp4382=PtreeGetref(nctemp4380);
nctempchar1* nctemp4378= nctemp4382;
struct nctempchar1 *nctemp4385;
struct nctempchar1 nctemp4386 = {{ 5}, (char*)"sref"};
nctemp4385=&nctemp4386;
nctempchar1* nctemp4383= nctemp4385;
int nctemp4387=LibeStrcmp(nctemp4378,nctemp4383);
int nctemp4375 = (nctemp4387 ==0);
if(nctemp4375)
{
struct tree* nctemp4390= p;
struct nctempchar1 *nctemp4394;
struct nctempchar1 nctemp4395 = {{ 25}, (char*)"not a array or structure"};
nctemp4394=&nctemp4395;
nctempchar1* nctemp4392= nctemp4394;
struct tree* nctemp4398= p;
nctempchar1* nctemp4400=PtreeGetdef(nctemp4398);
nctempchar1* nctemp4396= nctemp4400;
int nctemp4401=ErrSerror(nctemp4390,nctemp4392,nctemp4396);
}
}
else{
struct tree* nctemp4403= p;
struct tree* nctemp4407= np;
nctempchar1* nctemp4409=PtreeGetype(nctemp4407);
nctempchar1* nctemp4405= nctemp4409;
int nctemp4410=PtreeSetype(nctemp4403,nctemp4405);
struct tree* nctemp4412= p;
struct tree* nctemp4416= np;
nctempchar1* nctemp4418=PtreeGetref(nctemp4416);
nctempchar1* nctemp4414= nctemp4418;
int nctemp4419=PtreeSetref(nctemp4412,nctemp4414);
}
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp4424= p;
nctempchar1* nctemp4426=PtreeGetname(nctemp4424);
nctempchar1* nctemp4422= nctemp4426;
struct nctempchar1 *nctemp4429;
struct nctempchar1 nctemp4430 = {{ 7}, (char*)"sizeof"};
nctemp4429=&nctemp4430;
nctempchar1* nctemp4427= nctemp4429;
int nctemp4431=LibeStrcmp(nctemp4422,nctemp4427);
if(nctemp4431)
{
struct tree* nctemp4433= p;
struct nctempchar1 *nctemp4437;
struct nctempchar1 nctemp4438 = {{ 4}, (char*)"int"};
nctemp4437=&nctemp4438;
nctempchar1* nctemp4435= nctemp4437;
int nctemp4439=PtreeSetype(nctemp4433,nctemp4435);
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp4444= p;
nctempchar1* nctemp4446=PtreeGetname(nctemp4444);
nctempchar1* nctemp4442= nctemp4446;
struct nctempchar1 *nctemp4449;
struct nctempchar1 nctemp4450 = {{ 6}, (char*)"cmplx"};
nctemp4449=&nctemp4450;
nctempchar1* nctemp4447= nctemp4449;
int nctemp4451=LibeStrcmp(nctemp4442,nctemp4447);
if(nctemp4451)
{
struct tree* nctemp4456= p;
struct tree* nctemp4458=PtreeMvchild(nctemp4456);
np =nctemp4458;
struct tree* nctemp4463= np;
struct tree* nctemp4465=PtreeMvchild(nctemp4463);
np =nctemp4465;
struct tree* nctemp4467= np;
struct tree* nctemp4469=SemExpr(nctemp4467);
struct tree* nctemp4475= np;
nctempchar1* nctemp4477=PtreeGetype(nctemp4475);
nctempchar1* nctemp4473= nctemp4477;
struct nctempchar1 *nctemp4480;
struct nctempchar1 nctemp4481 = {{ 6}, (char*)"float"};
nctemp4480=&nctemp4481;
nctempchar1* nctemp4478= nctemp4480;
int nctemp4482=LibeStrcmp(nctemp4473,nctemp4478);
int nctemp4470 = (nctemp4482 ==0);
if(nctemp4470)
{
struct tree* nctemp4485= p;
struct nctempchar1 *nctemp4489;
struct nctempchar1 nctemp4490 = {{ 33}, (char*)"Argument to cmplx is not a float"};
nctemp4489=&nctemp4490;
nctempchar1* nctemp4487= nctemp4489;
struct tree* nctemp4493= p;
nctempchar1* nctemp4495=PtreeGetdef(nctemp4493);
nctempchar1* nctemp4491= nctemp4495;
int nctemp4496=ErrSerror(nctemp4485,nctemp4487,nctemp4491);
return 0;
}
struct tree* nctemp4503= np;
nctempchar1* nctemp4505=PtreeGetref(nctemp4503);
nctempchar1* nctemp4501= nctemp4505;
struct nctempchar1 *nctemp4508;
struct nctempchar1 nctemp4509 = {{ 5}, (char*)"aref"};
nctemp4508=&nctemp4509;
nctempchar1* nctemp4506= nctemp4508;
int nctemp4510=LibeStrcmp(nctemp4501,nctemp4506);
struct tree* nctemp4514= np;
nctempchar1* nctemp4516=PtreeGetref(nctemp4514);
nctempchar1* nctemp4512= nctemp4516;
struct nctempchar1 *nctemp4519;
struct nctempchar1 nctemp4520 = {{ 5}, (char*)"sref"};
nctemp4519=&nctemp4520;
nctempchar1* nctemp4517= nctemp4519;
int nctemp4521=LibeStrcmp(nctemp4512,nctemp4517);
int nctemp4498 = (nctemp4510 || nctemp4521);
if(nctemp4498)
{
struct tree* nctemp4523= p;
struct nctempchar1 *nctemp4527;
struct nctempchar1 nctemp4528 = {{ 34}, (char*)"Argument to cmplx is not a scalar"};
nctemp4527=&nctemp4528;
nctempchar1* nctemp4525= nctemp4527;
struct tree* nctemp4531= p;
nctempchar1* nctemp4533=PtreeGetdef(nctemp4531);
nctempchar1* nctemp4529= nctemp4533;
int nctemp4534=ErrSerror(nctemp4523,nctemp4525,nctemp4529);
return 0;
}
struct tree* nctemp4540= np;
struct tree* nctemp4542=PtreeMvsister(nctemp4540);
np =nctemp4542;
struct tree* nctemp4544= np;
struct tree* nctemp4546=SemExpr(nctemp4544);
struct tree* nctemp4552= np;
nctempchar1* nctemp4554=PtreeGetype(nctemp4552);
nctempchar1* nctemp4550= nctemp4554;
struct nctempchar1 *nctemp4557;
struct nctempchar1 nctemp4558 = {{ 6}, (char*)"float"};
nctemp4557=&nctemp4558;
nctempchar1* nctemp4555= nctemp4557;
int nctemp4559=LibeStrcmp(nctemp4550,nctemp4555);
int nctemp4547 = (nctemp4559 ==0);
if(nctemp4547)
{
struct tree* nctemp4562= p;
struct nctempchar1 *nctemp4566;
struct nctempchar1 nctemp4567 = {{ 33}, (char*)"Argument to cmplx is not a float"};
nctemp4566=&nctemp4567;
nctempchar1* nctemp4564= nctemp4566;
struct tree* nctemp4570= p;
nctempchar1* nctemp4572=PtreeGetdef(nctemp4570);
nctempchar1* nctemp4568= nctemp4572;
int nctemp4573=ErrSerror(nctemp4562,nctemp4564,nctemp4568);
}
struct tree* nctemp4579= np;
nctempchar1* nctemp4581=PtreeGetref(nctemp4579);
nctempchar1* nctemp4577= nctemp4581;
struct nctempchar1 *nctemp4584;
struct nctempchar1 nctemp4585 = {{ 5}, (char*)"aref"};
nctemp4584=&nctemp4585;
nctempchar1* nctemp4582= nctemp4584;
int nctemp4586=LibeStrcmp(nctemp4577,nctemp4582);
struct tree* nctemp4590= np;
nctempchar1* nctemp4592=PtreeGetref(nctemp4590);
nctempchar1* nctemp4588= nctemp4592;
struct nctempchar1 *nctemp4595;
struct nctempchar1 nctemp4596 = {{ 5}, (char*)"sref"};
nctemp4595=&nctemp4596;
nctempchar1* nctemp4593= nctemp4595;
int nctemp4597=LibeStrcmp(nctemp4588,nctemp4593);
int nctemp4574 = (nctemp4586 || nctemp4597);
if(nctemp4574)
{
struct tree* nctemp4599= p;
struct nctempchar1 *nctemp4603;
struct nctempchar1 nctemp4604 = {{ 34}, (char*)"Argument to cmplx is not a scalar"};
nctemp4603=&nctemp4604;
nctempchar1* nctemp4601= nctemp4603;
struct tree* nctemp4607= p;
nctempchar1* nctemp4609=PtreeGetdef(nctemp4607);
nctempchar1* nctemp4605= nctemp4609;
int nctemp4610=ErrSerror(nctemp4599,nctemp4601,nctemp4605);
return 0;
}
struct tree* nctemp4613= p;
struct nctempchar1 *nctemp4617;
struct nctempchar1 nctemp4618 = {{ 8}, (char*)"complex"};
nctemp4617=&nctemp4618;
nctempchar1* nctemp4615= nctemp4617;
int nctemp4619=PtreeSetype(nctemp4613,nctemp4615);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp4624= p;
nctempchar1* nctemp4626=PtreeGetname(nctemp4624);
nctempchar1* nctemp4622= nctemp4626;
struct nctempchar1 *nctemp4629;
struct nctempchar1 nctemp4630 = {{ 3}, (char*)"re"};
nctemp4629=&nctemp4630;
nctempchar1* nctemp4627= nctemp4629;
int nctemp4631=LibeStrcmp(nctemp4622,nctemp4627);
if(nctemp4631)
{
struct tree* nctemp4636= p;
struct tree* nctemp4638=PtreeMvchild(nctemp4636);
np =nctemp4638;
struct tree* nctemp4640= np;
struct tree* nctemp4642=SemExpr(nctemp4640);
struct tree* nctemp4648= np;
nctempchar1* nctemp4650=PtreeGetype(nctemp4648);
nctempchar1* nctemp4646= nctemp4650;
struct nctempchar1 *nctemp4653;
struct nctempchar1 nctemp4654 = {{ 8}, (char*)"complex"};
nctemp4653=&nctemp4654;
nctempchar1* nctemp4651= nctemp4653;
int nctemp4655=LibeStrcmp(nctemp4646,nctemp4651);
int nctemp4643 = (nctemp4655 ==0);
if(nctemp4643)
{
struct tree* nctemp4658= p;
struct nctempchar1 *nctemp4662;
struct nctempchar1 nctemp4663 = {{ 40}, (char*)"Argument to re is not a of type complex"};
nctemp4662=&nctemp4663;
nctempchar1* nctemp4660= nctemp4662;
struct tree* nctemp4666= p;
nctempchar1* nctemp4668=PtreeGetdef(nctemp4666);
nctempchar1* nctemp4664= nctemp4668;
int nctemp4669=ErrSerror(nctemp4658,nctemp4660,nctemp4664);
return 0;
}
struct tree* nctemp4676= np;
nctempchar1* nctemp4678=PtreeGetref(nctemp4676);
nctempchar1* nctemp4674= nctemp4678;
struct nctempchar1 *nctemp4681;
struct nctempchar1 nctemp4682 = {{ 5}, (char*)"aref"};
nctemp4681=&nctemp4682;
nctempchar1* nctemp4679= nctemp4681;
int nctemp4683=LibeStrcmp(nctemp4674,nctemp4679);
struct tree* nctemp4687= np;
nctempchar1* nctemp4689=PtreeGetref(nctemp4687);
nctempchar1* nctemp4685= nctemp4689;
struct nctempchar1 *nctemp4692;
struct nctempchar1 nctemp4693 = {{ 5}, (char*)"sref"};
nctemp4692=&nctemp4693;
nctempchar1* nctemp4690= nctemp4692;
int nctemp4694=LibeStrcmp(nctemp4685,nctemp4690);
int nctemp4671 = (nctemp4683 || nctemp4694);
if(nctemp4671)
{
struct tree* nctemp4696= p;
struct nctempchar1 *nctemp4700;
struct nctempchar1 nctemp4701 = {{ 31}, (char*)"Argument to re is not a scalar"};
nctemp4700=&nctemp4701;
nctempchar1* nctemp4698= nctemp4700;
struct tree* nctemp4704= p;
nctempchar1* nctemp4706=PtreeGetdef(nctemp4704);
nctempchar1* nctemp4702= nctemp4706;
int nctemp4707=ErrSerror(nctemp4696,nctemp4698,nctemp4702);
return 0;
}
struct tree* nctemp4710= p;
struct nctempchar1 *nctemp4714;
struct nctempchar1 nctemp4715 = {{ 6}, (char*)"float"};
nctemp4714=&nctemp4715;
nctempchar1* nctemp4712= nctemp4714;
int nctemp4716=PtreeSetype(nctemp4710,nctemp4712);
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp4721= p;
nctempchar1* nctemp4723=PtreeGetname(nctemp4721);
nctempchar1* nctemp4719= nctemp4723;
struct nctempchar1 *nctemp4726;
struct nctempchar1 nctemp4727 = {{ 3}, (char*)"im"};
nctemp4726=&nctemp4727;
nctempchar1* nctemp4724= nctemp4726;
int nctemp4728=LibeStrcmp(nctemp4719,nctemp4724);
if(nctemp4728)
{
struct tree* nctemp4733= p;
struct tree* nctemp4735=PtreeMvchild(nctemp4733);
np =nctemp4735;
struct tree* nctemp4737= np;
struct tree* nctemp4739=SemExpr(nctemp4737);
struct tree* nctemp4745= np;
nctempchar1* nctemp4747=PtreeGetype(nctemp4745);
nctempchar1* nctemp4743= nctemp4747;
struct nctempchar1 *nctemp4750;
struct nctempchar1 nctemp4751 = {{ 8}, (char*)"complex"};
nctemp4750=&nctemp4751;
nctempchar1* nctemp4748= nctemp4750;
int nctemp4752=LibeStrcmp(nctemp4743,nctemp4748);
int nctemp4740 = (nctemp4752 ==0);
if(nctemp4740)
{
struct tree* nctemp4755= p;
struct nctempchar1 *nctemp4759;
struct nctempchar1 nctemp4760 = {{ 38}, (char*)"Argument to re is not of type complex"};
nctemp4759=&nctemp4760;
nctempchar1* nctemp4757= nctemp4759;
struct tree* nctemp4763= p;
nctempchar1* nctemp4765=PtreeGetdef(nctemp4763);
nctempchar1* nctemp4761= nctemp4765;
int nctemp4766=ErrSerror(nctemp4755,nctemp4757,nctemp4761);
return 0;
}
struct tree* nctemp4773= np;
nctempchar1* nctemp4775=PtreeGetref(nctemp4773);
nctempchar1* nctemp4771= nctemp4775;
struct nctempchar1 *nctemp4778;
struct nctempchar1 nctemp4779 = {{ 5}, (char*)"aref"};
nctemp4778=&nctemp4779;
nctempchar1* nctemp4776= nctemp4778;
int nctemp4780=LibeStrcmp(nctemp4771,nctemp4776);
struct tree* nctemp4784= np;
nctempchar1* nctemp4786=PtreeGetref(nctemp4784);
nctempchar1* nctemp4782= nctemp4786;
struct nctempchar1 *nctemp4789;
struct nctempchar1 nctemp4790 = {{ 5}, (char*)"sref"};
nctemp4789=&nctemp4790;
nctempchar1* nctemp4787= nctemp4789;
int nctemp4791=LibeStrcmp(nctemp4782,nctemp4787);
int nctemp4768 = (nctemp4780 || nctemp4791);
if(nctemp4768)
{
struct tree* nctemp4793= p;
struct nctempchar1 *nctemp4797;
struct nctempchar1 nctemp4798 = {{ 31}, (char*)"Argument to re is not a scalar"};
nctemp4797=&nctemp4798;
nctempchar1* nctemp4795= nctemp4797;
struct tree* nctemp4801= p;
nctempchar1* nctemp4803=PtreeGetdef(nctemp4801);
nctempchar1* nctemp4799= nctemp4803;
int nctemp4804=ErrSerror(nctemp4793,nctemp4795,nctemp4799);
return 0;
}
struct tree* nctemp4807= p;
struct nctempchar1 *nctemp4811;
struct nctempchar1 nctemp4812 = {{ 6}, (char*)"float"};
nctemp4811=&nctemp4812;
nctempchar1* nctemp4809= nctemp4811;
int nctemp4813=PtreeSetype(nctemp4807,nctemp4809);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp4820= p;
nctempchar1* nctemp4822=PtreeGetname(nctemp4820);
nctempchar1* nctemp4818= nctemp4822;
struct nctempchar1 *nctemp4825;
struct nctempchar1 nctemp4826 = {{ 4}, (char*)"len"};
nctemp4825=&nctemp4826;
nctempchar1* nctemp4823= nctemp4825;
int nctemp4827=LibeStrcmp(nctemp4818,nctemp4823);
int nctemp4815 = (nctemp4827 ==1);
if(nctemp4815)
{
struct tree* nctemp4830= p;
struct nctempchar1 *nctemp4834;
struct nctempchar1 nctemp4835 = {{ 4}, (char*)"int"};
nctemp4834=&nctemp4835;
nctempchar1* nctemp4832= nctemp4834;
int nctemp4836=PtreeSetype(nctemp4830,nctemp4832);
struct tree* nctemp4841= p;
struct tree* nctemp4843=PtreeMvchild(nctemp4841);
np =nctemp4843;
struct tree* nctemp4845= np;
struct tree* nctemp4847=SemExpr(nctemp4845);
struct tree* nctemp4853= np;
nctempchar1* nctemp4855=PtreeGetref(nctemp4853);
nctempchar1* nctemp4851= nctemp4855;
struct nctempchar1 *nctemp4858;
struct nctempchar1 nctemp4859 = {{ 5}, (char*)"aref"};
nctemp4858=&nctemp4859;
nctempchar1* nctemp4856= nctemp4858;
int nctemp4860=LibeStrcmp(nctemp4851,nctemp4856);
int nctemp4848 = (nctemp4860 ==0);
if(nctemp4848)
{
struct tree* nctemp4863= p;
struct nctempchar1 *nctemp4867;
struct nctempchar1 nctemp4868 = {{ 13}, (char*)"not an array"};
nctemp4867=&nctemp4868;
nctempchar1* nctemp4865= nctemp4867;
struct tree* nctemp4871= p;
nctempchar1* nctemp4873=PtreeGetdef(nctemp4871);
nctempchar1* nctemp4869= nctemp4873;
int nctemp4874=ErrSerror(nctemp4863,nctemp4865,nctemp4869);
}
struct tree* nctemp4879= np;
struct tree* nctemp4881=PtreeMvsister(nctemp4879);
np =nctemp4881;
struct tree* nctemp4883= np;
struct tree* nctemp4885=SemExpr(nctemp4883);
struct tree* nctemp4889= np;
nctempchar1* nctemp4891=PtreeGetref(nctemp4889);
nctempchar1* nctemp4887= nctemp4891;
struct nctempchar1 *nctemp4894;
struct nctempchar1 nctemp4895 = {{ 5}, (char*)"aref"};
nctemp4894=&nctemp4895;
nctempchar1* nctemp4892= nctemp4894;
int nctemp4896=LibeStrcmp(nctemp4887,nctemp4892);
if(nctemp4896)
{
struct tree* nctemp4898= p;
struct nctempchar1 *nctemp4902;
struct nctempchar1 nctemp4903 = {{ 13}, (char*)"not a scalar"};
nctemp4902=&nctemp4903;
nctempchar1* nctemp4900= nctemp4902;
struct tree* nctemp4906= p;
nctempchar1* nctemp4908=PtreeGetdef(nctemp4906);
nctempchar1* nctemp4904= nctemp4908;
int nctemp4909=ErrSerror(nctemp4898,nctemp4900,nctemp4904);
}
struct tree* nctemp4915= np;
nctempchar1* nctemp4917=PtreeGetype(nctemp4915);
nctempchar1* nctemp4913= nctemp4917;
struct nctempchar1 *nctemp4920;
struct nctempchar1 nctemp4921 = {{ 4}, (char*)"int"};
nctemp4920=&nctemp4921;
nctempchar1* nctemp4918= nctemp4920;
int nctemp4922=LibeStrcmp(nctemp4913,nctemp4918);
int nctemp4910 = (nctemp4922 ==0);
if(nctemp4910)
{
struct tree* nctemp4925= p;
struct nctempchar1 *nctemp4929;
struct nctempchar1 nctemp4930 = {{ 26}, (char*)"not an integer expression"};
nctemp4929=&nctemp4930;
nctempchar1* nctemp4927= nctemp4929;
struct tree* nctemp4933= p;
nctempchar1* nctemp4935=PtreeGetdef(nctemp4933);
nctempchar1* nctemp4931= nctemp4935;
int nctemp4936=ErrSerror(nctemp4925,nctemp4927,nctemp4931);
}
struct tree* nctemp4944= np;
struct tree* nctemp4946=PtreeMvsister(nctemp4944);
np =nctemp4946;
int nctemp4937 = (np !=0);
if(nctemp4937)
{
struct tree* nctemp4949= p;
struct nctempchar1 *nctemp4953;
struct nctempchar1 nctemp4954 = {{ 19}, (char*)"too many arguments"};
nctemp4953=&nctemp4954;
nctempchar1* nctemp4951= nctemp4953;
struct tree* nctemp4957= p;
nctempchar1* nctemp4959=PtreeGetdef(nctemp4957);
nctempchar1* nctemp4955= nctemp4959;
int nctemp4960=ErrSerror(nctemp4949,nctemp4951,nctemp4955);
}
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp4967= p;
nctempchar1* nctemp4969=PtreeGetarray(nctemp4967);
nctempchar1* nctemp4965= nctemp4969;
struct nctempchar1 *nctemp4972;
struct nctempchar1 nctemp4973 = {{ 6}, (char*)"array"};
nctemp4972=&nctemp4973;
nctempchar1* nctemp4970= nctemp4972;
int nctemp4974=LibeStrcmp(nctemp4965,nctemp4970);
int nctemp4962 = (nctemp4974 ==0);
if(nctemp4962)
{
struct tree* nctemp4977= p;
struct nctempchar1 *nctemp4981;
struct nctempchar1 nctemp4982 = {{ 13}, (char*)"Not an array"};
nctemp4981=&nctemp4982;
nctempchar1* nctemp4979= nctemp4981;
struct tree* nctemp4985= p;
nctempchar1* nctemp4987=PtreeGetdef(nctemp4985);
nctempchar1* nctemp4983= nctemp4987;
int nctemp4988=ErrSerror(nctemp4977,nctemp4979,nctemp4983);
return 0;
}
struct tree* nctemp4991= p;
struct nctempchar1 *nctemp4995;
struct nctempchar1 nctemp4996 = {{ 11}, (char*)"identifier"};
nctemp4995=&nctemp4996;
nctempchar1* nctemp4993= nctemp4995;
int nctemp4997=PtreeSetname(nctemp4991,nctemp4993);
struct tree* nctemp5002= p;
struct tree* nctemp5004=PtreeMvchild(nctemp5002);
np =nctemp5004;
struct tree* nctemp5010= np;
nctempchar1* nctemp5012=PtreeGetname(nctemp5010);
nctempchar1* nctemp5008= nctemp5012;
struct nctempchar1 *nctemp5015;
struct nctempchar1 nctemp5016 = {{ 9}, (char*)"exprlist"};
nctemp5015=&nctemp5016;
nctempchar1* nctemp5013= nctemp5015;
int nctemp5017=LibeStrcmp(nctemp5008,nctemp5013);
int nctemp5005 = (nctemp5017 ==0);
if(nctemp5005)
{
struct tree* nctemp5020= p;
struct nctempchar1 *nctemp5024;
struct nctempchar1 nctemp5025 = {{ 22}, (char*)"Missing array indexes"};
nctemp5024=&nctemp5025;
nctempchar1* nctemp5022= nctemp5024;
struct tree* nctemp5028= p;
nctempchar1* nctemp5030=PtreeGetdef(nctemp5028);
nctempchar1* nctemp5026= nctemp5030;
int nctemp5031=ErrSerror(nctemp5020,nctemp5022,nctemp5026);
return 0;
}
struct tree* nctemp5040= np;
struct tree* nctemp5042=PtreeMvchild(nctemp5040);
np =nctemp5042;
int nctemp5033 = (np !=0);
if(nctemp5033)
{
rank =0;
int nctemp5048 = (np !=0);
int nctemp5052=nctemp5048;
while(nctemp5052)
{{
struct tree* nctemp5054= np;
struct tree* nctemp5056=SemExpr(nctemp5054);
struct tree* nctemp5061= np;
struct tree* nctemp5063=PtreeMvsister(nctemp5061);
np =nctemp5063;
int nctemp5072 = rank + 1;
rank =nctemp5072;
}
int nctemp5073 = (np !=0);
nctemp5052=nctemp5073;}}
struct symbol* nctemp5081= tp;
int nctemp5083=SymGetrank(nctemp5081);
int nctemp5077 = (rank !=nctemp5083);
if(nctemp5077)
{
struct tree* nctemp5085= p;
struct nctempchar1 *nctemp5089;
struct nctempchar1 nctemp5090 = {{ 24}, (char*)"Illegal array dimension"};
nctemp5089=&nctemp5090;
nctempchar1* nctemp5087= nctemp5089;
struct tree* nctemp5093= p;
nctempchar1* nctemp5095=PtreeGetdef(nctemp5093);
nctempchar1* nctemp5091= nctemp5095;
int nctemp5096=ErrSerror(nctemp5085,nctemp5087,nctemp5091);
return 0;
}
struct tree* nctemp5099= p;
int nctemp5101= rank;
int nctemp5103=PtreeSetrank(nctemp5099,nctemp5101);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp5110= p;
nctempchar1* nctemp5112=PtreeGetstruct(nctemp5110);
nctempchar1* nctemp5108= nctemp5112;
struct nctempchar1 *nctemp5115;
struct nctempchar1 nctemp5116 = {{ 7}, (char*)"struct"};
nctemp5115=&nctemp5116;
nctempchar1* nctemp5113= nctemp5115;
int nctemp5117=LibeStrcmp(nctemp5108,nctemp5113);
int nctemp5105 = (nctemp5117 ==0);
if(nctemp5105)
{
struct tree* nctemp5120= p;
struct nctempchar1 *nctemp5124;
struct nctempchar1 nctemp5125 = {{ 16}, (char*)"Not a structure"};
nctemp5124=&nctemp5125;
nctempchar1* nctemp5122= nctemp5124;
struct tree* nctemp5128= p;
nctempchar1* nctemp5130=PtreeGetdef(nctemp5128);
nctempchar1* nctemp5126= nctemp5130;
int nctemp5131=ErrSerror(nctemp5120,nctemp5122,nctemp5126);
return 0;
}
struct tree* nctemp5134= p;
struct nctempchar1 *nctemp5138;
struct nctempchar1 nctemp5139 = {{ 11}, (char*)"identifier"};
nctemp5138=&nctemp5139;
nctempchar1* nctemp5136= nctemp5138;
int nctemp5140=PtreeSetname(nctemp5134,nctemp5136);
struct symbol* nctemp5146= tp;
nctempchar1* nctemp5148=SymGetype(nctemp5146);
temp=nctemp5148;
nctempchar1* nctemp5156= temp;
struct symbol* nctemp5159=SymLook(nctemp5156);
up =nctemp5159;
int nctemp5149 = (up ==0);
if(nctemp5149)
{
nctempchar1* nctemp5168= temp;
struct symbol* nctemp5171=SymLook(nctemp5168);
up =nctemp5171;
int nctemp5161 = (up ==0);
if(nctemp5161)
{
struct tree* nctemp5174= p;
struct nctempchar1 *nctemp5178;
struct nctempchar1 nctemp5179 = {{ 26}, (char*)"Undeclared structure type"};
nctemp5178=&nctemp5179;
nctempchar1* nctemp5176= nctemp5178;
struct nctempchar1 *nctemp5182;
struct nctempchar1 nctemp5183 = {{ 2}, (char*)" "};
nctemp5182=&nctemp5183;
nctempchar1* nctemp5180= nctemp5182;
int nctemp5184=ErrSerror(nctemp5174,nctemp5176,nctemp5180);
return 0;
}
}
struct symbol* nctemp5189= tp;
nctempchar1* nctemp5191=SymGetstruct(nctemp5189);
nctempchar1* nctemp5187= nctemp5191;
struct nctempchar1 *nctemp5194;
struct nctempchar1 nctemp5195 = {{ 10}, (char*)"structdef"};
nctemp5194=&nctemp5195;
nctempchar1* nctemp5192= nctemp5194;
int nctemp5196=LibeStrcmp(nctemp5187,nctemp5192);
if(nctemp5196)
{
struct tree* nctemp5198= p;
struct nctempchar1 *nctemp5202;
struct nctempchar1 nctemp5203 = {{ 43}, (char*)"Struct names can not be used as a variable"};
nctemp5202=&nctemp5203;
nctempchar1* nctemp5200= nctemp5202;
struct tree* nctemp5206= p;
nctempchar1* nctemp5208=PtreeGetdef(nctemp5206);
nctempchar1* nctemp5204= nctemp5208;
int nctemp5209=ErrSerror(nctemp5198,nctemp5200,nctemp5204);
return 0;
}
struct tree* nctemp5215= p;
struct tree* nctemp5217=PtreeMvchild(nctemp5215);
np =nctemp5217;
int nctemp5218 = (np ==0);
if(nctemp5218)
{
struct tree* nctemp5223= p;
struct nctempchar1 *nctemp5227;
struct nctempchar1 nctemp5228 = {{ 27}, (char*)"Missing structure selector"};
nctemp5227=&nctemp5228;
nctempchar1* nctemp5225= nctemp5227;
struct tree* nctemp5231= p;
nctempchar1* nctemp5233=PtreeGetdef(nctemp5231);
nctempchar1* nctemp5229= nctemp5233;
int nctemp5234=ErrSerror(nctemp5223,nctemp5225,nctemp5229);
return 0;
}
struct tree* nctemp5239= p;
nctempchar1* nctemp5241=PtreeGetarray(nctemp5239);
nctempchar1* nctemp5237= nctemp5241;
struct nctempchar1 *nctemp5244;
struct nctempchar1 nctemp5245 = {{ 6}, (char*)"array"};
nctemp5244=&nctemp5245;
nctempchar1* nctemp5242= nctemp5244;
int nctemp5246=LibeStrcmp(nctemp5237,nctemp5242);
if(nctemp5246)
{
struct tree* nctemp5251= np;
struct tree* nctemp5253=PtreeMvsister(nctemp5251);
np =nctemp5253;
}
int nctemp5254 = (np ==0);
if(nctemp5254)
{
struct tree* nctemp5259= p;
struct nctempchar1 *nctemp5263;
struct nctempchar1 nctemp5264 = {{ 20}, (char*)"Missing array index"};
nctemp5263=&nctemp5264;
nctempchar1* nctemp5261= nctemp5263;
struct tree* nctemp5267= p;
nctempchar1* nctemp5269=PtreeGetdef(nctemp5267);
nctempchar1* nctemp5265= nctemp5269;
int nctemp5270=ErrSerror(nctemp5259,nctemp5261,nctemp5265);
return 0;
}
struct symbol* nctemp5276= up;
struct symbol* nctemp5278=SymGetable(nctemp5276);
uup =nctemp5278;
struct tree* nctemp5288= np;
nctempchar1* nctemp5290=PtreeGetdef(nctemp5288);
nctempchar1* nctemp5286= nctemp5290;
struct symbol* nctemp5291= uup;
struct symbol* nctemp5293=SymLookup(nctemp5286,nctemp5291);
tp =nctemp5293;
int nctemp5279 = (tp ==0);
if(nctemp5279)
{
struct tree* nctemp5296= np;
struct nctempchar1 *nctemp5300;
struct nctempchar1 nctemp5301 = {{ 28}, (char*)"Undeclared structure member"};
nctemp5300=&nctemp5301;
nctempchar1* nctemp5298= nctemp5300;
struct tree* nctemp5304= np;
nctempchar1* nctemp5306=PtreeGetdef(nctemp5304);
nctempchar1* nctemp5302= nctemp5306;
int nctemp5307=ErrSerror(nctemp5296,nctemp5298,nctemp5302);
return 0;
}
struct symbol* nctemp5312= tp;
nctempchar1* nctemp5314=SymGetarray(nctemp5312);
nctempchar1* nctemp5310= nctemp5314;
struct nctempchar1 *nctemp5317;
struct nctempchar1 nctemp5318 = {{ 6}, (char*)"array"};
nctemp5317=&nctemp5318;
nctempchar1* nctemp5315= nctemp5317;
int nctemp5319=LibeStrcmp(nctemp5310,nctemp5315);
if(nctemp5319)
{
struct tree* nctemp5323= np;
struct tree* nctemp5325=PtreeMvchild(nctemp5323);
int nctemp5320 = (nctemp5325 !=0);
if(nctemp5320)
{
struct tree* nctemp5328= np;
struct symbol* nctemp5330= tp;
int nctemp5332=SemArray(nctemp5328,nctemp5330);
struct symbol* nctemp5336= tp;
nctempchar1* nctemp5338=SymGetstruct(nctemp5336);
nctempchar1* nctemp5334= nctemp5338;
struct nctempchar1 *nctemp5341;
struct nctempchar1 nctemp5342 = {{ 7}, (char*)"struct"};
nctemp5341=&nctemp5342;
nctempchar1* nctemp5339= nctemp5341;
int nctemp5343=LibeStrcmp(nctemp5334,nctemp5339);
if(nctemp5343)
{
struct tree* nctemp5345= np;
struct nctempchar1 *nctemp5349;
struct nctempchar1 nctemp5350 = {{ 5}, (char*)"sref"};
nctemp5349=&nctemp5350;
nctempchar1* nctemp5347= nctemp5349;
int nctemp5351=PtreeSetref(nctemp5345,nctemp5347);
}
}
else{
struct tree* nctemp5353= np;
struct nctempchar1 *nctemp5357;
struct nctempchar1 nctemp5358 = {{ 5}, (char*)"aref"};
nctemp5357=&nctemp5358;
nctempchar1* nctemp5355= nctemp5357;
int nctemp5359=PtreeSetref(nctemp5353,nctemp5355);
}
}
else{
struct symbol* nctemp5363= tp;
nctempchar1* nctemp5365=SymGetstruct(nctemp5363);
nctempchar1* nctemp5361= nctemp5365;
struct nctempchar1 *nctemp5368;
struct nctempchar1 nctemp5369 = {{ 7}, (char*)"struct"};
nctemp5368=&nctemp5369;
nctempchar1* nctemp5366= nctemp5368;
int nctemp5370=LibeStrcmp(nctemp5361,nctemp5366);
if(nctemp5370)
{
struct tree* nctemp5372= np;
struct nctempchar1 *nctemp5376;
struct nctempchar1 nctemp5377 = {{ 5}, (char*)"sref"};
nctemp5376=&nctemp5377;
nctempchar1* nctemp5374= nctemp5376;
int nctemp5378=PtreeSetref(nctemp5372,nctemp5374);
}
}
struct tree* nctemp5380= np;
struct symbol* nctemp5384= tp;
nctempchar1* nctemp5386=SymGetype(nctemp5384);
nctempchar1* nctemp5382= nctemp5386;
int nctemp5387=PtreeSetype(nctemp5380,nctemp5382);
struct tree* nctemp5389= np;
struct symbol* nctemp5393= tp;
nctempchar1* nctemp5395=SymGetarray(nctemp5393);
nctempchar1* nctemp5391= nctemp5395;
int nctemp5396=PtreeSetarray(nctemp5389,nctemp5391);
struct tree* nctemp5398= np;
struct symbol* nctemp5402= tp;
int nctemp5404=SymGetrank(nctemp5402);
int nctemp5400= nctemp5404;
int nctemp5405=PtreeSetrank(nctemp5398,nctemp5400);
struct tree* nctemp5407= np;
struct symbol* nctemp5411= tp;
nctempchar1* nctemp5413=SymGetlval(nctemp5411);
nctempchar1* nctemp5409= nctemp5413;
int nctemp5414=PtreeSetlval(nctemp5407,nctemp5409);
struct tree* nctemp5416= p;
struct symbol* nctemp5420= tp;
nctempchar1* nctemp5422=SymGetype(nctemp5420);
nctempchar1* nctemp5418= nctemp5422;
int nctemp5423=PtreeSetype(nctemp5416,nctemp5418);
struct tree* nctemp5425= p;
struct tree* nctemp5429= np;
nctempchar1* nctemp5431=PtreeGetref(nctemp5429);
nctempchar1* nctemp5427= nctemp5431;
int nctemp5432=PtreeSetref(nctemp5425,nctemp5427);
struct tree* nctemp5434= p;
struct symbol* nctemp5438= tp;
int nctemp5440=SymGetrank(nctemp5438);
int nctemp5436= nctemp5440;
int nctemp5441=PtreeSetrank(nctemp5434,nctemp5436);
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp5446= p;
nctempchar1* nctemp5448=PtreeGetname(nctemp5446);
nctempchar1* nctemp5444= nctemp5448;
struct nctempchar1 *nctemp5451;
struct nctempchar1 nctemp5452 = {{ 9}, (char*)"exprlist"};
nctemp5451=&nctemp5452;
nctempchar1* nctemp5449= nctemp5451;
int nctemp5453=LibeStrcmp(nctemp5444,nctemp5449);
if(nctemp5453)
{
struct tree* nctemp5458= p;
struct tree* nctemp5460=PtreeMvchild(nctemp5458);
p =nctemp5460;
int nctemp5461 = (p !=0);
int nctemp5465=nctemp5461;
while(nctemp5465)
{{
struct tree* nctemp5467= p;
struct tree* nctemp5469=SemExpr(nctemp5467);
struct tree* nctemp5474= p;
struct tree* nctemp5476=PtreeMvsister(nctemp5474);
p =nctemp5476;
}
int nctemp5477 = (p !=0);
nctemp5465=nctemp5477;}}
return p;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval =1;
struct tree* nctemp5491= p;
nctempchar1* nctemp5493=PtreeGetype(nctemp5491);
nctempchar1* nctemp5489= nctemp5493;
struct tree* nctemp5496= np;
nctempchar1* nctemp5498=PtreeGetype(nctemp5496);
nctempchar1* nctemp5494= nctemp5498;
int nctemp5499=LibeStrcmp(nctemp5489,nctemp5494);
int nctemp5486 = (nctemp5499 ==0);
if(nctemp5486)
{
rval =0;
}
struct tree* nctemp5510= p;
nctempchar1* nctemp5512=PtreeGetref(nctemp5510);
nctempchar1* nctemp5508= nctemp5512;
struct tree* nctemp5515= np;
nctempchar1* nctemp5517=PtreeGetref(nctemp5515);
nctempchar1* nctemp5513= nctemp5517;
int nctemp5518=LibeStrcmp(nctemp5508,nctemp5513);
int nctemp5505 = (nctemp5518 ==0);
if(nctemp5505)
{
struct tree* nctemp5523= np;
nctempchar1* nctemp5525=PtreeGetname(nctemp5523);
nctempchar1* nctemp5521= nctemp5525;
struct nctempchar1 *nctemp5528;
struct nctempchar1 nctemp5529 = {{ 10}, (char*)"iconstant"};
nctemp5528=&nctemp5529;
nctempchar1* nctemp5526= nctemp5528;
int nctemp5530=LibeStrcmp(nctemp5521,nctemp5526);
if(nctemp5530)
{
struct tree* nctemp5534= np;
nctempchar1* nctemp5536=PtreeGetdef(nctemp5534);
nctempchar1* nctemp5532= nctemp5536;
struct nctempchar1 *nctemp5539;
struct nctempchar1 nctemp5540 = {{ 2}, (char*)"0"};
nctemp5539=&nctemp5540;
nctempchar1* nctemp5537= nctemp5539;
int nctemp5541=LibeStrcmp(nctemp5532,nctemp5537);
if(nctemp5541)
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
struct tree* nctemp5559= p;
nctempchar1* nctemp5561=PtreeGetref(nctemp5559);
nctempchar1* nctemp5557= nctemp5561;
struct nctempchar1 *nctemp5564;
struct nctempchar1 nctemp5565 = {{ 5}, (char*)"aref"};
nctemp5564=&nctemp5565;
nctempchar1* nctemp5562= nctemp5564;
int nctemp5566=LibeStrcmp(nctemp5557,nctemp5562);
int nctemp5554 = (nctemp5566 ==1);
if(nctemp5554)
{
struct tree* nctemp5571= p;
int nctemp5573=PtreeGetrank(nctemp5571);
struct tree* nctemp5575= np;
int nctemp5577=PtreeGetrank(nctemp5575);
int nctemp5568 = (nctemp5573 !=nctemp5577);
if(nctemp5568)
{
rval =0;
}
}
}
return rval;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp5584= np;
struct tree* nctemp5588= p;
nctempchar1* nctemp5590=PtreeGetype(nctemp5588);
nctempchar1* nctemp5586= nctemp5590;
int nctemp5591=PtreeSetype(nctemp5584,nctemp5586);
struct tree* nctemp5593= np;
struct tree* nctemp5597= p;
nctempchar1* nctemp5599=PtreeGetstruct(nctemp5597);
nctempchar1* nctemp5595= nctemp5599;
int nctemp5600=PtreeSetstruct(nctemp5593,nctemp5595);
struct tree* nctemp5602= np;
struct tree* nctemp5606= p;
nctempchar1* nctemp5608=PtreeGetarray(nctemp5606);
nctempchar1* nctemp5604= nctemp5608;
int nctemp5609=PtreeSetarray(nctemp5602,nctemp5604);
struct tree* nctemp5611= np;
struct tree* nctemp5615= p;
nctempchar1* nctemp5617=PtreeGetref(nctemp5615);
nctempchar1* nctemp5613= nctemp5617;
int nctemp5618=PtreeSetref(nctemp5611,nctemp5613);
struct tree* nctemp5620= np;
struct tree* nctemp5624= p;
nctempchar1* nctemp5626=PtreeGetlval(nctemp5624);
nctempchar1* nctemp5622= nctemp5626;
int nctemp5627=PtreeSetlval(nctemp5620,nctemp5622);
struct tree* nctemp5629= np;
struct tree* nctemp5633= p;
int nctemp5635=PtreeGetrank(nctemp5633);
int nctemp5631= nctemp5635;
int nctemp5636=PtreeSetrank(nctemp5629,nctemp5631);
return 1;
}
int SemCopyparallel (struct tree* p,struct tree* np)
{
struct tree* nctemp5639= p;
struct tree* nctemp5643= np;
nctempchar1* nctemp5645=PtreeGetparallel(nctemp5643);
nctempchar1* nctemp5641= nctemp5645;
int nctemp5646=PtreeSetparallel(nctemp5639,nctemp5641);
return 1;
}
