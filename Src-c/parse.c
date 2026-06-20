//  Translated by epsc  version: Sat Jun 20 16:48:06 2026

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
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int LibeErrinit ();
int LibeGeterrno ();
int LibeClearerr ();
nctempchar1 * LibeGeterrstr ();
nctempchar1 * LibeGetenv (nctempchar1 *name);
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
int LibeSetnb (int nb);
int LibeSetnt (int nt);
int LibeGetnb ();
int LibeGetnt ();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeSystem (nctempchar1 *cmd);
int LibeInit ();
int LibeExit ();
nctempchar1 * LibeDate ();
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
static int lookahead;
int ParseIniparse ()
{
{
int nctemp5=ScanGetok();
lookahead =nctemp5;
return 1;
}
}
struct tree* ParseExpr ()
;
struct tree* ParseAsgexpr (struct tree* p)
;
struct tree* ParseStmnt ()
;
struct tree* ParseElsestmnt ()
;
struct tree* ParseIfstmnt ()
;
struct tree* ParseCompstmnt ()
;
int ParseError (nctempchar1 *s)
{
{
nctempchar1* nctemp10=ScanGetfile();
nctempchar1* nctemp8= nctemp10;
int nctemp13=ScanGetline();
int nctemp11= nctemp13;
nctempchar1* nctemp14= s;
int nctemp17=ErrError(nctemp8,nctemp11,nctemp14);
return 1;
}
}
int ParseGetlookahead ()
{
{
return lookahead;
}
}
int ParseMatch (int t)
{
{
int nctemp20 = (lookahead ==t);
if(nctemp20)
{
{
int nctemp28=ScanGetok();
lookahead =nctemp28;
}
}
else{
{
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
}
return 1;
}
}
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *defn)
{
struct tree* p;
{
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
}
struct tree* ParseExprseq (struct tree* p)
{
{
int nctemp93 = (lookahead ==44);
if(nctemp93)
{
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
}
p =0;
return p;
}
}
struct tree* ParseExprlist ()
{
struct tree* np;
struct tree* sp;
{
struct tree* nctemp120=ParseExpr();
np =nctemp120;
int nctemp121 = (np !=0);
if(nctemp121)
{
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
}
else{
{
sp = 0;
}
}
return sp;
}
}
int ParseArrayarg (struct tree* p)
{
struct tree* np;
struct tree* sp;
{
int nctemp149 = (lookahead ==42);
if(nctemp149)
{
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
{
int nctemp181= lookahead;
int nctemp183=ParseMatch(nctemp181);
struct tree* nctemp185= p;
int nctemp187=ParseArrayarg(nctemp185);
}
}
else{
{
return 1;
}
}
}
}
else{
{
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
{
struct tree* nctemp218= sp;
struct tree* nctemp220= np;
int nctemp222=PtreeAddchild(nctemp218,nctemp220);
}
}
else{
{
struct nctempchar1 *nctemp226;
static struct nctempchar1 nctemp227 = {{ 13}, (char*)"Syntax error\0"};
nctemp226=&nctemp227;
nctempchar1* nctemp224= nctemp226;
int nctemp228=ParseError(nctemp224);
}
}
return 1;
}
}
return 1;
}
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
{
int nctemp231 = (lookahead ==44);
if(nctemp231)
{
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
}
else{
{
return 1;
}
}
return 1;
}
}
int ParseConstdecl (struct tree* p)
{
nctempchar1 *sign;
nctempchar1 *tmp;
nctempchar1 *value;
struct tree* np;
{
sign  = 0;
int nctemp267 = (lookahead ==45);
if(nctemp267)
{
{
int nctemp272= 45;
int nctemp274=ParseMatch(nctemp272);
struct nctempchar1 *nctemp280;
static struct nctempchar1 nctemp281 = {{ 2}, (char*)"-\0"};
nctemp280=&nctemp281;
sign=nctemp280;
}
}
nctempchar1* nctemp287=ScanGetext();
tmp=nctemp287;
nctempchar1 *nctemp289 =sign;
int nctemp288 =(nctemp289!=0);
if(nctemp288)
{
{
nctempchar1* nctemp298= sign;
nctempchar1* nctemp301= tmp;
nctempchar1* nctemp304=LibeStradd(nctemp298,nctemp301);
value=nctemp304;
}
}
else{
{
value = tmp;
}
}
int nctemp305 = (lookahead ==17);
if(nctemp305)
{
{
struct nctempchar1 *nctemp315;
static struct nctempchar1 nctemp316 = {{ 10}, (char*)"iconstant\0"};
nctemp315=&nctemp316;
nctempchar1* nctemp313= nctemp315;
nctempchar1* nctemp317= value;
struct tree* nctemp320=ParseMknode(nctemp313,nctemp317);
np =nctemp320;
}
}
else{
{
int nctemp321 = (lookahead ==24);
if(nctemp321)
{
{
struct nctempchar1 *nctemp331;
static struct nctempchar1 nctemp332 = {{ 10}, (char*)"rconstant\0"};
nctemp331=&nctemp332;
nctempchar1* nctemp329= nctemp331;
nctempchar1* nctemp333= value;
struct tree* nctemp336=ParseMknode(nctemp329,nctemp333);
np =nctemp336;
}
}
else{
{
int nctemp337 = (lookahead ==18);
if(nctemp337)
{
{
struct nctempchar1 *nctemp347;
static struct nctempchar1 nctemp348 = {{ 10}, (char*)"sconstant\0"};
nctemp347=&nctemp348;
nctempchar1* nctemp345= nctemp347;
nctempchar1* nctemp349= value;
struct tree* nctemp352=ParseMknode(nctemp345,nctemp349);
np =nctemp352;
}
}
}
}
}
}
int nctemp353 = (np !=0);
if(nctemp353)
{
{
struct tree* nctemp358= p;
struct tree* nctemp360= np;
int nctemp362=PtreeAddchild(nctemp358,nctemp360);
}
}
int nctemp364= lookahead;
int nctemp366=ParseMatch(nctemp364);
return 1;
}
}
struct tree* ParseType ()
{
struct tree* np;
struct tree* sp;
{
int nctemp380 = (lookahead ==7);
int nctemp385 = (lookahead ==9);
int nctemp377 = (nctemp380 || nctemp385);
int nctemp390 = (lookahead ==8);
int nctemp374 = (nctemp377 || nctemp390);
int nctemp395 = (lookahead ==431);
int nctemp371 = (nctemp374 || nctemp395);
int nctemp400 = (lookahead ==510);
int nctemp368 = (nctemp371 || nctemp400);
if(nctemp368)
{
{
struct nctempchar1 *nctemp410;
static struct nctempchar1 nctemp411 = {{ 5}, (char*)"type\0"};
nctemp410=&nctemp411;
nctempchar1* nctemp408= nctemp410;
nctempchar1* nctemp414=ScanGetext();
nctempchar1* nctemp412= nctemp414;
struct tree* nctemp415=ParseMknode(nctemp408,nctemp412);
np =nctemp415;
int nctemp417= lookahead;
int nctemp419=ParseMatch(nctemp417);
}
}
else{
{
int nctemp420 = (lookahead ==11);
if(nctemp420)
{
{
int nctemp425= lookahead;
int nctemp427=ParseMatch(nctemp425);
struct nctempchar1 *nctemp434;
static struct nctempchar1 nctemp435 = {{ 5}, (char*)"type\0"};
nctemp434=&nctemp435;
nctempchar1* nctemp432= nctemp434;
nctempchar1* nctemp438=ScanGetext();
nctempchar1* nctemp436= nctemp438;
struct tree* nctemp439=ParseMknode(nctemp432,nctemp436);
np =nctemp439;
struct tree* nctemp441= np;
struct nctempchar1 *nctemp445;
static struct nctempchar1 nctemp446 = {{ 7}, (char*)"struct\0"};
nctemp445=&nctemp446;
nctempchar1* nctemp443= nctemp445;
int nctemp447=PtreeSetstruct(nctemp441,nctemp443);
int nctemp449= 1;
int nctemp451=ParseMatch(nctemp449);
}
}
else{
{
np = 0;
}
}
}
}
int nctemp452 = (lookahead ==91);
if(nctemp452)
{
{
int nctemp456 = (np ==0);
if(nctemp456)
{
{
struct nctempchar1 *nctemp463;
static struct nctempchar1 nctemp464 = {{ 13}, (char*)"Missing type\0"};
nctemp463=&nctemp464;
nctempchar1* nctemp461= nctemp463;
int nctemp465=ParseError(nctemp461);
}
}
int nctemp467= lookahead;
int nctemp469=ParseMatch(nctemp467);
struct tree* nctemp471= np;
struct nctempchar1 *nctemp475;
static struct nctempchar1 nctemp476 = {{ 6}, (char*)"array\0"};
nctemp475=&nctemp476;
nctempchar1* nctemp473= nctemp475;
int nctemp477=PtreeSetarray(nctemp471,nctemp473);
struct nctempchar1 *nctemp484;
static struct nctempchar1 nctemp485 = {{ 10}, (char*)"arrayargs\0"};
nctemp484=&nctemp485;
nctempchar1* nctemp482= nctemp484;
struct nctempchar1 *nctemp488;
static struct nctempchar1 nctemp489 = {{ 5}, (char*)"void\0"};
nctemp488=&nctemp489;
nctempchar1* nctemp486= nctemp488;
struct tree* nctemp490=ParseMknode(nctemp482,nctemp486);
sp =nctemp490;
struct tree* nctemp492= np;
struct tree* nctemp494= sp;
int nctemp496=PtreeAddchild(nctemp492,nctemp494);
struct tree* nctemp498= sp;
int nctemp500=ParseArrayarg(nctemp498);
int nctemp502= 93;
int nctemp504=ParseMatch(nctemp502);
}
}
return np;
}
}
struct tree* ParseFcall (struct tree* p)
{
struct tree* np;
struct tree* sp;
{
struct nctempchar1 *nctemp512;
static struct nctempchar1 nctemp513 = {{ 6}, (char*)"fcall\0"};
nctemp512=&nctemp513;
nctempchar1* nctemp510= nctemp512;
struct tree* nctemp516= p;
nctempchar1* nctemp518=PtreeGetdef(nctemp516);
nctempchar1* nctemp514= nctemp518;
struct tree* nctemp519=PtreeMknode(nctemp510,nctemp514);
sp =nctemp519;
int nctemp521= 40;
int nctemp523=ParseMatch(nctemp521);
np = 0;
int nctemp524 = (lookahead !=41);
if(nctemp524)
{
{
struct tree* nctemp532=ParseExprlist();
np =nctemp532;
}
}
int nctemp534= 41;
int nctemp536=ParseMatch(nctemp534);
int nctemp537 = (np !=0);
if(nctemp537)
{
{
struct tree* nctemp542= sp;
struct tree* nctemp544= np;
int nctemp546=PtreeAddchild(nctemp542,nctemp544);
}
}
return sp;
}
}
struct tree* ParseIdent ()
{
struct tree* sp;
struct tree* np;
{
struct nctempchar1 *nctemp554;
static struct nctempchar1 nctemp555 = {{ 11}, (char*)"identifier\0"};
nctemp554=&nctemp555;
nctempchar1* nctemp552= nctemp554;
nctempchar1* nctemp558=ScanGetext();
nctempchar1* nctemp556= nctemp558;
struct tree* nctemp559=ParseMknode(nctemp552,nctemp556);
sp =nctemp559;
int nctemp561= 1;
int nctemp563=ParseMatch(nctemp561);
int nctemp564 = (lookahead ==91);
if(nctemp564)
{
{
int nctemp569= lookahead;
int nctemp571=ParseMatch(nctemp569);
struct tree* nctemp573= sp;
struct nctempchar1 *nctemp577;
static struct nctempchar1 nctemp578 = {{ 6}, (char*)"array\0"};
nctemp577=&nctemp578;
nctempchar1* nctemp575= nctemp577;
int nctemp579=PtreeSetarray(nctemp573,nctemp575);
struct tree* nctemp584=ParseExprlist();
np =nctemp584;
struct tree* nctemp586= sp;
struct tree* nctemp588= np;
int nctemp590=PtreeAddchild(nctemp586,nctemp588);
int nctemp592= 93;
int nctemp594=ParseMatch(nctemp592);
}
}
int nctemp595 = (lookahead ==46);
if(nctemp595)
{
{
int nctemp600= 46;
int nctemp602=ParseMatch(nctemp600);
struct tree* nctemp607=ParseIdent();
np =nctemp607;
struct tree* nctemp609= sp;
struct tree* nctemp611= np;
int nctemp613=PtreeAddchild(nctemp609,nctemp611);
struct tree* nctemp615= np;
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 9}, (char*)"selector\0"};
nctemp619=&nctemp620;
nctempchar1* nctemp617= nctemp619;
int nctemp621=PtreeSetname(nctemp615,nctemp617);
}
}
return sp;
}
}
struct tree* ParseCast ()
{
struct tree* sp;
struct tree* np;
{
int nctemp624= 23;
int nctemp626=ParseMatch(nctemp624);
struct nctempchar1 *nctemp633;
static struct nctempchar1 nctemp634 = {{ 5}, (char*)"cast\0"};
nctemp633=&nctemp634;
nctempchar1* nctemp631= nctemp633;
struct nctempchar1 *nctemp637;
static struct nctempchar1 nctemp638 = {{ 5}, (char*)"void\0"};
nctemp637=&nctemp638;
nctempchar1* nctemp635= nctemp637;
struct tree* nctemp639=ParseMknode(nctemp631,nctemp635);
sp =nctemp639;
int nctemp641= 40;
int nctemp643=ParseMatch(nctemp641);
struct tree* nctemp648=ParseType();
np =nctemp648;
int nctemp649 = (np ==0);
if(nctemp649)
{
{
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 13}, (char*)"Syntax error\0"};
nctemp656=&nctemp657;
nctempchar1* nctemp654= nctemp656;
int nctemp658=ParseError(nctemp654);
}
}
else{
{
struct tree* nctemp660= sp;
struct tree* nctemp662= np;
int nctemp664=PtreeAddchild(nctemp660,nctemp662);
}
}
int nctemp666= 44;
int nctemp668=ParseMatch(nctemp666);
struct tree* nctemp673=ParseExpr();
np =nctemp673;
struct tree* nctemp675= sp;
struct tree* nctemp677= np;
int nctemp679=PtreeAddchild(nctemp675,nctemp677);
int nctemp681= 41;
int nctemp683=ParseMatch(nctemp681);
return sp;
}
}
struct tree* ParseNew ()
{
struct tree* sp;
struct tree* np;
{
int nctemp686= lookahead;
int nctemp688=ParseMatch(nctemp686);
struct nctempchar1 *nctemp695;
static struct nctempchar1 nctemp696 = {{ 4}, (char*)"new\0"};
nctemp695=&nctemp696;
nctempchar1* nctemp693= nctemp695;
struct nctempchar1 *nctemp699;
static struct nctempchar1 nctemp700 = {{ 5}, (char*)"void\0"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
struct tree* nctemp701=ParseMknode(nctemp693,nctemp697);
sp =nctemp701;
int nctemp703= 40;
int nctemp705=ParseMatch(nctemp703);
struct tree* nctemp710=ParseType();
np =nctemp710;
int nctemp711 = (np ==0);
if(nctemp711)
{
{
struct nctempchar1 *nctemp718;
static struct nctempchar1 nctemp719 = {{ 13}, (char*)"Syntax error\0"};
nctemp718=&nctemp719;
nctempchar1* nctemp716= nctemp718;
int nctemp720=ParseError(nctemp716);
}
}
else{
{
int nctemp722= 41;
int nctemp724=ParseMatch(nctemp722);
struct tree* nctemp726= sp;
struct tree* nctemp728= np;
int nctemp730=PtreeAddchild(nctemp726,nctemp728);
}
}
return sp;
}
}
struct tree* ParseDelete ()
{
struct tree* sp;
struct tree* np;
{
int nctemp733= lookahead;
int nctemp735=ParseMatch(nctemp733);
struct nctempchar1 *nctemp742;
static struct nctempchar1 nctemp743 = {{ 7}, (char*)"delete\0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
struct nctempchar1 *nctemp746;
static struct nctempchar1 nctemp747 = {{ 5}, (char*)"void\0"};
nctemp746=&nctemp747;
nctempchar1* nctemp744= nctemp746;
struct tree* nctemp748=ParseMknode(nctemp740,nctemp744);
sp =nctemp748;
int nctemp750= 40;
int nctemp752=ParseMatch(nctemp750);
struct tree* nctemp757=ParseExpr();
np =nctemp757;
int nctemp758 = (np ==0);
if(nctemp758)
{
{
struct nctempchar1 *nctemp765;
static struct nctempchar1 nctemp766 = {{ 14}, (char*)"xSyntax error\0"};
nctemp765=&nctemp766;
nctempchar1* nctemp763= nctemp765;
int nctemp767=ParseError(nctemp763);
}
}
else{
{
struct tree* nctemp769= sp;
struct tree* nctemp771= np;
int nctemp773=PtreeAddchild(nctemp769,nctemp771);
int nctemp775= 41;
int nctemp777=ParseMatch(nctemp775);
}
}
return sp;
}
}
struct tree* ParseCmplx ()
{
struct tree* sp;
struct tree* np;
{
int nctemp780= lookahead;
int nctemp782=ParseMatch(nctemp780);
struct nctempchar1 *nctemp789;
static struct nctempchar1 nctemp790 = {{ 6}, (char*)"cmplx\0"};
nctemp789=&nctemp790;
nctempchar1* nctemp787= nctemp789;
struct nctempchar1 *nctemp793;
static struct nctempchar1 nctemp794 = {{ 5}, (char*)"void\0"};
nctemp793=&nctemp794;
nctempchar1* nctemp791= nctemp793;
struct tree* nctemp795=ParseMknode(nctemp787,nctemp791);
sp =nctemp795;
int nctemp797= 40;
int nctemp799=ParseMatch(nctemp797);
struct tree* nctemp804=ParseExprlist();
np =nctemp804;
int nctemp805 = (np ==0);
if(nctemp805)
{
{
struct nctempchar1 *nctemp812;
static struct nctempchar1 nctemp813 = {{ 13}, (char*)"Syntax error\0"};
nctemp812=&nctemp813;
nctempchar1* nctemp810= nctemp812;
int nctemp814=ParseError(nctemp810);
}
}
else{
{
struct tree* nctemp816= sp;
struct tree* nctemp818= np;
int nctemp820=PtreeAddchild(nctemp816,nctemp818);
}
}
int nctemp822= 41;
int nctemp824=ParseMatch(nctemp822);
return sp;
}
}
struct tree* ParseRe ()
{
struct tree* sp;
struct tree* np;
{
int nctemp827= lookahead;
int nctemp829=ParseMatch(nctemp827);
int nctemp831= 40;
int nctemp833=ParseMatch(nctemp831);
struct nctempchar1 *nctemp840;
static struct nctempchar1 nctemp841 = {{ 3}, (char*)"re\0"};
nctemp840=&nctemp841;
nctempchar1* nctemp838= nctemp840;
struct nctempchar1 *nctemp844;
static struct nctempchar1 nctemp845 = {{ 5}, (char*)"void\0"};
nctemp844=&nctemp845;
nctempchar1* nctemp842= nctemp844;
struct tree* nctemp846=ParseMknode(nctemp838,nctemp842);
sp =nctemp846;
struct tree* nctemp851=ParseExpr();
np =nctemp851;
int nctemp852 = (np ==0);
if(nctemp852)
{
{
struct nctempchar1 *nctemp859;
static struct nctempchar1 nctemp860 = {{ 13}, (char*)"Syntax error\0"};
nctemp859=&nctemp860;
nctempchar1* nctemp857= nctemp859;
int nctemp861=ParseError(nctemp857);
}
}
else{
{
struct tree* nctemp863= sp;
struct tree* nctemp865= np;
int nctemp867=PtreeAddchild(nctemp863,nctemp865);
int nctemp869= 41;
int nctemp871=ParseMatch(nctemp869);
}
}
return sp;
}
}
struct tree* ParseIm ()
{
struct tree* sp;
struct tree* np;
{
int nctemp874= lookahead;
int nctemp876=ParseMatch(nctemp874);
struct nctempchar1 *nctemp883;
static struct nctempchar1 nctemp884 = {{ 3}, (char*)"im\0"};
nctemp883=&nctemp884;
nctempchar1* nctemp881= nctemp883;
struct nctempchar1 *nctemp887;
static struct nctempchar1 nctemp888 = {{ 5}, (char*)"void\0"};
nctemp887=&nctemp888;
nctempchar1* nctemp885= nctemp887;
struct tree* nctemp889=ParseMknode(nctemp881,nctemp885);
sp =nctemp889;
int nctemp891= 40;
int nctemp893=ParseMatch(nctemp891);
struct tree* nctemp898=ParseExpr();
np =nctemp898;
int nctemp899 = (np ==0);
if(nctemp899)
{
{
struct nctempchar1 *nctemp906;
static struct nctempchar1 nctemp907 = {{ 13}, (char*)"Syntax error\0"};
nctemp906=&nctemp907;
nctempchar1* nctemp904= nctemp906;
int nctemp908=ParseError(nctemp904);
}
}
else{
{
struct tree* nctemp910= sp;
struct tree* nctemp912= np;
int nctemp914=PtreeAddchild(nctemp910,nctemp912);
int nctemp916= 41;
int nctemp918=ParseMatch(nctemp916);
}
}
return sp;
}
}
struct tree* ParseLen ()
{
struct tree* sp;
struct tree* np;
struct tree* rp;
{
int nctemp921= lookahead;
int nctemp923=ParseMatch(nctemp921);
struct nctempchar1 *nctemp930;
static struct nctempchar1 nctemp931 = {{ 4}, (char*)"len\0"};
nctemp930=&nctemp931;
nctempchar1* nctemp928= nctemp930;
struct nctempchar1 *nctemp934;
static struct nctempchar1 nctemp935 = {{ 5}, (char*)"void\0"};
nctemp934=&nctemp935;
nctempchar1* nctemp932= nctemp934;
struct tree* nctemp936=ParseMknode(nctemp928,nctemp932);
sp =nctemp936;
int nctemp938= 40;
int nctemp940=ParseMatch(nctemp938);
struct tree* nctemp945=ParseExpr();
np =nctemp945;
int nctemp946 = (np ==0);
if(nctemp946)
{
{
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 13}, (char*)"Syntax error\0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
int nctemp955=ParseError(nctemp951);
}
}
else{
{
struct tree* nctemp957= sp;
struct tree* nctemp959= np;
int nctemp961=PtreeAddchild(nctemp957,nctemp959);
int nctemp963= 44;
int nctemp965=ParseMatch(nctemp963);
struct tree* nctemp970=ParseExpr();
rp =nctemp970;
int nctemp971 = (rp ==0);
if(nctemp971)
{
{
struct nctempchar1 *nctemp978;
static struct nctempchar1 nctemp979 = {{ 13}, (char*)"Syntax error\0"};
nctemp978=&nctemp979;
nctempchar1* nctemp976= nctemp978;
int nctemp980=ParseError(nctemp976);
}
}
else{
{
struct tree* nctemp982= np;
struct tree* nctemp984= rp;
int nctemp986=PtreeAddsister(nctemp982,nctemp984);
}
}
int nctemp988= 41;
int nctemp990=ParseMatch(nctemp988);
return sp;
}
}
}
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* sp;
struct tree* np;
{
int nctemp992 = (lookahead ==1);
if(nctemp992)
{
{
struct tree* nctemp1000=ParseIdent();
sp =nctemp1000;
int nctemp1001 = (lookahead ==40);
if(nctemp1001)
{
{
struct tree* nctemp1009= sp;
struct tree* nctemp1011=ParseFcall(nctemp1009);
np =nctemp1011;
sp = np;
}
}
}
}
else{
{
int nctemp1014 = (lookahead ==23);
if(nctemp1014)
{
{
struct tree* nctemp1022=ParseCast();
sp =nctemp1022;
}
}
else{
{
int nctemp1023 = (lookahead ==26);
if(nctemp1023)
{
{
struct tree* nctemp1031=ParseNew();
sp =nctemp1031;
}
}
else{
{
int nctemp1032 = (lookahead ==50);
if(nctemp1032)
{
{
struct tree* nctemp1040=ParseDelete();
sp =nctemp1040;
}
}
else{
{
int nctemp1041 = (lookahead ==25);
if(nctemp1041)
{
{
struct tree* nctemp1049=ParseCmplx();
sp =nctemp1049;
}
}
else{
{
int nctemp1050 = (lookahead ==28);
if(nctemp1050)
{
{
struct tree* nctemp1058=ParseRe();
sp =nctemp1058;
}
}
else{
{
int nctemp1059 = (lookahead ==27);
if(nctemp1059)
{
{
struct tree* nctemp1067=ParseIm();
sp =nctemp1067;
}
}
else{
{
int nctemp1068 = (lookahead ==29);
if(nctemp1068)
{
{
struct tree* nctemp1076=ParseLen();
sp =nctemp1076;
}
}
else{
{
int nctemp1077 = (lookahead ==17);
if(nctemp1077)
{
{
struct nctempchar1 *nctemp1087;
static struct nctempchar1 nctemp1088 = {{ 10}, (char*)"iconstant\0"};
nctemp1087=&nctemp1088;
nctempchar1* nctemp1085= nctemp1087;
nctempchar1* nctemp1091=ScanGetext();
nctempchar1* nctemp1089= nctemp1091;
struct tree* nctemp1092=ParseMknode(nctemp1085,nctemp1089);
sp =nctemp1092;
int nctemp1094= 17;
int nctemp1096=ParseMatch(nctemp1094);
}
}
else{
{
int nctemp1097 = (lookahead ==24);
if(nctemp1097)
{
{
struct nctempchar1 *nctemp1107;
static struct nctempchar1 nctemp1108 = {{ 10}, (char*)"rconstant\0"};
nctemp1107=&nctemp1108;
nctempchar1* nctemp1105= nctemp1107;
nctempchar1* nctemp1111=ScanGetext();
nctempchar1* nctemp1109= nctemp1111;
struct tree* nctemp1112=ParseMknode(nctemp1105,nctemp1109);
sp =nctemp1112;
int nctemp1114= 24;
int nctemp1116=ParseMatch(nctemp1114);
}
}
else{
{
int nctemp1117 = (lookahead ==18);
if(nctemp1117)
{
{
struct nctempchar1 *nctemp1127;
static struct nctempchar1 nctemp1128 = {{ 10}, (char*)"sconstant\0"};
nctemp1127=&nctemp1128;
nctempchar1* nctemp1125= nctemp1127;
nctempchar1* nctemp1131=ScanGetext();
nctempchar1* nctemp1129= nctemp1131;
struct tree* nctemp1132=ParseMknode(nctemp1125,nctemp1129);
sp =nctemp1132;
int nctemp1134= 18;
int nctemp1136=ParseMatch(nctemp1134);
}
}
else{
{
int nctemp1137 = (lookahead ==40);
if(nctemp1137)
{
{
int nctemp1142= 40;
int nctemp1144=ParseMatch(nctemp1142);
struct tree* nctemp1149= p;
struct tree* nctemp1151=ParseAsgexpr(nctemp1149);
sp =nctemp1151;
int nctemp1153= 41;
int nctemp1155=ParseMatch(nctemp1153);
}
}
else{
{
struct nctempchar1 *nctemp1159;
static struct nctempchar1 nctemp1160 = {{ 13}, (char*)"Syntax error\0"};
nctemp1159=&nctemp1160;
nctempchar1* nctemp1157= nctemp1159;
int nctemp1161=ParseError(nctemp1157);
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
}
struct tree* ParseUnexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
{
int nctemp1163 = (lookahead ==45);
if(nctemp1163)
{
{
struct nctempchar1 *nctemp1173;
static struct nctempchar1 nctemp1174 = {{ 7}, (char*)"unexpr\0"};
nctemp1173=&nctemp1174;
nctempchar1* nctemp1171= nctemp1173;
nctempchar1* nctemp1177=ScanGetext();
nctempchar1* nctemp1175= nctemp1177;
struct tree* nctemp1178=ParseMknode(nctemp1171,nctemp1175);
sp =nctemp1178;
int nctemp1180= lookahead;
int nctemp1182=ParseMatch(nctemp1180);
struct tree* nctemp1187= p;
struct tree* nctemp1189=ParseUnexpr(nctemp1187);
np =nctemp1189;
struct tree* nctemp1191= sp;
struct tree* nctemp1193= np;
int nctemp1195=PtreeAddchild(nctemp1191,nctemp1193);
}
}
else{
{
struct tree* nctemp1200= p;
struct tree* nctemp1202=ParsePrimexpr(nctemp1200);
sp =nctemp1202;
}
}
return sp;
}
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
{
int nctemp1207 = (lookahead ==42);
int nctemp1212 = (lookahead ==47);
int nctemp1204 = (nctemp1207 || nctemp1212);
if(nctemp1204)
{
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
struct tree* nctemp1244=ParseUnexpr(nctemp1242);
rp =nctemp1244;
struct tree* nctemp1246= np;
struct tree* nctemp1248= rp;
int nctemp1250=PtreeAddchild(nctemp1246,nctemp1248);
struct tree* nctemp1255= np;
struct tree* nctemp1257=ParseMultexprseq(nctemp1255);
sp =nctemp1257;
}
}
else{
{
sp = p;
}
}
return sp;
}
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp1263= p;
struct tree* nctemp1265=ParseUnexpr(nctemp1263);
np =nctemp1265;
struct tree* nctemp1270= np;
struct tree* nctemp1272=ParseMultexprseq(nctemp1270);
np =nctemp1272;
return np;
}
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
{
int nctemp1277 = (lookahead ==43);
int nctemp1282 = (lookahead ==45);
int nctemp1274 = (nctemp1277 || nctemp1282);
if(nctemp1274)
{
{
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 8}, (char*)"binexpr\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
nctempchar1* nctemp1296=ScanGetext();
nctempchar1* nctemp1294= nctemp1296;
struct tree* nctemp1297=ParseMknode(nctemp1290,nctemp1294);
np =nctemp1297;
int nctemp1299= lookahead;
int nctemp1301=ParseMatch(nctemp1299);
struct tree* nctemp1303= np;
struct tree* nctemp1305= p;
int nctemp1307=PtreeAddchild(nctemp1303,nctemp1305);
struct tree* nctemp1312= np;
struct tree* nctemp1314=ParseMultexpr(nctemp1312);
rp =nctemp1314;
struct tree* nctemp1316= np;
struct tree* nctemp1318= rp;
int nctemp1320=PtreeAddchild(nctemp1316,nctemp1318);
struct tree* nctemp1325= np;
struct tree* nctemp1327=ParseAddexprseq(nctemp1325);
sp =nctemp1327;
}
}
else{
{
sp = p;
}
}
return sp;
}
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp1333= p;
struct tree* nctemp1335=ParseMultexpr(nctemp1333);
np =nctemp1335;
struct tree* nctemp1340= np;
struct tree* nctemp1342=ParseAddexprseq(nctemp1340);
np =nctemp1342;
return np;
}
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
{
int nctemp1365 = (lookahead ==60);
int nctemp1370 = (lookahead ==62);
int nctemp1362 = (nctemp1365 || nctemp1370);
int nctemp1375 = (lookahead ==21);
int nctemp1359 = (nctemp1362 || nctemp1375);
int nctemp1380 = (lookahead ==3);
int nctemp1356 = (nctemp1359 || nctemp1380);
int nctemp1385 = (lookahead ==4);
int nctemp1353 = (nctemp1356 || nctemp1385);
int nctemp1390 = (lookahead ==5);
int nctemp1350 = (nctemp1353 || nctemp1390);
int nctemp1395 = (lookahead ==6);
int nctemp1347 = (nctemp1350 || nctemp1395);
int nctemp1400 = (lookahead ==20);
int nctemp1344 = (nctemp1347 || nctemp1400);
if(nctemp1344)
{
{
struct nctempchar1 *nctemp1410;
static struct nctempchar1 nctemp1411 = {{ 8}, (char*)"binexpr\0"};
nctemp1410=&nctemp1411;
nctempchar1* nctemp1408= nctemp1410;
nctempchar1* nctemp1414=ScanGetext();
nctempchar1* nctemp1412= nctemp1414;
struct tree* nctemp1415=ParseMknode(nctemp1408,nctemp1412);
np =nctemp1415;
int nctemp1417= lookahead;
int nctemp1419=ParseMatch(nctemp1417);
struct tree* nctemp1421= np;
struct tree* nctemp1423= p;
int nctemp1425=PtreeAddchild(nctemp1421,nctemp1423);
struct tree* nctemp1430= np;
struct tree* nctemp1432=ParseAddexpr(nctemp1430);
rp =nctemp1432;
struct tree* nctemp1434= np;
struct tree* nctemp1436= rp;
int nctemp1438=PtreeAddchild(nctemp1434,nctemp1436);
struct tree* nctemp1443= np;
struct tree* nctemp1445=ParseRelexprseq(nctemp1443);
sp =nctemp1445;
}
}
else{
{
sp = p;
}
}
return sp;
}
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp1451= p;
struct tree* nctemp1453=ParseAddexpr(nctemp1451);
np =nctemp1453;
struct tree* nctemp1458= np;
struct tree* nctemp1460=ParseRelexprseq(nctemp1458);
np =nctemp1460;
return np;
}
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
{
int nctemp1462 = (lookahead ==61);
if(nctemp1462)
{
{
struct nctempchar1 *nctemp1472;
static struct nctempchar1 nctemp1473 = {{ 8}, (char*)"binexpr\0"};
nctemp1472=&nctemp1473;
nctempchar1* nctemp1470= nctemp1472;
nctempchar1* nctemp1476=ScanGetext();
nctempchar1* nctemp1474= nctemp1476;
struct tree* nctemp1477=ParseMknode(nctemp1470,nctemp1474);
np =nctemp1477;
int nctemp1479= lookahead;
int nctemp1481=ParseMatch(nctemp1479);
struct tree* nctemp1483= np;
struct tree* nctemp1485= p;
int nctemp1487=PtreeAddchild(nctemp1483,nctemp1485);
struct tree* nctemp1492= np;
struct tree* nctemp1494=ParseRelexpr(nctemp1492);
rp =nctemp1494;
struct tree* nctemp1499= rp;
struct tree* nctemp1501=ParseAsgexprseq(nctemp1499);
sp =nctemp1501;
struct tree* nctemp1503= np;
struct tree* nctemp1505= sp;
int nctemp1507=PtreeAddchild(nctemp1503,nctemp1505);
}
}
else{
{
np = p;
}
}
return np;
}
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp1513= p;
struct tree* nctemp1515=ParseRelexpr(nctemp1513);
np =nctemp1515;
struct tree* nctemp1520= np;
struct tree* nctemp1522=ParseAsgexprseq(nctemp1520);
np =nctemp1522;
return np;
}
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
{
rp = 0;
struct tree* nctemp1528= rp;
struct tree* nctemp1530=ParseAsgexpr(nctemp1528);
np =nctemp1530;
int nctemp1531 = (np !=0);
if(nctemp1531)
{
{
struct nctempchar1 *nctemp1541;
static struct nctempchar1 nctemp1542 = {{ 5}, (char*)"expr\0"};
nctemp1541=&nctemp1542;
nctempchar1* nctemp1539= nctemp1541;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 5}, (char*)"void\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
struct tree* nctemp1547=ParseMknode(nctemp1539,nctemp1543);
sp =nctemp1547;
struct tree* nctemp1549= sp;
struct tree* nctemp1551= np;
int nctemp1553=PtreeAddchild(nctemp1549,nctemp1551);
np = sp;
}
}
return np;
}
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
{
struct tree* nctemp1559=ParseType();
np =nctemp1559;
int nctemp1560 = (np ==0);
if(nctemp1560)
{
{
return np;
}
}
int nctemp1565 = (lookahead ==1);
if(nctemp1565)
{
{
struct nctempchar1 *nctemp1575;
static struct nctempchar1 nctemp1576 = {{ 11}, (char*)"identifier\0"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
nctempchar1* nctemp1579=ScanGetext();
nctempchar1* nctemp1577= nctemp1579;
struct tree* nctemp1580=ParseMknode(nctemp1573,nctemp1577);
mp =nctemp1580;
struct tree* nctemp1582= np;
struct tree* nctemp1584= mp;
int nctemp1586=PtreeAddchild(nctemp1582,nctemp1584);
int nctemp1588= lookahead;
int nctemp1590=ParseMatch(nctemp1588);
int nctemp1591 = (lookahead ==44);
if(nctemp1591)
{
{
struct tree* nctemp1596= np;
int nctemp1598=ParseIdseq(nctemp1596);
}
}
else{
{
int nctemp1599 = (lookahead ==61);
if(nctemp1599)
{
{
int nctemp1604= lookahead;
int nctemp1606=ParseMatch(nctemp1604);
struct tree* nctemp1608= mp;
int nctemp1610=ParseConstdecl(nctemp1608);
}
}
}
}
int nctemp1612= 10;
int nctemp1614=ParseMatch(nctemp1612);
}
}
else{
{
struct nctempchar1 *nctemp1618;
static struct nctempchar1 nctemp1619 = {{ 35}, (char*)"Missing variable in type statement\0"};
nctemp1618=&nctemp1619;
nctempchar1* nctemp1616= nctemp1618;
int nctemp1620=ParseError(nctemp1616);
}
}
return np;
}
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
{
struct tree* nctemp1626=ParseDeclaration();
np =nctemp1626;
int nctemp1627 = (np !=0);
if(nctemp1627)
{
{
struct nctempchar1 *nctemp1637;
static struct nctempchar1 nctemp1638 = {{ 13}, (char*)"declarations\0"};
nctemp1637=&nctemp1638;
nctempchar1* nctemp1635= nctemp1637;
struct nctempchar1 *nctemp1641;
static struct nctempchar1 nctemp1642 = {{ 5}, (char*)"void\0"};
nctemp1641=&nctemp1642;
nctempchar1* nctemp1639= nctemp1641;
struct tree* nctemp1643=ParseMknode(nctemp1635,nctemp1639);
sp =nctemp1643;
struct tree* nctemp1645= sp;
struct tree* nctemp1647= np;
int nctemp1649=PtreeAddchild(nctemp1645,nctemp1647);
}
}
else{
{
np =0;
return np;
}
}
struct tree* nctemp1661=ParseDeclaration();
np =nctemp1661;
int nctemp1654 = (np !=0);
int nctemp1663=nctemp1654;
while(nctemp1663)
{{
{
struct tree* nctemp1665= sp;
struct tree* nctemp1667= np;
int nctemp1669=PtreeAddchild(nctemp1665,nctemp1667);
}
}
struct tree* nctemp1677=ParseDeclaration();
np =nctemp1677;
int nctemp1670 = (np !=0);
nctemp1663=nctemp1670;}return sp;
}
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
{
int nctemp1680 = (lookahead ==44);
if(nctemp1680)
{
{
int nctemp1685= lookahead;
int nctemp1687=ParseMatch(nctemp1685);
struct tree* nctemp1695=ParseType();
np =nctemp1695;
int nctemp1688 = (np !=0);
if(nctemp1688)
{
{
struct tree* nctemp1698= p;
struct tree* nctemp1700= np;
int nctemp1702=PtreeAddchild(nctemp1698,nctemp1700);
int nctemp1703 = (lookahead ==1);
if(nctemp1703)
{
{
struct nctempchar1 *nctemp1713;
static struct nctempchar1 nctemp1714 = {{ 11}, (char*)"identifier\0"};
nctemp1713=&nctemp1714;
nctempchar1* nctemp1711= nctemp1713;
nctempchar1* nctemp1717=ScanGetext();
nctempchar1* nctemp1715= nctemp1717;
struct tree* nctemp1718=ParseMknode(nctemp1711,nctemp1715);
sp =nctemp1718;
struct tree* nctemp1720= np;
struct tree* nctemp1722= sp;
int nctemp1724=PtreeAddchild(nctemp1720,nctemp1722);
int nctemp1726= 1;
int nctemp1728=ParseMatch(nctemp1726);
}
}
struct tree* nctemp1730= p;
int nctemp1732=ParseArgseq(nctemp1730);
}
}
}
}
return 1;
}
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
{
struct tree* nctemp1741=ParseType();
np =nctemp1741;
int nctemp1734 = (np !=0);
if(nctemp1734)
{
{
struct nctempchar1 *nctemp1749;
static struct nctempchar1 nctemp1750 = {{ 8}, (char*)"arglist\0"};
nctemp1749=&nctemp1750;
nctempchar1* nctemp1747= nctemp1749;
struct nctempchar1 *nctemp1753;
static struct nctempchar1 nctemp1754 = {{ 5}, (char*)"void\0"};
nctemp1753=&nctemp1754;
nctempchar1* nctemp1751= nctemp1753;
struct tree* nctemp1755=ParseMknode(nctemp1747,nctemp1751);
sp =nctemp1755;
struct tree* nctemp1757= sp;
struct tree* nctemp1759= np;
int nctemp1761=PtreeAddchild(nctemp1757,nctemp1759);
int nctemp1762 = (lookahead ==1);
if(nctemp1762)
{
{
struct nctempchar1 *nctemp1772;
static struct nctempchar1 nctemp1773 = {{ 11}, (char*)"identifier\0"};
nctemp1772=&nctemp1773;
nctempchar1* nctemp1770= nctemp1772;
nctempchar1* nctemp1776=ScanGetext();
nctempchar1* nctemp1774= nctemp1776;
struct tree* nctemp1777=ParseMknode(nctemp1770,nctemp1774);
mp =nctemp1777;
struct tree* nctemp1779= np;
struct tree* nctemp1781= mp;
int nctemp1783=PtreeAddchild(nctemp1779,nctemp1781);
int nctemp1785= 1;
int nctemp1787=ParseMatch(nctemp1785);
}
}
struct tree* nctemp1789= sp;
int nctemp1791=ParseArgseq(nctemp1789);
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
int ParseStructdeclar (struct tree* p)
{
struct tree* sp;
struct tree* np;
{
struct nctempchar1 *nctemp1799;
static struct nctempchar1 nctemp1800 = {{ 10}, (char*)"structdec\0"};
nctemp1799=&nctemp1800;
nctempchar1* nctemp1797= nctemp1799;
struct nctempchar1 *nctemp1803;
static struct nctempchar1 nctemp1804 = {{ 5}, (char*)"void\0"};
nctemp1803=&nctemp1804;
nctempchar1* nctemp1801= nctemp1803;
struct tree* nctemp1805=ParseMknode(nctemp1797,nctemp1801);
np =nctemp1805;
struct tree* nctemp1807= p;
struct tree* nctemp1809= np;
int nctemp1811=PtreeAddchild(nctemp1807,nctemp1809);
struct tree* nctemp1816=ParseDeclarations();
sp =nctemp1816;
struct tree* nctemp1818= np;
struct tree* nctemp1820= sp;
int nctemp1822=PtreeAddchild(nctemp1818,nctemp1820);
int nctemp1824= 601;
int nctemp1826=ParseMatch(nctemp1824);
return 1;
}
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
{
int nctemp1828 = (lookahead ==12);
if(nctemp1828)
{
{
struct nctempchar1 *nctemp1838;
static struct nctempchar1 nctemp1839 = {{ 6}, (char*)"while\0"};
nctemp1838=&nctemp1839;
nctempchar1* nctemp1836= nctemp1838;
struct nctempchar1 *nctemp1842;
static struct nctempchar1 nctemp1843 = {{ 5}, (char*)"void\0"};
nctemp1842=&nctemp1843;
nctempchar1* nctemp1840= nctemp1842;
struct tree* nctemp1844=ParseMknode(nctemp1836,nctemp1840);
np =nctemp1844;
int nctemp1846= 12;
int nctemp1848=ParseMatch(nctemp1846);
int nctemp1850= 40;
int nctemp1852=ParseMatch(nctemp1850);
struct tree* nctemp1860=ParseExpr();
sp =nctemp1860;
int nctemp1853 = (sp !=0);
if(nctemp1853)
{
{
struct tree* nctemp1863= np;
struct tree* nctemp1865= sp;
int nctemp1867=PtreeAddchild(nctemp1863,nctemp1865);
}
}
int nctemp1869= 41;
int nctemp1871=ParseMatch(nctemp1869);
struct tree* nctemp1876=ParseCompstmnt();
sp =nctemp1876;
struct tree* nctemp1878= np;
struct tree* nctemp1880= sp;
int nctemp1882=PtreeAddchild(nctemp1878,nctemp1880);
sp = np;
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
struct tree* ParseReturnstmnt ()
{
struct tree* np;
struct tree* sp;
{
int nctemp1884 = (lookahead ==30);
if(nctemp1884)
{
{
struct nctempchar1 *nctemp1894;
static struct nctempchar1 nctemp1895 = {{ 7}, (char*)"return\0"};
nctemp1894=&nctemp1895;
nctempchar1* nctemp1892= nctemp1894;
struct nctempchar1 *nctemp1898;
static struct nctempchar1 nctemp1899 = {{ 5}, (char*)"void\0"};
nctemp1898=&nctemp1899;
nctempchar1* nctemp1896= nctemp1898;
struct tree* nctemp1900=ParseMknode(nctemp1892,nctemp1896);
np =nctemp1900;
int nctemp1902= 30;
int nctemp1904=ParseMatch(nctemp1902);
struct tree* nctemp1912=ParseExpr();
sp =nctemp1912;
int nctemp1905 = (sp !=0);
if(nctemp1905)
{
{
struct tree* nctemp1915= np;
struct tree* nctemp1917= sp;
int nctemp1919=PtreeAddchild(nctemp1915,nctemp1917);
sp = np;
int nctemp1921= 10;
int nctemp1923=ParseMatch(nctemp1921);
}
}
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
struct tree* ParseForstmntc (struct tree* np)
{
struct tree* sp;
struct tree* rp;
{
int nctemp1926= 40;
int nctemp1928=ParseMatch(nctemp1926);
struct tree* nctemp1936=ParseExpr();
sp =nctemp1936;
int nctemp1929 = (sp !=0);
if(nctemp1929)
{
{
struct tree* nctemp1939= np;
struct tree* nctemp1941= sp;
int nctemp1943=PtreeAddchild(nctemp1939,nctemp1941);
int nctemp1945= 59;
int nctemp1947=ParseMatch(nctemp1945);
struct tree* nctemp1955=ParseExpr();
rp =nctemp1955;
int nctemp1948 = (rp !=0);
if(nctemp1948)
{
{
struct tree* nctemp1958= sp;
struct tree* nctemp1960= rp;
int nctemp1962=PtreeAddsister(nctemp1958,nctemp1960);
}
}
int nctemp1964= 59;
int nctemp1966=ParseMatch(nctemp1964);
struct tree* nctemp1974=ParseExpr();
rp =nctemp1974;
int nctemp1967 = (rp !=0);
if(nctemp1967)
{
{
struct tree* nctemp1977= sp;
struct tree* nctemp1979= rp;
int nctemp1981=PtreeAddsister(nctemp1977,nctemp1979);
}
}
int nctemp1983= 41;
int nctemp1985=ParseMatch(nctemp1983);
struct tree* nctemp1990=ParseCompstmnt();
sp =nctemp1990;
struct tree* nctemp1992= np;
struct tree* nctemp1994= sp;
int nctemp1996=PtreeAddchild(nctemp1992,nctemp1994);
sp = np;
}
}
else{
{
sp = 0;
}
}
return sp;
}
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
{
sp = 0;
int nctemp1998 = (lookahead ==1);
if(nctemp1998)
{
{
struct nctempchar1 *nctemp2008;
static struct nctempchar1 nctemp2009 = {{ 5}, (char*)"expr\0"};
nctemp2008=&nctemp2009;
nctempchar1* nctemp2006= nctemp2008;
struct nctempchar1 *nctemp2012;
static struct nctempchar1 nctemp2013 = {{ 5}, (char*)"void\0"};
nctemp2012=&nctemp2013;
nctempchar1* nctemp2010= nctemp2012;
struct tree* nctemp2014=PtreeMknode(nctemp2006,nctemp2010);
sp =nctemp2014;
struct tree* nctemp2016= np;
struct tree* nctemp2018= sp;
int nctemp2020=PtreeAddchild(nctemp2016,nctemp2018);
struct nctempchar1 *nctemp2027;
static struct nctempchar1 nctemp2028 = {{ 8}, (char*)"binexpr\0"};
nctemp2027=&nctemp2028;
nctempchar1* nctemp2025= nctemp2027;
struct nctempchar1 *nctemp2031;
static struct nctempchar1 nctemp2032 = {{ 2}, (char*)"=\0"};
nctemp2031=&nctemp2032;
nctempchar1* nctemp2029= nctemp2031;
struct tree* nctemp2033=PtreeMknode(nctemp2025,nctemp2029);
rp =nctemp2033;
struct tree* nctemp2035= sp;
struct tree* nctemp2037= rp;
int nctemp2039=PtreeAddchild(nctemp2035,nctemp2037);
nctempchar1* nctemp2047=ScanGetext();
nctempchar1* nctemp2045= nctemp2047;
nctempchar1* nctemp2048=LibeStrsave(nctemp2045);
id=nctemp2048;
struct nctempchar1 *nctemp2055;
static struct nctempchar1 nctemp2056 = {{ 11}, (char*)"identifier\0"};
nctemp2055=&nctemp2056;
nctempchar1* nctemp2053= nctemp2055;
nctempchar1* nctemp2059=ScanGetext();
nctempchar1* nctemp2057= nctemp2059;
struct tree* nctemp2060=PtreeMknode(nctemp2053,nctemp2057);
tp =nctemp2060;
struct tree* nctemp2062= rp;
struct tree* nctemp2064= tp;
int nctemp2066=PtreeAddchild(nctemp2062,nctemp2064);
int nctemp2068= 1;
int nctemp2070=ParseMatch(nctemp2068);
int nctemp2072= 702;
int nctemp2074=ParseMatch(nctemp2072);
int nctemp2076= 703;
int nctemp2078=ParseMatch(nctemp2076);
int nctemp2080= 40;
int nctemp2082=ParseMatch(nctemp2080);
struct tree* nctemp2087=ParseExpr();
qp =nctemp2087;
struct tree* nctemp2092= qp;
struct tree* nctemp2094=PtreeMvchild(nctemp2092);
qp =nctemp2094;
struct tree* nctemp2096= tp;
struct tree* nctemp2098= qp;
int nctemp2100=PtreeAddsister(nctemp2096,nctemp2098);
int nctemp2102= 44;
int nctemp2104=ParseMatch(nctemp2102);
struct tree* nctemp2109=ParseExpr();
mp =nctemp2109;
struct tree* nctemp2114= mp;
struct tree* nctemp2116=PtreeMvchild(nctemp2114);
mp =nctemp2116;
struct nctempchar1 *nctemp2123;
static struct nctempchar1 nctemp2124 = {{ 5}, (char*)"expr\0"};
nctemp2123=&nctemp2124;
nctempchar1* nctemp2121= nctemp2123;
struct nctempchar1 *nctemp2127;
static struct nctempchar1 nctemp2128 = {{ 5}, (char*)"void\0"};
nctemp2127=&nctemp2128;
nctempchar1* nctemp2125= nctemp2127;
struct tree* nctemp2129=PtreeMknode(nctemp2121,nctemp2125);
ap =nctemp2129;
struct tree* nctemp2131= sp;
struct tree* nctemp2133= ap;
int nctemp2135=PtreeAddsister(nctemp2131,nctemp2133);
struct nctempchar1 *nctemp2142;
static struct nctempchar1 nctemp2143 = {{ 8}, (char*)"binexpr\0"};
nctemp2142=&nctemp2143;
nctempchar1* nctemp2140= nctemp2142;
struct nctempchar1 *nctemp2146;
static struct nctempchar1 nctemp2147 = {{ 2}, (char*)"<\0"};
nctemp2146=&nctemp2147;
nctempchar1* nctemp2144= nctemp2146;
struct tree* nctemp2148=PtreeMknode(nctemp2140,nctemp2144);
bp =nctemp2148;
struct tree* nctemp2150= ap;
struct tree* nctemp2152= bp;
int nctemp2154=PtreeAddchild(nctemp2150,nctemp2152);
struct nctempchar1 *nctemp2161;
static struct nctempchar1 nctemp2162 = {{ 11}, (char*)"identifier\0"};
nctemp2161=&nctemp2162;
nctempchar1* nctemp2159= nctemp2161;
nctempchar1* nctemp2163= id;
struct tree* nctemp2166=PtreeMknode(nctemp2159,nctemp2163);
cp =nctemp2166;
struct tree* nctemp2168= bp;
struct tree* nctemp2170= cp;
int nctemp2172=PtreeAddchild(nctemp2168,nctemp2170);
struct tree* nctemp2174= cp;
struct tree* nctemp2176= mp;
int nctemp2178=PtreeAddsister(nctemp2174,nctemp2176);
struct nctempchar1 *nctemp2185;
static struct nctempchar1 nctemp2186 = {{ 5}, (char*)"expr\0"};
nctemp2185=&nctemp2186;
nctempchar1* nctemp2183= nctemp2185;
struct nctempchar1 *nctemp2189;
static struct nctempchar1 nctemp2190 = {{ 5}, (char*)"void\0"};
nctemp2189=&nctemp2190;
nctempchar1* nctemp2187= nctemp2189;
struct tree* nctemp2191=PtreeMknode(nctemp2183,nctemp2187);
dp =nctemp2191;
struct tree* nctemp2193= sp;
struct tree* nctemp2195= dp;
int nctemp2197=PtreeAddsister(nctemp2193,nctemp2195);
struct nctempchar1 *nctemp2204;
static struct nctempchar1 nctemp2205 = {{ 8}, (char*)"binexpr\0"};
nctemp2204=&nctemp2205;
nctempchar1* nctemp2202= nctemp2204;
struct nctempchar1 *nctemp2208;
static struct nctempchar1 nctemp2209 = {{ 2}, (char*)"=\0"};
nctemp2208=&nctemp2209;
nctempchar1* nctemp2206= nctemp2208;
struct tree* nctemp2210=PtreeMknode(nctemp2202,nctemp2206);
ep =nctemp2210;
struct tree* nctemp2212= dp;
struct tree* nctemp2214= ep;
int nctemp2216=PtreeAddchild(nctemp2212,nctemp2214);
struct nctempchar1 *nctemp2223;
static struct nctempchar1 nctemp2224 = {{ 11}, (char*)"identifier\0"};
nctemp2223=&nctemp2224;
nctempchar1* nctemp2221= nctemp2223;
nctempchar1* nctemp2225= id;
struct tree* nctemp2228=PtreeMknode(nctemp2221,nctemp2225);
fp =nctemp2228;
struct tree* nctemp2230= ep;
struct tree* nctemp2232= fp;
int nctemp2234=PtreeAddchild(nctemp2230,nctemp2232);
struct nctempchar1 *nctemp2241;
static struct nctempchar1 nctemp2242 = {{ 8}, (char*)"binexpr\0"};
nctemp2241=&nctemp2242;
nctempchar1* nctemp2239= nctemp2241;
struct nctempchar1 *nctemp2245;
static struct nctempchar1 nctemp2246 = {{ 2}, (char*)"+\0"};
nctemp2245=&nctemp2246;
nctempchar1* nctemp2243= nctemp2245;
struct tree* nctemp2247=PtreeMknode(nctemp2239,nctemp2243);
gp =nctemp2247;
struct tree* nctemp2249= fp;
struct tree* nctemp2251= gp;
int nctemp2253=PtreeAddsister(nctemp2249,nctemp2251);
struct nctempchar1 *nctemp2260;
static struct nctempchar1 nctemp2261 = {{ 11}, (char*)"identifier\0"};
nctemp2260=&nctemp2261;
nctempchar1* nctemp2258= nctemp2260;
nctempchar1* nctemp2262= id;
struct tree* nctemp2265=PtreeMknode(nctemp2258,nctemp2262);
hp =nctemp2265;
struct tree* nctemp2267= gp;
struct tree* nctemp2269= hp;
int nctemp2271=PtreeAddchild(nctemp2267,nctemp2269);
struct nctempchar1 *nctemp2278;
static struct nctempchar1 nctemp2279 = {{ 10}, (char*)"iconstant\0"};
nctemp2278=&nctemp2279;
nctempchar1* nctemp2276= nctemp2278;
struct nctempchar1 *nctemp2282;
static struct nctempchar1 nctemp2283 = {{ 2}, (char*)"1\0"};
nctemp2282=&nctemp2283;
nctempchar1* nctemp2280= nctemp2282;
struct tree* nctemp2284=PtreeMknode(nctemp2276,nctemp2280);
ip =nctemp2284;
struct tree* nctemp2286= hp;
struct tree* nctemp2288= ip;
int nctemp2290=PtreeAddsister(nctemp2286,nctemp2288);
int nctemp2292= 41;
int nctemp2294=ParseMatch(nctemp2292);
struct tree* nctemp2299=ParseCompstmnt();
jp =nctemp2299;
struct tree* nctemp2301= sp;
struct tree* nctemp2303= jp;
int nctemp2305=PtreeAddsister(nctemp2301,nctemp2303);
}
}
return np;
}
}
struct tree* ParseForstmnt ()
{
struct tree* np;
struct tree* sp;
{
int nctemp2307 = (lookahead ==26);
if(nctemp2307)
{
{
struct nctempchar1 *nctemp2317;
static struct nctempchar1 nctemp2318 = {{ 4}, (char*)"for\0"};
nctemp2317=&nctemp2318;
nctempchar1* nctemp2315= nctemp2317;
struct nctempchar1 *nctemp2321;
static struct nctempchar1 nctemp2322 = {{ 5}, (char*)"void\0"};
nctemp2321=&nctemp2322;
nctempchar1* nctemp2319= nctemp2321;
struct tree* nctemp2323=ParseMknode(nctemp2315,nctemp2319);
np =nctemp2323;
int nctemp2325= 26;
int nctemp2327=ParseMatch(nctemp2325);
int nctemp2328 = (lookahead =='(');
if(nctemp2328)
{
{
struct tree* nctemp2336= np;
struct tree* nctemp2338=ParseForstmntc(nctemp2336);
sp =nctemp2338;
}
}
else{
{
struct tree* nctemp2343= np;
struct tree* nctemp2345=ParseForstmntpy(nctemp2343);
sp =nctemp2345;
}
}
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
struct tree* ParseSlice ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
{
struct tree* nctemp2354=ParseExpr();
sp =nctemp2354;
int nctemp2347 = (sp !=0);
if(nctemp2347)
{
{
struct nctempchar1 *nctemp2362;
static struct nctempchar1 nctemp2363 = {{ 6}, (char*)"slice\0"};
nctemp2362=&nctemp2363;
nctempchar1* nctemp2360= nctemp2362;
struct nctempchar1 *nctemp2366;
static struct nctempchar1 nctemp2367 = {{ 5}, (char*)"void\0"};
nctemp2366=&nctemp2367;
nctempchar1* nctemp2364= nctemp2366;
struct tree* nctemp2368=ParseMknode(nctemp2360,nctemp2364);
np =nctemp2368;
struct tree* nctemp2370= np;
struct tree* nctemp2372= sp;
int nctemp2374=PtreeAddchild(nctemp2370,nctemp2372);
int nctemp2376= 58;
int nctemp2378=ParseMatch(nctemp2376);
struct tree* nctemp2386=ParseExpr();
rp =nctemp2386;
int nctemp2379 = (rp !=0);
if(nctemp2379)
{
{
struct tree* nctemp2389= np;
struct tree* nctemp2391= rp;
int nctemp2393=PtreeAddchild(nctemp2389,nctemp2391);
}
}
int nctemp2394 = (lookahead ==58);
if(nctemp2394)
{
{
int nctemp2399= 58;
int nctemp2401=ParseMatch(nctemp2399);
struct tree* nctemp2409=ParseExpr();
rp =nctemp2409;
int nctemp2402 = (rp !=0);
if(nctemp2402)
{
{
struct tree* nctemp2412= np;
struct tree* nctemp2414= rp;
int nctemp2416=PtreeAddchild(nctemp2412,nctemp2414);
}
}
else{
{
struct nctempchar1 *nctemp2420;
static struct nctempchar1 nctemp2421 = {{ 13}, (char*)"Syntax error\0"};
nctemp2420=&nctemp2421;
nctempchar1* nctemp2418= nctemp2420;
int nctemp2422=ParseError(nctemp2418);
}
}
}
}
}
}
else{
{
struct nctempchar1 *nctemp2426;
static struct nctempchar1 nctemp2427 = {{ 13}, (char*)"Syntax error\0"};
nctemp2426=&nctemp2427;
nctempchar1* nctemp2424= nctemp2426;
int nctemp2428=ParseError(nctemp2424);
}
}
return np;
}
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
{
struct tree* nctemp2437=ParseSlice();
sp =nctemp2437;
int nctemp2430 = (sp !=0);
if(nctemp2430)
{
{
struct tree* nctemp2440= np;
struct tree* nctemp2442= sp;
int nctemp2444=PtreeAddchild(nctemp2440,nctemp2442);
}
}
else{
{
struct nctempchar1 *nctemp2448;
static struct nctempchar1 nctemp2449 = {{ 13}, (char*)"Syntax error\0"};
nctemp2448=&nctemp2449;
nctempchar1* nctemp2446= nctemp2448;
int nctemp2450=ParseError(nctemp2446);
}
}
int nctemp2451 = (lookahead ==44);
if(nctemp2451)
{
{
int nctemp2456= 44;
int nctemp2458=ParseMatch(nctemp2456);
struct tree* nctemp2460= np;
struct tree* nctemp2462=ParseSliceseq(nctemp2460);
}
}
else{
{
return np;
}
}
return np;
}
}
struct tree* ParseParallelstmnt ()
{
struct tree* np;
struct tree* rp;
struct tree* sp;
{
int nctemp2465 = (lookahead ==31);
if(nctemp2465)
{
{
struct nctempchar1 *nctemp2475;
static struct nctempchar1 nctemp2476 = {{ 9}, (char*)"parallel\0"};
nctemp2475=&nctemp2476;
nctempchar1* nctemp2473= nctemp2475;
struct nctempchar1 *nctemp2479;
static struct nctempchar1 nctemp2480 = {{ 5}, (char*)"void\0"};
nctemp2479=&nctemp2480;
nctempchar1* nctemp2477= nctemp2479;
struct tree* nctemp2481=ParseMknode(nctemp2473,nctemp2477);
np =nctemp2481;
int nctemp2483= 31;
int nctemp2485=ParseMatch(nctemp2483);
int nctemp2487= 40;
int nctemp2489=ParseMatch(nctemp2487);
struct nctempchar1 *nctemp2496;
static struct nctempchar1 nctemp2497 = {{ 9}, (char*)"sliceseq\0"};
nctemp2496=&nctemp2497;
nctempchar1* nctemp2494= nctemp2496;
struct nctempchar1 *nctemp2500;
static struct nctempchar1 nctemp2501 = {{ 5}, (char*)"void\0"};
nctemp2500=&nctemp2501;
nctempchar1* nctemp2498= nctemp2500;
struct tree* nctemp2502=ParseMknode(nctemp2494,nctemp2498);
rp =nctemp2502;
struct tree* nctemp2504= np;
struct tree* nctemp2506= rp;
int nctemp2508=PtreeAddchild(nctemp2504,nctemp2506);
struct tree* nctemp2516= rp;
struct tree* nctemp2518=ParseSliceseq(nctemp2516);
sp =nctemp2518;
int nctemp2509 = (sp ==0);
if(nctemp2509)
{
{
struct nctempchar1 *nctemp2523;
static struct nctempchar1 nctemp2524 = {{ 13}, (char*)"Syntax error\0"};
nctemp2523=&nctemp2524;
nctempchar1* nctemp2521= nctemp2523;
int nctemp2525=ParseError(nctemp2521);
}
}
int nctemp2526 = (lookahead ==41);
if(nctemp2526)
{
{
int nctemp2531= 41;
int nctemp2533=ParseMatch(nctemp2531);
struct tree* nctemp2538=ParseCompstmnt();
sp =nctemp2538;
struct tree* nctemp2540= np;
struct tree* nctemp2542= sp;
int nctemp2544=PtreeAddchild(nctemp2540,nctemp2542);
return np;
}
}
else{
{
struct nctempchar1 *nctemp2549;
static struct nctempchar1 nctemp2550 = {{ 13}, (char*)"Syntax error\0"};
nctemp2549=&nctemp2550;
nctempchar1* nctemp2547= nctemp2549;
int nctemp2551=ParseError(nctemp2547);
}
}
}
}
else{
{
rp =0;
return rp;
}
}
rp =0;
return rp;
}
}
struct tree* ParseElifstmnt ()
{
struct tree* sp;
struct tree* np;
struct tree* rp;
struct tree* qp;
struct tree* tp;
struct tree* up;
{
int nctemp2560 = (lookahead ==300);
if(nctemp2560)
{
{
int nctemp2565= 300;
int nctemp2567=ParseMatch(nctemp2565);
struct nctempchar1 *nctemp2574;
static struct nctempchar1 nctemp2575 = {{ 5}, (char*)"else\0"};
nctemp2574=&nctemp2575;
nctempchar1* nctemp2572= nctemp2574;
struct nctempchar1 *nctemp2578;
static struct nctempchar1 nctemp2579 = {{ 5}, (char*)"void\0"};
nctemp2578=&nctemp2579;
nctempchar1* nctemp2576= nctemp2578;
struct tree* nctemp2580=ParseMknode(nctemp2572,nctemp2576);
sp =nctemp2580;
struct nctempchar1 *nctemp2587;
static struct nctempchar1 nctemp2588 = {{ 10}, (char*)"compstmnt\0"};
nctemp2587=&nctemp2588;
nctempchar1* nctemp2585= nctemp2587;
struct nctempchar1 *nctemp2591;
static struct nctempchar1 nctemp2592 = {{ 5}, (char*)"void\0"};
nctemp2591=&nctemp2592;
nctempchar1* nctemp2589= nctemp2591;
struct tree* nctemp2593=ParseMknode(nctemp2585,nctemp2589);
np =nctemp2593;
struct tree* nctemp2595= sp;
struct tree* nctemp2597= np;
int nctemp2599=PtreeAddchild(nctemp2595,nctemp2597);
struct nctempchar1 *nctemp2606;
static struct nctempchar1 nctemp2607 = {{ 3}, (char*)"if\0"};
nctemp2606=&nctemp2607;
nctempchar1* nctemp2604= nctemp2606;
struct nctempchar1 *nctemp2610;
static struct nctempchar1 nctemp2611 = {{ 5}, (char*)"void\0"};
nctemp2610=&nctemp2611;
nctempchar1* nctemp2608= nctemp2610;
struct tree* nctemp2612=ParseMknode(nctemp2604,nctemp2608);
rp =nctemp2612;
struct tree* nctemp2614= np;
struct tree* nctemp2616= rp;
int nctemp2618=PtreeAddchild(nctemp2614,nctemp2616);
int nctemp2620= 40;
int nctemp2622=ParseMatch(nctemp2620);
struct tree* nctemp2630=ParseExpr();
qp =nctemp2630;
int nctemp2623 = (qp !=0);
if(nctemp2623)
{
{
struct tree* nctemp2633= rp;
struct tree* nctemp2635= qp;
int nctemp2637=PtreeAddchild(nctemp2633,nctemp2635);
}
}
int nctemp2639= 41;
int nctemp2641=ParseMatch(nctemp2639);
struct tree* nctemp2646=ParseCompstmnt();
tp =nctemp2646;
struct tree* nctemp2648= rp;
struct tree* nctemp2650= tp;
int nctemp2652=PtreeAddchild(nctemp2648,nctemp2650);
int nctemp2653 = (lookahead ==300);
if(nctemp2653)
{
{
struct tree* nctemp2661=ParseElifstmnt();
tp =nctemp2661;
struct tree* nctemp2663= rp;
struct tree* nctemp2665= tp;
int nctemp2667=PtreeAddchild(nctemp2663,nctemp2665);
}
}
int nctemp2668 = (lookahead ==15);
if(nctemp2668)
{
{
struct tree* nctemp2676=ParseElsestmnt();
up =nctemp2676;
struct tree* nctemp2678= rp;
struct tree* nctemp2680= up;
int nctemp2682=PtreeAddchild(nctemp2678,nctemp2680);
}
}
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
struct tree* ParseElsestmnt ()
{
struct tree* np;
struct tree* sp;
{
int nctemp2684 = (lookahead ==15);
if(nctemp2684)
{
{
struct nctempchar1 *nctemp2694;
static struct nctempchar1 nctemp2695 = {{ 5}, (char*)"else\0"};
nctemp2694=&nctemp2695;
nctempchar1* nctemp2692= nctemp2694;
struct nctempchar1 *nctemp2698;
static struct nctempchar1 nctemp2699 = {{ 5}, (char*)"void\0"};
nctemp2698=&nctemp2699;
nctempchar1* nctemp2696= nctemp2698;
struct tree* nctemp2700=ParseMknode(nctemp2692,nctemp2696);
np =nctemp2700;
int nctemp2702= 15;
int nctemp2704=ParseMatch(nctemp2702);
struct tree* nctemp2709=ParseCompstmnt();
sp =nctemp2709;
struct tree* nctemp2711= np;
struct tree* nctemp2713= sp;
int nctemp2715=PtreeAddchild(nctemp2711,nctemp2713);
}
}
else{
{
np = 0;
}
}
return np;
}
}
struct tree* ParseIfstmnt ()
{
struct tree* np;
struct tree* sp;
struct tree* qp;
{
int nctemp2717 = (lookahead ==14);
if(nctemp2717)
{
{
struct nctempchar1 *nctemp2727;
static struct nctempchar1 nctemp2728 = {{ 3}, (char*)"if\0"};
nctemp2727=&nctemp2728;
nctempchar1* nctemp2725= nctemp2727;
struct nctempchar1 *nctemp2731;
static struct nctempchar1 nctemp2732 = {{ 5}, (char*)"void\0"};
nctemp2731=&nctemp2732;
nctempchar1* nctemp2729= nctemp2731;
struct tree* nctemp2733=ParseMknode(nctemp2725,nctemp2729);
sp =nctemp2733;
int nctemp2735= 14;
int nctemp2737=ParseMatch(nctemp2735);
int nctemp2739= 40;
int nctemp2741=ParseMatch(nctemp2739);
struct tree* nctemp2749=ParseExpr();
np =nctemp2749;
int nctemp2742 = (np !=0);
if(nctemp2742)
{
{
struct tree* nctemp2752= sp;
struct tree* nctemp2754= np;
int nctemp2756=PtreeAddchild(nctemp2752,nctemp2754);
}
}
int nctemp2758= 41;
int nctemp2760=ParseMatch(nctemp2758);
struct tree* nctemp2765=ParseCompstmnt();
np =nctemp2765;
struct tree* nctemp2767= sp;
struct tree* nctemp2769= np;
int nctemp2771=PtreeAddchild(nctemp2767,nctemp2769);
int nctemp2772 = (lookahead ==300);
if(nctemp2772)
{
{
struct tree* nctemp2783=ParseElifstmnt();
qp =nctemp2783;
int nctemp2776 = (qp !=0);
if(nctemp2776)
{
{
struct tree* nctemp2786= sp;
struct tree* nctemp2788= qp;
int nctemp2790=PtreeAddchild(nctemp2786,nctemp2788);
}
}
}
}
int nctemp2791 = (lookahead ==15);
if(nctemp2791)
{
{
struct tree* nctemp2799=ParseElsestmnt();
np =nctemp2799;
struct tree* nctemp2801= sp;
struct tree* nctemp2803= np;
int nctemp2805=PtreeAddchild(nctemp2801,nctemp2803);
}
}
}
}
else{
{
sp = 0;
}
}
return sp;
}
}
struct tree* ParseStmnt ()
{
struct tree* np;
{
struct tree* nctemp2814=ParseWhilestmnt();
np =nctemp2814;
int nctemp2807 = (np !=0);
if(nctemp2807)
{
{
return np;
}
}
else{
{
struct tree* nctemp2824=ParseReturnstmnt();
np =nctemp2824;
int nctemp2817 = (np !=0);
if(nctemp2817)
{
{
return np;
}
}
else{
{
struct tree* nctemp2834=ParseForstmnt();
np =nctemp2834;
int nctemp2827 = (np !=0);
if(nctemp2827)
{
{
return np;
}
}
else{
{
struct tree* nctemp2844=ParseParallelstmnt();
np =nctemp2844;
int nctemp2837 = (np !=0);
if(nctemp2837)
{
{
return np;
}
}
else{
{
struct tree* nctemp2854=ParseIfstmnt();
np =nctemp2854;
int nctemp2847 = (np !=0);
if(nctemp2847)
{
{
return np;
}
}
else{
{
int nctemp2857 = (lookahead ==601);
if(nctemp2857)
{
{
np =0;
return np;
}
}
else{
{
int nctemp2865 = (lookahead ==701);
if(nctemp2865)
{
{
int nctemp2870= 701;
int nctemp2872=ParseMatch(nctemp2870);
int nctemp2874= 10;
int nctemp2876=ParseMatch(nctemp2874);
np =0;
return np;
}
}
else{
{
struct tree* nctemp2885=ParseExpr();
np =nctemp2885;
int nctemp2887= 10;
int nctemp2889=ParseMatch(nctemp2887);
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
{
struct tree* nctemp2895=ParseStmnt();
np =nctemp2895;
sp = np;
int nctemp2896 = (sp !=0);
int nctemp2900=nctemp2896;
while(nctemp2900)
{{
{
struct tree* nctemp2905=ParseStmnt();
sp =nctemp2905;
struct tree* nctemp2907= np;
struct tree* nctemp2909= sp;
int nctemp2911=PtreeAddsister(nctemp2907,nctemp2909);
}
}
int nctemp2912 = (sp !=0);
nctemp2900=nctemp2912;}return np;
}
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
{
int nctemp2917 = (lookahead ==58);
if(nctemp2917)
{
{
struct nctempchar1 *nctemp2927;
static struct nctempchar1 nctemp2928 = {{ 10}, (char*)"compstmnt\0"};
nctemp2927=&nctemp2928;
nctempchar1* nctemp2925= nctemp2927;
struct nctempchar1 *nctemp2931;
static struct nctempchar1 nctemp2932 = {{ 5}, (char*)"void\0"};
nctemp2931=&nctemp2932;
nctempchar1* nctemp2929= nctemp2931;
struct tree* nctemp2933=ParseMknode(nctemp2925,nctemp2929);
np =nctemp2933;
int nctemp2935= 58;
int nctemp2937=ParseMatch(nctemp2935);
int nctemp2939= 10;
int nctemp2941=ParseMatch(nctemp2939);
int nctemp2943= 600;
int nctemp2945=ParseMatch(nctemp2943);
struct tree* nctemp2950=ParseDeclarations();
sp =nctemp2950;
int nctemp2951 = (sp !=0);
if(nctemp2951)
{
{
struct tree* nctemp2956= np;
struct tree* nctemp2958= sp;
int nctemp2960=PtreeAddchild(nctemp2956,nctemp2958);
}
}
struct tree* nctemp2965=ParseStmntlist();
sp =nctemp2965;
int nctemp2966 = (sp !=0);
if(nctemp2966)
{
{
struct tree* nctemp2971= np;
struct tree* nctemp2973= sp;
int nctemp2975=PtreeAddchild(nctemp2971,nctemp2973);
}
}
int nctemp2977= 601;
int nctemp2979=ParseMatch(nctemp2977);
}
}
else{
{
struct nctempchar1 *nctemp2983;
static struct nctempchar1 nctemp2984 = {{ 17}, (char*)"Empty code block\0"};
nctemp2983=&nctemp2984;
nctempchar1* nctemp2981= nctemp2983;
int nctemp2985=ParseError(nctemp2981);
}
}
return np;
}
}
int ParseFdef (struct tree* p)
{
struct tree* np;
struct tree* sp;
{
struct tree* nctemp2991=ParseType();
np =nctemp2991;
int nctemp2992 = (np !=0);
if(nctemp2992)
{
{
struct tree* nctemp2997= p;
struct tree* nctemp2999= np;
int nctemp3001=PtreeAddchild(nctemp2997,nctemp2999);
}
}
else{
{
struct nctempchar1 *nctemp3005;
static struct nctempchar1 nctemp3006 = {{ 34}, (char*)"Missing function type declaration\0"};
nctemp3005=&nctemp3006;
nctempchar1* nctemp3003= nctemp3005;
int nctemp3007=ParseError(nctemp3003);
}
}
int nctemp3008 = (lookahead ==1);
if(nctemp3008)
{
{
struct nctempchar1 *nctemp3018;
static struct nctempchar1 nctemp3019 = {{ 5}, (char*)"fdef\0"};
nctemp3018=&nctemp3019;
nctempchar1* nctemp3016= nctemp3018;
nctempchar1* nctemp3022=ScanGetext();
nctempchar1* nctemp3020= nctemp3022;
struct tree* nctemp3023=ParseMknode(nctemp3016,nctemp3020);
sp =nctemp3023;
int nctemp3025= 1;
int nctemp3027=ParseMatch(nctemp3025);
struct tree* nctemp3029= np;
struct tree* nctemp3031= sp;
int nctemp3033=PtreeAddchild(nctemp3029,nctemp3031);
}
}
int nctemp3035= 40;
int nctemp3037=ParseMatch(nctemp3035);
struct tree* nctemp3042=ParseArglist();
np =nctemp3042;
int nctemp3043 = (np !=0);
if(nctemp3043)
{
{
struct tree* nctemp3048= sp;
struct tree* nctemp3050= np;
int nctemp3052=PtreeAddchild(nctemp3048,nctemp3050);
}
}
int nctemp3054= 41;
int nctemp3056=ParseMatch(nctemp3054);
np = 0;
struct tree* nctemp3061=ParseCompstmnt();
np =nctemp3061;
int nctemp3062 = (np !=0);
if(nctemp3062)
{
{
struct tree* nctemp3067= sp;
struct tree* nctemp3069= np;
int nctemp3071=PtreeAddchild(nctemp3067,nctemp3069);
}
}
else{
{
struct nctempchar1 *nctemp3075;
static struct nctempchar1 nctemp3076 = {{ 22}, (char*)"Missing function body\0"};
nctemp3075=&nctemp3076;
nctempchar1* nctemp3073= nctemp3075;
int nctemp3077=ParseError(nctemp3073);
}
}
return 1;
}
}
struct tree* ParseImport ()
{
struct tree* imp;
{
int nctemp3080= lookahead;
int nctemp3082=ParseMatch(nctemp3080);
struct nctempchar1 *nctemp3089;
static struct nctempchar1 nctemp3090 = {{ 7}, (char*)"import\0"};
nctemp3089=&nctemp3090;
nctempchar1* nctemp3087= nctemp3089;
nctempchar1* nctemp3093=ScanGetext();
nctempchar1* nctemp3091= nctemp3093;
struct tree* nctemp3094=ParseMknode(nctemp3087,nctemp3091);
imp =nctemp3094;
int nctemp3096= 1;
int nctemp3098=ParseMatch(nctemp3096);
int nctemp3100= 10;
int nctemp3102=ParseMatch(nctemp3100);
return imp;
}
}
struct tree* ParseExtdecl ()
{
struct tree* p;
struct tree* imp;
struct tree* np;
struct tree* mp;
{
int nctemp3104 = (lookahead ==433);
if(nctemp3104)
{
{
struct nctempchar1 *nctemp3114;
static struct nctempchar1 nctemp3115 = {{ 8}, (char*)"extdecl\0"};
nctemp3114=&nctemp3115;
nctempchar1* nctemp3112= nctemp3114;
struct nctempchar1 *nctemp3118;
static struct nctempchar1 nctemp3119 = {{ 5}, (char*)"void\0"};
nctemp3118=&nctemp3119;
nctempchar1* nctemp3116= nctemp3118;
struct tree* nctemp3120=PtreeMknode(nctemp3112,nctemp3116);
p =nctemp3120;
struct tree* nctemp3125=ParseImport();
imp =nctemp3125;
struct tree* nctemp3127= p;
struct tree* nctemp3129= imp;
int nctemp3131=PtreeAddchild(nctemp3127,nctemp3129);
return p;
}
}
int nctemp3133 = (lookahead ==1100);
if(nctemp3133)
{
{
int nctemp3138= 1100;
int nctemp3140=ParseMatch(nctemp3138);
struct nctempchar1 *nctemp3147;
static struct nctempchar1 nctemp3148 = {{ 8}, (char*)"extdecl\0"};
nctemp3147=&nctemp3148;
nctempchar1* nctemp3145= nctemp3147;
struct nctempchar1 *nctemp3151;
static struct nctempchar1 nctemp3152 = {{ 5}, (char*)"void\0"};
nctemp3151=&nctemp3152;
nctempchar1* nctemp3149= nctemp3151;
struct tree* nctemp3153=ParseMknode(nctemp3145,nctemp3149);
p =nctemp3153;
struct tree* nctemp3155= p;
int nctemp3157=ParseFdef(nctemp3155);
return p;
}
}
struct tree* nctemp3163=ParseType();
np =nctemp3163;
int nctemp3164 = (np ==0);
if(nctemp3164)
{
{
return np;
}
}
int nctemp3169 = (lookahead ==1);
if(nctemp3169)
{
{
struct nctempchar1 *nctemp3179;
static struct nctempchar1 nctemp3180 = {{ 8}, (char*)"extdecl\0"};
nctemp3179=&nctemp3180;
nctempchar1* nctemp3177= nctemp3179;
struct nctempchar1 *nctemp3183;
static struct nctempchar1 nctemp3184 = {{ 5}, (char*)"void\0"};
nctemp3183=&nctemp3184;
nctempchar1* nctemp3181= nctemp3183;
struct tree* nctemp3185=ParseMknode(nctemp3177,nctemp3181);
p =nctemp3185;
struct tree* nctemp3187= p;
struct tree* nctemp3189= np;
int nctemp3191=PtreeAddchild(nctemp3187,nctemp3189);
struct nctempchar1 *nctemp3198;
static struct nctempchar1 nctemp3199 = {{ 11}, (char*)"identifier\0"};
nctemp3198=&nctemp3199;
nctempchar1* nctemp3196= nctemp3198;
nctempchar1* nctemp3202=ScanGetext();
nctempchar1* nctemp3200= nctemp3202;
struct tree* nctemp3203=ParseMknode(nctemp3196,nctemp3200);
mp =nctemp3203;
struct tree* nctemp3205= np;
struct tree* nctemp3207= mp;
int nctemp3209=PtreeAddchild(nctemp3205,nctemp3207);
int nctemp3211= lookahead;
int nctemp3213=ParseMatch(nctemp3211);
int nctemp3214 = (lookahead ==44);
if(nctemp3214)
{
{
struct tree* nctemp3219= np;
int nctemp3221=ParseIdseq(nctemp3219);
int nctemp3223= 10;
int nctemp3225=ParseMatch(nctemp3223);
return p;
}
}
int nctemp3227 = (lookahead ==61);
if(nctemp3227)
{
{
int nctemp3232= lookahead;
int nctemp3234=ParseMatch(nctemp3232);
struct tree* nctemp3236= mp;
int nctemp3238=ParseConstdecl(nctemp3236);
}
}
int nctemp3240= 10;
int nctemp3242=ParseMatch(nctemp3240);
return p;
}
}
int nctemp3244 = (lookahead ==58);
if(nctemp3244)
{
{
int nctemp3249= lookahead;
int nctemp3251=ParseMatch(nctemp3249);
int nctemp3253= 10;
int nctemp3255=ParseMatch(nctemp3253);
int nctemp3257= 600;
int nctemp3259=ParseMatch(nctemp3257);
struct nctempchar1 *nctemp3266;
static struct nctempchar1 nctemp3267 = {{ 8}, (char*)"extdecl\0"};
nctemp3266=&nctemp3267;
nctempchar1* nctemp3264= nctemp3266;
struct nctempchar1 *nctemp3270;
static struct nctempchar1 nctemp3271 = {{ 5}, (char*)"void\0"};
nctemp3270=&nctemp3271;
nctempchar1* nctemp3268= nctemp3270;
struct tree* nctemp3272=ParseMknode(nctemp3264,nctemp3268);
p =nctemp3272;
struct tree* nctemp3274= p;
struct tree* nctemp3276= np;
int nctemp3278=PtreeAddchild(nctemp3274,nctemp3276);
struct tree* nctemp3280= np;
int nctemp3282=ParseStructdeclar(nctemp3280);
return p;
}
}
p =0;
return p;
}
}
struct tree* ParseParse ()
{
struct tree* np;
{
np = 0;
int nctemp3288 = (lookahead ==19);
if(nctemp3288)
{
{
return np;
}
}
else{
{
struct tree* nctemp3297=ParseExtdecl();
np =nctemp3297;
}
}
return np;
}
}
