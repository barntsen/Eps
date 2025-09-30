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
#include <assert.h>

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
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
int ScanIndentinit;
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
int ScanEnd;
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
int lookahead;
int ParseIniparse ()
{
int nctemp5=ScanGetok();
lookahead =nctemp5;
return 1;
}
struct tree* ParseExpr ()
;
struct tree* ParseAsgexpr (struct tree* p)
;
struct tree* ParseStmnt ()
;
struct tree* ParseElsestmnt ()
;
struct tree* ParseCompstmnt ()
;
int ParseError (nctempchar1 *s)
{
nctempchar1* nctemp10=ScanGetfile();
nctempchar1* nctemp8= nctemp10;
int nctemp13=ScanGetline();
int nctemp11= nctemp13;
nctempchar1* nctemp14= s;
int nctemp17=ErrError(nctemp8,nctemp11,nctemp14);
return 1;
}
int ParseGetlookahead ()
{
return lookahead;
}
int ParseMatch (int t)
{
int nctemp20 = (lookahead ==t);
if(nctemp20)
{
int nctemp28=ScanGetok();
lookahead =nctemp28;
}
else{
struct nctempchar1 *nctemp32;
static struct nctempchar1 nctemp33 = {{ 16}, (char*)"Was expecting: \0"};
nctemp32=&nctemp33;
nctempchar1* nctemp30= nctemp32;
int nctemp34=LibePs(nctemp30);
int nctemp36= t;
int nctemp38=LibePi(nctemp36);
struct nctempchar1 *nctemp42;
static struct nctempchar1 nctemp43 = {{ 12}, (char*)", but got: \0"};
nctemp42=&nctemp43;
nctempchar1* nctemp40= nctemp42;
int nctemp44=LibePs(nctemp40);
int nctemp46= lookahead;
int nctemp48=LibePi(nctemp46);
struct nctempchar1 *nctemp52;
static struct nctempchar1 nctemp53 = {{ 3}, (char*)"\n\0"};
nctemp52=&nctemp53;
nctempchar1* nctemp50= nctemp52;
int nctemp54=LibePs(nctemp50);
struct nctempchar1 *nctemp58;
static struct nctempchar1 nctemp59 = {{ 13}, (char*)"syntax error\0"};
nctemp58=&nctemp59;
nctempchar1* nctemp56= nctemp58;
int nctemp60=ParseError(nctemp56);
int nctemp65=ScanGetok();
lookahead =nctemp65;
}
return 1;
}
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *defn)
{
struct tree* p;
nctempchar1* nctemp71= name;
nctempchar1* nctemp74= defn;
struct tree* nctemp77=PtreeMknode(nctemp71,nctemp74);
p =nctemp77;
struct tree* nctemp79= p;
int nctemp83=ScanGetline();
int nctemp81= nctemp83;
int nctemp84=PtreeSetline(nctemp79,nctemp81);
struct tree* nctemp86= p;
nctempchar1* nctemp90=ScanGetfile();
nctempchar1* nctemp88= nctemp90;
int nctemp91=PtreeSetfile(nctemp86,nctemp88);
return p;
}
struct tree* ParseExprseq (struct tree* p)
{
int nctemp93 = (lookahead ==44);
if(nctemp93)
{
int nctemp98= lookahead;
int nctemp100=ParseMatch(nctemp98);
struct tree* nctemp102= p;
struct tree* nctemp106=ParseExpr();
struct tree* nctemp104= nctemp106;
int nctemp107=PtreeAddsister(nctemp102,nctemp104);
struct tree* nctemp109= p;
struct tree* nctemp111=ParseExprseq(nctemp109);
}
p =0;
return p;
}
struct tree* ParseExprlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp120=ParseExpr();
np =nctemp120;
int nctemp121 = (np !=0);
if(nctemp121)
{
struct nctempchar1 *nctemp131;
static struct nctempchar1 nctemp132 = {{ 9}, (char*)"exprlist\0"};
nctemp131=&nctemp132;
nctempchar1* nctemp129= nctemp131;
struct nctempchar1 *nctemp135;
static struct nctempchar1 nctemp136 = {{ 5}, (char*)"void\0"};
nctemp135=&nctemp136;
nctempchar1* nctemp133= nctemp135;
struct tree* nctemp137=ParseMknode(nctemp129,nctemp133);
sp =nctemp137;
struct tree* nctemp139= sp;
struct tree* nctemp141= np;
int nctemp143=PtreeAddchild(nctemp139,nctemp141);
struct tree* nctemp145= np;
struct tree* nctemp147=ParseExprseq(nctemp145);
}
else{
sp = 0;
}
return sp;
}
int ParseArrayarg (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp149 = (lookahead ==42);
if(nctemp149)
{
int nctemp154= 42;
int nctemp156=ParseMatch(nctemp154);
struct nctempchar1 *nctemp163;
static struct nctempchar1 nctemp164 = {{ 10}, (char*)"arrayargs\0"};
nctemp163=&nctemp164;
nctempchar1* nctemp161= nctemp163;
struct nctempchar1 *nctemp167;
static struct nctempchar1 nctemp168 = {{ 5}, (char*)"void\0"};
nctemp167=&nctemp168;
nctempchar1* nctemp165= nctemp167;
struct tree* nctemp169=ParseMknode(nctemp161,nctemp165);
sp =nctemp169;
struct tree* nctemp171= p;
struct tree* nctemp173= sp;
int nctemp175=PtreeAddchild(nctemp171,nctemp173);
int nctemp176 = (lookahead ==44);
if(nctemp176)
{
int nctemp181= lookahead;
int nctemp183=ParseMatch(nctemp181);
struct tree* nctemp185= p;
int nctemp187=ParseArrayarg(nctemp185);
}
else{
return 1;
}
}
else{
struct nctempchar1 *nctemp195;
static struct nctempchar1 nctemp196 = {{ 10}, (char*)"arrayargs\0"};
nctemp195=&nctemp196;
nctempchar1* nctemp193= nctemp195;
struct nctempchar1 *nctemp199;
static struct nctempchar1 nctemp200 = {{ 5}, (char*)"void\0"};
nctemp199=&nctemp200;
nctempchar1* nctemp197= nctemp199;
struct tree* nctemp201=ParseMknode(nctemp193,nctemp197);
sp =nctemp201;
struct tree* nctemp203= p;
struct tree* nctemp205= sp;
int nctemp207=PtreeAddchild(nctemp203,nctemp205);
struct tree* nctemp212=ParseExprlist();
np =nctemp212;
int nctemp213 = (sp !=0);
if(nctemp213)
{
struct tree* nctemp218= sp;
struct tree* nctemp220= np;
int nctemp222=PtreeAddchild(nctemp218,nctemp220);
}
else{
struct nctempchar1 *nctemp226;
static struct nctempchar1 nctemp227 = {{ 13}, (char*)"Syntax error\0"};
nctemp226=&nctemp227;
nctempchar1* nctemp224= nctemp226;
int nctemp228=ParseError(nctemp224);
}
return 1;
}
return 1;
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
int nctemp231 = (lookahead ==44);
if(nctemp231)
{
int nctemp236= lookahead;
int nctemp238=ParseMatch(nctemp236);
struct nctempchar1 *nctemp245;
static struct nctempchar1 nctemp246 = {{ 11}, (char*)"identifier\0"};
nctemp245=&nctemp246;
nctempchar1* nctemp243= nctemp245;
nctempchar1* nctemp249=ScanGetext();
nctempchar1* nctemp247= nctemp249;
struct tree* nctemp250=ParseMknode(nctemp243,nctemp247);
sp =nctemp250;
struct tree* nctemp252= p;
struct tree* nctemp254= sp;
int nctemp256=PtreeAddchild(nctemp252,nctemp254);
int nctemp258= 1;
int nctemp260=ParseMatch(nctemp258);
struct tree* nctemp262= p;
int nctemp264=ParseIdseq(nctemp262);
}
else{
return 1;
}
return 1;
}
int ParseConstdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp271=ParseExpr();
np =nctemp271;
int nctemp272 = (np !=0);
if(nctemp272)
{
struct tree* nctemp277= p;
struct tree* nctemp279= np;
int nctemp281=PtreeAddchild(nctemp277,nctemp279);
}
return 1;
}
struct tree* ParseIdent ()
{
struct tree* np;
struct tree* sp;
int nctemp283 = (lookahead ==1);
if(nctemp283)
{
struct nctempchar1 *nctemp293;
static struct nctempchar1 nctemp294 = {{ 11}, (char*)"identifier\0"};
nctemp293=&nctemp294;
nctempchar1* nctemp291= nctemp293;
nctempchar1* nctemp297=ScanGetext();
nctempchar1* nctemp295= nctemp297;
struct tree* nctemp298=ParseMknode(nctemp291,nctemp295);
sp =nctemp298;
int nctemp300= 1;
int nctemp302=ParseMatch(nctemp300);
int nctemp303 = (lookahead ==91);
if(nctemp303)
{
int nctemp308= lookahead;
int nctemp310=ParseMatch(nctemp308);
struct tree* nctemp312= sp;
struct nctempchar1 *nctemp316;
static struct nctempchar1 nctemp317 = {{ 6}, (char*)"array\0"};
nctemp316=&nctemp317;
nctempchar1* nctemp314= nctemp316;
int nctemp318=PtreeSetarray(nctemp312,nctemp314);
struct tree* nctemp323=ParseExprlist();
np =nctemp323;
struct tree* nctemp325= sp;
struct tree* nctemp327= np;
int nctemp329=PtreeAddchild(nctemp325,nctemp327);
int nctemp331= 93;
int nctemp333=ParseMatch(nctemp331);
}
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseType ()
{
struct tree* np;
struct tree* sp;
int nctemp347 = (lookahead ==7);
int nctemp352 = (lookahead ==9);
int nctemp344 = (nctemp347 || nctemp352);
int nctemp357 = (lookahead ==8);
int nctemp341 = (nctemp344 || nctemp357);
int nctemp362 = (lookahead ==431);
int nctemp338 = (nctemp341 || nctemp362);
int nctemp367 = (lookahead ==510);
int nctemp335 = (nctemp338 || nctemp367);
if(nctemp335)
{
struct nctempchar1 *nctemp377;
static struct nctempchar1 nctemp378 = {{ 5}, (char*)"type\0"};
nctemp377=&nctemp378;
nctempchar1* nctemp375= nctemp377;
nctempchar1* nctemp381=ScanGetext();
nctempchar1* nctemp379= nctemp381;
struct tree* nctemp382=ParseMknode(nctemp375,nctemp379);
np =nctemp382;
int nctemp384= lookahead;
int nctemp386=ParseMatch(nctemp384);
}
else{
int nctemp387 = (lookahead ==11);
if(nctemp387)
{
int nctemp392= lookahead;
int nctemp394=ParseMatch(nctemp392);
struct nctempchar1 *nctemp401;
static struct nctempchar1 nctemp402 = {{ 5}, (char*)"type\0"};
nctemp401=&nctemp402;
nctempchar1* nctemp399= nctemp401;
nctempchar1* nctemp405=ScanGetext();
nctempchar1* nctemp403= nctemp405;
struct tree* nctemp406=ParseMknode(nctemp399,nctemp403);
np =nctemp406;
struct tree* nctemp408= np;
struct nctempchar1 *nctemp412;
static struct nctempchar1 nctemp413 = {{ 7}, (char*)"struct\0"};
nctemp412=&nctemp413;
nctempchar1* nctemp410= nctemp412;
int nctemp414=PtreeSetstruct(nctemp408,nctemp410);
int nctemp416= 1;
int nctemp418=ParseMatch(nctemp416);
}
else{
np = 0;
}
}
int nctemp419 = (lookahead ==91);
if(nctemp419)
{
int nctemp423 = (np ==0);
if(nctemp423)
{
struct nctempchar1 *nctemp430;
static struct nctempchar1 nctemp431 = {{ 13}, (char*)"Missing type\0"};
nctemp430=&nctemp431;
nctempchar1* nctemp428= nctemp430;
int nctemp432=ParseError(nctemp428);
}
int nctemp434= lookahead;
int nctemp436=ParseMatch(nctemp434);
struct tree* nctemp438= np;
struct nctempchar1 *nctemp442;
static struct nctempchar1 nctemp443 = {{ 6}, (char*)"array\0"};
nctemp442=&nctemp443;
nctempchar1* nctemp440= nctemp442;
int nctemp444=PtreeSetarray(nctemp438,nctemp440);
struct nctempchar1 *nctemp451;
static struct nctempchar1 nctemp452 = {{ 10}, (char*)"arrayargs\0"};
nctemp451=&nctemp452;
nctempchar1* nctemp449= nctemp451;
struct nctempchar1 *nctemp455;
static struct nctempchar1 nctemp456 = {{ 5}, (char*)"void\0"};
nctemp455=&nctemp456;
nctempchar1* nctemp453= nctemp455;
struct tree* nctemp457=ParseMknode(nctemp449,nctemp453);
sp =nctemp457;
struct tree* nctemp459= np;
struct tree* nctemp461= sp;
int nctemp463=PtreeAddchild(nctemp459,nctemp461);
struct tree* nctemp465= sp;
int nctemp467=ParseArrayarg(nctemp465);
int nctemp469= 93;
int nctemp471=ParseMatch(nctemp469);
}
return np;
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp473 = (lookahead ==1);
if(nctemp473)
{
struct nctempchar1 *nctemp483;
static struct nctempchar1 nctemp484 = {{ 11}, (char*)"identifier\0"};
nctemp483=&nctemp484;
nctempchar1* nctemp481= nctemp483;
nctempchar1* nctemp487=ScanGetext();
nctempchar1* nctemp485= nctemp487;
struct tree* nctemp488=ParseMknode(nctemp481,nctemp485);
sp =nctemp488;
int nctemp490= 1;
int nctemp492=ParseMatch(nctemp490);
int nctemp493 = (lookahead ==91);
if(nctemp493)
{
int nctemp498= lookahead;
int nctemp500=ParseMatch(nctemp498);
struct tree* nctemp502= sp;
struct nctempchar1 *nctemp506;
static struct nctempchar1 nctemp507 = {{ 6}, (char*)"array\0"};
nctemp506=&nctemp507;
nctempchar1* nctemp504= nctemp506;
int nctemp508=PtreeSetarray(nctemp502,nctemp504);
struct tree* nctemp513=ParseExprlist();
np =nctemp513;
struct tree* nctemp515= sp;
struct tree* nctemp517= np;
int nctemp519=PtreeAddchild(nctemp515,nctemp517);
int nctemp521= 93;
int nctemp523=ParseMatch(nctemp521);
int nctemp524 = (lookahead ==46);
if(nctemp524)
{
int nctemp529= 46;
int nctemp531=ParseMatch(nctemp529);
struct tree* nctemp536=ParseIdent();
np =nctemp536;
struct tree* nctemp538= sp;
struct tree* nctemp540= np;
int nctemp542=PtreeAddchild(nctemp538,nctemp540);
struct tree* nctemp544= np;
struct nctempchar1 *nctemp548;
static struct nctempchar1 nctemp549 = {{ 9}, (char*)"selector\0"};
nctemp548=&nctemp549;
nctempchar1* nctemp546= nctemp548;
int nctemp550=PtreeSetname(nctemp544,nctemp546);
}
}
else{
int nctemp551 = (lookahead ==40);
if(nctemp551)
{
int nctemp556= lookahead;
int nctemp558=ParseMatch(nctemp556);
struct tree* nctemp560= sp;
struct nctempchar1 *nctemp564;
static struct nctempchar1 nctemp565 = {{ 6}, (char*)"fcall\0"};
nctemp564=&nctemp565;
nctempchar1* nctemp562= nctemp564;
int nctemp566=PtreeSetname(nctemp560,nctemp562);
np = 0;
int nctemp567 = (lookahead !=41);
if(nctemp567)
{
struct tree* nctemp575=ParseExprlist();
np =nctemp575;
}
int nctemp577= 41;
int nctemp579=ParseMatch(nctemp577);
int nctemp580 = (np !=0);
if(nctemp580)
{
struct tree* nctemp585= sp;
struct tree* nctemp587= np;
int nctemp589=PtreeAddchild(nctemp585,nctemp587);
}
}
else{
int nctemp590 = (lookahead ==46);
if(nctemp590)
{
int nctemp595= 46;
int nctemp597=ParseMatch(nctemp595);
struct tree* nctemp602=ParseIdent();
np =nctemp602;
struct tree* nctemp604= sp;
struct tree* nctemp606= np;
int nctemp608=PtreeAddchild(nctemp604,nctemp606);
struct tree* nctemp610= np;
struct nctempchar1 *nctemp614;
static struct nctempchar1 nctemp615 = {{ 9}, (char*)"selector\0"};
nctemp614=&nctemp615;
nctempchar1* nctemp612= nctemp614;
int nctemp616=PtreeSetname(nctemp610,nctemp612);
}
}
}
}
else{
int nctemp617 = (lookahead ==23);
if(nctemp617)
{
int nctemp622= lookahead;
int nctemp624=ParseMatch(nctemp622);
struct nctempchar1 *nctemp631;
static struct nctempchar1 nctemp632 = {{ 5}, (char*)"cast\0"};
nctemp631=&nctemp632;
nctempchar1* nctemp629= nctemp631;
struct nctempchar1 *nctemp635;
static struct nctempchar1 nctemp636 = {{ 5}, (char*)"void\0"};
nctemp635=&nctemp636;
nctempchar1* nctemp633= nctemp635;
struct tree* nctemp637=ParseMknode(nctemp629,nctemp633);
sp =nctemp637;
int nctemp639= 40;
int nctemp641=ParseMatch(nctemp639);
struct tree* nctemp646=ParseType();
np =nctemp646;
int nctemp647 = (np ==0);
if(nctemp647)
{
struct nctempchar1 *nctemp654;
static struct nctempchar1 nctemp655 = {{ 13}, (char*)"Syntax error\0"};
nctemp654=&nctemp655;
nctempchar1* nctemp652= nctemp654;
int nctemp656=ParseError(nctemp652);
}
else{
struct tree* nctemp658= sp;
struct tree* nctemp660= np;
int nctemp662=PtreeAddchild(nctemp658,nctemp660);
}
int nctemp664= 44;
int nctemp666=ParseMatch(nctemp664);
struct tree* nctemp671=ParseExpr();
np =nctemp671;
struct tree* nctemp673= sp;
struct tree* nctemp675= np;
int nctemp677=PtreeAddchild(nctemp673,nctemp675);
int nctemp679= 41;
int nctemp681=ParseMatch(nctemp679);
}
else{
int nctemp682 = (lookahead ==26);
if(nctemp682)
{
int nctemp687= lookahead;
int nctemp689=ParseMatch(nctemp687);
struct nctempchar1 *nctemp696;
static struct nctempchar1 nctemp697 = {{ 4}, (char*)"new\0"};
nctemp696=&nctemp697;
nctempchar1* nctemp694= nctemp696;
struct nctempchar1 *nctemp700;
static struct nctempchar1 nctemp701 = {{ 5}, (char*)"void\0"};
nctemp700=&nctemp701;
nctempchar1* nctemp698= nctemp700;
struct tree* nctemp702=ParseMknode(nctemp694,nctemp698);
sp =nctemp702;
int nctemp704= 40;
int nctemp706=ParseMatch(nctemp704);
struct tree* nctemp711=ParseType();
np =nctemp711;
int nctemp712 = (np ==0);
if(nctemp712)
{
struct nctempchar1 *nctemp719;
static struct nctempchar1 nctemp720 = {{ 13}, (char*)"Syntax error\0"};
nctemp719=&nctemp720;
nctempchar1* nctemp717= nctemp719;
int nctemp721=ParseError(nctemp717);
}
else{
struct tree* nctemp723= sp;
struct tree* nctemp725= np;
int nctemp727=PtreeAddchild(nctemp723,nctemp725);
}
int nctemp729= 41;
int nctemp731=ParseMatch(nctemp729);
}
else{
int nctemp732 = (lookahead ==50);
if(nctemp732)
{
int nctemp737= lookahead;
int nctemp739=ParseMatch(nctemp737);
struct nctempchar1 *nctemp746;
static struct nctempchar1 nctemp747 = {{ 7}, (char*)"delete\0"};
nctemp746=&nctemp747;
nctempchar1* nctemp744= nctemp746;
struct nctempchar1 *nctemp750;
static struct nctempchar1 nctemp751 = {{ 5}, (char*)"void\0"};
nctemp750=&nctemp751;
nctempchar1* nctemp748= nctemp750;
struct tree* nctemp752=ParseMknode(nctemp744,nctemp748);
sp =nctemp752;
int nctemp754= 40;
int nctemp756=ParseMatch(nctemp754);
struct tree* nctemp761=ParseExpr();
np =nctemp761;
int nctemp762 = (np ==0);
if(nctemp762)
{
struct nctempchar1 *nctemp769;
static struct nctempchar1 nctemp770 = {{ 13}, (char*)"Syntax error\0"};
nctemp769=&nctemp770;
nctempchar1* nctemp767= nctemp769;
int nctemp771=ParseError(nctemp767);
}
else{
struct tree* nctemp773= sp;
struct tree* nctemp775= np;
int nctemp777=PtreeAddchild(nctemp773,nctemp775);
}
int nctemp779= 41;
int nctemp781=ParseMatch(nctemp779);
}
else{
int nctemp782 = (lookahead ==25);
if(nctemp782)
{
int nctemp787= lookahead;
int nctemp789=ParseMatch(nctemp787);
struct nctempchar1 *nctemp796;
static struct nctempchar1 nctemp797 = {{ 6}, (char*)"cmplx\0"};
nctemp796=&nctemp797;
nctempchar1* nctemp794= nctemp796;
struct nctempchar1 *nctemp800;
static struct nctempchar1 nctemp801 = {{ 5}, (char*)"void\0"};
nctemp800=&nctemp801;
nctempchar1* nctemp798= nctemp800;
struct tree* nctemp802=ParseMknode(nctemp794,nctemp798);
sp =nctemp802;
int nctemp804= 40;
int nctemp806=ParseMatch(nctemp804);
struct tree* nctemp811=ParseExprlist();
np =nctemp811;
int nctemp812 = (np ==0);
if(nctemp812)
{
struct nctempchar1 *nctemp819;
static struct nctempchar1 nctemp820 = {{ 13}, (char*)"Syntax error\0"};
nctemp819=&nctemp820;
nctempchar1* nctemp817= nctemp819;
int nctemp821=ParseError(nctemp817);
}
else{
struct tree* nctemp823= sp;
struct tree* nctemp825= np;
int nctemp827=PtreeAddchild(nctemp823,nctemp825);
}
int nctemp829= 41;
int nctemp831=ParseMatch(nctemp829);
}
else{
int nctemp832 = (lookahead ==28);
if(nctemp832)
{
int nctemp837= lookahead;
int nctemp839=ParseMatch(nctemp837);
struct nctempchar1 *nctemp846;
static struct nctempchar1 nctemp847 = {{ 3}, (char*)"re\0"};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
struct nctempchar1 *nctemp850;
static struct nctempchar1 nctemp851 = {{ 5}, (char*)"void\0"};
nctemp850=&nctemp851;
nctempchar1* nctemp848= nctemp850;
struct tree* nctemp852=ParseMknode(nctemp844,nctemp848);
sp =nctemp852;
int nctemp854= 40;
int nctemp856=ParseMatch(nctemp854);
struct tree* nctemp861=ParseExpr();
np =nctemp861;
int nctemp862 = (np ==0);
if(nctemp862)
{
struct nctempchar1 *nctemp869;
static struct nctempchar1 nctemp870 = {{ 13}, (char*)"Syntax error\0"};
nctemp869=&nctemp870;
nctempchar1* nctemp867= nctemp869;
int nctemp871=ParseError(nctemp867);
}
else{
struct tree* nctemp873= sp;
struct tree* nctemp875= np;
int nctemp877=PtreeAddchild(nctemp873,nctemp875);
}
int nctemp879= 41;
int nctemp881=ParseMatch(nctemp879);
}
else{
int nctemp882 = (lookahead ==27);
if(nctemp882)
{
int nctemp887= lookahead;
int nctemp889=ParseMatch(nctemp887);
struct nctempchar1 *nctemp896;
static struct nctempchar1 nctemp897 = {{ 3}, (char*)"im\0"};
nctemp896=&nctemp897;
nctempchar1* nctemp894= nctemp896;
struct nctempchar1 *nctemp900;
static struct nctempchar1 nctemp901 = {{ 5}, (char*)"void\0"};
nctemp900=&nctemp901;
nctempchar1* nctemp898= nctemp900;
struct tree* nctemp902=ParseMknode(nctemp894,nctemp898);
sp =nctemp902;
int nctemp904= 40;
int nctemp906=ParseMatch(nctemp904);
struct tree* nctemp911=ParseExpr();
np =nctemp911;
int nctemp912 = (np ==0);
if(nctemp912)
{
struct nctempchar1 *nctemp919;
static struct nctempchar1 nctemp920 = {{ 13}, (char*)"Syntax error\0"};
nctemp919=&nctemp920;
nctempchar1* nctemp917= nctemp919;
int nctemp921=ParseError(nctemp917);
}
else{
struct tree* nctemp923= sp;
struct tree* nctemp925= np;
int nctemp927=PtreeAddchild(nctemp923,nctemp925);
}
int nctemp929= 41;
int nctemp931=ParseMatch(nctemp929);
}
else{
int nctemp932 = (lookahead ==29);
if(nctemp932)
{
int nctemp937= lookahead;
int nctemp939=ParseMatch(nctemp937);
struct nctempchar1 *nctemp946;
static struct nctempchar1 nctemp947 = {{ 4}, (char*)"len\0"};
nctemp946=&nctemp947;
nctempchar1* nctemp944= nctemp946;
struct nctempchar1 *nctemp950;
static struct nctempchar1 nctemp951 = {{ 5}, (char*)"void\0"};
nctemp950=&nctemp951;
nctempchar1* nctemp948= nctemp950;
struct tree* nctemp952=ParseMknode(nctemp944,nctemp948);
sp =nctemp952;
int nctemp954= 40;
int nctemp956=ParseMatch(nctemp954);
struct tree* nctemp961=ParseExpr();
np =nctemp961;
int nctemp962 = (np ==0);
if(nctemp962)
{
struct nctempchar1 *nctemp969;
static struct nctempchar1 nctemp970 = {{ 13}, (char*)"Syntax error\0"};
nctemp969=&nctemp970;
nctempchar1* nctemp967= nctemp969;
int nctemp971=ParseError(nctemp967);
}
else{
struct tree* nctemp973= sp;
struct tree* nctemp975= np;
int nctemp977=PtreeAddchild(nctemp973,nctemp975);
}
int nctemp979= 44;
int nctemp981=ParseMatch(nctemp979);
struct tree* nctemp986=ParseExpr();
rp =nctemp986;
int nctemp987 = (rp ==0);
if(nctemp987)
{
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 13}, (char*)"Syntax error\0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=ParseError(nctemp992);
}
else{
struct tree* nctemp998= np;
struct tree* nctemp1000= rp;
int nctemp1002=PtreeAddsister(nctemp998,nctemp1000);
}
int nctemp1004= 41;
int nctemp1006=ParseMatch(nctemp1004);
}
else{
int nctemp1007 = (lookahead ==17);
if(nctemp1007)
{
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 10}, (char*)"iconstant\0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
nctempchar1* nctemp1021=ScanGetext();
nctempchar1* nctemp1019= nctemp1021;
struct tree* nctemp1022=ParseMknode(nctemp1015,nctemp1019);
sp =nctemp1022;
int nctemp1024= 17;
int nctemp1026=ParseMatch(nctemp1024);
}
else{
int nctemp1027 = (lookahead ==24);
if(nctemp1027)
{
struct nctempchar1 *nctemp1037;
static struct nctempchar1 nctemp1038 = {{ 10}, (char*)"rconstant\0"};
nctemp1037=&nctemp1038;
nctempchar1* nctemp1035= nctemp1037;
nctempchar1* nctemp1041=ScanGetext();
nctempchar1* nctemp1039= nctemp1041;
struct tree* nctemp1042=ParseMknode(nctemp1035,nctemp1039);
sp =nctemp1042;
int nctemp1044= 24;
int nctemp1046=ParseMatch(nctemp1044);
}
else{
int nctemp1047 = (lookahead ==18);
if(nctemp1047)
{
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 10}, (char*)"sconstant\0"};
nctemp1057=&nctemp1058;
nctempchar1* nctemp1055= nctemp1057;
nctempchar1* nctemp1061=ScanGetext();
nctempchar1* nctemp1059= nctemp1061;
struct tree* nctemp1062=ParseMknode(nctemp1055,nctemp1059);
sp =nctemp1062;
int nctemp1064= 18;
int nctemp1066=ParseMatch(nctemp1064);
}
else{
int nctemp1067 = (lookahead ==40);
if(nctemp1067)
{
int nctemp1072= 40;
int nctemp1074=ParseMatch(nctemp1072);
struct tree* nctemp1079= p;
struct tree* nctemp1081=ParseAsgexpr(nctemp1079);
sp =nctemp1081;
int nctemp1083= 41;
int nctemp1085=ParseMatch(nctemp1083);
}
else{
struct nctempchar1 *nctemp1089;
static struct nctempchar1 nctemp1090 = {{ 13}, (char*)"Syntax error\0"};
nctemp1089=&nctemp1090;
nctempchar1* nctemp1087= nctemp1089;
int nctemp1091=ParseError(nctemp1087);
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
struct tree* ParseUnexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1093 = (lookahead ==45);
if(nctemp1093)
{
struct nctempchar1 *nctemp1103;
static struct nctempchar1 nctemp1104 = {{ 7}, (char*)"unexpr\0"};
nctemp1103=&nctemp1104;
nctempchar1* nctemp1101= nctemp1103;
nctempchar1* nctemp1107=ScanGetext();
nctempchar1* nctemp1105= nctemp1107;
struct tree* nctemp1108=ParseMknode(nctemp1101,nctemp1105);
sp =nctemp1108;
int nctemp1110= lookahead;
int nctemp1112=ParseMatch(nctemp1110);
struct tree* nctemp1117= p;
struct tree* nctemp1119=ParseUnexpr(nctemp1117);
np =nctemp1119;
struct tree* nctemp1121= sp;
struct tree* nctemp1123= np;
int nctemp1125=PtreeAddchild(nctemp1121,nctemp1123);
}
else{
struct tree* nctemp1130= p;
struct tree* nctemp1132=ParsePrimexpr(nctemp1130);
sp =nctemp1132;
}
return sp;
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1137 = (lookahead ==42);
int nctemp1142 = (lookahead ==47);
int nctemp1134 = (nctemp1137 || nctemp1142);
if(nctemp1134)
{
struct nctempchar1 *nctemp1152;
static struct nctempchar1 nctemp1153 = {{ 8}, (char*)"binexpr\0"};
nctemp1152=&nctemp1153;
nctempchar1* nctemp1150= nctemp1152;
nctempchar1* nctemp1156=ScanGetext();
nctempchar1* nctemp1154= nctemp1156;
struct tree* nctemp1157=ParseMknode(nctemp1150,nctemp1154);
np =nctemp1157;
int nctemp1159= lookahead;
int nctemp1161=ParseMatch(nctemp1159);
struct tree* nctemp1163= np;
struct tree* nctemp1165= p;
int nctemp1167=PtreeAddchild(nctemp1163,nctemp1165);
struct tree* nctemp1172= np;
struct tree* nctemp1174=ParseUnexpr(nctemp1172);
rp =nctemp1174;
struct tree* nctemp1176= np;
struct tree* nctemp1178= rp;
int nctemp1180=PtreeAddchild(nctemp1176,nctemp1178);
struct tree* nctemp1185= np;
struct tree* nctemp1187=ParseMultexprseq(nctemp1185);
sp =nctemp1187;
}
else{
sp = p;
}
return sp;
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1193= p;
struct tree* nctemp1195=ParseUnexpr(nctemp1193);
np =nctemp1195;
struct tree* nctemp1200= np;
struct tree* nctemp1202=ParseMultexprseq(nctemp1200);
np =nctemp1202;
return np;
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1207 = (lookahead ==43);
int nctemp1212 = (lookahead ==45);
int nctemp1204 = (nctemp1207 || nctemp1212);
if(nctemp1204)
{
struct nctempchar1 *nctemp1222;
static struct nctempchar1 nctemp1223 = {{ 8}, (char*)"binexpr\0"};
nctemp1222=&nctemp1223;
nctempchar1* nctemp1220= nctemp1222;
nctempchar1* nctemp1226=ScanGetext();
nctempchar1* nctemp1224= nctemp1226;
struct tree* nctemp1227=ParseMknode(nctemp1220,nctemp1224);
np =nctemp1227;
int nctemp1229= lookahead;
int nctemp1231=ParseMatch(nctemp1229);
struct tree* nctemp1233= np;
struct tree* nctemp1235= p;
int nctemp1237=PtreeAddchild(nctemp1233,nctemp1235);
struct tree* nctemp1242= np;
struct tree* nctemp1244=ParseMultexpr(nctemp1242);
rp =nctemp1244;
struct tree* nctemp1246= np;
struct tree* nctemp1248= rp;
int nctemp1250=PtreeAddchild(nctemp1246,nctemp1248);
struct tree* nctemp1255= np;
struct tree* nctemp1257=ParseAddexprseq(nctemp1255);
sp =nctemp1257;
}
else{
sp = p;
}
return sp;
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1263= p;
struct tree* nctemp1265=ParseMultexpr(nctemp1263);
np =nctemp1265;
struct tree* nctemp1270= np;
struct tree* nctemp1272=ParseAddexprseq(nctemp1270);
np =nctemp1272;
return np;
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1295 = (lookahead ==60);
int nctemp1300 = (lookahead ==62);
int nctemp1292 = (nctemp1295 || nctemp1300);
int nctemp1305 = (lookahead ==21);
int nctemp1289 = (nctemp1292 || nctemp1305);
int nctemp1310 = (lookahead ==3);
int nctemp1286 = (nctemp1289 || nctemp1310);
int nctemp1315 = (lookahead ==4);
int nctemp1283 = (nctemp1286 || nctemp1315);
int nctemp1320 = (lookahead ==5);
int nctemp1280 = (nctemp1283 || nctemp1320);
int nctemp1325 = (lookahead ==6);
int nctemp1277 = (nctemp1280 || nctemp1325);
int nctemp1330 = (lookahead ==20);
int nctemp1274 = (nctemp1277 || nctemp1330);
if(nctemp1274)
{
struct nctempchar1 *nctemp1340;
static struct nctempchar1 nctemp1341 = {{ 8}, (char*)"binexpr\0"};
nctemp1340=&nctemp1341;
nctempchar1* nctemp1338= nctemp1340;
nctempchar1* nctemp1344=ScanGetext();
nctempchar1* nctemp1342= nctemp1344;
struct tree* nctemp1345=ParseMknode(nctemp1338,nctemp1342);
np =nctemp1345;
int nctemp1347= lookahead;
int nctemp1349=ParseMatch(nctemp1347);
struct tree* nctemp1351= np;
struct tree* nctemp1353= p;
int nctemp1355=PtreeAddchild(nctemp1351,nctemp1353);
struct tree* nctemp1360= np;
struct tree* nctemp1362=ParseAddexpr(nctemp1360);
rp =nctemp1362;
struct tree* nctemp1364= np;
struct tree* nctemp1366= rp;
int nctemp1368=PtreeAddchild(nctemp1364,nctemp1366);
struct tree* nctemp1373= np;
struct tree* nctemp1375=ParseRelexprseq(nctemp1373);
sp =nctemp1375;
}
else{
sp = p;
}
return sp;
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1381= p;
struct tree* nctemp1383=ParseAddexpr(nctemp1381);
np =nctemp1383;
struct tree* nctemp1388= np;
struct tree* nctemp1390=ParseRelexprseq(nctemp1388);
np =nctemp1390;
return np;
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1392 = (lookahead ==61);
if(nctemp1392)
{
struct nctempchar1 *nctemp1402;
static struct nctempchar1 nctemp1403 = {{ 8}, (char*)"binexpr\0"};
nctemp1402=&nctemp1403;
nctempchar1* nctemp1400= nctemp1402;
nctempchar1* nctemp1406=ScanGetext();
nctempchar1* nctemp1404= nctemp1406;
struct tree* nctemp1407=ParseMknode(nctemp1400,nctemp1404);
np =nctemp1407;
int nctemp1409= lookahead;
int nctemp1411=ParseMatch(nctemp1409);
struct tree* nctemp1413= np;
struct tree* nctemp1415= p;
int nctemp1417=PtreeAddchild(nctemp1413,nctemp1415);
struct tree* nctemp1422= np;
struct tree* nctemp1424=ParseRelexpr(nctemp1422);
rp =nctemp1424;
struct tree* nctemp1429= rp;
struct tree* nctemp1431=ParseAsgexprseq(nctemp1429);
sp =nctemp1431;
struct tree* nctemp1433= np;
struct tree* nctemp1435= sp;
int nctemp1437=PtreeAddchild(nctemp1433,nctemp1435);
}
else{
np = p;
}
return np;
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1443= p;
struct tree* nctemp1445=ParseRelexpr(nctemp1443);
np =nctemp1445;
struct tree* nctemp1450= np;
struct tree* nctemp1452=ParseAsgexprseq(nctemp1450);
np =nctemp1452;
return np;
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
rp = 0;
struct tree* nctemp1458= rp;
struct tree* nctemp1460=ParseAsgexpr(nctemp1458);
np =nctemp1460;
int nctemp1461 = (np !=0);
if(nctemp1461)
{
struct nctempchar1 *nctemp1471;
static struct nctempchar1 nctemp1472 = {{ 5}, (char*)"expr\0"};
nctemp1471=&nctemp1472;
nctempchar1* nctemp1469= nctemp1471;
struct nctempchar1 *nctemp1475;
static struct nctempchar1 nctemp1476 = {{ 5}, (char*)"void\0"};
nctemp1475=&nctemp1476;
nctempchar1* nctemp1473= nctemp1475;
struct tree* nctemp1477=ParseMknode(nctemp1469,nctemp1473);
sp =nctemp1477;
struct tree* nctemp1479= sp;
struct tree* nctemp1481= np;
int nctemp1483=PtreeAddchild(nctemp1479,nctemp1481);
np = sp;
}
return np;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp1489=ParseType();
np =nctemp1489;
int nctemp1490 = (np ==0);
if(nctemp1490)
{
return np;
}
int nctemp1495 = (lookahead ==1);
if(nctemp1495)
{
struct nctempchar1 *nctemp1505;
static struct nctempchar1 nctemp1506 = {{ 11}, (char*)"identifier\0"};
nctemp1505=&nctemp1506;
nctempchar1* nctemp1503= nctemp1505;
nctempchar1* nctemp1509=ScanGetext();
nctempchar1* nctemp1507= nctemp1509;
struct tree* nctemp1510=ParseMknode(nctemp1503,nctemp1507);
mp =nctemp1510;
struct tree* nctemp1512= np;
struct tree* nctemp1514= mp;
int nctemp1516=PtreeAddchild(nctemp1512,nctemp1514);
int nctemp1518= lookahead;
int nctemp1520=ParseMatch(nctemp1518);
int nctemp1521 = (lookahead ==44);
if(nctemp1521)
{
struct tree* nctemp1526= np;
int nctemp1528=ParseIdseq(nctemp1526);
}
else{
int nctemp1529 = (lookahead ==61);
if(nctemp1529)
{
int nctemp1534= lookahead;
int nctemp1536=ParseMatch(nctemp1534);
struct tree* nctemp1538= mp;
int nctemp1540=ParseConstdecl(nctemp1538);
}
}
int nctemp1541 = (lookahead ==59);
if(nctemp1541)
{
int nctemp1546= 59;
int nctemp1548=ParseMatch(nctemp1546);
}
int nctemp1550= 10;
int nctemp1552=ParseMatch(nctemp1550);
}
else{
struct nctempchar1 *nctemp1556;
static struct nctempchar1 nctemp1557 = {{ 35}, (char*)"Missing variable in type statement\0"};
nctemp1556=&nctemp1557;
nctempchar1* nctemp1554= nctemp1556;
int nctemp1558=ParseError(nctemp1554);
}
return np;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1564=ParseDeclaration();
np =nctemp1564;
int nctemp1565 = (np !=0);
if(nctemp1565)
{
struct nctempchar1 *nctemp1575;
static struct nctempchar1 nctemp1576 = {{ 13}, (char*)"declarations\0"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
struct nctempchar1 *nctemp1579;
static struct nctempchar1 nctemp1580 = {{ 5}, (char*)"void\0"};
nctemp1579=&nctemp1580;
nctempchar1* nctemp1577= nctemp1579;
struct tree* nctemp1581=ParseMknode(nctemp1573,nctemp1577);
sp =nctemp1581;
struct tree* nctemp1583= sp;
struct tree* nctemp1585= np;
int nctemp1587=PtreeAddchild(nctemp1583,nctemp1585);
}
else{
np =0;
return np;
}
struct tree* nctemp1599=ParseDeclaration();
np =nctemp1599;
int nctemp1592 = (np !=0);
int nctemp1601=nctemp1592;
while(nctemp1601)
{{
struct tree* nctemp1603= sp;
struct tree* nctemp1605= np;
int nctemp1607=PtreeAddchild(nctemp1603,nctemp1605);
}
struct tree* nctemp1615=ParseDeclaration();
np =nctemp1615;
int nctemp1608 = (np !=0);
nctemp1601=nctemp1608;}return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1618 = (lookahead ==44);
if(nctemp1618)
{
int nctemp1623= lookahead;
int nctemp1625=ParseMatch(nctemp1623);
struct tree* nctemp1633=ParseType();
np =nctemp1633;
int nctemp1626 = (np !=0);
if(nctemp1626)
{
struct tree* nctemp1636= p;
struct tree* nctemp1638= np;
int nctemp1640=PtreeAddchild(nctemp1636,nctemp1638);
int nctemp1641 = (lookahead ==1);
if(nctemp1641)
{
struct nctempchar1 *nctemp1651;
static struct nctempchar1 nctemp1652 = {{ 11}, (char*)"identifier\0"};
nctemp1651=&nctemp1652;
nctempchar1* nctemp1649= nctemp1651;
nctempchar1* nctemp1655=ScanGetext();
nctempchar1* nctemp1653= nctemp1655;
struct tree* nctemp1656=ParseMknode(nctemp1649,nctemp1653);
sp =nctemp1656;
struct tree* nctemp1658= np;
struct tree* nctemp1660= sp;
int nctemp1662=PtreeAddchild(nctemp1658,nctemp1660);
int nctemp1664= 1;
int nctemp1666=ParseMatch(nctemp1664);
}
struct tree* nctemp1668= p;
int nctemp1670=ParseArgseq(nctemp1668);
}
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp1679=ParseType();
np =nctemp1679;
int nctemp1672 = (np !=0);
if(nctemp1672)
{
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 8}, (char*)"arglist\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
struct nctempchar1 *nctemp1691;
static struct nctempchar1 nctemp1692 = {{ 5}, (char*)"void\0"};
nctemp1691=&nctemp1692;
nctempchar1* nctemp1689= nctemp1691;
struct tree* nctemp1693=ParseMknode(nctemp1685,nctemp1689);
sp =nctemp1693;
struct tree* nctemp1695= sp;
struct tree* nctemp1697= np;
int nctemp1699=PtreeAddchild(nctemp1695,nctemp1697);
int nctemp1700 = (lookahead ==1);
if(nctemp1700)
{
struct nctempchar1 *nctemp1710;
static struct nctempchar1 nctemp1711 = {{ 11}, (char*)"identifier\0"};
nctemp1710=&nctemp1711;
nctempchar1* nctemp1708= nctemp1710;
nctempchar1* nctemp1714=ScanGetext();
nctempchar1* nctemp1712= nctemp1714;
struct tree* nctemp1715=ParseMknode(nctemp1708,nctemp1712);
mp =nctemp1715;
struct tree* nctemp1717= np;
struct tree* nctemp1719= mp;
int nctemp1721=PtreeAddchild(nctemp1717,nctemp1719);
int nctemp1723= 1;
int nctemp1725=ParseMatch(nctemp1723);
}
struct tree* nctemp1727= sp;
int nctemp1729=ParseArgseq(nctemp1727);
}
else{
sp = 0;
}
return sp;
}
int ParseStructdeclar (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct nctempchar1 *nctemp1737;
static struct nctempchar1 nctemp1738 = {{ 10}, (char*)"structdec\0"};
nctemp1737=&nctemp1738;
nctempchar1* nctemp1735= nctemp1737;
struct nctempchar1 *nctemp1741;
static struct nctempchar1 nctemp1742 = {{ 5}, (char*)"void\0"};
nctemp1741=&nctemp1742;
nctempchar1* nctemp1739= nctemp1741;
struct tree* nctemp1743=ParseMknode(nctemp1735,nctemp1739);
np =nctemp1743;
struct tree* nctemp1745= p;
struct tree* nctemp1747= np;
int nctemp1749=PtreeAddchild(nctemp1745,nctemp1747);
struct tree* nctemp1754=ParseDeclarations();
sp =nctemp1754;
struct tree* nctemp1756= np;
struct tree* nctemp1758= sp;
int nctemp1760=PtreeAddchild(nctemp1756,nctemp1758);
int nctemp1762= 601;
int nctemp1764=ParseMatch(nctemp1762);
return 1;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1766 = (lookahead ==12);
if(nctemp1766)
{
struct nctempchar1 *nctemp1776;
static struct nctempchar1 nctemp1777 = {{ 6}, (char*)"while\0"};
nctemp1776=&nctemp1777;
nctempchar1* nctemp1774= nctemp1776;
struct nctempchar1 *nctemp1780;
static struct nctempchar1 nctemp1781 = {{ 5}, (char*)"void\0"};
nctemp1780=&nctemp1781;
nctempchar1* nctemp1778= nctemp1780;
struct tree* nctemp1782=ParseMknode(nctemp1774,nctemp1778);
np =nctemp1782;
int nctemp1784= 12;
int nctemp1786=ParseMatch(nctemp1784);
int nctemp1788= 40;
int nctemp1790=ParseMatch(nctemp1788);
struct tree* nctemp1798=ParseExpr();
sp =nctemp1798;
int nctemp1791 = (sp !=0);
if(nctemp1791)
{
struct tree* nctemp1801= np;
struct tree* nctemp1803= sp;
int nctemp1805=PtreeAddchild(nctemp1801,nctemp1803);
}
int nctemp1807= 41;
int nctemp1809=ParseMatch(nctemp1807);
struct tree* nctemp1814=ParseStmnt();
sp =nctemp1814;
struct tree* nctemp1816= np;
struct tree* nctemp1818= sp;
int nctemp1820=PtreeAddchild(nctemp1816,nctemp1818);
sp = np;
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseReturnstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1822 = (lookahead ==30);
if(nctemp1822)
{
struct nctempchar1 *nctemp1832;
static struct nctempchar1 nctemp1833 = {{ 7}, (char*)"return\0"};
nctemp1832=&nctemp1833;
nctempchar1* nctemp1830= nctemp1832;
struct nctempchar1 *nctemp1836;
static struct nctempchar1 nctemp1837 = {{ 5}, (char*)"void\0"};
nctemp1836=&nctemp1837;
nctempchar1* nctemp1834= nctemp1836;
struct tree* nctemp1838=ParseMknode(nctemp1830,nctemp1834);
np =nctemp1838;
int nctemp1840= 30;
int nctemp1842=ParseMatch(nctemp1840);
struct tree* nctemp1850=ParseExpr();
sp =nctemp1850;
int nctemp1843 = (sp !=0);
if(nctemp1843)
{
struct tree* nctemp1853= np;
struct tree* nctemp1855= sp;
int nctemp1857=PtreeAddchild(nctemp1853,nctemp1855);
sp = np;
int nctemp1858 = (lookahead ==59);
if(nctemp1858)
{
int nctemp1863= 59;
int nctemp1865=ParseMatch(nctemp1863);
}
int nctemp1867= 10;
int nctemp1869=ParseMatch(nctemp1867);
}
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseForstmntc (struct tree* np)
{
struct tree* sp;
struct tree* rp;
int nctemp1872= 40;
int nctemp1874=ParseMatch(nctemp1872);
struct tree* nctemp1882=ParseExpr();
sp =nctemp1882;
int nctemp1875 = (sp !=0);
if(nctemp1875)
{
struct tree* nctemp1885= np;
struct tree* nctemp1887= sp;
int nctemp1889=PtreeAddchild(nctemp1885,nctemp1887);
int nctemp1891= 59;
int nctemp1893=ParseMatch(nctemp1891);
struct tree* nctemp1901=ParseExpr();
rp =nctemp1901;
int nctemp1894 = (rp !=0);
if(nctemp1894)
{
struct tree* nctemp1904= sp;
struct tree* nctemp1906= rp;
int nctemp1908=PtreeAddsister(nctemp1904,nctemp1906);
}
int nctemp1910= 59;
int nctemp1912=ParseMatch(nctemp1910);
struct tree* nctemp1920=ParseExpr();
rp =nctemp1920;
int nctemp1913 = (rp !=0);
if(nctemp1913)
{
struct tree* nctemp1923= sp;
struct tree* nctemp1925= rp;
int nctemp1927=PtreeAddsister(nctemp1923,nctemp1925);
}
int nctemp1929= 41;
int nctemp1931=ParseMatch(nctemp1929);
struct tree* nctemp1936=ParseStmnt();
sp =nctemp1936;
struct tree* nctemp1938= np;
struct tree* nctemp1940= sp;
int nctemp1942=PtreeAddchild(nctemp1938,nctemp1940);
sp = np;
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseForstmntpy (struct tree* np)
{
struct tree* sp;
struct tree* ap;
struct tree* bp;
struct tree* cp;
struct tree* dp;
struct tree* ep;
struct tree* fp;
struct tree* gp;
struct tree* hp;
struct tree* ip;
struct tree* jp;
struct tree* mp;
struct tree* qp;
struct tree* rp;
struct tree* tp;
nctempchar1 *id;
sp = 0;
int nctemp1944 = (lookahead ==1);
if(nctemp1944)
{
struct nctempchar1 *nctemp1954;
static struct nctempchar1 nctemp1955 = {{ 5}, (char*)"expr\0"};
nctemp1954=&nctemp1955;
nctempchar1* nctemp1952= nctemp1954;
struct nctempchar1 *nctemp1958;
static struct nctempchar1 nctemp1959 = {{ 5}, (char*)"void\0"};
nctemp1958=&nctemp1959;
nctempchar1* nctemp1956= nctemp1958;
struct tree* nctemp1960=PtreeMknode(nctemp1952,nctemp1956);
sp =nctemp1960;
struct tree* nctemp1962= np;
struct tree* nctemp1964= sp;
int nctemp1966=PtreeAddchild(nctemp1962,nctemp1964);
struct nctempchar1 *nctemp1973;
static struct nctempchar1 nctemp1974 = {{ 8}, (char*)"binexpr\0"};
nctemp1973=&nctemp1974;
nctempchar1* nctemp1971= nctemp1973;
struct nctempchar1 *nctemp1977;
static struct nctempchar1 nctemp1978 = {{ 2}, (char*)"=\0"};
nctemp1977=&nctemp1978;
nctempchar1* nctemp1975= nctemp1977;
struct tree* nctemp1979=PtreeMknode(nctemp1971,nctemp1975);
rp =nctemp1979;
struct tree* nctemp1981= sp;
struct tree* nctemp1983= rp;
int nctemp1985=PtreeAddchild(nctemp1981,nctemp1983);
nctempchar1* nctemp1993=ScanGetext();
nctempchar1* nctemp1991= nctemp1993;
nctempchar1* nctemp1994=LibeStrsave(nctemp1991);
id=nctemp1994;
struct nctempchar1 *nctemp2001;
static struct nctempchar1 nctemp2002 = {{ 11}, (char*)"identifier\0"};
nctemp2001=&nctemp2002;
nctempchar1* nctemp1999= nctemp2001;
nctempchar1* nctemp2005=ScanGetext();
nctempchar1* nctemp2003= nctemp2005;
struct tree* nctemp2006=PtreeMknode(nctemp1999,nctemp2003);
tp =nctemp2006;
struct tree* nctemp2008= rp;
struct tree* nctemp2010= tp;
int nctemp2012=PtreeAddchild(nctemp2008,nctemp2010);
int nctemp2014= 1;
int nctemp2016=ParseMatch(nctemp2014);
int nctemp2018= 702;
int nctemp2020=ParseMatch(nctemp2018);
int nctemp2022= 703;
int nctemp2024=ParseMatch(nctemp2022);
int nctemp2026= 40;
int nctemp2028=ParseMatch(nctemp2026);
struct tree* nctemp2033=ParseExpr();
qp =nctemp2033;
struct tree* nctemp2038= qp;
struct tree* nctemp2040=PtreeMvchild(nctemp2038);
qp =nctemp2040;
struct tree* nctemp2042= tp;
struct tree* nctemp2044= qp;
int nctemp2046=PtreeAddsister(nctemp2042,nctemp2044);
int nctemp2048= 44;
int nctemp2050=ParseMatch(nctemp2048);
struct tree* nctemp2055=ParseExpr();
mp =nctemp2055;
struct tree* nctemp2060= mp;
struct tree* nctemp2062=PtreeMvchild(nctemp2060);
mp =nctemp2062;
struct nctempchar1 *nctemp2069;
static struct nctempchar1 nctemp2070 = {{ 5}, (char*)"expr\0"};
nctemp2069=&nctemp2070;
nctempchar1* nctemp2067= nctemp2069;
struct nctempchar1 *nctemp2073;
static struct nctempchar1 nctemp2074 = {{ 5}, (char*)"void\0"};
nctemp2073=&nctemp2074;
nctempchar1* nctemp2071= nctemp2073;
struct tree* nctemp2075=PtreeMknode(nctemp2067,nctemp2071);
ap =nctemp2075;
struct tree* nctemp2077= sp;
struct tree* nctemp2079= ap;
int nctemp2081=PtreeAddsister(nctemp2077,nctemp2079);
struct nctempchar1 *nctemp2088;
static struct nctempchar1 nctemp2089 = {{ 8}, (char*)"binexpr\0"};
nctemp2088=&nctemp2089;
nctempchar1* nctemp2086= nctemp2088;
struct nctempchar1 *nctemp2092;
static struct nctempchar1 nctemp2093 = {{ 2}, (char*)"<\0"};
nctemp2092=&nctemp2093;
nctempchar1* nctemp2090= nctemp2092;
struct tree* nctemp2094=PtreeMknode(nctemp2086,nctemp2090);
bp =nctemp2094;
struct tree* nctemp2096= ap;
struct tree* nctemp2098= bp;
int nctemp2100=PtreeAddchild(nctemp2096,nctemp2098);
struct nctempchar1 *nctemp2107;
static struct nctempchar1 nctemp2108 = {{ 11}, (char*)"identifier\0"};
nctemp2107=&nctemp2108;
nctempchar1* nctemp2105= nctemp2107;
nctempchar1* nctemp2109= id;
struct tree* nctemp2112=PtreeMknode(nctemp2105,nctemp2109);
cp =nctemp2112;
struct tree* nctemp2114= bp;
struct tree* nctemp2116= cp;
int nctemp2118=PtreeAddchild(nctemp2114,nctemp2116);
struct tree* nctemp2120= cp;
struct tree* nctemp2122= mp;
int nctemp2124=PtreeAddsister(nctemp2120,nctemp2122);
struct nctempchar1 *nctemp2131;
static struct nctempchar1 nctemp2132 = {{ 5}, (char*)"expr\0"};
nctemp2131=&nctemp2132;
nctempchar1* nctemp2129= nctemp2131;
struct nctempchar1 *nctemp2135;
static struct nctempchar1 nctemp2136 = {{ 5}, (char*)"void\0"};
nctemp2135=&nctemp2136;
nctempchar1* nctemp2133= nctemp2135;
struct tree* nctemp2137=PtreeMknode(nctemp2129,nctemp2133);
dp =nctemp2137;
struct tree* nctemp2139= sp;
struct tree* nctemp2141= dp;
int nctemp2143=PtreeAddsister(nctemp2139,nctemp2141);
struct nctempchar1 *nctemp2150;
static struct nctempchar1 nctemp2151 = {{ 8}, (char*)"binexpr\0"};
nctemp2150=&nctemp2151;
nctempchar1* nctemp2148= nctemp2150;
struct nctempchar1 *nctemp2154;
static struct nctempchar1 nctemp2155 = {{ 2}, (char*)"=\0"};
nctemp2154=&nctemp2155;
nctempchar1* nctemp2152= nctemp2154;
struct tree* nctemp2156=PtreeMknode(nctemp2148,nctemp2152);
ep =nctemp2156;
struct tree* nctemp2158= dp;
struct tree* nctemp2160= ep;
int nctemp2162=PtreeAddchild(nctemp2158,nctemp2160);
struct nctempchar1 *nctemp2169;
static struct nctempchar1 nctemp2170 = {{ 11}, (char*)"identifier\0"};
nctemp2169=&nctemp2170;
nctempchar1* nctemp2167= nctemp2169;
nctempchar1* nctemp2171= id;
struct tree* nctemp2174=PtreeMknode(nctemp2167,nctemp2171);
fp =nctemp2174;
struct tree* nctemp2176= ep;
struct tree* nctemp2178= fp;
int nctemp2180=PtreeAddchild(nctemp2176,nctemp2178);
struct nctempchar1 *nctemp2187;
static struct nctempchar1 nctemp2188 = {{ 8}, (char*)"binexpr\0"};
nctemp2187=&nctemp2188;
nctempchar1* nctemp2185= nctemp2187;
struct nctempchar1 *nctemp2191;
static struct nctempchar1 nctemp2192 = {{ 2}, (char*)"+\0"};
nctemp2191=&nctemp2192;
nctempchar1* nctemp2189= nctemp2191;
struct tree* nctemp2193=PtreeMknode(nctemp2185,nctemp2189);
gp =nctemp2193;
struct tree* nctemp2195= fp;
struct tree* nctemp2197= gp;
int nctemp2199=PtreeAddsister(nctemp2195,nctemp2197);
struct nctempchar1 *nctemp2206;
static struct nctempchar1 nctemp2207 = {{ 11}, (char*)"identifier\0"};
nctemp2206=&nctemp2207;
nctempchar1* nctemp2204= nctemp2206;
nctempchar1* nctemp2208= id;
struct tree* nctemp2211=PtreeMknode(nctemp2204,nctemp2208);
hp =nctemp2211;
struct tree* nctemp2213= gp;
struct tree* nctemp2215= hp;
int nctemp2217=PtreeAddchild(nctemp2213,nctemp2215);
struct nctempchar1 *nctemp2224;
static struct nctempchar1 nctemp2225 = {{ 10}, (char*)"iconstant\0"};
nctemp2224=&nctemp2225;
nctempchar1* nctemp2222= nctemp2224;
struct nctempchar1 *nctemp2228;
static struct nctempchar1 nctemp2229 = {{ 2}, (char*)"1\0"};
nctemp2228=&nctemp2229;
nctempchar1* nctemp2226= nctemp2228;
struct tree* nctemp2230=PtreeMknode(nctemp2222,nctemp2226);
ip =nctemp2230;
struct tree* nctemp2232= hp;
struct tree* nctemp2234= ip;
int nctemp2236=PtreeAddsister(nctemp2232,nctemp2234);
int nctemp2238= 41;
int nctemp2240=ParseMatch(nctemp2238);
struct tree* nctemp2245=ParseCompstmnt();
jp =nctemp2245;
struct tree* nctemp2247= sp;
struct tree* nctemp2249= jp;
int nctemp2251=PtreeAddsister(nctemp2247,nctemp2249);
}
return np;
}
struct tree* ParseForstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2253 = (lookahead ==26);
if(nctemp2253)
{
struct nctempchar1 *nctemp2263;
static struct nctempchar1 nctemp2264 = {{ 4}, (char*)"for\0"};
nctemp2263=&nctemp2264;
nctempchar1* nctemp2261= nctemp2263;
struct nctempchar1 *nctemp2267;
static struct nctempchar1 nctemp2268 = {{ 5}, (char*)"void\0"};
nctemp2267=&nctemp2268;
nctempchar1* nctemp2265= nctemp2267;
struct tree* nctemp2269=ParseMknode(nctemp2261,nctemp2265);
np =nctemp2269;
int nctemp2271= 26;
int nctemp2273=ParseMatch(nctemp2271);
int nctemp2274 = (lookahead =='(');
if(nctemp2274)
{
struct tree* nctemp2282= np;
struct tree* nctemp2284=ParseForstmntc(nctemp2282);
sp =nctemp2284;
}
else{
struct tree* nctemp2289= np;
struct tree* nctemp2291=ParseForstmntpy(nctemp2289);
sp =nctemp2291;
}
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseSlice ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
struct tree* nctemp2300=ParseExpr();
sp =nctemp2300;
int nctemp2293 = (sp !=0);
if(nctemp2293)
{
struct nctempchar1 *nctemp2308;
static struct nctempchar1 nctemp2309 = {{ 6}, (char*)"slice\0"};
nctemp2308=&nctemp2309;
nctempchar1* nctemp2306= nctemp2308;
struct nctempchar1 *nctemp2312;
static struct nctempchar1 nctemp2313 = {{ 5}, (char*)"void\0"};
nctemp2312=&nctemp2313;
nctempchar1* nctemp2310= nctemp2312;
struct tree* nctemp2314=ParseMknode(nctemp2306,nctemp2310);
np =nctemp2314;
struct tree* nctemp2316= np;
struct tree* nctemp2318= sp;
int nctemp2320=PtreeAddchild(nctemp2316,nctemp2318);
int nctemp2322= 58;
int nctemp2324=ParseMatch(nctemp2322);
struct tree* nctemp2332=ParseExpr();
rp =nctemp2332;
int nctemp2325 = (rp !=0);
if(nctemp2325)
{
struct tree* nctemp2335= np;
struct tree* nctemp2337= rp;
int nctemp2339=PtreeAddchild(nctemp2335,nctemp2337);
}
int nctemp2340 = (lookahead ==58);
if(nctemp2340)
{
int nctemp2345= 58;
int nctemp2347=ParseMatch(nctemp2345);
struct tree* nctemp2355=ParseExpr();
rp =nctemp2355;
int nctemp2348 = (rp !=0);
if(nctemp2348)
{
struct tree* nctemp2358= np;
struct tree* nctemp2360= rp;
int nctemp2362=PtreeAddchild(nctemp2358,nctemp2360);
}
else{
struct nctempchar1 *nctemp2366;
static struct nctempchar1 nctemp2367 = {{ 13}, (char*)"Syntax error\0"};
nctemp2366=&nctemp2367;
nctempchar1* nctemp2364= nctemp2366;
int nctemp2368=ParseError(nctemp2364);
}
}
}
else{
struct nctempchar1 *nctemp2372;
static struct nctempchar1 nctemp2373 = {{ 13}, (char*)"Syntax error\0"};
nctemp2372=&nctemp2373;
nctempchar1* nctemp2370= nctemp2372;
int nctemp2374=ParseError(nctemp2370);
}
return np;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp2383=ParseSlice();
sp =nctemp2383;
int nctemp2376 = (sp !=0);
if(nctemp2376)
{
struct tree* nctemp2386= np;
struct tree* nctemp2388= sp;
int nctemp2390=PtreeAddchild(nctemp2386,nctemp2388);
}
else{
struct nctempchar1 *nctemp2394;
static struct nctempchar1 nctemp2395 = {{ 13}, (char*)"Syntax error\0"};
nctemp2394=&nctemp2395;
nctempchar1* nctemp2392= nctemp2394;
int nctemp2396=ParseError(nctemp2392);
}
int nctemp2397 = (lookahead ==44);
if(nctemp2397)
{
int nctemp2402= 44;
int nctemp2404=ParseMatch(nctemp2402);
struct tree* nctemp2406= np;
struct tree* nctemp2408=ParseSliceseq(nctemp2406);
}
else{
return np;
}
return np;
}
struct tree* ParseParallelstmnt ()
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp2411 = (lookahead ==31);
if(nctemp2411)
{
struct nctempchar1 *nctemp2421;
static struct nctempchar1 nctemp2422 = {{ 9}, (char*)"parallel\0"};
nctemp2421=&nctemp2422;
nctempchar1* nctemp2419= nctemp2421;
struct nctempchar1 *nctemp2425;
static struct nctempchar1 nctemp2426 = {{ 5}, (char*)"void\0"};
nctemp2425=&nctemp2426;
nctempchar1* nctemp2423= nctemp2425;
struct tree* nctemp2427=ParseMknode(nctemp2419,nctemp2423);
np =nctemp2427;
int nctemp2429= 31;
int nctemp2431=ParseMatch(nctemp2429);
int nctemp2433= 40;
int nctemp2435=ParseMatch(nctemp2433);
struct nctempchar1 *nctemp2442;
static struct nctempchar1 nctemp2443 = {{ 9}, (char*)"sliceseq\0"};
nctemp2442=&nctemp2443;
nctempchar1* nctemp2440= nctemp2442;
struct nctempchar1 *nctemp2446;
static struct nctempchar1 nctemp2447 = {{ 5}, (char*)"void\0"};
nctemp2446=&nctemp2447;
nctempchar1* nctemp2444= nctemp2446;
struct tree* nctemp2448=ParseMknode(nctemp2440,nctemp2444);
rp =nctemp2448;
struct tree* nctemp2450= np;
struct tree* nctemp2452= rp;
int nctemp2454=PtreeAddchild(nctemp2450,nctemp2452);
struct tree* nctemp2462= rp;
struct tree* nctemp2464=ParseSliceseq(nctemp2462);
sp =nctemp2464;
int nctemp2455 = (sp ==0);
if(nctemp2455)
{
struct nctempchar1 *nctemp2469;
static struct nctempchar1 nctemp2470 = {{ 13}, (char*)"Syntax error\0"};
nctemp2469=&nctemp2470;
nctempchar1* nctemp2467= nctemp2469;
int nctemp2471=ParseError(nctemp2467);
}
int nctemp2472 = (lookahead ==41);
if(nctemp2472)
{
int nctemp2477= 41;
int nctemp2479=ParseMatch(nctemp2477);
struct tree* nctemp2484=ParseStmnt();
sp =nctemp2484;
struct tree* nctemp2486= np;
struct tree* nctemp2488= sp;
int nctemp2490=PtreeAddchild(nctemp2486,nctemp2488);
return np;
}
else{
struct nctempchar1 *nctemp2495;
static struct nctempchar1 nctemp2496 = {{ 13}, (char*)"Syntax error\0"};
nctemp2495=&nctemp2496;
nctempchar1* nctemp2493= nctemp2495;
int nctemp2497=ParseError(nctemp2493);
}
}
else{
rp =0;
return rp;
}
rp =0;
return rp;
}
struct tree* ParseElsestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2506 = (lookahead ==15);
if(nctemp2506)
{
int nctemp2511= 15;
int nctemp2513=ParseMatch(nctemp2511);
struct nctempchar1 *nctemp2520;
static struct nctempchar1 nctemp2521 = {{ 5}, (char*)"else\0"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
struct nctempchar1 *nctemp2524;
static struct nctempchar1 nctemp2525 = {{ 5}, (char*)"void\0"};
nctemp2524=&nctemp2525;
nctempchar1* nctemp2522= nctemp2524;
struct tree* nctemp2526=ParseMknode(nctemp2518,nctemp2522);
np =nctemp2526;
struct tree* nctemp2531=ParseStmnt();
sp =nctemp2531;
struct tree* nctemp2533= np;
struct tree* nctemp2535= sp;
int nctemp2537=PtreeAddchild(nctemp2533,nctemp2535);
}
else{
np = 0;
}
return np;
}
struct tree* ParseIfstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2539 = (lookahead ==14);
if(nctemp2539)
{
struct nctempchar1 *nctemp2549;
static struct nctempchar1 nctemp2550 = {{ 3}, (char*)"if\0"};
nctemp2549=&nctemp2550;
nctempchar1* nctemp2547= nctemp2549;
struct nctempchar1 *nctemp2553;
static struct nctempchar1 nctemp2554 = {{ 5}, (char*)"void\0"};
nctemp2553=&nctemp2554;
nctempchar1* nctemp2551= nctemp2553;
struct tree* nctemp2555=ParseMknode(nctemp2547,nctemp2551);
np =nctemp2555;
int nctemp2557= 14;
int nctemp2559=ParseMatch(nctemp2557);
int nctemp2561= 40;
int nctemp2563=ParseMatch(nctemp2561);
struct tree* nctemp2571=ParseExpr();
sp =nctemp2571;
int nctemp2564 = (sp !=0);
if(nctemp2564)
{
struct tree* nctemp2574= np;
struct tree* nctemp2576= sp;
int nctemp2578=PtreeAddchild(nctemp2574,nctemp2576);
}
int nctemp2580= 41;
int nctemp2582=ParseMatch(nctemp2580);
struct tree* nctemp2587=ParseStmnt();
sp =nctemp2587;
struct tree* nctemp2589= np;
struct tree* nctemp2591= sp;
int nctemp2593=PtreeAddchild(nctemp2589,nctemp2591);
struct tree* nctemp2601=ParseElsestmnt();
sp =nctemp2601;
int nctemp2594 = (sp !=0);
if(nctemp2594)
{
struct tree* nctemp2604= np;
struct tree* nctemp2606= sp;
int nctemp2608=PtreeAddchild(nctemp2604,nctemp2606);
}
sp = np;
}
else{
sp = 0;
}
return sp;
}
struct tree* ParseStmnt ()
{
struct tree* np;
struct tree* nctemp2617=ParseWhilestmnt();
np =nctemp2617;
int nctemp2610 = (np !=0);
if(nctemp2610)
{
return np;
}
else{
struct tree* nctemp2627=ParseReturnstmnt();
np =nctemp2627;
int nctemp2620 = (np !=0);
if(nctemp2620)
{
return np;
}
else{
struct tree* nctemp2637=ParseForstmnt();
np =nctemp2637;
int nctemp2630 = (np !=0);
if(nctemp2630)
{
return np;
}
else{
struct tree* nctemp2647=ParseParallelstmnt();
np =nctemp2647;
int nctemp2640 = (np !=0);
if(nctemp2640)
{
return np;
}
else{
struct tree* nctemp2657=ParseIfstmnt();
np =nctemp2657;
int nctemp2650 = (np !=0);
if(nctemp2650)
{
return np;
}
else{
struct tree* nctemp2667=ParseCompstmnt();
np =nctemp2667;
int nctemp2660 = (np !=0);
if(nctemp2660)
{
return np;
}
else{
int nctemp2670 = (lookahead ==601);
if(nctemp2670)
{
np =0;
return np;
}
else{
int nctemp2678 = (lookahead ==701);
if(nctemp2678)
{
int nctemp2683= 701;
int nctemp2685=ParseMatch(nctemp2683);
int nctemp2687= 10;
int nctemp2689=ParseMatch(nctemp2687);
np =0;
return np;
}
else{
struct tree* nctemp2698=ParseExpr();
np =nctemp2698;
int nctemp2699 = (lookahead ==59);
if(nctemp2699)
{
int nctemp2704= 59;
int nctemp2706=ParseMatch(nctemp2704);
}
int nctemp2707 = (lookahead ==10);
if(nctemp2707)
{
int nctemp2712= 10;
int nctemp2714=ParseMatch(nctemp2712);
}
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
struct tree* ParseStmntlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp2720=ParseStmnt();
np =nctemp2720;
sp = np;
int nctemp2721 = (sp !=0);
int nctemp2725=nctemp2721;
while(nctemp2725)
{{
struct tree* nctemp2730=ParseStmnt();
sp =nctemp2730;
struct tree* nctemp2732= np;
struct tree* nctemp2734= sp;
int nctemp2736=PtreeAddsister(nctemp2732,nctemp2734);
}
int nctemp2737 = (sp !=0);
nctemp2725=nctemp2737;}return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2742 = (lookahead ==58);
if(nctemp2742)
{
struct nctempchar1 *nctemp2752;
static struct nctempchar1 nctemp2753 = {{ 10}, (char*)"compstmnt\0"};
nctemp2752=&nctemp2753;
nctempchar1* nctemp2750= nctemp2752;
struct nctempchar1 *nctemp2756;
static struct nctempchar1 nctemp2757 = {{ 5}, (char*)"void\0"};
nctemp2756=&nctemp2757;
nctempchar1* nctemp2754= nctemp2756;
struct tree* nctemp2758=ParseMknode(nctemp2750,nctemp2754);
np =nctemp2758;
int nctemp2760= 58;
int nctemp2762=ParseMatch(nctemp2760);
int nctemp2764= 10;
int nctemp2766=ParseMatch(nctemp2764);
int nctemp2768= 600;
int nctemp2770=ParseMatch(nctemp2768);
struct tree* nctemp2775=ParseDeclarations();
sp =nctemp2775;
int nctemp2776 = (sp !=0);
if(nctemp2776)
{
struct tree* nctemp2781= np;
struct tree* nctemp2783= sp;
int nctemp2785=PtreeAddchild(nctemp2781,nctemp2783);
}
struct tree* nctemp2790=ParseStmntlist();
sp =nctemp2790;
int nctemp2791 = (sp !=0);
if(nctemp2791)
{
struct tree* nctemp2796= np;
struct tree* nctemp2798= sp;
int nctemp2800=PtreeAddchild(nctemp2796,nctemp2798);
}
int nctemp2802= 601;
int nctemp2804=ParseMatch(nctemp2802);
}
else{
np = 0;
}
return np;
}
int ParseFdef (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp2810=ParseType();
np =nctemp2810;
int nctemp2811 = (np !=0);
if(nctemp2811)
{
struct tree* nctemp2816= p;
struct tree* nctemp2818= np;
int nctemp2820=PtreeAddchild(nctemp2816,nctemp2818);
}
else{
struct nctempchar1 *nctemp2824;
static struct nctempchar1 nctemp2825 = {{ 34}, (char*)"Missing function type declaration\0"};
nctemp2824=&nctemp2825;
nctempchar1* nctemp2822= nctemp2824;
int nctemp2826=ParseError(nctemp2822);
}
int nctemp2827 = (lookahead ==1);
if(nctemp2827)
{
struct nctempchar1 *nctemp2837;
static struct nctempchar1 nctemp2838 = {{ 5}, (char*)"fdef\0"};
nctemp2837=&nctemp2838;
nctempchar1* nctemp2835= nctemp2837;
nctempchar1* nctemp2841=ScanGetext();
nctempchar1* nctemp2839= nctemp2841;
struct tree* nctemp2842=ParseMknode(nctemp2835,nctemp2839);
sp =nctemp2842;
int nctemp2844= 1;
int nctemp2846=ParseMatch(nctemp2844);
struct tree* nctemp2848= np;
struct tree* nctemp2850= sp;
int nctemp2852=PtreeAddchild(nctemp2848,nctemp2850);
}
int nctemp2854= 40;
int nctemp2856=ParseMatch(nctemp2854);
struct tree* nctemp2861=ParseArglist();
np =nctemp2861;
int nctemp2862 = (np !=0);
if(nctemp2862)
{
struct tree* nctemp2867= sp;
struct tree* nctemp2869= np;
int nctemp2871=PtreeAddchild(nctemp2867,nctemp2869);
}
int nctemp2873= 41;
int nctemp2875=ParseMatch(nctemp2873);
np = 0;
struct tree* nctemp2880=ParseCompstmnt();
np =nctemp2880;
int nctemp2881 = (np !=0);
if(nctemp2881)
{
struct tree* nctemp2886= sp;
struct tree* nctemp2888= np;
int nctemp2890=PtreeAddchild(nctemp2886,nctemp2888);
}
else{
struct nctempchar1 *nctemp2894;
static struct nctempchar1 nctemp2895 = {{ 22}, (char*)"Missing function body\0"};
nctemp2894=&nctemp2895;
nctempchar1* nctemp2892= nctemp2894;
int nctemp2896=ParseError(nctemp2892);
}
return 1;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* imp;
struct tree* nctemp2902=ParseType();
np =nctemp2902;
int nctemp2903 = (np ==0);
if(nctemp2903)
{
int nctemp2907 = (lookahead ==433);
if(nctemp2907)
{
int nctemp2912= lookahead;
int nctemp2914=ParseMatch(nctemp2912);
int nctemp2915 = (lookahead ==1);
if(nctemp2915)
{
struct nctempchar1 *nctemp2925;
static struct nctempchar1 nctemp2926 = {{ 7}, (char*)"import\0"};
nctemp2925=&nctemp2926;
nctempchar1* nctemp2923= nctemp2925;
nctempchar1* nctemp2929=ScanGetext();
nctempchar1* nctemp2927= nctemp2929;
struct tree* nctemp2930=ParseMknode(nctemp2923,nctemp2927);
imp =nctemp2930;
int nctemp2932= 1;
int nctemp2934=ParseMatch(nctemp2932);
int nctemp2936= 10;
int nctemp2938=ParseMatch(nctemp2936);
struct nctempchar1 *nctemp2945;
static struct nctempchar1 nctemp2946 = {{ 8}, (char*)"extdecl\0"};
nctemp2945=&nctemp2946;
nctempchar1* nctemp2943= nctemp2945;
struct nctempchar1 *nctemp2949;
static struct nctempchar1 nctemp2950 = {{ 5}, (char*)"void\0"};
nctemp2949=&nctemp2950;
nctempchar1* nctemp2947= nctemp2949;
struct tree* nctemp2951=ParseMknode(nctemp2943,nctemp2947);
sp =nctemp2951;
struct tree* nctemp2953= sp;
struct tree* nctemp2955= imp;
int nctemp2957=PtreeAddchild(nctemp2953,nctemp2955);
}
return sp;
}
else{
int nctemp2959 = (lookahead ==1100);
if(nctemp2959)
{
int nctemp2964= 1100;
int nctemp2966=ParseMatch(nctemp2964);
struct nctempchar1 *nctemp2973;
static struct nctempchar1 nctemp2974 = {{ 8}, (char*)"extdecl\0"};
nctemp2973=&nctemp2974;
nctempchar1* nctemp2971= nctemp2973;
struct nctempchar1 *nctemp2977;
static struct nctempchar1 nctemp2978 = {{ 5}, (char*)"void\0"};
nctemp2977=&nctemp2978;
nctempchar1* nctemp2975= nctemp2977;
struct tree* nctemp2979=ParseMknode(nctemp2971,nctemp2975);
sp =nctemp2979;
struct tree* nctemp2981= sp;
int nctemp2983=ParseFdef(nctemp2981);
return sp;
}
else{
struct nctempchar1 *nctemp2988;
static struct nctempchar1 nctemp2989 = {{ 13}, (char*)"Syntax error\0"};
nctemp2988=&nctemp2989;
nctempchar1* nctemp2986= nctemp2988;
int nctemp2990=ParseError(nctemp2986);
}
}
}
int nctemp2991 = (lookahead ==58);
if(nctemp2991)
{
int nctemp2996= lookahead;
int nctemp2998=ParseMatch(nctemp2996);
int nctemp3000= 10;
int nctemp3002=ParseMatch(nctemp3000);
int nctemp3004= 600;
int nctemp3006=ParseMatch(nctemp3004);
struct nctempchar1 *nctemp3013;
static struct nctempchar1 nctemp3014 = {{ 8}, (char*)"extdecl\0"};
nctemp3013=&nctemp3014;
nctempchar1* nctemp3011= nctemp3013;
struct nctempchar1 *nctemp3017;
static struct nctempchar1 nctemp3018 = {{ 5}, (char*)"void\0"};
nctemp3017=&nctemp3018;
nctempchar1* nctemp3015= nctemp3017;
struct tree* nctemp3019=ParseMknode(nctemp3011,nctemp3015);
sp =nctemp3019;
struct tree* nctemp3021= sp;
struct tree* nctemp3023= np;
int nctemp3025=PtreeAddchild(nctemp3021,nctemp3023);
struct tree* nctemp3027= np;
int nctemp3029=ParseStructdeclar(nctemp3027);
return sp;
}
int nctemp3031 = (lookahead ==1);
if(nctemp3031)
{
struct nctempchar1 *nctemp3041;
static struct nctempchar1 nctemp3042 = {{ 8}, (char*)"extdecl\0"};
nctemp3041=&nctemp3042;
nctempchar1* nctemp3039= nctemp3041;
struct nctempchar1 *nctemp3045;
static struct nctempchar1 nctemp3046 = {{ 5}, (char*)"void\0"};
nctemp3045=&nctemp3046;
nctempchar1* nctemp3043= nctemp3045;
struct tree* nctemp3047=ParseMknode(nctemp3039,nctemp3043);
sp =nctemp3047;
struct tree* nctemp3049= sp;
struct tree* nctemp3051= np;
int nctemp3053=PtreeAddchild(nctemp3049,nctemp3051);
struct nctempchar1 *nctemp3060;
static struct nctempchar1 nctemp3061 = {{ 11}, (char*)"identifier\0"};
nctemp3060=&nctemp3061;
nctempchar1* nctemp3058= nctemp3060;
nctempchar1* nctemp3064=ScanGetext();
nctempchar1* nctemp3062= nctemp3064;
struct tree* nctemp3065=ParseMknode(nctemp3058,nctemp3062);
mp =nctemp3065;
struct tree* nctemp3067= np;
struct tree* nctemp3069= mp;
int nctemp3071=PtreeAddchild(nctemp3067,nctemp3069);
int nctemp3073= lookahead;
int nctemp3075=ParseMatch(nctemp3073);
int nctemp3076 = (lookahead ==44);
if(nctemp3076)
{
struct tree* nctemp3081= np;
int nctemp3083=ParseIdseq(nctemp3081);
int nctemp3084 = (lookahead ==59);
if(nctemp3084)
{
int nctemp3089= 59;
int nctemp3091=ParseMatch(nctemp3089);
}
int nctemp3093= 10;
int nctemp3095=ParseMatch(nctemp3093);
}
else{
int nctemp3096 = (lookahead ==61);
if(nctemp3096)
{
int nctemp3101= lookahead;
int nctemp3103=ParseMatch(nctemp3101);
struct tree* nctemp3105= mp;
int nctemp3107=ParseConstdecl(nctemp3105);
int nctemp3109= 10;
int nctemp3111=ParseMatch(nctemp3109);
}
else{
int nctemp3112 = (lookahead ==59);
if(nctemp3112)
{
int nctemp3117= 59;
int nctemp3119=ParseMatch(nctemp3117);
}
int nctemp3121= 10;
int nctemp3123=ParseMatch(nctemp3121);
}
}
}
else{
struct nctempchar1 *nctemp3127;
static struct nctempchar1 nctemp3128 = {{ 13}, (char*)"Syntax error\0"};
nctemp3127=&nctemp3128;
nctempchar1* nctemp3125= nctemp3127;
int nctemp3129=ParseError(nctemp3125);
}
return sp;
}
struct tree* ParseParse ()
{
struct tree* np;
np = 0;
int nctemp3131 = (lookahead ==19);
if(nctemp3131)
{
return np;
}
else{
int nctemp3136 = (lookahead ==600);
if(nctemp3136)
{
int nctemp3141= 600;
int nctemp3143=ParseMatch(nctemp3141);
}
struct tree* nctemp3148=ParseExtdecl();
np =nctemp3148;
}
return np;
}
}
