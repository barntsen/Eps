//  Translated by epsc  version today  
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
int RunFree(void *n); 
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
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
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
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
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
int CodePostamble ();
int MainHelp (int arch);
int MainHelp (int arch)
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
int nctemp17 = (arch ==1);
if(nctemp17)
{
int nctemp22= 4;
struct nctempchar1 *nctemp26;
static struct nctempchar1 nctemp27 = {{ 56}, (char*)"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp26=&nctemp27;
nctempchar1* nctemp24= nctemp26;
int nctemp28=LibePuts(nctemp22,nctemp24);
int nctemp30= 4;
struct nctempchar1 *nctemp34;
static struct nctempchar1 nctemp35 = {{ 3}, (char*)"\n\0"};
nctemp34=&nctemp35;
nctempchar1* nctemp32= nctemp34;
int nctemp36=LibePuts(nctemp30,nctemp32);
int nctemp38= 4;
struct nctempchar1 *nctemp42;
static struct nctempchar1 nctemp43 = {{ 58}, (char*)"  The ec command (without options) compiles an eps file\n\0"};
nctemp42=&nctemp43;
nctempchar1* nctemp40= nctemp42;
int nctemp44=LibePuts(nctemp38,nctemp40);
}
else{
int nctemp45 = (arch ==2);
if(nctemp45)
{
int nctemp50= 4;
struct nctempchar1 *nctemp54;
static struct nctempchar1 nctemp55 = {{ 57}, (char*)"  ecc [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp54=&nctemp55;
nctempchar1* nctemp52= nctemp54;
int nctemp56=LibePuts(nctemp50,nctemp52);
int nctemp58= 4;
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 3}, (char*)"\n\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=LibePuts(nctemp58,nctemp60);
int nctemp66= 4;
struct nctempchar1 *nctemp70;
static struct nctempchar1 nctemp71 = {{ 59}, (char*)"  The ecc command (without options) compiles an eps file\n\0"};
nctemp70=&nctemp71;
nctempchar1* nctemp68= nctemp70;
int nctemp72=LibePuts(nctemp66,nctemp68);
}
else{
int nctemp73 = (arch ==3);
if(nctemp73)
{
int nctemp78= 4;
struct nctempchar1 *nctemp82;
static struct nctempchar1 nctemp83 = {{ 57}, (char*)"  ech [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n\0"};
nctemp82=&nctemp83;
nctempchar1* nctemp80= nctemp82;
int nctemp84=LibePuts(nctemp78,nctemp80);
int nctemp86= 4;
struct nctempchar1 *nctemp90;
static struct nctempchar1 nctemp91 = {{ 3}, (char*)"\n\0"};
nctemp90=&nctemp91;
nctempchar1* nctemp88= nctemp90;
int nctemp92=LibePuts(nctemp86,nctemp88);
int nctemp94= 4;
struct nctempchar1 *nctemp98;
static struct nctempchar1 nctemp99 = {{ 59}, (char*)"  The ech command (without options) compiles an eps file\n\0"};
nctemp98=&nctemp99;
nctempchar1* nctemp96= nctemp98;
int nctemp100=LibePuts(nctemp94,nctemp96);
}
else{
struct nctempchar1 *nctemp104;
static struct nctempchar1 nctemp105 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp104=&nctemp105;
nctempchar1* nctemp102= nctemp104;
int nctemp106=ErrPanic(nctemp102);
}
}
}
int nctemp108= 4;
struct nctempchar1 *nctemp112;
static struct nctempchar1 nctemp113 = {{ 60}, (char*)"  with extension .e into an object file with extension .o\n\0"};
nctemp112=&nctemp113;
nctempchar1* nctemp110= nctemp112;
int nctemp114=LibePuts(nctemp108,nctemp110);
int nctemp116= 4;
struct nctempchar1 *nctemp120;
static struct nctempchar1 nctemp121 = {{ 3}, (char*)"\n\0"};
nctemp120=&nctemp121;
nctempchar1* nctemp118= nctemp120;
int nctemp122=LibePuts(nctemp116,nctemp118);
int nctemp124= 4;
struct nctempchar1 *nctemp128;
static struct nctempchar1 nctemp129 = {{ 14}, (char*)"  Options: \n\0"};
nctemp128=&nctemp129;
nctempchar1* nctemp126= nctemp128;
int nctemp130=LibePuts(nctemp124,nctemp126);
int nctemp132= 4;
struct nctempchar1 *nctemp136;
static struct nctempchar1 nctemp137 = {{ 28}, (char*)"   -t : Print parse tree \n\0"};
nctemp136=&nctemp137;
nctempchar1* nctemp134= nctemp136;
int nctemp138=LibePuts(nctemp132,nctemp134);
int nctemp140= 4;
struct nctempchar1 *nctemp144;
static struct nctempchar1 nctemp145 = {{ 38}, (char*)"   -a : Print annotated parse tree \n\0"};
nctemp144=&nctemp145;
nctempchar1* nctemp142= nctemp144;
int nctemp146=LibePuts(nctemp140,nctemp142);
int nctemp148= 4;
struct nctempchar1 *nctemp152;
static struct nctempchar1 nctemp153 = {{ 38}, (char*)"   -s : Print local symbol table   \n\0"};
nctemp152=&nctemp153;
nctempchar1* nctemp150= nctemp152;
int nctemp154=LibePuts(nctemp148,nctemp150);
int nctemp156= 4;
struct nctempchar1 *nctemp160;
static struct nctempchar1 nctemp161 = {{ 41}, (char*)"   -r : Print external symbol table   \n\0"};
nctemp160=&nctemp161;
nctempchar1* nctemp158= nctemp160;
int nctemp162=LibePuts(nctemp156,nctemp158);
int nctemp164= 4;
struct nctempchar1 *nctemp168;
static struct nctempchar1 nctemp169 = {{ 21}, (char*)"   -e : Emit code \n\0"};
nctemp168=&nctemp169;
nctempchar1* nctemp166= nctemp168;
int nctemp170=LibePuts(nctemp164,nctemp166);
int nctemp172= 4;
struct nctempchar1 *nctemp176;
static struct nctempchar1 nctemp177 = {{ 56}, (char*)"   -p : Perform only syntax check, no code generated \n\0"};
nctemp176=&nctemp177;
nctempchar1* nctemp174= nctemp176;
int nctemp178=LibePuts(nctemp172,nctemp174);
int nctemp180= 4;
struct nctempchar1 *nctemp184;
static struct nctempchar1 nctemp185 = {{ 64}, (char*)"   -q : Perform syntax and semantic check, no code generated \n\0"};
nctemp184=&nctemp185;
nctempchar1* nctemp182= nctemp184;
int nctemp186=LibePuts(nctemp180,nctemp182);
int nctemp188= 4;
struct nctempchar1 *nctemp192;
static struct nctempchar1 nctemp193 = {{ 29}, (char*)"   -C : Array index check \n\0"};
nctemp192=&nctemp193;
nctempchar1* nctemp190= nctemp192;
int nctemp194=LibePuts(nctemp188,nctemp190);
int nctemp195 = (arch ==1);
if(nctemp195)
{
int nctemp200= 4;
struct nctempchar1 *nctemp204;
static struct nctempchar1 nctemp205 = {{ 57}, (char*)"   -c : Produce c-code but do not generate object code\n\0"};
nctemp204=&nctemp205;
nctempchar1* nctemp202= nctemp204;
int nctemp206=LibePuts(nctemp200,nctemp202);
}
else{
int nctemp207 = (arch ==2);
if(nctemp207)
{
int nctemp212= 4;
struct nctempchar1 *nctemp216;
static struct nctempchar1 nctemp217 = {{ 64}, (char*)"   -c : Produce c++/cuda-code but do not generate object code\n\0"};
nctemp216=&nctemp217;
nctempchar1* nctemp214= nctemp216;
int nctemp218=LibePuts(nctemp212,nctemp214);
}
else{
int nctemp219 = (arch ==3);
if(nctemp219)
{
int nctemp224= 4;
struct nctempchar1 *nctemp228;
static struct nctempchar1 nctemp229 = {{ 63}, (char*)"   -c : Produce c++/hip-code but do not generate object code\n\0"};
nctemp228=&nctemp229;
nctempchar1* nctemp226= nctemp228;
int nctemp230=LibePuts(nctemp224,nctemp226);
}
else{
struct nctempchar1 *nctemp234;
static struct nctempchar1 nctemp235 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp234=&nctemp235;
nctempchar1* nctemp232= nctemp234;
int nctemp236=ErrPanic(nctemp232);
}
}
}
int nctemp238= 4;
struct nctempchar1 *nctemp242;
static struct nctempchar1 nctemp243 = {{ 31}, (char*)"   -g : Generate debug info \n\0"};
nctemp242=&nctemp243;
nctempchar1* nctemp240= nctemp242;
int nctemp244=LibePuts(nctemp238,nctemp240);
int nctemp246= 4;
struct nctempchar1 *nctemp250;
static struct nctempchar1 nctemp251 = {{ 48}, (char*)"   -d : Show the host compiler command line  \n\0"};
nctemp250=&nctemp251;
nctempchar1* nctemp248= nctemp250;
int nctemp252=LibePuts(nctemp246,nctemp248);
int nctemp254= 4;
struct nctempchar1 *nctemp258;
static struct nctempchar1 nctemp259 = {{ 24}, (char*)"   -O : Optimize code\n\0"};
nctemp258=&nctemp259;
nctempchar1* nctemp256= nctemp258;
int nctemp260=LibePuts(nctemp254,nctemp256);
int nctemp262= 4;
struct nctempchar1 *nctemp266;
static struct nctempchar1 nctemp267 = {{ 36}, (char*)"   -f : Generate code for openmp \n\0"};
nctemp266=&nctemp267;
nctempchar1* nctemp264= nctemp266;
int nctemp268=LibePuts(nctemp262,nctemp264);
int nctemp270= 4;
int nctemp272=LibeFlush(nctemp270);
return 1;
}
nctempchar1* MainFout (nctempchar1 *file,int arch);
nctempchar1 * MainFout (nctempchar1 *infile,int arch)
{
nctempchar1 *outfile;
int l;
int nctemp278=infile->d[0];l =nctemp278;
int nctemp282 = (l < 3);
if(nctemp282)
{
struct nctempchar1 *nctemp289;
static struct nctempchar1 nctemp290 = {{ 19}, (char*)" Illegal file name\0"};
nctemp289=&nctemp290;
nctempchar1* nctemp287= nctemp289;
int nctemp291=ErrPanic(nctemp287);
}
int nctemp300 = l - 2;
int nctemp295=nctemp300;
char nctemp302=(char)('e');
int nctemp292 = (infile->a[nctemp295] !=nctemp302);
if(nctemp292)
{
struct nctempchar1 *nctemp308;
static struct nctempchar1 nctemp309 = {{ 29}, (char*)"File extension have to be .e\0"};
nctemp308=&nctemp309;
nctempchar1* nctemp306= nctemp308;
int nctemp310=ErrPanic(nctemp306);
}
int nctemp311 = (arch ==1);
if(nctemp311)
{
int nctemp321=l;
nctempchar1 *nctemp320;
nctemp320=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp320->d[0]=l;
nctemp320->a=(char *)RunMalloc(sizeof(char)*nctemp321);
outfile=nctemp320;
nctempchar1* nctemp325= infile;
nctempchar1* nctemp328= outfile;
int nctemp331=LibeStrcpy(nctemp325,nctemp328);
int nctemp340 = l - 2;
int nctemp335=nctemp340;
char nctemp342=(char)('c');
outfile->a[nctemp335] =nctemp342;
}
else{
int nctemp345 = (arch ==2);
if(nctemp345)
{
int nctemp360 = l + 2;
int nctemp355=nctemp360;
nctempchar1 *nctemp354;
nctemp354=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp365 = l + 2;
nctemp354->d[0]=nctemp365;
nctemp354->a=(char *)RunMalloc(sizeof(char)*nctemp355);
outfile=nctemp354;
nctempchar1* nctemp367= infile;
nctempchar1* nctemp370= outfile;
int nctemp373=LibeStrcpy(nctemp367,nctemp370);
int nctemp382 = l - 2;
int nctemp377=nctemp382;
char nctemp384=(char)('c');
outfile->a[nctemp377] =nctemp384;
int nctemp395 = l - 1;
int nctemp390=nctemp395;
char nctemp397=(char)('p');
outfile->a[nctemp390] =nctemp397;
int nctemp408 = l - 0;
int nctemp403=nctemp408;
char nctemp410=(char)('p');
outfile->a[nctemp403] =nctemp410;
}
else{
int nctemp413 = (arch ==3);
if(nctemp413)
{
int nctemp428 = l + 2;
int nctemp423=nctemp428;
nctempchar1 *nctemp422;
nctemp422=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp433 = l + 2;
nctemp422->d[0]=nctemp433;
nctemp422->a=(char *)RunMalloc(sizeof(char)*nctemp423);
outfile=nctemp422;
nctempchar1* nctemp435= infile;
nctempchar1* nctemp438= outfile;
int nctemp441=LibeStrcpy(nctemp435,nctemp438);
int nctemp450 = l - 2;
int nctemp445=nctemp450;
char nctemp452=(char)('c');
outfile->a[nctemp445] =nctemp452;
int nctemp463 = l - 1;
int nctemp458=nctemp463;
char nctemp465=(char)('p');
outfile->a[nctemp458] =nctemp465;
int nctemp476 = l - 0;
int nctemp471=nctemp476;
char nctemp478=(char)('p');
outfile->a[nctemp471] =nctemp478;
}
else{
struct nctempchar1 *nctemp484;
static struct nctempchar1 nctemp485 = {{ 20}, (char*)"Unknow architecture\0"};
nctemp484=&nctemp485;
nctempchar1* nctemp482= nctemp484;
int nctemp486=ErrPanic(nctemp482);
}
}
}
return outfile;
}
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show);
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show);
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show);
int MainCcompcpu (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp493=file->d[0];l =nctemp493;
struct nctempchar1 *nctemp502;
static struct nctempchar1 nctemp503 = {{ 8}, (char*)"gcc -c \0"};
nctemp502=&nctemp503;
tmp=nctemp502;
int nctemp510=80;
nctempchar1 *nctemp509;
nctemp509=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp509->d[0]=80;
nctemp509->a=(char *)RunMalloc(sizeof(char)*nctemp510);
cmd=nctemp509;
nctempchar1* nctemp514= tmp;
nctempchar1* nctemp517= cmd;
int nctemp520=LibeStrcpy(nctemp514,nctemp517);
int nctemp521 = (debug ==1);
if(nctemp521)
{
struct nctempchar1 *nctemp528;
static struct nctempchar1 nctemp529 = {{ 5}, (char*)" -g \0"};
nctemp528=&nctemp529;
nctempchar1* nctemp526= nctemp528;
nctempchar1* nctemp530= cmd;
int nctemp533=LibeStrcat(nctemp526,nctemp530);
}
int nctemp534 = (optimize ==1);
if(nctemp534)
{
struct nctempchar1 *nctemp541;
static struct nctempchar1 nctemp542 = {{ 5}, (char*)" -O \0"};
nctemp541=&nctemp542;
nctempchar1* nctemp539= nctemp541;
nctempchar1* nctemp543= cmd;
int nctemp546=LibeStrcat(nctemp539,nctemp543);
}
int nctemp547 = (openmp ==1);
if(nctemp547)
{
struct nctempchar1 *nctemp554;
static struct nctempchar1 nctemp555 = {{ 11}, (char*)" -fopenmp \0"};
nctemp554=&nctemp555;
nctempchar1* nctemp552= nctemp554;
nctempchar1* nctemp556= cmd;
int nctemp559=LibeStrcat(nctemp552,nctemp556);
}
nctempchar1* nctemp561= file;
nctempchar1* nctemp564= cmd;
int nctemp567=LibeStrcat(nctemp561,nctemp564);
struct nctempchar1 *nctemp571;
static struct nctempchar1 nctemp572 = {{ 3}, (char*)"\n\0"};
nctemp571=&nctemp572;
nctempchar1* nctemp569= nctemp571;
nctempchar1* nctemp573= cmd;
int nctemp576=LibeStrcat(nctemp569,nctemp573);
int nctemp577 = (show ==1);
if(nctemp577)
{
int nctemp582= 4;
nctempchar1* nctemp584= cmd;
int nctemp587=LibePuts(nctemp582,nctemp584);
int nctemp589= 4;
int nctemp591=LibeFlush(nctemp589);
}
nctempchar1* nctemp593= cmd;
int nctemp596=LibeSystem(nctemp593);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp615;
static struct nctempchar1 nctemp616 = {{ 4}, (char*)"rm \0"};
nctemp615=&nctemp616;
int nctemp613=nctemp615->d[0];int nctemp619 = nctemp613 + l;
int nctemp621 = nctemp619 + 2;
int nctemp606=nctemp621;
nctempchar1 *nctemp605;
nctemp605=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp630;
static struct nctempchar1 nctemp631 = {{ 4}, (char*)"rm \0"};
nctemp630=&nctemp631;
int nctemp628=nctemp630->d[0];int nctemp634 = nctemp628 + l;
int nctemp636 = nctemp634 + 2;
nctemp605->d[0]=nctemp636;
nctemp605->a=(char *)RunMalloc(sizeof(char)*nctemp606);
cmd=nctemp605;
struct nctempchar1 *nctemp640;
static struct nctempchar1 nctemp641 = {{ 4}, (char*)"rm \0"};
nctemp640=&nctemp641;
nctempchar1* nctemp638= nctemp640;
nctempchar1* nctemp642= cmd;
int nctemp645=LibeStrcpy(nctemp638,nctemp642);
nctempchar1* nctemp647= file;
nctempchar1* nctemp650= cmd;
int nctemp653=LibeStrcat(nctemp647,nctemp650);
struct nctempchar1 *nctemp657;
static struct nctempchar1 nctemp658 = {{ 3}, (char*)"\n\0"};
nctemp657=&nctemp658;
nctempchar1* nctemp655= nctemp657;
nctempchar1* nctemp659= cmd;
int nctemp662=LibeStrcat(nctemp655,nctemp659);
int nctemp663 = (show ==1);
if(nctemp663)
{
int nctemp668= 4;
nctempchar1* nctemp670= cmd;
int nctemp673=LibePuts(nctemp668,nctemp670);
int nctemp675= 4;
int nctemp677=LibeFlush(nctemp675);
}
nctempchar1* nctemp679= cmd;
int nctemp682=LibeSystem(nctemp679);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcompcuda (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp691=file->d[0];l =nctemp691;
struct nctempchar1 *nctemp700;
static struct nctempchar1 nctemp701 = {{ 15}, (char*)"nvcc -c -x cu \0"};
nctemp700=&nctemp701;
tmp=nctemp700;
int nctemp708=80;
nctempchar1 *nctemp707;
nctemp707=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp707->d[0]=80;
nctemp707->a=(char *)RunMalloc(sizeof(char)*nctemp708);
cmd=nctemp707;
nctempchar1* nctemp712= tmp;
nctempchar1* nctemp715= cmd;
int nctemp718=LibeStrcpy(nctemp712,nctemp715);
int nctemp719 = (debug ==1);
if(nctemp719)
{
struct nctempchar1 *nctemp726;
static struct nctempchar1 nctemp727 = {{ 5}, (char*)" -g \0"};
nctemp726=&nctemp727;
nctempchar1* nctemp724= nctemp726;
nctempchar1* nctemp728= cmd;
int nctemp731=LibeStrcat(nctemp724,nctemp728);
}
int nctemp732 = (optimize ==1);
if(nctemp732)
{
struct nctempchar1 *nctemp739;
static struct nctempchar1 nctemp740 = {{ 6}, (char*)" -O3 \0"};
nctemp739=&nctemp740;
nctempchar1* nctemp737= nctemp739;
nctempchar1* nctemp741= cmd;
int nctemp744=LibeStrcat(nctemp737,nctemp741);
}
int nctemp745 = (openmp ==1);
if(nctemp745)
{
struct nctempchar1 *nctemp752;
static struct nctempchar1 nctemp753 = {{ 11}, (char*)" -fopenmp \0"};
nctemp752=&nctemp753;
nctempchar1* nctemp750= nctemp752;
nctempchar1* nctemp754= cmd;
int nctemp757=LibeStrcat(nctemp750,nctemp754);
}
nctempchar1* nctemp759= file;
nctempchar1* nctemp762= cmd;
int nctemp765=LibeStrcat(nctemp759,nctemp762);
struct nctempchar1 *nctemp769;
static struct nctempchar1 nctemp770 = {{ 3}, (char*)"\n\0"};
nctemp769=&nctemp770;
nctempchar1* nctemp767= nctemp769;
nctempchar1* nctemp771= cmd;
int nctemp774=LibeStrcat(nctemp767,nctemp771);
int nctemp775 = (show ==1);
if(nctemp775)
{
int nctemp780= 4;
nctempchar1* nctemp782= cmd;
int nctemp785=LibePuts(nctemp780,nctemp782);
int nctemp787= 4;
int nctemp789=LibeFlush(nctemp787);
}
nctempchar1* nctemp791= cmd;
int nctemp794=LibeSystem(nctemp791);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp813;
static struct nctempchar1 nctemp814 = {{ 4}, (char*)"rm \0"};
nctemp813=&nctemp814;
int nctemp811=nctemp813->d[0];int nctemp817 = nctemp811 + l;
int nctemp819 = nctemp817 + 2;
int nctemp804=nctemp819;
nctempchar1 *nctemp803;
nctemp803=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp828;
static struct nctempchar1 nctemp829 = {{ 4}, (char*)"rm \0"};
nctemp828=&nctemp829;
int nctemp826=nctemp828->d[0];int nctemp832 = nctemp826 + l;
int nctemp834 = nctemp832 + 2;
nctemp803->d[0]=nctemp834;
nctemp803->a=(char *)RunMalloc(sizeof(char)*nctemp804);
cmd=nctemp803;
struct nctempchar1 *nctemp838;
static struct nctempchar1 nctemp839 = {{ 4}, (char*)"rm \0"};
nctemp838=&nctemp839;
nctempchar1* nctemp836= nctemp838;
nctempchar1* nctemp840= cmd;
int nctemp843=LibeStrcpy(nctemp836,nctemp840);
nctempchar1* nctemp845= file;
nctempchar1* nctemp848= cmd;
int nctemp851=LibeStrcat(nctemp845,nctemp848);
struct nctempchar1 *nctemp855;
static struct nctempchar1 nctemp856 = {{ 3}, (char*)"\n\0"};
nctemp855=&nctemp856;
nctempchar1* nctemp853= nctemp855;
nctempchar1* nctemp857= cmd;
int nctemp860=LibeStrcat(nctemp853,nctemp857);
int nctemp861 = (show ==1);
if(nctemp861)
{
int nctemp866= 4;
nctempchar1* nctemp868= cmd;
int nctemp871=LibePuts(nctemp866,nctemp868);
int nctemp873= 4;
int nctemp875=LibeFlush(nctemp873);
}
nctempchar1* nctemp877= cmd;
int nctemp880=LibeSystem(nctemp877);
RunFree(cmd->a);
RunFree(cmd);
return 1;
}
int MainCcomphip (nctempchar1 *file,int debug,int optimize,int openmp,int show)
{
nctempchar1 *tmp;
nctempchar1 *cmd;
int l;
int nctemp889=file->d[0];l =nctemp889;
struct nctempchar1 *nctemp898;
static struct nctempchar1 nctemp899 = {{ 10}, (char*)"hipcc -c \0"};
nctemp898=&nctemp899;
tmp=nctemp898;
int nctemp906=80;
nctempchar1 *nctemp905;
nctemp905=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp905->d[0]=80;
nctemp905->a=(char *)RunMalloc(sizeof(char)*nctemp906);
cmd=nctemp905;
nctempchar1* nctemp910= tmp;
nctempchar1* nctemp913= cmd;
int nctemp916=LibeStrcpy(nctemp910,nctemp913);
int nctemp917 = (debug ==1);
if(nctemp917)
{
struct nctempchar1 *nctemp924;
static struct nctempchar1 nctemp925 = {{ 5}, (char*)" -g \0"};
nctemp924=&nctemp925;
nctempchar1* nctemp922= nctemp924;
nctempchar1* nctemp926= cmd;
int nctemp929=LibeStrcat(nctemp922,nctemp926);
}
int nctemp930 = (optimize ==1);
if(nctemp930)
{
struct nctempchar1 *nctemp937;
static struct nctempchar1 nctemp938 = {{ 6}, (char*)" -O3 \0"};
nctemp937=&nctemp938;
nctempchar1* nctemp935= nctemp937;
nctempchar1* nctemp939= cmd;
int nctemp942=LibeStrcat(nctemp935,nctemp939);
}
int nctemp943 = (openmp ==1);
if(nctemp943)
{
struct nctempchar1 *nctemp950;
static struct nctempchar1 nctemp951 = {{ 11}, (char*)" -fopenmp \0"};
nctemp950=&nctemp951;
nctempchar1* nctemp948= nctemp950;
nctempchar1* nctemp952= cmd;
int nctemp955=LibeStrcat(nctemp948,nctemp952);
}
nctempchar1* nctemp957= file;
nctempchar1* nctemp960= cmd;
int nctemp963=LibeStrcat(nctemp957,nctemp960);
struct nctempchar1 *nctemp967;
static struct nctempchar1 nctemp968 = {{ 3}, (char*)"\n\0"};
nctemp967=&nctemp968;
nctempchar1* nctemp965= nctemp967;
nctempchar1* nctemp969= cmd;
int nctemp972=LibeStrcat(nctemp965,nctemp969);
int nctemp973 = (show ==1);
if(nctemp973)
{
int nctemp978= 4;
nctempchar1* nctemp980= cmd;
int nctemp983=LibePuts(nctemp978,nctemp980);
int nctemp985= 4;
int nctemp987=LibeFlush(nctemp985);
}
nctempchar1* nctemp989= cmd;
int nctemp992=LibeSystem(nctemp989);
RunFree(cmd->a);
RunFree(cmd);
struct nctempchar1 *nctemp1011;
static struct nctempchar1 nctemp1012 = {{ 4}, (char*)"rm \0"};
nctemp1011=&nctemp1012;
int nctemp1009=nctemp1011->d[0];int nctemp1015 = nctemp1009 + l;
int nctemp1017 = nctemp1015 + 2;
int nctemp1002=nctemp1017;
nctempchar1 *nctemp1001;
nctemp1001=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
struct nctempchar1 *nctemp1026;
static struct nctempchar1 nctemp1027 = {{ 4}, (char*)"rm \0"};
nctemp1026=&nctemp1027;
int nctemp1024=nctemp1026->d[0];int nctemp1030 = nctemp1024 + l;
int nctemp1032 = nctemp1030 + 2;
nctemp1001->d[0]=nctemp1032;
nctemp1001->a=(char *)RunMalloc(sizeof(char)*nctemp1002);
cmd=nctemp1001;
struct nctempchar1 *nctemp1036;
static struct nctempchar1 nctemp1037 = {{ 4}, (char*)"rm \0"};
nctemp1036=&nctemp1037;
nctempchar1* nctemp1034= nctemp1036;
nctempchar1* nctemp1038= cmd;
int nctemp1041=LibeStrcpy(nctemp1034,nctemp1038);
nctempchar1* nctemp1043= file;
nctempchar1* nctemp1046= cmd;
int nctemp1049=LibeStrcat(nctemp1043,nctemp1046);
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 3}, (char*)"\n\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
nctempchar1* nctemp1055= cmd;
int nctemp1058=LibeStrcat(nctemp1051,nctemp1055);
int nctemp1059 = (show ==1);
if(nctemp1059)
{
int nctemp1064= 4;
nctempchar1* nctemp1066= cmd;
int nctemp1069=LibePuts(nctemp1064,nctemp1066);
int nctemp1071= 4;
int nctemp1073=LibeFlush(nctemp1071);
}
nctempchar1* nctemp1075= cmd;
int nctemp1078=LibeSystem(nctemp1075);
RunFree(cmd->a);
RunFree(cmd);
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
int nctemp1084=LibeInit();
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
int nctemp1134=PtreeInit();
int nctemp1136=CodeInit();
int nctemp1138=CodeArraycheckoff();
int nctemp1140=CodeDebugoff();
int nctemp1142= 1;
int nctemp1144=CodeSetarch(nctemp1142);
int nctemp1149=MainArgs->d[0];l =nctemp1149;
int nctemp1153 = (l <= 1);
if(nctemp1153)
{
struct nctempchar1 *nctemp1160;
static struct nctempchar1 nctemp1161 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1160=&nctemp1161;
nctempchar1* nctemp1158= nctemp1160;
int nctemp1162=ErrPanic(nctemp1158);
}
i =1;
loop =1;
int nctemp1171 = (loop ==1);
int nctemp1175=nctemp1171;
while(nctemp1175)
{{
int nctemp1181=i;
nctempchar1* nctemp1179= MainArgs->a[nctemp1181].arg;
struct nctempchar1 *nctemp1186;
static struct nctempchar1 nctemp1187 = {{ 3}, (char*)"-h\0"};
nctemp1186=&nctemp1187;
nctempchar1* nctemp1184= nctemp1186;
int nctemp1188=LibeStrcmp(nctemp1179,nctemp1184);
int nctemp1176 = (nctemp1188 ==1);
if(nctemp1176)
{
int nctemp1191= 1;
int nctemp1193=MainHelp(nctemp1191);
int nctemp1195=LibeExit();
}
int nctemp1201=i;
nctempchar1* nctemp1199= MainArgs->a[nctemp1201].arg;
struct nctempchar1 *nctemp1206;
static struct nctempchar1 nctemp1207 = {{ 3}, (char*)"-t\0"};
nctemp1206=&nctemp1207;
nctempchar1* nctemp1204= nctemp1206;
int nctemp1208=LibeStrcmp(nctemp1199,nctemp1204);
int nctemp1196 = (nctemp1208 ==1);
if(nctemp1196)
{
btree =1;
parse =1;
}
int nctemp1223=i;
nctempchar1* nctemp1221= MainArgs->a[nctemp1223].arg;
struct nctempchar1 *nctemp1228;
static struct nctempchar1 nctemp1229 = {{ 3}, (char*)"-a\0"};
nctemp1228=&nctemp1229;
nctempchar1* nctemp1226= nctemp1228;
int nctemp1230=LibeStrcmp(nctemp1221,nctemp1226);
int nctemp1218 = (nctemp1230 ==1);
if(nctemp1218)
{
atree =1;
semantic =1;
parse =1;
}
int nctemp1249=i;
nctempchar1* nctemp1247= MainArgs->a[nctemp1249].arg;
struct nctempchar1 *nctemp1254;
static struct nctempchar1 nctemp1255 = {{ 3}, (char*)"-s\0"};
nctemp1254=&nctemp1255;
nctempchar1* nctemp1252= nctemp1254;
int nctemp1256=LibeStrcmp(nctemp1247,nctemp1252);
int nctemp1244 = (nctemp1256 ==1);
if(nctemp1244)
{
table =1;
parse =1;
semantic =1;
}
int nctemp1275=i;
nctempchar1* nctemp1273= MainArgs->a[nctemp1275].arg;
struct nctempchar1 *nctemp1280;
static struct nctempchar1 nctemp1281 = {{ 3}, (char*)"-r\0"};
nctemp1280=&nctemp1281;
nctempchar1* nctemp1278= nctemp1280;
int nctemp1282=LibeStrcmp(nctemp1273,nctemp1278);
int nctemp1270 = (nctemp1282 ==1);
if(nctemp1270)
{
etable =1;
parse =1;
semantic =1;
}
int nctemp1301=i;
nctempchar1* nctemp1299= MainArgs->a[nctemp1301].arg;
struct nctempchar1 *nctemp1306;
static struct nctempchar1 nctemp1307 = {{ 3}, (char*)"-e\0"};
nctemp1306=&nctemp1307;
nctempchar1* nctemp1304= nctemp1306;
int nctemp1308=LibeStrcmp(nctemp1299,nctemp1304);
int nctemp1296 = (nctemp1308 ==1);
if(nctemp1296)
{
emit =1;
parse =1;
semantic =1;
}
int nctemp1327=i;
nctempchar1* nctemp1325= MainArgs->a[nctemp1327].arg;
struct nctempchar1 *nctemp1332;
static struct nctempchar1 nctemp1333 = {{ 3}, (char*)"-p\0"};
nctemp1332=&nctemp1333;
nctempchar1* nctemp1330= nctemp1332;
int nctemp1334=LibeStrcmp(nctemp1325,nctemp1330);
int nctemp1322 = (nctemp1334 ==1);
if(nctemp1322)
{
parse =1;
}
int nctemp1345=i;
nctempchar1* nctemp1343= MainArgs->a[nctemp1345].arg;
struct nctempchar1 *nctemp1350;
static struct nctempchar1 nctemp1351 = {{ 3}, (char*)"-q\0"};
nctemp1350=&nctemp1351;
nctempchar1* nctemp1348= nctemp1350;
int nctemp1352=LibeStrcmp(nctemp1343,nctemp1348);
int nctemp1340 = (nctemp1352 ==1);
if(nctemp1340)
{
semantic =1;
parse =1;
}
int nctemp1367=i;
nctempchar1* nctemp1365= MainArgs->a[nctemp1367].arg;
struct nctempchar1 *nctemp1372;
static struct nctempchar1 nctemp1373 = {{ 3}, (char*)"-C\0"};
nctemp1372=&nctemp1373;
nctempchar1* nctemp1370= nctemp1372;
int nctemp1374=LibeStrcmp(nctemp1365,nctemp1370);
int nctemp1362 = (nctemp1374 ==1);
if(nctemp1362)
{
int nctemp1377=CodeArraycheckon();
}
int nctemp1383=i;
nctempchar1* nctemp1381= MainArgs->a[nctemp1383].arg;
struct nctempchar1 *nctemp1388;
static struct nctempchar1 nctemp1389 = {{ 3}, (char*)"-g\0"};
nctemp1388=&nctemp1389;
nctempchar1* nctemp1386= nctemp1388;
int nctemp1390=LibeStrcmp(nctemp1381,nctemp1386);
int nctemp1378 = (nctemp1390 ==1);
if(nctemp1378)
{
debug =1;
int nctemp1397=CodeDebugon();
}
int nctemp1403=i;
nctempchar1* nctemp1401= MainArgs->a[nctemp1403].arg;
struct nctempchar1 *nctemp1408;
static struct nctempchar1 nctemp1409 = {{ 3}, (char*)"-d\0"};
nctemp1408=&nctemp1409;
nctempchar1* nctemp1406= nctemp1408;
int nctemp1410=LibeStrcmp(nctemp1401,nctemp1406);
int nctemp1398 = (nctemp1410 ==1);
if(nctemp1398)
{
show =1;
}
int nctemp1421=i;
nctempchar1* nctemp1419= MainArgs->a[nctemp1421].arg;
struct nctempchar1 *nctemp1426;
static struct nctempchar1 nctemp1427 = {{ 3}, (char*)"-O\0"};
nctemp1426=&nctemp1427;
nctempchar1* nctemp1424= nctemp1426;
int nctemp1428=LibeStrcmp(nctemp1419,nctemp1424);
int nctemp1416 = (nctemp1428 ==1);
if(nctemp1416)
{
optimize =1;
}
int nctemp1439=i;
nctempchar1* nctemp1437= MainArgs->a[nctemp1439].arg;
struct nctempchar1 *nctemp1444;
static struct nctempchar1 nctemp1445 = {{ 3}, (char*)"-f\0"};
nctemp1444=&nctemp1445;
nctempchar1* nctemp1442= nctemp1444;
int nctemp1446=LibeStrcmp(nctemp1437,nctemp1442);
int nctemp1434 = (nctemp1446 ==1);
if(nctemp1434)
{
openmp =1;
}
int nctemp1457=i;
nctempchar1* nctemp1455= MainArgs->a[nctemp1457].arg;
struct nctempchar1 *nctemp1462;
static struct nctempchar1 nctemp1463 = {{ 3}, (char*)"-c\0"};
nctemp1462=&nctemp1463;
nctempchar1* nctemp1460= nctemp1462;
int nctemp1464=LibeStrcmp(nctemp1455,nctemp1460);
int nctemp1452 = (nctemp1464 ==1);
if(nctemp1452)
{
obj =0;
}
int nctemp1477 = i + 1;
int nctemp1470 = (nctemp1477 < l);
if(nctemp1470)
{
int nctemp1485=i;
int nctemp1487=0;
char nctemp1490=(char)('-');
int nctemp1482 = (MainArgs->a[nctemp1485].arg->a[nctemp1487] ==nctemp1490);
int nctemp1479 = (nctemp1482 ==1);
if(nctemp1479)
{
loop =1;
int nctemp1506 = i + 1;
i =nctemp1506;
}
else{
loop =0;
}
}
else{
loop =0;
}
}
int nctemp1515 = (loop ==1);
nctemp1175=nctemp1515;}int nctemp1525 = (parse ==0);
int nctemp1530 = (semantic ==0);
int nctemp1522 = (nctemp1525 && nctemp1530);
int nctemp1535 = (emit ==0);
int nctemp1519 = (nctemp1522 && nctemp1535);
if(nctemp1519)
{
emit =1;
semantic =emit;
parse =semantic;
}
int nctemp1555=MainArgs->d[0];int nctemp1551 = (i >= nctemp1555);
if(nctemp1551)
{
struct nctempchar1 *nctemp1562;
static struct nctempchar1 nctemp1563 = {{ 24}, (char*)"Missing input file name\0"};
nctemp1562=&nctemp1563;
nctempchar1* nctemp1560= nctemp1562;
int nctemp1564=ErrPanic(nctemp1560);
}
else{
int nctemp1570=i;
infile=MainArgs->a[nctemp1570].arg;
}
int nctemp1573 = (emit ==1);
if(nctemp1573)
{
nctempchar1* nctemp1582= infile;
int nctemp1585= 1;
nctempchar1* nctemp1587=MainFout(nctemp1582,nctemp1585);
outfile=nctemp1587;
nctempchar1* nctemp1592= outfile;
struct nctempchar1 *nctemp1597;
static struct nctempchar1 nctemp1598 = {{ 2}, (char*)"w\0"};
nctemp1597=&nctemp1598;
nctempchar1* nctemp1595= nctemp1597;
int nctemp1599=LibeOpen(nctemp1592,nctemp1595);
fd =nctemp1599;
int nctemp1601= fd;
int nctemp1603=CodeSetfdout(nctemp1601);
}
nctempchar1* nctemp1607= infile;
int nctemp1610=ScanInit(nctemp1607);
int nctemp1604 = (nctemp1610 ==0);
if(nctemp1604)
{
int nctemp1613=LibeExit();
}
int nctemp1615= 1;
int nctemp1617=ScanSetline(nctemp1615);
int nctemp1619=ParseIniparse();
int nctemp1620 = (emit ==1);
if(nctemp1620)
{
int nctemp1625=CodePreamble();
}
struct symbol* nctemp1629=SymMktable();
struct symbol* nctemp1627= nctemp1629;
struct symbol* nctemp1630=SymSetetp(nctemp1627);
int nctemp1631 = (parse ==1);
if(nctemp1631)
{
struct tree* nctemp1639=ParseParse();
p =nctemp1639;
}
int nctemp1640 = (btree ==1);
if(nctemp1640)
{
struct tree* nctemp1645= p;
int nctemp1647= 0;
int nctemp1649=PtreePrtree(nctemp1645,nctemp1647);
}
int nctemp1650 = (p !=0);
int nctemp1654=nctemp1650;
while(nctemp1654)
{{
int nctemp1655 = (semantic ==1);
if(nctemp1655)
{
int nctemp1659 = (p !=0);
if(nctemp1659)
{
struct tree* nctemp1664= p;
struct symbol* nctemp1668=SymGetetp();
struct symbol* nctemp1666= nctemp1668;
int nctemp1669=SemSem(nctemp1664,nctemp1666);
}
int nctemp1670 = (atree ==1);
if(nctemp1670)
{
struct tree* nctemp1675= p;
int nctemp1677= 0;
int nctemp1679=PtreePrtree(nctemp1675,nctemp1677);
}
int nctemp1680 = (table ==1);
if(nctemp1680)
{
struct symbol* nctemp1687=SymGetltp();
int nctemp1684 = (nctemp1687 !=0);
if(nctemp1684)
{
struct symbol* nctemp1692=SymGetltp();
struct symbol* nctemp1690= nctemp1692;
int nctemp1693= 0;
int nctemp1695=SymPrsym(nctemp1690,nctemp1693);
}
}
}
int nctemp1696 = (emit ==1);
if(nctemp1696)
{
int nctemp1700 = (p !=0);
if(nctemp1700)
{
struct tree* nctemp1705= p;
struct symbol* nctemp1709=SymGetetp();
struct symbol* nctemp1707= nctemp1709;
int nctemp1710=CodeCode(nctemp1705,nctemp1707);
}
}
struct tree* nctemp1712= p;
int nctemp1714=PtreeRmtree(nctemp1712);
struct symbol* nctemp1718=SymGetltp();
struct symbol* nctemp1716= nctemp1718;
int nctemp1719=SymRmtable(nctemp1716);
int nctemp1720 = (parse ==1);
if(nctemp1720)
{
struct tree* nctemp1728=ParseParse();
p =nctemp1728;
int nctemp1729 = (btree ==1);
if(nctemp1729)
{
struct tree* nctemp1734= p;
int nctemp1736= 0;
int nctemp1738=PtreePrtree(nctemp1734,nctemp1736);
}
}
}
int nctemp1739 = (p !=0);
nctemp1654=nctemp1739;}int nctemp1746=ParseGetlookahead();
int nctemp1743 = (nctemp1746 !=19);
if(nctemp1743)
{
struct nctempchar1 *nctemp1751;
static struct nctempchar1 nctemp1752 = {{ 34}, (char*)"Parsing ended before reaching EOF\0"};
nctemp1751=&nctemp1752;
nctempchar1* nctemp1749= nctemp1751;
int nctemp1753=ErrError(nctemp1749);
}
int nctemp1754 = (etable ==1);
if(nctemp1754)
{
int nctemp1759= 4;
int nctemp1761=LibeFlush(nctemp1759);
struct symbol* nctemp1765=SymGetetp();
int nctemp1762 = (nctemp1765 !=0);
if(nctemp1762)
{
struct symbol* nctemp1770=SymGetetp();
struct symbol* nctemp1768= nctemp1770;
int nctemp1771= 0;
int nctemp1773=SymPrsym(nctemp1768,nctemp1771);
}
}
int nctemp1774 = (emit ==1);
if(nctemp1774)
{
int nctemp1779=CodePostamble();
}
int nctemp1783 = (emit ==1);
int nctemp1788 = (obj ==1);
int nctemp1780 = (nctemp1783 && nctemp1788);
if(nctemp1780)
{
int nctemp1792 = (1 ==1);
if(nctemp1792)
{
nctempchar1* nctemp1797= outfile;
int nctemp1800= debug;
int nctemp1802= optimize;
int nctemp1804= openmp;
int nctemp1806= show;
int nctemp1808=MainCcompcpu(nctemp1797,nctemp1800,nctemp1802,nctemp1804,nctemp1806);
}
else{
int nctemp1809 = (1 ==2);
if(nctemp1809)
{
nctempchar1* nctemp1814= outfile;
int nctemp1817= debug;
int nctemp1819= optimize;
int nctemp1821= openmp;
int nctemp1823= show;
int nctemp1825=MainCcompcuda(nctemp1814,nctemp1817,nctemp1819,nctemp1821,nctemp1823);
}
else{
int nctemp1826 = (1 ==3);
if(nctemp1826)
{
nctempchar1* nctemp1831= outfile;
int nctemp1834= debug;
int nctemp1836= optimize;
int nctemp1838= openmp;
int nctemp1840= show;
int nctemp1842=MainCcomphip(nctemp1831,nctemp1834,nctemp1836,nctemp1838,nctemp1840);
}
else{
struct nctempchar1 *nctemp1846;
static struct nctempchar1 nctemp1847 = {{ 21}, (char*)"Unknown architecture\0"};
nctemp1846=&nctemp1847;
nctempchar1* nctemp1844= nctemp1846;
int nctemp1848=ErrPanic(nctemp1844);
}
}
}
}
int nctemp1849 = (emit ==1);
if(nctemp1849)
{
RunFree(outfile->a);
RunFree(outfile);
int nctemp1857= fd;
int nctemp1859=LibeClose(nctemp1857);
}
int nctemp1861= 3;
int nctemp1863=LibeFlush(nctemp1861);
return 1;
}
