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
rp = 0;
struct tree* nctemp1490= rp;
struct tree* nctemp1492=ParseAsgexpr(nctemp1490);
np =nctemp1492;
int nctemp1493 = (np !=0);
if(nctemp1493)
{
struct nctempchar1 *nctemp1503;
static struct nctempchar1 nctemp1504 = {{ 5}, (char*)"expr\0"};
nctemp1503=&nctemp1504;
nctempchar1* nctemp1501= nctemp1503;
struct nctempchar1 *nctemp1507;
static struct nctempchar1 nctemp1508 = {{ 5}, (char*)"void\0"};
nctemp1507=&nctemp1508;
nctempchar1* nctemp1505= nctemp1507;
struct tree* nctemp1509=ParseMknode(nctemp1501,nctemp1505);
sp =nctemp1509;
struct tree* nctemp1511= sp;
struct tree* nctemp1513= np;
int nctemp1515=PtreeAddchild(nctemp1511,nctemp1513);
np =sp;
}
return np;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp1525=ParseType();
np =nctemp1525;
int nctemp1526 = (np ==0);
if(nctemp1526)
{
return np;
}
int nctemp1531 = (lookahead ==1);
if(nctemp1531)
{
struct nctempchar1 *nctemp1541;
static struct nctempchar1 nctemp1542 = {{ 11}, (char*)"identifier\0"};
nctemp1541=&nctemp1542;
nctempchar1* nctemp1539= nctemp1541;
nctempchar1* nctemp1545=ScanGetext();
nctempchar1* nctemp1543= nctemp1545;
struct tree* nctemp1546=ParseMknode(nctemp1539,nctemp1543);
mp =nctemp1546;
struct tree* nctemp1548= np;
struct tree* nctemp1550= mp;
int nctemp1552=PtreeAddchild(nctemp1548,nctemp1550);
int nctemp1554= lookahead;
int nctemp1556=ParseMatch(nctemp1554);
int nctemp1557 = (lookahead ==44);
if(nctemp1557)
{
struct tree* nctemp1562= np;
int nctemp1564=ParseIdseq(nctemp1562);
}
else{
int nctemp1565 = (lookahead ==61);
if(nctemp1565)
{
int nctemp1570= lookahead;
int nctemp1572=ParseMatch(nctemp1570);
struct tree* nctemp1574= mp;
int nctemp1576=ParseConstdecl(nctemp1574);
}
}
int nctemp1577 = (lookahead ==59);
if(nctemp1577)
{
int nctemp1582= 59;
int nctemp1584=ParseMatch(nctemp1582);
}
int nctemp1586= 10;
int nctemp1588=ParseMatch(nctemp1586);
}
else{
struct nctempchar1 *nctemp1592;
static struct nctempchar1 nctemp1593 = {{ 35}, (char*)"Missing variable in type statement\0"};
nctemp1592=&nctemp1593;
nctempchar1* nctemp1590= nctemp1592;
int nctemp1594=ParseError(nctemp1590);
}
return np;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1600=ParseDeclaration();
np =nctemp1600;
int nctemp1601 = (np !=0);
if(nctemp1601)
{
struct nctempchar1 *nctemp1611;
static struct nctempchar1 nctemp1612 = {{ 13}, (char*)"declarations\0"};
nctemp1611=&nctemp1612;
nctempchar1* nctemp1609= nctemp1611;
struct nctempchar1 *nctemp1615;
static struct nctempchar1 nctemp1616 = {{ 5}, (char*)"void\0"};
nctemp1615=&nctemp1616;
nctempchar1* nctemp1613= nctemp1615;
struct tree* nctemp1617=ParseMknode(nctemp1609,nctemp1613);
sp =nctemp1617;
struct tree* nctemp1619= sp;
struct tree* nctemp1621= np;
int nctemp1623=PtreeAddchild(nctemp1619,nctemp1621);
}
else{
np =0;
return np;
}
struct tree* nctemp1635=ParseDeclaration();
np =nctemp1635;
int nctemp1628 = (np !=0);
int nctemp1637=nctemp1628;
while(nctemp1637)
{{
struct tree* nctemp1639= sp;
struct tree* nctemp1641= np;
int nctemp1643=PtreeAddchild(nctemp1639,nctemp1641);
}
struct tree* nctemp1651=ParseDeclaration();
np =nctemp1651;
int nctemp1644 = (np !=0);
nctemp1637=nctemp1644;}return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1654 = (lookahead ==44);
if(nctemp1654)
{
int nctemp1659= lookahead;
int nctemp1661=ParseMatch(nctemp1659);
struct tree* nctemp1669=ParseType();
np =nctemp1669;
int nctemp1662 = (np !=0);
if(nctemp1662)
{
struct tree* nctemp1672= p;
struct tree* nctemp1674= np;
int nctemp1676=PtreeAddchild(nctemp1672,nctemp1674);
int nctemp1677 = (lookahead ==1);
if(nctemp1677)
{
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 11}, (char*)"identifier\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
nctempchar1* nctemp1691=ScanGetext();
nctempchar1* nctemp1689= nctemp1691;
struct tree* nctemp1692=ParseMknode(nctemp1685,nctemp1689);
sp =nctemp1692;
struct tree* nctemp1694= np;
struct tree* nctemp1696= sp;
int nctemp1698=PtreeAddchild(nctemp1694,nctemp1696);
int nctemp1700= 1;
int nctemp1702=ParseMatch(nctemp1700);
}
struct tree* nctemp1704= p;
int nctemp1706=ParseArgseq(nctemp1704);
}
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp1715=ParseType();
np =nctemp1715;
int nctemp1708 = (np !=0);
if(nctemp1708)
{
struct nctempchar1 *nctemp1723;
static struct nctempchar1 nctemp1724 = {{ 8}, (char*)"arglist\0"};
nctemp1723=&nctemp1724;
nctempchar1* nctemp1721= nctemp1723;
struct nctempchar1 *nctemp1727;
static struct nctempchar1 nctemp1728 = {{ 5}, (char*)"void\0"};
nctemp1727=&nctemp1728;
nctempchar1* nctemp1725= nctemp1727;
struct tree* nctemp1729=ParseMknode(nctemp1721,nctemp1725);
sp =nctemp1729;
struct tree* nctemp1731= sp;
struct tree* nctemp1733= np;
int nctemp1735=PtreeAddchild(nctemp1731,nctemp1733);
int nctemp1736 = (lookahead ==1);
if(nctemp1736)
{
struct nctempchar1 *nctemp1746;
static struct nctempchar1 nctemp1747 = {{ 11}, (char*)"identifier\0"};
nctemp1746=&nctemp1747;
nctempchar1* nctemp1744= nctemp1746;
nctempchar1* nctemp1750=ScanGetext();
nctempchar1* nctemp1748= nctemp1750;
struct tree* nctemp1751=ParseMknode(nctemp1744,nctemp1748);
mp =nctemp1751;
struct tree* nctemp1753= np;
struct tree* nctemp1755= mp;
int nctemp1757=PtreeAddchild(nctemp1753,nctemp1755);
int nctemp1759= 1;
int nctemp1761=ParseMatch(nctemp1759);
}
struct tree* nctemp1763= sp;
int nctemp1765=ParseArgseq(nctemp1763);
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
struct nctempchar1 *nctemp1777;
static struct nctempchar1 nctemp1778 = {{ 10}, (char*)"structdec\0"};
nctemp1777=&nctemp1778;
nctempchar1* nctemp1775= nctemp1777;
struct nctempchar1 *nctemp1781;
static struct nctempchar1 nctemp1782 = {{ 5}, (char*)"void\0"};
nctemp1781=&nctemp1782;
nctempchar1* nctemp1779= nctemp1781;
struct tree* nctemp1783=ParseMknode(nctemp1775,nctemp1779);
np =nctemp1783;
struct tree* nctemp1785= p;
struct tree* nctemp1787= np;
int nctemp1789=PtreeAddchild(nctemp1785,nctemp1787);
struct tree* nctemp1794=ParseDeclarations();
sp =nctemp1794;
struct tree* nctemp1796= np;
struct tree* nctemp1798= sp;
int nctemp1800=PtreeAddchild(nctemp1796,nctemp1798);
int nctemp1802= 601;
int nctemp1804=ParseMatch(nctemp1802);
return 1;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1806 = (lookahead ==12);
if(nctemp1806)
{
struct nctempchar1 *nctemp1816;
static struct nctempchar1 nctemp1817 = {{ 6}, (char*)"while\0"};
nctemp1816=&nctemp1817;
nctempchar1* nctemp1814= nctemp1816;
struct nctempchar1 *nctemp1820;
static struct nctempchar1 nctemp1821 = {{ 5}, (char*)"void\0"};
nctemp1820=&nctemp1821;
nctempchar1* nctemp1818= nctemp1820;
struct tree* nctemp1822=ParseMknode(nctemp1814,nctemp1818);
np =nctemp1822;
int nctemp1824= 12;
int nctemp1826=ParseMatch(nctemp1824);
int nctemp1828= 40;
int nctemp1830=ParseMatch(nctemp1828);
struct tree* nctemp1838=ParseExpr();
sp =nctemp1838;
int nctemp1831 = (sp !=0);
if(nctemp1831)
{
struct tree* nctemp1841= np;
struct tree* nctemp1843= sp;
int nctemp1845=PtreeAddchild(nctemp1841,nctemp1843);
}
int nctemp1847= 41;
int nctemp1849=ParseMatch(nctemp1847);
struct tree* nctemp1854=ParseStmnt();
sp =nctemp1854;
struct tree* nctemp1856= np;
struct tree* nctemp1858= sp;
int nctemp1860=PtreeAddchild(nctemp1856,nctemp1858);
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
int nctemp1870 = (lookahead ==30);
if(nctemp1870)
{
struct nctempchar1 *nctemp1880;
static struct nctempchar1 nctemp1881 = {{ 7}, (char*)"return\0"};
nctemp1880=&nctemp1881;
nctempchar1* nctemp1878= nctemp1880;
struct nctempchar1 *nctemp1884;
static struct nctempchar1 nctemp1885 = {{ 5}, (char*)"void\0"};
nctemp1884=&nctemp1885;
nctempchar1* nctemp1882= nctemp1884;
struct tree* nctemp1886=ParseMknode(nctemp1878,nctemp1882);
np =nctemp1886;
int nctemp1888= 30;
int nctemp1890=ParseMatch(nctemp1888);
struct tree* nctemp1898=ParseExpr();
sp =nctemp1898;
int nctemp1891 = (sp !=0);
if(nctemp1891)
{
struct tree* nctemp1901= np;
struct tree* nctemp1903= sp;
int nctemp1905=PtreeAddchild(nctemp1901,nctemp1903);
sp =np;
int nctemp1910 = (lookahead ==59);
if(nctemp1910)
{
int nctemp1915= 59;
int nctemp1917=ParseMatch(nctemp1915);
}
int nctemp1919= 10;
int nctemp1921=ParseMatch(nctemp1919);
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
int nctemp1928= 40;
int nctemp1930=ParseMatch(nctemp1928);
struct tree* nctemp1938=ParseExpr();
sp =nctemp1938;
int nctemp1931 = (sp !=0);
if(nctemp1931)
{
struct tree* nctemp1941= np;
struct tree* nctemp1943= sp;
int nctemp1945=PtreeAddchild(nctemp1941,nctemp1943);
int nctemp1947= 59;
int nctemp1949=ParseMatch(nctemp1947);
struct tree* nctemp1957=ParseExpr();
rp =nctemp1957;
int nctemp1950 = (rp !=0);
if(nctemp1950)
{
struct tree* nctemp1960= sp;
struct tree* nctemp1962= rp;
int nctemp1964=PtreeAddsister(nctemp1960,nctemp1962);
}
int nctemp1966= 59;
int nctemp1968=ParseMatch(nctemp1966);
struct tree* nctemp1976=ParseExpr();
rp =nctemp1976;
int nctemp1969 = (rp !=0);
if(nctemp1969)
{
struct tree* nctemp1979= sp;
struct tree* nctemp1981= rp;
int nctemp1983=PtreeAddsister(nctemp1979,nctemp1981);
}
int nctemp1985= 41;
int nctemp1987=ParseMatch(nctemp1985);
struct tree* nctemp1992=ParseStmnt();
sp =nctemp1992;
struct tree* nctemp1994= np;
struct tree* nctemp1996= sp;
int nctemp1998=PtreeAddchild(nctemp1994,nctemp1996);
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
sp = 0;
int nctemp2008 = (lookahead ==1);
if(nctemp2008)
{
struct nctempchar1 *nctemp2018;
static struct nctempchar1 nctemp2019 = {{ 5}, (char*)"expr\0"};
nctemp2018=&nctemp2019;
nctempchar1* nctemp2016= nctemp2018;
struct nctempchar1 *nctemp2022;
static struct nctempchar1 nctemp2023 = {{ 5}, (char*)"void\0"};
nctemp2022=&nctemp2023;
nctempchar1* nctemp2020= nctemp2022;
struct tree* nctemp2024=PtreeMknode(nctemp2016,nctemp2020);
sp =nctemp2024;
struct tree* nctemp2026= np;
struct tree* nctemp2028= sp;
int nctemp2030=PtreeAddchild(nctemp2026,nctemp2028);
struct nctempchar1 *nctemp2037;
static struct nctempchar1 nctemp2038 = {{ 8}, (char*)"binexpr\0"};
nctemp2037=&nctemp2038;
nctempchar1* nctemp2035= nctemp2037;
struct nctempchar1 *nctemp2041;
static struct nctempchar1 nctemp2042 = {{ 2}, (char*)"=\0"};
nctemp2041=&nctemp2042;
nctempchar1* nctemp2039= nctemp2041;
struct tree* nctemp2043=PtreeMknode(nctemp2035,nctemp2039);
rp =nctemp2043;
struct tree* nctemp2045= sp;
struct tree* nctemp2047= rp;
int nctemp2049=PtreeAddchild(nctemp2045,nctemp2047);
nctempchar1* nctemp2057=ScanGetext();
nctempchar1* nctemp2055= nctemp2057;
nctempchar1* nctemp2058=LibeStrsave(nctemp2055);
id=nctemp2058;
struct nctempchar1 *nctemp2065;
static struct nctempchar1 nctemp2066 = {{ 11}, (char*)"identifier\0"};
nctemp2065=&nctemp2066;
nctempchar1* nctemp2063= nctemp2065;
nctempchar1* nctemp2069=ScanGetext();
nctempchar1* nctemp2067= nctemp2069;
struct tree* nctemp2070=PtreeMknode(nctemp2063,nctemp2067);
tp =nctemp2070;
struct tree* nctemp2072= rp;
struct tree* nctemp2074= tp;
int nctemp2076=PtreeAddchild(nctemp2072,nctemp2074);
int nctemp2078= 1;
int nctemp2080=ParseMatch(nctemp2078);
int nctemp2082= 702;
int nctemp2084=ParseMatch(nctemp2082);
int nctemp2086= 703;
int nctemp2088=ParseMatch(nctemp2086);
int nctemp2090= 40;
int nctemp2092=ParseMatch(nctemp2090);
struct tree* nctemp2097=ParseExpr();
qp =nctemp2097;
struct tree* nctemp2102= qp;
struct tree* nctemp2104=PtreeMvchild(nctemp2102);
qp =nctemp2104;
struct tree* nctemp2106= tp;
struct tree* nctemp2108= qp;
int nctemp2110=PtreeAddsister(nctemp2106,nctemp2108);
int nctemp2112= 44;
int nctemp2114=ParseMatch(nctemp2112);
struct tree* nctemp2119=ParseExpr();
mp =nctemp2119;
struct tree* nctemp2124= mp;
struct tree* nctemp2126=PtreeMvchild(nctemp2124);
mp =nctemp2126;
struct nctempchar1 *nctemp2133;
static struct nctempchar1 nctemp2134 = {{ 5}, (char*)"expr\0"};
nctemp2133=&nctemp2134;
nctempchar1* nctemp2131= nctemp2133;
struct nctempchar1 *nctemp2137;
static struct nctempchar1 nctemp2138 = {{ 5}, (char*)"void\0"};
nctemp2137=&nctemp2138;
nctempchar1* nctemp2135= nctemp2137;
struct tree* nctemp2139=PtreeMknode(nctemp2131,nctemp2135);
ap =nctemp2139;
struct tree* nctemp2141= sp;
struct tree* nctemp2143= ap;
int nctemp2145=PtreeAddsister(nctemp2141,nctemp2143);
struct nctempchar1 *nctemp2152;
static struct nctempchar1 nctemp2153 = {{ 8}, (char*)"binexpr\0"};
nctemp2152=&nctemp2153;
nctempchar1* nctemp2150= nctemp2152;
struct nctempchar1 *nctemp2156;
static struct nctempchar1 nctemp2157 = {{ 2}, (char*)"<\0"};
nctemp2156=&nctemp2157;
nctempchar1* nctemp2154= nctemp2156;
struct tree* nctemp2158=PtreeMknode(nctemp2150,nctemp2154);
bp =nctemp2158;
struct tree* nctemp2160= ap;
struct tree* nctemp2162= bp;
int nctemp2164=PtreeAddchild(nctemp2160,nctemp2162);
struct nctempchar1 *nctemp2171;
static struct nctempchar1 nctemp2172 = {{ 11}, (char*)"identifier\0"};
nctemp2171=&nctemp2172;
nctempchar1* nctemp2169= nctemp2171;
nctempchar1* nctemp2173= id;
struct tree* nctemp2176=PtreeMknode(nctemp2169,nctemp2173);
cp =nctemp2176;
struct tree* nctemp2178= bp;
struct tree* nctemp2180= cp;
int nctemp2182=PtreeAddchild(nctemp2178,nctemp2180);
struct tree* nctemp2184= cp;
struct tree* nctemp2186= mp;
int nctemp2188=PtreeAddsister(nctemp2184,nctemp2186);
struct nctempchar1 *nctemp2195;
static struct nctempchar1 nctemp2196 = {{ 5}, (char*)"expr\0"};
nctemp2195=&nctemp2196;
nctempchar1* nctemp2193= nctemp2195;
struct nctempchar1 *nctemp2199;
static struct nctempchar1 nctemp2200 = {{ 5}, (char*)"void\0"};
nctemp2199=&nctemp2200;
nctempchar1* nctemp2197= nctemp2199;
struct tree* nctemp2201=PtreeMknode(nctemp2193,nctemp2197);
dp =nctemp2201;
struct tree* nctemp2203= sp;
struct tree* nctemp2205= dp;
int nctemp2207=PtreeAddsister(nctemp2203,nctemp2205);
struct nctempchar1 *nctemp2214;
static struct nctempchar1 nctemp2215 = {{ 8}, (char*)"binexpr\0"};
nctemp2214=&nctemp2215;
nctempchar1* nctemp2212= nctemp2214;
struct nctempchar1 *nctemp2218;
static struct nctempchar1 nctemp2219 = {{ 2}, (char*)"=\0"};
nctemp2218=&nctemp2219;
nctempchar1* nctemp2216= nctemp2218;
struct tree* nctemp2220=PtreeMknode(nctemp2212,nctemp2216);
ep =nctemp2220;
struct tree* nctemp2222= dp;
struct tree* nctemp2224= ep;
int nctemp2226=PtreeAddchild(nctemp2222,nctemp2224);
struct nctempchar1 *nctemp2233;
static struct nctempchar1 nctemp2234 = {{ 11}, (char*)"identifier\0"};
nctemp2233=&nctemp2234;
nctempchar1* nctemp2231= nctemp2233;
nctempchar1* nctemp2235= id;
struct tree* nctemp2238=PtreeMknode(nctemp2231,nctemp2235);
fp =nctemp2238;
struct tree* nctemp2240= ep;
struct tree* nctemp2242= fp;
int nctemp2244=PtreeAddchild(nctemp2240,nctemp2242);
struct nctempchar1 *nctemp2251;
static struct nctempchar1 nctemp2252 = {{ 8}, (char*)"binexpr\0"};
nctemp2251=&nctemp2252;
nctempchar1* nctemp2249= nctemp2251;
struct nctempchar1 *nctemp2255;
static struct nctempchar1 nctemp2256 = {{ 2}, (char*)"+\0"};
nctemp2255=&nctemp2256;
nctempchar1* nctemp2253= nctemp2255;
struct tree* nctemp2257=PtreeMknode(nctemp2249,nctemp2253);
gp =nctemp2257;
struct tree* nctemp2259= fp;
struct tree* nctemp2261= gp;
int nctemp2263=PtreeAddsister(nctemp2259,nctemp2261);
struct nctempchar1 *nctemp2270;
static struct nctempchar1 nctemp2271 = {{ 11}, (char*)"identifier\0"};
nctemp2270=&nctemp2271;
nctempchar1* nctemp2268= nctemp2270;
nctempchar1* nctemp2272= id;
struct tree* nctemp2275=PtreeMknode(nctemp2268,nctemp2272);
hp =nctemp2275;
struct tree* nctemp2277= gp;
struct tree* nctemp2279= hp;
int nctemp2281=PtreeAddchild(nctemp2277,nctemp2279);
struct nctempchar1 *nctemp2288;
static struct nctempchar1 nctemp2289 = {{ 10}, (char*)"iconstant\0"};
nctemp2288=&nctemp2289;
nctempchar1* nctemp2286= nctemp2288;
struct nctempchar1 *nctemp2292;
static struct nctempchar1 nctemp2293 = {{ 2}, (char*)"1\0"};
nctemp2292=&nctemp2293;
nctempchar1* nctemp2290= nctemp2292;
struct tree* nctemp2294=PtreeMknode(nctemp2286,nctemp2290);
ip =nctemp2294;
struct tree* nctemp2296= hp;
struct tree* nctemp2298= ip;
int nctemp2300=PtreeAddsister(nctemp2296,nctemp2298);
int nctemp2302= 41;
int nctemp2304=ParseMatch(nctemp2302);
struct tree* nctemp2309=ParseCompstmnt();
jp =nctemp2309;
struct tree* nctemp2311= sp;
struct tree* nctemp2313= jp;
int nctemp2315=PtreeAddsister(nctemp2311,nctemp2313);
}
return np;
}
struct tree* ParseForstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2317 = (lookahead ==26);
if(nctemp2317)
{
struct nctempchar1 *nctemp2327;
static struct nctempchar1 nctemp2328 = {{ 4}, (char*)"for\0"};
nctemp2327=&nctemp2328;
nctempchar1* nctemp2325= nctemp2327;
struct nctempchar1 *nctemp2331;
static struct nctempchar1 nctemp2332 = {{ 5}, (char*)"void\0"};
nctemp2331=&nctemp2332;
nctempchar1* nctemp2329= nctemp2331;
struct tree* nctemp2333=ParseMknode(nctemp2325,nctemp2329);
np =nctemp2333;
int nctemp2335= 26;
int nctemp2337=ParseMatch(nctemp2335);
int nctemp2338 = (lookahead =='(');
if(nctemp2338)
{
struct tree* nctemp2346= np;
struct tree* nctemp2348=ParseForstmntc(nctemp2346);
sp =nctemp2348;
}
else{
struct tree* nctemp2353= np;
struct tree* nctemp2355=ParseForstmntpy(nctemp2353);
sp =nctemp2355;
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
struct tree* nctemp2368=ParseExpr();
sp =nctemp2368;
int nctemp2361 = (sp !=0);
if(nctemp2361)
{
struct nctempchar1 *nctemp2376;
static struct nctempchar1 nctemp2377 = {{ 6}, (char*)"slice\0"};
nctemp2376=&nctemp2377;
nctempchar1* nctemp2374= nctemp2376;
struct nctempchar1 *nctemp2380;
static struct nctempchar1 nctemp2381 = {{ 5}, (char*)"void\0"};
nctemp2380=&nctemp2381;
nctempchar1* nctemp2378= nctemp2380;
struct tree* nctemp2382=ParseMknode(nctemp2374,nctemp2378);
np =nctemp2382;
struct tree* nctemp2384= np;
struct tree* nctemp2386= sp;
int nctemp2388=PtreeAddchild(nctemp2384,nctemp2386);
int nctemp2390= 58;
int nctemp2392=ParseMatch(nctemp2390);
struct tree* nctemp2400=ParseExpr();
rp =nctemp2400;
int nctemp2393 = (rp !=0);
if(nctemp2393)
{
struct tree* nctemp2403= np;
struct tree* nctemp2405= rp;
int nctemp2407=PtreeAddchild(nctemp2403,nctemp2405);
}
int nctemp2408 = (lookahead ==58);
if(nctemp2408)
{
int nctemp2413= 58;
int nctemp2415=ParseMatch(nctemp2413);
struct tree* nctemp2423=ParseExpr();
rp =nctemp2423;
int nctemp2416 = (rp !=0);
if(nctemp2416)
{
struct tree* nctemp2426= np;
struct tree* nctemp2428= rp;
int nctemp2430=PtreeAddchild(nctemp2426,nctemp2428);
}
else{
struct nctempchar1 *nctemp2434;
static struct nctempchar1 nctemp2435 = {{ 13}, (char*)"Syntax error\0"};
nctemp2434=&nctemp2435;
nctempchar1* nctemp2432= nctemp2434;
int nctemp2436=ParseError(nctemp2432);
}
}
}
else{
struct nctempchar1 *nctemp2440;
static struct nctempchar1 nctemp2441 = {{ 13}, (char*)"Syntax error\0"};
nctemp2440=&nctemp2441;
nctempchar1* nctemp2438= nctemp2440;
int nctemp2442=ParseError(nctemp2438);
}
return np;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp2451=ParseSlice();
sp =nctemp2451;
int nctemp2444 = (sp !=0);
if(nctemp2444)
{
struct tree* nctemp2454= np;
struct tree* nctemp2456= sp;
int nctemp2458=PtreeAddchild(nctemp2454,nctemp2456);
}
else{
struct nctempchar1 *nctemp2462;
static struct nctempchar1 nctemp2463 = {{ 13}, (char*)"Syntax error\0"};
nctemp2462=&nctemp2463;
nctempchar1* nctemp2460= nctemp2462;
int nctemp2464=ParseError(nctemp2460);
}
int nctemp2465 = (lookahead ==44);
if(nctemp2465)
{
int nctemp2470= 44;
int nctemp2472=ParseMatch(nctemp2470);
struct tree* nctemp2474= np;
struct tree* nctemp2476=ParseSliceseq(nctemp2474);
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
int nctemp2479 = (lookahead ==31);
if(nctemp2479)
{
struct nctempchar1 *nctemp2489;
static struct nctempchar1 nctemp2490 = {{ 9}, (char*)"parallel\0"};
nctemp2489=&nctemp2490;
nctempchar1* nctemp2487= nctemp2489;
struct nctempchar1 *nctemp2493;
static struct nctempchar1 nctemp2494 = {{ 5}, (char*)"void\0"};
nctemp2493=&nctemp2494;
nctempchar1* nctemp2491= nctemp2493;
struct tree* nctemp2495=ParseMknode(nctemp2487,nctemp2491);
np =nctemp2495;
int nctemp2497= 31;
int nctemp2499=ParseMatch(nctemp2497);
int nctemp2501= 40;
int nctemp2503=ParseMatch(nctemp2501);
struct nctempchar1 *nctemp2510;
static struct nctempchar1 nctemp2511 = {{ 9}, (char*)"sliceseq\0"};
nctemp2510=&nctemp2511;
nctempchar1* nctemp2508= nctemp2510;
struct nctempchar1 *nctemp2514;
static struct nctempchar1 nctemp2515 = {{ 5}, (char*)"void\0"};
nctemp2514=&nctemp2515;
nctempchar1* nctemp2512= nctemp2514;
struct tree* nctemp2516=ParseMknode(nctemp2508,nctemp2512);
rp =nctemp2516;
struct tree* nctemp2518= np;
struct tree* nctemp2520= rp;
int nctemp2522=PtreeAddchild(nctemp2518,nctemp2520);
struct tree* nctemp2530= rp;
struct tree* nctemp2532=ParseSliceseq(nctemp2530);
sp =nctemp2532;
int nctemp2523 = (sp ==0);
if(nctemp2523)
{
struct nctempchar1 *nctemp2537;
static struct nctempchar1 nctemp2538 = {{ 13}, (char*)"Syntax error\0"};
nctemp2537=&nctemp2538;
nctempchar1* nctemp2535= nctemp2537;
int nctemp2539=ParseError(nctemp2535);
}
int nctemp2540 = (lookahead ==41);
if(nctemp2540)
{
int nctemp2545= 41;
int nctemp2547=ParseMatch(nctemp2545);
struct tree* nctemp2552=ParseStmnt();
sp =nctemp2552;
struct tree* nctemp2554= np;
struct tree* nctemp2556= sp;
int nctemp2558=PtreeAddchild(nctemp2554,nctemp2556);
return np;
}
else{
struct nctempchar1 *nctemp2563;
static struct nctempchar1 nctemp2564 = {{ 13}, (char*)"Syntax error\0"};
nctemp2563=&nctemp2564;
nctempchar1* nctemp2561= nctemp2563;
int nctemp2565=ParseError(nctemp2561);
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
int nctemp2574 = (lookahead ==15);
if(nctemp2574)
{
int nctemp2579= 15;
int nctemp2581=ParseMatch(nctemp2579);
struct nctempchar1 *nctemp2588;
static struct nctempchar1 nctemp2589 = {{ 5}, (char*)"else\0"};
nctemp2588=&nctemp2589;
nctempchar1* nctemp2586= nctemp2588;
struct nctempchar1 *nctemp2592;
static struct nctempchar1 nctemp2593 = {{ 5}, (char*)"void\0"};
nctemp2592=&nctemp2593;
nctempchar1* nctemp2590= nctemp2592;
struct tree* nctemp2594=ParseMknode(nctemp2586,nctemp2590);
np =nctemp2594;
struct tree* nctemp2599=ParseStmnt();
sp =nctemp2599;
struct tree* nctemp2601= np;
struct tree* nctemp2603= sp;
int nctemp2605=PtreeAddchild(nctemp2601,nctemp2603);
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
int nctemp2611 = (lookahead ==14);
if(nctemp2611)
{
struct nctempchar1 *nctemp2621;
static struct nctempchar1 nctemp2622 = {{ 3}, (char*)"if\0"};
nctemp2621=&nctemp2622;
nctempchar1* nctemp2619= nctemp2621;
struct nctempchar1 *nctemp2625;
static struct nctempchar1 nctemp2626 = {{ 5}, (char*)"void\0"};
nctemp2625=&nctemp2626;
nctempchar1* nctemp2623= nctemp2625;
struct tree* nctemp2627=ParseMknode(nctemp2619,nctemp2623);
np =nctemp2627;
int nctemp2629= 14;
int nctemp2631=ParseMatch(nctemp2629);
int nctemp2633= 40;
int nctemp2635=ParseMatch(nctemp2633);
struct tree* nctemp2643=ParseExpr();
sp =nctemp2643;
int nctemp2636 = (sp !=0);
if(nctemp2636)
{
struct tree* nctemp2646= np;
struct tree* nctemp2648= sp;
int nctemp2650=PtreeAddchild(nctemp2646,nctemp2648);
}
int nctemp2652= 41;
int nctemp2654=ParseMatch(nctemp2652);
struct tree* nctemp2659=ParseStmnt();
sp =nctemp2659;
struct tree* nctemp2661= np;
struct tree* nctemp2663= sp;
int nctemp2665=PtreeAddchild(nctemp2661,nctemp2663);
struct tree* nctemp2673=ParseElsestmnt();
sp =nctemp2673;
int nctemp2666 = (sp !=0);
if(nctemp2666)
{
struct tree* nctemp2676= np;
struct tree* nctemp2678= sp;
int nctemp2680=PtreeAddchild(nctemp2676,nctemp2678);
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
struct tree* nctemp2697=ParseWhilestmnt();
np =nctemp2697;
int nctemp2690 = (np !=0);
if(nctemp2690)
{
return np;
}
else{
struct tree* nctemp2707=ParseReturnstmnt();
np =nctemp2707;
int nctemp2700 = (np !=0);
if(nctemp2700)
{
return np;
}
else{
struct tree* nctemp2717=ParseForstmnt();
np =nctemp2717;
int nctemp2710 = (np !=0);
if(nctemp2710)
{
return np;
}
else{
struct tree* nctemp2727=ParseParallelstmnt();
np =nctemp2727;
int nctemp2720 = (np !=0);
if(nctemp2720)
{
return np;
}
else{
struct tree* nctemp2737=ParseIfstmnt();
np =nctemp2737;
int nctemp2730 = (np !=0);
if(nctemp2730)
{
return np;
}
else{
struct tree* nctemp2747=ParseCompstmnt();
np =nctemp2747;
int nctemp2740 = (np !=0);
if(nctemp2740)
{
return np;
}
else{
int nctemp2750 = (lookahead ==601);
if(nctemp2750)
{
np =0;
return np;
}
else{
int nctemp2758 = (lookahead ==701);
if(nctemp2758)
{
int nctemp2763= 701;
int nctemp2765=ParseMatch(nctemp2763);
int nctemp2767= 10;
int nctemp2769=ParseMatch(nctemp2767);
np =0;
return np;
}
else{
struct tree* nctemp2778=ParseExpr();
np =nctemp2778;
int nctemp2779 = (lookahead ==59);
if(nctemp2779)
{
int nctemp2784= 59;
int nctemp2786=ParseMatch(nctemp2784);
}
int nctemp2787 = (lookahead ==10);
if(nctemp2787)
{
int nctemp2792= 10;
int nctemp2794=ParseMatch(nctemp2792);
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
struct tree* nctemp2800=ParseStmnt();
np =nctemp2800;
sp = np;
int nctemp2801 = (sp !=0);
int nctemp2805=nctemp2801;
while(nctemp2805)
{{
struct tree* nctemp2810=ParseStmnt();
sp =nctemp2810;
struct tree* nctemp2812= np;
struct tree* nctemp2814= sp;
int nctemp2816=PtreeAddsister(nctemp2812,nctemp2814);
}
int nctemp2817 = (sp !=0);
nctemp2805=nctemp2817;}return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2822 = (lookahead ==58);
if(nctemp2822)
{
struct nctempchar1 *nctemp2832;
static struct nctempchar1 nctemp2833 = {{ 10}, (char*)"compstmnt\0"};
nctemp2832=&nctemp2833;
nctempchar1* nctemp2830= nctemp2832;
struct nctempchar1 *nctemp2836;
static struct nctempchar1 nctemp2837 = {{ 5}, (char*)"void\0"};
nctemp2836=&nctemp2837;
nctempchar1* nctemp2834= nctemp2836;
struct tree* nctemp2838=ParseMknode(nctemp2830,nctemp2834);
np =nctemp2838;
int nctemp2840= 58;
int nctemp2842=ParseMatch(nctemp2840);
int nctemp2844= 10;
int nctemp2846=ParseMatch(nctemp2844);
int nctemp2848= 600;
int nctemp2850=ParseMatch(nctemp2848);
struct tree* nctemp2855=ParseDeclarations();
sp =nctemp2855;
int nctemp2856 = (sp !=0);
if(nctemp2856)
{
struct tree* nctemp2861= np;
struct tree* nctemp2863= sp;
int nctemp2865=PtreeAddchild(nctemp2861,nctemp2863);
}
struct tree* nctemp2870=ParseStmntlist();
sp =nctemp2870;
int nctemp2871 = (sp !=0);
if(nctemp2871)
{
struct tree* nctemp2876= np;
struct tree* nctemp2878= sp;
int nctemp2880=PtreeAddchild(nctemp2876,nctemp2878);
}
int nctemp2882= 601;
int nctemp2884=ParseMatch(nctemp2882);
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
struct tree* nctemp2894=ParseType();
np =nctemp2894;
int nctemp2895 = (np !=0);
if(nctemp2895)
{
struct tree* nctemp2900= p;
struct tree* nctemp2902= np;
int nctemp2904=PtreeAddchild(nctemp2900,nctemp2902);
}
else{
struct nctempchar1 *nctemp2908;
static struct nctempchar1 nctemp2909 = {{ 34}, (char*)"Missing function type declaration\0"};
nctemp2908=&nctemp2909;
nctempchar1* nctemp2906= nctemp2908;
int nctemp2910=ParseError(nctemp2906);
}
int nctemp2911 = (lookahead ==1);
if(nctemp2911)
{
struct nctempchar1 *nctemp2921;
static struct nctempchar1 nctemp2922 = {{ 5}, (char*)"fdef\0"};
nctemp2921=&nctemp2922;
nctempchar1* nctemp2919= nctemp2921;
nctempchar1* nctemp2925=ScanGetext();
nctempchar1* nctemp2923= nctemp2925;
struct tree* nctemp2926=ParseMknode(nctemp2919,nctemp2923);
sp =nctemp2926;
int nctemp2928= 1;
int nctemp2930=ParseMatch(nctemp2928);
struct tree* nctemp2932= np;
struct tree* nctemp2934= sp;
int nctemp2936=PtreeAddchild(nctemp2932,nctemp2934);
}
int nctemp2938= 40;
int nctemp2940=ParseMatch(nctemp2938);
struct tree* nctemp2945=ParseArglist();
np =nctemp2945;
int nctemp2946 = (np !=0);
if(nctemp2946)
{
struct tree* nctemp2951= sp;
struct tree* nctemp2953= np;
int nctemp2955=PtreeAddchild(nctemp2951,nctemp2953);
}
int nctemp2957= 41;
int nctemp2959=ParseMatch(nctemp2957);
np = 0;
struct tree* nctemp2964=ParseCompstmnt();
np =nctemp2964;
int nctemp2965 = (np !=0);
if(nctemp2965)
{
struct tree* nctemp2970= sp;
struct tree* nctemp2972= np;
int nctemp2974=PtreeAddchild(nctemp2970,nctemp2972);
}
else{
struct nctempchar1 *nctemp2978;
static struct nctempchar1 nctemp2979 = {{ 22}, (char*)"Missing function body\0"};
nctemp2978=&nctemp2979;
nctempchar1* nctemp2976= nctemp2978;
int nctemp2980=ParseError(nctemp2976);
}
return 1;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* imp;
struct tree* nctemp2986=ParseType();
np =nctemp2986;
int nctemp2987 = (np ==0);
if(nctemp2987)
{
int nctemp2991 = (lookahead ==433);
if(nctemp2991)
{
int nctemp2996= lookahead;
int nctemp2998=ParseMatch(nctemp2996);
int nctemp2999 = (lookahead ==1);
if(nctemp2999)
{
struct nctempchar1 *nctemp3009;
static struct nctempchar1 nctemp3010 = {{ 7}, (char*)"import\0"};
nctemp3009=&nctemp3010;
nctempchar1* nctemp3007= nctemp3009;
nctempchar1* nctemp3013=ScanGetext();
nctempchar1* nctemp3011= nctemp3013;
struct tree* nctemp3014=ParseMknode(nctemp3007,nctemp3011);
imp =nctemp3014;
int nctemp3016= 1;
int nctemp3018=ParseMatch(nctemp3016);
int nctemp3020= 10;
int nctemp3022=ParseMatch(nctemp3020);
struct nctempchar1 *nctemp3029;
static struct nctempchar1 nctemp3030 = {{ 8}, (char*)"extdecl\0"};
nctemp3029=&nctemp3030;
nctempchar1* nctemp3027= nctemp3029;
struct nctempchar1 *nctemp3033;
static struct nctempchar1 nctemp3034 = {{ 5}, (char*)"void\0"};
nctemp3033=&nctemp3034;
nctempchar1* nctemp3031= nctemp3033;
struct tree* nctemp3035=ParseMknode(nctemp3027,nctemp3031);
sp =nctemp3035;
struct tree* nctemp3037= sp;
struct tree* nctemp3039= imp;
int nctemp3041=PtreeAddchild(nctemp3037,nctemp3039);
}
return sp;
}
else{
int nctemp3043 = (lookahead ==1100);
if(nctemp3043)
{
int nctemp3048= 1100;
int nctemp3050=ParseMatch(nctemp3048);
struct nctempchar1 *nctemp3057;
static struct nctempchar1 nctemp3058 = {{ 8}, (char*)"extdecl\0"};
nctemp3057=&nctemp3058;
nctempchar1* nctemp3055= nctemp3057;
struct nctempchar1 *nctemp3061;
static struct nctempchar1 nctemp3062 = {{ 5}, (char*)"void\0"};
nctemp3061=&nctemp3062;
nctempchar1* nctemp3059= nctemp3061;
struct tree* nctemp3063=ParseMknode(nctemp3055,nctemp3059);
sp =nctemp3063;
struct tree* nctemp3065= sp;
int nctemp3067=ParseFdef(nctemp3065);
return sp;
}
else{
struct nctempchar1 *nctemp3072;
static struct nctempchar1 nctemp3073 = {{ 13}, (char*)"Syntax error\0"};
nctemp3072=&nctemp3073;
nctempchar1* nctemp3070= nctemp3072;
int nctemp3074=ParseError(nctemp3070);
}
}
}
int nctemp3075 = (lookahead ==58);
if(nctemp3075)
{
int nctemp3080= lookahead;
int nctemp3082=ParseMatch(nctemp3080);
int nctemp3084= 10;
int nctemp3086=ParseMatch(nctemp3084);
int nctemp3088= 600;
int nctemp3090=ParseMatch(nctemp3088);
struct nctempchar1 *nctemp3097;
static struct nctempchar1 nctemp3098 = {{ 8}, (char*)"extdecl\0"};
nctemp3097=&nctemp3098;
nctempchar1* nctemp3095= nctemp3097;
struct nctempchar1 *nctemp3101;
static struct nctempchar1 nctemp3102 = {{ 5}, (char*)"void\0"};
nctemp3101=&nctemp3102;
nctempchar1* nctemp3099= nctemp3101;
struct tree* nctemp3103=ParseMknode(nctemp3095,nctemp3099);
sp =nctemp3103;
struct tree* nctemp3105= sp;
struct tree* nctemp3107= np;
int nctemp3109=PtreeAddchild(nctemp3105,nctemp3107);
struct tree* nctemp3111= np;
int nctemp3113=ParseStructdeclar(nctemp3111);
return sp;
}
int nctemp3115 = (lookahead ==1);
if(nctemp3115)
{
struct nctempchar1 *nctemp3125;
static struct nctempchar1 nctemp3126 = {{ 8}, (char*)"extdecl\0"};
nctemp3125=&nctemp3126;
nctempchar1* nctemp3123= nctemp3125;
struct nctempchar1 *nctemp3129;
static struct nctempchar1 nctemp3130 = {{ 5}, (char*)"void\0"};
nctemp3129=&nctemp3130;
nctempchar1* nctemp3127= nctemp3129;
struct tree* nctemp3131=ParseMknode(nctemp3123,nctemp3127);
sp =nctemp3131;
struct tree* nctemp3133= sp;
struct tree* nctemp3135= np;
int nctemp3137=PtreeAddchild(nctemp3133,nctemp3135);
struct nctempchar1 *nctemp3144;
static struct nctempchar1 nctemp3145 = {{ 11}, (char*)"identifier\0"};
nctemp3144=&nctemp3145;
nctempchar1* nctemp3142= nctemp3144;
nctempchar1* nctemp3148=ScanGetext();
nctempchar1* nctemp3146= nctemp3148;
struct tree* nctemp3149=ParseMknode(nctemp3142,nctemp3146);
mp =nctemp3149;
struct tree* nctemp3151= np;
struct tree* nctemp3153= mp;
int nctemp3155=PtreeAddchild(nctemp3151,nctemp3153);
int nctemp3157= lookahead;
int nctemp3159=ParseMatch(nctemp3157);
int nctemp3160 = (lookahead ==44);
if(nctemp3160)
{
struct tree* nctemp3165= np;
int nctemp3167=ParseIdseq(nctemp3165);
int nctemp3168 = (lookahead ==59);
if(nctemp3168)
{
int nctemp3173= 59;
int nctemp3175=ParseMatch(nctemp3173);
}
int nctemp3177= 10;
int nctemp3179=ParseMatch(nctemp3177);
}
else{
int nctemp3180 = (lookahead ==61);
if(nctemp3180)
{
int nctemp3185= lookahead;
int nctemp3187=ParseMatch(nctemp3185);
struct tree* nctemp3189= mp;
int nctemp3191=ParseConstdecl(nctemp3189);
int nctemp3193= 10;
int nctemp3195=ParseMatch(nctemp3193);
}
else{
int nctemp3196 = (lookahead ==59);
if(nctemp3196)
{
int nctemp3201= 59;
int nctemp3203=ParseMatch(nctemp3201);
}
int nctemp3205= 10;
int nctemp3207=ParseMatch(nctemp3205);
}
}
}
else{
struct nctempchar1 *nctemp3211;
static struct nctempchar1 nctemp3212 = {{ 13}, (char*)"Syntax error\0"};
nctemp3211=&nctemp3212;
nctempchar1* nctemp3209= nctemp3211;
int nctemp3213=ParseError(nctemp3209);
}
return sp;
}
struct tree* ParseParse ()
{
struct tree* np;
np = 0;
int nctemp3215 = (lookahead ==19);
if(nctemp3215)
{
return np;
}
else{
int nctemp3220 = (lookahead ==600);
if(nctemp3220)
{
int nctemp3225= 600;
int nctemp3227=ParseMatch(nctemp3225);
}
struct tree* nctemp3232=ParseExtdecl();
np =nctemp3232;
}
return np;
}
