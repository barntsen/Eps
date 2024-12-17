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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
}
int ParseGetlookahead ()
{
return lookahead;
}
int ParseMatch (int t)
{
int nctemp19 = (lookahead ==t);
if(nctemp19)
{
int nctemp27=ScanGetok();
lookahead =nctemp27;
}
else{
struct nctempchar1 *nctemp31;
static struct nctempchar1 nctemp32 = {{ 16}, (char*)"Was expecting: \0"};
nctemp31=&nctemp32;
nctempchar1* nctemp29= nctemp31;
int nctemp33=LibePs(nctemp29);
int nctemp35= t;
int nctemp37=LibePi(nctemp35);
struct nctempchar1 *nctemp41;
static struct nctempchar1 nctemp42 = {{ 12}, (char*)", but got: \0"};
nctemp41=&nctemp42;
nctempchar1* nctemp39= nctemp41;
int nctemp43=LibePs(nctemp39);
int nctemp45= lookahead;
int nctemp47=LibePi(nctemp45);
struct nctempchar1 *nctemp51;
static struct nctempchar1 nctemp52 = {{ 3}, (char*)"\n\0"};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
int nctemp53=LibePs(nctemp49);
struct nctempchar1 *nctemp57;
static struct nctempchar1 nctemp58 = {{ 13}, (char*)"syntax error\0"};
nctemp57=&nctemp58;
nctempchar1* nctemp55= nctemp57;
int nctemp59=ParseError(nctemp55);
int nctemp64=ScanGetok();
lookahead =nctemp64;
}
return 1;
}
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *def)
{
struct tree* p;
nctempchar1 *s;
nctempchar1* nctemp70= name;
nctempchar1* nctemp73= def;
struct tree* nctemp76=PtreeMknode(nctemp70,nctemp73);
p =nctemp76;
struct tree* nctemp78= p;
int nctemp82=ScanGetline();
int nctemp80= nctemp82;
int nctemp83=PtreeSetline(nctemp78,nctemp80);
struct tree* nctemp85= p;
nctempchar1* nctemp89=ScanGetfile();
nctempchar1* nctemp87= nctemp89;
int nctemp90=PtreeSetfile(nctemp85,nctemp87);
return p;
}
struct tree* ParseExprseq (struct tree* p)
{
int nctemp92 = (lookahead ==44);
if(nctemp92)
{
int nctemp97= lookahead;
int nctemp99=ParseMatch(nctemp97);
struct tree* nctemp101= p;
struct tree* nctemp105=ParseExpr();
struct tree* nctemp103= nctemp105;
int nctemp106=PtreeAddsister(nctemp101,nctemp103);
struct tree* nctemp108= p;
struct tree* nctemp110=ParseExprseq(nctemp108);
}
p =0;
return p;
}
struct tree* ParseExprlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp119=ParseExpr();
np =nctemp119;
int nctemp120 = (np !=0);
if(nctemp120)
{
struct nctempchar1 *nctemp130;
static struct nctempchar1 nctemp131 = {{ 9}, (char*)"exprlist\0"};
nctemp130=&nctemp131;
nctempchar1* nctemp128= nctemp130;
struct nctempchar1 *nctemp134;
static struct nctempchar1 nctemp135 = {{ 5}, (char*)"void\0"};
nctemp134=&nctemp135;
nctempchar1* nctemp132= nctemp134;
struct tree* nctemp136=ParseMknode(nctemp128,nctemp132);
sp =nctemp136;
struct tree* nctemp138= sp;
struct tree* nctemp140= np;
int nctemp142=PtreeAddchild(nctemp138,nctemp140);
struct tree* nctemp144= np;
struct tree* nctemp146=ParseExprseq(nctemp144);
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
int nctemp152 = (lookahead ==42);
if(nctemp152)
{
int nctemp157= 42;
int nctemp159=ParseMatch(nctemp157);
struct nctempchar1 *nctemp166;
static struct nctempchar1 nctemp167 = {{ 10}, (char*)"arrayargs\0"};
nctemp166=&nctemp167;
nctempchar1* nctemp164= nctemp166;
struct nctempchar1 *nctemp170;
static struct nctempchar1 nctemp171 = {{ 5}, (char*)"void\0"};
nctemp170=&nctemp171;
nctempchar1* nctemp168= nctemp170;
struct tree* nctemp172=ParseMknode(nctemp164,nctemp168);
sp =nctemp172;
struct tree* nctemp174= p;
struct tree* nctemp176= sp;
int nctemp178=PtreeAddchild(nctemp174,nctemp176);
int nctemp179 = (lookahead ==44);
if(nctemp179)
{
int nctemp184= lookahead;
int nctemp186=ParseMatch(nctemp184);
struct tree* nctemp188= p;
int nctemp190=ParseArrayarg(nctemp188);
}
else{
return 1;
}
}
else{
struct nctempchar1 *nctemp198;
static struct nctempchar1 nctemp199 = {{ 10}, (char*)"arrayargs\0"};
nctemp198=&nctemp199;
nctempchar1* nctemp196= nctemp198;
struct nctempchar1 *nctemp202;
static struct nctempchar1 nctemp203 = {{ 5}, (char*)"void\0"};
nctemp202=&nctemp203;
nctempchar1* nctemp200= nctemp202;
struct tree* nctemp204=ParseMknode(nctemp196,nctemp200);
sp =nctemp204;
struct tree* nctemp206= p;
struct tree* nctemp208= sp;
int nctemp210=PtreeAddchild(nctemp206,nctemp208);
struct tree* nctemp215=ParseExprlist();
np =nctemp215;
int nctemp216 = (sp !=0);
if(nctemp216)
{
struct tree* nctemp221= sp;
struct tree* nctemp223= np;
int nctemp225=PtreeAddchild(nctemp221,nctemp223);
}
else{
struct nctempchar1 *nctemp229;
static struct nctempchar1 nctemp230 = {{ 13}, (char*)"Syntax error\0"};
nctemp229=&nctemp230;
nctempchar1* nctemp227= nctemp229;
int nctemp231=ParseError(nctemp227);
}
return 1;
}
return 1;
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
int nctemp234 = (lookahead ==44);
if(nctemp234)
{
int nctemp239= lookahead;
int nctemp241=ParseMatch(nctemp239);
struct nctempchar1 *nctemp248;
static struct nctempchar1 nctemp249 = {{ 11}, (char*)"identifier\0"};
nctemp248=&nctemp249;
nctempchar1* nctemp246= nctemp248;
nctempchar1* nctemp252=ScanGetext();
nctempchar1* nctemp250= nctemp252;
struct tree* nctemp253=ParseMknode(nctemp246,nctemp250);
sp =nctemp253;
struct tree* nctemp255= p;
struct tree* nctemp257= sp;
int nctemp259=PtreeAddchild(nctemp255,nctemp257);
int nctemp261= 1;
int nctemp263=ParseMatch(nctemp261);
struct tree* nctemp265= p;
int nctemp267=ParseIdseq(nctemp265);
}
else{
return 1;
}
return 1;
}
int ParseConstdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp274=ParseExpr();
np =nctemp274;
int nctemp275 = (np !=0);
if(nctemp275)
{
struct tree* nctemp280= p;
struct tree* nctemp282= np;
int nctemp284=PtreeAddchild(nctemp280,nctemp282);
}
return 1;
}
struct tree* ParseIdent ()
{
struct tree* np;
struct tree* sp;
int nctemp286 = (lookahead ==1);
if(nctemp286)
{
struct nctempchar1 *nctemp296;
static struct nctempchar1 nctemp297 = {{ 11}, (char*)"identifier\0"};
nctemp296=&nctemp297;
nctempchar1* nctemp294= nctemp296;
nctempchar1* nctemp300=ScanGetext();
nctempchar1* nctemp298= nctemp300;
struct tree* nctemp301=ParseMknode(nctemp294,nctemp298);
sp =nctemp301;
int nctemp303= 1;
int nctemp305=ParseMatch(nctemp303);
int nctemp306 = (lookahead ==91);
if(nctemp306)
{
int nctemp311= lookahead;
int nctemp313=ParseMatch(nctemp311);
struct tree* nctemp315= sp;
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 6}, (char*)"array\0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=PtreeSetarray(nctemp315,nctemp317);
struct tree* nctemp326=ParseExprlist();
np =nctemp326;
struct tree* nctemp328= sp;
struct tree* nctemp330= np;
int nctemp332=PtreeAddchild(nctemp328,nctemp330);
int nctemp334= 93;
int nctemp336=ParseMatch(nctemp334);
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
int nctemp354 = (lookahead ==7);
int nctemp359 = (lookahead ==9);
int nctemp351 = (nctemp354 || nctemp359);
int nctemp364 = (lookahead ==8);
int nctemp348 = (nctemp351 || nctemp364);
int nctemp369 = (lookahead ==431);
int nctemp345 = (nctemp348 || nctemp369);
int nctemp374 = (lookahead ==510);
int nctemp342 = (nctemp345 || nctemp374);
if(nctemp342)
{
struct nctempchar1 *nctemp384;
static struct nctempchar1 nctemp385 = {{ 5}, (char*)"type\0"};
nctemp384=&nctemp385;
nctempchar1* nctemp382= nctemp384;
nctempchar1* nctemp388=ScanGetext();
nctempchar1* nctemp386= nctemp388;
struct tree* nctemp389=ParseMknode(nctemp382,nctemp386);
np =nctemp389;
int nctemp391= lookahead;
int nctemp393=ParseMatch(nctemp391);
}
else{
int nctemp394 = (lookahead ==11);
if(nctemp394)
{
int nctemp399= lookahead;
int nctemp401=ParseMatch(nctemp399);
struct nctempchar1 *nctemp408;
static struct nctempchar1 nctemp409 = {{ 5}, (char*)"type\0"};
nctemp408=&nctemp409;
nctempchar1* nctemp406= nctemp408;
nctempchar1* nctemp412=ScanGetext();
nctempchar1* nctemp410= nctemp412;
struct tree* nctemp413=ParseMknode(nctemp406,nctemp410);
np =nctemp413;
struct tree* nctemp415= np;
struct nctempchar1 *nctemp419;
static struct nctempchar1 nctemp420 = {{ 7}, (char*)"struct\0"};
nctemp419=&nctemp420;
nctempchar1* nctemp417= nctemp419;
int nctemp421=PtreeSetstruct(nctemp415,nctemp417);
int nctemp423= 1;
int nctemp425=ParseMatch(nctemp423);
}
else{
np =0;
}
}
int nctemp430 = (lookahead ==91);
if(nctemp430)
{
int nctemp434 = (np ==0);
if(nctemp434)
{
struct nctempchar1 *nctemp441;
static struct nctempchar1 nctemp442 = {{ 13}, (char*)"Missing type\0"};
nctemp441=&nctemp442;
nctempchar1* nctemp439= nctemp441;
int nctemp443=ParseError(nctemp439);
}
int nctemp445= lookahead;
int nctemp447=ParseMatch(nctemp445);
struct tree* nctemp449= np;
struct nctempchar1 *nctemp453;
static struct nctempchar1 nctemp454 = {{ 6}, (char*)"array\0"};
nctemp453=&nctemp454;
nctempchar1* nctemp451= nctemp453;
int nctemp455=PtreeSetarray(nctemp449,nctemp451);
struct nctempchar1 *nctemp462;
static struct nctempchar1 nctemp463 = {{ 10}, (char*)"arrayargs\0"};
nctemp462=&nctemp463;
nctempchar1* nctemp460= nctemp462;
struct nctempchar1 *nctemp466;
static struct nctempchar1 nctemp467 = {{ 5}, (char*)"void\0"};
nctemp466=&nctemp467;
nctempchar1* nctemp464= nctemp466;
struct tree* nctemp468=ParseMknode(nctemp460,nctemp464);
sp =nctemp468;
struct tree* nctemp470= np;
struct tree* nctemp472= sp;
int nctemp474=PtreeAddchild(nctemp470,nctemp472);
struct tree* nctemp476= sp;
int nctemp478=ParseArrayarg(nctemp476);
int nctemp480= 93;
int nctemp482=ParseMatch(nctemp480);
}
return np;
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp484 = (lookahead ==1);
if(nctemp484)
{
struct nctempchar1 *nctemp494;
static struct nctempchar1 nctemp495 = {{ 11}, (char*)"identifier\0"};
nctemp494=&nctemp495;
nctempchar1* nctemp492= nctemp494;
nctempchar1* nctemp498=ScanGetext();
nctempchar1* nctemp496= nctemp498;
struct tree* nctemp499=ParseMknode(nctemp492,nctemp496);
sp =nctemp499;
int nctemp501= 1;
int nctemp503=ParseMatch(nctemp501);
int nctemp504 = (lookahead ==91);
if(nctemp504)
{
int nctemp509= lookahead;
int nctemp511=ParseMatch(nctemp509);
struct tree* nctemp513= sp;
struct nctempchar1 *nctemp517;
static struct nctempchar1 nctemp518 = {{ 6}, (char*)"array\0"};
nctemp517=&nctemp518;
nctempchar1* nctemp515= nctemp517;
int nctemp519=PtreeSetarray(nctemp513,nctemp515);
struct tree* nctemp524=ParseExprlist();
np =nctemp524;
struct tree* nctemp526= sp;
struct tree* nctemp528= np;
int nctemp530=PtreeAddchild(nctemp526,nctemp528);
int nctemp532= 93;
int nctemp534=ParseMatch(nctemp532);
int nctemp535 = (lookahead ==46);
if(nctemp535)
{
int nctemp540= 46;
int nctemp542=ParseMatch(nctemp540);
struct tree* nctemp547=ParseIdent();
np =nctemp547;
struct tree* nctemp549= sp;
struct tree* nctemp551= np;
int nctemp553=PtreeAddchild(nctemp549,nctemp551);
struct tree* nctemp555= np;
struct nctempchar1 *nctemp559;
static struct nctempchar1 nctemp560 = {{ 9}, (char*)"selector\0"};
nctemp559=&nctemp560;
nctempchar1* nctemp557= nctemp559;
int nctemp561=PtreeSetname(nctemp555,nctemp557);
}
}
else{
int nctemp562 = (lookahead ==40);
if(nctemp562)
{
int nctemp567= lookahead;
int nctemp569=ParseMatch(nctemp567);
struct tree* nctemp571= sp;
struct nctempchar1 *nctemp575;
static struct nctempchar1 nctemp576 = {{ 6}, (char*)"fcall\0"};
nctemp575=&nctemp576;
nctempchar1* nctemp573= nctemp575;
int nctemp577=PtreeSetname(nctemp571,nctemp573);
np =0;
int nctemp582 = (lookahead !=41);
if(nctemp582)
{
struct tree* nctemp590=ParseExprlist();
np =nctemp590;
}
int nctemp592= 41;
int nctemp594=ParseMatch(nctemp592);
int nctemp595 = (np !=0);
if(nctemp595)
{
struct tree* nctemp600= sp;
struct tree* nctemp602= np;
int nctemp604=PtreeAddchild(nctemp600,nctemp602);
}
}
else{
int nctemp605 = (lookahead ==46);
if(nctemp605)
{
int nctemp610= 46;
int nctemp612=ParseMatch(nctemp610);
struct tree* nctemp617=ParseIdent();
np =nctemp617;
struct tree* nctemp619= sp;
struct tree* nctemp621= np;
int nctemp623=PtreeAddchild(nctemp619,nctemp621);
struct tree* nctemp625= np;
struct nctempchar1 *nctemp629;
static struct nctempchar1 nctemp630 = {{ 9}, (char*)"selector\0"};
nctemp629=&nctemp630;
nctempchar1* nctemp627= nctemp629;
int nctemp631=PtreeSetname(nctemp625,nctemp627);
}
}
}
}
else{
int nctemp632 = (lookahead ==23);
if(nctemp632)
{
int nctemp637= lookahead;
int nctemp639=ParseMatch(nctemp637);
struct nctempchar1 *nctemp646;
static struct nctempchar1 nctemp647 = {{ 5}, (char*)"cast\0"};
nctemp646=&nctemp647;
nctempchar1* nctemp644= nctemp646;
struct nctempchar1 *nctemp650;
static struct nctempchar1 nctemp651 = {{ 5}, (char*)"void\0"};
nctemp650=&nctemp651;
nctempchar1* nctemp648= nctemp650;
struct tree* nctemp652=ParseMknode(nctemp644,nctemp648);
sp =nctemp652;
int nctemp654= 40;
int nctemp656=ParseMatch(nctemp654);
struct tree* nctemp661=ParseType();
np =nctemp661;
int nctemp662 = (np ==0);
if(nctemp662)
{
struct nctempchar1 *nctemp669;
static struct nctempchar1 nctemp670 = {{ 13}, (char*)"Syntax error\0"};
nctemp669=&nctemp670;
nctempchar1* nctemp667= nctemp669;
int nctemp671=ParseError(nctemp667);
}
else{
struct tree* nctemp673= sp;
struct tree* nctemp675= np;
int nctemp677=PtreeAddchild(nctemp673,nctemp675);
}
int nctemp679= 44;
int nctemp681=ParseMatch(nctemp679);
struct tree* nctemp686=ParseExpr();
np =nctemp686;
struct tree* nctemp688= sp;
struct tree* nctemp690= np;
int nctemp692=PtreeAddchild(nctemp688,nctemp690);
int nctemp694= 41;
int nctemp696=ParseMatch(nctemp694);
}
else{
int nctemp697 = (lookahead ==26);
if(nctemp697)
{
int nctemp702= lookahead;
int nctemp704=ParseMatch(nctemp702);
struct nctempchar1 *nctemp711;
static struct nctempchar1 nctemp712 = {{ 4}, (char*)"new\0"};
nctemp711=&nctemp712;
nctempchar1* nctemp709= nctemp711;
struct nctempchar1 *nctemp715;
static struct nctempchar1 nctemp716 = {{ 5}, (char*)"void\0"};
nctemp715=&nctemp716;
nctempchar1* nctemp713= nctemp715;
struct tree* nctemp717=ParseMknode(nctemp709,nctemp713);
sp =nctemp717;
int nctemp719= 40;
int nctemp721=ParseMatch(nctemp719);
struct tree* nctemp726=ParseType();
np =nctemp726;
int nctemp727 = (np ==0);
if(nctemp727)
{
struct nctempchar1 *nctemp734;
static struct nctempchar1 nctemp735 = {{ 13}, (char*)"Syntax error\0"};
nctemp734=&nctemp735;
nctempchar1* nctemp732= nctemp734;
int nctemp736=ParseError(nctemp732);
}
else{
struct tree* nctemp738= sp;
struct tree* nctemp740= np;
int nctemp742=PtreeAddchild(nctemp738,nctemp740);
}
int nctemp744= 41;
int nctemp746=ParseMatch(nctemp744);
}
else{
int nctemp747 = (lookahead ==50);
if(nctemp747)
{
int nctemp752= lookahead;
int nctemp754=ParseMatch(nctemp752);
struct nctempchar1 *nctemp761;
static struct nctempchar1 nctemp762 = {{ 7}, (char*)"delete\0"};
nctemp761=&nctemp762;
nctempchar1* nctemp759= nctemp761;
struct nctempchar1 *nctemp765;
static struct nctempchar1 nctemp766 = {{ 5}, (char*)"void\0"};
nctemp765=&nctemp766;
nctempchar1* nctemp763= nctemp765;
struct tree* nctemp767=ParseMknode(nctemp759,nctemp763);
sp =nctemp767;
int nctemp769= 40;
int nctemp771=ParseMatch(nctemp769);
struct tree* nctemp776=ParseExpr();
np =nctemp776;
int nctemp777 = (np ==0);
if(nctemp777)
{
struct nctempchar1 *nctemp784;
static struct nctempchar1 nctemp785 = {{ 13}, (char*)"Syntax error\0"};
nctemp784=&nctemp785;
nctempchar1* nctemp782= nctemp784;
int nctemp786=ParseError(nctemp782);
}
else{
struct tree* nctemp788= sp;
struct tree* nctemp790= np;
int nctemp792=PtreeAddchild(nctemp788,nctemp790);
}
int nctemp794= 41;
int nctemp796=ParseMatch(nctemp794);
}
else{
int nctemp797 = (lookahead ==25);
if(nctemp797)
{
int nctemp802= lookahead;
int nctemp804=ParseMatch(nctemp802);
struct nctempchar1 *nctemp811;
static struct nctempchar1 nctemp812 = {{ 6}, (char*)"cmplx\0"};
nctemp811=&nctemp812;
nctempchar1* nctemp809= nctemp811;
struct nctempchar1 *nctemp815;
static struct nctempchar1 nctemp816 = {{ 5}, (char*)"void\0"};
nctemp815=&nctemp816;
nctempchar1* nctemp813= nctemp815;
struct tree* nctemp817=ParseMknode(nctemp809,nctemp813);
sp =nctemp817;
int nctemp819= 40;
int nctemp821=ParseMatch(nctemp819);
struct tree* nctemp826=ParseExprlist();
np =nctemp826;
int nctemp827 = (np ==0);
if(nctemp827)
{
struct nctempchar1 *nctemp834;
static struct nctempchar1 nctemp835 = {{ 13}, (char*)"Syntax error\0"};
nctemp834=&nctemp835;
nctempchar1* nctemp832= nctemp834;
int nctemp836=ParseError(nctemp832);
}
else{
struct tree* nctemp838= sp;
struct tree* nctemp840= np;
int nctemp842=PtreeAddchild(nctemp838,nctemp840);
}
int nctemp844= 41;
int nctemp846=ParseMatch(nctemp844);
}
else{
int nctemp847 = (lookahead ==28);
if(nctemp847)
{
int nctemp852= lookahead;
int nctemp854=ParseMatch(nctemp852);
struct nctempchar1 *nctemp861;
static struct nctempchar1 nctemp862 = {{ 3}, (char*)"re\0"};
nctemp861=&nctemp862;
nctempchar1* nctemp859= nctemp861;
struct nctempchar1 *nctemp865;
static struct nctempchar1 nctemp866 = {{ 5}, (char*)"void\0"};
nctemp865=&nctemp866;
nctempchar1* nctemp863= nctemp865;
struct tree* nctemp867=ParseMknode(nctemp859,nctemp863);
sp =nctemp867;
int nctemp869= 40;
int nctemp871=ParseMatch(nctemp869);
struct tree* nctemp876=ParseExpr();
np =nctemp876;
int nctemp877 = (np ==0);
if(nctemp877)
{
struct nctempchar1 *nctemp884;
static struct nctempchar1 nctemp885 = {{ 13}, (char*)"Syntax error\0"};
nctemp884=&nctemp885;
nctempchar1* nctemp882= nctemp884;
int nctemp886=ParseError(nctemp882);
}
else{
struct tree* nctemp888= sp;
struct tree* nctemp890= np;
int nctemp892=PtreeAddchild(nctemp888,nctemp890);
}
int nctemp894= 41;
int nctemp896=ParseMatch(nctemp894);
}
else{
int nctemp897 = (lookahead ==27);
if(nctemp897)
{
int nctemp902= lookahead;
int nctemp904=ParseMatch(nctemp902);
struct nctempchar1 *nctemp911;
static struct nctempchar1 nctemp912 = {{ 3}, (char*)"im\0"};
nctemp911=&nctemp912;
nctempchar1* nctemp909= nctemp911;
struct nctempchar1 *nctemp915;
static struct nctempchar1 nctemp916 = {{ 5}, (char*)"void\0"};
nctemp915=&nctemp916;
nctempchar1* nctemp913= nctemp915;
struct tree* nctemp917=ParseMknode(nctemp909,nctemp913);
sp =nctemp917;
int nctemp919= 40;
int nctemp921=ParseMatch(nctemp919);
struct tree* nctemp926=ParseExpr();
np =nctemp926;
int nctemp927 = (np ==0);
if(nctemp927)
{
struct nctempchar1 *nctemp934;
static struct nctempchar1 nctemp935 = {{ 13}, (char*)"Syntax error\0"};
nctemp934=&nctemp935;
nctempchar1* nctemp932= nctemp934;
int nctemp936=ParseError(nctemp932);
}
else{
struct tree* nctemp938= sp;
struct tree* nctemp940= np;
int nctemp942=PtreeAddchild(nctemp938,nctemp940);
}
int nctemp944= 41;
int nctemp946=ParseMatch(nctemp944);
}
else{
int nctemp947 = (lookahead ==29);
if(nctemp947)
{
int nctemp952= lookahead;
int nctemp954=ParseMatch(nctemp952);
struct nctempchar1 *nctemp961;
static struct nctempchar1 nctemp962 = {{ 4}, (char*)"len\0"};
nctemp961=&nctemp962;
nctempchar1* nctemp959= nctemp961;
struct nctempchar1 *nctemp965;
static struct nctempchar1 nctemp966 = {{ 5}, (char*)"void\0"};
nctemp965=&nctemp966;
nctempchar1* nctemp963= nctemp965;
struct tree* nctemp967=ParseMknode(nctemp959,nctemp963);
sp =nctemp967;
int nctemp969= 40;
int nctemp971=ParseMatch(nctemp969);
struct tree* nctemp976=ParseExpr();
np =nctemp976;
int nctemp977 = (np ==0);
if(nctemp977)
{
struct nctempchar1 *nctemp984;
static struct nctempchar1 nctemp985 = {{ 13}, (char*)"Syntax error\0"};
nctemp984=&nctemp985;
nctempchar1* nctemp982= nctemp984;
int nctemp986=ParseError(nctemp982);
}
else{
struct tree* nctemp988= sp;
struct tree* nctemp990= np;
int nctemp992=PtreeAddchild(nctemp988,nctemp990);
}
int nctemp994= 44;
int nctemp996=ParseMatch(nctemp994);
struct tree* nctemp1001=ParseExpr();
rp =nctemp1001;
int nctemp1002 = (rp ==0);
if(nctemp1002)
{
struct nctempchar1 *nctemp1009;
static struct nctempchar1 nctemp1010 = {{ 13}, (char*)"Syntax error\0"};
nctemp1009=&nctemp1010;
nctempchar1* nctemp1007= nctemp1009;
int nctemp1011=ParseError(nctemp1007);
}
else{
struct tree* nctemp1013= np;
struct tree* nctemp1015= rp;
int nctemp1017=PtreeAddsister(nctemp1013,nctemp1015);
}
int nctemp1019= 41;
int nctemp1021=ParseMatch(nctemp1019);
}
else{
int nctemp1022 = (lookahead ==17);
if(nctemp1022)
{
struct nctempchar1 *nctemp1032;
static struct nctempchar1 nctemp1033 = {{ 10}, (char*)"iconstant\0"};
nctemp1032=&nctemp1033;
nctempchar1* nctemp1030= nctemp1032;
nctempchar1* nctemp1036=ScanGetext();
nctempchar1* nctemp1034= nctemp1036;
struct tree* nctemp1037=ParseMknode(nctemp1030,nctemp1034);
sp =nctemp1037;
int nctemp1039= 17;
int nctemp1041=ParseMatch(nctemp1039);
}
else{
int nctemp1042 = (lookahead ==24);
if(nctemp1042)
{
struct nctempchar1 *nctemp1052;
static struct nctempchar1 nctemp1053 = {{ 10}, (char*)"rconstant\0"};
nctemp1052=&nctemp1053;
nctempchar1* nctemp1050= nctemp1052;
nctempchar1* nctemp1056=ScanGetext();
nctempchar1* nctemp1054= nctemp1056;
struct tree* nctemp1057=ParseMknode(nctemp1050,nctemp1054);
sp =nctemp1057;
int nctemp1059= 24;
int nctemp1061=ParseMatch(nctemp1059);
}
else{
int nctemp1062 = (lookahead ==18);
if(nctemp1062)
{
struct nctempchar1 *nctemp1072;
static struct nctempchar1 nctemp1073 = {{ 10}, (char*)"sconstant\0"};
nctemp1072=&nctemp1073;
nctempchar1* nctemp1070= nctemp1072;
nctempchar1* nctemp1076=ScanGetext();
nctempchar1* nctemp1074= nctemp1076;
struct tree* nctemp1077=ParseMknode(nctemp1070,nctemp1074);
sp =nctemp1077;
int nctemp1079= 18;
int nctemp1081=ParseMatch(nctemp1079);
}
else{
int nctemp1082 = (lookahead ==40);
if(nctemp1082)
{
int nctemp1087= 40;
int nctemp1089=ParseMatch(nctemp1087);
struct tree* nctemp1094= p;
struct tree* nctemp1096=ParseAsgexpr(nctemp1094);
sp =nctemp1096;
int nctemp1098= 41;
int nctemp1100=ParseMatch(nctemp1098);
}
else{
struct nctempchar1 *nctemp1104;
static struct nctempchar1 nctemp1105 = {{ 13}, (char*)"Syntax error\0"};
nctemp1104=&nctemp1105;
nctempchar1* nctemp1102= nctemp1104;
int nctemp1106=ParseError(nctemp1102);
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
int nctemp1108 = (lookahead ==45);
if(nctemp1108)
{
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 7}, (char*)"unexpr\0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
nctempchar1* nctemp1122=ScanGetext();
nctempchar1* nctemp1120= nctemp1122;
struct tree* nctemp1123=ParseMknode(nctemp1116,nctemp1120);
sp =nctemp1123;
int nctemp1125= lookahead;
int nctemp1127=ParseMatch(nctemp1125);
struct tree* nctemp1132= p;
struct tree* nctemp1134=ParseUnexpr(nctemp1132);
np =nctemp1134;
struct tree* nctemp1136= sp;
struct tree* nctemp1138= np;
int nctemp1140=PtreeAddchild(nctemp1136,nctemp1138);
}
else{
struct tree* nctemp1145= p;
struct tree* nctemp1147=ParsePrimexpr(nctemp1145);
sp =nctemp1147;
}
return sp;
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1152 = (lookahead ==42);
int nctemp1157 = (lookahead ==47);
int nctemp1149 = (nctemp1152 || nctemp1157);
if(nctemp1149)
{
struct nctempchar1 *nctemp1167;
static struct nctempchar1 nctemp1168 = {{ 8}, (char*)"binexpr\0"};
nctemp1167=&nctemp1168;
nctempchar1* nctemp1165= nctemp1167;
nctempchar1* nctemp1171=ScanGetext();
nctempchar1* nctemp1169= nctemp1171;
struct tree* nctemp1172=ParseMknode(nctemp1165,nctemp1169);
np =nctemp1172;
int nctemp1174= lookahead;
int nctemp1176=ParseMatch(nctemp1174);
struct tree* nctemp1178= np;
struct tree* nctemp1180= p;
int nctemp1182=PtreeAddchild(nctemp1178,nctemp1180);
struct tree* nctemp1187= np;
struct tree* nctemp1189=ParseUnexpr(nctemp1187);
rp =nctemp1189;
struct tree* nctemp1191= np;
struct tree* nctemp1193= rp;
int nctemp1195=PtreeAddchild(nctemp1191,nctemp1193);
struct tree* nctemp1200= np;
struct tree* nctemp1202=ParseMultexprseq(nctemp1200);
sp =nctemp1202;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1212= p;
struct tree* nctemp1214=ParseUnexpr(nctemp1212);
np =nctemp1214;
struct tree* nctemp1219= np;
struct tree* nctemp1221=ParseMultexprseq(nctemp1219);
np =nctemp1221;
return np;
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1226 = (lookahead ==43);
int nctemp1231 = (lookahead ==45);
int nctemp1223 = (nctemp1226 || nctemp1231);
if(nctemp1223)
{
struct nctempchar1 *nctemp1241;
static struct nctempchar1 nctemp1242 = {{ 8}, (char*)"binexpr\0"};
nctemp1241=&nctemp1242;
nctempchar1* nctemp1239= nctemp1241;
nctempchar1* nctemp1245=ScanGetext();
nctempchar1* nctemp1243= nctemp1245;
struct tree* nctemp1246=ParseMknode(nctemp1239,nctemp1243);
np =nctemp1246;
int nctemp1248= lookahead;
int nctemp1250=ParseMatch(nctemp1248);
struct tree* nctemp1252= np;
struct tree* nctemp1254= p;
int nctemp1256=PtreeAddchild(nctemp1252,nctemp1254);
struct tree* nctemp1261= np;
struct tree* nctemp1263=ParseMultexpr(nctemp1261);
rp =nctemp1263;
struct tree* nctemp1265= np;
struct tree* nctemp1267= rp;
int nctemp1269=PtreeAddchild(nctemp1265,nctemp1267);
struct tree* nctemp1274= np;
struct tree* nctemp1276=ParseAddexprseq(nctemp1274);
sp =nctemp1276;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1286= p;
struct tree* nctemp1288=ParseMultexpr(nctemp1286);
np =nctemp1288;
struct tree* nctemp1293= np;
struct tree* nctemp1295=ParseAddexprseq(nctemp1293);
np =nctemp1295;
return np;
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1318 = (lookahead ==60);
int nctemp1323 = (lookahead ==62);
int nctemp1315 = (nctemp1318 || nctemp1323);
int nctemp1328 = (lookahead ==21);
int nctemp1312 = (nctemp1315 || nctemp1328);
int nctemp1333 = (lookahead ==3);
int nctemp1309 = (nctemp1312 || nctemp1333);
int nctemp1338 = (lookahead ==4);
int nctemp1306 = (nctemp1309 || nctemp1338);
int nctemp1343 = (lookahead ==5);
int nctemp1303 = (nctemp1306 || nctemp1343);
int nctemp1348 = (lookahead ==6);
int nctemp1300 = (nctemp1303 || nctemp1348);
int nctemp1353 = (lookahead ==20);
int nctemp1297 = (nctemp1300 || nctemp1353);
if(nctemp1297)
{
struct nctempchar1 *nctemp1363;
static struct nctempchar1 nctemp1364 = {{ 8}, (char*)"binexpr\0"};
nctemp1363=&nctemp1364;
nctempchar1* nctemp1361= nctemp1363;
nctempchar1* nctemp1367=ScanGetext();
nctempchar1* nctemp1365= nctemp1367;
struct tree* nctemp1368=ParseMknode(nctemp1361,nctemp1365);
np =nctemp1368;
int nctemp1370= lookahead;
int nctemp1372=ParseMatch(nctemp1370);
struct tree* nctemp1374= np;
struct tree* nctemp1376= p;
int nctemp1378=PtreeAddchild(nctemp1374,nctemp1376);
struct tree* nctemp1383= np;
struct tree* nctemp1385=ParseAddexpr(nctemp1383);
rp =nctemp1385;
struct tree* nctemp1387= np;
struct tree* nctemp1389= rp;
int nctemp1391=PtreeAddchild(nctemp1387,nctemp1389);
struct tree* nctemp1396= np;
struct tree* nctemp1398=ParseRelexprseq(nctemp1396);
sp =nctemp1398;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1408= p;
struct tree* nctemp1410=ParseAddexpr(nctemp1408);
np =nctemp1410;
struct tree* nctemp1415= np;
struct tree* nctemp1417=ParseRelexprseq(nctemp1415);
np =nctemp1417;
return np;
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1419 = (lookahead ==61);
if(nctemp1419)
{
struct nctempchar1 *nctemp1429;
static struct nctempchar1 nctemp1430 = {{ 8}, (char*)"binexpr\0"};
nctemp1429=&nctemp1430;
nctempchar1* nctemp1427= nctemp1429;
nctempchar1* nctemp1433=ScanGetext();
nctempchar1* nctemp1431= nctemp1433;
struct tree* nctemp1434=ParseMknode(nctemp1427,nctemp1431);
np =nctemp1434;
int nctemp1436= lookahead;
int nctemp1438=ParseMatch(nctemp1436);
struct tree* nctemp1440= np;
struct tree* nctemp1442= p;
int nctemp1444=PtreeAddchild(nctemp1440,nctemp1442);
struct tree* nctemp1449= np;
struct tree* nctemp1451=ParseRelexpr(nctemp1449);
rp =nctemp1451;
struct tree* nctemp1456= rp;
struct tree* nctemp1458=ParseAsgexprseq(nctemp1456);
sp =nctemp1458;
struct tree* nctemp1460= np;
struct tree* nctemp1462= sp;
int nctemp1464=PtreeAddchild(nctemp1460,nctemp1462);
}
else{
np =p;
}
return np;
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1474= p;
struct tree* nctemp1476=ParseRelexpr(nctemp1474);
np =nctemp1476;
struct tree* nctemp1481= np;
struct tree* nctemp1483=ParseAsgexprseq(nctemp1481);
np =nctemp1483;
return np;
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
rp =0;
struct tree* nctemp1493= rp;
struct tree* nctemp1495=ParseAsgexpr(nctemp1493);
np =nctemp1495;
int nctemp1496 = (np !=0);
if(nctemp1496)
{
struct nctempchar1 *nctemp1506;
static struct nctempchar1 nctemp1507 = {{ 5}, (char*)"expr\0"};
nctemp1506=&nctemp1507;
nctempchar1* nctemp1504= nctemp1506;
struct nctempchar1 *nctemp1510;
static struct nctempchar1 nctemp1511 = {{ 5}, (char*)"void\0"};
nctemp1510=&nctemp1511;
nctempchar1* nctemp1508= nctemp1510;
struct tree* nctemp1512=ParseMknode(nctemp1504,nctemp1508);
sp =nctemp1512;
struct tree* nctemp1514= sp;
struct tree* nctemp1516= np;
int nctemp1518=PtreeAddchild(nctemp1514,nctemp1516);
np =sp;
}
return np;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp1528=ParseType();
np =nctemp1528;
int nctemp1529 = (np ==0);
if(nctemp1529)
{
return np;
}
int nctemp1534 = (lookahead ==1);
if(nctemp1534)
{
struct nctempchar1 *nctemp1544;
static struct nctempchar1 nctemp1545 = {{ 11}, (char*)"identifier\0"};
nctemp1544=&nctemp1545;
nctempchar1* nctemp1542= nctemp1544;
nctempchar1* nctemp1548=ScanGetext();
nctempchar1* nctemp1546= nctemp1548;
struct tree* nctemp1549=ParseMknode(nctemp1542,nctemp1546);
mp =nctemp1549;
struct tree* nctemp1551= np;
struct tree* nctemp1553= mp;
int nctemp1555=PtreeAddchild(nctemp1551,nctemp1553);
int nctemp1557= lookahead;
int nctemp1559=ParseMatch(nctemp1557);
int nctemp1560 = (lookahead ==44);
if(nctemp1560)
{
struct tree* nctemp1565= np;
int nctemp1567=ParseIdseq(nctemp1565);
}
else{
int nctemp1568 = (lookahead ==61);
if(nctemp1568)
{
int nctemp1573= lookahead;
int nctemp1575=ParseMatch(nctemp1573);
struct tree* nctemp1577= mp;
int nctemp1579=ParseConstdecl(nctemp1577);
}
}
int nctemp1580 = (lookahead ==59);
if(nctemp1580)
{
int nctemp1585= 59;
int nctemp1587=ParseMatch(nctemp1585);
}
int nctemp1589= 10;
int nctemp1591=ParseMatch(nctemp1589);
}
else{
struct nctempchar1 *nctemp1595;
static struct nctempchar1 nctemp1596 = {{ 35}, (char*)"Missing variable in type statement\0"};
nctemp1595=&nctemp1596;
nctempchar1* nctemp1593= nctemp1595;
int nctemp1597=ParseError(nctemp1593);
}
return np;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1603=ParseDeclaration();
np =nctemp1603;
int nctemp1604 = (np !=0);
if(nctemp1604)
{
struct nctempchar1 *nctemp1614;
static struct nctempchar1 nctemp1615 = {{ 13}, (char*)"declarations\0"};
nctemp1614=&nctemp1615;
nctempchar1* nctemp1612= nctemp1614;
struct nctempchar1 *nctemp1618;
static struct nctempchar1 nctemp1619 = {{ 5}, (char*)"void\0"};
nctemp1618=&nctemp1619;
nctempchar1* nctemp1616= nctemp1618;
struct tree* nctemp1620=ParseMknode(nctemp1612,nctemp1616);
sp =nctemp1620;
struct tree* nctemp1622= sp;
struct tree* nctemp1624= np;
int nctemp1626=PtreeAddchild(nctemp1622,nctemp1624);
}
else{
np =0;
return np;
}
struct tree* nctemp1638=ParseDeclaration();
np =nctemp1638;
int nctemp1631 = (np !=0);
int nctemp1640=nctemp1631;
while(nctemp1640)
{{
struct tree* nctemp1642= sp;
struct tree* nctemp1644= np;
int nctemp1646=PtreeAddchild(nctemp1642,nctemp1644);
}
struct tree* nctemp1654=ParseDeclaration();
np =nctemp1654;
int nctemp1647 = (np !=0);
nctemp1640=nctemp1647;}return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1657 = (lookahead ==44);
if(nctemp1657)
{
int nctemp1662= lookahead;
int nctemp1664=ParseMatch(nctemp1662);
struct tree* nctemp1672=ParseType();
np =nctemp1672;
int nctemp1665 = (np !=0);
if(nctemp1665)
{
struct tree* nctemp1675= p;
struct tree* nctemp1677= np;
int nctemp1679=PtreeAddchild(nctemp1675,nctemp1677);
int nctemp1680 = (lookahead ==1);
if(nctemp1680)
{
struct nctempchar1 *nctemp1690;
static struct nctempchar1 nctemp1691 = {{ 11}, (char*)"identifier\0"};
nctemp1690=&nctemp1691;
nctempchar1* nctemp1688= nctemp1690;
nctempchar1* nctemp1694=ScanGetext();
nctempchar1* nctemp1692= nctemp1694;
struct tree* nctemp1695=ParseMknode(nctemp1688,nctemp1692);
sp =nctemp1695;
struct tree* nctemp1697= np;
struct tree* nctemp1699= sp;
int nctemp1701=PtreeAddchild(nctemp1697,nctemp1699);
int nctemp1703= 1;
int nctemp1705=ParseMatch(nctemp1703);
}
struct tree* nctemp1707= p;
int nctemp1709=ParseArgseq(nctemp1707);
}
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp1718=ParseType();
np =nctemp1718;
int nctemp1711 = (np !=0);
if(nctemp1711)
{
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 8}, (char*)"arglist\0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
struct nctempchar1 *nctemp1730;
static struct nctempchar1 nctemp1731 = {{ 5}, (char*)"void\0"};
nctemp1730=&nctemp1731;
nctempchar1* nctemp1728= nctemp1730;
struct tree* nctemp1732=ParseMknode(nctemp1724,nctemp1728);
sp =nctemp1732;
struct tree* nctemp1734= sp;
struct tree* nctemp1736= np;
int nctemp1738=PtreeAddchild(nctemp1734,nctemp1736);
int nctemp1739 = (lookahead ==1);
if(nctemp1739)
{
struct nctempchar1 *nctemp1749;
static struct nctempchar1 nctemp1750 = {{ 11}, (char*)"identifier\0"};
nctemp1749=&nctemp1750;
nctempchar1* nctemp1747= nctemp1749;
nctempchar1* nctemp1753=ScanGetext();
nctempchar1* nctemp1751= nctemp1753;
struct tree* nctemp1754=ParseMknode(nctemp1747,nctemp1751);
mp =nctemp1754;
struct tree* nctemp1756= np;
struct tree* nctemp1758= mp;
int nctemp1760=PtreeAddchild(nctemp1756,nctemp1758);
int nctemp1762= 1;
int nctemp1764=ParseMatch(nctemp1762);
}
struct tree* nctemp1766= sp;
int nctemp1768=ParseArgseq(nctemp1766);
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
struct nctempchar1 *nctemp1780;
static struct nctempchar1 nctemp1781 = {{ 10}, (char*)"structdec\0"};
nctemp1780=&nctemp1781;
nctempchar1* nctemp1778= nctemp1780;
struct nctempchar1 *nctemp1784;
static struct nctempchar1 nctemp1785 = {{ 5}, (char*)"void\0"};
nctemp1784=&nctemp1785;
nctempchar1* nctemp1782= nctemp1784;
struct tree* nctemp1786=ParseMknode(nctemp1778,nctemp1782);
np =nctemp1786;
struct tree* nctemp1788= p;
struct tree* nctemp1790= np;
int nctemp1792=PtreeAddchild(nctemp1788,nctemp1790);
struct tree* nctemp1797=ParseDeclarations();
sp =nctemp1797;
struct tree* nctemp1799= np;
struct tree* nctemp1801= sp;
int nctemp1803=PtreeAddchild(nctemp1799,nctemp1801);
int nctemp1805= 601;
int nctemp1807=ParseMatch(nctemp1805);
return 1;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1809 = (lookahead ==12);
if(nctemp1809)
{
struct nctempchar1 *nctemp1819;
static struct nctempchar1 nctemp1820 = {{ 6}, (char*)"while\0"};
nctemp1819=&nctemp1820;
nctempchar1* nctemp1817= nctemp1819;
struct nctempchar1 *nctemp1823;
static struct nctempchar1 nctemp1824 = {{ 5}, (char*)"void\0"};
nctemp1823=&nctemp1824;
nctempchar1* nctemp1821= nctemp1823;
struct tree* nctemp1825=ParseMknode(nctemp1817,nctemp1821);
np =nctemp1825;
int nctemp1827= 12;
int nctemp1829=ParseMatch(nctemp1827);
int nctemp1831= 40;
int nctemp1833=ParseMatch(nctemp1831);
struct tree* nctemp1841=ParseExpr();
sp =nctemp1841;
int nctemp1834 = (sp !=0);
if(nctemp1834)
{
struct tree* nctemp1844= np;
struct tree* nctemp1846= sp;
int nctemp1848=PtreeAddchild(nctemp1844,nctemp1846);
}
int nctemp1850= 41;
int nctemp1852=ParseMatch(nctemp1850);
struct tree* nctemp1857=ParseStmnt();
sp =nctemp1857;
struct tree* nctemp1859= np;
struct tree* nctemp1861= sp;
int nctemp1863=PtreeAddchild(nctemp1859,nctemp1861);
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
int nctemp1873 = (lookahead ==30);
if(nctemp1873)
{
struct nctempchar1 *nctemp1883;
static struct nctempchar1 nctemp1884 = {{ 7}, (char*)"return\0"};
nctemp1883=&nctemp1884;
nctempchar1* nctemp1881= nctemp1883;
struct nctempchar1 *nctemp1887;
static struct nctempchar1 nctemp1888 = {{ 5}, (char*)"void\0"};
nctemp1887=&nctemp1888;
nctempchar1* nctemp1885= nctemp1887;
struct tree* nctemp1889=ParseMknode(nctemp1881,nctemp1885);
np =nctemp1889;
int nctemp1891= 30;
int nctemp1893=ParseMatch(nctemp1891);
struct tree* nctemp1901=ParseExpr();
sp =nctemp1901;
int nctemp1894 = (sp !=0);
if(nctemp1894)
{
struct tree* nctemp1904= np;
struct tree* nctemp1906= sp;
int nctemp1908=PtreeAddchild(nctemp1904,nctemp1906);
sp =np;
int nctemp1913 = (lookahead ==59);
if(nctemp1913)
{
int nctemp1918= 59;
int nctemp1920=ParseMatch(nctemp1918);
}
int nctemp1922= 10;
int nctemp1924=ParseMatch(nctemp1922);
}
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
int nctemp1930 = (lookahead ==26);
if(nctemp1930)
{
struct nctempchar1 *nctemp1940;
static struct nctempchar1 nctemp1941 = {{ 4}, (char*)"for\0"};
nctemp1940=&nctemp1941;
nctempchar1* nctemp1938= nctemp1940;
struct nctempchar1 *nctemp1944;
static struct nctempchar1 nctemp1945 = {{ 5}, (char*)"void\0"};
nctemp1944=&nctemp1945;
nctempchar1* nctemp1942= nctemp1944;
struct tree* nctemp1946=ParseMknode(nctemp1938,nctemp1942);
np =nctemp1946;
int nctemp1948= 26;
int nctemp1950=ParseMatch(nctemp1948);
int nctemp1952= 40;
int nctemp1954=ParseMatch(nctemp1952);
struct tree* nctemp1962=ParseExpr();
sp =nctemp1962;
int nctemp1955 = (sp !=0);
if(nctemp1955)
{
struct tree* nctemp1965= np;
struct tree* nctemp1967= sp;
int nctemp1969=PtreeAddchild(nctemp1965,nctemp1967);
}
int nctemp1971= 59;
int nctemp1973=ParseMatch(nctemp1971);
struct tree* nctemp1981=ParseExpr();
rp =nctemp1981;
int nctemp1974 = (rp !=0);
if(nctemp1974)
{
struct tree* nctemp1984= sp;
struct tree* nctemp1986= rp;
int nctemp1988=PtreeAddsister(nctemp1984,nctemp1986);
}
int nctemp1990= 59;
int nctemp1992=ParseMatch(nctemp1990);
struct tree* nctemp2000=ParseExpr();
rp =nctemp2000;
int nctemp1993 = (rp !=0);
if(nctemp1993)
{
struct tree* nctemp2003= sp;
struct tree* nctemp2005= rp;
int nctemp2007=PtreeAddsister(nctemp2003,nctemp2005);
}
int nctemp2009= 41;
int nctemp2011=ParseMatch(nctemp2009);
struct tree* nctemp2016=ParseStmnt();
sp =nctemp2016;
struct tree* nctemp2018= np;
struct tree* nctemp2020= sp;
int nctemp2022=PtreeAddchild(nctemp2018,nctemp2020);
sp =np;
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
struct tree* nctemp2039=ParseExpr();
sp =nctemp2039;
int nctemp2032 = (sp !=0);
if(nctemp2032)
{
struct nctempchar1 *nctemp2047;
static struct nctempchar1 nctemp2048 = {{ 6}, (char*)"slice\0"};
nctemp2047=&nctemp2048;
nctempchar1* nctemp2045= nctemp2047;
struct nctempchar1 *nctemp2051;
static struct nctempchar1 nctemp2052 = {{ 5}, (char*)"void\0"};
nctemp2051=&nctemp2052;
nctempchar1* nctemp2049= nctemp2051;
struct tree* nctemp2053=ParseMknode(nctemp2045,nctemp2049);
np =nctemp2053;
struct tree* nctemp2055= np;
struct tree* nctemp2057= sp;
int nctemp2059=PtreeAddchild(nctemp2055,nctemp2057);
int nctemp2061= 58;
int nctemp2063=ParseMatch(nctemp2061);
struct tree* nctemp2071=ParseExpr();
rp =nctemp2071;
int nctemp2064 = (rp !=0);
if(nctemp2064)
{
struct tree* nctemp2074= np;
struct tree* nctemp2076= rp;
int nctemp2078=PtreeAddchild(nctemp2074,nctemp2076);
}
int nctemp2079 = (lookahead ==58);
if(nctemp2079)
{
int nctemp2084= 58;
int nctemp2086=ParseMatch(nctemp2084);
struct tree* nctemp2094=ParseExpr();
rp =nctemp2094;
int nctemp2087 = (rp !=0);
if(nctemp2087)
{
struct tree* nctemp2097= np;
struct tree* nctemp2099= rp;
int nctemp2101=PtreeAddchild(nctemp2097,nctemp2099);
}
else{
struct nctempchar1 *nctemp2105;
static struct nctempchar1 nctemp2106 = {{ 13}, (char*)"Syntax error\0"};
nctemp2105=&nctemp2106;
nctempchar1* nctemp2103= nctemp2105;
int nctemp2107=ParseError(nctemp2103);
}
}
}
else{
struct nctempchar1 *nctemp2111;
static struct nctempchar1 nctemp2112 = {{ 13}, (char*)"Syntax error\0"};
nctemp2111=&nctemp2112;
nctempchar1* nctemp2109= nctemp2111;
int nctemp2113=ParseError(nctemp2109);
}
return np;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp2122=ParseSlice();
sp =nctemp2122;
int nctemp2115 = (sp !=0);
if(nctemp2115)
{
struct tree* nctemp2125= np;
struct tree* nctemp2127= sp;
int nctemp2129=PtreeAddchild(nctemp2125,nctemp2127);
}
else{
struct nctempchar1 *nctemp2133;
static struct nctempchar1 nctemp2134 = {{ 13}, (char*)"Syntax error\0"};
nctemp2133=&nctemp2134;
nctempchar1* nctemp2131= nctemp2133;
int nctemp2135=ParseError(nctemp2131);
}
int nctemp2136 = (lookahead ==44);
if(nctemp2136)
{
int nctemp2141= 44;
int nctemp2143=ParseMatch(nctemp2141);
struct tree* nctemp2145= np;
struct tree* nctemp2147=ParseSliceseq(nctemp2145);
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
int nctemp2150 = (lookahead ==31);
if(nctemp2150)
{
struct nctempchar1 *nctemp2160;
static struct nctempchar1 nctemp2161 = {{ 9}, (char*)"parallel\0"};
nctemp2160=&nctemp2161;
nctempchar1* nctemp2158= nctemp2160;
struct nctempchar1 *nctemp2164;
static struct nctempchar1 nctemp2165 = {{ 5}, (char*)"void\0"};
nctemp2164=&nctemp2165;
nctempchar1* nctemp2162= nctemp2164;
struct tree* nctemp2166=ParseMknode(nctemp2158,nctemp2162);
np =nctemp2166;
int nctemp2168= 31;
int nctemp2170=ParseMatch(nctemp2168);
int nctemp2172= 40;
int nctemp2174=ParseMatch(nctemp2172);
struct nctempchar1 *nctemp2181;
static struct nctempchar1 nctemp2182 = {{ 9}, (char*)"sliceseq\0"};
nctemp2181=&nctemp2182;
nctempchar1* nctemp2179= nctemp2181;
struct nctempchar1 *nctemp2185;
static struct nctempchar1 nctemp2186 = {{ 5}, (char*)"void\0"};
nctemp2185=&nctemp2186;
nctempchar1* nctemp2183= nctemp2185;
struct tree* nctemp2187=ParseMknode(nctemp2179,nctemp2183);
rp =nctemp2187;
struct tree* nctemp2189= np;
struct tree* nctemp2191= rp;
int nctemp2193=PtreeAddchild(nctemp2189,nctemp2191);
struct tree* nctemp2201= rp;
struct tree* nctemp2203=ParseSliceseq(nctemp2201);
sp =nctemp2203;
int nctemp2194 = (sp ==0);
if(nctemp2194)
{
struct nctempchar1 *nctemp2208;
static struct nctempchar1 nctemp2209 = {{ 13}, (char*)"Syntax error\0"};
nctemp2208=&nctemp2209;
nctempchar1* nctemp2206= nctemp2208;
int nctemp2210=ParseError(nctemp2206);
}
int nctemp2211 = (lookahead ==41);
if(nctemp2211)
{
int nctemp2216= 41;
int nctemp2218=ParseMatch(nctemp2216);
struct tree* nctemp2223=ParseStmnt();
sp =nctemp2223;
struct tree* nctemp2225= np;
struct tree* nctemp2227= sp;
int nctemp2229=PtreeAddchild(nctemp2225,nctemp2227);
return np;
}
else{
struct nctempchar1 *nctemp2234;
static struct nctempchar1 nctemp2235 = {{ 13}, (char*)"Syntax error\0"};
nctemp2234=&nctemp2235;
nctempchar1* nctemp2232= nctemp2234;
int nctemp2236=ParseError(nctemp2232);
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
int nctemp2245 = (lookahead ==15);
if(nctemp2245)
{
int nctemp2250= 15;
int nctemp2252=ParseMatch(nctemp2250);
struct nctempchar1 *nctemp2259;
static struct nctempchar1 nctemp2260 = {{ 5}, (char*)"else\0"};
nctemp2259=&nctemp2260;
nctempchar1* nctemp2257= nctemp2259;
struct nctempchar1 *nctemp2263;
static struct nctempchar1 nctemp2264 = {{ 5}, (char*)"void\0"};
nctemp2263=&nctemp2264;
nctempchar1* nctemp2261= nctemp2263;
struct tree* nctemp2265=ParseMknode(nctemp2257,nctemp2261);
np =nctemp2265;
struct tree* nctemp2270=ParseStmnt();
sp =nctemp2270;
struct tree* nctemp2272= np;
struct tree* nctemp2274= sp;
int nctemp2276=PtreeAddchild(nctemp2272,nctemp2274);
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
int nctemp2282 = (lookahead ==14);
if(nctemp2282)
{
struct nctempchar1 *nctemp2292;
static struct nctempchar1 nctemp2293 = {{ 3}, (char*)"if\0"};
nctemp2292=&nctemp2293;
nctempchar1* nctemp2290= nctemp2292;
struct nctempchar1 *nctemp2296;
static struct nctempchar1 nctemp2297 = {{ 5}, (char*)"void\0"};
nctemp2296=&nctemp2297;
nctempchar1* nctemp2294= nctemp2296;
struct tree* nctemp2298=ParseMknode(nctemp2290,nctemp2294);
np =nctemp2298;
int nctemp2300= 14;
int nctemp2302=ParseMatch(nctemp2300);
int nctemp2304= 40;
int nctemp2306=ParseMatch(nctemp2304);
struct tree* nctemp2314=ParseExpr();
sp =nctemp2314;
int nctemp2307 = (sp !=0);
if(nctemp2307)
{
struct tree* nctemp2317= np;
struct tree* nctemp2319= sp;
int nctemp2321=PtreeAddchild(nctemp2317,nctemp2319);
}
int nctemp2323= 41;
int nctemp2325=ParseMatch(nctemp2323);
struct tree* nctemp2330=ParseStmnt();
sp =nctemp2330;
struct tree* nctemp2332= np;
struct tree* nctemp2334= sp;
int nctemp2336=PtreeAddchild(nctemp2332,nctemp2334);
struct tree* nctemp2344=ParseElsestmnt();
sp =nctemp2344;
int nctemp2337 = (sp !=0);
if(nctemp2337)
{
struct tree* nctemp2347= np;
struct tree* nctemp2349= sp;
int nctemp2351=PtreeAddchild(nctemp2347,nctemp2349);
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
struct tree* nctemp2368=ParseWhilestmnt();
np =nctemp2368;
int nctemp2361 = (np !=0);
if(nctemp2361)
{
return np;
}
else{
struct tree* nctemp2378=ParseReturnstmnt();
np =nctemp2378;
int nctemp2371 = (np !=0);
if(nctemp2371)
{
return np;
}
else{
struct tree* nctemp2388=ParseForstmnt();
np =nctemp2388;
int nctemp2381 = (np !=0);
if(nctemp2381)
{
return np;
}
else{
struct tree* nctemp2398=ParseParallelstmnt();
np =nctemp2398;
int nctemp2391 = (np !=0);
if(nctemp2391)
{
return np;
}
else{
struct tree* nctemp2408=ParseIfstmnt();
np =nctemp2408;
int nctemp2401 = (np !=0);
if(nctemp2401)
{
return np;
}
else{
struct tree* nctemp2418=ParseCompstmnt();
np =nctemp2418;
int nctemp2411 = (np !=0);
if(nctemp2411)
{
return np;
}
else{
int nctemp2421 = (lookahead ==601);
if(nctemp2421)
{
np =0;
return np;
}
else{
int nctemp2429 = (lookahead ==701);
if(nctemp2429)
{
int nctemp2434= 701;
int nctemp2436=ParseMatch(nctemp2434);
int nctemp2438= 10;
int nctemp2440=ParseMatch(nctemp2438);
np =0;
return np;
}
else{
struct tree* nctemp2449=ParseExpr();
np =nctemp2449;
int nctemp2450 = (lookahead ==59);
if(nctemp2450)
{
int nctemp2455= 59;
int nctemp2457=ParseMatch(nctemp2455);
}
int nctemp2458 = (lookahead ==10);
if(nctemp2458)
{
int nctemp2463= 10;
int nctemp2465=ParseMatch(nctemp2463);
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
struct tree* nctemp2471=ParseStmnt();
np =nctemp2471;
sp =np;
int nctemp2476 = (sp !=0);
int nctemp2480=nctemp2476;
while(nctemp2480)
{{
struct tree* nctemp2485=ParseStmnt();
sp =nctemp2485;
struct tree* nctemp2487= np;
struct tree* nctemp2489= sp;
int nctemp2491=PtreeAddsister(nctemp2487,nctemp2489);
}
int nctemp2492 = (sp !=0);
nctemp2480=nctemp2492;}return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2497 = (lookahead ==58);
if(nctemp2497)
{
struct nctempchar1 *nctemp2507;
static struct nctempchar1 nctemp2508 = {{ 10}, (char*)"compstmnt\0"};
nctemp2507=&nctemp2508;
nctempchar1* nctemp2505= nctemp2507;
struct nctempchar1 *nctemp2511;
static struct nctempchar1 nctemp2512 = {{ 5}, (char*)"void\0"};
nctemp2511=&nctemp2512;
nctempchar1* nctemp2509= nctemp2511;
struct tree* nctemp2513=ParseMknode(nctemp2505,nctemp2509);
np =nctemp2513;
int nctemp2515= 58;
int nctemp2517=ParseMatch(nctemp2515);
int nctemp2519= 10;
int nctemp2521=ParseMatch(nctemp2519);
int nctemp2523= 600;
int nctemp2525=ParseMatch(nctemp2523);
struct tree* nctemp2530=ParseDeclarations();
sp =nctemp2530;
int nctemp2531 = (sp !=0);
if(nctemp2531)
{
struct tree* nctemp2536= np;
struct tree* nctemp2538= sp;
int nctemp2540=PtreeAddchild(nctemp2536,nctemp2538);
}
struct tree* nctemp2545=ParseStmntlist();
sp =nctemp2545;
int nctemp2546 = (sp !=0);
if(nctemp2546)
{
struct tree* nctemp2551= np;
struct tree* nctemp2553= sp;
int nctemp2555=PtreeAddchild(nctemp2551,nctemp2553);
}
int nctemp2557= 601;
int nctemp2559=ParseMatch(nctemp2557);
}
else{
np =0;
}
return np;
}
int ParseFdef (struct tree* p)
{
struct tree* np;
struct tree* nctemp2566= p;
struct nctempchar1 *nctemp2570;
static struct nctempchar1 nctemp2571 = {{ 5}, (char*)"fdef\0"};
nctemp2570=&nctemp2571;
nctempchar1* nctemp2568= nctemp2570;
int nctemp2572=PtreeSetname(nctemp2566,nctemp2568);
struct tree* nctemp2577=ParseArglist();
np =nctemp2577;
int nctemp2578 = (np !=0);
if(nctemp2578)
{
struct tree* nctemp2583= p;
struct tree* nctemp2585= np;
int nctemp2587=PtreeAddchild(nctemp2583,nctemp2585);
}
int nctemp2589= 41;
int nctemp2591=ParseMatch(nctemp2589);
np =0;
struct tree* nctemp2600=ParseCompstmnt();
np =nctemp2600;
int nctemp2601 = (np !=0);
if(nctemp2601)
{
struct tree* nctemp2606= p;
struct tree* nctemp2608= np;
int nctemp2610=PtreeAddchild(nctemp2606,nctemp2608);
}
else{
struct nctempchar1 *nctemp2614;
static struct nctempchar1 nctemp2615 = {{ 22}, (char*)"Missing function body\0"};
nctemp2614=&nctemp2615;
nctempchar1* nctemp2612= nctemp2614;
int nctemp2616=ParseError(nctemp2612);
}
return 1;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* imp;
struct tree* nctemp2622=ParseType();
np =nctemp2622;
int nctemp2623 = (np ==0);
if(nctemp2623)
{
int nctemp2627 = (lookahead ==433);
if(nctemp2627)
{
int nctemp2632= lookahead;
int nctemp2634=ParseMatch(nctemp2632);
int nctemp2635 = (lookahead ==1);
if(nctemp2635)
{
struct nctempchar1 *nctemp2645;
static struct nctempchar1 nctemp2646 = {{ 7}, (char*)"import\0"};
nctemp2645=&nctemp2646;
nctempchar1* nctemp2643= nctemp2645;
nctempchar1* nctemp2649=ScanGetext();
nctempchar1* nctemp2647= nctemp2649;
struct tree* nctemp2650=ParseMknode(nctemp2643,nctemp2647);
imp =nctemp2650;
int nctemp2652= 1;
int nctemp2654=ParseMatch(nctemp2652);
int nctemp2656= 10;
int nctemp2658=ParseMatch(nctemp2656);
struct nctempchar1 *nctemp2665;
static struct nctempchar1 nctemp2666 = {{ 8}, (char*)"extdecl\0"};
nctemp2665=&nctemp2666;
nctempchar1* nctemp2663= nctemp2665;
struct nctempchar1 *nctemp2669;
static struct nctempchar1 nctemp2670 = {{ 5}, (char*)"void\0"};
nctemp2669=&nctemp2670;
nctempchar1* nctemp2667= nctemp2669;
struct tree* nctemp2671=ParseMknode(nctemp2663,nctemp2667);
sp =nctemp2671;
struct tree* nctemp2673= sp;
struct tree* nctemp2675= imp;
int nctemp2677=PtreeAddchild(nctemp2673,nctemp2675);
}
return sp;
}
else{
struct nctempchar1 *nctemp2682;
static struct nctempchar1 nctemp2683 = {{ 13}, (char*)"Syntax error\0"};
nctemp2682=&nctemp2683;
nctempchar1* nctemp2680= nctemp2682;
int nctemp2684=ParseError(nctemp2680);
}
}
int nctemp2685 = (lookahead ==58);
if(nctemp2685)
{
int nctemp2690= lookahead;
int nctemp2692=ParseMatch(nctemp2690);
int nctemp2694= 10;
int nctemp2696=ParseMatch(nctemp2694);
int nctemp2698= 600;
int nctemp2700=ParseMatch(nctemp2698);
struct nctempchar1 *nctemp2707;
static struct nctempchar1 nctemp2708 = {{ 8}, (char*)"extdecl\0"};
nctemp2707=&nctemp2708;
nctempchar1* nctemp2705= nctemp2707;
struct nctempchar1 *nctemp2711;
static struct nctempchar1 nctemp2712 = {{ 5}, (char*)"void\0"};
nctemp2711=&nctemp2712;
nctempchar1* nctemp2709= nctemp2711;
struct tree* nctemp2713=ParseMknode(nctemp2705,nctemp2709);
sp =nctemp2713;
struct tree* nctemp2715= sp;
struct tree* nctemp2717= np;
int nctemp2719=PtreeAddchild(nctemp2715,nctemp2717);
struct tree* nctemp2721= np;
int nctemp2723=ParseStructdeclar(nctemp2721);
return sp;
}
int nctemp2725 = (lookahead ==1);
if(nctemp2725)
{
struct nctempchar1 *nctemp2735;
static struct nctempchar1 nctemp2736 = {{ 8}, (char*)"extdecl\0"};
nctemp2735=&nctemp2736;
nctempchar1* nctemp2733= nctemp2735;
struct nctempchar1 *nctemp2739;
static struct nctempchar1 nctemp2740 = {{ 5}, (char*)"void\0"};
nctemp2739=&nctemp2740;
nctempchar1* nctemp2737= nctemp2739;
struct tree* nctemp2741=ParseMknode(nctemp2733,nctemp2737);
sp =nctemp2741;
struct tree* nctemp2743= sp;
struct tree* nctemp2745= np;
int nctemp2747=PtreeAddchild(nctemp2743,nctemp2745);
struct nctempchar1 *nctemp2754;
static struct nctempchar1 nctemp2755 = {{ 11}, (char*)"identifier\0"};
nctemp2754=&nctemp2755;
nctempchar1* nctemp2752= nctemp2754;
nctempchar1* nctemp2758=ScanGetext();
nctempchar1* nctemp2756= nctemp2758;
struct tree* nctemp2759=ParseMknode(nctemp2752,nctemp2756);
mp =nctemp2759;
struct tree* nctemp2761= np;
struct tree* nctemp2763= mp;
int nctemp2765=PtreeAddchild(nctemp2761,nctemp2763);
int nctemp2767= lookahead;
int nctemp2769=ParseMatch(nctemp2767);
int nctemp2770 = (lookahead ==44);
if(nctemp2770)
{
struct tree* nctemp2775= np;
int nctemp2777=ParseIdseq(nctemp2775);
int nctemp2778 = (lookahead ==59);
if(nctemp2778)
{
int nctemp2783= 59;
int nctemp2785=ParseMatch(nctemp2783);
}
int nctemp2787= 10;
int nctemp2789=ParseMatch(nctemp2787);
}
else{
int nctemp2790 = (lookahead ==40);
if(nctemp2790)
{
int nctemp2795= 40;
int nctemp2797=ParseMatch(nctemp2795);
struct tree* nctemp2799= mp;
int nctemp2801=ParseFdef(nctemp2799);
}
else{
int nctemp2802 = (lookahead ==61);
if(nctemp2802)
{
int nctemp2807= lookahead;
int nctemp2809=ParseMatch(nctemp2807);
struct tree* nctemp2811= mp;
int nctemp2813=ParseConstdecl(nctemp2811);
int nctemp2815= 10;
int nctemp2817=ParseMatch(nctemp2815);
}
else{
int nctemp2818 = (lookahead ==59);
if(nctemp2818)
{
int nctemp2823= 59;
int nctemp2825=ParseMatch(nctemp2823);
}
int nctemp2827= 10;
int nctemp2829=ParseMatch(nctemp2827);
}
}
}
}
return sp;
}
struct tree* ParseParse ()
{
struct tree* np;
np =0;
int nctemp2835 = (lookahead ==19);
if(nctemp2835)
{
return np;
}
else{
struct tree* nctemp2844=ParseExtdecl();
np =nctemp2844;
}
return np;
}
}
