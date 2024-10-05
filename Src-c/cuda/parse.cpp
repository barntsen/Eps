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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
int ScanInfile;
nctempchar1 *ScanInfilename;
nctempchar1 *ScanFile;
nctempchar1 * ScanGetfile ();
int ScanGetline ();
int ScanError (nctempchar1 *s);
int ScanInit (nctempchar1 *infile);
int ScanGetch ();
int ScanIncline ();
int ScanUngetch ();
int ScanWhite ();
int ScanComment ();
int ScanLcomment ();
int ScanFtail (int p);
int ScanLex ();
nctempchar1 * ScanSetfile (nctempchar1 *fname);
int ScanInclude ();
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
static struct nctempchar1 nctemp32 = {{ 13}, (char*)"syntax error\0"};
nctemp31=&nctemp32;
nctempchar1* nctemp29= nctemp31;
int nctemp33=ParseError(nctemp29);
int nctemp38=ScanGetok();
lookahead =nctemp38;
}
return 1;
}
struct tree* ParseMknode (nctempchar1 *name,nctempchar1 *def)
{
struct tree* p;
nctempchar1 *s;
nctempchar1* nctemp44= name;
nctempchar1* nctemp47= def;
struct tree* nctemp50=PtreeMknode(nctemp44,nctemp47);
p =nctemp50;
struct tree* nctemp52= p;
int nctemp56=ScanGetline();
int nctemp54= nctemp56;
int nctemp57=PtreeSetline(nctemp52,nctemp54);
struct tree* nctemp59= p;
nctempchar1* nctemp63=ScanGetfile();
nctempchar1* nctemp61= nctemp63;
int nctemp64=PtreeSetfile(nctemp59,nctemp61);
return p;
}
struct tree* ParseExprseq (struct tree* p)
{
int nctemp66 = (lookahead ==44);
if(nctemp66)
{
int nctemp71= lookahead;
int nctemp73=ParseMatch(nctemp71);
struct tree* nctemp75= p;
struct tree* nctemp79=ParseExpr();
struct tree* nctemp77= nctemp79;
int nctemp80=PtreeAddsister(nctemp75,nctemp77);
struct tree* nctemp82= p;
struct tree* nctemp84=ParseExprseq(nctemp82);
}
p =0;
return p;
}
struct tree* ParseExprlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp93=ParseExpr();
np =nctemp93;
int nctemp94 = (np !=0);
if(nctemp94)
{
struct nctempchar1 *nctemp104;
static struct nctempchar1 nctemp105 = {{ 9}, (char*)"exprlist\0"};
nctemp104=&nctemp105;
nctempchar1* nctemp102= nctemp104;
struct nctempchar1 *nctemp108;
static struct nctempchar1 nctemp109 = {{ 5}, (char*)"void\0"};
nctemp108=&nctemp109;
nctempchar1* nctemp106= nctemp108;
struct tree* nctemp110=ParseMknode(nctemp102,nctemp106);
sp =nctemp110;
struct tree* nctemp112= sp;
struct tree* nctemp114= np;
int nctemp116=PtreeAddchild(nctemp112,nctemp114);
struct tree* nctemp118= np;
struct tree* nctemp120=ParseExprseq(nctemp118);
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
int nctemp126 = (lookahead ==42);
if(nctemp126)
{
int nctemp131= 42;
int nctemp133=ParseMatch(nctemp131);
struct nctempchar1 *nctemp140;
static struct nctempchar1 nctemp141 = {{ 10}, (char*)"arrayargs\0"};
nctemp140=&nctemp141;
nctempchar1* nctemp138= nctemp140;
struct nctempchar1 *nctemp144;
static struct nctempchar1 nctemp145 = {{ 5}, (char*)"void\0"};
nctemp144=&nctemp145;
nctempchar1* nctemp142= nctemp144;
struct tree* nctemp146=ParseMknode(nctemp138,nctemp142);
sp =nctemp146;
struct tree* nctemp148= p;
struct tree* nctemp150= sp;
int nctemp152=PtreeAddchild(nctemp148,nctemp150);
int nctemp153 = (lookahead ==44);
if(nctemp153)
{
int nctemp158= lookahead;
int nctemp160=ParseMatch(nctemp158);
struct tree* nctemp162= p;
int nctemp164=ParseArrayarg(nctemp162);
}
else{
return 1;
}
}
else{
struct nctempchar1 *nctemp172;
static struct nctempchar1 nctemp173 = {{ 10}, (char*)"arrayargs\0"};
nctemp172=&nctemp173;
nctempchar1* nctemp170= nctemp172;
struct nctempchar1 *nctemp176;
static struct nctempchar1 nctemp177 = {{ 5}, (char*)"void\0"};
nctemp176=&nctemp177;
nctempchar1* nctemp174= nctemp176;
struct tree* nctemp178=ParseMknode(nctemp170,nctemp174);
sp =nctemp178;
struct tree* nctemp180= p;
struct tree* nctemp182= sp;
int nctemp184=PtreeAddchild(nctemp180,nctemp182);
struct tree* nctemp189=ParseExprlist();
np =nctemp189;
int nctemp190 = (sp !=0);
if(nctemp190)
{
struct tree* nctemp195= sp;
struct tree* nctemp197= np;
int nctemp199=PtreeAddchild(nctemp195,nctemp197);
}
else{
struct nctempchar1 *nctemp203;
static struct nctempchar1 nctemp204 = {{ 13}, (char*)"Syntax error\0"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
int nctemp205=ParseError(nctemp201);
}
return 1;
}
return 1;
}
int ParseIdseq (struct tree* p)
{
struct tree* sp;
int nctemp208 = (lookahead ==44);
if(nctemp208)
{
int nctemp213= lookahead;
int nctemp215=ParseMatch(nctemp213);
struct nctempchar1 *nctemp222;
static struct nctempchar1 nctemp223 = {{ 11}, (char*)"identifier\0"};
nctemp222=&nctemp223;
nctempchar1* nctemp220= nctemp222;
nctempchar1* nctemp226=ScanGetext();
nctempchar1* nctemp224= nctemp226;
struct tree* nctemp227=ParseMknode(nctemp220,nctemp224);
sp =nctemp227;
struct tree* nctemp229= p;
struct tree* nctemp231= sp;
int nctemp233=PtreeAddchild(nctemp229,nctemp231);
int nctemp235= 1;
int nctemp237=ParseMatch(nctemp235);
struct tree* nctemp239= p;
int nctemp241=ParseIdseq(nctemp239);
}
else{
return 1;
}
return 1;
}
int ParseConstdecl (struct tree* p)
{
struct tree* np;
struct tree* nctemp248=ParseExpr();
np =nctemp248;
int nctemp249 = (np !=0);
if(nctemp249)
{
struct tree* nctemp254= p;
struct tree* nctemp256= np;
int nctemp258=PtreeAddchild(nctemp254,nctemp256);
}
int nctemp260= 59;
int nctemp262=ParseMatch(nctemp260);
return 1;
}
struct tree* ParseIdent ()
{
struct tree* np;
struct tree* sp;
int nctemp264 = (lookahead ==1);
if(nctemp264)
{
struct nctempchar1 *nctemp274;
static struct nctempchar1 nctemp275 = {{ 11}, (char*)"identifier\0"};
nctemp274=&nctemp275;
nctempchar1* nctemp272= nctemp274;
nctempchar1* nctemp278=ScanGetext();
nctempchar1* nctemp276= nctemp278;
struct tree* nctemp279=ParseMknode(nctemp272,nctemp276);
sp =nctemp279;
int nctemp281= 1;
int nctemp283=ParseMatch(nctemp281);
int nctemp284 = (lookahead ==91);
if(nctemp284)
{
int nctemp289= lookahead;
int nctemp291=ParseMatch(nctemp289);
struct tree* nctemp293= sp;
struct nctempchar1 *nctemp297;
static struct nctempchar1 nctemp298 = {{ 6}, (char*)"array\0"};
nctemp297=&nctemp298;
nctempchar1* nctemp295= nctemp297;
int nctemp299=PtreeSetarray(nctemp293,nctemp295);
struct tree* nctemp304=ParseExprlist();
np =nctemp304;
struct tree* nctemp306= sp;
struct tree* nctemp308= np;
int nctemp310=PtreeAddchild(nctemp306,nctemp308);
int nctemp312= 93;
int nctemp314=ParseMatch(nctemp312);
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
int nctemp332 = (lookahead ==7);
int nctemp337 = (lookahead ==9);
int nctemp329 = (nctemp332 || nctemp337);
int nctemp342 = (lookahead ==8);
int nctemp326 = (nctemp329 || nctemp342);
int nctemp347 = (lookahead ==431);
int nctemp323 = (nctemp326 || nctemp347);
int nctemp352 = (lookahead ==10);
int nctemp320 = (nctemp323 || nctemp352);
if(nctemp320)
{
struct nctempchar1 *nctemp362;
static struct nctempchar1 nctemp363 = {{ 5}, (char*)"type\0"};
nctemp362=&nctemp363;
nctempchar1* nctemp360= nctemp362;
nctempchar1* nctemp366=ScanGetext();
nctempchar1* nctemp364= nctemp366;
struct tree* nctemp367=ParseMknode(nctemp360,nctemp364);
np =nctemp367;
int nctemp369= lookahead;
int nctemp371=ParseMatch(nctemp369);
}
else{
int nctemp372 = (lookahead ==11);
if(nctemp372)
{
int nctemp377= lookahead;
int nctemp379=ParseMatch(nctemp377);
struct nctempchar1 *nctemp386;
static struct nctempchar1 nctemp387 = {{ 5}, (char*)"type\0"};
nctemp386=&nctemp387;
nctempchar1* nctemp384= nctemp386;
nctempchar1* nctemp390=ScanGetext();
nctempchar1* nctemp388= nctemp390;
struct tree* nctemp391=ParseMknode(nctemp384,nctemp388);
np =nctemp391;
struct tree* nctemp393= np;
struct nctempchar1 *nctemp397;
static struct nctempchar1 nctemp398 = {{ 7}, (char*)"struct\0"};
nctemp397=&nctemp398;
nctempchar1* nctemp395= nctemp397;
int nctemp399=PtreeSetstruct(nctemp393,nctemp395);
int nctemp401= 1;
int nctemp403=ParseMatch(nctemp401);
}
else{
np =0;
}
}
int nctemp408 = (lookahead ==91);
if(nctemp408)
{
int nctemp413= lookahead;
int nctemp415=ParseMatch(nctemp413);
struct tree* nctemp417= np;
struct nctempchar1 *nctemp421;
static struct nctempchar1 nctemp422 = {{ 6}, (char*)"array\0"};
nctemp421=&nctemp422;
nctempchar1* nctemp419= nctemp421;
int nctemp423=PtreeSetarray(nctemp417,nctemp419);
struct nctempchar1 *nctemp430;
static struct nctempchar1 nctemp431 = {{ 10}, (char*)"arrayargs\0"};
nctemp430=&nctemp431;
nctempchar1* nctemp428= nctemp430;
struct nctempchar1 *nctemp434;
static struct nctempchar1 nctemp435 = {{ 5}, (char*)"void\0"};
nctemp434=&nctemp435;
nctempchar1* nctemp432= nctemp434;
struct tree* nctemp436=ParseMknode(nctemp428,nctemp432);
sp =nctemp436;
struct tree* nctemp438= np;
struct tree* nctemp440= sp;
int nctemp442=PtreeAddchild(nctemp438,nctemp440);
struct tree* nctemp444= sp;
int nctemp446=ParseArrayarg(nctemp444);
int nctemp448= 93;
int nctemp450=ParseMatch(nctemp448);
}
return np;
}
struct tree* ParsePrimexpr (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* rp;
int nctemp452 = (lookahead ==1);
if(nctemp452)
{
struct nctempchar1 *nctemp462;
static struct nctempchar1 nctemp463 = {{ 11}, (char*)"identifier\0"};
nctemp462=&nctemp463;
nctempchar1* nctemp460= nctemp462;
nctempchar1* nctemp466=ScanGetext();
nctempchar1* nctemp464= nctemp466;
struct tree* nctemp467=ParseMknode(nctemp460,nctemp464);
sp =nctemp467;
int nctemp469= 1;
int nctemp471=ParseMatch(nctemp469);
int nctemp472 = (lookahead ==91);
if(nctemp472)
{
int nctemp477= lookahead;
int nctemp479=ParseMatch(nctemp477);
struct tree* nctemp481= sp;
struct nctempchar1 *nctemp485;
static struct nctempchar1 nctemp486 = {{ 6}, (char*)"array\0"};
nctemp485=&nctemp486;
nctempchar1* nctemp483= nctemp485;
int nctemp487=PtreeSetarray(nctemp481,nctemp483);
struct tree* nctemp492=ParseExprlist();
np =nctemp492;
struct tree* nctemp494= sp;
struct tree* nctemp496= np;
int nctemp498=PtreeAddchild(nctemp494,nctemp496);
int nctemp500= 93;
int nctemp502=ParseMatch(nctemp500);
int nctemp503 = (lookahead ==46);
if(nctemp503)
{
int nctemp508= 46;
int nctemp510=ParseMatch(nctemp508);
struct tree* nctemp515=ParseIdent();
np =nctemp515;
struct tree* nctemp517= sp;
struct tree* nctemp519= np;
int nctemp521=PtreeAddchild(nctemp517,nctemp519);
struct tree* nctemp523= np;
struct nctempchar1 *nctemp527;
static struct nctempchar1 nctemp528 = {{ 9}, (char*)"selector\0"};
nctemp527=&nctemp528;
nctempchar1* nctemp525= nctemp527;
int nctemp529=PtreeSetname(nctemp523,nctemp525);
}
}
else{
int nctemp530 = (lookahead ==40);
if(nctemp530)
{
int nctemp535= lookahead;
int nctemp537=ParseMatch(nctemp535);
struct tree* nctemp539= sp;
struct nctempchar1 *nctemp543;
static struct nctempchar1 nctemp544 = {{ 6}, (char*)"fcall\0"};
nctemp543=&nctemp544;
nctempchar1* nctemp541= nctemp543;
int nctemp545=PtreeSetname(nctemp539,nctemp541);
np =0;
int nctemp550 = (lookahead !=41);
if(nctemp550)
{
struct tree* nctemp558=ParseExprlist();
np =nctemp558;
}
int nctemp560= 41;
int nctemp562=ParseMatch(nctemp560);
int nctemp563 = (np !=0);
if(nctemp563)
{
struct tree* nctemp568= sp;
struct tree* nctemp570= np;
int nctemp572=PtreeAddchild(nctemp568,nctemp570);
}
}
else{
int nctemp573 = (lookahead ==46);
if(nctemp573)
{
int nctemp578= 46;
int nctemp580=ParseMatch(nctemp578);
struct tree* nctemp585=ParseIdent();
np =nctemp585;
struct tree* nctemp587= sp;
struct tree* nctemp589= np;
int nctemp591=PtreeAddchild(nctemp587,nctemp589);
struct tree* nctemp593= np;
struct nctempchar1 *nctemp597;
static struct nctempchar1 nctemp598 = {{ 9}, (char*)"selector\0"};
nctemp597=&nctemp598;
nctempchar1* nctemp595= nctemp597;
int nctemp599=PtreeSetname(nctemp593,nctemp595);
}
}
}
}
else{
int nctemp600 = (lookahead ==23);
if(nctemp600)
{
int nctemp605= lookahead;
int nctemp607=ParseMatch(nctemp605);
struct nctempchar1 *nctemp614;
static struct nctempchar1 nctemp615 = {{ 5}, (char*)"cast\0"};
nctemp614=&nctemp615;
nctempchar1* nctemp612= nctemp614;
struct nctempchar1 *nctemp618;
static struct nctempchar1 nctemp619 = {{ 5}, (char*)"void\0"};
nctemp618=&nctemp619;
nctempchar1* nctemp616= nctemp618;
struct tree* nctemp620=ParseMknode(nctemp612,nctemp616);
sp =nctemp620;
int nctemp622= 40;
int nctemp624=ParseMatch(nctemp622);
struct tree* nctemp629=ParseType();
np =nctemp629;
int nctemp630 = (np ==0);
if(nctemp630)
{
struct nctempchar1 *nctemp637;
static struct nctempchar1 nctemp638 = {{ 13}, (char*)"Syntax error\0"};
nctemp637=&nctemp638;
nctempchar1* nctemp635= nctemp637;
int nctemp639=ParseError(nctemp635);
}
else{
struct tree* nctemp641= sp;
struct tree* nctemp643= np;
int nctemp645=PtreeAddchild(nctemp641,nctemp643);
}
int nctemp647= 44;
int nctemp649=ParseMatch(nctemp647);
struct tree* nctemp654=ParseExpr();
np =nctemp654;
struct tree* nctemp656= sp;
struct tree* nctemp658= np;
int nctemp660=PtreeAddchild(nctemp656,nctemp658);
int nctemp662= 41;
int nctemp664=ParseMatch(nctemp662);
}
else{
int nctemp665 = (lookahead ==26);
if(nctemp665)
{
int nctemp670= lookahead;
int nctemp672=ParseMatch(nctemp670);
struct nctempchar1 *nctemp679;
static struct nctempchar1 nctemp680 = {{ 4}, (char*)"new\0"};
nctemp679=&nctemp680;
nctempchar1* nctemp677= nctemp679;
struct nctempchar1 *nctemp683;
static struct nctempchar1 nctemp684 = {{ 5}, (char*)"void\0"};
nctemp683=&nctemp684;
nctempchar1* nctemp681= nctemp683;
struct tree* nctemp685=ParseMknode(nctemp677,nctemp681);
sp =nctemp685;
int nctemp687= 40;
int nctemp689=ParseMatch(nctemp687);
struct tree* nctemp694=ParseType();
np =nctemp694;
int nctemp695 = (np ==0);
if(nctemp695)
{
struct nctempchar1 *nctemp702;
static struct nctempchar1 nctemp703 = {{ 13}, (char*)"Syntax error\0"};
nctemp702=&nctemp703;
nctempchar1* nctemp700= nctemp702;
int nctemp704=ParseError(nctemp700);
}
else{
struct tree* nctemp706= sp;
struct tree* nctemp708= np;
int nctemp710=PtreeAddchild(nctemp706,nctemp708);
}
int nctemp712= 41;
int nctemp714=ParseMatch(nctemp712);
}
else{
int nctemp715 = (lookahead ==50);
if(nctemp715)
{
int nctemp720= lookahead;
int nctemp722=ParseMatch(nctemp720);
struct nctempchar1 *nctemp729;
static struct nctempchar1 nctemp730 = {{ 7}, (char*)"delete\0"};
nctemp729=&nctemp730;
nctempchar1* nctemp727= nctemp729;
struct nctempchar1 *nctemp733;
static struct nctempchar1 nctemp734 = {{ 5}, (char*)"void\0"};
nctemp733=&nctemp734;
nctempchar1* nctemp731= nctemp733;
struct tree* nctemp735=ParseMknode(nctemp727,nctemp731);
sp =nctemp735;
int nctemp737= 40;
int nctemp739=ParseMatch(nctemp737);
struct tree* nctemp744=ParseExpr();
np =nctemp744;
int nctemp745 = (np ==0);
if(nctemp745)
{
struct nctempchar1 *nctemp752;
static struct nctempchar1 nctemp753 = {{ 13}, (char*)"Syntax error\0"};
nctemp752=&nctemp753;
nctempchar1* nctemp750= nctemp752;
int nctemp754=ParseError(nctemp750);
}
else{
struct tree* nctemp756= sp;
struct tree* nctemp758= np;
int nctemp760=PtreeAddchild(nctemp756,nctemp758);
}
int nctemp762= 41;
int nctemp764=ParseMatch(nctemp762);
}
else{
int nctemp765 = (lookahead ==25);
if(nctemp765)
{
int nctemp770= lookahead;
int nctemp772=ParseMatch(nctemp770);
struct nctempchar1 *nctemp779;
static struct nctempchar1 nctemp780 = {{ 6}, (char*)"cmplx\0"};
nctemp779=&nctemp780;
nctempchar1* nctemp777= nctemp779;
struct nctempchar1 *nctemp783;
static struct nctempchar1 nctemp784 = {{ 5}, (char*)"void\0"};
nctemp783=&nctemp784;
nctempchar1* nctemp781= nctemp783;
struct tree* nctemp785=ParseMknode(nctemp777,nctemp781);
sp =nctemp785;
int nctemp787= 40;
int nctemp789=ParseMatch(nctemp787);
struct tree* nctemp794=ParseExprlist();
np =nctemp794;
int nctemp795 = (np ==0);
if(nctemp795)
{
struct nctempchar1 *nctemp802;
static struct nctempchar1 nctemp803 = {{ 13}, (char*)"Syntax error\0"};
nctemp802=&nctemp803;
nctempchar1* nctemp800= nctemp802;
int nctemp804=ParseError(nctemp800);
}
else{
struct tree* nctemp806= sp;
struct tree* nctemp808= np;
int nctemp810=PtreeAddchild(nctemp806,nctemp808);
}
int nctemp812= 41;
int nctemp814=ParseMatch(nctemp812);
}
else{
int nctemp815 = (lookahead ==28);
if(nctemp815)
{
int nctemp820= lookahead;
int nctemp822=ParseMatch(nctemp820);
struct nctempchar1 *nctemp829;
static struct nctempchar1 nctemp830 = {{ 3}, (char*)"re\0"};
nctemp829=&nctemp830;
nctempchar1* nctemp827= nctemp829;
struct nctempchar1 *nctemp833;
static struct nctempchar1 nctemp834 = {{ 5}, (char*)"void\0"};
nctemp833=&nctemp834;
nctempchar1* nctemp831= nctemp833;
struct tree* nctemp835=ParseMknode(nctemp827,nctemp831);
sp =nctemp835;
int nctemp837= 40;
int nctemp839=ParseMatch(nctemp837);
struct tree* nctemp844=ParseExpr();
np =nctemp844;
int nctemp845 = (np ==0);
if(nctemp845)
{
struct nctempchar1 *nctemp852;
static struct nctempchar1 nctemp853 = {{ 13}, (char*)"Syntax error\0"};
nctemp852=&nctemp853;
nctempchar1* nctemp850= nctemp852;
int nctemp854=ParseError(nctemp850);
}
else{
struct tree* nctemp856= sp;
struct tree* nctemp858= np;
int nctemp860=PtreeAddchild(nctemp856,nctemp858);
}
int nctemp862= 41;
int nctemp864=ParseMatch(nctemp862);
}
else{
int nctemp865 = (lookahead ==27);
if(nctemp865)
{
int nctemp870= lookahead;
int nctemp872=ParseMatch(nctemp870);
struct nctempchar1 *nctemp879;
static struct nctempchar1 nctemp880 = {{ 3}, (char*)"im\0"};
nctemp879=&nctemp880;
nctempchar1* nctemp877= nctemp879;
struct nctempchar1 *nctemp883;
static struct nctempchar1 nctemp884 = {{ 5}, (char*)"void\0"};
nctemp883=&nctemp884;
nctempchar1* nctemp881= nctemp883;
struct tree* nctemp885=ParseMknode(nctemp877,nctemp881);
sp =nctemp885;
int nctemp887= 40;
int nctemp889=ParseMatch(nctemp887);
struct tree* nctemp894=ParseExpr();
np =nctemp894;
int nctemp895 = (np ==0);
if(nctemp895)
{
struct nctempchar1 *nctemp902;
static struct nctempchar1 nctemp903 = {{ 13}, (char*)"Syntax error\0"};
nctemp902=&nctemp903;
nctempchar1* nctemp900= nctemp902;
int nctemp904=ParseError(nctemp900);
}
else{
struct tree* nctemp906= sp;
struct tree* nctemp908= np;
int nctemp910=PtreeAddchild(nctemp906,nctemp908);
}
int nctemp912= 41;
int nctemp914=ParseMatch(nctemp912);
}
else{
int nctemp915 = (lookahead ==29);
if(nctemp915)
{
int nctemp920= lookahead;
int nctemp922=ParseMatch(nctemp920);
struct nctempchar1 *nctemp929;
static struct nctempchar1 nctemp930 = {{ 4}, (char*)"len\0"};
nctemp929=&nctemp930;
nctempchar1* nctemp927= nctemp929;
struct nctempchar1 *nctemp933;
static struct nctempchar1 nctemp934 = {{ 5}, (char*)"void\0"};
nctemp933=&nctemp934;
nctempchar1* nctemp931= nctemp933;
struct tree* nctemp935=ParseMknode(nctemp927,nctemp931);
sp =nctemp935;
int nctemp937= 40;
int nctemp939=ParseMatch(nctemp937);
struct tree* nctemp944=ParseExpr();
np =nctemp944;
int nctemp945 = (np ==0);
if(nctemp945)
{
struct nctempchar1 *nctemp952;
static struct nctempchar1 nctemp953 = {{ 13}, (char*)"Syntax error\0"};
nctemp952=&nctemp953;
nctempchar1* nctemp950= nctemp952;
int nctemp954=ParseError(nctemp950);
}
else{
struct tree* nctemp956= sp;
struct tree* nctemp958= np;
int nctemp960=PtreeAddchild(nctemp956,nctemp958);
}
int nctemp962= 44;
int nctemp964=ParseMatch(nctemp962);
struct tree* nctemp969=ParseExpr();
rp =nctemp969;
int nctemp970 = (rp ==0);
if(nctemp970)
{
struct nctempchar1 *nctemp977;
static struct nctempchar1 nctemp978 = {{ 13}, (char*)"Syntax error\0"};
nctemp977=&nctemp978;
nctempchar1* nctemp975= nctemp977;
int nctemp979=ParseError(nctemp975);
}
else{
struct tree* nctemp981= np;
struct tree* nctemp983= rp;
int nctemp985=PtreeAddsister(nctemp981,nctemp983);
}
int nctemp987= 41;
int nctemp989=ParseMatch(nctemp987);
}
else{
int nctemp990 = (lookahead ==17);
if(nctemp990)
{
struct nctempchar1 *nctemp1000;
static struct nctempchar1 nctemp1001 = {{ 10}, (char*)"iconstant\0"};
nctemp1000=&nctemp1001;
nctempchar1* nctemp998= nctemp1000;
nctempchar1* nctemp1004=ScanGetext();
nctempchar1* nctemp1002= nctemp1004;
struct tree* nctemp1005=ParseMknode(nctemp998,nctemp1002);
sp =nctemp1005;
int nctemp1007= 17;
int nctemp1009=ParseMatch(nctemp1007);
}
else{
int nctemp1010 = (lookahead ==24);
if(nctemp1010)
{
struct nctempchar1 *nctemp1020;
static struct nctempchar1 nctemp1021 = {{ 10}, (char*)"rconstant\0"};
nctemp1020=&nctemp1021;
nctempchar1* nctemp1018= nctemp1020;
nctempchar1* nctemp1024=ScanGetext();
nctempchar1* nctemp1022= nctemp1024;
struct tree* nctemp1025=ParseMknode(nctemp1018,nctemp1022);
sp =nctemp1025;
int nctemp1027= 24;
int nctemp1029=ParseMatch(nctemp1027);
}
else{
int nctemp1030 = (lookahead ==18);
if(nctemp1030)
{
struct nctempchar1 *nctemp1040;
static struct nctempchar1 nctemp1041 = {{ 10}, (char*)"sconstant\0"};
nctemp1040=&nctemp1041;
nctempchar1* nctemp1038= nctemp1040;
nctempchar1* nctemp1044=ScanGetext();
nctempchar1* nctemp1042= nctemp1044;
struct tree* nctemp1045=ParseMknode(nctemp1038,nctemp1042);
sp =nctemp1045;
int nctemp1047= 18;
int nctemp1049=ParseMatch(nctemp1047);
}
else{
int nctemp1050 = (lookahead ==40);
if(nctemp1050)
{
int nctemp1055= 40;
int nctemp1057=ParseMatch(nctemp1055);
struct tree* nctemp1062= p;
struct tree* nctemp1064=ParseAsgexpr(nctemp1062);
sp =nctemp1064;
int nctemp1066= 41;
int nctemp1068=ParseMatch(nctemp1066);
}
else{
struct nctempchar1 *nctemp1072;
static struct nctempchar1 nctemp1073 = {{ 13}, (char*)"Syntax error\0"};
nctemp1072=&nctemp1073;
nctempchar1* nctemp1070= nctemp1072;
int nctemp1074=ParseError(nctemp1070);
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
int nctemp1076 = (lookahead ==45);
if(nctemp1076)
{
struct nctempchar1 *nctemp1086;
static struct nctempchar1 nctemp1087 = {{ 7}, (char*)"unexpr\0"};
nctemp1086=&nctemp1087;
nctempchar1* nctemp1084= nctemp1086;
nctempchar1* nctemp1090=ScanGetext();
nctempchar1* nctemp1088= nctemp1090;
struct tree* nctemp1091=ParseMknode(nctemp1084,nctemp1088);
sp =nctemp1091;
int nctemp1093= lookahead;
int nctemp1095=ParseMatch(nctemp1093);
struct tree* nctemp1100= p;
struct tree* nctemp1102=ParseUnexpr(nctemp1100);
np =nctemp1102;
struct tree* nctemp1104= sp;
struct tree* nctemp1106= np;
int nctemp1108=PtreeAddchild(nctemp1104,nctemp1106);
}
else{
struct tree* nctemp1113= p;
struct tree* nctemp1115=ParsePrimexpr(nctemp1113);
sp =nctemp1115;
}
return sp;
}
struct tree* ParseMultexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1120 = (lookahead ==42);
int nctemp1125 = (lookahead ==47);
int nctemp1117 = (nctemp1120 || nctemp1125);
if(nctemp1117)
{
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 8}, (char*)"binexpr\0"};
nctemp1135=&nctemp1136;
nctempchar1* nctemp1133= nctemp1135;
nctempchar1* nctemp1139=ScanGetext();
nctempchar1* nctemp1137= nctemp1139;
struct tree* nctemp1140=ParseMknode(nctemp1133,nctemp1137);
np =nctemp1140;
int nctemp1142= lookahead;
int nctemp1144=ParseMatch(nctemp1142);
struct tree* nctemp1146= np;
struct tree* nctemp1148= p;
int nctemp1150=PtreeAddchild(nctemp1146,nctemp1148);
struct tree* nctemp1155= np;
struct tree* nctemp1157=ParseUnexpr(nctemp1155);
rp =nctemp1157;
struct tree* nctemp1159= np;
struct tree* nctemp1161= rp;
int nctemp1163=PtreeAddchild(nctemp1159,nctemp1161);
struct tree* nctemp1168= np;
struct tree* nctemp1170=ParseMultexprseq(nctemp1168);
sp =nctemp1170;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseMultexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1180= p;
struct tree* nctemp1182=ParseUnexpr(nctemp1180);
np =nctemp1182;
struct tree* nctemp1187= np;
struct tree* nctemp1189=ParseMultexprseq(nctemp1187);
np =nctemp1189;
return np;
}
struct tree* ParseAddexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1194 = (lookahead ==43);
int nctemp1199 = (lookahead ==45);
int nctemp1191 = (nctemp1194 || nctemp1199);
if(nctemp1191)
{
struct nctempchar1 *nctemp1209;
static struct nctempchar1 nctemp1210 = {{ 8}, (char*)"binexpr\0"};
nctemp1209=&nctemp1210;
nctempchar1* nctemp1207= nctemp1209;
nctempchar1* nctemp1213=ScanGetext();
nctempchar1* nctemp1211= nctemp1213;
struct tree* nctemp1214=ParseMknode(nctemp1207,nctemp1211);
np =nctemp1214;
int nctemp1216= lookahead;
int nctemp1218=ParseMatch(nctemp1216);
struct tree* nctemp1220= np;
struct tree* nctemp1222= p;
int nctemp1224=PtreeAddchild(nctemp1220,nctemp1222);
struct tree* nctemp1229= np;
struct tree* nctemp1231=ParseMultexpr(nctemp1229);
rp =nctemp1231;
struct tree* nctemp1233= np;
struct tree* nctemp1235= rp;
int nctemp1237=PtreeAddchild(nctemp1233,nctemp1235);
struct tree* nctemp1242= np;
struct tree* nctemp1244=ParseAddexprseq(nctemp1242);
sp =nctemp1244;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseAddexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1254= p;
struct tree* nctemp1256=ParseMultexpr(nctemp1254);
np =nctemp1256;
struct tree* nctemp1261= np;
struct tree* nctemp1263=ParseAddexprseq(nctemp1261);
np =nctemp1263;
return np;
}
struct tree* ParseRelexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1286 = (lookahead ==60);
int nctemp1291 = (lookahead ==62);
int nctemp1283 = (nctemp1286 || nctemp1291);
int nctemp1296 = (lookahead ==21);
int nctemp1280 = (nctemp1283 || nctemp1296);
int nctemp1301 = (lookahead ==3);
int nctemp1277 = (nctemp1280 || nctemp1301);
int nctemp1306 = (lookahead ==4);
int nctemp1274 = (nctemp1277 || nctemp1306);
int nctemp1311 = (lookahead ==5);
int nctemp1271 = (nctemp1274 || nctemp1311);
int nctemp1316 = (lookahead ==6);
int nctemp1268 = (nctemp1271 || nctemp1316);
int nctemp1321 = (lookahead ==20);
int nctemp1265 = (nctemp1268 || nctemp1321);
if(nctemp1265)
{
struct nctempchar1 *nctemp1331;
static struct nctempchar1 nctemp1332 = {{ 8}, (char*)"binexpr\0"};
nctemp1331=&nctemp1332;
nctempchar1* nctemp1329= nctemp1331;
nctempchar1* nctemp1335=ScanGetext();
nctempchar1* nctemp1333= nctemp1335;
struct tree* nctemp1336=ParseMknode(nctemp1329,nctemp1333);
np =nctemp1336;
int nctemp1338= lookahead;
int nctemp1340=ParseMatch(nctemp1338);
struct tree* nctemp1342= np;
struct tree* nctemp1344= p;
int nctemp1346=PtreeAddchild(nctemp1342,nctemp1344);
struct tree* nctemp1351= np;
struct tree* nctemp1353=ParseAddexpr(nctemp1351);
rp =nctemp1353;
struct tree* nctemp1355= np;
struct tree* nctemp1357= rp;
int nctemp1359=PtreeAddchild(nctemp1355,nctemp1357);
struct tree* nctemp1364= np;
struct tree* nctemp1366=ParseRelexprseq(nctemp1364);
sp =nctemp1366;
}
else{
sp =p;
}
return sp;
}
struct tree* ParseRelexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1376= p;
struct tree* nctemp1378=ParseAddexpr(nctemp1376);
np =nctemp1378;
struct tree* nctemp1383= np;
struct tree* nctemp1385=ParseRelexprseq(nctemp1383);
np =nctemp1385;
return np;
}
struct tree* ParseAsgexprseq (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* sp;
int nctemp1387 = (lookahead ==61);
if(nctemp1387)
{
struct nctempchar1 *nctemp1397;
static struct nctempchar1 nctemp1398 = {{ 8}, (char*)"binexpr\0"};
nctemp1397=&nctemp1398;
nctempchar1* nctemp1395= nctemp1397;
nctempchar1* nctemp1401=ScanGetext();
nctempchar1* nctemp1399= nctemp1401;
struct tree* nctemp1402=ParseMknode(nctemp1395,nctemp1399);
np =nctemp1402;
int nctemp1404= lookahead;
int nctemp1406=ParseMatch(nctemp1404);
struct tree* nctemp1408= np;
struct tree* nctemp1410= p;
int nctemp1412=PtreeAddchild(nctemp1408,nctemp1410);
struct tree* nctemp1417= np;
struct tree* nctemp1419=ParseRelexpr(nctemp1417);
rp =nctemp1419;
struct tree* nctemp1424= rp;
struct tree* nctemp1426=ParseAsgexprseq(nctemp1424);
sp =nctemp1426;
struct tree* nctemp1428= np;
struct tree* nctemp1430= sp;
int nctemp1432=PtreeAddchild(nctemp1428,nctemp1430);
}
else{
np =p;
}
return np;
}
struct tree* ParseAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp1442= p;
struct tree* nctemp1444=ParseRelexpr(nctemp1442);
np =nctemp1444;
struct tree* nctemp1449= np;
struct tree* nctemp1451=ParseAsgexprseq(nctemp1449);
np =nctemp1451;
return np;
}
struct tree* ParseExpr ()
{
struct tree* np;
struct tree* sp;
struct tree* rp;
rp =0;
struct tree* nctemp1461= rp;
struct tree* nctemp1463=ParseAsgexpr(nctemp1461);
np =nctemp1463;
int nctemp1464 = (np !=0);
if(nctemp1464)
{
struct nctempchar1 *nctemp1474;
static struct nctempchar1 nctemp1475 = {{ 5}, (char*)"expr\0"};
nctemp1474=&nctemp1475;
nctempchar1* nctemp1472= nctemp1474;
struct nctempchar1 *nctemp1478;
static struct nctempchar1 nctemp1479 = {{ 5}, (char*)"void\0"};
nctemp1478=&nctemp1479;
nctempchar1* nctemp1476= nctemp1478;
struct tree* nctemp1480=ParseMknode(nctemp1472,nctemp1476);
sp =nctemp1480;
struct tree* nctemp1482= sp;
struct tree* nctemp1484= np;
int nctemp1486=PtreeAddchild(nctemp1482,nctemp1484);
np =sp;
}
return np;
}
struct tree* ParseDeclaration ()
{
struct tree* mp;
struct tree* np;
struct tree* nctemp1496=ParseType();
np =nctemp1496;
int nctemp1497 = (np !=0);
if(nctemp1497)
{
int nctemp1501 = (lookahead ==1);
if(nctemp1501)
{
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 11}, (char*)"identifier\0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
nctempchar1* nctemp1515=ScanGetext();
nctempchar1* nctemp1513= nctemp1515;
struct tree* nctemp1516=ParseMknode(nctemp1509,nctemp1513);
mp =nctemp1516;
struct tree* nctemp1518= np;
struct tree* nctemp1520= mp;
int nctemp1522=PtreeAddchild(nctemp1518,nctemp1520);
int nctemp1524= lookahead;
int nctemp1526=ParseMatch(nctemp1524);
int nctemp1527 = (lookahead ==44);
if(nctemp1527)
{
struct tree* nctemp1532= np;
int nctemp1534=ParseIdseq(nctemp1532);
int nctemp1536= 59;
int nctemp1538=ParseMatch(nctemp1536);
}
else{
int nctemp1539 = (lookahead ==61);
if(nctemp1539)
{
int nctemp1544= lookahead;
int nctemp1546=ParseMatch(nctemp1544);
struct tree* nctemp1548= mp;
int nctemp1550=ParseConstdecl(nctemp1548);
}
else{
int nctemp1552= 59;
int nctemp1554=ParseMatch(nctemp1552);
}
}
}
else{
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 13}, (char*)"Syntax error\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
int nctemp1560=ParseError(nctemp1556);
}
}
else{
np =0;
}
return np;
}
struct tree* ParseDeclarations ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp1570=ParseDeclaration();
np =nctemp1570;
int nctemp1571 = (np !=0);
if(nctemp1571)
{
struct nctempchar1 *nctemp1581;
static struct nctempchar1 nctemp1582 = {{ 13}, (char*)"declarations\0"};
nctemp1581=&nctemp1582;
nctempchar1* nctemp1579= nctemp1581;
struct nctempchar1 *nctemp1585;
static struct nctempchar1 nctemp1586 = {{ 5}, (char*)"void\0"};
nctemp1585=&nctemp1586;
nctempchar1* nctemp1583= nctemp1585;
struct tree* nctemp1587=ParseMknode(nctemp1579,nctemp1583);
sp =nctemp1587;
struct tree* nctemp1589= sp;
struct tree* nctemp1591= np;
int nctemp1593=PtreeAddchild(nctemp1589,nctemp1591);
}
else{
np =0;
return np;
}
struct tree* nctemp1605=ParseDeclaration();
np =nctemp1605;
int nctemp1598 = (np !=0);
int nctemp1607=nctemp1598;
while(nctemp1607)
{{
struct tree* nctemp1609= sp;
struct tree* nctemp1611= np;
int nctemp1613=PtreeAddchild(nctemp1609,nctemp1611);
}
struct tree* nctemp1621=ParseDeclaration();
np =nctemp1621;
int nctemp1614 = (np !=0);
nctemp1607=nctemp1614;}return sp;
}
int ParseArgseq (struct tree* p)
{
struct tree* np;
struct tree* sp;
int nctemp1624 = (lookahead ==44);
if(nctemp1624)
{
int nctemp1629= lookahead;
int nctemp1631=ParseMatch(nctemp1629);
struct tree* nctemp1639=ParseType();
np =nctemp1639;
int nctemp1632 = (np !=0);
if(nctemp1632)
{
struct tree* nctemp1642= p;
struct tree* nctemp1644= np;
int nctemp1646=PtreeAddchild(nctemp1642,nctemp1644);
int nctemp1647 = (lookahead ==1);
if(nctemp1647)
{
struct nctempchar1 *nctemp1657;
static struct nctempchar1 nctemp1658 = {{ 11}, (char*)"identifier\0"};
nctemp1657=&nctemp1658;
nctempchar1* nctemp1655= nctemp1657;
nctempchar1* nctemp1661=ScanGetext();
nctempchar1* nctemp1659= nctemp1661;
struct tree* nctemp1662=ParseMknode(nctemp1655,nctemp1659);
sp =nctemp1662;
struct tree* nctemp1664= np;
struct tree* nctemp1666= sp;
int nctemp1668=PtreeAddchild(nctemp1664,nctemp1666);
int nctemp1670= 1;
int nctemp1672=ParseMatch(nctemp1670);
}
struct tree* nctemp1674= p;
int nctemp1676=ParseArgseq(nctemp1674);
}
}
return 1;
}
struct tree* ParseArglist ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* nctemp1685=ParseType();
np =nctemp1685;
int nctemp1678 = (np !=0);
if(nctemp1678)
{
struct nctempchar1 *nctemp1693;
static struct nctempchar1 nctemp1694 = {{ 8}, (char*)"arglist\0"};
nctemp1693=&nctemp1694;
nctempchar1* nctemp1691= nctemp1693;
struct nctempchar1 *nctemp1697;
static struct nctempchar1 nctemp1698 = {{ 5}, (char*)"void\0"};
nctemp1697=&nctemp1698;
nctempchar1* nctemp1695= nctemp1697;
struct tree* nctemp1699=ParseMknode(nctemp1691,nctemp1695);
sp =nctemp1699;
struct tree* nctemp1701= sp;
struct tree* nctemp1703= np;
int nctemp1705=PtreeAddchild(nctemp1701,nctemp1703);
int nctemp1706 = (lookahead ==1);
if(nctemp1706)
{
struct nctempchar1 *nctemp1716;
static struct nctempchar1 nctemp1717 = {{ 11}, (char*)"identifier\0"};
nctemp1716=&nctemp1717;
nctempchar1* nctemp1714= nctemp1716;
nctempchar1* nctemp1720=ScanGetext();
nctempchar1* nctemp1718= nctemp1720;
struct tree* nctemp1721=ParseMknode(nctemp1714,nctemp1718);
mp =nctemp1721;
struct tree* nctemp1723= np;
struct tree* nctemp1725= mp;
int nctemp1727=PtreeAddchild(nctemp1723,nctemp1725);
int nctemp1729= 1;
int nctemp1731=ParseMatch(nctemp1729);
}
struct tree* nctemp1733= sp;
int nctemp1735=ParseArgseq(nctemp1733);
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
struct nctempchar1 *nctemp1747;
static struct nctempchar1 nctemp1748 = {{ 10}, (char*)"structdec\0"};
nctemp1747=&nctemp1748;
nctempchar1* nctemp1745= nctemp1747;
struct nctempchar1 *nctemp1751;
static struct nctempchar1 nctemp1752 = {{ 5}, (char*)"void\0"};
nctemp1751=&nctemp1752;
nctempchar1* nctemp1749= nctemp1751;
struct tree* nctemp1753=ParseMknode(nctemp1745,nctemp1749);
np =nctemp1753;
struct tree* nctemp1755= p;
struct tree* nctemp1757= np;
int nctemp1759=PtreeAddchild(nctemp1755,nctemp1757);
struct tree* nctemp1764=ParseDeclarations();
sp =nctemp1764;
struct tree* nctemp1766= np;
struct tree* nctemp1768= sp;
int nctemp1770=PtreeAddchild(nctemp1766,nctemp1768);
int nctemp1772= 531;
int nctemp1774=ParseMatch(nctemp1772);
return 1;
}
struct tree* ParseWhilestmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp1776 = (lookahead ==12);
if(nctemp1776)
{
struct nctempchar1 *nctemp1786;
static struct nctempchar1 nctemp1787 = {{ 6}, (char*)"while\0"};
nctemp1786=&nctemp1787;
nctempchar1* nctemp1784= nctemp1786;
struct nctempchar1 *nctemp1790;
static struct nctempchar1 nctemp1791 = {{ 5}, (char*)"void\0"};
nctemp1790=&nctemp1791;
nctempchar1* nctemp1788= nctemp1790;
struct tree* nctemp1792=ParseMknode(nctemp1784,nctemp1788);
np =nctemp1792;
int nctemp1794= 12;
int nctemp1796=ParseMatch(nctemp1794);
int nctemp1798= 40;
int nctemp1800=ParseMatch(nctemp1798);
struct tree* nctemp1808=ParseExpr();
sp =nctemp1808;
int nctemp1801 = (sp !=0);
if(nctemp1801)
{
struct tree* nctemp1811= np;
struct tree* nctemp1813= sp;
int nctemp1815=PtreeAddchild(nctemp1811,nctemp1813);
}
int nctemp1817= 41;
int nctemp1819=ParseMatch(nctemp1817);
struct tree* nctemp1824=ParseStmnt();
sp =nctemp1824;
struct tree* nctemp1826= np;
struct tree* nctemp1828= sp;
int nctemp1830=PtreeAddchild(nctemp1826,nctemp1828);
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
int nctemp1840 = (lookahead ==30);
if(nctemp1840)
{
struct nctempchar1 *nctemp1850;
static struct nctempchar1 nctemp1851 = {{ 7}, (char*)"return\0"};
nctemp1850=&nctemp1851;
nctempchar1* nctemp1848= nctemp1850;
struct nctempchar1 *nctemp1854;
static struct nctempchar1 nctemp1855 = {{ 5}, (char*)"void\0"};
nctemp1854=&nctemp1855;
nctempchar1* nctemp1852= nctemp1854;
struct tree* nctemp1856=ParseMknode(nctemp1848,nctemp1852);
np =nctemp1856;
int nctemp1858= 30;
int nctemp1860=ParseMatch(nctemp1858);
struct tree* nctemp1868=ParseExpr();
sp =nctemp1868;
int nctemp1861 = (sp !=0);
if(nctemp1861)
{
struct tree* nctemp1871= np;
struct tree* nctemp1873= sp;
int nctemp1875=PtreeAddchild(nctemp1871,nctemp1873);
}
sp =np;
int nctemp1881= 59;
int nctemp1883=ParseMatch(nctemp1881);
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
int nctemp1889 = (lookahead ==26);
if(nctemp1889)
{
struct nctempchar1 *nctemp1899;
static struct nctempchar1 nctemp1900 = {{ 4}, (char*)"for\0"};
nctemp1899=&nctemp1900;
nctempchar1* nctemp1897= nctemp1899;
struct nctempchar1 *nctemp1903;
static struct nctempchar1 nctemp1904 = {{ 5}, (char*)"void\0"};
nctemp1903=&nctemp1904;
nctempchar1* nctemp1901= nctemp1903;
struct tree* nctemp1905=ParseMknode(nctemp1897,nctemp1901);
np =nctemp1905;
int nctemp1907= 26;
int nctemp1909=ParseMatch(nctemp1907);
int nctemp1911= 40;
int nctemp1913=ParseMatch(nctemp1911);
struct tree* nctemp1921=ParseExpr();
sp =nctemp1921;
int nctemp1914 = (sp !=0);
if(nctemp1914)
{
struct tree* nctemp1924= np;
struct tree* nctemp1926= sp;
int nctemp1928=PtreeAddchild(nctemp1924,nctemp1926);
}
int nctemp1930= 59;
int nctemp1932=ParseMatch(nctemp1930);
struct tree* nctemp1940=ParseExpr();
rp =nctemp1940;
int nctemp1933 = (rp !=0);
if(nctemp1933)
{
struct tree* nctemp1943= sp;
struct tree* nctemp1945= rp;
int nctemp1947=PtreeAddsister(nctemp1943,nctemp1945);
}
int nctemp1949= 59;
int nctemp1951=ParseMatch(nctemp1949);
struct tree* nctemp1959=ParseExpr();
rp =nctemp1959;
int nctemp1952 = (rp !=0);
if(nctemp1952)
{
struct tree* nctemp1962= sp;
struct tree* nctemp1964= rp;
int nctemp1966=PtreeAddsister(nctemp1962,nctemp1964);
}
int nctemp1968= 41;
int nctemp1970=ParseMatch(nctemp1968);
struct tree* nctemp1975=ParseStmnt();
sp =nctemp1975;
struct tree* nctemp1977= np;
struct tree* nctemp1979= sp;
int nctemp1981=PtreeAddchild(nctemp1977,nctemp1979);
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
struct tree* nctemp1998=ParseExpr();
sp =nctemp1998;
int nctemp1991 = (sp !=0);
if(nctemp1991)
{
struct nctempchar1 *nctemp2006;
static struct nctempchar1 nctemp2007 = {{ 6}, (char*)"slice\0"};
nctemp2006=&nctemp2007;
nctempchar1* nctemp2004= nctemp2006;
struct nctempchar1 *nctemp2010;
static struct nctempchar1 nctemp2011 = {{ 5}, (char*)"void\0"};
nctemp2010=&nctemp2011;
nctempchar1* nctemp2008= nctemp2010;
struct tree* nctemp2012=ParseMknode(nctemp2004,nctemp2008);
np =nctemp2012;
struct tree* nctemp2014= np;
struct tree* nctemp2016= sp;
int nctemp2018=PtreeAddchild(nctemp2014,nctemp2016);
int nctemp2020= 58;
int nctemp2022=ParseMatch(nctemp2020);
struct tree* nctemp2030=ParseExpr();
rp =nctemp2030;
int nctemp2023 = (rp !=0);
if(nctemp2023)
{
struct tree* nctemp2033= np;
struct tree* nctemp2035= rp;
int nctemp2037=PtreeAddchild(nctemp2033,nctemp2035);
}
int nctemp2038 = (lookahead ==58);
if(nctemp2038)
{
int nctemp2043= 58;
int nctemp2045=ParseMatch(nctemp2043);
struct tree* nctemp2053=ParseExpr();
rp =nctemp2053;
int nctemp2046 = (rp !=0);
if(nctemp2046)
{
struct tree* nctemp2056= np;
struct tree* nctemp2058= rp;
int nctemp2060=PtreeAddchild(nctemp2056,nctemp2058);
}
else{
struct nctempchar1 *nctemp2064;
static struct nctempchar1 nctemp2065 = {{ 13}, (char*)"Syntax error\0"};
nctemp2064=&nctemp2065;
nctempchar1* nctemp2062= nctemp2064;
int nctemp2066=ParseError(nctemp2062);
}
}
}
else{
struct nctempchar1 *nctemp2070;
static struct nctempchar1 nctemp2071 = {{ 13}, (char*)"Syntax error\0"};
nctemp2070=&nctemp2071;
nctempchar1* nctemp2068= nctemp2070;
int nctemp2072=ParseError(nctemp2068);
}
return np;
}
struct tree* ParseSliceseq (struct tree* np)
{
struct tree* sp;
struct tree* nctemp2081=ParseSlice();
sp =nctemp2081;
int nctemp2074 = (sp !=0);
if(nctemp2074)
{
struct tree* nctemp2084= np;
struct tree* nctemp2086= sp;
int nctemp2088=PtreeAddchild(nctemp2084,nctemp2086);
}
else{
struct nctempchar1 *nctemp2092;
static struct nctempchar1 nctemp2093 = {{ 13}, (char*)"Syntax error\0"};
nctemp2092=&nctemp2093;
nctempchar1* nctemp2090= nctemp2092;
int nctemp2094=ParseError(nctemp2090);
}
int nctemp2095 = (lookahead ==44);
if(nctemp2095)
{
int nctemp2100= 44;
int nctemp2102=ParseMatch(nctemp2100);
struct tree* nctemp2104= np;
struct tree* nctemp2106=ParseSliceseq(nctemp2104);
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
int nctemp2109 = (lookahead ==31);
if(nctemp2109)
{
struct nctempchar1 *nctemp2119;
static struct nctempchar1 nctemp2120 = {{ 9}, (char*)"parallel\0"};
nctemp2119=&nctemp2120;
nctempchar1* nctemp2117= nctemp2119;
struct nctempchar1 *nctemp2123;
static struct nctempchar1 nctemp2124 = {{ 5}, (char*)"void\0"};
nctemp2123=&nctemp2124;
nctempchar1* nctemp2121= nctemp2123;
struct tree* nctemp2125=ParseMknode(nctemp2117,nctemp2121);
np =nctemp2125;
int nctemp2127= 31;
int nctemp2129=ParseMatch(nctemp2127);
int nctemp2131= 40;
int nctemp2133=ParseMatch(nctemp2131);
struct nctempchar1 *nctemp2140;
static struct nctempchar1 nctemp2141 = {{ 9}, (char*)"sliceseq\0"};
nctemp2140=&nctemp2141;
nctempchar1* nctemp2138= nctemp2140;
struct nctempchar1 *nctemp2144;
static struct nctempchar1 nctemp2145 = {{ 5}, (char*)"void\0"};
nctemp2144=&nctemp2145;
nctempchar1* nctemp2142= nctemp2144;
struct tree* nctemp2146=ParseMknode(nctemp2138,nctemp2142);
rp =nctemp2146;
struct tree* nctemp2148= np;
struct tree* nctemp2150= rp;
int nctemp2152=PtreeAddchild(nctemp2148,nctemp2150);
struct tree* nctemp2160= rp;
struct tree* nctemp2162=ParseSliceseq(nctemp2160);
sp =nctemp2162;
int nctemp2153 = (sp ==0);
if(nctemp2153)
{
struct nctempchar1 *nctemp2167;
static struct nctempchar1 nctemp2168 = {{ 13}, (char*)"Syntax error\0"};
nctemp2167=&nctemp2168;
nctempchar1* nctemp2165= nctemp2167;
int nctemp2169=ParseError(nctemp2165);
}
int nctemp2170 = (lookahead ==41);
if(nctemp2170)
{
int nctemp2175= 41;
int nctemp2177=ParseMatch(nctemp2175);
struct tree* nctemp2182=ParseStmnt();
sp =nctemp2182;
struct tree* nctemp2184= np;
struct tree* nctemp2186= sp;
int nctemp2188=PtreeAddchild(nctemp2184,nctemp2186);
return np;
}
else{
struct nctempchar1 *nctemp2193;
static struct nctempchar1 nctemp2194 = {{ 13}, (char*)"Syntax error\0"};
nctemp2193=&nctemp2194;
nctempchar1* nctemp2191= nctemp2193;
int nctemp2195=ParseError(nctemp2191);
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
int nctemp2204 = (lookahead ==15);
if(nctemp2204)
{
int nctemp2209= 15;
int nctemp2211=ParseMatch(nctemp2209);
struct nctempchar1 *nctemp2218;
static struct nctempchar1 nctemp2219 = {{ 5}, (char*)"else\0"};
nctemp2218=&nctemp2219;
nctempchar1* nctemp2216= nctemp2218;
struct nctempchar1 *nctemp2222;
static struct nctempchar1 nctemp2223 = {{ 5}, (char*)"void\0"};
nctemp2222=&nctemp2223;
nctempchar1* nctemp2220= nctemp2222;
struct tree* nctemp2224=ParseMknode(nctemp2216,nctemp2220);
np =nctemp2224;
struct tree* nctemp2229=ParseStmnt();
sp =nctemp2229;
struct tree* nctemp2231= np;
struct tree* nctemp2233= sp;
int nctemp2235=PtreeAddchild(nctemp2231,nctemp2233);
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
int nctemp2241 = (lookahead ==14);
if(nctemp2241)
{
struct nctempchar1 *nctemp2251;
static struct nctempchar1 nctemp2252 = {{ 3}, (char*)"if\0"};
nctemp2251=&nctemp2252;
nctempchar1* nctemp2249= nctemp2251;
struct nctempchar1 *nctemp2255;
static struct nctempchar1 nctemp2256 = {{ 5}, (char*)"void\0"};
nctemp2255=&nctemp2256;
nctempchar1* nctemp2253= nctemp2255;
struct tree* nctemp2257=ParseMknode(nctemp2249,nctemp2253);
np =nctemp2257;
int nctemp2259= 14;
int nctemp2261=ParseMatch(nctemp2259);
int nctemp2263= 40;
int nctemp2265=ParseMatch(nctemp2263);
struct tree* nctemp2273=ParseExpr();
sp =nctemp2273;
int nctemp2266 = (sp !=0);
if(nctemp2266)
{
struct tree* nctemp2276= np;
struct tree* nctemp2278= sp;
int nctemp2280=PtreeAddchild(nctemp2276,nctemp2278);
}
int nctemp2282= 41;
int nctemp2284=ParseMatch(nctemp2282);
struct tree* nctemp2289=ParseStmnt();
sp =nctemp2289;
struct tree* nctemp2291= np;
struct tree* nctemp2293= sp;
int nctemp2295=PtreeAddchild(nctemp2291,nctemp2293);
struct tree* nctemp2303=ParseElsestmnt();
sp =nctemp2303;
int nctemp2296 = (sp !=0);
if(nctemp2296)
{
struct tree* nctemp2306= np;
struct tree* nctemp2308= sp;
int nctemp2310=PtreeAddchild(nctemp2306,nctemp2308);
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
struct tree* nctemp2327=ParseWhilestmnt();
np =nctemp2327;
int nctemp2320 = (np !=0);
if(nctemp2320)
{
return np;
}
else{
struct tree* nctemp2337=ParseReturnstmnt();
np =nctemp2337;
int nctemp2330 = (np !=0);
if(nctemp2330)
{
return np;
}
else{
struct tree* nctemp2347=ParseForstmnt();
np =nctemp2347;
int nctemp2340 = (np !=0);
if(nctemp2340)
{
return np;
}
else{
struct tree* nctemp2357=ParseForstmnt();
np =nctemp2357;
int nctemp2350 = (np !=0);
if(nctemp2350)
{
return np;
}
else{
struct tree* nctemp2367=ParseParallelstmnt();
np =nctemp2367;
int nctemp2360 = (np !=0);
if(nctemp2360)
{
return np;
}
else{
struct tree* nctemp2377=ParseIfstmnt();
np =nctemp2377;
int nctemp2370 = (np !=0);
if(nctemp2370)
{
return np;
}
else{
struct tree* nctemp2387=ParseCompstmnt();
np =nctemp2387;
int nctemp2380 = (np !=0);
if(nctemp2380)
{
return np;
}
else{
int nctemp2390 = (lookahead ==59);
if(nctemp2390)
{
int nctemp2395= lookahead;
int nctemp2397=ParseMatch(nctemp2395);
struct nctempchar1 *nctemp2401;
static struct nctempchar1 nctemp2402 = {{ 5}, (char*)"void\0"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
struct nctempchar1 *nctemp2405;
static struct nctempchar1 nctemp2406 = {{ 5}, (char*)"void\0"};
nctemp2405=&nctemp2406;
nctempchar1* nctemp2403= nctemp2405;
struct tree* nctemp2407=ParseMknode(nctemp2399,nctemp2403);
return nctemp2407;
}
else{
int nctemp2408 = (lookahead ==531);
if(nctemp2408)
{
np =0;
return np;
}
else{
struct tree* nctemp2420=ParseExpr();
np =nctemp2420;
int nctemp2422= 59;
int nctemp2424=ParseMatch(nctemp2422);
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
struct tree* ParseStmntlist ()
{
struct tree* np;
struct tree* sp;
struct tree* nctemp2430=ParseStmnt();
np =nctemp2430;
sp =np;
int nctemp2435 = (sp !=0);
int nctemp2439=nctemp2435;
while(nctemp2439)
{{
struct tree* nctemp2444=ParseStmnt();
sp =nctemp2444;
struct tree* nctemp2446= np;
struct tree* nctemp2448= sp;
int nctemp2450=PtreeAddsister(nctemp2446,nctemp2448);
}
int nctemp2451 = (sp !=0);
nctemp2439=nctemp2451;}return np;
}
struct tree* ParseCompstmnt ()
{
struct tree* np;
struct tree* sp;
int nctemp2456 = (lookahead ==58);
if(nctemp2456)
{
struct nctempchar1 *nctemp2466;
static struct nctempchar1 nctemp2467 = {{ 10}, (char*)"compstmnt\0"};
nctemp2466=&nctemp2467;
nctempchar1* nctemp2464= nctemp2466;
struct nctempchar1 *nctemp2470;
static struct nctempchar1 nctemp2471 = {{ 5}, (char*)"void\0"};
nctemp2470=&nctemp2471;
nctempchar1* nctemp2468= nctemp2470;
struct tree* nctemp2472=ParseMknode(nctemp2464,nctemp2468);
np =nctemp2472;
int nctemp2474= 58;
int nctemp2476=ParseMatch(nctemp2474);
struct tree* nctemp2481=ParseDeclarations();
sp =nctemp2481;
int nctemp2482 = (sp !=0);
if(nctemp2482)
{
struct tree* nctemp2487= np;
struct tree* nctemp2489= sp;
int nctemp2491=PtreeAddchild(nctemp2487,nctemp2489);
}
struct tree* nctemp2496=ParseStmntlist();
sp =nctemp2496;
int nctemp2497 = (sp !=0);
if(nctemp2497)
{
struct tree* nctemp2502= np;
struct tree* nctemp2504= sp;
int nctemp2506=PtreeAddchild(nctemp2502,nctemp2504);
}
int nctemp2508= 531;
int nctemp2510=ParseMatch(nctemp2508);
}
else{
np =0;
}
return np;
}
int ParseFdef (struct tree* p)
{
struct tree* np;
struct tree* nctemp2517= p;
struct nctempchar1 *nctemp2521;
static struct nctempchar1 nctemp2522 = {{ 5}, (char*)"fdef\0"};
nctemp2521=&nctemp2522;
nctempchar1* nctemp2519= nctemp2521;
int nctemp2523=PtreeSetname(nctemp2517,nctemp2519);
struct tree* nctemp2528=ParseArglist();
np =nctemp2528;
int nctemp2529 = (np !=0);
if(nctemp2529)
{
struct tree* nctemp2534= p;
struct tree* nctemp2536= np;
int nctemp2538=PtreeAddchild(nctemp2534,nctemp2536);
}
int nctemp2540= 41;
int nctemp2542=ParseMatch(nctemp2540);
np =0;
struct tree* nctemp2551=ParseCompstmnt();
np =nctemp2551;
int nctemp2552 = (np !=0);
if(nctemp2552)
{
struct tree* nctemp2557= p;
struct tree* nctemp2559= np;
int nctemp2561=PtreeAddchild(nctemp2557,nctemp2559);
}
else{
struct nctempchar1 *nctemp2565;
static struct nctempchar1 nctemp2566 = {{ 22}, (char*)"Missing function body\0"};
nctemp2565=&nctemp2566;
nctempchar1* nctemp2563= nctemp2565;
int nctemp2567=ParseError(nctemp2563);
}
return 1;
}
struct tree* ParseExtdecl ()
{
struct tree* mp;
struct tree* np;
struct tree* sp;
struct tree* imp;
struct tree* nctemp2573=ParseType();
np =nctemp2573;
int nctemp2574 = (np ==0);
if(nctemp2574)
{
int nctemp2578 = (lookahead ==433);
if(nctemp2578)
{
int nctemp2583= lookahead;
int nctemp2585=ParseMatch(nctemp2583);
int nctemp2586 = (lookahead ==1);
if(nctemp2586)
{
struct nctempchar1 *nctemp2596;
static struct nctempchar1 nctemp2597 = {{ 7}, (char*)"import\0"};
nctemp2596=&nctemp2597;
nctempchar1* nctemp2594= nctemp2596;
nctempchar1* nctemp2600=ScanGetext();
nctempchar1* nctemp2598= nctemp2600;
struct tree* nctemp2601=ParseMknode(nctemp2594,nctemp2598);
imp =nctemp2601;
int nctemp2603= 1;
int nctemp2605=ParseMatch(nctemp2603);
struct nctempchar1 *nctemp2612;
static struct nctempchar1 nctemp2613 = {{ 8}, (char*)"extdecl\0"};
nctemp2612=&nctemp2613;
nctempchar1* nctemp2610= nctemp2612;
struct nctempchar1 *nctemp2616;
static struct nctempchar1 nctemp2617 = {{ 5}, (char*)"void\0"};
nctemp2616=&nctemp2617;
nctempchar1* nctemp2614= nctemp2616;
struct tree* nctemp2618=ParseMknode(nctemp2610,nctemp2614);
sp =nctemp2618;
struct tree* nctemp2620= sp;
struct tree* nctemp2622= imp;
int nctemp2624=PtreeAddchild(nctemp2620,nctemp2622);
}
}
return sp;
}
int nctemp2626 = (lookahead ==58);
if(nctemp2626)
{
struct nctempchar1 *nctemp2636;
static struct nctempchar1 nctemp2637 = {{ 8}, (char*)"extdecl\0"};
nctemp2636=&nctemp2637;
nctempchar1* nctemp2634= nctemp2636;
struct nctempchar1 *nctemp2640;
static struct nctempchar1 nctemp2641 = {{ 5}, (char*)"void\0"};
nctemp2640=&nctemp2641;
nctempchar1* nctemp2638= nctemp2640;
struct tree* nctemp2642=ParseMknode(nctemp2634,nctemp2638);
sp =nctemp2642;
struct tree* nctemp2644= sp;
struct tree* nctemp2646= np;
int nctemp2648=PtreeAddchild(nctemp2644,nctemp2646);
int nctemp2650= lookahead;
int nctemp2652=ParseMatch(nctemp2650);
struct tree* nctemp2654= np;
int nctemp2656=ParseStructdeclar(nctemp2654);
return sp;
}
int nctemp2658 = (lookahead ==1);
if(nctemp2658)
{
struct nctempchar1 *nctemp2668;
static struct nctempchar1 nctemp2669 = {{ 8}, (char*)"extdecl\0"};
nctemp2668=&nctemp2669;
nctempchar1* nctemp2666= nctemp2668;
struct nctempchar1 *nctemp2672;
static struct nctempchar1 nctemp2673 = {{ 5}, (char*)"void\0"};
nctemp2672=&nctemp2673;
nctempchar1* nctemp2670= nctemp2672;
struct tree* nctemp2674=ParseMknode(nctemp2666,nctemp2670);
sp =nctemp2674;
struct tree* nctemp2676= sp;
struct tree* nctemp2678= np;
int nctemp2680=PtreeAddchild(nctemp2676,nctemp2678);
struct nctempchar1 *nctemp2687;
static struct nctempchar1 nctemp2688 = {{ 11}, (char*)"identifier\0"};
nctemp2687=&nctemp2688;
nctempchar1* nctemp2685= nctemp2687;
nctempchar1* nctemp2691=ScanGetext();
nctempchar1* nctemp2689= nctemp2691;
struct tree* nctemp2692=ParseMknode(nctemp2685,nctemp2689);
mp =nctemp2692;
struct tree* nctemp2694= np;
struct tree* nctemp2696= mp;
int nctemp2698=PtreeAddchild(nctemp2694,nctemp2696);
int nctemp2700= lookahead;
int nctemp2702=ParseMatch(nctemp2700);
int nctemp2703 = (lookahead ==44);
if(nctemp2703)
{
struct tree* nctemp2708= np;
int nctemp2710=ParseIdseq(nctemp2708);
int nctemp2712= 59;
int nctemp2714=ParseMatch(nctemp2712);
}
else{
int nctemp2715 = (lookahead ==40);
if(nctemp2715)
{
int nctemp2720= 40;
int nctemp2722=ParseMatch(nctemp2720);
struct tree* nctemp2724= mp;
int nctemp2726=ParseFdef(nctemp2724);
}
else{
int nctemp2727 = (lookahead ==61);
if(nctemp2727)
{
int nctemp2732= lookahead;
int nctemp2734=ParseMatch(nctemp2732);
struct tree* nctemp2736= mp;
int nctemp2738=ParseConstdecl(nctemp2736);
}
else{
int nctemp2740= 59;
int nctemp2742=ParseMatch(nctemp2740);
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
int nctemp2748 = (lookahead ==19);
if(nctemp2748)
{
return np;
}
else{
struct tree* nctemp2757=ParseExtdecl();
np =nctemp2757;
}
return np;
}
}
