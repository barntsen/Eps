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
sp =0;
}
return sp;
}
int ParseArrayarg (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp153 = (lookahead ==42);
if(nctemp153)
{
int nctemp158= 42;
int nctemp160=ParseMatch(nctemp158);
struct nctempchar1 *nctemp167;
static struct nctempchar1 nctemp168 = {{ 10}, (char*)"arrayargs\0"};
nctemp167=&nctemp168;
nctempchar1* nctemp165= nctemp167;
struct nctempchar1 *nctemp171;
static struct nctempchar1 nctemp172 = {{ 5}, (char*)"void\0"};
nctemp171=&nctemp172;
nctempchar1* nctemp169= nctemp171;
struct tree* nctemp173=ParseMknode(nctemp165,nctemp169);
sp =nctemp173;
struct tree* nctemp175= p;
struct tree* nctemp177= sp;
int nctemp179=PtreeAddchild(nctemp175,nctemp177);
int nctemp180 = (lookahead ==44);
if(nctemp180)
{
int nctemp185= lookahead;
int nctemp187=ParseMatch(nctemp185);
struct tree* nctemp189= p;
int nctemp191=ParseArrayarg(nctemp189);
}
else{
return 1;
}
}
else{
struct nctempchar1 *nctemp199;
static struct nctempchar1 nctemp200 = {{ 10}, (char*)"arrayargs\0"};
nctemp199=&nctemp200;
nctempchar1* nctemp197= nctemp199;
struct nctempchar1 *nctemp203;
static struct nctempchar1 nctemp204 = {{ 5}, (char*)"void\0"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
struct tree* nctemp205=ParseMknode(nctemp197,nctemp201);
sp =nctemp205;
struct tree* nctemp207= p;
struct tree* nctemp209= sp;
int nctemp211=PtreeAddchild(nctemp207,nctemp209);
struct tree* nctemp216=ParseExprlist();
np =nctemp216;
int nctemp217 = (sp !=0);
if(nctemp217)
{
struct tree* nctemp222= sp;
struct tree* nctemp224= np;
int nctemp226=PtreeAddchild(nctemp222,nctemp224);
}
else{
struct nctempchar1 *nctemp230;
static struct nctempchar1 nctemp231 = {{ 13}, (char*)"Syntax error\0"};
nctemp230=&nctemp231;
nctempchar1* nctemp228= nctemp230;
int nctemp232=ParseError(nctemp228);
}
return 1;
}
return 1;
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
int nctemp235 = (lookahead ==44);
if(nctemp235)
{
int nctemp240= lookahead;
int nctemp242=ParseMatch(nctemp240);
struct nctempchar1 *nctemp249;
static struct nctempchar1 nctemp250 = {{ 11}, (char*)"identifier\0"};
nctemp249=&nctemp250;
nctempchar1* nctemp247= nctemp249;
nctempchar1* nctemp253=ScanGetext();
nctempchar1* nctemp251= nctemp253;
struct tree* nctemp254=ParseMknode(nctemp247,nctemp251);
sp =nctemp254;
struct tree* nctemp256= p;
struct tree* nctemp258= sp;
int nctemp260=PtreeAddchild(nctemp256,nctemp258);
int nctemp262= 1;
int nctemp264=ParseMatch(nctemp262);
struct tree* nctemp266= p;
int nctemp268=ParseIdseq(nctemp266);
}
else{
return 1;
}
return 1;
}
int ParseConstdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp275=ParseExpr();
np =nctemp275;
int nctemp276 = (np !=0);
if(nctemp276)
{
struct tree* nctemp281= p;
struct tree* nctemp283= np;
int nctemp285=PtreeAddchild(nctemp281,nctemp283);
}
return 1;
}
struct tree* ParseIdent ()
{
struct tree* np;
struct tree* sp;
int nctemp287 = (lookahead ==1);
if(nctemp287)
{
struct nctempchar1 *nctemp297;
static struct nctempchar1 nctemp298 = {{ 11}, (char*)"identifier\0"};
nctemp297=&nctemp298;
nctempchar1* nctemp295= nctemp297;
nctempchar1* nctemp301=ScanGetext();
nctempchar1* nctemp299= nctemp301;
struct tree* nctemp302=ParseMknode(nctemp295,nctemp299);
sp =nctemp302;
int nctemp304= 1;
int nctemp306=ParseMatch(nctemp304);
int nctemp307 = (lookahead ==91);
if(nctemp307)
{
int nctemp312= lookahead;
int nctemp314=ParseMatch(nctemp312);
struct tree* nctemp316= sp;
struct nctempchar1 *nctemp320;
static struct nctempchar1 nctemp321 = {{ 6}, (char*)"array\0"};
nctemp320=&nctemp321;
nctempchar1* nctemp318= nctemp320;
int nctemp322=PtreeSetarray(nctemp316,nctemp318);
struct tree* nctemp327=ParseExprlist();
np =nctemp327;
struct tree* nctemp329= sp;
struct tree* nctemp331= np;
int nctemp333=PtreeAddchild(nctemp329,nctemp331);
int nctemp335= 93;
int nctemp337=ParseMatch(nctemp335);
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
int nctemp355 = (lookahead ==7);
int nctemp360 = (lookahead ==9);
int nctemp352 = (nctemp355 || nctemp360);
int nctemp365 = (lookahead ==8);
int nctemp349 = (nctemp352 || nctemp365);
int nctemp370 = (lookahead ==431);
int nctemp346 = (nctemp349 || nctemp370);
int nctemp375 = (lookahead ==510);
int nctemp343 = (nctemp346 || nctemp375);
if(nctemp343)
{
struct nctempchar1 *nctemp385;
static struct nctempchar1 nctemp386 = {{ 5}, (char*)"type\0"};
nctemp385=&nctemp386;
nctempchar1* nctemp383= nctemp385;
nctempchar1* nctemp389=ScanGetext();
nctempchar1* nctemp387= nctemp389;
struct tree* nctemp390=ParseMknode(nctemp383,nctemp387);
np =nctemp390;
int nctemp392= lookahead;
int nctemp394=ParseMatch(nctemp392);
}
else{
int nctemp395 = (lookahead ==11);
if(nctemp395)
{
int nctemp400= lookahead;
int nctemp402=ParseMatch(nctemp400);
struct nctempchar1 *nctemp409;
static struct nctempchar1 nctemp410 = {{ 5}, (char*)"type\0"};
nctemp409=&nctemp410;
nctempchar1* nctemp407= nctemp409;
nctempchar1* nctemp413=ScanGetext();
nctempchar1* nctemp411= nctemp413;
struct tree* nctemp414=ParseMknode(nctemp407,nctemp411);
np =nctemp414;
struct tree* nctemp416= np;
struct nctempchar1 *nctemp420;
static struct nctempchar1 nctemp421 = {{ 7}, (char*)"struct\0"};
nctemp420=&nctemp421;
nctempchar1* nctemp418= nctemp420;
int nctemp422=PtreeSetstruct(nctemp416,nctemp418);
int nctemp424= 1;
int nctemp426=ParseMatch(nctemp424);
}
else{
np =0;
}
}
int nctemp431 = (lookahead ==91);
if(nctemp431)
{
int nctemp435 = (np ==0);
if(nctemp435)
{
struct nctempchar1 *nctemp442;
static struct nctempchar1 nctemp443 = {{ 13}, (char*)"Missing type\0"};
nctemp442=&nctemp443;
nctempchar1* nctemp440= nctemp442;
int nctemp444=ParseError(nctemp440);
}
int nctemp446= lookahead;
int nctemp448=ParseMatch(nctemp446);
struct tree* nctemp450= np;
struct nctempchar1 *nctemp454;
static struct nctempchar1 nctemp455 = {{ 6}, (char*)"array\0"};
nctemp454=&nctemp455;
nctempchar1* nctemp452= nctemp454;
int nctemp456=PtreeSetarray(nctemp450,nctemp452);
struct nctempchar1 *nctemp463;
static struct nctempchar1 nctemp464 = {{ 10}, (char*)"arrayargs\0"};
nctemp463=&nctemp464;
nctempchar1* nctemp461= nctemp463;
struct nctempchar1 *nctemp467;
static struct nctempchar1 nctemp468 = {{ 5}, (char*)"void\0"};
nctemp467=&nctemp468;
nctempchar1* nctemp465= nctemp467;
struct tree* nctemp469=ParseMknode(nctemp461,nctemp465);
sp =nctemp469;
struct tree* nctemp471= np;
struct tree* nctemp473= sp;
int nctemp475=PtreeAddchild(nctemp471,nctemp473);
struct tree* nctemp477= sp;
int nctemp479=ParseArrayarg(nctemp477);
int nctemp481= 93;
int nctemp483=ParseMatch(nctemp481);
}
return np;
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp485 = (lookahead ==1);
if(nctemp485)
{
struct nctempchar1 *nctemp495;
static struct nctempchar1 nctemp496 = {{ 11}, (char*)"identifier\0"};
nctemp495=&nctemp496;
nctempchar1* nctemp493= nctemp495;
nctempchar1* nctemp499=ScanGetext();
nctempchar1* nctemp497= nctemp499;
struct tree* nctemp500=ParseMknode(nctemp493,nctemp497);
sp =nctemp500;
int nctemp502= 1;
int nctemp504=ParseMatch(nctemp502);
int nctemp505 = (lookahead ==91);
if(nctemp505)
{
int nctemp510= lookahead;
int nctemp512=ParseMatch(nctemp510);
struct tree* nctemp514= sp;
struct nctempchar1 *nctemp518;
static struct nctempchar1 nctemp519 = {{ 6}, (char*)"array\0"};
nctemp518=&nctemp519;
nctempchar1* nctemp516= nctemp518;
int nctemp520=PtreeSetarray(nctemp514,nctemp516);
struct tree* nctemp525=ParseExprlist();
np =nctemp525;
struct tree* nctemp527= sp;
struct tree* nctemp529= np;
int nctemp531=PtreeAddchild(nctemp527,nctemp529);
int nctemp533= 93;
int nctemp535=ParseMatch(nctemp533);
int nctemp536 = (lookahead ==46);
if(nctemp536)
{
int nctemp541= 46;
int nctemp543=ParseMatch(nctemp541);
struct tree* nctemp548=ParseIdent();
np =nctemp548;
struct tree* nctemp550= sp;
struct tree* nctemp552= np;
int nctemp554=PtreeAddchild(nctemp550,nctemp552);
struct tree* nctemp556= np;
struct nctempchar1 *nctemp560;
static struct nctempchar1 nctemp561 = {{ 9}, (char*)"selector\0"};
nctemp560=&nctemp561;
nctempchar1* nctemp558= nctemp560;
int nctemp562=PtreeSetname(nctemp556,nctemp558);
}
}
else{
int nctemp563 = (lookahead ==40);
if(nctemp563)
{
int nctemp568= lookahead;
int nctemp570=ParseMatch(nctemp568);
struct tree* nctemp572= sp;
struct nctempchar1 *nctemp576;
static struct nctempchar1 nctemp577 = {{ 6}, (char*)"fcall\0"};
nctemp576=&nctemp577;
nctempchar1* nctemp574= nctemp576;
int nctemp578=PtreeSetname(nctemp572,nctemp574);
np =0;
int nctemp583 = (lookahead !=41);
if(nctemp583)
{
struct tree* nctemp591=ParseExprlist();
np =nctemp591;
}
int nctemp593= 41;
int nctemp595=ParseMatch(nctemp593);
int nctemp596 = (np !=0);
if(nctemp596)
{
struct tree* nctemp601= sp;
struct tree* nctemp603= np;
int nctemp605=PtreeAddchild(nctemp601,nctemp603);
}
}
else{
int nctemp606 = (lookahead ==46);
if(nctemp606)
{
int nctemp611= 46;
int nctemp613=ParseMatch(nctemp611);
struct tree* nctemp618=ParseIdent();
np =nctemp618;
struct tree* nctemp620= sp;
struct tree* nctemp622= np;
int nctemp624=PtreeAddchild(nctemp620,nctemp622);
struct tree* nctemp626= np;
struct nctempchar1 *nctemp630;
static struct nctempchar1 nctemp631 = {{ 9}, (char*)"selector\0"};
nctemp630=&nctemp631;
nctempchar1* nctemp628= nctemp630;
int nctemp632=PtreeSetname(nctemp626,nctemp628);
}
}
}
}
else{
int nctemp633 = (lookahead ==23);
if(nctemp633)
{
int nctemp638= lookahead;
int nctemp640=ParseMatch(nctemp638);
struct nctempchar1 *nctemp647;
static struct nctempchar1 nctemp648 = {{ 5}, (char*)"cast\0"};
nctemp647=&nctemp648;
nctempchar1* nctemp645= nctemp647;
struct nctempchar1 *nctemp651;
static struct nctempchar1 nctemp652 = {{ 5}, (char*)"void\0"};
nctemp651=&nctemp652;
nctempchar1* nctemp649= nctemp651;
struct tree* nctemp653=ParseMknode(nctemp645,nctemp649);
sp =nctemp653;
int nctemp655= 40;
int nctemp657=ParseMatch(nctemp655);
struct tree* nctemp662=ParseType();
np =nctemp662;
int nctemp663 = (np ==0);
if(nctemp663)
{
struct nctempchar1 *nctemp670;
static struct nctempchar1 nctemp671 = {{ 13}, (char*)"Syntax error\0"};
nctemp670=&nctemp671;
nctempchar1* nctemp668= nctemp670;
int nctemp672=ParseError(nctemp668);
}
else{
struct tree* nctemp674= sp;
struct tree* nctemp676= np;
int nctemp678=PtreeAddchild(nctemp674,nctemp676);
}
int nctemp680= 44;
int nctemp682=ParseMatch(nctemp680);
struct tree* nctemp687=ParseExpr();
np =nctemp687;
struct tree* nctemp689= sp;
struct tree* nctemp691= np;
int nctemp693=PtreeAddchild(nctemp689,nctemp691);
int nctemp695= 41;
int nctemp697=ParseMatch(nctemp695);
}
else{
int nctemp698 = (lookahead ==26);
if(nctemp698)
{
int nctemp703= lookahead;
int nctemp705=ParseMatch(nctemp703);
struct nctempchar1 *nctemp712;
static struct nctempchar1 nctemp713 = {{ 4}, (char*)"new\0"};
nctemp712=&nctemp713;
nctempchar1* nctemp710= nctemp712;
struct nctempchar1 *nctemp716;
static struct nctempchar1 nctemp717 = {{ 5}, (char*)"void\0"};
nctemp716=&nctemp717;
nctempchar1* nctemp714= nctemp716;
struct tree* nctemp718=ParseMknode(nctemp710,nctemp714);
sp =nctemp718;
int nctemp720= 40;
int nctemp722=ParseMatch(nctemp720);
struct tree* nctemp727=ParseType();
np =nctemp727;
int nctemp728 = (np ==0);
if(nctemp728)
{
struct nctempchar1 *nctemp735;
static struct nctempchar1 nctemp736 = {{ 13}, (char*)"Syntax error\0"};
nctemp735=&nctemp736;
nctempchar1* nctemp733= nctemp735;
int nctemp737=ParseError(nctemp733);
}
else{
struct tree* nctemp739= sp;
struct tree* nctemp741= np;
int nctemp743=PtreeAddchild(nctemp739,nctemp741);
}
int nctemp745= 41;
int nctemp747=ParseMatch(nctemp745);
}
else{
int nctemp748 = (lookahead ==50);
if(nctemp748)
{
int nctemp753= lookahead;
int nctemp755=ParseMatch(nctemp753);
struct nctempchar1 *nctemp762;
static struct nctempchar1 nctemp763 = {{ 7}, (char*)"delete\0"};
nctemp762=&nctemp763;
nctempchar1* nctemp760= nctemp762;
struct nctempchar1 *nctemp766;
static struct nctempchar1 nctemp767 = {{ 5}, (char*)"void\0"};
nctemp766=&nctemp767;
nctempchar1* nctemp764= nctemp766;
struct tree* nctemp768=ParseMknode(nctemp760,nctemp764);
sp =nctemp768;
int nctemp770= 40;
int nctemp772=ParseMatch(nctemp770);
struct tree* nctemp777=ParseExpr();
np =nctemp777;
int nctemp778 = (np ==0);
if(nctemp778)
{
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 13}, (char*)"Syntax error\0"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
int nctemp787=ParseError(nctemp783);
}
else{
struct tree* nctemp789= sp;
struct tree* nctemp791= np;
int nctemp793=PtreeAddchild(nctemp789,nctemp791);
}
int nctemp795= 41;
int nctemp797=ParseMatch(nctemp795);
}
else{
int nctemp798 = (lookahead ==25);
if(nctemp798)
{
int nctemp803= lookahead;
int nctemp805=ParseMatch(nctemp803);
struct nctempchar1 *nctemp812;
static struct nctempchar1 nctemp813 = {{ 6}, (char*)"cmplx\0"};
nctemp812=&nctemp813;
nctempchar1* nctemp810= nctemp812;
struct nctempchar1 *nctemp816;
static struct nctempchar1 nctemp817 = {{ 5}, (char*)"void\0"};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
struct tree* nctemp818=ParseMknode(nctemp810,nctemp814);
sp =nctemp818;
int nctemp820= 40;
int nctemp822=ParseMatch(nctemp820);
struct tree* nctemp827=ParseExprlist();
np =nctemp827;
int nctemp828 = (np ==0);
if(nctemp828)
{
struct nctempchar1 *nctemp835;
static struct nctempchar1 nctemp836 = {{ 13}, (char*)"Syntax error\0"};
nctemp835=&nctemp836;
nctempchar1* nctemp833= nctemp835;
int nctemp837=ParseError(nctemp833);
}
else{
struct tree* nctemp839= sp;
struct tree* nctemp841= np;
int nctemp843=PtreeAddchild(nctemp839,nctemp841);
}
int nctemp845= 41;
int nctemp847=ParseMatch(nctemp845);
}
else{
int nctemp848 = (lookahead ==28);
if(nctemp848)
{
int nctemp853= lookahead;
int nctemp855=ParseMatch(nctemp853);
struct nctempchar1 *nctemp862;
static struct nctempchar1 nctemp863 = {{ 3}, (char*)"re\0"};
nctemp862=&nctemp863;
nctempchar1* nctemp860= nctemp862;
struct nctempchar1 *nctemp866;
static struct nctempchar1 nctemp867 = {{ 5}, (char*)"void\0"};
nctemp866=&nctemp867;
nctempchar1* nctemp864= nctemp866;
struct tree* nctemp868=ParseMknode(nctemp860,nctemp864);
sp =nctemp868;
int nctemp870= 40;
int nctemp872=ParseMatch(nctemp870);
struct tree* nctemp877=ParseExpr();
np =nctemp877;
int nctemp878 = (np ==0);
if(nctemp878)
{
struct nctempchar1 *nctemp885;
static struct nctempchar1 nctemp886 = {{ 13}, (char*)"Syntax error\0"};
nctemp885=&nctemp886;
nctempchar1* nctemp883= nctemp885;
int nctemp887=ParseError(nctemp883);
}
else{
struct tree* nctemp889= sp;
struct tree* nctemp891= np;
int nctemp893=PtreeAddchild(nctemp889,nctemp891);
}
int nctemp895= 41;
int nctemp897=ParseMatch(nctemp895);
}
else{
int nctemp898 = (lookahead ==27);
if(nctemp898)
{
int nctemp903= lookahead;
int nctemp905=ParseMatch(nctemp903);
struct nctempchar1 *nctemp912;
static struct nctempchar1 nctemp913 = {{ 3}, (char*)"im\0"};
nctemp912=&nctemp913;
nctempchar1* nctemp910= nctemp912;
struct nctempchar1 *nctemp916;
static struct nctempchar1 nctemp917 = {{ 5}, (char*)"void\0"};
nctemp916=&nctemp917;
nctempchar1* nctemp914= nctemp916;
struct tree* nctemp918=ParseMknode(nctemp910,nctemp914);
sp =nctemp918;
int nctemp920= 40;
int nctemp922=ParseMatch(nctemp920);
struct tree* nctemp927=ParseExpr();
np =nctemp927;
int nctemp928 = (np ==0);
if(nctemp928)
{
struct nctempchar1 *nctemp935;
static struct nctempchar1 nctemp936 = {{ 13}, (char*)"Syntax error\0"};
nctemp935=&nctemp936;
nctempchar1* nctemp933= nctemp935;
int nctemp937=ParseError(nctemp933);
}
else{
struct tree* nctemp939= sp;
struct tree* nctemp941= np;
int nctemp943=PtreeAddchild(nctemp939,nctemp941);
}
int nctemp945= 41;
int nctemp947=ParseMatch(nctemp945);
}
else{
int nctemp948 = (lookahead ==29);
if(nctemp948)
{
int nctemp953= lookahead;
int nctemp955=ParseMatch(nctemp953);
struct nctempchar1 *nctemp962;
static struct nctempchar1 nctemp963 = {{ 4}, (char*)"len\0"};
nctemp962=&nctemp963;
nctempchar1* nctemp960= nctemp962;
struct nctempchar1 *nctemp966;
static struct nctempchar1 nctemp967 = {{ 5}, (char*)"void\0"};
nctemp966=&nctemp967;
nctempchar1* nctemp964= nctemp966;
struct tree* nctemp968=ParseMknode(nctemp960,nctemp964);
sp =nctemp968;
int nctemp970= 40;
int nctemp972=ParseMatch(nctemp970);
struct tree* nctemp977=ParseExpr();
np =nctemp977;
int nctemp978 = (np ==0);
if(nctemp978)
{
struct nctempchar1 *nctemp985;
static struct nctempchar1 nctemp986 = {{ 13}, (char*)"Syntax error\0"};
nctemp985=&nctemp986;
nctempchar1* nctemp983= nctemp985;
int nctemp987=ParseError(nctemp983);
}
else{
struct tree* nctemp989= sp;
struct tree* nctemp991= np;
int nctemp993=PtreeAddchild(nctemp989,nctemp991);
}
int nctemp995= 44;
int nctemp997=ParseMatch(nctemp995);
struct tree* nctemp1002=ParseExpr();
rp =nctemp1002;
int nctemp1003 = (rp ==0);
if(nctemp1003)
{
struct nctempchar1 *nctemp1010;
static struct nctempchar1 nctemp1011 = {{ 13}, (char*)"Syntax error\0"};
nctemp1010=&nctemp1011;
nctempchar1* nctemp1008= nctemp1010;
int nctemp1012=ParseError(nctemp1008);
}
else{
struct tree* nctemp1014= np;
struct tree* nctemp1016= rp;
int nctemp1018=PtreeAddsister(nctemp1014,nctemp1016);
}
int nctemp1020= 41;
int nctemp1022=ParseMatch(nctemp1020);
}
else{
int nctemp1023 = (lookahead ==17);
if(nctemp1023)
{
struct nctempchar1 *nctemp1033;
static struct nctempchar1 nctemp1034 = {{ 10}, (char*)"iconstant\0"};
nctemp1033=&nctemp1034;
nctempchar1* nctemp1031= nctemp1033;
nctempchar1* nctemp1037=ScanGetext();
nctempchar1* nctemp1035= nctemp1037;
struct tree* nctemp1038=ParseMknode(nctemp1031,nctemp1035);
sp =nctemp1038;
int nctemp1040= 17;
int nctemp1042=ParseMatch(nctemp1040);
}
else{
int nctemp1043 = (lookahead ==24);
if(nctemp1043)
{
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 10}, (char*)"rconstant\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
nctempchar1* nctemp1057=ScanGetext();
nctempchar1* nctemp1055= nctemp1057;
struct tree* nctemp1058=ParseMknode(nctemp1051,nctemp1055);
sp =nctemp1058;
int nctemp1060= 24;
int nctemp1062=ParseMatch(nctemp1060);
}
else{
int nctemp1063 = (lookahead ==18);
if(nctemp1063)
{
struct nctempchar1 *nctemp1073;
static struct nctempchar1 nctemp1074 = {{ 10}, (char*)"sconstant\0"};
nctemp1073=&nctemp1074;
nctempchar1* nctemp1071= nctemp1073;
nctempchar1* nctemp1077=ScanGetext();
nctempchar1* nctemp1075= nctemp1077;
struct tree* nctemp1078=ParseMknode(nctemp1071,nctemp1075);
sp =nctemp1078;
int nctemp1080= 18;
int nctemp1082=ParseMatch(nctemp1080);
}
else{
int nctemp1083 = (lookahead ==40);
if(nctemp1083)
{
int nctemp1088= 40;
int nctemp1090=ParseMatch(nctemp1088);
struct tree* nctemp1095= p;
struct tree* nctemp1097=ParseAsgexpr(nctemp1095);
sp =nctemp1097;
int nctemp1099= 41;
int nctemp1101=ParseMatch(nctemp1099);
}
else{
struct nctempchar1 *nctemp1105;
static struct nctempchar1 nctemp1106 = {{ 13}, (char*)"Syntax error\0"};
nctemp1105=&nctemp1106;
nctempchar1* nctemp1103= nctemp1105;
int nctemp1107=ParseError(nctemp1103);
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
int nctemp1109 = (lookahead ==45);
if(nctemp1109)
{
struct nctempchar1 *nctemp1119;
static struct nctempchar1 nctemp1120 = {{ 7}, (char*)"unexpr\0"};
nctemp1119=&nctemp1120;
nctempchar1* nctemp1117= nctemp1119;
nctempchar1* nctemp1123=ScanGetext();
nctempchar1* nctemp1121= nctemp1123;
struct tree* nctemp1124=ParseMknode(nctemp1117,nctemp1121);
sp =nctemp1124;
int nctemp1126= lookahead;
int nctemp1128=ParseMatch(nctemp1126);
struct tree* nctemp1133= p;
struct tree* nctemp1135=ParseUnexpr(nctemp1133);
np =nctemp1135;
struct tree* nctemp1137= sp;
struct tree* nctemp1139= np;
int nctemp1141=PtreeAddchild(nctemp1137,nctemp1139);
}
else{
struct tree* nctemp1146= p;
struct tree* nctemp1148=ParsePrimexpr(nctemp1146);
sp =nctemp1148;
}
return sp;
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1153 = (lookahead ==42);
int nctemp1158 = (lookahead ==47);
int nctemp1150 = (nctemp1153 || nctemp1158);
if(nctemp1150)
{
struct nctempchar1 *nctemp1168;
static struct nctempchar1 nctemp1169 = {{ 8}, (char*)"binexpr\0"};
nctemp1168=&nctemp1169;
nctempchar1* nctemp1166= nctemp1168;
nctempchar1* nctemp1172=ScanGetext();
nctempchar1* nctemp1170= nctemp1172;
struct tree* nctemp1173=ParseMknode(nctemp1166,nctemp1170);
np =nctemp1173;
int nctemp1175= lookahead;
int nctemp1177=ParseMatch(nctemp1175);
struct tree* nctemp1179= np;
struct tree* nctemp1181= p;
int nctemp1183=PtreeAddchild(nctemp1179,nctemp1181);
struct tree* nctemp1188= np;
struct tree* nctemp1190=ParseUnexpr(nctemp1188);
rp =nctemp1190;
struct tree* nctemp1192= np;
struct tree* nctemp1194= rp;
int nctemp1196=PtreeAddchild(nctemp1192,nctemp1194);
struct tree* nctemp1201= np;
struct tree* nctemp1203=ParseMultexprseq(nctemp1201);
sp =nctemp1203;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1213= p;
struct tree* nctemp1215=ParseUnexpr(nctemp1213);
np =nctemp1215;
struct tree* nctemp1220= np;
struct tree* nctemp1222=ParseMultexprseq(nctemp1220);
np =nctemp1222;
return np;
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1227 = (lookahead ==43);
int nctemp1232 = (lookahead ==45);
int nctemp1224 = (nctemp1227 || nctemp1232);
if(nctemp1224)
{
struct nctempchar1 *nctemp1242;
static struct nctempchar1 nctemp1243 = {{ 8}, (char*)"binexpr\0"};
nctemp1242=&nctemp1243;
nctempchar1* nctemp1240= nctemp1242;
nctempchar1* nctemp1246=ScanGetext();
nctempchar1* nctemp1244= nctemp1246;
struct tree* nctemp1247=ParseMknode(nctemp1240,nctemp1244);
np =nctemp1247;
int nctemp1249= lookahead;
int nctemp1251=ParseMatch(nctemp1249);
struct tree* nctemp1253= np;
struct tree* nctemp1255= p;
int nctemp1257=PtreeAddchild(nctemp1253,nctemp1255);
struct tree* nctemp1262= np;
struct tree* nctemp1264=ParseMultexpr(nctemp1262);
rp =nctemp1264;
struct tree* nctemp1266= np;
struct tree* nctemp1268= rp;
int nctemp1270=PtreeAddchild(nctemp1266,nctemp1268);
struct tree* nctemp1275= np;
struct tree* nctemp1277=ParseAddexprseq(nctemp1275);
sp =nctemp1277;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1287= p;
struct tree* nctemp1289=ParseMultexpr(nctemp1287);
np =nctemp1289;
struct tree* nctemp1294= np;
struct tree* nctemp1296=ParseAddexprseq(nctemp1294);
np =nctemp1296;
return np;
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1319 = (lookahead ==60);
int nctemp1324 = (lookahead ==62);
int nctemp1316 = (nctemp1319 || nctemp1324);
int nctemp1329 = (lookahead ==21);
int nctemp1313 = (nctemp1316 || nctemp1329);
int nctemp1334 = (lookahead ==3);
int nctemp1310 = (nctemp1313 || nctemp1334);
int nctemp1339 = (lookahead ==4);
int nctemp1307 = (nctemp1310 || nctemp1339);
int nctemp1344 = (lookahead ==5);
int nctemp1304 = (nctemp1307 || nctemp1344);
int nctemp1349 = (lookahead ==6);
int nctemp1301 = (nctemp1304 || nctemp1349);
int nctemp1354 = (lookahead ==20);
int nctemp1298 = (nctemp1301 || nctemp1354);
if(nctemp1298)
{
struct nctempchar1 *nctemp1364;
static struct nctempchar1 nctemp1365 = {{ 8}, (char*)"binexpr\0"};
nctemp1364=&nctemp1365;
nctempchar1* nctemp1362= nctemp1364;
nctempchar1* nctemp1368=ScanGetext();
nctempchar1* nctemp1366= nctemp1368;
struct tree* nctemp1369=ParseMknode(nctemp1362,nctemp1366);
np =nctemp1369;
int nctemp1371= lookahead;
int nctemp1373=ParseMatch(nctemp1371);
struct tree* nctemp1375= np;
struct tree* nctemp1377= p;
int nctemp1379=PtreeAddchild(nctemp1375,nctemp1377);
struct tree* nctemp1384= np;
struct tree* nctemp1386=ParseAddexpr(nctemp1384);
rp =nctemp1386;
struct tree* nctemp1388= np;
struct tree* nctemp1390= rp;
int nctemp1392=PtreeAddchild(nctemp1388,nctemp1390);
struct tree* nctemp1397= np;
struct tree* nctemp1399=ParseRelexprseq(nctemp1397);
sp =nctemp1399;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1409= p;
struct tree* nctemp1411=ParseAddexpr(nctemp1409);
np =nctemp1411;
struct tree* nctemp1416= np;
struct tree* nctemp1418=ParseRelexprseq(nctemp1416);
np =nctemp1418;
return np;
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1420 = (lookahead ==61);
if(nctemp1420)
{
struct nctempchar1 *nctemp1430;
static struct nctempchar1 nctemp1431 = {{ 8}, (char*)"binexpr\0"};
nctemp1430=&nctemp1431;
nctempchar1* nctemp1428= nctemp1430;
nctempchar1* nctemp1434=ScanGetext();
nctempchar1* nctemp1432= nctemp1434;
struct tree* nctemp1435=ParseMknode(nctemp1428,nctemp1432);
np =nctemp1435;
int nctemp1437= lookahead;
int nctemp1439=ParseMatch(nctemp1437);
struct tree* nctemp1441= np;
struct tree* nctemp1443= p;
int nctemp1445=PtreeAddchild(nctemp1441,nctemp1443);
struct tree* nctemp1450= np;
struct tree* nctemp1452=ParseRelexpr(nctemp1450);
rp =nctemp1452;
struct tree* nctemp1457= rp;
struct tree* nctemp1459=ParseAsgexprseq(nctemp1457);
sp =nctemp1459;
struct tree* nctemp1461= np;
struct tree* nctemp1463= sp;
int nctemp1465=PtreeAddchild(nctemp1461,nctemp1463);
}
else{
np =p;
}
return np;
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1475= p;
struct tree* nctemp1477=ParseRelexpr(nctemp1475);
np =nctemp1477;
struct tree* nctemp1482= np;
struct tree* nctemp1484=ParseAsgexprseq(nctemp1482);
np =nctemp1484;
return np;
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
rp =0;
struct tree* nctemp1494= rp;
struct tree* nctemp1496=ParseAsgexpr(nctemp1494);
np =nctemp1496;
int nctemp1497 = (np !=0);
if(nctemp1497)
{
struct nctempchar1 *nctemp1507;
static struct nctempchar1 nctemp1508 = {{ 5}, (char*)"expr\0"};
nctemp1507=&nctemp1508;
nctempchar1* nctemp1505= nctemp1507;
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 5}, (char*)"void\0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
struct tree* nctemp1513=ParseMknode(nctemp1505,nctemp1509);
sp =nctemp1513;
struct tree* nctemp1515= sp;
struct tree* nctemp1517= np;
int nctemp1519=PtreeAddchild(nctemp1515,nctemp1517);
np =sp;
}
return np;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp1529=ParseType();
np =nctemp1529;
int nctemp1530 = (np ==0);
if(nctemp1530)
{
return np;
}
int nctemp1535 = (lookahead ==1);
if(nctemp1535)
{
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 11}, (char*)"identifier\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
nctempchar1* nctemp1549=ScanGetext();
nctempchar1* nctemp1547= nctemp1549;
struct tree* nctemp1550=ParseMknode(nctemp1543,nctemp1547);
mp =nctemp1550;
struct tree* nctemp1552= np;
struct tree* nctemp1554= mp;
int nctemp1556=PtreeAddchild(nctemp1552,nctemp1554);
int nctemp1558= lookahead;
int nctemp1560=ParseMatch(nctemp1558);
int nctemp1561 = (lookahead ==44);
if(nctemp1561)
{
struct tree* nctemp1566= np;
int nctemp1568=ParseIdseq(nctemp1566);
}
else{
int nctemp1569 = (lookahead ==61);
if(nctemp1569)
{
int nctemp1574= lookahead;
int nctemp1576=ParseMatch(nctemp1574);
struct tree* nctemp1578= mp;
int nctemp1580=ParseConstdecl(nctemp1578);
}
}
int nctemp1581 = (lookahead ==59);
if(nctemp1581)
{
int nctemp1586= 59;
int nctemp1588=ParseMatch(nctemp1586);
}
int nctemp1590= 10;
int nctemp1592=ParseMatch(nctemp1590);
}
else{
struct nctempchar1 *nctemp1596;
static struct nctempchar1 nctemp1597 = {{ 35}, (char*)"Missing variable in type statement\0"};
nctemp1596=&nctemp1597;
nctempchar1* nctemp1594= nctemp1596;
int nctemp1598=ParseError(nctemp1594);
}
return np;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1604=ParseDeclaration();
np =nctemp1604;
int nctemp1605 = (np !=0);
if(nctemp1605)
{
struct nctempchar1 *nctemp1615;
static struct nctempchar1 nctemp1616 = {{ 13}, (char*)"declarations\0"};
nctemp1615=&nctemp1616;
nctempchar1* nctemp1613= nctemp1615;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 5}, (char*)"void\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
struct tree* nctemp1621=ParseMknode(nctemp1613,nctemp1617);
sp =nctemp1621;
struct tree* nctemp1623= sp;
struct tree* nctemp1625= np;
int nctemp1627=PtreeAddchild(nctemp1623,nctemp1625);
}
else{
np =0;
return np;
}
struct tree* nctemp1639=ParseDeclaration();
np =nctemp1639;
int nctemp1632 = (np !=0);
int nctemp1641=nctemp1632;
while(nctemp1641)
{{
struct tree* nctemp1643= sp;
struct tree* nctemp1645= np;
int nctemp1647=PtreeAddchild(nctemp1643,nctemp1645);
}
struct tree* nctemp1655=ParseDeclaration();
np =nctemp1655;
int nctemp1648 = (np !=0);
nctemp1641=nctemp1648;}return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1658 = (lookahead ==44);
if(nctemp1658)
{
int nctemp1663= lookahead;
int nctemp1665=ParseMatch(nctemp1663);
struct tree* nctemp1673=ParseType();
np =nctemp1673;
int nctemp1666 = (np !=0);
if(nctemp1666)
{
struct tree* nctemp1676= p;
struct tree* nctemp1678= np;
int nctemp1680=PtreeAddchild(nctemp1676,nctemp1678);
int nctemp1681 = (lookahead ==1);
if(nctemp1681)
{
struct nctempchar1 *nctemp1691;
static struct nctempchar1 nctemp1692 = {{ 11}, (char*)"identifier\0"};
nctemp1691=&nctemp1692;
nctempchar1* nctemp1689= nctemp1691;
nctempchar1* nctemp1695=ScanGetext();
nctempchar1* nctemp1693= nctemp1695;
struct tree* nctemp1696=ParseMknode(nctemp1689,nctemp1693);
sp =nctemp1696;
struct tree* nctemp1698= np;
struct tree* nctemp1700= sp;
int nctemp1702=PtreeAddchild(nctemp1698,nctemp1700);
int nctemp1704= 1;
int nctemp1706=ParseMatch(nctemp1704);
}
struct tree* nctemp1708= p;
int nctemp1710=ParseArgseq(nctemp1708);
}
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp1719=ParseType();
np =nctemp1719;
int nctemp1712 = (np !=0);
if(nctemp1712)
{
struct nctempchar1 *nctemp1727;
static struct nctempchar1 nctemp1728 = {{ 8}, (char*)"arglist\0"};
nctemp1727=&nctemp1728;
nctempchar1* nctemp1725= nctemp1727;
struct nctempchar1 *nctemp1731;
static struct nctempchar1 nctemp1732 = {{ 5}, (char*)"void\0"};
nctemp1731=&nctemp1732;
nctempchar1* nctemp1729= nctemp1731;
struct tree* nctemp1733=ParseMknode(nctemp1725,nctemp1729);
sp =nctemp1733;
struct tree* nctemp1735= sp;
struct tree* nctemp1737= np;
int nctemp1739=PtreeAddchild(nctemp1735,nctemp1737);
int nctemp1740 = (lookahead ==1);
if(nctemp1740)
{
struct nctempchar1 *nctemp1750;
static struct nctempchar1 nctemp1751 = {{ 11}, (char*)"identifier\0"};
nctemp1750=&nctemp1751;
nctempchar1* nctemp1748= nctemp1750;
nctempchar1* nctemp1754=ScanGetext();
nctempchar1* nctemp1752= nctemp1754;
struct tree* nctemp1755=ParseMknode(nctemp1748,nctemp1752);
mp =nctemp1755;
struct tree* nctemp1757= np;
struct tree* nctemp1759= mp;
int nctemp1761=PtreeAddchild(nctemp1757,nctemp1759);
int nctemp1763= 1;
int nctemp1765=ParseMatch(nctemp1763);
}
struct tree* nctemp1767= sp;
int nctemp1769=ParseArgseq(nctemp1767);
}
else{
sp =0;
}
return sp;
}
int ParseStructdeclar (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct nctempchar1 *nctemp1781;
static struct nctempchar1 nctemp1782 = {{ 10}, (char*)"structdec\0"};
nctemp1781=&nctemp1782;
nctempchar1* nctemp1779= nctemp1781;
struct nctempchar1 *nctemp1785;
static struct nctempchar1 nctemp1786 = {{ 5}, (char*)"void\0"};
nctemp1785=&nctemp1786;
nctempchar1* nctemp1783= nctemp1785;
struct tree* nctemp1787=ParseMknode(nctemp1779,nctemp1783);
np =nctemp1787;
struct tree* nctemp1789= p;
struct tree* nctemp1791= np;
int nctemp1793=PtreeAddchild(nctemp1789,nctemp1791);
struct tree* nctemp1798=ParseDeclarations();
sp =nctemp1798;
struct tree* nctemp1800= np;
struct tree* nctemp1802= sp;
int nctemp1804=PtreeAddchild(nctemp1800,nctemp1802);
int nctemp1806= 601;
int nctemp1808=ParseMatch(nctemp1806);
return 1;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1810 = (lookahead ==12);
if(nctemp1810)
{
struct nctempchar1 *nctemp1820;
static struct nctempchar1 nctemp1821 = {{ 6}, (char*)"while\0"};
nctemp1820=&nctemp1821;
nctempchar1* nctemp1818= nctemp1820;
struct nctempchar1 *nctemp1824;
static struct nctempchar1 nctemp1825 = {{ 5}, (char*)"void\0"};
nctemp1824=&nctemp1825;
nctempchar1* nctemp1822= nctemp1824;
struct tree* nctemp1826=ParseMknode(nctemp1818,nctemp1822);
np =nctemp1826;
int nctemp1828= 12;
int nctemp1830=ParseMatch(nctemp1828);
int nctemp1832= 40;
int nctemp1834=ParseMatch(nctemp1832);
struct tree* nctemp1842=ParseExpr();
sp =nctemp1842;
int nctemp1835 = (sp !=0);
if(nctemp1835)
{
struct tree* nctemp1845= np;
struct tree* nctemp1847= sp;
int nctemp1849=PtreeAddchild(nctemp1845,nctemp1847);
}
int nctemp1851= 41;
int nctemp1853=ParseMatch(nctemp1851);
struct tree* nctemp1858=ParseStmnt();
sp =nctemp1858;
struct tree* nctemp1860= np;
struct tree* nctemp1862= sp;
int nctemp1864=PtreeAddchild(nctemp1860,nctemp1862);
sp =np;
}
else{
sp =0;
}
return sp;
}
struct tree* ParseReturnstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1874 = (lookahead ==30);
if(nctemp1874)
{
struct nctempchar1 *nctemp1884;
static struct nctempchar1 nctemp1885 = {{ 7}, (char*)"return\0"};
nctemp1884=&nctemp1885;
nctempchar1* nctemp1882= nctemp1884;
struct nctempchar1 *nctemp1888;
static struct nctempchar1 nctemp1889 = {{ 5}, (char*)"void\0"};
nctemp1888=&nctemp1889;
nctempchar1* nctemp1886= nctemp1888;
struct tree* nctemp1890=ParseMknode(nctemp1882,nctemp1886);
np =nctemp1890;
int nctemp1892= 30;
int nctemp1894=ParseMatch(nctemp1892);
struct tree* nctemp1902=ParseExpr();
sp =nctemp1902;
int nctemp1895 = (sp !=0);
if(nctemp1895)
{
struct tree* nctemp1905= np;
struct tree* nctemp1907= sp;
int nctemp1909=PtreeAddchild(nctemp1905,nctemp1907);
sp =np;
int nctemp1914 = (lookahead ==59);
if(nctemp1914)
{
int nctemp1919= 59;
int nctemp1921=ParseMatch(nctemp1919);
}
int nctemp1923= 10;
int nctemp1925=ParseMatch(nctemp1923);
}
}
else{
sp =0;
}
return sp;
}
struct tree* ParseForstmntc (struct tree* np)
{
struct tree* sp;
struct tree* rp;
int nctemp1932= 40;
int nctemp1934=ParseMatch(nctemp1932);
struct tree* nctemp1942=ParseExpr();
sp =nctemp1942;
int nctemp1935 = (sp !=0);
if(nctemp1935)
{
struct tree* nctemp1945= np;
struct tree* nctemp1947= sp;
int nctemp1949=PtreeAddchild(nctemp1945,nctemp1947);
int nctemp1951= 59;
int nctemp1953=ParseMatch(nctemp1951);
struct tree* nctemp1961=ParseExpr();
rp =nctemp1961;
int nctemp1954 = (rp !=0);
if(nctemp1954)
{
struct tree* nctemp1964= sp;
struct tree* nctemp1966= rp;
int nctemp1968=PtreeAddsister(nctemp1964,nctemp1966);
}
int nctemp1970= 59;
int nctemp1972=ParseMatch(nctemp1970);
struct tree* nctemp1980=ParseExpr();
rp =nctemp1980;
int nctemp1973 = (rp !=0);
if(nctemp1973)
{
struct tree* nctemp1983= sp;
struct tree* nctemp1985= rp;
int nctemp1987=PtreeAddsister(nctemp1983,nctemp1985);
}
int nctemp1989= 41;
int nctemp1991=ParseMatch(nctemp1989);
struct tree* nctemp1996=ParseStmnt();
sp =nctemp1996;
struct tree* nctemp1998= np;
struct tree* nctemp2000= sp;
int nctemp2002=PtreeAddchild(nctemp1998,nctemp2000);
sp =np;
}
else{
sp =0;
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
sp =0;
int nctemp2016 = (lookahead ==1);
if(nctemp2016)
{
struct nctempchar1 *nctemp2026;
static struct nctempchar1 nctemp2027 = {{ 5}, (char*)"expr\0"};
nctemp2026=&nctemp2027;
nctempchar1* nctemp2024= nctemp2026;
struct nctempchar1 *nctemp2030;
static struct nctempchar1 nctemp2031 = {{ 5}, (char*)"void\0"};
nctemp2030=&nctemp2031;
nctempchar1* nctemp2028= nctemp2030;
struct tree* nctemp2032=PtreeMknode(nctemp2024,nctemp2028);
sp =nctemp2032;
struct tree* nctemp2034= np;
struct tree* nctemp2036= sp;
int nctemp2038=PtreeAddchild(nctemp2034,nctemp2036);
struct nctempchar1 *nctemp2045;
static struct nctempchar1 nctemp2046 = {{ 8}, (char*)"binexpr\0"};
nctemp2045=&nctemp2046;
nctempchar1* nctemp2043= nctemp2045;
struct nctempchar1 *nctemp2049;
static struct nctempchar1 nctemp2050 = {{ 2}, (char*)"=\0"};
nctemp2049=&nctemp2050;
nctempchar1* nctemp2047= nctemp2049;
struct tree* nctemp2051=PtreeMknode(nctemp2043,nctemp2047);
rp =nctemp2051;
struct tree* nctemp2053= sp;
struct tree* nctemp2055= rp;
int nctemp2057=PtreeAddchild(nctemp2053,nctemp2055);
nctempchar1* nctemp2065=ScanGetext();
nctempchar1* nctemp2063= nctemp2065;
nctempchar1* nctemp2066=LibeStrsave(nctemp2063);
id=nctemp2066;
struct nctempchar1 *nctemp2073;
static struct nctempchar1 nctemp2074 = {{ 11}, (char*)"identifier\0"};
nctemp2073=&nctemp2074;
nctempchar1* nctemp2071= nctemp2073;
nctempchar1* nctemp2077=ScanGetext();
nctempchar1* nctemp2075= nctemp2077;
struct tree* nctemp2078=PtreeMknode(nctemp2071,nctemp2075);
tp =nctemp2078;
struct tree* nctemp2080= rp;
struct tree* nctemp2082= tp;
int nctemp2084=PtreeAddchild(nctemp2080,nctemp2082);
int nctemp2086= 1;
int nctemp2088=ParseMatch(nctemp2086);
int nctemp2090= 702;
int nctemp2092=ParseMatch(nctemp2090);
int nctemp2094= 703;
int nctemp2096=ParseMatch(nctemp2094);
int nctemp2098= 40;
int nctemp2100=ParseMatch(nctemp2098);
struct tree* nctemp2105=ParseExpr();
qp =nctemp2105;
struct tree* nctemp2110= qp;
struct tree* nctemp2112=PtreeMvchild(nctemp2110);
qp =nctemp2112;
struct tree* nctemp2114= tp;
struct tree* nctemp2116= qp;
int nctemp2118=PtreeAddsister(nctemp2114,nctemp2116);
int nctemp2120= 44;
int nctemp2122=ParseMatch(nctemp2120);
struct tree* nctemp2127=ParseExpr();
mp =nctemp2127;
struct tree* nctemp2132= mp;
struct tree* nctemp2134=PtreeMvchild(nctemp2132);
mp =nctemp2134;
struct nctempchar1 *nctemp2141;
static struct nctempchar1 nctemp2142 = {{ 5}, (char*)"expr\0"};
nctemp2141=&nctemp2142;
nctempchar1* nctemp2139= nctemp2141;
struct nctempchar1 *nctemp2145;
static struct nctempchar1 nctemp2146 = {{ 5}, (char*)"void\0"};
nctemp2145=&nctemp2146;
nctempchar1* nctemp2143= nctemp2145;
struct tree* nctemp2147=PtreeMknode(nctemp2139,nctemp2143);
ap =nctemp2147;
struct tree* nctemp2149= sp;
struct tree* nctemp2151= ap;
int nctemp2153=PtreeAddsister(nctemp2149,nctemp2151);
struct nctempchar1 *nctemp2160;
static struct nctempchar1 nctemp2161 = {{ 8}, (char*)"binexpr\0"};
nctemp2160=&nctemp2161;
nctempchar1* nctemp2158= nctemp2160;
struct nctempchar1 *nctemp2164;
static struct nctempchar1 nctemp2165 = {{ 2}, (char*)"<\0"};
nctemp2164=&nctemp2165;
nctempchar1* nctemp2162= nctemp2164;
struct tree* nctemp2166=PtreeMknode(nctemp2158,nctemp2162);
bp =nctemp2166;
struct tree* nctemp2168= ap;
struct tree* nctemp2170= bp;
int nctemp2172=PtreeAddchild(nctemp2168,nctemp2170);
struct nctempchar1 *nctemp2179;
static struct nctempchar1 nctemp2180 = {{ 11}, (char*)"identifier\0"};
nctemp2179=&nctemp2180;
nctempchar1* nctemp2177= nctemp2179;
nctempchar1* nctemp2181= id;
struct tree* nctemp2184=PtreeMknode(nctemp2177,nctemp2181);
cp =nctemp2184;
struct tree* nctemp2186= bp;
struct tree* nctemp2188= cp;
int nctemp2190=PtreeAddchild(nctemp2186,nctemp2188);
struct tree* nctemp2192= cp;
struct tree* nctemp2194= mp;
int nctemp2196=PtreeAddsister(nctemp2192,nctemp2194);
struct nctempchar1 *nctemp2203;
static struct nctempchar1 nctemp2204 = {{ 5}, (char*)"expr\0"};
nctemp2203=&nctemp2204;
nctempchar1* nctemp2201= nctemp2203;
struct nctempchar1 *nctemp2207;
static struct nctempchar1 nctemp2208 = {{ 5}, (char*)"void\0"};
nctemp2207=&nctemp2208;
nctempchar1* nctemp2205= nctemp2207;
struct tree* nctemp2209=PtreeMknode(nctemp2201,nctemp2205);
dp =nctemp2209;
struct tree* nctemp2211= sp;
struct tree* nctemp2213= dp;
int nctemp2215=PtreeAddsister(nctemp2211,nctemp2213);
struct nctempchar1 *nctemp2222;
static struct nctempchar1 nctemp2223 = {{ 8}, (char*)"binexpr\0"};
nctemp2222=&nctemp2223;
nctempchar1* nctemp2220= nctemp2222;
struct nctempchar1 *nctemp2226;
static struct nctempchar1 nctemp2227 = {{ 2}, (char*)"=\0"};
nctemp2226=&nctemp2227;
nctempchar1* nctemp2224= nctemp2226;
struct tree* nctemp2228=PtreeMknode(nctemp2220,nctemp2224);
ep =nctemp2228;
struct tree* nctemp2230= dp;
struct tree* nctemp2232= ep;
int nctemp2234=PtreeAddchild(nctemp2230,nctemp2232);
struct nctempchar1 *nctemp2241;
static struct nctempchar1 nctemp2242 = {{ 11}, (char*)"identifier\0"};
nctemp2241=&nctemp2242;
nctempchar1* nctemp2239= nctemp2241;
nctempchar1* nctemp2243= id;
struct tree* nctemp2246=PtreeMknode(nctemp2239,nctemp2243);
fp =nctemp2246;
struct tree* nctemp2248= ep;
struct tree* nctemp2250= fp;
int nctemp2252=PtreeAddchild(nctemp2248,nctemp2250);
struct nctempchar1 *nctemp2259;
static struct nctempchar1 nctemp2260 = {{ 8}, (char*)"binexpr\0"};
nctemp2259=&nctemp2260;
nctempchar1* nctemp2257= nctemp2259;
struct nctempchar1 *nctemp2263;
static struct nctempchar1 nctemp2264 = {{ 2}, (char*)"+\0"};
nctemp2263=&nctemp2264;
nctempchar1* nctemp2261= nctemp2263;
struct tree* nctemp2265=PtreeMknode(nctemp2257,nctemp2261);
gp =nctemp2265;
struct tree* nctemp2267= fp;
struct tree* nctemp2269= gp;
int nctemp2271=PtreeAddsister(nctemp2267,nctemp2269);
struct nctempchar1 *nctemp2278;
static struct nctempchar1 nctemp2279 = {{ 11}, (char*)"identifier\0"};
nctemp2278=&nctemp2279;
nctempchar1* nctemp2276= nctemp2278;
nctempchar1* nctemp2280= id;
struct tree* nctemp2283=PtreeMknode(nctemp2276,nctemp2280);
hp =nctemp2283;
struct tree* nctemp2285= gp;
struct tree* nctemp2287= hp;
int nctemp2289=PtreeAddchild(nctemp2285,nctemp2287);
struct nctempchar1 *nctemp2296;
static struct nctempchar1 nctemp2297 = {{ 10}, (char*)"iconstant\0"};
nctemp2296=&nctemp2297;
nctempchar1* nctemp2294= nctemp2296;
struct nctempchar1 *nctemp2300;
static struct nctempchar1 nctemp2301 = {{ 2}, (char*)"1\0"};
nctemp2300=&nctemp2301;
nctempchar1* nctemp2298= nctemp2300;
struct tree* nctemp2302=PtreeMknode(nctemp2294,nctemp2298);
ip =nctemp2302;
struct tree* nctemp2304= hp;
struct tree* nctemp2306= ip;
int nctemp2308=PtreeAddsister(nctemp2304,nctemp2306);
int nctemp2310= 41;
int nctemp2312=ParseMatch(nctemp2310);
struct tree* nctemp2317=ParseCompstmnt();
jp =nctemp2317;
struct tree* nctemp2319= sp;
struct tree* nctemp2321= jp;
int nctemp2323=PtreeAddsister(nctemp2319,nctemp2321);
}
return np;
}
struct tree* ParseForstmnt ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp2325 = (lookahead ==26);
if(nctemp2325)
{
struct nctempchar1 *nctemp2335;
static struct nctempchar1 nctemp2336 = {{ 4}, (char*)"for\0"};
nctemp2335=&nctemp2336;
nctempchar1* nctemp2333= nctemp2335;
struct nctempchar1 *nctemp2339;
static struct nctempchar1 nctemp2340 = {{ 5}, (char*)"void\0"};
nctemp2339=&nctemp2340;
nctempchar1* nctemp2337= nctemp2339;
struct tree* nctemp2341=ParseMknode(nctemp2333,nctemp2337);
np =nctemp2341;
int nctemp2343= 26;
int nctemp2345=ParseMatch(nctemp2343);
int nctemp2346 = (lookahead =='(');
if(nctemp2346)
{
struct tree* nctemp2354= np;
struct tree* nctemp2356=ParseForstmntc(nctemp2354);
sp =nctemp2356;
}
else{
struct tree* nctemp2361= np;
struct tree* nctemp2363=ParseForstmntpy(nctemp2361);
sp =nctemp2363;
}
}
else{
sp =0;
}
return sp;
}
struct tree* ParseSlice ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
struct tree* nctemp2376=ParseExpr();
sp =nctemp2376;
int nctemp2369 = (sp !=0);
if(nctemp2369)
{
struct nctempchar1 *nctemp2384;
static struct nctempchar1 nctemp2385 = {{ 6}, (char*)"slice\0"};
nctemp2384=&nctemp2385;
nctempchar1* nctemp2382= nctemp2384;
struct nctempchar1 *nctemp2388;
static struct nctempchar1 nctemp2389 = {{ 5}, (char*)"void\0"};
nctemp2388=&nctemp2389;
nctempchar1* nctemp2386= nctemp2388;
struct tree* nctemp2390=ParseMknode(nctemp2382,nctemp2386);
np =nctemp2390;
struct tree* nctemp2392= np;
struct tree* nctemp2394= sp;
int nctemp2396=PtreeAddchild(nctemp2392,nctemp2394);
int nctemp2398= 58;
int nctemp2400=ParseMatch(nctemp2398);
struct tree* nctemp2408=ParseExpr();
rp =nctemp2408;
int nctemp2401 = (rp !=0);
if(nctemp2401)
{
struct tree* nctemp2411= np;
struct tree* nctemp2413= rp;
int nctemp2415=PtreeAddchild(nctemp2411,nctemp2413);
}
int nctemp2416 = (lookahead ==58);
if(nctemp2416)
{
int nctemp2421= 58;
int nctemp2423=ParseMatch(nctemp2421);
struct tree* nctemp2431=ParseExpr();
rp =nctemp2431;
int nctemp2424 = (rp !=0);
if(nctemp2424)
{
struct tree* nctemp2434= np;
struct tree* nctemp2436= rp;
int nctemp2438=PtreeAddchild(nctemp2434,nctemp2436);
}
else{
struct nctempchar1 *nctemp2442;
static struct nctempchar1 nctemp2443 = {{ 13}, (char*)"Syntax error\0"};
nctemp2442=&nctemp2443;
nctempchar1* nctemp2440= nctemp2442;
int nctemp2444=ParseError(nctemp2440);
}
}
}
else{
struct nctempchar1 *nctemp2448;
static struct nctempchar1 nctemp2449 = {{ 13}, (char*)"Syntax error\0"};
nctemp2448=&nctemp2449;
nctempchar1* nctemp2446= nctemp2448;
int nctemp2450=ParseError(nctemp2446);
}
return np;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp2459=ParseSlice();
sp =nctemp2459;
int nctemp2452 = (sp !=0);
if(nctemp2452)
{
struct tree* nctemp2462= np;
struct tree* nctemp2464= sp;
int nctemp2466=PtreeAddchild(nctemp2462,nctemp2464);
}
else{
struct nctempchar1 *nctemp2470;
static struct nctempchar1 nctemp2471 = {{ 13}, (char*)"Syntax error\0"};
nctemp2470=&nctemp2471;
nctempchar1* nctemp2468= nctemp2470;
int nctemp2472=ParseError(nctemp2468);
}
int nctemp2473 = (lookahead ==44);
if(nctemp2473)
{
int nctemp2478= 44;
int nctemp2480=ParseMatch(nctemp2478);
struct tree* nctemp2482= np;
struct tree* nctemp2484=ParseSliceseq(nctemp2482);
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
int nctemp2487 = (lookahead ==31);
if(nctemp2487)
{
struct nctempchar1 *nctemp2497;
static struct nctempchar1 nctemp2498 = {{ 9}, (char*)"parallel\0"};
nctemp2497=&nctemp2498;
nctempchar1* nctemp2495= nctemp2497;
struct nctempchar1 *nctemp2501;
static struct nctempchar1 nctemp2502 = {{ 5}, (char*)"void\0"};
nctemp2501=&nctemp2502;
nctempchar1* nctemp2499= nctemp2501;
struct tree* nctemp2503=ParseMknode(nctemp2495,nctemp2499);
np =nctemp2503;
int nctemp2505= 31;
int nctemp2507=ParseMatch(nctemp2505);
int nctemp2509= 40;
int nctemp2511=ParseMatch(nctemp2509);
struct nctempchar1 *nctemp2518;
static struct nctempchar1 nctemp2519 = {{ 9}, (char*)"sliceseq\0"};
nctemp2518=&nctemp2519;
nctempchar1* nctemp2516= nctemp2518;
struct nctempchar1 *nctemp2522;
static struct nctempchar1 nctemp2523 = {{ 5}, (char*)"void\0"};
nctemp2522=&nctemp2523;
nctempchar1* nctemp2520= nctemp2522;
struct tree* nctemp2524=ParseMknode(nctemp2516,nctemp2520);
rp =nctemp2524;
struct tree* nctemp2526= np;
struct tree* nctemp2528= rp;
int nctemp2530=PtreeAddchild(nctemp2526,nctemp2528);
struct tree* nctemp2538= rp;
struct tree* nctemp2540=ParseSliceseq(nctemp2538);
sp =nctemp2540;
int nctemp2531 = (sp ==0);
if(nctemp2531)
{
struct nctempchar1 *nctemp2545;
static struct nctempchar1 nctemp2546 = {{ 13}, (char*)"Syntax error\0"};
nctemp2545=&nctemp2546;
nctempchar1* nctemp2543= nctemp2545;
int nctemp2547=ParseError(nctemp2543);
}
int nctemp2548 = (lookahead ==41);
if(nctemp2548)
{
int nctemp2553= 41;
int nctemp2555=ParseMatch(nctemp2553);
struct tree* nctemp2560=ParseStmnt();
sp =nctemp2560;
struct tree* nctemp2562= np;
struct tree* nctemp2564= sp;
int nctemp2566=PtreeAddchild(nctemp2562,nctemp2564);
return np;
}
else{
struct nctempchar1 *nctemp2571;
static struct nctempchar1 nctemp2572 = {{ 13}, (char*)"Syntax error\0"};
nctemp2571=&nctemp2572;
nctempchar1* nctemp2569= nctemp2571;
int nctemp2573=ParseError(nctemp2569);
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
int nctemp2582 = (lookahead ==15);
if(nctemp2582)
{
int nctemp2587= 15;
int nctemp2589=ParseMatch(nctemp2587);
struct nctempchar1 *nctemp2596;
static struct nctempchar1 nctemp2597 = {{ 5}, (char*)"else\0"};
nctemp2596=&nctemp2597;
nctempchar1* nctemp2594= nctemp2596;
struct nctempchar1 *nctemp2600;
static struct nctempchar1 nctemp2601 = {{ 5}, (char*)"void\0"};
nctemp2600=&nctemp2601;
nctempchar1* nctemp2598= nctemp2600;
struct tree* nctemp2602=ParseMknode(nctemp2594,nctemp2598);
np =nctemp2602;
struct tree* nctemp2607=ParseStmnt();
sp =nctemp2607;
struct tree* nctemp2609= np;
struct tree* nctemp2611= sp;
int nctemp2613=PtreeAddchild(nctemp2609,nctemp2611);
}
else{
np =0;
}
return np;
}
struct tree* ParseIfstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2619 = (lookahead ==14);
if(nctemp2619)
{
struct nctempchar1 *nctemp2629;
static struct nctempchar1 nctemp2630 = {{ 3}, (char*)"if\0"};
nctemp2629=&nctemp2630;
nctempchar1* nctemp2627= nctemp2629;
struct nctempchar1 *nctemp2633;
static struct nctempchar1 nctemp2634 = {{ 5}, (char*)"void\0"};
nctemp2633=&nctemp2634;
nctempchar1* nctemp2631= nctemp2633;
struct tree* nctemp2635=ParseMknode(nctemp2627,nctemp2631);
np =nctemp2635;
int nctemp2637= 14;
int nctemp2639=ParseMatch(nctemp2637);
int nctemp2641= 40;
int nctemp2643=ParseMatch(nctemp2641);
struct tree* nctemp2651=ParseExpr();
sp =nctemp2651;
int nctemp2644 = (sp !=0);
if(nctemp2644)
{
struct tree* nctemp2654= np;
struct tree* nctemp2656= sp;
int nctemp2658=PtreeAddchild(nctemp2654,nctemp2656);
}
int nctemp2660= 41;
int nctemp2662=ParseMatch(nctemp2660);
struct tree* nctemp2667=ParseStmnt();
sp =nctemp2667;
struct tree* nctemp2669= np;
struct tree* nctemp2671= sp;
int nctemp2673=PtreeAddchild(nctemp2669,nctemp2671);
struct tree* nctemp2681=ParseElsestmnt();
sp =nctemp2681;
int nctemp2674 = (sp !=0);
if(nctemp2674)
{
struct tree* nctemp2684= np;
struct tree* nctemp2686= sp;
int nctemp2688=PtreeAddchild(nctemp2684,nctemp2686);
}
sp =np;
}
else{
sp =0;
}
return sp;
}
struct tree* ParseStmnt ()
{
struct tree* np;
struct tree* nctemp2705=ParseWhilestmnt();
np =nctemp2705;
int nctemp2698 = (np !=0);
if(nctemp2698)
{
return np;
}
else{
struct tree* nctemp2715=ParseReturnstmnt();
np =nctemp2715;
int nctemp2708 = (np !=0);
if(nctemp2708)
{
return np;
}
else{
struct tree* nctemp2725=ParseForstmnt();
np =nctemp2725;
int nctemp2718 = (np !=0);
if(nctemp2718)
{
return np;
}
else{
struct tree* nctemp2735=ParseParallelstmnt();
np =nctemp2735;
int nctemp2728 = (np !=0);
if(nctemp2728)
{
return np;
}
else{
struct tree* nctemp2745=ParseIfstmnt();
np =nctemp2745;
int nctemp2738 = (np !=0);
if(nctemp2738)
{
return np;
}
else{
struct tree* nctemp2755=ParseCompstmnt();
np =nctemp2755;
int nctemp2748 = (np !=0);
if(nctemp2748)
{
return np;
}
else{
int nctemp2758 = (lookahead ==601);
if(nctemp2758)
{
np =0;
return np;
}
else{
int nctemp2766 = (lookahead ==701);
if(nctemp2766)
{
int nctemp2771= 701;
int nctemp2773=ParseMatch(nctemp2771);
int nctemp2775= 10;
int nctemp2777=ParseMatch(nctemp2775);
np =0;
return np;
}
else{
struct tree* nctemp2786=ParseExpr();
np =nctemp2786;
int nctemp2787 = (lookahead ==59);
if(nctemp2787)
{
int nctemp2792= 59;
int nctemp2794=ParseMatch(nctemp2792);
}
int nctemp2795 = (lookahead ==10);
if(nctemp2795)
{
int nctemp2800= 10;
int nctemp2802=ParseMatch(nctemp2800);
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
struct tree* nctemp2808=ParseStmnt();
np =nctemp2808;
sp =np;
int nctemp2813 = (sp !=0);
int nctemp2817=nctemp2813;
while(nctemp2817)
{{
struct tree* nctemp2822=ParseStmnt();
sp =nctemp2822;
struct tree* nctemp2824= np;
struct tree* nctemp2826= sp;
int nctemp2828=PtreeAddsister(nctemp2824,nctemp2826);
}
int nctemp2829 = (sp !=0);
nctemp2817=nctemp2829;}return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2834 = (lookahead ==58);
if(nctemp2834)
{
struct nctempchar1 *nctemp2844;
static struct nctempchar1 nctemp2845 = {{ 10}, (char*)"compstmnt\0"};
nctemp2844=&nctemp2845;
nctempchar1* nctemp2842= nctemp2844;
struct nctempchar1 *nctemp2848;
static struct nctempchar1 nctemp2849 = {{ 5}, (char*)"void\0"};
nctemp2848=&nctemp2849;
nctempchar1* nctemp2846= nctemp2848;
struct tree* nctemp2850=ParseMknode(nctemp2842,nctemp2846);
np =nctemp2850;
int nctemp2852= 58;
int nctemp2854=ParseMatch(nctemp2852);
int nctemp2856= 10;
int nctemp2858=ParseMatch(nctemp2856);
int nctemp2860= 600;
int nctemp2862=ParseMatch(nctemp2860);
struct tree* nctemp2867=ParseDeclarations();
sp =nctemp2867;
int nctemp2868 = (sp !=0);
if(nctemp2868)
{
struct tree* nctemp2873= np;
struct tree* nctemp2875= sp;
int nctemp2877=PtreeAddchild(nctemp2873,nctemp2875);
}
struct tree* nctemp2882=ParseStmntlist();
sp =nctemp2882;
int nctemp2883 = (sp !=0);
if(nctemp2883)
{
struct tree* nctemp2888= np;
struct tree* nctemp2890= sp;
int nctemp2892=PtreeAddchild(nctemp2888,nctemp2890);
}
int nctemp2894= 601;
int nctemp2896=ParseMatch(nctemp2894);
}
else{
np =0;
}
return np;
}
int ParseFdef (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp2906=ParseType();
np =nctemp2906;
int nctemp2907 = (np !=0);
if(nctemp2907)
{
struct tree* nctemp2912= p;
struct tree* nctemp2914= np;
int nctemp2916=PtreeAddchild(nctemp2912,nctemp2914);
}
else{
struct nctempchar1 *nctemp2920;
static struct nctempchar1 nctemp2921 = {{ 34}, (char*)"Missing function type declaration\0"};
nctemp2920=&nctemp2921;
nctempchar1* nctemp2918= nctemp2920;
int nctemp2922=ParseError(nctemp2918);
}
int nctemp2923 = (lookahead ==1);
if(nctemp2923)
{
struct nctempchar1 *nctemp2933;
static struct nctempchar1 nctemp2934 = {{ 5}, (char*)"fdef\0"};
nctemp2933=&nctemp2934;
nctempchar1* nctemp2931= nctemp2933;
nctempchar1* nctemp2937=ScanGetext();
nctempchar1* nctemp2935= nctemp2937;
struct tree* nctemp2938=PtreeMknode(nctemp2931,nctemp2935);
sp =nctemp2938;
int nctemp2940= 1;
int nctemp2942=ParseMatch(nctemp2940);
struct tree* nctemp2944= np;
struct tree* nctemp2946= sp;
int nctemp2948=PtreeAddchild(nctemp2944,nctemp2946);
}
int nctemp2950= 40;
int nctemp2952=ParseMatch(nctemp2950);
struct tree* nctemp2957=ParseArglist();
np =nctemp2957;
int nctemp2958 = (np !=0);
if(nctemp2958)
{
struct tree* nctemp2963= sp;
struct tree* nctemp2965= np;
int nctemp2967=PtreeAddchild(nctemp2963,nctemp2965);
}
int nctemp2969= 41;
int nctemp2971=ParseMatch(nctemp2969);
np =0;
struct tree* nctemp2980=ParseCompstmnt();
np =nctemp2980;
int nctemp2981 = (np !=0);
if(nctemp2981)
{
struct tree* nctemp2986= sp;
struct tree* nctemp2988= np;
int nctemp2990=PtreeAddchild(nctemp2986,nctemp2988);
}
else{
struct nctempchar1 *nctemp2994;
static struct nctempchar1 nctemp2995 = {{ 22}, (char*)"Missing function body\0"};
nctemp2994=&nctemp2995;
nctempchar1* nctemp2992= nctemp2994;
int nctemp2996=ParseError(nctemp2992);
}
return 1;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* imp;
struct tree* nctemp3002=ParseType();
np =nctemp3002;
int nctemp3003 = (np ==0);
if(nctemp3003)
{
int nctemp3007 = (lookahead ==433);
if(nctemp3007)
{
int nctemp3012= lookahead;
int nctemp3014=ParseMatch(nctemp3012);
int nctemp3015 = (lookahead ==1);
if(nctemp3015)
{
struct nctempchar1 *nctemp3025;
static struct nctempchar1 nctemp3026 = {{ 7}, (char*)"import\0"};
nctemp3025=&nctemp3026;
nctempchar1* nctemp3023= nctemp3025;
nctempchar1* nctemp3029=ScanGetext();
nctempchar1* nctemp3027= nctemp3029;
struct tree* nctemp3030=ParseMknode(nctemp3023,nctemp3027);
imp =nctemp3030;
int nctemp3032= 1;
int nctemp3034=ParseMatch(nctemp3032);
int nctemp3036= 10;
int nctemp3038=ParseMatch(nctemp3036);
struct nctempchar1 *nctemp3045;
static struct nctempchar1 nctemp3046 = {{ 8}, (char*)"extdecl\0"};
nctemp3045=&nctemp3046;
nctempchar1* nctemp3043= nctemp3045;
struct nctempchar1 *nctemp3049;
static struct nctempchar1 nctemp3050 = {{ 5}, (char*)"void\0"};
nctemp3049=&nctemp3050;
nctempchar1* nctemp3047= nctemp3049;
struct tree* nctemp3051=ParseMknode(nctemp3043,nctemp3047);
sp =nctemp3051;
struct tree* nctemp3053= sp;
struct tree* nctemp3055= imp;
int nctemp3057=PtreeAddchild(nctemp3053,nctemp3055);
}
return sp;
}
else{
int nctemp3059 = (lookahead ==1100);
if(nctemp3059)
{
int nctemp3064= 1100;
int nctemp3066=ParseMatch(nctemp3064);
struct nctempchar1 *nctemp3073;
static struct nctempchar1 nctemp3074 = {{ 8}, (char*)"extdecl\0"};
nctemp3073=&nctemp3074;
nctempchar1* nctemp3071= nctemp3073;
struct nctempchar1 *nctemp3077;
static struct nctempchar1 nctemp3078 = {{ 5}, (char*)"void\0"};
nctemp3077=&nctemp3078;
nctempchar1* nctemp3075= nctemp3077;
struct tree* nctemp3079=ParseMknode(nctemp3071,nctemp3075);
sp =nctemp3079;
struct tree* nctemp3081= sp;
int nctemp3083=ParseFdef(nctemp3081);
return sp;
}
else{
struct nctempchar1 *nctemp3088;
static struct nctempchar1 nctemp3089 = {{ 13}, (char*)"Syntax error\0"};
nctemp3088=&nctemp3089;
nctempchar1* nctemp3086= nctemp3088;
int nctemp3090=ParseError(nctemp3086);
}
}
}
int nctemp3091 = (lookahead ==58);
if(nctemp3091)
{
int nctemp3096= lookahead;
int nctemp3098=ParseMatch(nctemp3096);
int nctemp3100= 10;
int nctemp3102=ParseMatch(nctemp3100);
int nctemp3104= 600;
int nctemp3106=ParseMatch(nctemp3104);
struct nctempchar1 *nctemp3113;
static struct nctempchar1 nctemp3114 = {{ 8}, (char*)"extdecl\0"};
nctemp3113=&nctemp3114;
nctempchar1* nctemp3111= nctemp3113;
struct nctempchar1 *nctemp3117;
static struct nctempchar1 nctemp3118 = {{ 5}, (char*)"void\0"};
nctemp3117=&nctemp3118;
nctempchar1* nctemp3115= nctemp3117;
struct tree* nctemp3119=ParseMknode(nctemp3111,nctemp3115);
sp =nctemp3119;
struct tree* nctemp3121= sp;
struct tree* nctemp3123= np;
int nctemp3125=PtreeAddchild(nctemp3121,nctemp3123);
struct tree* nctemp3127= np;
int nctemp3129=ParseStructdeclar(nctemp3127);
return sp;
}
int nctemp3131 = (lookahead ==1);
if(nctemp3131)
{
struct nctempchar1 *nctemp3141;
static struct nctempchar1 nctemp3142 = {{ 8}, (char*)"extdecl\0"};
nctemp3141=&nctemp3142;
nctempchar1* nctemp3139= nctemp3141;
struct nctempchar1 *nctemp3145;
static struct nctempchar1 nctemp3146 = {{ 5}, (char*)"void\0"};
nctemp3145=&nctemp3146;
nctempchar1* nctemp3143= nctemp3145;
struct tree* nctemp3147=ParseMknode(nctemp3139,nctemp3143);
sp =nctemp3147;
struct tree* nctemp3149= sp;
struct tree* nctemp3151= np;
int nctemp3153=PtreeAddchild(nctemp3149,nctemp3151);
struct nctempchar1 *nctemp3160;
static struct nctempchar1 nctemp3161 = {{ 11}, (char*)"identifier\0"};
nctemp3160=&nctemp3161;
nctempchar1* nctemp3158= nctemp3160;
nctempchar1* nctemp3164=ScanGetext();
nctempchar1* nctemp3162= nctemp3164;
struct tree* nctemp3165=ParseMknode(nctemp3158,nctemp3162);
mp =nctemp3165;
struct tree* nctemp3167= np;
struct tree* nctemp3169= mp;
int nctemp3171=PtreeAddchild(nctemp3167,nctemp3169);
int nctemp3173= lookahead;
int nctemp3175=ParseMatch(nctemp3173);
int nctemp3176 = (lookahead ==44);
if(nctemp3176)
{
struct tree* nctemp3181= np;
int nctemp3183=ParseIdseq(nctemp3181);
int nctemp3184 = (lookahead ==59);
if(nctemp3184)
{
int nctemp3189= 59;
int nctemp3191=ParseMatch(nctemp3189);
}
int nctemp3193= 10;
int nctemp3195=ParseMatch(nctemp3193);
}
else{
int nctemp3196 = (lookahead ==61);
if(nctemp3196)
{
int nctemp3201= lookahead;
int nctemp3203=ParseMatch(nctemp3201);
struct tree* nctemp3205= mp;
int nctemp3207=ParseConstdecl(nctemp3205);
int nctemp3209= 10;
int nctemp3211=ParseMatch(nctemp3209);
}
else{
int nctemp3212 = (lookahead ==59);
if(nctemp3212)
{
int nctemp3217= 59;
int nctemp3219=ParseMatch(nctemp3217);
}
int nctemp3221= 10;
int nctemp3223=ParseMatch(nctemp3221);
}
}
}
else{
struct nctempchar1 *nctemp3227;
static struct nctempchar1 nctemp3228 = {{ 13}, (char*)"Syntax error\0"};
nctemp3227=&nctemp3228;
nctempchar1* nctemp3225= nctemp3227;
int nctemp3229=ParseError(nctemp3225);
}
return sp;
}
struct tree* ParseParse ()
{
struct tree* np;
np =0;
int nctemp3235 = (lookahead ==19);
if(nctemp3235)
{
return np;
}
else{
int nctemp3240 = (lookahead ==600);
if(nctemp3240)
{
int nctemp3245= 600;
int nctemp3247=ParseMatch(nctemp3245);
}
struct tree* nctemp3252=ParseExtdecl();
np =nctemp3252;
}
return np;
}
}
