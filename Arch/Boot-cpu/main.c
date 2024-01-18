/*  Translated by epsc  version today */
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
void *RunMalloc(int n); 
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
int LibeDelete ();
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
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
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
int LibeSystem (nctempchar1 *cmd);
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
int CodePreamblecpu ();
int CodePreamblecuda ();
int CodePreamblehip ();
int CodeStrings (struct symbol* tp);
int CodeCode (struct tree* p,struct symbol* tp);
int CodeTemp (struct tree* p);
int CodeArraycheck ();
int CodeArraycheckon ();
int CodeArraycheckoff ();
int CodeDebug ();
int CodeDebugon ();
int CodeDebugoff ();
int CodeSetfdout (int fd);
int CodeGetfdout ();
int CodeSetarch (int arch);
int CodeGetarch ();
int MainHelp ();
int MainHelp ()
{
int nctemp2= 4;
struct nctempchar1 *nctemp6;
static struct nctempchar1 nctemp7 = {{ 10}, (char*)"Command\n\0"};
nctemp6=&nctemp7;
nctempchar1* nctemp4= nctemp6;
int nctemp8=LibePuts(nctemp2,nctemp4);
int nctemp10= 4;
struct nctempchar1 *nctemp14;
static struct nctempchar1 nctemp15 = {{ 3}, (char*)"\n\0"};
nctemp14=&nctemp15;
nctempchar1* nctemp12= nctemp14;
int nctemp16=LibePuts(nctemp10,nctemp12);
int nctemp18= 4;
struct nctempchar1 *nctemp22;
static struct nctempchar1 nctemp23 = {{ 24}, (char*)"  ec [-t -a ] file.e \n\0"};
nctemp22=&nctemp23;
nctempchar1* nctemp20= nctemp22;
int nctemp24=LibePuts(nctemp18,nctemp20);
int nctemp26= 4;
struct nctempchar1 *nctemp30;
static struct nctempchar1 nctemp31 = {{ 3}, (char*)"\n\0"};
nctemp30=&nctemp31;
nctempchar1* nctemp28= nctemp30;
int nctemp32=LibePuts(nctemp26,nctemp28);
int nctemp34= 4;
struct nctempchar1 *nctemp38;
static struct nctempchar1 nctemp39 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp38=&nctemp39;
nctempchar1* nctemp36= nctemp38;
int nctemp40=LibePuts(nctemp34,nctemp36);
int nctemp42= 4;
struct nctempchar1 *nctemp46;
static struct nctempchar1 nctemp47 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp46=&nctemp47;
nctempchar1* nctemp44= nctemp46;
int nctemp48=LibePuts(nctemp42,nctemp44);
int nctemp50= 4;
struct nctempchar1 *nctemp54;
static struct nctempchar1 nctemp55 = {{ 3}, (char*)"\n\0"};
nctemp54=&nctemp55;
nctempchar1* nctemp52= nctemp54;
int nctemp56=LibePuts(nctemp50,nctemp52);
int nctemp58= 4;
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 14}, (char*)"  options: \n\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=LibePuts(nctemp58,nctemp60);
int nctemp66= 4;
struct nctempchar1 *nctemp70;
static struct nctempchar1 nctemp71 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp70=&nctemp71;
nctempchar1* nctemp68= nctemp70;
int nctemp72=LibePuts(nctemp66,nctemp68);
int nctemp74= 4;
struct nctempchar1 *nctemp78;
static struct nctempchar1 nctemp79 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp78=&nctemp79;
nctempchar1* nctemp76= nctemp78;
int nctemp80=LibePuts(nctemp74,nctemp76);
int nctemp82= 4;
struct nctempchar1 *nctemp86;
static struct nctempchar1 nctemp87 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp86=&nctemp87;
nctempchar1* nctemp84= nctemp86;
int nctemp88=LibePuts(nctemp82,nctemp84);
int nctemp90= 4;
struct nctempchar1 *nctemp94;
static struct nctempchar1 nctemp95 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp94=&nctemp95;
nctempchar1* nctemp92= nctemp94;
int nctemp96=LibePuts(nctemp90,nctemp92);
int nctemp98= 4;
struct nctempchar1 *nctemp102;
static struct nctempchar1 nctemp103 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp102=&nctemp103;
nctempchar1* nctemp100= nctemp102;
int nctemp104=LibePuts(nctemp98,nctemp100);
int nctemp106= 4;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
int nctemp114= 4;
struct nctempchar1 *nctemp118;
static struct nctempchar1 nctemp119 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
int nctemp120=LibePuts(nctemp114,nctemp116);
int nctemp122= 4;
struct nctempchar1 *nctemp126;
static struct nctempchar1 nctemp127 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp126=&nctemp127;
nctempchar1* nctemp124= nctemp126;
int nctemp128=LibePuts(nctemp122,nctemp124);
int nctemp130= 4;
struct nctempchar1 *nctemp134;
static struct nctempchar1 nctemp135 = {{ 47}, (char*)"   -c : Produce c-code but do not invoke gcc\n\0"};
nctemp134=&nctemp135;
nctempchar1* nctemp132= nctemp134;
int nctemp136=LibePuts(nctemp130,nctemp132);
int nctemp138= 4;
struct nctempchar1 *nctemp142;
static struct nctempchar1 nctemp143 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp142=&nctemp143;
nctempchar1* nctemp140= nctemp142;
int nctemp144=LibePuts(nctemp138,nctemp140);
int nctemp146= 4;
struct nctempchar1 *nctemp150;
static struct nctempchar1 nctemp151 = {{ 38}, (char*)"   -d : Show the gcc command line  \n\0"};
nctemp150=&nctemp151;
nctempchar1* nctemp148= nctemp150;
int nctemp152=LibePuts(nctemp146,nctemp148);
int nctemp154= 4;
struct nctempchar1 *nctemp158;
static struct nctempchar1 nctemp159 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp158=&nctemp159;
nctempchar1* nctemp156= nctemp158;
int nctemp160=LibePuts(nctemp154,nctemp156);
int nctemp162= 4;
struct nctempchar1 *nctemp166;
static struct nctempchar1 nctemp167 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp166=&nctemp167;
nctempchar1* nctemp164= nctemp166;
int nctemp168=LibePuts(nctemp162,nctemp164);
int nctemp170= 4;
int nctemp172=LibeFlush(nctemp170);
return 1;
}
nctempchar1* MainFout (nctempchar1 *file);
nctempchar1 * MainFout (nctempchar1 *infile)
{
int fd;
nctempchar1 *outfile;
int l;
int nctemp178=infile->d[0];l =nctemp178;
int nctemp182 = (l < 3);
if(nctemp182)
{
struct nctempchar1 *nctemp189;
static struct nctempchar1 nctemp190 = {{ 19}, (char*)" Illegal file name\0"};
nctemp189=&nctemp190;
nctempchar1* nctemp187= nctemp189;
int nctemp191=ErrPanic(nctemp187);
}
int nctemp200 = l - 2;
int nctemp195=nctemp200;
char nctemp202=(char)('e');
int nctemp192 = (infile->a[nctemp195] !=nctemp202);
if(nctemp192)
{
struct nctempchar1 *nctemp208;
static struct nctempchar1 nctemp209 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp208=&nctemp209;
nctempchar1* nctemp206= nctemp208;
int nctemp210=ErrPanic(nctemp206);
}
int nctemp217=l;
nctempchar1 *nctemp216;
nctemp216=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp216->d[0]=l;
nctemp216->a=(char *)malloc(sizeof(char)*nctemp217);
outfile=nctemp216;
nctempchar1* nctemp221= infile;
nctempchar1* nctemp224= outfile;
int nctemp227=LibeStrcpy(nctemp221,nctemp224);
int nctemp236 = l - 2;
int nctemp231=nctemp236;
char nctemp238=(char)('c');
outfile->a[nctemp231] =nctemp238;
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show);
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show);
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
int fd;
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp247=file->d[0];l =nctemp247;
struct nctempchar1 *nctemp256;
static struct nctempchar1 nctemp257 = {{ 8}, (char*)"gcc -c \0"};
nctemp256=&nctemp257;
tmp=nctemp256;
int nctemp271=tmp->d[0];int nctemp276 = nctemp271 + l;
int nctemp278 = nctemp276 + 2;
int nctemp264=nctemp278;
nctempchar1 *nctemp263;
nctemp263=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp285=tmp->d[0];int nctemp290 = nctemp285 + l;
int nctemp292 = nctemp290 + 2;
nctemp263->d[0]=nctemp292;
nctemp263->a=(char *)malloc(sizeof(char)*nctemp264);
cmd=nctemp263;
nctempchar1* nctemp294= tmp;
nctempchar1* nctemp297= cmd;
int nctemp300=LibeStrcpy(nctemp294,nctemp297);
int nctemp301 = (debug ==1);
if(nctemp301)
{
struct nctempchar1 *nctemp308;
static struct nctempchar1 nctemp309 = {{ 5}, (char*)" -g \0"};
nctemp308=&nctemp309;
nctempchar1* nctemp306= nctemp308;
nctempchar1* nctemp310= cmd;
int nctemp313=LibeStrcat(nctemp306,nctemp310);
}
int nctemp314 = (optimize ==1);
if(nctemp314)
{
struct nctempchar1 *nctemp321;
static struct nctempchar1 nctemp322 = {{ 5}, (char*)" -O \0"};
nctemp321=&nctemp322;
nctempchar1* nctemp319= nctemp321;
nctempchar1* nctemp323= cmd;
int nctemp326=LibeStrcat(nctemp319,nctemp323);
}
int nctemp327 = (openmp ==1);
if(nctemp327)
{
struct nctempchar1 *nctemp334;
static struct nctempchar1 nctemp335 = {{ 11}, (char*)" -fopenmp \0"};
nctemp334=&nctemp335;
nctempchar1* nctemp332= nctemp334;
nctempchar1* nctemp336= cmd;
int nctemp339=LibeStrcat(nctemp332,nctemp336);
}
nctempchar1* nctemp341= file;
nctempchar1* nctemp344= cmd;
int nctemp347=LibeStrcat(nctemp341,nctemp344);
struct nctempchar1 *nctemp351;
static struct nctempchar1 nctemp352 = {{ 3}, (char*)"\n\0"};
nctemp351=&nctemp352;
nctempchar1* nctemp349= nctemp351;
nctempchar1* nctemp353= cmd;
int nctemp356=LibeStrcat(nctemp349,nctemp353);
int nctemp357 = (show ==1);
if(nctemp357)
{
int nctemp362= 4;
nctempchar1* nctemp364= cmd;
int nctemp367=LibePuts(nctemp362,nctemp364);
int nctemp369= 4;
int nctemp371=LibeFlush(nctemp369);
}
nctempchar1* nctemp373= cmd;
int nctemp376=LibeSystem(nctemp373);
free(cmd->a);
free(cmd);
struct nctempchar1 *nctemp395;
static struct nctempchar1 nctemp396 = {{ 4}, (char*)"rm \0"};
nctemp395=&nctemp396;
int nctemp393=nctemp395->d[0];int nctemp399 = nctemp393 + l;
int nctemp401 = nctemp399 + 2;
int nctemp386=nctemp401;
nctempchar1 *nctemp385;
nctemp385=(nctempchar1*)malloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp410;
static struct nctempchar1 nctemp411 = {{ 4}, (char*)"rm \0"};
nctemp410=&nctemp411;
int nctemp408=nctemp410->d[0];int nctemp414 = nctemp408 + l;
int nctemp416 = nctemp414 + 2;
nctemp385->d[0]=nctemp416;
nctemp385->a=(char *)malloc(sizeof(char)*nctemp386);
cmd=nctemp385;
struct nctempchar1 *nctemp420;
static struct nctempchar1 nctemp421 = {{ 4}, (char*)"rm \0"};
nctemp420=&nctemp421;
nctempchar1* nctemp418= nctemp420;
nctempchar1* nctemp422= cmd;
int nctemp425=LibeStrcpy(nctemp418,nctemp422);
nctempchar1* nctemp427= file;
nctempchar1* nctemp430= cmd;
int nctemp433=LibeStrcat(nctemp427,nctemp430);
struct nctempchar1 *nctemp437;
static struct nctempchar1 nctemp438 = {{ 3}, (char*)"\n\0"};
nctemp437=&nctemp438;
nctempchar1* nctemp435= nctemp437;
nctempchar1* nctemp439= cmd;
int nctemp442=LibeStrcat(nctemp435,nctemp439);
int nctemp443 = (show ==1);
if(nctemp443)
{
int nctemp448= 4;
nctempchar1* nctemp450= cmd;
int nctemp453=LibePuts(nctemp448,nctemp450);
int nctemp455= 4;
int nctemp457=LibeFlush(nctemp455);
}
nctempchar1* nctemp459= cmd;
int nctemp462=LibeSystem(nctemp459);
free(cmd->a);
free(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
int fd;
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp471=file->d[0];l =nctemp471;
struct nctempchar1 *nctemp480;
static struct nctempchar1 nctemp481 = {{ 15}, (char*)"nvcc -c -x cu \0"};
nctemp480=&nctemp481;
tmp=nctemp480;
int nctemp495=tmp->d[0];int nctemp500 = nctemp495 + l;
int nctemp502 = nctemp500 + 2;
int nctemp488=nctemp502;
nctempchar1 *nctemp487;
nctemp487=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp509=tmp->d[0];int nctemp514 = nctemp509 + l;
int nctemp516 = nctemp514 + 2;
nctemp487->d[0]=nctemp516;
nctemp487->a=(char *)malloc(sizeof(char)*nctemp488);
cmd=nctemp487;
nctempchar1* nctemp518= tmp;
nctempchar1* nctemp521= cmd;
int nctemp524=LibeStrcpy(nctemp518,nctemp521);
int nctemp525 = (debug ==1);
if(nctemp525)
{
struct nctempchar1 *nctemp532;
static struct nctempchar1 nctemp533 = {{ 5}, (char*)" -g \0"};
nctemp532=&nctemp533;
nctempchar1* nctemp530= nctemp532;
nctempchar1* nctemp534= cmd;
int nctemp537=LibeStrcat(nctemp530,nctemp534);
}
int nctemp538 = (optimize ==1);
if(nctemp538)
{
struct nctempchar1 *nctemp545;
static struct nctempchar1 nctemp546 = {{ 5}, (char*)" -O \0"};
nctemp545=&nctemp546;
nctempchar1* nctemp543= nctemp545;
nctempchar1* nctemp547= cmd;
int nctemp550=LibeStrcat(nctemp543,nctemp547);
}
int nctemp551 = (openmp ==1);
if(nctemp551)
{
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 11}, (char*)" -fopenmp \0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
nctempchar1* nctemp560= cmd;
int nctemp563=LibeStrcat(nctemp556,nctemp560);
}
nctempchar1* nctemp565= file;
nctempchar1* nctemp568= cmd;
int nctemp571=LibeStrcat(nctemp565,nctemp568);
struct nctempchar1 *nctemp575;
static struct nctempchar1 nctemp576 = {{ 3}, (char*)"\n\0"};
nctemp575=&nctemp576;
nctempchar1* nctemp573= nctemp575;
nctempchar1* nctemp577= cmd;
int nctemp580=LibeStrcat(nctemp573,nctemp577);
int nctemp581 = (show ==1);
if(nctemp581)
{
int nctemp586= 4;
nctempchar1* nctemp588= cmd;
int nctemp591=LibePuts(nctemp586,nctemp588);
int nctemp593= 4;
int nctemp595=LibeFlush(nctemp593);
}
nctempchar1* nctemp597= cmd;
int nctemp600=LibeSystem(nctemp597);
free(cmd->a);
free(cmd);
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 4}, (char*)"rm \0"};
nctemp619=&nctemp620;
int nctemp617=nctemp619->d[0];int nctemp623 = nctemp617 + l;
int nctemp625 = nctemp623 + 2;
int nctemp610=nctemp625;
nctempchar1 *nctemp609;
nctemp609=(nctempchar1*)malloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp634;
static struct nctempchar1 nctemp635 = {{ 4}, (char*)"rm \0"};
nctemp634=&nctemp635;
int nctemp632=nctemp634->d[0];int nctemp638 = nctemp632 + l;
int nctemp640 = nctemp638 + 2;
nctemp609->d[0]=nctemp640;
nctemp609->a=(char *)malloc(sizeof(char)*nctemp610);
cmd=nctemp609;
struct nctempchar1 *nctemp644;
static struct nctempchar1 nctemp645 = {{ 4}, (char*)"rm \0"};
nctemp644=&nctemp645;
nctempchar1* nctemp642= nctemp644;
nctempchar1* nctemp646= cmd;
int nctemp649=LibeStrcpy(nctemp642,nctemp646);
nctempchar1* nctemp651= file;
nctempchar1* nctemp654= cmd;
int nctemp657=LibeStrcat(nctemp651,nctemp654);
struct nctempchar1 *nctemp661;
static struct nctempchar1 nctemp662 = {{ 3}, (char*)"\n\0"};
nctemp661=&nctemp662;
nctempchar1* nctemp659= nctemp661;
nctempchar1* nctemp663= cmd;
int nctemp666=LibeStrcat(nctemp659,nctemp663);
int nctemp667 = (show ==1);
if(nctemp667)
{
int nctemp672= 4;
nctempchar1* nctemp674= cmd;
int nctemp677=LibePuts(nctemp672,nctemp674);
int nctemp679= 4;
int nctemp681=LibeFlush(nctemp679);
}
nctempchar1* nctemp683= cmd;
int nctemp686=LibeSystem(nctemp683);
free(cmd->a);
free(cmd);
return 1;
}
int Main (struct nctempMainArg1 *MainArgs)
{
int btree;
int atree;
int table;
int etable;
int parse;
int semantic;
int emit;
int optimize;
int openmp;
int debug;
int show;
int obj;
int fd;
struct tree* p;
nctempchar1 *infile;
nctempchar1 *outfile;
int i;
int l;
int loop;
int nctemp692=LibeInit();
openmp =0;
optimize =openmp;
debug =optimize;
show =debug;
emit =0;
etable =emit;
table =etable;
atree =table;
btree =atree;
semantic =0;
parse =semantic;
obj =1;
int nctemp742=PtreeInit();
int nctemp744=CodeInit();
int nctemp746=CodeArraycheckoff();
int nctemp748=CodeDebugoff();
int nctemp750= 1;
int nctemp752=CodeSetarch(nctemp750);
int nctemp757=MainArgs->d[0];l =nctemp757;
int nctemp761 = (l <= 1);
if(nctemp761)
{
struct nctempchar1 *nctemp768;
static struct nctempchar1 nctemp769 = {{ 24}, (char*)"Missing input file name\0"};
nctemp768=&nctemp769;
nctempchar1* nctemp766= nctemp768;
int nctemp770=ErrPanic(nctemp766);
}
i =1;
loop =1;
int nctemp779 = (loop ==1);
int nctemp783=nctemp779;
while(nctemp783)
{{
int nctemp789=i;
nctempchar1* nctemp787= MainArgs->a[nctemp789].arg;
struct nctempchar1 *nctemp794;
static struct nctempchar1 nctemp795 = {{ 3}, (char*)"-h\0"};
nctemp794=&nctemp795;
nctempchar1* nctemp792= nctemp794;
int nctemp796=LibeStrcmp(nctemp787,nctemp792);
int nctemp784 = (nctemp796 ==1);
if(nctemp784)
{
int nctemp799=MainHelp();
int nctemp801=LibeExit();
}
int nctemp807=i;
nctempchar1* nctemp805= MainArgs->a[nctemp807].arg;
struct nctempchar1 *nctemp812;
static struct nctempchar1 nctemp813 = {{ 3}, (char*)"-t\0"};
nctemp812=&nctemp813;
nctempchar1* nctemp810= nctemp812;
int nctemp814=LibeStrcmp(nctemp805,nctemp810);
int nctemp802 = (nctemp814 ==1);
if(nctemp802)
{
btree =1;
parse =1;
}
int nctemp829=i;
nctempchar1* nctemp827= MainArgs->a[nctemp829].arg;
struct nctempchar1 *nctemp834;
static struct nctempchar1 nctemp835 = {{ 3}, (char*)"-a\0"};
nctemp834=&nctemp835;
nctempchar1* nctemp832= nctemp834;
int nctemp836=LibeStrcmp(nctemp827,nctemp832);
int nctemp824 = (nctemp836 ==1);
if(nctemp824)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp855=i;
nctempchar1* nctemp853= MainArgs->a[nctemp855].arg;
struct nctempchar1 *nctemp860;
static struct nctempchar1 nctemp861 = {{ 3}, (char*)"-s\0"};
nctemp860=&nctemp861;
nctempchar1* nctemp858= nctemp860;
int nctemp862=LibeStrcmp(nctemp853,nctemp858);
int nctemp850 = (nctemp862 ==1);
if(nctemp850)
{
table =1;
parse =1;
semantic =1;
}
int nctemp881=i;
nctempchar1* nctemp879= MainArgs->a[nctemp881].arg;
struct nctempchar1 *nctemp886;
static struct nctempchar1 nctemp887 = {{ 3}, (char*)"-r\0"};
nctemp886=&nctemp887;
nctempchar1* nctemp884= nctemp886;
int nctemp888=LibeStrcmp(nctemp879,nctemp884);
int nctemp876 = (nctemp888 ==1);
if(nctemp876)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp907=i;
nctempchar1* nctemp905= MainArgs->a[nctemp907].arg;
struct nctempchar1 *nctemp912;
static struct nctempchar1 nctemp913 = {{ 3}, (char*)"-e\0"};
nctemp912=&nctemp913;
nctempchar1* nctemp910= nctemp912;
int nctemp914=LibeStrcmp(nctemp905,nctemp910);
int nctemp902 = (nctemp914 ==1);
if(nctemp902)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp933=i;
nctempchar1* nctemp931= MainArgs->a[nctemp933].arg;
struct nctempchar1 *nctemp938;
static struct nctempchar1 nctemp939 = {{ 3}, (char*)"-p\0"};
nctemp938=&nctemp939;
nctempchar1* nctemp936= nctemp938;
int nctemp940=LibeStrcmp(nctemp931,nctemp936);
int nctemp928 = (nctemp940 ==1);
if(nctemp928)
{
parse =1;
}
int nctemp951=i;
nctempchar1* nctemp949= MainArgs->a[nctemp951].arg;
struct nctempchar1 *nctemp956;
static struct nctempchar1 nctemp957 = {{ 3}, (char*)"-q\0"};
nctemp956=&nctemp957;
nctempchar1* nctemp954= nctemp956;
int nctemp958=LibeStrcmp(nctemp949,nctemp954);
int nctemp946 = (nctemp958 ==1);
if(nctemp946)
{
semantic =1;
parse =1;
}
int nctemp973=i;
nctempchar1* nctemp971= MainArgs->a[nctemp973].arg;
struct nctempchar1 *nctemp978;
static struct nctempchar1 nctemp979 = {{ 3}, (char*)"-C\0"};
nctemp978=&nctemp979;
nctempchar1* nctemp976= nctemp978;
int nctemp980=LibeStrcmp(nctemp971,nctemp976);
int nctemp968 = (nctemp980 ==1);
if(nctemp968)
{
int nctemp983=CodeArraycheckon();
}
int nctemp989=i;
nctempchar1* nctemp987= MainArgs->a[nctemp989].arg;
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 3}, (char*)"-g\0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=LibeStrcmp(nctemp987,nctemp992);
int nctemp984 = (nctemp996 ==1);
if(nctemp984)
{
debug =1;
int nctemp1003=CodeDebugon();
}
int nctemp1009=i;
nctempchar1* nctemp1007= MainArgs->a[nctemp1009].arg;
struct nctempchar1 *nctemp1014;
static struct nctempchar1 nctemp1015 = {{ 3}, (char*)"-d\0"};
nctemp1014=&nctemp1015;
nctempchar1* nctemp1012= nctemp1014;
int nctemp1016=LibeStrcmp(nctemp1007,nctemp1012);
int nctemp1004 = (nctemp1016 ==1);
if(nctemp1004)
{
show =1;
}
int nctemp1027=i;
nctempchar1* nctemp1025= MainArgs->a[nctemp1027].arg;
struct nctempchar1 *nctemp1032;
static struct nctempchar1 nctemp1033 = {{ 3}, (char*)"-O\0"};
nctemp1032=&nctemp1033;
nctempchar1* nctemp1030= nctemp1032;
int nctemp1034=LibeStrcmp(nctemp1025,nctemp1030);
int nctemp1022 = (nctemp1034 ==1);
if(nctemp1022)
{
optimize =1;
}
int nctemp1045=i;
nctempchar1* nctemp1043= MainArgs->a[nctemp1045].arg;
struct nctempchar1 *nctemp1050;
static struct nctempchar1 nctemp1051 = {{ 3}, (char*)"-f\0"};
nctemp1050=&nctemp1051;
nctempchar1* nctemp1048= nctemp1050;
int nctemp1052=LibeStrcmp(nctemp1043,nctemp1048);
int nctemp1040 = (nctemp1052 ==1);
if(nctemp1040)
{
openmp =1;
}
int nctemp1063=i;
nctempchar1* nctemp1061= MainArgs->a[nctemp1063].arg;
struct nctempchar1 *nctemp1068;
static struct nctempchar1 nctemp1069 = {{ 3}, (char*)"-c\0"};
nctemp1068=&nctemp1069;
nctempchar1* nctemp1066= nctemp1068;
int nctemp1070=LibeStrcmp(nctemp1061,nctemp1066);
int nctemp1058 = (nctemp1070 ==1);
if(nctemp1058)
{
obj =0;
}
int nctemp1083 = i + 1;
int nctemp1076 = (nctemp1083 < l);
if(nctemp1076)
{
int nctemp1091=i;
int nctemp1093=0;
char nctemp1096=(char)('-');
int nctemp1088 = (MainArgs->a[nctemp1091].arg->a[nctemp1093] ==nctemp1096);
int nctemp1085 = (nctemp1088 ==1);
if(nctemp1085)
{
loop =1;
int nctemp1112 = i + 1;
i =nctemp1112;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1121 = (loop ==1);
nctemp783=nctemp1121;}int nctemp1131 = (parse ==0);
int nctemp1136 = (semantic ==0);
int nctemp1128 = (nctemp1131 && nctemp1136);
int nctemp1141 = (emit ==0);
int nctemp1125 = (nctemp1128 && nctemp1141);
if(nctemp1125)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1161=MainArgs->d[0];int nctemp1157 = (i >= nctemp1161);
if(nctemp1157)
{
struct nctempchar1 *nctemp1168;
static struct nctempchar1 nctemp1169 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1168=&nctemp1169;
nctempchar1* nctemp1166= nctemp1168;
int nctemp1170=ErrPanic(nctemp1166);
}
else{
int nctemp1176=i;
infile=MainArgs->a[nctemp1176].arg;
}
int nctemp1179 = (emit ==1);
if(nctemp1179)
{
nctempchar1* nctemp1188= infile;
nctempchar1* nctemp1191=MainFout(nctemp1188);
outfile=nctemp1191;
nctempchar1* nctemp1196= outfile;
struct nctempchar1 *nctemp1201;
static struct nctempchar1 nctemp1202 = {{ 2}, (char*)"w\0"};
nctemp1201=&nctemp1202;
nctempchar1* nctemp1199= nctemp1201;
int nctemp1203=LibeOpen(nctemp1196,nctemp1199);
fd =nctemp1203;
int nctemp1205= fd;
int nctemp1207=CodeSetfdout(nctemp1205);
}
nctempchar1* nctemp1211= infile;
int nctemp1214=ScanInit(nctemp1211);
int nctemp1208 = (nctemp1214 ==0);
if(nctemp1208)
{
int nctemp1217=LibeExit();
}
int nctemp1219= 1;
int nctemp1221=ScanSetline(nctemp1219);
int nctemp1223=ParseIniparse();
int nctemp1224 = (emit ==1);
if(nctemp1224)
{
int nctemp1229=CodePreamble();
}
struct symbol* nctemp1233=SymMktable();
struct symbol* nctemp1231= nctemp1233;
struct symbol* nctemp1234=SymSetetp(nctemp1231);
int nctemp1235 = (parse ==1);
if(nctemp1235)
{
struct tree* nctemp1243=ParseParse();
p =nctemp1243;
}
int nctemp1244 = (btree ==1);
if(nctemp1244)
{
struct tree* nctemp1249= p;
int nctemp1251= 0;
int nctemp1253=PtreePrtree(nctemp1249,nctemp1251);
}
int nctemp1254 = (p !=0);
int nctemp1258=nctemp1254;
while(nctemp1258)
{{
int nctemp1259 = (semantic ==1);
if(nctemp1259)
{
int nctemp1263 = (p !=0);
if(nctemp1263)
{
struct tree* nctemp1268= p;
struct symbol* nctemp1272=SymGetetp();
struct symbol* nctemp1270= nctemp1272;
int nctemp1273=SemSem(nctemp1268,nctemp1270);
}
int nctemp1274 = (atree ==1);
if(nctemp1274)
{
struct tree* nctemp1279= p;
int nctemp1281= 0;
int nctemp1283=PtreePrtree(nctemp1279,nctemp1281);
}
int nctemp1284 = (table ==1);
if(nctemp1284)
{
struct symbol* nctemp1291=SymGetltp();
int nctemp1288 = (nctemp1291 !=0);
if(nctemp1288)
{
struct symbol* nctemp1296=SymGetltp();
struct symbol* nctemp1294= nctemp1296;
int nctemp1297= 0;
int nctemp1299=SymPrsym(nctemp1294,nctemp1297);
}
}
}
int nctemp1300 = (emit ==1);
if(nctemp1300)
{
int nctemp1304 = (p !=0);
if(nctemp1304)
{
struct tree* nctemp1309= p;
struct symbol* nctemp1313=SymGetetp();
struct symbol* nctemp1311= nctemp1313;
int nctemp1314=CodeCode(nctemp1309,nctemp1311);
}
}
struct tree* nctemp1316= p;
int nctemp1318=PtreeRmtree(nctemp1316);
struct symbol* nctemp1322=SymGetltp();
struct symbol* nctemp1320= nctemp1322;
int nctemp1323=SymRmtable(nctemp1320);
int nctemp1324 = (parse ==1);
if(nctemp1324)
{
struct tree* nctemp1332=ParseParse();
p =nctemp1332;
int nctemp1333 = (btree ==1);
if(nctemp1333)
{
struct tree* nctemp1338= p;
int nctemp1340= 0;
int nctemp1342=PtreePrtree(nctemp1338,nctemp1340);
}
}
}
int nctemp1343 = (p !=0);
nctemp1258=nctemp1343;}int nctemp1350=ParseGetlookahead();
int nctemp1347 = (nctemp1350 !=19);
if(nctemp1347)
{
struct nctempchar1 *nctemp1355;
static struct nctempchar1 nctemp1356 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1355=&nctemp1356;
nctempchar1* nctemp1353= nctemp1355;
int nctemp1357=ErrError(nctemp1353);
}
int nctemp1358 = (etable ==1);
if(nctemp1358)
{
int nctemp1363= 4;
int nctemp1365=LibeFlush(nctemp1363);
struct symbol* nctemp1369=SymGetetp();
int nctemp1366 = (nctemp1369 !=0);
if(nctemp1366)
{
struct symbol* nctemp1374=SymGetetp();
struct symbol* nctemp1372= nctemp1374;
int nctemp1375= 0;
int nctemp1377=SymPrsym(nctemp1372,nctemp1375);
}
}
int nctemp1381 = (emit ==1);
int nctemp1386 = (obj ==1);
int nctemp1378 = (nctemp1381 && nctemp1386);
if(nctemp1378)
{
int nctemp1390 = (1 ==1);
if(nctemp1390)
{
nctempchar1* nctemp1395= outfile;
int nctemp1398= debug;
int nctemp1400= optimize;
int nctemp1402= openmp;
int nctemp1404= show;
int nctemp1406=MainCcompcpu(nctemp1395,nctemp1398,nctemp1400,nctemp1402,nctemp1404);
}
else{
int nctemp1407 = (1 ==2);
if(nctemp1407)
{
nctempchar1* nctemp1412= outfile;
int nctemp1415= debug;
int nctemp1417= optimize;
int nctemp1419= openmp;
int nctemp1421= show;
int nctemp1423=MainCcompcuda(nctemp1412,nctemp1415,nctemp1417,nctemp1419,nctemp1421);
}
else{
struct nctempchar1 *nctemp1427;
static struct nctempchar1 nctemp1428 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1427=&nctemp1428;
nctempchar1* nctemp1425= nctemp1427;
int nctemp1429=ErrPanic(nctemp1425);
}
}
}
int nctemp1430 = (emit ==1);
if(nctemp1430)
{
free(outfile->a);
free(outfile);
int nctemp1438= fd;
int nctemp1440=LibeClose(nctemp1438);
}
int nctemp1442= 3;
int nctemp1444=LibeFlush(nctemp1442);
return 1;
}
