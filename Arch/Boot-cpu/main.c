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
int ScanInit (nctempchar1 *infile);
int ScanGetok ();
int ScanSetline (int lineno);
int ScanGetline ();
int ScanIncline ();
nctempchar1* ScanGetext ();
nctempchar1* ScanGetfile ();
nctempchar1* ScanSetfile (nctempchar1 *fname);
nctempchar1* ScanPath ();
int ErrError (nctempchar1 *s);
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int ErrPanic (nctempchar1 *s);
int ParseIniparse ();
struct tree* ParseParse ();
int ParseGetlookahead ();
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
int SemInit ();
int SemSem (struct tree* p,struct symbol* tp);
int CodeInit ();
int CodePreamble ();
int CodeStrings (struct symbol* tp);
int CodeCode (struct tree* p,struct symbol* tp);
int CodeTemp (struct tree* p);
int CodeArraycheck ();
int CodeArraycheckon ();
int CodeArraycheckoff ();
int CodeBreakexpr ();
int CodeBreakexpron ();
int CodeBreakexproff ();
int CodeDebug ();
int CodeDebugon ();
int CodeDebugoff ();
int CodeSetntnb (int nt,int nb);
int CodeGetnt ();
int CodeGetnb ();
int Main (struct nctempMainArg1 *MainArgs)
{
int i;
int btree;
int atree;
int table;
int parse;
int semantic;
int emit;
int nt;
int nb;
struct tree* p;
nctempchar1 *infile;
int nctemp2=LibeInit();
emit =0;
table =emit;
atree =table;
btree =atree;
semantic =0;
parse =semantic;
int nctemp28=PtreeInit();
int nctemp30=CodeBreakexproff();
int nctemp32=CodeArraycheckoff();
int nctemp34=CodeDebugoff();
i =1;
int nctemp40=CodeInit();
int nctemp44=MainArgs->d[0];int nctemp41 = (nctemp44 ==1);
if(nctemp41)
{
int nctemp50= 4;
struct nctempchar1 *nctemp54;
struct nctempchar1 nctemp55 = {{ 26}, (char*)"Missing input file name\n"};
nctemp54=&nctemp55;
nctempchar1* nctemp52= nctemp54;
int nctemp56=LibePuts(nctemp50,nctemp52);
int nctemp58= 4;
int nctemp60=LibeFlush(nctemp58);
int nctemp62=LibeExit();
}
int nctemp69=i;
int nctemp71=0;
char nctemp74=(char)('-');
int nctemp66 = (MainArgs->a[nctemp69].arg->a[nctemp71] ==nctemp74);
int nctemp63 = (nctemp66 ==1);
int nctemp78=nctemp63;
while(nctemp78)
{{
int nctemp84=i;
nctempchar1* nctemp82= MainArgs->a[nctemp84].arg;
struct nctempchar1 *nctemp89;
struct nctempchar1 nctemp90 = {{ 3}, (char*)"-t"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibeStrcmp(nctemp82,nctemp87);
int nctemp79 = (nctemp91 ==1);
if(nctemp79)
{
btree =1;
parse =1;
}
int nctemp106=i;
nctempchar1* nctemp104= MainArgs->a[nctemp106].arg;
struct nctempchar1 *nctemp111;
struct nctempchar1 nctemp112 = {{ 3}, (char*)"-a"};
nctemp111=&nctemp112;
nctempchar1* nctemp109= nctemp111;
int nctemp113=LibeStrcmp(nctemp104,nctemp109);
int nctemp101 = (nctemp113 ==1);
if(nctemp101)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp132=i;
nctempchar1* nctemp130= MainArgs->a[nctemp132].arg;
struct nctempchar1 *nctemp137;
struct nctempchar1 nctemp138 = {{ 3}, (char*)"-s"};
nctemp137=&nctemp138;
nctempchar1* nctemp135= nctemp137;
int nctemp139=LibeStrcmp(nctemp130,nctemp135);
int nctemp127 = (nctemp139 ==1);
if(nctemp127)
{
table =1;
parse =1;
semantic =1;
}
int nctemp158=i;
nctempchar1* nctemp156= MainArgs->a[nctemp158].arg;
struct nctempchar1 *nctemp163;
struct nctempchar1 nctemp164 = {{ 3}, (char*)"-e"};
nctemp163=&nctemp164;
nctempchar1* nctemp161= nctemp163;
int nctemp165=LibeStrcmp(nctemp156,nctemp161);
int nctemp153 = (nctemp165 ==1);
if(nctemp153)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp184=i;
nctempchar1* nctemp182= MainArgs->a[nctemp184].arg;
struct nctempchar1 *nctemp189;
struct nctempchar1 nctemp190 = {{ 3}, (char*)"-p"};
nctemp189=&nctemp190;
nctempchar1* nctemp187= nctemp189;
int nctemp191=LibeStrcmp(nctemp182,nctemp187);
int nctemp179 = (nctemp191 ==1);
if(nctemp179)
{
parse =1;
}
int nctemp202=i;
nctempchar1* nctemp200= MainArgs->a[nctemp202].arg;
struct nctempchar1 *nctemp207;
struct nctempchar1 nctemp208 = {{ 3}, (char*)"-q"};
nctemp207=&nctemp208;
nctempchar1* nctemp205= nctemp207;
int nctemp209=LibeStrcmp(nctemp200,nctemp205);
int nctemp197 = (nctemp209 ==1);
if(nctemp197)
{
semantic =1;
parse =1;
}
int nctemp224=i;
nctempchar1* nctemp222= MainArgs->a[nctemp224].arg;
struct nctempchar1 *nctemp229;
struct nctempchar1 nctemp230 = {{ 3}, (char*)"-b"};
nctemp229=&nctemp230;
nctempchar1* nctemp227= nctemp229;
int nctemp231=LibeStrcmp(nctemp222,nctemp227);
int nctemp219 = (nctemp231 ==1);
if(nctemp219)
{
int nctemp234=CodeBreakexpron();
}
int nctemp240=i;
nctempchar1* nctemp238= MainArgs->a[nctemp240].arg;
struct nctempchar1 *nctemp245;
struct nctempchar1 nctemp246 = {{ 3}, (char*)"-C"};
nctemp245=&nctemp246;
nctempchar1* nctemp243= nctemp245;
int nctemp247=LibeStrcmp(nctemp238,nctemp243);
int nctemp235 = (nctemp247 ==1);
if(nctemp235)
{
int nctemp250=CodeBreakexpron();
int nctemp252=CodeArraycheckon();
}
int nctemp258=i;
nctempchar1* nctemp256= MainArgs->a[nctemp258].arg;
struct nctempchar1 *nctemp263;
struct nctempchar1 nctemp264 = {{ 3}, (char*)"-g"};
nctemp263=&nctemp264;
nctempchar1* nctemp261= nctemp263;
int nctemp265=LibeStrcmp(nctemp256,nctemp261);
int nctemp253 = (nctemp265 ==1);
if(nctemp253)
{
int nctemp268=CodeDebugon();
}
int nctemp274=i;
nctempchar1* nctemp272= MainArgs->a[nctemp274].arg;
struct nctempchar1 *nctemp279;
struct nctempchar1 nctemp280 = {{ 4}, (char*)"-nt"};
nctemp279=&nctemp280;
nctempchar1* nctemp277= nctemp279;
int nctemp281=LibeStrcmp(nctemp272,nctemp277);
int nctemp269 = (nctemp281 ==1);
if(nctemp269)
{
int nctemp287=CodeGetnb();
nb =nctemp287;
int nctemp296 = i + 1;
i =nctemp296;
int nctemp303=i;
nctempchar1* nctemp301= MainArgs->a[nctemp303].arg;
int nctemp306=LibeAtoi(nctemp301);
nt =nctemp306;
int nctemp308= nt;
int nctemp310= nb;
int nctemp312=CodeSetntnb(nctemp308,nctemp310);
}
int nctemp318=i;
nctempchar1* nctemp316= MainArgs->a[nctemp318].arg;
struct nctempchar1 *nctemp323;
struct nctempchar1 nctemp324 = {{ 4}, (char*)"-nb"};
nctemp323=&nctemp324;
nctempchar1* nctemp321= nctemp323;
int nctemp325=LibeStrcmp(nctemp316,nctemp321);
int nctemp313 = (nctemp325 ==1);
if(nctemp313)
{
int nctemp331=CodeGetnt();
nt =nctemp331;
int nctemp340 = i + 1;
i =nctemp340;
int nctemp347=i;
nctempchar1* nctemp345= MainArgs->a[nctemp347].arg;
int nctemp350=LibeAtoi(nctemp345);
nb =nctemp350;
int nctemp352= nt;
int nctemp354= nb;
int nctemp356=CodeSetntnb(nctemp352,nctemp354);
}
int nctemp365 = i + 1;
i =nctemp365;
}
int nctemp372=i;
int nctemp374=0;
char nctemp377=(char)('-');
int nctemp369 = (MainArgs->a[nctemp372].arg->a[nctemp374] ==nctemp377);
int nctemp366 = (nctemp369 ==1);
nctemp78=nctemp366;}int nctemp387 = (parse ==0);
int nctemp392 = (semantic ==0);
int nctemp384 = (nctemp387 && nctemp392);
int nctemp397 = (emit ==0);
int nctemp381 = (nctemp384 && nctemp397);
if(nctemp381)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp417=MainArgs->d[0];int nctemp413 = (i >= nctemp417);
if(nctemp413)
{
int nctemp422= 4;
struct nctempchar1 *nctemp426;
struct nctempchar1 nctemp427 = {{ 26}, (char*)"Missing input file name\n"};
nctemp426=&nctemp427;
nctempchar1* nctemp424= nctemp426;
int nctemp428=LibePuts(nctemp422,nctemp424);
int nctemp430=LibeExit();
}
else{
int nctemp436=i;
infile=MainArgs->a[nctemp436].arg;
}
nctempchar1* nctemp442= infile;
int nctemp445=ScanInit(nctemp442);
int nctemp439 = (nctemp445 ==0);
if(nctemp439)
{
int nctemp448=LibeExit();
}
int nctemp450= 1;
int nctemp452=ScanSetline(nctemp450);
int nctemp454=ParseIniparse();
int nctemp455 = (emit ==1);
if(nctemp455)
{
int nctemp460=CodePreamble();
}
struct symbol* nctemp464=SymMktable();
struct symbol* nctemp462= nctemp464;
struct symbol* nctemp465=SymSetetp(nctemp462);
struct symbol* nctemp469=SymMktable();
struct symbol* nctemp467= nctemp469;
struct symbol* nctemp470=SymSetstp(nctemp467);
int nctemp471 = (parse ==1);
if(nctemp471)
{
struct tree* nctemp479=ParseParse();
p =nctemp479;
}
int nctemp480 = (btree ==1);
if(nctemp480)
{
struct tree* nctemp485= p;
int nctemp487= 0;
int nctemp489=PtreePrtree(nctemp485,nctemp487);
}
int nctemp490 = (p !=0);
int nctemp494=nctemp490;
while(nctemp494)
{{
int nctemp495 = (semantic ==1);
if(nctemp495)
{
int nctemp499 = (p !=0);
if(nctemp499)
{
struct tree* nctemp504= p;
struct symbol* nctemp508=SymGetetp();
struct symbol* nctemp506= nctemp508;
int nctemp509=SemSem(nctemp504,nctemp506);
}
int nctemp510 = (atree ==1);
if(nctemp510)
{
struct tree* nctemp515= p;
int nctemp517= 0;
int nctemp519=PtreePrtree(nctemp515,nctemp517);
}
int nctemp520 = (table ==1);
if(nctemp520)
{
struct symbol* nctemp527=SymGetltp();
int nctemp524 = (nctemp527 !=0);
if(nctemp524)
{
struct symbol* nctemp532=SymGetltp();
struct symbol* nctemp530= nctemp532;
int nctemp533= 0;
int nctemp535=SymPrsym(nctemp530,nctemp533);
}
}
}
int nctemp536 = (emit ==1);
if(nctemp536)
{
int nctemp540 = (p !=0);
if(nctemp540)
{
struct tree* nctemp545= p;
struct symbol* nctemp549=SymGetetp();
struct symbol* nctemp547= nctemp549;
int nctemp550=CodeCode(nctemp545,nctemp547);
}
}
struct tree* nctemp552= p;
int nctemp554=PtreeRmtree(nctemp552);
struct symbol* nctemp558=SymGetltp();
struct symbol* nctemp556= nctemp558;
int nctemp559=SymRmtable(nctemp556);
int nctemp560 = (parse ==1);
if(nctemp560)
{
struct tree* nctemp568=ParseParse();
p =nctemp568;
int nctemp569 = (btree ==1);
if(nctemp569)
{
struct tree* nctemp574= p;
int nctemp576= 0;
int nctemp578=PtreePrtree(nctemp574,nctemp576);
}
}
}
int nctemp579 = (p !=0);
nctemp494=nctemp579;}int nctemp586=ParseGetlookahead();
int nctemp583 = (nctemp586 !=19);
if(nctemp583)
{
struct nctempchar1 *nctemp591;
struct nctempchar1 nctemp592 = {{ 34}, (char*)"Parsing ended before reaching EOF"};
nctemp591=&nctemp592;
nctempchar1* nctemp589= nctemp591;
int nctemp593=ErrError(nctemp589);
}
int nctemp594 = (table ==1);
if(nctemp594)
{
struct symbol* nctemp601=SymGetetp();
int nctemp598 = (nctemp601 !=0);
if(nctemp598)
{
struct symbol* nctemp606=SymGetetp();
struct symbol* nctemp604= nctemp606;
int nctemp607= 0;
int nctemp609=SymPrsym(nctemp604,nctemp607);
}
}
int nctemp611= 3;
int nctemp613=LibeFlush(nctemp611);
return 1;
}
