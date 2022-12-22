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
int ErrError (nctempchar1 *s);
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int ErrPanic (nctempchar1 *s);
int ScanInit (nctempchar1 *infile);
int ScanGetok ();
int ScanSetline (int lineno);
int ScanGetline ();
int ScanIncline ();
nctempchar1* ScanGetext ();
nctempchar1* ScanGetfile ();
nctempchar1* ScanSetfile (nctempchar1 *fname);
nctempchar1* ScanPath ();
int ParseIniparse ();
struct tree* ParseParse ();
int ParseGetlookahead ();
struct tree* ParseExtdecl ();
struct tree* ParseType ();
int ParseConstdecl (struct tree* p);
int ParseStructdeclar (struct tree* p);
int ParseIdseq (struct tree* p);
int ParseFdecl (struct tree* p);
int ParseArrayarg (struct tree* p);
struct tree* ParseArglist ();
int ParseArgseq (struct tree* p);
struct tree* ParseDeclarations ();
struct tree* ParseDeclaration ();
struct tree* ParseCompstmnt ();
struct tree* ParseStmntlist ();
struct tree* ParseStmnt ();
struct tree* ParseWhilestmnt ();
struct tree* ParseForstmnt ();
struct tree* ParseParallelstmnt ();
struct tree* ParseSliceseq (struct tree* p);
struct tree* ParseSlice ();
struct tree* ParseReturnstmnt ();
struct tree* ParseIfstmnt ();
struct tree* ParseElsestmnt ();
struct tree* ParseExprlist ();
struct tree* ParseExprseq (struct tree* p);
struct tree* ParseExpr ();
struct tree* ParseAsgexpr (struct tree* p);
struct tree* ParseAsgexprseq (struct tree* p);
struct tree* ParseRelexpr (struct tree* p);
struct tree* ParseRelexprseq (struct tree* p);
struct tree* ParseAddexpr (struct tree* p);
struct tree* ParseAddexprseq (struct tree* p);
struct tree* ParseMultexpr (struct tree* p);
struct tree* ParseMultexprseq (struct tree* p);
struct tree* ParseUnexpr (struct tree* p);
struct tree* ParsePrimexpr (struct tree* p);
struct tree* ParseIdent ();
int ParseMatch (int t);
int lookahead;
int ParseIniparse ()
{
int nctemp5=ScanGetok();
lookahead =nctemp5;
return 1;
}
struct tree* ParseParse ()
{
struct tree* np;
np =0;
int nctemp11 = (lookahead ==19);
if(nctemp11)
{
return np;
}
else{
int nctemp16 = (lookahead ==432);
int nctemp20=nctemp16;
while(nctemp20)
{{
int nctemp22= 432;
int nctemp24=ParseMatch(nctemp22);
}
int nctemp25 = (lookahead ==432);
nctemp20=nctemp25;}struct tree* nctemp33=ParseExtdecl();
np =nctemp33;
}
return np;
}
int ParseGetlookahead ()
{
return lookahead;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp40=ParseType();
np =nctemp40;
int nctemp41 = (np !=0);
if(nctemp41)
{
struct nctempchar1 *nctemp51;
struct nctempchar1 nctemp52 = {{ 8}, (char*)"extdecl"};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
struct nctempchar1 *nctemp55;
struct nctempchar1 nctemp56 = {{ 5}, (char*)"void"};
nctemp55=&nctemp56;
nctempchar1* nctemp53= nctemp55;
struct tree* nctemp57=PtreeMknode(nctemp49,nctemp53);
sp =nctemp57;
struct tree* nctemp59= sp;
struct tree* nctemp61= np;
int nctemp63=PtreeAddchild(nctemp59,nctemp61);
int nctemp64 = (lookahead ==123);
if(nctemp64)
{
int nctemp69= lookahead;
int nctemp71=ParseMatch(nctemp69);
struct tree* nctemp73= np;
int nctemp75=ParseStructdeclar(nctemp73);
}
else{
int nctemp76 = (lookahead ==1);
if(nctemp76)
{
struct nctempchar1 *nctemp86;
struct nctempchar1 nctemp87 = {{ 11}, (char*)"identifier"};
nctemp86=&nctemp87;
nctempchar1* nctemp84= nctemp86;
nctempchar1* nctemp90=ScanGetext();
nctempchar1* nctemp88= nctemp90;
struct tree* nctemp91=PtreeMknode(nctemp84,nctemp88);
mp =nctemp91;
struct tree* nctemp93= np;
struct tree* nctemp95= mp;
int nctemp97=PtreeAddchild(nctemp93,nctemp95);
int nctemp99= lookahead;
int nctemp101=ParseMatch(nctemp99);
int nctemp102 = (lookahead ==44);
if(nctemp102)
{
struct tree* nctemp107= np;
int nctemp109=ParseIdseq(nctemp107);
int nctemp111= 59;
int nctemp113=ParseMatch(nctemp111);
}
else{
int nctemp114 = (lookahead ==40);
if(nctemp114)
{
int nctemp119= 40;
int nctemp121=ParseMatch(nctemp119);
struct tree* nctemp123= mp;
int nctemp125=ParseFdecl(nctemp123);
}
else{
int nctemp126 = (lookahead ==61);
if(nctemp126)
{
int nctemp131= lookahead;
int nctemp133=ParseMatch(nctemp131);
struct tree* nctemp135= mp;
int nctemp137=ParseConstdecl(nctemp135);
}
else{
int nctemp139= 59;
int nctemp141=ParseMatch(nctemp139);
}
}
}
}
}
}
else{
sp =0;
}
return sp;
}
struct tree* ParseType ()
{
struct tree* np;
struct tree* sp;
int nctemp159 = (lookahead ==7);
int nctemp164 = (lookahead ==9);
int nctemp156 = (nctemp159 || nctemp164);
int nctemp169 = (lookahead ==8);
int nctemp153 = (nctemp156 || nctemp169);
int nctemp174 = (lookahead ==431);
int nctemp150 = (nctemp153 || nctemp174);
int nctemp179 = (lookahead ==10);
int nctemp147 = (nctemp150 || nctemp179);
if(nctemp147)
{
struct nctempchar1 *nctemp189;
struct nctempchar1 nctemp190 = {{ 5}, (char*)"type"};
nctemp189=&nctemp190;
nctempchar1* nctemp187= nctemp189;
nctempchar1* nctemp193=ScanGetext();
nctempchar1* nctemp191= nctemp193;
struct tree* nctemp194=PtreeMknode(nctemp187,nctemp191);
np =nctemp194;
int nctemp196= lookahead;
int nctemp198=ParseMatch(nctemp196);
}
else{
int nctemp199 = (lookahead ==11);
if(nctemp199)
{
int nctemp204= lookahead;
int nctemp206=ParseMatch(nctemp204);
struct nctempchar1 *nctemp213;
struct nctempchar1 nctemp214 = {{ 5}, (char*)"type"};
nctemp213=&nctemp214;
nctempchar1* nctemp211= nctemp213;
nctempchar1* nctemp217=ScanGetext();
nctempchar1* nctemp215= nctemp217;
struct tree* nctemp218=PtreeMknode(nctemp211,nctemp215);
np =nctemp218;
struct tree* nctemp220= np;
struct nctempchar1 *nctemp224;
struct nctempchar1 nctemp225 = {{ 7}, (char*)"struct"};
nctemp224=&nctemp225;
nctempchar1* nctemp222= nctemp224;
int nctemp226=PtreeSetstruct(nctemp220,nctemp222);
int nctemp228= 1;
int nctemp230=ParseMatch(nctemp228);
}
else{
np =0;
}
}
int nctemp235 = (lookahead ==91);
if(nctemp235)
{
int nctemp240= lookahead;
int nctemp242=ParseMatch(nctemp240);
struct tree* nctemp244= np;
struct nctempchar1 *nctemp248;
struct nctempchar1 nctemp249 = {{ 6}, (char*)"array"};
nctemp248=&nctemp249;
nctempchar1* nctemp246= nctemp248;
int nctemp250=PtreeSetarray(nctemp244,nctemp246);
struct nctempchar1 *nctemp257;
struct nctempchar1 nctemp258 = {{ 10}, (char*)"arrayargs"};
nctemp257=&nctemp258;
nctempchar1* nctemp255= nctemp257;
struct nctempchar1 *nctemp261;
struct nctempchar1 nctemp262 = {{ 5}, (char*)"void"};
nctemp261=&nctemp262;
nctempchar1* nctemp259= nctemp261;
struct tree* nctemp263=PtreeMknode(nctemp255,nctemp259);
sp =nctemp263;
struct tree* nctemp265= np;
struct tree* nctemp267= sp;
int nctemp269=PtreeAddchild(nctemp265,nctemp267);
struct tree* nctemp271= sp;
int nctemp273=ParseArrayarg(nctemp271);
int nctemp275= 93;
int nctemp277=ParseMatch(nctemp275);
}
return np;
}
int ParseConstdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp283=ParseExpr();
np =nctemp283;
int nctemp284 = (np !=0);
if(nctemp284)
{
struct tree* nctemp289= p;
struct tree* nctemp291= np;
int nctemp293=PtreeAddchild(nctemp289,nctemp291);
}
int nctemp295= 59;
int nctemp297=ParseMatch(nctemp295);
return 1;
}
int ParseStructdeclar (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct nctempchar1 *nctemp305;
struct nctempchar1 nctemp306 = {{ 10}, (char*)"structdec"};
nctemp305=&nctemp306;
nctempchar1* nctemp303= nctemp305;
struct nctempchar1 *nctemp309;
struct nctempchar1 nctemp310 = {{ 5}, (char*)"void"};
nctemp309=&nctemp310;
nctempchar1* nctemp307= nctemp309;
struct tree* nctemp311=PtreeMknode(nctemp303,nctemp307);
np =nctemp311;
struct tree* nctemp313= p;
struct tree* nctemp315= np;
int nctemp317=PtreeAddchild(nctemp313,nctemp315);
struct tree* nctemp322=ParseDeclarations();
sp =nctemp322;
struct tree* nctemp324= np;
struct tree* nctemp326= sp;
int nctemp328=PtreeAddchild(nctemp324,nctemp326);
int nctemp330= 125;
int nctemp332=ParseMatch(nctemp330);
return 1;
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
int nctemp334 = (lookahead ==44);
if(nctemp334)
{
int nctemp339= lookahead;
int nctemp341=ParseMatch(nctemp339);
struct nctempchar1 *nctemp348;
struct nctempchar1 nctemp349 = {{ 11}, (char*)"identifier"};
nctemp348=&nctemp349;
nctempchar1* nctemp346= nctemp348;
nctempchar1* nctemp352=ScanGetext();
nctempchar1* nctemp350= nctemp352;
struct tree* nctemp353=PtreeMknode(nctemp346,nctemp350);
sp =nctemp353;
struct tree* nctemp355= p;
struct tree* nctemp357= sp;
int nctemp359=PtreeAddchild(nctemp355,nctemp357);
int nctemp361= 1;
int nctemp363=ParseMatch(nctemp361);
struct tree* nctemp365= p;
int nctemp367=ParseIdseq(nctemp365);
}
else{
return 1;
}
return 1;
}
int ParseFdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp371= p;
struct nctempchar1 *nctemp375;
struct nctempchar1 nctemp376 = {{ 6}, (char*)"fdecl"};
nctemp375=&nctemp376;
nctempchar1* nctemp373= nctemp375;
int nctemp377=PtreeSetname(nctemp371,nctemp373);
struct tree* nctemp382=ParseArglist();
np =nctemp382;
int nctemp383 = (np !=0);
if(nctemp383)
{
struct tree* nctemp388= p;
struct tree* nctemp390= np;
int nctemp392=PtreeAddchild(nctemp388,nctemp390);
}
int nctemp394= 41;
int nctemp396=ParseMatch(nctemp394);
np =0;
struct tree* nctemp405=ParseCompstmnt();
np =nctemp405;
int nctemp406 = (np !=0);
if(nctemp406)
{
struct tree* nctemp411= p;
struct tree* nctemp413= np;
int nctemp415=PtreeAddchild(nctemp411,nctemp413);
}
else{
struct nctempchar1 *nctemp419;
struct nctempchar1 nctemp420 = {{ 22}, (char*)"Missing function body"};
nctemp419=&nctemp420;
nctempchar1* nctemp417= nctemp419;
int nctemp421=ErrError(nctemp417);
}
return 1;
}
int ParseArrayarg (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp423 = (lookahead ==42);
if(nctemp423)
{
int nctemp428= 42;
int nctemp430=ParseMatch(nctemp428);
struct nctempchar1 *nctemp437;
struct nctempchar1 nctemp438 = {{ 10}, (char*)"arrayargs"};
nctemp437=&nctemp438;
nctempchar1* nctemp435= nctemp437;
struct nctempchar1 *nctemp441;
struct nctempchar1 nctemp442 = {{ 5}, (char*)"void"};
nctemp441=&nctemp442;
nctempchar1* nctemp439= nctemp441;
struct tree* nctemp443=PtreeMknode(nctemp435,nctemp439);
sp =nctemp443;
struct tree* nctemp445= p;
struct tree* nctemp447= sp;
int nctemp449=PtreeAddchild(nctemp445,nctemp447);
int nctemp450 = (lookahead ==44);
if(nctemp450)
{
int nctemp455= lookahead;
int nctemp457=ParseMatch(nctemp455);
struct tree* nctemp459= p;
int nctemp461=ParseArrayarg(nctemp459);
}
else{
return 1;
}
}
else{
struct nctempchar1 *nctemp469;
struct nctempchar1 nctemp470 = {{ 10}, (char*)"arrayargs"};
nctemp469=&nctemp470;
nctempchar1* nctemp467= nctemp469;
struct nctempchar1 *nctemp473;
struct nctempchar1 nctemp474 = {{ 5}, (char*)"void"};
nctemp473=&nctemp474;
nctempchar1* nctemp471= nctemp473;
struct tree* nctemp475=PtreeMknode(nctemp467,nctemp471);
sp =nctemp475;
struct tree* nctemp477= p;
struct tree* nctemp479= sp;
int nctemp481=PtreeAddchild(nctemp477,nctemp479);
struct tree* nctemp486=ParseExprlist();
np =nctemp486;
int nctemp487 = (sp !=0);
if(nctemp487)
{
struct tree* nctemp492= sp;
struct tree* nctemp494= np;
int nctemp496=PtreeAddchild(nctemp492,nctemp494);
}
else{
struct nctempchar1 *nctemp500;
struct nctempchar1 nctemp501 = {{ 13}, (char*)"Syntax error"};
nctemp500=&nctemp501;
nctempchar1* nctemp498= nctemp500;
int nctemp502=ErrError(nctemp498);
}
return 1;
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp512=ParseType();
np =nctemp512;
int nctemp505 = (np !=0);
if(nctemp505)
{
struct nctempchar1 *nctemp520;
struct nctempchar1 nctemp521 = {{ 8}, (char*)"arglist"};
nctemp520=&nctemp521;
nctempchar1* nctemp518= nctemp520;
struct nctempchar1 *nctemp524;
struct nctempchar1 nctemp525 = {{ 5}, (char*)"void"};
nctemp524=&nctemp525;
nctempchar1* nctemp522= nctemp524;
struct tree* nctemp526=PtreeMknode(nctemp518,nctemp522);
sp =nctemp526;
struct tree* nctemp528= sp;
struct tree* nctemp530= np;
int nctemp532=PtreeAddchild(nctemp528,nctemp530);
int nctemp533 = (lookahead ==1);
if(nctemp533)
{
struct nctempchar1 *nctemp543;
struct nctempchar1 nctemp544 = {{ 11}, (char*)"identifier"};
nctemp543=&nctemp544;
nctempchar1* nctemp541= nctemp543;
nctempchar1* nctemp547=ScanGetext();
nctempchar1* nctemp545= nctemp547;
struct tree* nctemp548=PtreeMknode(nctemp541,nctemp545);
mp =nctemp548;
struct tree* nctemp550= np;
struct tree* nctemp552= mp;
int nctemp554=PtreeAddchild(nctemp550,nctemp552);
int nctemp556= 1;
int nctemp558=ParseMatch(nctemp556);
}
struct tree* nctemp560= sp;
int nctemp562=ParseArgseq(nctemp560);
}
else{
sp =0;
}
return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp568 = (lookahead ==44);
if(nctemp568)
{
int nctemp573= lookahead;
int nctemp575=ParseMatch(nctemp573);
struct tree* nctemp583=ParseType();
np =nctemp583;
int nctemp576 = (np !=0);
if(nctemp576)
{
struct tree* nctemp586= p;
struct tree* nctemp588= np;
int nctemp590=PtreeAddchild(nctemp586,nctemp588);
int nctemp591 = (lookahead ==1);
if(nctemp591)
{
struct nctempchar1 *nctemp601;
struct nctempchar1 nctemp602 = {{ 11}, (char*)"identifier"};
nctemp601=&nctemp602;
nctempchar1* nctemp599= nctemp601;
nctempchar1* nctemp605=ScanGetext();
nctempchar1* nctemp603= nctemp605;
struct tree* nctemp606=PtreeMknode(nctemp599,nctemp603);
sp =nctemp606;
struct tree* nctemp608= np;
struct tree* nctemp610= sp;
int nctemp612=PtreeAddchild(nctemp608,nctemp610);
int nctemp614= 1;
int nctemp616=ParseMatch(nctemp614);
}
struct tree* nctemp618= p;
int nctemp620=ParseArgseq(nctemp618);
}
}
return 1;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp626=ParseDeclaration();
np =nctemp626;
int nctemp627 = (np !=0);
if(nctemp627)
{
struct nctempchar1 *nctemp637;
struct nctempchar1 nctemp638 = {{ 13}, (char*)"declarations"};
nctemp637=&nctemp638;
nctempchar1* nctemp635= nctemp637;
struct nctempchar1 *nctemp641;
struct nctempchar1 nctemp642 = {{ 5}, (char*)"void"};
nctemp641=&nctemp642;
nctempchar1* nctemp639= nctemp641;
struct tree* nctemp643=PtreeMknode(nctemp635,nctemp639);
sp =nctemp643;
struct tree* nctemp645= sp;
struct tree* nctemp647= np;
int nctemp649=PtreeAddchild(nctemp645,nctemp647);
}
else{
np =0;
return np;
}
struct tree* nctemp661=ParseDeclaration();
np =nctemp661;
int nctemp654 = (np !=0);
int nctemp663=nctemp654;
while(nctemp663)
{{
struct tree* nctemp665= sp;
struct tree* nctemp667= np;
int nctemp669=PtreeAddchild(nctemp665,nctemp667);
}
struct tree* nctemp677=ParseDeclaration();
np =nctemp677;
int nctemp670 = (np !=0);
nctemp663=nctemp670;}return sp;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp684=ParseType();
np =nctemp684;
int nctemp685 = (np !=0);
if(nctemp685)
{
int nctemp689 = (lookahead ==1);
if(nctemp689)
{
struct nctempchar1 *nctemp699;
struct nctempchar1 nctemp700 = {{ 11}, (char*)"identifier"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
nctempchar1* nctemp703=ScanGetext();
nctempchar1* nctemp701= nctemp703;
struct tree* nctemp704=PtreeMknode(nctemp697,nctemp701);
mp =nctemp704;
struct tree* nctemp706= np;
struct tree* nctemp708= mp;
int nctemp710=PtreeAddchild(nctemp706,nctemp708);
int nctemp712= lookahead;
int nctemp714=ParseMatch(nctemp712);
int nctemp715 = (lookahead ==44);
if(nctemp715)
{
struct tree* nctemp720= np;
int nctemp722=ParseIdseq(nctemp720);
int nctemp724= 59;
int nctemp726=ParseMatch(nctemp724);
}
else{
int nctemp727 = (lookahead ==61);
if(nctemp727)
{
int nctemp732= lookahead;
int nctemp734=ParseMatch(nctemp732);
struct tree* nctemp736= mp;
int nctemp738=ParseConstdecl(nctemp736);
}
else{
int nctemp740= 59;
int nctemp742=ParseMatch(nctemp740);
}
}
}
else{
struct nctempchar1 *nctemp746;
struct nctempchar1 nctemp747 = {{ 13}, (char*)"Syntax error"};
nctemp746=&nctemp747;
nctempchar1* nctemp744= nctemp746;
int nctemp748=ErrError(nctemp744);
}
}
else{
np =0;
}
return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp754 = (lookahead ==123);
if(nctemp754)
{
struct nctempchar1 *nctemp764;
struct nctempchar1 nctemp765 = {{ 10}, (char*)"compstmnt"};
nctemp764=&nctemp765;
nctempchar1* nctemp762= nctemp764;
struct nctempchar1 *nctemp768;
struct nctempchar1 nctemp769 = {{ 5}, (char*)"void"};
nctemp768=&nctemp769;
nctempchar1* nctemp766= nctemp768;
struct tree* nctemp770=PtreeMknode(nctemp762,nctemp766);
np =nctemp770;
int nctemp772= 123;
int nctemp774=ParseMatch(nctemp772);
struct tree* nctemp779=ParseDeclarations();
sp =nctemp779;
int nctemp780 = (sp !=0);
if(nctemp780)
{
struct tree* nctemp785= np;
struct tree* nctemp787= sp;
int nctemp789=PtreeAddchild(nctemp785,nctemp787);
}
struct tree* nctemp794=ParseStmntlist();
sp =nctemp794;
int nctemp795 = (sp !=0);
if(nctemp795)
{
struct tree* nctemp800= np;
struct tree* nctemp802= sp;
int nctemp804=PtreeAddchild(nctemp800,nctemp802);
}
int nctemp806= 125;
int nctemp808=ParseMatch(nctemp806);
}
else{
np =0;
}
return np;
}
struct tree* ParseStmntlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp818=ParseStmnt();
np =nctemp818;
sp =np;
int nctemp823 = (sp !=0);
int nctemp827=nctemp823;
while(nctemp827)
{{
struct tree* nctemp832=ParseStmnt();
sp =nctemp832;
struct tree* nctemp834= np;
struct tree* nctemp836= sp;
int nctemp838=PtreeAddsister(nctemp834,nctemp836);
}
int nctemp839 = (sp !=0);
nctemp827=nctemp839;}return np;
}
struct tree* ParseStmnt ()
{
struct tree* np;
struct tree* nctemp851=ParseWhilestmnt();
np =nctemp851;
int nctemp844 = (np !=0);
if(nctemp844)
{
return np;
}
else{
struct tree* nctemp861=ParseReturnstmnt();
np =nctemp861;
int nctemp854 = (np !=0);
if(nctemp854)
{
return np;
}
else{
struct tree* nctemp871=ParseForstmnt();
np =nctemp871;
int nctemp864 = (np !=0);
if(nctemp864)
{
return np;
}
else{
struct tree* nctemp881=ParseForstmnt();
np =nctemp881;
int nctemp874 = (np !=0);
if(nctemp874)
{
return np;
}
else{
struct tree* nctemp891=ParseParallelstmnt();
np =nctemp891;
int nctemp884 = (np !=0);
if(nctemp884)
{
return np;
}
else{
struct tree* nctemp901=ParseIfstmnt();
np =nctemp901;
int nctemp894 = (np !=0);
if(nctemp894)
{
return np;
}
else{
struct tree* nctemp911=ParseCompstmnt();
np =nctemp911;
int nctemp904 = (np !=0);
if(nctemp904)
{
return np;
}
else{
int nctemp914 = (lookahead ==59);
if(nctemp914)
{
int nctemp919= lookahead;
int nctemp921=ParseMatch(nctemp919);
struct nctempchar1 *nctemp925;
struct nctempchar1 nctemp926 = {{ 5}, (char*)"void"};
nctemp925=&nctemp926;
nctempchar1* nctemp923= nctemp925;
struct nctempchar1 *nctemp929;
struct nctempchar1 nctemp930 = {{ 5}, (char*)"void"};
nctemp929=&nctemp930;
nctempchar1* nctemp927= nctemp929;
struct tree* nctemp931=PtreeMknode(nctemp923,nctemp927);
return nctemp931;
}
else{
int nctemp932 = (lookahead ==125);
if(nctemp932)
{
np =0;
return np;
}
else{
struct tree* nctemp944=ParseExpr();
np =nctemp944;
int nctemp946= 59;
int nctemp948=ParseMatch(nctemp946);
return np;
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
struct tree* ParseIfstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp950 = (lookahead ==14);
if(nctemp950)
{
struct nctempchar1 *nctemp960;
struct nctempchar1 nctemp961 = {{ 3}, (char*)"if"};
nctemp960=&nctemp961;
nctempchar1* nctemp958= nctemp960;
struct nctempchar1 *nctemp964;
struct nctempchar1 nctemp965 = {{ 5}, (char*)"void"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
struct tree* nctemp966=PtreeMknode(nctemp958,nctemp962);
np =nctemp966;
int nctemp968= 14;
int nctemp970=ParseMatch(nctemp968);
int nctemp972= 40;
int nctemp974=ParseMatch(nctemp972);
struct tree* nctemp982=ParseExpr();
sp =nctemp982;
int nctemp975 = (sp !=0);
if(nctemp975)
{
struct tree* nctemp985= np;
struct tree* nctemp987= sp;
int nctemp989=PtreeAddchild(nctemp985,nctemp987);
}
int nctemp991= 41;
int nctemp993=ParseMatch(nctemp991);
struct tree* nctemp998=ParseStmnt();
sp =nctemp998;
struct tree* nctemp1000= np;
struct tree* nctemp1002= sp;
int nctemp1004=PtreeAddchild(nctemp1000,nctemp1002);
struct tree* nctemp1012=ParseElsestmnt();
sp =nctemp1012;
int nctemp1005 = (sp !=0);
if(nctemp1005)
{
struct tree* nctemp1015= np;
struct tree* nctemp1017= sp;
int nctemp1019=PtreeAddchild(nctemp1015,nctemp1017);
}
sp =np;
}
else{
sp =0;
}
return sp;
}
struct tree* ParseElsestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1029 = (lookahead ==15);
if(nctemp1029)
{
int nctemp1034= 15;
int nctemp1036=ParseMatch(nctemp1034);
struct nctempchar1 *nctemp1043;
struct nctempchar1 nctemp1044 = {{ 5}, (char*)"else"};
nctemp1043=&nctemp1044;
nctempchar1* nctemp1041= nctemp1043;
struct nctempchar1 *nctemp1047;
struct nctempchar1 nctemp1048 = {{ 5}, (char*)"void"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
struct tree* nctemp1049=PtreeMknode(nctemp1041,nctemp1045);
np =nctemp1049;
struct tree* nctemp1054=ParseStmnt();
sp =nctemp1054;
struct tree* nctemp1056= np;
struct tree* nctemp1058= sp;
int nctemp1060=PtreeAddchild(nctemp1056,nctemp1058);
}
else{
np =0;
}
return np;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1066 = (lookahead ==12);
if(nctemp1066)
{
struct nctempchar1 *nctemp1076;
struct nctempchar1 nctemp1077 = {{ 6}, (char*)"while"};
nctemp1076=&nctemp1077;
nctempchar1* nctemp1074= nctemp1076;
struct nctempchar1 *nctemp1080;
struct nctempchar1 nctemp1081 = {{ 5}, (char*)"void"};
nctemp1080=&nctemp1081;
nctempchar1* nctemp1078= nctemp1080;
struct tree* nctemp1082=PtreeMknode(nctemp1074,nctemp1078);
np =nctemp1082;
int nctemp1084= 12;
int nctemp1086=ParseMatch(nctemp1084);
int nctemp1088= 40;
int nctemp1090=ParseMatch(nctemp1088);
struct tree* nctemp1098=ParseExpr();
sp =nctemp1098;
int nctemp1091 = (sp !=0);
if(nctemp1091)
{
struct tree* nctemp1101= np;
struct tree* nctemp1103= sp;
int nctemp1105=PtreeAddchild(nctemp1101,nctemp1103);
}
int nctemp1107= 41;
int nctemp1109=ParseMatch(nctemp1107);
struct tree* nctemp1114=ParseStmnt();
sp =nctemp1114;
struct tree* nctemp1116= np;
struct tree* nctemp1118= sp;
int nctemp1120=PtreeAddchild(nctemp1116,nctemp1118);
sp =np;
}
else{
sp =0;
}
return sp;
}
struct tree* ParseForstmnt ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp1130 = (lookahead ==26);
if(nctemp1130)
{
struct nctempchar1 *nctemp1140;
struct nctempchar1 nctemp1141 = {{ 4}, (char*)"for"};
nctemp1140=&nctemp1141;
nctempchar1* nctemp1138= nctemp1140;
struct nctempchar1 *nctemp1144;
struct nctempchar1 nctemp1145 = {{ 5}, (char*)"void"};
nctemp1144=&nctemp1145;
nctempchar1* nctemp1142= nctemp1144;
struct tree* nctemp1146=PtreeMknode(nctemp1138,nctemp1142);
np =nctemp1146;
int nctemp1148= 26;
int nctemp1150=ParseMatch(nctemp1148);
int nctemp1152= 40;
int nctemp1154=ParseMatch(nctemp1152);
struct tree* nctemp1162=ParseExpr();
sp =nctemp1162;
int nctemp1155 = (sp !=0);
if(nctemp1155)
{
struct tree* nctemp1165= np;
struct tree* nctemp1167= sp;
int nctemp1169=PtreeAddchild(nctemp1165,nctemp1167);
}
int nctemp1171= 59;
int nctemp1173=ParseMatch(nctemp1171);
struct tree* nctemp1181=ParseExpr();
rp =nctemp1181;
int nctemp1174 = (rp !=0);
if(nctemp1174)
{
struct tree* nctemp1184= sp;
struct tree* nctemp1186= rp;
int nctemp1188=PtreeAddsister(nctemp1184,nctemp1186);
}
int nctemp1190= 59;
int nctemp1192=ParseMatch(nctemp1190);
struct tree* nctemp1200=ParseExpr();
rp =nctemp1200;
int nctemp1193 = (rp !=0);
if(nctemp1193)
{
struct tree* nctemp1203= sp;
struct tree* nctemp1205= rp;
int nctemp1207=PtreeAddsister(nctemp1203,nctemp1205);
}
int nctemp1209= 41;
int nctemp1211=ParseMatch(nctemp1209);
struct tree* nctemp1216=ParseStmnt();
sp =nctemp1216;
struct tree* nctemp1218= np;
struct tree* nctemp1220= sp;
int nctemp1222=PtreeAddchild(nctemp1218,nctemp1220);
sp =np;
}
else{
sp =0;
}
return sp;
}
struct tree* ParseParallelstmnt ()
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1232 = (lookahead ==31);
if(nctemp1232)
{
struct nctempchar1 *nctemp1242;
struct nctempchar1 nctemp1243 = {{ 9}, (char*)"parallel"};
nctemp1242=&nctemp1243;
nctempchar1* nctemp1240= nctemp1242;
struct nctempchar1 *nctemp1246;
struct nctempchar1 nctemp1247 = {{ 5}, (char*)"void"};
nctemp1246=&nctemp1247;
nctempchar1* nctemp1244= nctemp1246;
struct tree* nctemp1248=PtreeMknode(nctemp1240,nctemp1244);
np =nctemp1248;
int nctemp1250= 31;
int nctemp1252=ParseMatch(nctemp1250);
int nctemp1254= 40;
int nctemp1256=ParseMatch(nctemp1254);
struct nctempchar1 *nctemp1263;
struct nctempchar1 nctemp1264 = {{ 9}, (char*)"sliceseq"};
nctemp1263=&nctemp1264;
nctempchar1* nctemp1261= nctemp1263;
struct nctempchar1 *nctemp1267;
struct nctempchar1 nctemp1268 = {{ 5}, (char*)"void"};
nctemp1267=&nctemp1268;
nctempchar1* nctemp1265= nctemp1267;
struct tree* nctemp1269=PtreeMknode(nctemp1261,nctemp1265);
rp =nctemp1269;
struct tree* nctemp1271= np;
struct tree* nctemp1273= rp;
int nctemp1275=PtreeAddchild(nctemp1271,nctemp1273);
struct tree* nctemp1283= rp;
struct tree* nctemp1285=ParseSliceseq(nctemp1283);
sp =nctemp1285;
int nctemp1276 = (sp ==0);
if(nctemp1276)
{
struct nctempchar1 *nctemp1290;
struct nctempchar1 nctemp1291 = {{ 13}, (char*)"Syntax error"};
nctemp1290=&nctemp1291;
nctempchar1* nctemp1288= nctemp1290;
int nctemp1292=ErrError(nctemp1288);
}
int nctemp1293 = (lookahead ==41);
if(nctemp1293)
{
int nctemp1298= 41;
int nctemp1300=ParseMatch(nctemp1298);
struct tree* nctemp1305=ParseStmnt();
sp =nctemp1305;
struct tree* nctemp1307= np;
struct tree* nctemp1309= sp;
int nctemp1311=PtreeAddchild(nctemp1307,nctemp1309);
return np;
}
else{
struct nctempchar1 *nctemp1316;
struct nctempchar1 nctemp1317 = {{ 13}, (char*)"Syntax error"};
nctemp1316=&nctemp1317;
nctempchar1* nctemp1314= nctemp1316;
int nctemp1318=ErrError(nctemp1314);
}
}
else{
rp =0;
return rp;
}
rp =0;
return rp;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp1334=ParseSlice();
sp =nctemp1334;
int nctemp1327 = (sp !=0);
if(nctemp1327)
{
struct tree* nctemp1337= np;
struct tree* nctemp1339= sp;
int nctemp1341=PtreeAddchild(nctemp1337,nctemp1339);
}
else{
struct nctempchar1 *nctemp1345;
struct nctempchar1 nctemp1346 = {{ 13}, (char*)"Syntax error"};
nctemp1345=&nctemp1346;
nctempchar1* nctemp1343= nctemp1345;
int nctemp1347=ErrError(nctemp1343);
}
int nctemp1348 = (lookahead ==44);
if(nctemp1348)
{
int nctemp1353= 44;
int nctemp1355=ParseMatch(nctemp1353);
struct tree* nctemp1357= np;
struct tree* nctemp1359=ParseSliceseq(nctemp1357);
}
else{
return np;
}
return np;
}
struct tree* ParseSlice ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
struct tree* nctemp1369=ParseExpr();
sp =nctemp1369;
int nctemp1362 = (sp !=0);
if(nctemp1362)
{
struct nctempchar1 *nctemp1377;
struct nctempchar1 nctemp1378 = {{ 6}, (char*)"slice"};
nctemp1377=&nctemp1378;
nctempchar1* nctemp1375= nctemp1377;
struct nctempchar1 *nctemp1381;
struct nctempchar1 nctemp1382 = {{ 5}, (char*)"void"};
nctemp1381=&nctemp1382;
nctempchar1* nctemp1379= nctemp1381;
struct tree* nctemp1383=PtreeMknode(nctemp1375,nctemp1379);
np =nctemp1383;
struct tree* nctemp1385= np;
struct tree* nctemp1387= sp;
int nctemp1389=PtreeAddchild(nctemp1385,nctemp1387);
int nctemp1391= 58;
int nctemp1393=ParseMatch(nctemp1391);
struct tree* nctemp1401=ParseExpr();
rp =nctemp1401;
int nctemp1394 = (rp !=0);
if(nctemp1394)
{
struct tree* nctemp1404= np;
struct tree* nctemp1406= rp;
int nctemp1408=PtreeAddchild(nctemp1404,nctemp1406);
}
int nctemp1409 = (lookahead ==58);
if(nctemp1409)
{
int nctemp1414= 58;
int nctemp1416=ParseMatch(nctemp1414);
struct tree* nctemp1424=ParseExpr();
rp =nctemp1424;
int nctemp1417 = (rp !=0);
if(nctemp1417)
{
struct tree* nctemp1427= np;
struct tree* nctemp1429= rp;
int nctemp1431=PtreeAddchild(nctemp1427,nctemp1429);
}
else{
struct nctempchar1 *nctemp1435;
struct nctempchar1 nctemp1436 = {{ 13}, (char*)"Syntax error"};
nctemp1435=&nctemp1436;
nctempchar1* nctemp1433= nctemp1435;
int nctemp1437=ErrError(nctemp1433);
}
}
}
else{
struct nctempchar1 *nctemp1441;
struct nctempchar1 nctemp1442 = {{ 13}, (char*)"Syntax error"};
nctemp1441=&nctemp1442;
nctempchar1* nctemp1439= nctemp1441;
int nctemp1443=ErrError(nctemp1439);
}
return np;
}
struct tree* ParseReturnstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1445 = (lookahead ==30);
if(nctemp1445)
{
struct nctempchar1 *nctemp1455;
struct nctempchar1 nctemp1456 = {{ 7}, (char*)"return"};
nctemp1455=&nctemp1456;
nctempchar1* nctemp1453= nctemp1455;
struct nctempchar1 *nctemp1459;
struct nctempchar1 nctemp1460 = {{ 5}, (char*)"void"};
nctemp1459=&nctemp1460;
nctempchar1* nctemp1457= nctemp1459;
struct tree* nctemp1461=PtreeMknode(nctemp1453,nctemp1457);
np =nctemp1461;
int nctemp1463= 30;
int nctemp1465=ParseMatch(nctemp1463);
struct tree* nctemp1473=ParseExpr();
sp =nctemp1473;
int nctemp1466 = (sp !=0);
if(nctemp1466)
{
struct tree* nctemp1476= np;
struct tree* nctemp1478= sp;
int nctemp1480=PtreeAddchild(nctemp1476,nctemp1478);
}
sp =np;
int nctemp1486= 59;
int nctemp1488=ParseMatch(nctemp1486);
}
else{
sp =0;
}
return sp;
}
struct tree* ParseExprlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1498=ParseExpr();
np =nctemp1498;
int nctemp1499 = (np !=0);
if(nctemp1499)
{
struct nctempchar1 *nctemp1509;
struct nctempchar1 nctemp1510 = {{ 9}, (char*)"exprlist"};
nctemp1509=&nctemp1510;
nctempchar1* nctemp1507= nctemp1509;
struct nctempchar1 *nctemp1513;
struct nctempchar1 nctemp1514 = {{ 5}, (char*)"void"};
nctemp1513=&nctemp1514;
nctempchar1* nctemp1511= nctemp1513;
struct tree* nctemp1515=PtreeMknode(nctemp1507,nctemp1511);
sp =nctemp1515;
struct tree* nctemp1517= sp;
struct tree* nctemp1519= np;
int nctemp1521=PtreeAddchild(nctemp1517,nctemp1519);
struct tree* nctemp1523= np;
struct tree* nctemp1525=ParseExprseq(nctemp1523);
}
else{
sp =0;
}
return sp;
}
struct tree* ParseExprseq (struct tree* p)
{
int nctemp1531 = (lookahead ==44);
if(nctemp1531)
{
int nctemp1536= lookahead;
int nctemp1538=ParseMatch(nctemp1536);
struct tree* nctemp1540= p;
struct tree* nctemp1544=ParseExpr();
struct tree* nctemp1542= nctemp1544;
int nctemp1545=PtreeAddsister(nctemp1540,nctemp1542);
struct tree* nctemp1547= p;
struct tree* nctemp1549=ParseExprseq(nctemp1547);
}
p =0;
return p;
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
rp =0;
struct tree* nctemp1562= rp;
struct tree* nctemp1564=ParseAsgexpr(nctemp1562);
np =nctemp1564;
int nctemp1565 = (np !=0);
if(nctemp1565)
{
struct nctempchar1 *nctemp1575;
struct nctempchar1 nctemp1576 = {{ 5}, (char*)"expr"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
struct nctempchar1 *nctemp1579;
struct nctempchar1 nctemp1580 = {{ 5}, (char*)"void"};
nctemp1579=&nctemp1580;
nctempchar1* nctemp1577= nctemp1579;
struct tree* nctemp1581=PtreeMknode(nctemp1573,nctemp1577);
sp =nctemp1581;
struct tree* nctemp1583= sp;
struct tree* nctemp1585= np;
int nctemp1587=PtreeAddchild(nctemp1583,nctemp1585);
np =sp;
}
return np;
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1597= p;
struct tree* nctemp1599=ParseRelexpr(nctemp1597);
np =nctemp1599;
struct tree* nctemp1604= np;
struct tree* nctemp1606=ParseAsgexprseq(nctemp1604);
np =nctemp1606;
return np;
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1608 = (lookahead ==61);
if(nctemp1608)
{
struct nctempchar1 *nctemp1618;
struct nctempchar1 nctemp1619 = {{ 8}, (char*)"binexpr"};
nctemp1618=&nctemp1619;
nctempchar1* nctemp1616= nctemp1618;
nctempchar1* nctemp1622=ScanGetext();
nctempchar1* nctemp1620= nctemp1622;
struct tree* nctemp1623=PtreeMknode(nctemp1616,nctemp1620);
np =nctemp1623;
int nctemp1625= lookahead;
int nctemp1627=ParseMatch(nctemp1625);
struct tree* nctemp1629= np;
struct tree* nctemp1631= p;
int nctemp1633=PtreeAddchild(nctemp1629,nctemp1631);
struct tree* nctemp1638= np;
struct tree* nctemp1640=ParseRelexpr(nctemp1638);
rp =nctemp1640;
struct tree* nctemp1645= rp;
struct tree* nctemp1647=ParseAsgexprseq(nctemp1645);
sp =nctemp1647;
struct tree* nctemp1649= np;
struct tree* nctemp1651= sp;
int nctemp1653=PtreeAddchild(nctemp1649,nctemp1651);
}
else{
np =p;
}
return np;
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1663= p;
struct tree* nctemp1665=ParseAddexpr(nctemp1663);
np =nctemp1665;
struct tree* nctemp1670= np;
struct tree* nctemp1672=ParseRelexprseq(nctemp1670);
np =nctemp1672;
return np;
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1695 = (lookahead ==60);
int nctemp1700 = (lookahead ==62);
int nctemp1692 = (nctemp1695 || nctemp1700);
int nctemp1705 = (lookahead ==21);
int nctemp1689 = (nctemp1692 || nctemp1705);
int nctemp1710 = (lookahead ==3);
int nctemp1686 = (nctemp1689 || nctemp1710);
int nctemp1715 = (lookahead ==4);
int nctemp1683 = (nctemp1686 || nctemp1715);
int nctemp1720 = (lookahead ==5);
int nctemp1680 = (nctemp1683 || nctemp1720);
int nctemp1725 = (lookahead ==6);
int nctemp1677 = (nctemp1680 || nctemp1725);
int nctemp1730 = (lookahead ==20);
int nctemp1674 = (nctemp1677 || nctemp1730);
if(nctemp1674)
{
struct nctempchar1 *nctemp1740;
struct nctempchar1 nctemp1741 = {{ 8}, (char*)"binexpr"};
nctemp1740=&nctemp1741;
nctempchar1* nctemp1738= nctemp1740;
nctempchar1* nctemp1744=ScanGetext();
nctempchar1* nctemp1742= nctemp1744;
struct tree* nctemp1745=PtreeMknode(nctemp1738,nctemp1742);
np =nctemp1745;
int nctemp1747= lookahead;
int nctemp1749=ParseMatch(nctemp1747);
struct tree* nctemp1751= np;
struct tree* nctemp1753= p;
int nctemp1755=PtreeAddchild(nctemp1751,nctemp1753);
struct tree* nctemp1760= np;
struct tree* nctemp1762=ParseAddexpr(nctemp1760);
rp =nctemp1762;
struct tree* nctemp1764= np;
struct tree* nctemp1766= rp;
int nctemp1768=PtreeAddchild(nctemp1764,nctemp1766);
struct tree* nctemp1773= np;
struct tree* nctemp1775=ParseRelexprseq(nctemp1773);
sp =nctemp1775;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1785= p;
struct tree* nctemp1787=ParseMultexpr(nctemp1785);
np =nctemp1787;
struct tree* nctemp1792= np;
struct tree* nctemp1794=ParseAddexprseq(nctemp1792);
np =nctemp1794;
return np;
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1799 = (lookahead ==43);
int nctemp1804 = (lookahead ==45);
int nctemp1796 = (nctemp1799 || nctemp1804);
if(nctemp1796)
{
struct nctempchar1 *nctemp1814;
struct nctempchar1 nctemp1815 = {{ 8}, (char*)"binexpr"};
nctemp1814=&nctemp1815;
nctempchar1* nctemp1812= nctemp1814;
nctempchar1* nctemp1818=ScanGetext();
nctempchar1* nctemp1816= nctemp1818;
struct tree* nctemp1819=PtreeMknode(nctemp1812,nctemp1816);
np =nctemp1819;
int nctemp1821= lookahead;
int nctemp1823=ParseMatch(nctemp1821);
struct tree* nctemp1825= np;
struct tree* nctemp1827= p;
int nctemp1829=PtreeAddchild(nctemp1825,nctemp1827);
struct tree* nctemp1834= np;
struct tree* nctemp1836=ParseMultexpr(nctemp1834);
rp =nctemp1836;
struct tree* nctemp1838= np;
struct tree* nctemp1840= rp;
int nctemp1842=PtreeAddchild(nctemp1838,nctemp1840);
struct tree* nctemp1847= np;
struct tree* nctemp1849=ParseAddexprseq(nctemp1847);
sp =nctemp1849;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1859= p;
struct tree* nctemp1861=ParseUnexpr(nctemp1859);
np =nctemp1861;
struct tree* nctemp1866= np;
struct tree* nctemp1868=ParseMultexprseq(nctemp1866);
np =nctemp1868;
return np;
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1873 = (lookahead ==42);
int nctemp1878 = (lookahead ==47);
int nctemp1870 = (nctemp1873 || nctemp1878);
if(nctemp1870)
{
struct nctempchar1 *nctemp1888;
struct nctempchar1 nctemp1889 = {{ 8}, (char*)"binexpr"};
nctemp1888=&nctemp1889;
nctempchar1* nctemp1886= nctemp1888;
nctempchar1* nctemp1892=ScanGetext();
nctempchar1* nctemp1890= nctemp1892;
struct tree* nctemp1893=PtreeMknode(nctemp1886,nctemp1890);
np =nctemp1893;
int nctemp1895= lookahead;
int nctemp1897=ParseMatch(nctemp1895);
struct tree* nctemp1899= np;
struct tree* nctemp1901= p;
int nctemp1903=PtreeAddchild(nctemp1899,nctemp1901);
struct tree* nctemp1908= np;
struct tree* nctemp1910=ParseUnexpr(nctemp1908);
rp =nctemp1910;
struct tree* nctemp1912= np;
struct tree* nctemp1914= rp;
int nctemp1916=PtreeAddchild(nctemp1912,nctemp1914);
struct tree* nctemp1921= np;
struct tree* nctemp1923=ParseMultexprseq(nctemp1921);
sp =nctemp1923;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseUnexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1929 = (lookahead ==45);
if(nctemp1929)
{
struct nctempchar1 *nctemp1939;
struct nctempchar1 nctemp1940 = {{ 7}, (char*)"unexpr"};
nctemp1939=&nctemp1940;
nctempchar1* nctemp1937= nctemp1939;
nctempchar1* nctemp1943=ScanGetext();
nctempchar1* nctemp1941= nctemp1943;
struct tree* nctemp1944=PtreeMknode(nctemp1937,nctemp1941);
sp =nctemp1944;
int nctemp1946= lookahead;
int nctemp1948=ParseMatch(nctemp1946);
struct tree* nctemp1953= p;
struct tree* nctemp1955=ParseUnexpr(nctemp1953);
np =nctemp1955;
struct tree* nctemp1957= sp;
struct tree* nctemp1959= np;
int nctemp1961=PtreeAddchild(nctemp1957,nctemp1959);
}
else{
struct tree* nctemp1966= p;
struct tree* nctemp1968=ParsePrimexpr(nctemp1966);
sp =nctemp1968;
}
return sp;
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp1970 = (lookahead ==1);
if(nctemp1970)
{
struct nctempchar1 *nctemp1980;
struct nctempchar1 nctemp1981 = {{ 11}, (char*)"identifier"};
nctemp1980=&nctemp1981;
nctempchar1* nctemp1978= nctemp1980;
nctempchar1* nctemp1984=ScanGetext();
nctempchar1* nctemp1982= nctemp1984;
struct tree* nctemp1985=PtreeMknode(nctemp1978,nctemp1982);
sp =nctemp1985;
int nctemp1987= 1;
int nctemp1989=ParseMatch(nctemp1987);
int nctemp1990 = (lookahead ==91);
if(nctemp1990)
{
int nctemp1995= lookahead;
int nctemp1997=ParseMatch(nctemp1995);
struct tree* nctemp1999= sp;
struct nctempchar1 *nctemp2003;
struct nctempchar1 nctemp2004 = {{ 6}, (char*)"array"};
nctemp2003=&nctemp2004;
nctempchar1* nctemp2001= nctemp2003;
int nctemp2005=PtreeSetarray(nctemp1999,nctemp2001);
struct tree* nctemp2010=ParseExprlist();
np =nctemp2010;
struct tree* nctemp2012= sp;
struct tree* nctemp2014= np;
int nctemp2016=PtreeAddchild(nctemp2012,nctemp2014);
int nctemp2018= 93;
int nctemp2020=ParseMatch(nctemp2018);
int nctemp2021 = (lookahead ==46);
if(nctemp2021)
{
int nctemp2026= 46;
int nctemp2028=ParseMatch(nctemp2026);
struct tree* nctemp2033=ParseIdent();
np =nctemp2033;
struct tree* nctemp2035= sp;
struct tree* nctemp2037= np;
int nctemp2039=PtreeAddchild(nctemp2035,nctemp2037);
struct tree* nctemp2041= np;
struct nctempchar1 *nctemp2045;
struct nctempchar1 nctemp2046 = {{ 9}, (char*)"selector"};
nctemp2045=&nctemp2046;
nctempchar1* nctemp2043= nctemp2045;
int nctemp2047=PtreeSetname(nctemp2041,nctemp2043);
}
}
else{
int nctemp2048 = (lookahead ==40);
if(nctemp2048)
{
int nctemp2053= lookahead;
int nctemp2055=ParseMatch(nctemp2053);
struct tree* nctemp2057= sp;
struct nctempchar1 *nctemp2061;
struct nctempchar1 nctemp2062 = {{ 6}, (char*)"fcall"};
nctemp2061=&nctemp2062;
nctempchar1* nctemp2059= nctemp2061;
int nctemp2063=PtreeSetname(nctemp2057,nctemp2059);
np =0;
int nctemp2068 = (lookahead !=41);
if(nctemp2068)
{
struct tree* nctemp2076=ParseExprlist();
np =nctemp2076;
}
int nctemp2078= 41;
int nctemp2080=ParseMatch(nctemp2078);
int nctemp2081 = (np !=0);
if(nctemp2081)
{
struct tree* nctemp2086= sp;
struct tree* nctemp2088= np;
int nctemp2090=PtreeAddchild(nctemp2086,nctemp2088);
}
}
else{
int nctemp2091 = (lookahead ==46);
if(nctemp2091)
{
int nctemp2096= 46;
int nctemp2098=ParseMatch(nctemp2096);
struct tree* nctemp2103=ParseIdent();
np =nctemp2103;
struct tree* nctemp2105= sp;
struct tree* nctemp2107= np;
int nctemp2109=PtreeAddchild(nctemp2105,nctemp2107);
struct tree* nctemp2111= np;
struct nctempchar1 *nctemp2115;
struct nctempchar1 nctemp2116 = {{ 9}, (char*)"selector"};
nctemp2115=&nctemp2116;
nctempchar1* nctemp2113= nctemp2115;
int nctemp2117=PtreeSetname(nctemp2111,nctemp2113);
}
}
}
}
else{
int nctemp2118 = (lookahead ==23);
if(nctemp2118)
{
int nctemp2123= lookahead;
int nctemp2125=ParseMatch(nctemp2123);
struct nctempchar1 *nctemp2132;
struct nctempchar1 nctemp2133 = {{ 5}, (char*)"cast"};
nctemp2132=&nctemp2133;
nctempchar1* nctemp2130= nctemp2132;
struct nctempchar1 *nctemp2136;
struct nctempchar1 nctemp2137 = {{ 5}, (char*)"void"};
nctemp2136=&nctemp2137;
nctempchar1* nctemp2134= nctemp2136;
struct tree* nctemp2138=PtreeMknode(nctemp2130,nctemp2134);
sp =nctemp2138;
int nctemp2140= 40;
int nctemp2142=ParseMatch(nctemp2140);
struct tree* nctemp2147=ParseType();
np =nctemp2147;
int nctemp2148 = (np ==0);
if(nctemp2148)
{
struct nctempchar1 *nctemp2155;
struct nctempchar1 nctemp2156 = {{ 13}, (char*)"Syntax error"};
nctemp2155=&nctemp2156;
nctempchar1* nctemp2153= nctemp2155;
int nctemp2157=ErrError(nctemp2153);
}
else{
struct tree* nctemp2159= sp;
struct tree* nctemp2161= np;
int nctemp2163=PtreeAddchild(nctemp2159,nctemp2161);
}
int nctemp2165= 44;
int nctemp2167=ParseMatch(nctemp2165);
struct tree* nctemp2172=ParseExpr();
np =nctemp2172;
struct tree* nctemp2174= sp;
struct tree* nctemp2176= np;
int nctemp2178=PtreeAddchild(nctemp2174,nctemp2176);
int nctemp2180= 41;
int nctemp2182=ParseMatch(nctemp2180);
}
else{
int nctemp2183 = (lookahead ==26);
if(nctemp2183)
{
int nctemp2188= lookahead;
int nctemp2190=ParseMatch(nctemp2188);
struct nctempchar1 *nctemp2197;
struct nctempchar1 nctemp2198 = {{ 4}, (char*)"new"};
nctemp2197=&nctemp2198;
nctempchar1* nctemp2195= nctemp2197;
struct nctempchar1 *nctemp2201;
struct nctempchar1 nctemp2202 = {{ 5}, (char*)"void"};
nctemp2201=&nctemp2202;
nctempchar1* nctemp2199= nctemp2201;
struct tree* nctemp2203=PtreeMknode(nctemp2195,nctemp2199);
sp =nctemp2203;
int nctemp2205= 40;
int nctemp2207=ParseMatch(nctemp2205);
struct tree* nctemp2212=ParseType();
np =nctemp2212;
int nctemp2213 = (np ==0);
if(nctemp2213)
{
struct nctempchar1 *nctemp2220;
struct nctempchar1 nctemp2221 = {{ 13}, (char*)"Syntax error"};
nctemp2220=&nctemp2221;
nctempchar1* nctemp2218= nctemp2220;
int nctemp2222=ErrError(nctemp2218);
}
else{
struct tree* nctemp2224= sp;
struct tree* nctemp2226= np;
int nctemp2228=PtreeAddchild(nctemp2224,nctemp2226);
}
int nctemp2230= 41;
int nctemp2232=ParseMatch(nctemp2230);
}
else{
int nctemp2233 = (lookahead ==50);
if(nctemp2233)
{
int nctemp2238= lookahead;
int nctemp2240=ParseMatch(nctemp2238);
struct nctempchar1 *nctemp2247;
struct nctempchar1 nctemp2248 = {{ 7}, (char*)"delete"};
nctemp2247=&nctemp2248;
nctempchar1* nctemp2245= nctemp2247;
struct nctempchar1 *nctemp2251;
struct nctempchar1 nctemp2252 = {{ 5}, (char*)"void"};
nctemp2251=&nctemp2252;
nctempchar1* nctemp2249= nctemp2251;
struct tree* nctemp2253=PtreeMknode(nctemp2245,nctemp2249);
sp =nctemp2253;
int nctemp2255= 40;
int nctemp2257=ParseMatch(nctemp2255);
struct tree* nctemp2262=ParseExpr();
np =nctemp2262;
int nctemp2263 = (np ==0);
if(nctemp2263)
{
struct nctempchar1 *nctemp2270;
struct nctempchar1 nctemp2271 = {{ 13}, (char*)"Syntax error"};
nctemp2270=&nctemp2271;
nctempchar1* nctemp2268= nctemp2270;
int nctemp2272=ErrError(nctemp2268);
}
else{
struct tree* nctemp2274= sp;
struct tree* nctemp2276= np;
int nctemp2278=PtreeAddchild(nctemp2274,nctemp2276);
}
int nctemp2280= 41;
int nctemp2282=ParseMatch(nctemp2280);
}
else{
int nctemp2283 = (lookahead ==25);
if(nctemp2283)
{
int nctemp2288= lookahead;
int nctemp2290=ParseMatch(nctemp2288);
struct nctempchar1 *nctemp2297;
struct nctempchar1 nctemp2298 = {{ 6}, (char*)"cmplx"};
nctemp2297=&nctemp2298;
nctempchar1* nctemp2295= nctemp2297;
struct nctempchar1 *nctemp2301;
struct nctempchar1 nctemp2302 = {{ 5}, (char*)"void"};
nctemp2301=&nctemp2302;
nctempchar1* nctemp2299= nctemp2301;
struct tree* nctemp2303=PtreeMknode(nctemp2295,nctemp2299);
sp =nctemp2303;
int nctemp2305= 40;
int nctemp2307=ParseMatch(nctemp2305);
struct tree* nctemp2312=ParseExprlist();
np =nctemp2312;
int nctemp2313 = (np ==0);
if(nctemp2313)
{
struct nctempchar1 *nctemp2320;
struct nctempchar1 nctemp2321 = {{ 13}, (char*)"Syntax error"};
nctemp2320=&nctemp2321;
nctempchar1* nctemp2318= nctemp2320;
int nctemp2322=ErrError(nctemp2318);
}
else{
struct tree* nctemp2324= sp;
struct tree* nctemp2326= np;
int nctemp2328=PtreeAddchild(nctemp2324,nctemp2326);
}
int nctemp2330= 41;
int nctemp2332=ParseMatch(nctemp2330);
}
else{
int nctemp2333 = (lookahead ==28);
if(nctemp2333)
{
int nctemp2338= lookahead;
int nctemp2340=ParseMatch(nctemp2338);
struct nctempchar1 *nctemp2347;
struct nctempchar1 nctemp2348 = {{ 3}, (char*)"re"};
nctemp2347=&nctemp2348;
nctempchar1* nctemp2345= nctemp2347;
struct nctempchar1 *nctemp2351;
struct nctempchar1 nctemp2352 = {{ 5}, (char*)"void"};
nctemp2351=&nctemp2352;
nctempchar1* nctemp2349= nctemp2351;
struct tree* nctemp2353=PtreeMknode(nctemp2345,nctemp2349);
sp =nctemp2353;
int nctemp2355= 40;
int nctemp2357=ParseMatch(nctemp2355);
struct tree* nctemp2362=ParseExpr();
np =nctemp2362;
int nctemp2363 = (np ==0);
if(nctemp2363)
{
struct nctempchar1 *nctemp2370;
struct nctempchar1 nctemp2371 = {{ 13}, (char*)"Syntax error"};
nctemp2370=&nctemp2371;
nctempchar1* nctemp2368= nctemp2370;
int nctemp2372=ErrError(nctemp2368);
}
else{
struct tree* nctemp2374= sp;
struct tree* nctemp2376= np;
int nctemp2378=PtreeAddchild(nctemp2374,nctemp2376);
}
int nctemp2380= 41;
int nctemp2382=ParseMatch(nctemp2380);
}
else{
int nctemp2383 = (lookahead ==27);
if(nctemp2383)
{
int nctemp2388= lookahead;
int nctemp2390=ParseMatch(nctemp2388);
struct nctempchar1 *nctemp2397;
struct nctempchar1 nctemp2398 = {{ 3}, (char*)"im"};
nctemp2397=&nctemp2398;
nctempchar1* nctemp2395= nctemp2397;
struct nctempchar1 *nctemp2401;
struct nctempchar1 nctemp2402 = {{ 5}, (char*)"void"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
struct tree* nctemp2403=PtreeMknode(nctemp2395,nctemp2399);
sp =nctemp2403;
int nctemp2405= 40;
int nctemp2407=ParseMatch(nctemp2405);
struct tree* nctemp2412=ParseExpr();
np =nctemp2412;
int nctemp2413 = (np ==0);
if(nctemp2413)
{
struct nctempchar1 *nctemp2420;
struct nctempchar1 nctemp2421 = {{ 13}, (char*)"Syntax error"};
nctemp2420=&nctemp2421;
nctempchar1* nctemp2418= nctemp2420;
int nctemp2422=ErrError(nctemp2418);
}
else{
struct tree* nctemp2424= sp;
struct tree* nctemp2426= np;
int nctemp2428=PtreeAddchild(nctemp2424,nctemp2426);
}
int nctemp2430= 41;
int nctemp2432=ParseMatch(nctemp2430);
}
else{
int nctemp2433 = (lookahead ==29);
if(nctemp2433)
{
int nctemp2438= lookahead;
int nctemp2440=ParseMatch(nctemp2438);
struct nctempchar1 *nctemp2447;
struct nctempchar1 nctemp2448 = {{ 4}, (char*)"len"};
nctemp2447=&nctemp2448;
nctempchar1* nctemp2445= nctemp2447;
struct nctempchar1 *nctemp2451;
struct nctempchar1 nctemp2452 = {{ 5}, (char*)"void"};
nctemp2451=&nctemp2452;
nctempchar1* nctemp2449= nctemp2451;
struct tree* nctemp2453=PtreeMknode(nctemp2445,nctemp2449);
sp =nctemp2453;
int nctemp2455= 40;
int nctemp2457=ParseMatch(nctemp2455);
struct tree* nctemp2462=ParseExpr();
np =nctemp2462;
int nctemp2463 = (np ==0);
if(nctemp2463)
{
struct nctempchar1 *nctemp2470;
struct nctempchar1 nctemp2471 = {{ 13}, (char*)"Syntax error"};
nctemp2470=&nctemp2471;
nctempchar1* nctemp2468= nctemp2470;
int nctemp2472=ErrError(nctemp2468);
}
else{
struct tree* nctemp2474= sp;
struct tree* nctemp2476= np;
int nctemp2478=PtreeAddchild(nctemp2474,nctemp2476);
}
int nctemp2480= 44;
int nctemp2482=ParseMatch(nctemp2480);
struct tree* nctemp2487=ParseExpr();
rp =nctemp2487;
int nctemp2488 = (rp ==0);
if(nctemp2488)
{
struct nctempchar1 *nctemp2495;
struct nctempchar1 nctemp2496 = {{ 13}, (char*)"Syntax error"};
nctemp2495=&nctemp2496;
nctempchar1* nctemp2493= nctemp2495;
int nctemp2497=ErrError(nctemp2493);
}
else{
struct tree* nctemp2499= np;
struct tree* nctemp2501= rp;
int nctemp2503=PtreeAddsister(nctemp2499,nctemp2501);
}
int nctemp2505= 41;
int nctemp2507=ParseMatch(nctemp2505);
}
else{
int nctemp2508 = (lookahead ==17);
if(nctemp2508)
{
struct nctempchar1 *nctemp2518;
struct nctempchar1 nctemp2519 = {{ 10}, (char*)"iconstant"};
nctemp2518=&nctemp2519;
nctempchar1* nctemp2516= nctemp2518;
nctempchar1* nctemp2522=ScanGetext();
nctempchar1* nctemp2520= nctemp2522;
struct tree* nctemp2523=PtreeMknode(nctemp2516,nctemp2520);
sp =nctemp2523;
int nctemp2525= 17;
int nctemp2527=ParseMatch(nctemp2525);
}
else{
int nctemp2528 = (lookahead ==24);
if(nctemp2528)
{
struct nctempchar1 *nctemp2538;
struct nctempchar1 nctemp2539 = {{ 10}, (char*)"rconstant"};
nctemp2538=&nctemp2539;
nctempchar1* nctemp2536= nctemp2538;
nctempchar1* nctemp2542=ScanGetext();
nctempchar1* nctemp2540= nctemp2542;
struct tree* nctemp2543=PtreeMknode(nctemp2536,nctemp2540);
sp =nctemp2543;
int nctemp2545= 24;
int nctemp2547=ParseMatch(nctemp2545);
}
else{
int nctemp2548 = (lookahead ==18);
if(nctemp2548)
{
struct nctempchar1 *nctemp2558;
struct nctempchar1 nctemp2559 = {{ 10}, (char*)"sconstant"};
nctemp2558=&nctemp2559;
nctempchar1* nctemp2556= nctemp2558;
nctempchar1* nctemp2562=ScanGetext();
nctempchar1* nctemp2560= nctemp2562;
struct tree* nctemp2563=PtreeMknode(nctemp2556,nctemp2560);
sp =nctemp2563;
int nctemp2565= 18;
int nctemp2567=ParseMatch(nctemp2565);
}
else{
int nctemp2568 = (lookahead ==40);
if(nctemp2568)
{
int nctemp2573= 40;
int nctemp2575=ParseMatch(nctemp2573);
struct tree* nctemp2580= p;
struct tree* nctemp2582=ParseAsgexpr(nctemp2580);
sp =nctemp2582;
int nctemp2584= 41;
int nctemp2586=ParseMatch(nctemp2584);
}
else{
struct nctempchar1 *nctemp2590;
struct nctempchar1 nctemp2591 = {{ 13}, (char*)"Syntax error"};
nctemp2590=&nctemp2591;
nctempchar1* nctemp2588= nctemp2590;
int nctemp2592=ErrError(nctemp2588);
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
return sp;
}
struct tree* ParseIdent ()
{
struct tree* np;
struct tree* sp;
int nctemp2594 = (lookahead ==1);
if(nctemp2594)
{
struct nctempchar1 *nctemp2604;
struct nctempchar1 nctemp2605 = {{ 11}, (char*)"identifier"};
nctemp2604=&nctemp2605;
nctempchar1* nctemp2602= nctemp2604;
nctempchar1* nctemp2608=ScanGetext();
nctempchar1* nctemp2606= nctemp2608;
struct tree* nctemp2609=PtreeMknode(nctemp2602,nctemp2606);
sp =nctemp2609;
int nctemp2611= 1;
int nctemp2613=ParseMatch(nctemp2611);
int nctemp2614 = (lookahead ==91);
if(nctemp2614)
{
int nctemp2619= lookahead;
int nctemp2621=ParseMatch(nctemp2619);
struct tree* nctemp2623= sp;
struct nctempchar1 *nctemp2627;
struct nctempchar1 nctemp2628 = {{ 6}, (char*)"array"};
nctemp2627=&nctemp2628;
nctempchar1* nctemp2625= nctemp2627;
int nctemp2629=PtreeSetarray(nctemp2623,nctemp2625);
struct tree* nctemp2634=ParseExprlist();
np =nctemp2634;
struct tree* nctemp2636= sp;
struct tree* nctemp2638= np;
int nctemp2640=PtreeAddchild(nctemp2636,nctemp2638);
int nctemp2642= 93;
int nctemp2644=ParseMatch(nctemp2642);
}
}
else{
sp =0;
}
return sp;
}
int ParseMatch (int t)
{
int nctemp2650 = (lookahead ==t);
if(nctemp2650)
{
int nctemp2658=ScanGetok();
lookahead =nctemp2658;
}
else{
struct nctempchar1 *nctemp2662;
struct nctempchar1 nctemp2663 = {{ 13}, (char*)"syntax error"};
nctemp2662=&nctemp2663;
nctempchar1* nctemp2660= nctemp2662;
int nctemp2664=ErrError(nctemp2660);
int nctemp2669=ScanGetok();
lookahead =nctemp2669;
}
return 1;
}
