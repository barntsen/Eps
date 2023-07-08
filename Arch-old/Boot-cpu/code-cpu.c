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
nctempchar1* CodeItemp (int cntrl);
nctempchar1* CodeMktemp ();
nctempchar1* CodeMkstring (struct tree* p);
nctempchar1* CodeNewtemp (nctempchar1 *type);
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name);
int CodeDeclarations (struct tree* p,struct symbol* tp);
int CodeWdeclaration (struct tree* p);
int CodeWdeclarations (struct tree* p);
int CodeGdeclarations (struct tree* p,struct symbol* tp);
int CodeStructdef (struct tree* p,struct symbol* tp);
int CodeFdeclaration (struct tree* p,struct symbol* tp);
int CodeFdeclkernel (struct tree* p);
int CodeIdeclaration (struct tree* p,struct symbol* tp);
int CodeIdlist (struct tree* p,struct symbol* tp);
int CodeFdef (struct tree* p);
int CodeCompstmnt (struct tree* p);
int CodeStmnt (struct tree* p);
int CodeWhilestmnt (struct tree* p);
int CodeForstmnt (struct tree* p);
int CodeParallelstmnt (struct tree* p);
int CodeIfstmnt (struct tree* p);
int CodeReturnstmnt (struct tree* p);
nctempchar1* CodeExpr (struct tree* p);
nctempchar1* CodeBinexpr (struct tree* p);
nctempchar1* CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval);
nctempchar1* CodeUnexpr (struct tree* p);
nctempchar1* CodePrimexpr (struct tree* p);
nctempchar1* CodeIdent (struct tree* p);
nctempchar1* CodeSconstant (struct tree* p);
nctempchar1* CodeNew (struct tree* p);
int CodeNewdescr (struct tree* p,nctempchar1 *pointer);
nctempchar1* CodeDelete (struct tree* p);
nctempchar1* CodeLen (struct tree* p);
nctempchar1* CodeFcall (struct tree* p);
nctempchar1* CodeCast (struct tree* p);
nctempchar1* CodeSizeof (struct tree* p);
nctempchar1* CodeStruct (struct tree* p);
nctempchar1* CodeCmplx (struct tree* p);
nctempchar1* CodeRe (struct tree* p);
nctempchar1* CodeIm (struct tree* p);
nctempchar1* CodeArray (struct tree* p,nctempchar1 *qual,nctempchar1 *sel);
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index);
nctempchar1* CodeQident (nctempchar1 *qual,nctempchar1 *ident);
nctempchar1* CodeQident2 (nctempchar1 *qual,nctempchar1 *ident);
int CodeEs (struct tree* p,nctempchar1 *s);
int CodeEd (int d);
int CodeSetparallel (int flag);
int CodeGetparallel ();
int CodeLine;
int CodeInit ()
{
int nctemp2= 0;
int nctemp4= 0;
int nctemp6=CodeSetntnb(nctemp2,nctemp4);
int nctemp8= 0;
int nctemp10=CodeSetparallel(nctemp8);
CodeLine =0;
int nctemp17= -1;
int nctemp16= nctemp17;
nctempchar1* nctemp18=CodeItemp(nctemp16);
return 1;
}
int CodePreamble ()
{
struct tree* p;
struct nctempchar1 *nctemp26;
struct nctempchar1 nctemp27 = {{ 6}, (char*)"dummy"};
nctemp26=&nctemp27;
nctempchar1* nctemp24= nctemp26;
struct nctempchar1 *nctemp30;
struct nctempchar1 nctemp31 = {{ 6}, (char*)"dummy"};
nctemp30=&nctemp31;
nctempchar1* nctemp28= nctemp30;
struct tree* nctemp32=PtreeMknode(nctemp24,nctemp28);
p =nctemp32;
struct tree* nctemp34= p;
int nctemp36= 1;
int nctemp38=PtreeSetline(nctemp34,nctemp36);
struct tree* nctemp40= p;
struct nctempchar1 *nctemp44;
struct nctempchar1 nctemp45 = {{ 51}, (char*)"/*  Translated by epsc  version December 2021 */\n"};
nctemp44=&nctemp45;
nctempchar1* nctemp42= nctemp44;
int nctemp46=CodeEs(nctemp40,nctemp42);
struct tree* nctemp48= p;
int nctemp50= 2;
int nctemp52=PtreeSetline(nctemp48,nctemp50);
struct tree* nctemp54= p;
int nctemp56= 3;
int nctemp58=PtreeSetline(nctemp54,nctemp56);
struct tree* nctemp60= p;
struct nctempchar1 *nctemp64;
struct nctempchar1 nctemp65 = {{ 22}, (char*)"#include <stddef.h>\n"};
nctemp64=&nctemp65;
nctempchar1* nctemp62= nctemp64;
int nctemp66=CodeEs(nctemp60,nctemp62);
struct tree* nctemp68= p;
struct nctempchar1 *nctemp72;
struct nctempchar1 nctemp73 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n"};
nctemp72=&nctemp73;
nctempchar1* nctemp70= nctemp72;
int nctemp74=CodeEs(nctemp68,nctemp70);
struct tree* nctemp76= p;
int nctemp78= 3;
int nctemp80=PtreeSetline(nctemp76,nctemp78);
struct tree* nctemp82= p;
struct nctempchar1 *nctemp86;
struct nctempchar1 nctemp87 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n"};
nctemp86=&nctemp87;
nctempchar1* nctemp84= nctemp86;
int nctemp88=CodeEs(nctemp82,nctemp84);
struct tree* nctemp90= p;
int nctemp92= 5;
int nctemp94=PtreeSetline(nctemp90,nctemp92);
struct tree* nctemp96= p;
struct nctempchar1 *nctemp100;
struct nctempchar1 nctemp101 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n"};
nctemp100=&nctemp101;
nctempchar1* nctemp98= nctemp100;
int nctemp102=CodeEs(nctemp96,nctemp98);
struct tree* nctemp104= p;
int nctemp106= 7;
int nctemp108=PtreeSetline(nctemp104,nctemp106);
struct tree* nctemp110= p;
struct nctempchar1 *nctemp114;
struct nctempchar1 nctemp115 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n"};
nctemp114=&nctemp115;
nctempchar1* nctemp112= nctemp114;
int nctemp116=CodeEs(nctemp110,nctemp112);
struct tree* nctemp118= p;
int nctemp120= 7;
int nctemp122=PtreeSetline(nctemp118,nctemp120);
struct tree* nctemp124= p;
struct nctempchar1 *nctemp128;
struct nctempchar1 nctemp129 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n"};
nctemp128=&nctemp129;
nctempchar1* nctemp126= nctemp128;
int nctemp130=CodeEs(nctemp124,nctemp126);
struct tree* nctemp132= p;
int nctemp134= 8;
int nctemp136=PtreeSetline(nctemp132,nctemp134);
int nctemp140=CodeArraycheck();
int nctemp137 = (nctemp140 ==1);
if(nctemp137)
{
struct tree* nctemp143= p;
struct nctempchar1 *nctemp147;
struct nctempchar1 nctemp148 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n"};
nctemp147=&nctemp148;
nctempchar1* nctemp145= nctemp147;
int nctemp149=CodeEs(nctemp143,nctemp145);
struct tree* nctemp151= p;
struct nctempchar1 *nctemp155;
struct nctempchar1 nctemp156 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n"};
nctemp155=&nctemp156;
nctempchar1* nctemp153= nctemp155;
int nctemp157=CodeEs(nctemp151,nctemp153);
struct tree* nctemp159= p;
int nctemp161= 8;
int nctemp163=PtreeSetline(nctemp159,nctemp161);
}
struct tree* nctemp165= p;
struct nctempchar1 *nctemp169;
struct nctempchar1 nctemp170 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n"};
nctemp169=&nctemp170;
nctempchar1* nctemp167= nctemp169;
int nctemp171=CodeEs(nctemp165,nctemp167);
struct tree* nctemp173= p;
int nctemp175= 10;
int nctemp177=PtreeSetline(nctemp173,nctemp175);
struct tree* nctemp179= p;
struct nctempchar1 *nctemp183;
struct nctempchar1 nctemp184 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n"};
nctemp183=&nctemp184;
nctempchar1* nctemp181= nctemp183;
int nctemp185=CodeEs(nctemp179,nctemp181);
struct tree* nctemp187= p;
int nctemp189= 10;
int nctemp191=PtreeSetline(nctemp187,nctemp189);
struct tree* nctemp193= p;
struct nctempchar1 *nctemp197;
struct nctempchar1 nctemp198 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n"};
nctemp197=&nctemp198;
nctempchar1* nctemp195= nctemp197;
int nctemp199=CodeEs(nctemp193,nctemp195);
struct tree* nctemp201= p;
int nctemp203= 12;
int nctemp205=PtreeSetline(nctemp201,nctemp203);
struct tree* nctemp207= p;
struct nctempchar1 *nctemp211;
struct nctempchar1 nctemp212 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n"};
nctemp211=&nctemp212;
nctempchar1* nctemp209= nctemp211;
int nctemp213=CodeEs(nctemp207,nctemp209);
struct tree* nctemp215= p;
int nctemp217= 13;
int nctemp219=PtreeSetline(nctemp215,nctemp217);
struct tree* nctemp221= p;
struct nctempchar1 *nctemp225;
struct nctempchar1 nctemp226 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n"};
nctemp225=&nctemp226;
nctempchar1* nctemp223= nctemp225;
int nctemp227=CodeEs(nctemp221,nctemp223);
struct tree* nctemp229= p;
int nctemp231= 14;
int nctemp233=PtreeSetline(nctemp229,nctemp231);
struct tree* nctemp235= p;
struct nctempchar1 *nctemp239;
struct nctempchar1 nctemp240 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n"};
nctemp239=&nctemp240;
nctempchar1* nctemp237= nctemp239;
int nctemp241=CodeEs(nctemp235,nctemp237);
struct tree* nctemp243= p;
int nctemp245= 15;
int nctemp247=PtreeSetline(nctemp243,nctemp245);
struct tree* nctemp249= p;
struct nctempchar1 *nctemp253;
struct nctempchar1 nctemp254 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n"};
nctemp253=&nctemp254;
nctempchar1* nctemp251= nctemp253;
int nctemp255=CodeEs(nctemp249,nctemp251);
struct tree* nctemp257= p;
int nctemp259= 16;
int nctemp261=PtreeSetline(nctemp257,nctemp259);
struct tree* nctemp263= p;
struct nctempchar1 *nctemp267;
struct nctempchar1 nctemp268 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n"};
nctemp267=&nctemp268;
nctempchar1* nctemp265= nctemp267;
int nctemp269=CodeEs(nctemp263,nctemp265);
struct tree* nctemp271= p;
int nctemp273= 17;
int nctemp275=PtreeSetline(nctemp271,nctemp273);
struct tree* nctemp277= p;
struct nctempchar1 *nctemp281;
struct nctempchar1 nctemp282 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n"};
nctemp281=&nctemp282;
nctempchar1* nctemp279= nctemp281;
int nctemp283=CodeEs(nctemp277,nctemp279);
struct tree* nctemp285= p;
int nctemp287= 18;
int nctemp289=PtreeSetline(nctemp285,nctemp287);
struct tree* nctemp291= p;
struct nctempchar1 *nctemp295;
struct nctempchar1 nctemp296 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n"};
nctemp295=&nctemp296;
nctempchar1* nctemp293= nctemp295;
int nctemp297=CodeEs(nctemp291,nctemp293);
struct tree* nctemp299= p;
int nctemp301= 19;
int nctemp303=PtreeSetline(nctemp299,nctemp301);
struct tree* nctemp305= p;
struct nctempchar1 *nctemp309;
struct nctempchar1 nctemp310 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n"};
nctemp309=&nctemp310;
nctempchar1* nctemp307= nctemp309;
int nctemp311=CodeEs(nctemp305,nctemp307);
struct tree* nctemp313= p;
int nctemp315= 20;
int nctemp317=PtreeSetline(nctemp313,nctemp315);
struct tree* nctemp319= p;
struct nctempchar1 *nctemp323;
struct nctempchar1 nctemp324 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n"};
nctemp323=&nctemp324;
nctempchar1* nctemp321= nctemp323;
int nctemp325=CodeEs(nctemp319,nctemp321);
struct tree* nctemp327= p;
struct nctempchar1 *nctemp331;
struct nctempchar1 nctemp332 = {{ 22}, (char*)"#include <stdlib.h>\n"};
nctemp331=&nctemp332;
nctempchar1* nctemp329= nctemp331;
int nctemp333=CodeEs(nctemp327,nctemp329);
struct tree* nctemp335= p;
struct nctempchar1 *nctemp339;
struct nctempchar1 nctemp340 = {{ 22}, (char*)"#include <string.h>\n"};
nctemp339=&nctemp340;
nctempchar1* nctemp337= nctemp339;
int nctemp341=CodeEs(nctemp335,nctemp337);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* nctemp344= p;
struct symbol* nctemp346= tp;
int nctemp348=CodeDeclarations(nctemp344,nctemp346);
return 1;
}
int CodeArraytest;
int CodeArraycheck ()
{
return CodeArraytest;
}
int CodeArraycheckon ()
{
CodeArraytest =1;
return 1;
}
int CodeArraycheckoff ()
{
CodeArraytest =0;
return 1;
}
int CodeBreakexprflag;
int CodeBreakexpr ()
{
return CodeBreakexprflag;
}
int CodeBreakexpron ()
{
CodeBreakexprflag =1;
return 1;
}
int CodeBreakexproff ()
{
CodeBreakexprflag =0;
return 1;
}
int CodeDebugflag;
int CodeDebug ()
{
return CodeDebugflag;
}
int CodeDebugon ()
{
CodeDebugflag =1;
return 1;
}
int CodeDebugoff ()
{
CodeDebugflag =0;
return 1;
}
int CodeParallel;
int CodeSetparallel (int flag)
{
CodeParallel =flag;
return flag;
}
int CodeGetparallel ()
{
return CodeParallel;
}
int CodeAddress;
nctempchar1 * CodeItemp (int cntrl)
{
nctempchar1 *s1;
nctempchar1 *s2;
int nctemp395=16;
nctempchar1 *nctemp394;
nctemp394=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp394->d[0]=16;
nctemp394->a=(char *)malloc(sizeof(char)*nctemp395);
s1=nctemp394;
int nctemp404=16;
nctempchar1 *nctemp403;
nctemp403=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp403->d[0]=16;
nctemp403->a=(char *)malloc(sizeof(char)*nctemp404);
s2=nctemp403;
struct nctempchar1 *nctemp410;
struct nctempchar1 nctemp411 = {{ 7}, (char*)"nctemp"};
nctemp410=&nctemp411;
nctempchar1* nctemp408= nctemp410;
nctempchar1* nctemp412= s2;
int nctemp415=LibeStrcpy(nctemp408,nctemp412);
int nctemp419= -1;
int nctemp416 = (cntrl ==nctemp419);
if(nctemp416)
{
CodeAddress =0;
}
else{
int nctemp432 = CodeAddress + 1;
CodeAddress =nctemp432;
}
int nctemp433 = (CodeAddress > 99999);
if(nctemp433)
{
struct nctempchar1 *nctemp440;
struct nctempchar1 nctemp441 = {{ 32}, (char*)"I am running out of temporaries"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
int nctemp442=ErrPanic(nctemp438);
}
int nctemp444= CodeAddress;
nctempchar1* nctemp446= s1;
int nctemp449=LibeItoa(nctemp444,nctemp446);
nctempchar1* nctemp451= s1;
nctempchar1* nctemp454= s2;
int nctemp457=LibeStrcat(nctemp451,nctemp454);
return s2;
}
nctempchar1 * CodeNewtemp (nctempchar1 *type)
{
nctempchar1 *temp;
struct symbol* tp;
nctempchar1* nctemp465=CodeMktemp();
temp=nctemp465;
nctempchar1* nctemp470= temp;
struct symbol* nctemp475=SymGetltp();
struct symbol* nctemp473= nctemp475;
struct symbol* nctemp476=SymMkname(nctemp470,nctemp473);
tp =nctemp476;
struct symbol* nctemp478= tp;
nctempchar1* nctemp480= type;
int nctemp483=SymSetype(nctemp478,nctemp480);
struct symbol* nctemp485= tp;
int nctemp487= 0;
int nctemp489=SymSetemit(nctemp485,nctemp487);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp496= name;
struct symbol* nctemp501=SymGetltp();
struct symbol* nctemp499= nctemp501;
struct symbol* nctemp502=SymMkname(nctemp496,nctemp499);
tp =nctemp502;
struct symbol* nctemp504= tp;
nctempchar1* nctemp506= type;
int nctemp509=SymSetype(nctemp504,nctemp506);
struct symbol* nctemp511= tp;
int nctemp513= 0;
int nctemp515=SymSetemit(nctemp511,nctemp513);
return tp;
}
nctempchar1 * CodeMktemp ()
{
int nctemp518= 0;
nctempchar1* nctemp520=CodeItemp(nctemp518);
return nctemp520;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp526=CodeMktemp();
tmp=nctemp526;
nctempchar1* nctemp531= tmp;
struct symbol* nctemp536=SymGetltp();
struct symbol* nctemp534= nctemp536;
struct symbol* nctemp537=SymMkname(nctemp531,nctemp534);
sp =nctemp537;
struct symbol* nctemp539= sp;
int nctemp541= 1;
int nctemp543=SymSetrank(nctemp539,nctemp541);
struct symbol* nctemp545= sp;
struct nctempchar1 *nctemp549;
struct nctempchar1 nctemp550 = {{ 5}, (char*)"char"};
nctemp549=&nctemp550;
nctempchar1* nctemp547= nctemp549;
int nctemp551=SymSetype(nctemp545,nctemp547);
struct symbol* nctemp553= sp;
struct nctempchar1 *nctemp557;
struct nctempchar1 nctemp558 = {{ 6}, (char*)"array"};
nctemp557=&nctemp558;
nctempchar1* nctemp555= nctemp557;
int nctemp559=SymSetarray(nctemp553,nctemp555);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
struct nctempchar1 *nctemp569;
struct nctempchar1 nctemp570 = {{ 5}, (char*)"char"};
nctemp569=&nctemp570;
nctempchar1* nctemp567= nctemp569;
nctempchar1* nctemp571=CodeNewtemp(nctemp567);
tmp2=nctemp571;
struct tree* nctemp573= p;
struct nctempchar1 *nctemp577;
struct nctempchar1 nctemp578 = {{ 21}, (char*)"struct nctempchar1 *"};
nctemp577=&nctemp578;
nctempchar1* nctemp575= nctemp577;
int nctemp579=CodeEs(nctemp573,nctemp575);
struct tree* nctemp581= p;
nctempchar1* nctemp583= tmp2;
int nctemp586=CodeEs(nctemp581,nctemp583);
struct tree* nctemp588= p;
struct nctempchar1 *nctemp592;
struct nctempchar1 nctemp593 = {{ 4}, (char*)";\n"};
nctemp592=&nctemp593;
nctempchar1* nctemp590= nctemp592;
int nctemp594=CodeEs(nctemp588,nctemp590);
struct nctempchar1 *nctemp602;
struct nctempchar1 nctemp603 = {{ 5}, (char*)"char"};
nctemp602=&nctemp603;
nctempchar1* nctemp600= nctemp602;
nctempchar1* nctemp604=CodeNewtemp(nctemp600);
tmp=nctemp604;
struct tree* nctemp606= p;
struct nctempchar1 *nctemp610;
struct nctempchar1 nctemp611 = {{ 20}, (char*)"struct nctempchar1 "};
nctemp610=&nctemp611;
nctempchar1* nctemp608= nctemp610;
int nctemp612=CodeEs(nctemp606,nctemp608);
struct tree* nctemp614= p;
nctempchar1* nctemp616= tmp;
int nctemp619=CodeEs(nctemp614,nctemp616);
struct tree* nctemp621= p;
struct nctempchar1 *nctemp625;
struct nctempchar1 nctemp626 = {{ 4}, (char*)" = "};
nctemp625=&nctemp626;
nctempchar1* nctemp623= nctemp625;
int nctemp627=CodeEs(nctemp621,nctemp623);
struct tree* nctemp629= p;
struct nctempchar1 *nctemp633;
struct nctempchar1 nctemp634 = {{ 4}, (char*)"{{ "};
nctemp633=&nctemp634;
nctempchar1* nctemp631= nctemp633;
int nctemp635=CodeEs(nctemp629,nctemp631);
struct tree* nctemp645= p;
nctempchar1* nctemp647=PtreeGetdef(nctemp645);
nctempchar1* nctemp643= nctemp647;
int nctemp648=LibeStrlen(nctemp643);
int nctemp650 = nctemp648 - 1;
l =nctemp650;
int nctemp652= l;
int nctemp654=CodeEd(nctemp652);
struct tree* nctemp656= p;
struct nctempchar1 *nctemp660;
struct nctempchar1 nctemp661 = {{ 11}, (char*)"}, (char*)"};
nctemp660=&nctemp661;
nctempchar1* nctemp658= nctemp660;
int nctemp662=CodeEs(nctemp656,nctemp658);
struct tree* nctemp664= p;
struct tree* nctemp668= p;
nctempchar1* nctemp670=PtreeGetdef(nctemp668);
nctempchar1* nctemp666= nctemp670;
int nctemp671=CodeEs(nctemp664,nctemp666);
struct tree* nctemp673= p;
struct nctempchar1 *nctemp677;
struct nctempchar1 nctemp678 = {{ 5}, (char*)"};\n"};
nctemp677=&nctemp678;
nctempchar1* nctemp675= nctemp677;
int nctemp679=CodeEs(nctemp673,nctemp675);
struct tree* nctemp681= p;
nctempchar1* nctemp683= tmp2;
int nctemp686=CodeEs(nctemp681,nctemp683);
struct tree* nctemp688= p;
struct nctempchar1 *nctemp692;
struct nctempchar1 nctemp693 = {{ 3}, (char*)"=&"};
nctemp692=&nctemp693;
nctempchar1* nctemp690= nctemp692;
int nctemp694=CodeEs(nctemp688,nctemp690);
struct tree* nctemp696= p;
nctempchar1* nctemp698= tmp;
int nctemp701=CodeEs(nctemp696,nctemp698);
struct tree* nctemp703= p;
struct nctempchar1 *nctemp707;
struct nctempchar1 nctemp708 = {{ 4}, (char*)";\n"};
nctemp707=&nctemp708;
nctempchar1* nctemp705= nctemp707;
int nctemp709=CodeEs(nctemp703,nctemp705);
return tmp2;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp712 = (p !=0);
if(nctemp712)
{
struct tree* nctemp720= p;
struct tree* nctemp722=PtreeMvchild(nctemp720);
np =nctemp722;
}
else{
np =p;
}
struct tree* nctemp728= np;
struct symbol* nctemp730= tp;
int nctemp732=CodeGdeclarations(nctemp728,nctemp730);
struct tree* nctemp734= np;
int nctemp736=CodeWdeclarations(nctemp734);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp742= tp;
struct symbol* nctemp744=SymMvnext(nctemp742);
tp =nctemp744;
int nctemp745 = (tp !=0);
int nctemp749=nctemp745;
while(nctemp749)
{{
struct nctempchar1 *nctemp755;
struct nctempchar1 nctemp756 = {{ 9}, (char*)"#arglist"};
nctemp755=&nctemp756;
nctempchar1* nctemp753= nctemp755;
struct symbol* nctemp759= tp;
nctempchar1* nctemp761=SymGetname(nctemp759);
nctempchar1* nctemp757= nctemp761;
int nctemp762=LibeStrcmp(nctemp753,nctemp757);
int nctemp750 = (nctemp762 ==0);
if(nctemp750)
{
struct symbol* nctemp767= tp;
int nctemp769=SymGetemit(nctemp767);
int nctemp764 = (nctemp769 ==1);
if(nctemp764)
{
struct symbol* nctemp776= tp;
nctempchar1* nctemp778=SymGetstruct(nctemp776);
nctempchar1* nctemp774= nctemp778;
struct nctempchar1 *nctemp781;
struct nctempchar1 nctemp782 = {{ 10}, (char*)"structdef"};
nctemp781=&nctemp782;
nctempchar1* nctemp779= nctemp781;
int nctemp783=LibeStrcmp(nctemp774,nctemp779);
int nctemp771 = (nctemp783 ==1);
if(nctemp771)
{
struct tree* nctemp786= p;
struct symbol* nctemp788= tp;
int nctemp790=CodeStructdef(nctemp786,nctemp788);
}
else{
struct symbol* nctemp796= tp;
nctempchar1* nctemp798=SymGetfunc(nctemp796);
nctempchar1* nctemp794= nctemp798;
struct nctempchar1 *nctemp801;
struct nctempchar1 nctemp802 = {{ 6}, (char*)"fdecl"};
nctemp801=&nctemp802;
nctempchar1* nctemp799= nctemp801;
int nctemp803=LibeStrcmp(nctemp794,nctemp799);
int nctemp791 = (nctemp803 ==1);
if(nctemp791)
{
struct tree* nctemp806= p;
struct symbol* nctemp808= tp;
int nctemp810=CodeFdeclaration(nctemp806,nctemp808);
}
else{
struct tree* nctemp812= p;
struct symbol* nctemp814= tp;
int nctemp816=CodeIdeclaration(nctemp812,nctemp814);
struct tree* nctemp818= p;
struct nctempchar1 *nctemp822;
struct nctempchar1 nctemp823 = {{ 4}, (char*)";\n"};
nctemp822=&nctemp823;
nctempchar1* nctemp820= nctemp822;
int nctemp824=CodeEs(nctemp818,nctemp820);
}
}
struct symbol* nctemp826= tp;
int nctemp828= 0;
int nctemp830=SymSetemit(nctemp826,nctemp828);
}
}
struct symbol* nctemp835= tp;
struct symbol* nctemp837=SymMvnext(nctemp835);
tp =nctemp837;
}
int nctemp838 = (tp !=0);
nctemp749=nctemp838;}return 1;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp844= p;
struct nctempchar1 *nctemp848;
struct nctempchar1 nctemp849 = {{ 8}, (char*)"struct "};
nctemp848=&nctemp849;
nctempchar1* nctemp846= nctemp848;
int nctemp850=CodeEs(nctemp844,nctemp846);
struct tree* nctemp852= p;
struct symbol* nctemp856= tp;
nctempchar1* nctemp858=SymGetype(nctemp856);
nctempchar1* nctemp854= nctemp858;
int nctemp859=CodeEs(nctemp852,nctemp854);
struct tree* nctemp861= p;
struct nctempchar1 *nctemp865;
struct nctempchar1 nctemp866 = {{ 3}, (char*)" {"};
nctemp865=&nctemp866;
nctempchar1* nctemp863= nctemp865;
int nctemp867=CodeEs(nctemp861,nctemp863);
struct symbol* nctemp872= tp;
struct symbol* nctemp874=SymGetable(nctemp872);
up =nctemp874;
struct tree* nctemp876= p;
struct symbol* nctemp878= up;
int nctemp880=CodeGdeclarations(nctemp876,nctemp878);
struct tree* nctemp882= p;
struct nctempchar1 *nctemp886;
struct nctempchar1 nctemp887 = {{ 5}, (char*)"};\n"};
nctemp886=&nctemp887;
nctempchar1* nctemp884= nctemp886;
int nctemp888=CodeEs(nctemp882,nctemp884);
struct tree* nctemp890= p;
struct nctempchar1 *nctemp894;
struct nctempchar1 nctemp895 = {{ 16}, (char*)"typedef struct "};
nctemp894=&nctemp895;
nctempchar1* nctemp892= nctemp894;
int nctemp896=CodeEs(nctemp890,nctemp892);
struct tree* nctemp898= p;
struct nctempchar1 *nctemp902;
struct nctempchar1 nctemp903 = {{ 7}, (char*)"nctemp"};
nctemp902=&nctemp903;
nctempchar1* nctemp900= nctemp902;
int nctemp904=CodeEs(nctemp898,nctemp900);
struct tree* nctemp906= p;
struct symbol* nctemp910= tp;
nctempchar1* nctemp912=SymGetype(nctemp910);
nctempchar1* nctemp908= nctemp912;
int nctemp913=CodeEs(nctemp906,nctemp908);
struct tree* nctemp915= p;
struct nctempchar1 *nctemp919;
struct nctempchar1 nctemp920 = {{ 2}, (char*)"1"};
nctemp919=&nctemp920;
nctempchar1* nctemp917= nctemp919;
int nctemp921=CodeEs(nctemp915,nctemp917);
struct tree* nctemp923= p;
struct nctempchar1 *nctemp927;
struct nctempchar1 nctemp928 = {{ 20}, (char*)" {int d[1]; struct "};
nctemp927=&nctemp928;
nctempchar1* nctemp925= nctemp927;
int nctemp929=CodeEs(nctemp923,nctemp925);
struct tree* nctemp931= p;
struct symbol* nctemp935= tp;
nctempchar1* nctemp937=SymGetype(nctemp935);
nctempchar1* nctemp933= nctemp937;
int nctemp938=CodeEs(nctemp931,nctemp933);
struct tree* nctemp940= p;
struct nctempchar1 *nctemp944;
struct nctempchar1 nctemp945 = {{ 6}, (char*)" *a; "};
nctemp944=&nctemp945;
nctempchar1* nctemp942= nctemp944;
int nctemp946=CodeEs(nctemp940,nctemp942);
struct tree* nctemp948= p;
struct nctempchar1 *nctemp952;
struct nctempchar1 nctemp953 = {{ 3}, (char*)"} "};
nctemp952=&nctemp953;
nctempchar1* nctemp950= nctemp952;
int nctemp954=CodeEs(nctemp948,nctemp950);
struct tree* nctemp956= p;
struct nctempchar1 *nctemp960;
struct nctempchar1 nctemp961 = {{ 7}, (char*)"nctemp"};
nctemp960=&nctemp961;
nctempchar1* nctemp958= nctemp960;
int nctemp962=CodeEs(nctemp956,nctemp958);
struct tree* nctemp964= p;
struct symbol* nctemp968= tp;
nctempchar1* nctemp970=SymGetype(nctemp968);
nctempchar1* nctemp966= nctemp970;
int nctemp971=CodeEs(nctemp964,nctemp966);
struct tree* nctemp973= p;
struct nctempchar1 *nctemp977;
struct nctempchar1 nctemp978 = {{ 2}, (char*)"1"};
nctemp977=&nctemp978;
nctempchar1* nctemp975= nctemp977;
int nctemp979=CodeEs(nctemp973,nctemp975);
struct tree* nctemp981= p;
struct nctempchar1 *nctemp985;
struct nctempchar1 nctemp986 = {{ 4}, (char*)";\n"};
nctemp985=&nctemp986;
nctempchar1* nctemp983= nctemp985;
int nctemp987=CodeEs(nctemp981,nctemp983);
struct tree* nctemp989= p;
struct nctempchar1 *nctemp993;
struct nctempchar1 nctemp994 = {{ 8}, (char*)"struct "};
nctemp993=&nctemp994;
nctempchar1* nctemp991= nctemp993;
int nctemp995=CodeEs(nctemp989,nctemp991);
struct tree* nctemp997= p;
struct nctempchar1 *nctemp1001;
struct nctempchar1 nctemp1002 = {{ 7}, (char*)"nctemp"};
nctemp1001=&nctemp1002;
nctempchar1* nctemp999= nctemp1001;
int nctemp1003=CodeEs(nctemp997,nctemp999);
struct tree* nctemp1005= p;
struct symbol* nctemp1009= tp;
nctempchar1* nctemp1011=SymGetype(nctemp1009);
nctempchar1* nctemp1007= nctemp1011;
int nctemp1012=CodeEs(nctemp1005,nctemp1007);
struct tree* nctemp1014= p;
struct nctempchar1 *nctemp1018;
struct nctempchar1 nctemp1019 = {{ 2}, (char*)"2"};
nctemp1018=&nctemp1019;
nctempchar1* nctemp1016= nctemp1018;
int nctemp1020=CodeEs(nctemp1014,nctemp1016);
struct tree* nctemp1022= p;
struct nctempchar1 *nctemp1026;
struct nctempchar1 nctemp1027 = {{ 20}, (char*)" {int d[2]; struct "};
nctemp1026=&nctemp1027;
nctempchar1* nctemp1024= nctemp1026;
int nctemp1028=CodeEs(nctemp1022,nctemp1024);
struct tree* nctemp1030= p;
struct symbol* nctemp1034= tp;
nctempchar1* nctemp1036=SymGetype(nctemp1034);
nctempchar1* nctemp1032= nctemp1036;
int nctemp1037=CodeEs(nctemp1030,nctemp1032);
struct tree* nctemp1039= p;
struct nctempchar1 *nctemp1043;
struct nctempchar1 nctemp1044 = {{ 6}, (char*)" *a; "};
nctemp1043=&nctemp1044;
nctempchar1* nctemp1041= nctemp1043;
int nctemp1045=CodeEs(nctemp1039,nctemp1041);
struct tree* nctemp1047= p;
struct nctempchar1 *nctemp1051;
struct nctempchar1 nctemp1052 = {{ 3}, (char*)"} "};
nctemp1051=&nctemp1052;
nctempchar1* nctemp1049= nctemp1051;
int nctemp1053=CodeEs(nctemp1047,nctemp1049);
struct tree* nctemp1055= p;
struct nctempchar1 *nctemp1059;
struct nctempchar1 nctemp1060 = {{ 4}, (char*)";\n"};
nctemp1059=&nctemp1060;
nctempchar1* nctemp1057= nctemp1059;
int nctemp1061=CodeEs(nctemp1055,nctemp1057);
struct tree* nctemp1063= p;
struct nctempchar1 *nctemp1067;
struct nctempchar1 nctemp1068 = {{ 8}, (char*)"struct "};
nctemp1067=&nctemp1068;
nctempchar1* nctemp1065= nctemp1067;
int nctemp1069=CodeEs(nctemp1063,nctemp1065);
struct tree* nctemp1071= p;
struct nctempchar1 *nctemp1075;
struct nctempchar1 nctemp1076 = {{ 7}, (char*)"nctemp"};
nctemp1075=&nctemp1076;
nctempchar1* nctemp1073= nctemp1075;
int nctemp1077=CodeEs(nctemp1071,nctemp1073);
struct tree* nctemp1079= p;
struct symbol* nctemp1083= tp;
nctempchar1* nctemp1085=SymGetype(nctemp1083);
nctempchar1* nctemp1081= nctemp1085;
int nctemp1086=CodeEs(nctemp1079,nctemp1081);
struct tree* nctemp1088= p;
struct nctempchar1 *nctemp1092;
struct nctempchar1 nctemp1093 = {{ 2}, (char*)"3"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
int nctemp1094=CodeEs(nctemp1088,nctemp1090);
struct tree* nctemp1096= p;
struct nctempchar1 *nctemp1100;
struct nctempchar1 nctemp1101 = {{ 20}, (char*)" {int d[3]; struct "};
nctemp1100=&nctemp1101;
nctempchar1* nctemp1098= nctemp1100;
int nctemp1102=CodeEs(nctemp1096,nctemp1098);
struct tree* nctemp1104= p;
struct symbol* nctemp1108= tp;
nctempchar1* nctemp1110=SymGetype(nctemp1108);
nctempchar1* nctemp1106= nctemp1110;
int nctemp1111=CodeEs(nctemp1104,nctemp1106);
struct tree* nctemp1113= p;
struct nctempchar1 *nctemp1117;
struct nctempchar1 nctemp1118 = {{ 6}, (char*)" *a; "};
nctemp1117=&nctemp1118;
nctempchar1* nctemp1115= nctemp1117;
int nctemp1119=CodeEs(nctemp1113,nctemp1115);
struct tree* nctemp1121= p;
struct nctempchar1 *nctemp1125;
struct nctempchar1 nctemp1126 = {{ 3}, (char*)"} "};
nctemp1125=&nctemp1126;
nctempchar1* nctemp1123= nctemp1125;
int nctemp1127=CodeEs(nctemp1121,nctemp1123);
struct tree* nctemp1129= p;
struct nctempchar1 *nctemp1133;
struct nctempchar1 nctemp1134 = {{ 4}, (char*)";\n"};
nctemp1133=&nctemp1134;
nctempchar1* nctemp1131= nctemp1133;
int nctemp1135=CodeEs(nctemp1129,nctemp1131);
struct tree* nctemp1137= p;
struct nctempchar1 *nctemp1141;
struct nctempchar1 nctemp1142 = {{ 8}, (char*)"struct "};
nctemp1141=&nctemp1142;
nctempchar1* nctemp1139= nctemp1141;
int nctemp1143=CodeEs(nctemp1137,nctemp1139);
struct tree* nctemp1145= p;
struct nctempchar1 *nctemp1149;
struct nctempchar1 nctemp1150 = {{ 7}, (char*)"nctemp"};
nctemp1149=&nctemp1150;
nctempchar1* nctemp1147= nctemp1149;
int nctemp1151=CodeEs(nctemp1145,nctemp1147);
struct tree* nctemp1153= p;
struct symbol* nctemp1157= tp;
nctempchar1* nctemp1159=SymGetype(nctemp1157);
nctempchar1* nctemp1155= nctemp1159;
int nctemp1160=CodeEs(nctemp1153,nctemp1155);
struct tree* nctemp1162= p;
struct nctempchar1 *nctemp1166;
struct nctempchar1 nctemp1167 = {{ 2}, (char*)"4"};
nctemp1166=&nctemp1167;
nctempchar1* nctemp1164= nctemp1166;
int nctemp1168=CodeEs(nctemp1162,nctemp1164);
struct tree* nctemp1170= p;
struct nctempchar1 *nctemp1174;
struct nctempchar1 nctemp1175 = {{ 20}, (char*)" {int d[4]; struct "};
nctemp1174=&nctemp1175;
nctempchar1* nctemp1172= nctemp1174;
int nctemp1176=CodeEs(nctemp1170,nctemp1172);
struct tree* nctemp1178= p;
struct symbol* nctemp1182= tp;
nctempchar1* nctemp1184=SymGetype(nctemp1182);
nctempchar1* nctemp1180= nctemp1184;
int nctemp1185=CodeEs(nctemp1178,nctemp1180);
struct tree* nctemp1187= p;
struct nctempchar1 *nctemp1191;
struct nctempchar1 nctemp1192 = {{ 6}, (char*)" *a; "};
nctemp1191=&nctemp1192;
nctempchar1* nctemp1189= nctemp1191;
int nctemp1193=CodeEs(nctemp1187,nctemp1189);
struct tree* nctemp1195= p;
struct nctempchar1 *nctemp1199;
struct nctempchar1 nctemp1200 = {{ 3}, (char*)"} "};
nctemp1199=&nctemp1200;
nctempchar1* nctemp1197= nctemp1199;
int nctemp1201=CodeEs(nctemp1195,nctemp1197);
struct tree* nctemp1203= p;
struct nctempchar1 *nctemp1207;
struct nctempchar1 nctemp1208 = {{ 4}, (char*)";\n"};
nctemp1207=&nctemp1208;
nctempchar1* nctemp1205= nctemp1207;
int nctemp1209=CodeEs(nctemp1203,nctemp1205);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp1216= tp;
nctempchar1* nctemp1218=SymGetstruct(nctemp1216);
nctempchar1* nctemp1214= nctemp1218;
struct nctempchar1 *nctemp1221;
struct nctempchar1 nctemp1222 = {{ 7}, (char*)"struct"};
nctemp1221=&nctemp1222;
nctempchar1* nctemp1219= nctemp1221;
int nctemp1223=LibeStrcmp(nctemp1214,nctemp1219);
int nctemp1211 = (nctemp1223 ==1);
if(nctemp1211)
{
struct tree* nctemp1226= p;
struct nctempchar1 *nctemp1230;
struct nctempchar1 nctemp1231 = {{ 8}, (char*)"struct "};
nctemp1230=&nctemp1231;
nctempchar1* nctemp1228= nctemp1230;
int nctemp1232=CodeEs(nctemp1226,nctemp1228);
}
struct symbol* nctemp1238= tp;
nctempchar1* nctemp1240=SymGetarray(nctemp1238);
nctempchar1* nctemp1236= nctemp1240;
struct nctempchar1 *nctemp1243;
struct nctempchar1 nctemp1244 = {{ 6}, (char*)"array"};
nctemp1243=&nctemp1244;
nctempchar1* nctemp1241= nctemp1243;
int nctemp1245=LibeStrcmp(nctemp1236,nctemp1241);
int nctemp1233 = (nctemp1245 ==1);
if(nctemp1233)
{
struct tree* nctemp1248= p;
struct nctempchar1 *nctemp1252;
struct nctempchar1 nctemp1253 = {{ 7}, (char*)"nctemp"};
nctemp1252=&nctemp1253;
nctempchar1* nctemp1250= nctemp1252;
int nctemp1254=CodeEs(nctemp1248,nctemp1250);
}
struct tree* nctemp1256= p;
struct symbol* nctemp1260= tp;
nctempchar1* nctemp1262=SymGetype(nctemp1260);
nctempchar1* nctemp1258= nctemp1262;
int nctemp1263=CodeEs(nctemp1256,nctemp1258);
struct symbol* nctemp1269= tp;
nctempchar1* nctemp1271=SymGetarray(nctemp1269);
nctempchar1* nctemp1267= nctemp1271;
struct nctempchar1 *nctemp1274;
struct nctempchar1 nctemp1275 = {{ 6}, (char*)"array"};
nctemp1274=&nctemp1275;
nctempchar1* nctemp1272= nctemp1274;
int nctemp1276=LibeStrcmp(nctemp1267,nctemp1272);
int nctemp1264 = (nctemp1276 ==1);
if(nctemp1264)
{
struct symbol* nctemp1281= tp;
int nctemp1283=SymGetrank(nctemp1281);
int nctemp1279= nctemp1283;
int nctemp1284=CodeEd(nctemp1279);
struct tree* nctemp1286= p;
struct nctempchar1 *nctemp1290;
struct nctempchar1 nctemp1291 = {{ 2}, (char*)"*"};
nctemp1290=&nctemp1291;
nctempchar1* nctemp1288= nctemp1290;
int nctemp1292=CodeEs(nctemp1286,nctemp1288);
}
struct symbol* nctemp1298= tp;
nctempchar1* nctemp1300=SymGetstruct(nctemp1298);
nctempchar1* nctemp1296= nctemp1300;
struct nctempchar1 *nctemp1303;
struct nctempchar1 nctemp1304 = {{ 7}, (char*)"struct"};
nctemp1303=&nctemp1304;
nctempchar1* nctemp1301= nctemp1303;
int nctemp1305=LibeStrcmp(nctemp1296,nctemp1301);
int nctemp1293 = (nctemp1305 ==1);
if(nctemp1293)
{
struct tree* nctemp1308= p;
struct nctempchar1 *nctemp1312;
struct nctempchar1 nctemp1313 = {{ 2}, (char*)"*"};
nctemp1312=&nctemp1313;
nctempchar1* nctemp1310= nctemp1312;
int nctemp1314=CodeEs(nctemp1308,nctemp1310);
}
struct tree* nctemp1316= p;
struct nctempchar1 *nctemp1320;
struct nctempchar1 nctemp1321 = {{ 2}, (char*)" "};
nctemp1320=&nctemp1321;
nctempchar1* nctemp1318= nctemp1320;
int nctemp1322=CodeEs(nctemp1316,nctemp1318);
struct tree* nctemp1324= p;
struct symbol* nctemp1328= tp;
nctempchar1* nctemp1330=SymGetname(nctemp1328);
nctempchar1* nctemp1326= nctemp1330;
int nctemp1331=CodeEs(nctemp1324,nctemp1326);
struct tree* nctemp1333= p;
struct nctempchar1 *nctemp1337;
struct nctempchar1 nctemp1338 = {{ 3}, (char*)" ("};
nctemp1337=&nctemp1338;
nctempchar1* nctemp1335= nctemp1337;
int nctemp1339=CodeEs(nctemp1333,nctemp1335);
struct symbol* nctemp1344= tp;
struct symbol* nctemp1346=SymGetable(nctemp1344);
tp =nctemp1346;
struct nctempchar1 *nctemp1353;
struct nctempchar1 nctemp1354 = {{ 9}, (char*)"#arglist"};
nctemp1353=&nctemp1354;
nctempchar1* nctemp1351= nctemp1353;
struct symbol* nctemp1355= tp;
struct symbol* nctemp1357=SymLookup(nctemp1351,nctemp1355);
tp =nctemp1357;
struct symbol* nctemp1362= tp;
struct symbol* nctemp1364=SymGetable(nctemp1362);
tp =nctemp1364;
noargs =0;
struct symbol* nctemp1376= tp;
struct symbol* nctemp1378=SymMvnext(nctemp1376);
tp =nctemp1378;
int nctemp1369 = (tp !=0);
int nctemp1380=nctemp1369;
while(nctemp1380)
{{
struct tree* nctemp1382= p;
struct symbol* nctemp1384= tp;
int nctemp1386=CodeIdeclaration(nctemp1382,nctemp1384);
struct symbol* nctemp1390= tp;
struct symbol* nctemp1392=SymMvnext(nctemp1390);
int nctemp1387 = (nctemp1392 !=0);
if(nctemp1387)
{
struct tree* nctemp1395= p;
struct nctempchar1 *nctemp1399;
struct nctempchar1 nctemp1400 = {{ 2}, (char*)","};
nctemp1399=&nctemp1400;
nctempchar1* nctemp1397= nctemp1399;
int nctemp1401=CodeEs(nctemp1395,nctemp1397);
}
int nctemp1410 = noargs + 1;
noargs =nctemp1410;
}
struct symbol* nctemp1418= tp;
struct symbol* nctemp1420=SymMvnext(nctemp1418);
tp =nctemp1420;
int nctemp1411 = (tp !=0);
nctemp1380=nctemp1411;}struct tree* nctemp1423= p;
struct nctempchar1 *nctemp1427;
struct nctempchar1 nctemp1428 = {{ 5}, (char*)");\n"};
nctemp1427=&nctemp1428;
nctempchar1* nctemp1425= nctemp1427;
int nctemp1429=CodeEs(nctemp1423,nctemp1425);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp1436= tp;
nctempchar1* nctemp1438=SymGetstruct(nctemp1436);
nctempchar1* nctemp1434= nctemp1438;
struct nctempchar1 *nctemp1441;
struct nctempchar1 nctemp1442 = {{ 10}, (char*)"structdef"};
nctemp1441=&nctemp1442;
nctempchar1* nctemp1439= nctemp1441;
int nctemp1443=LibeStrcmp(nctemp1434,nctemp1439);
int nctemp1431 = (nctemp1443 ==1);
if(nctemp1431)
{
struct tree* nctemp1446= p;
struct nctempchar1 *nctemp1450;
struct nctempchar1 nctemp1451 = {{ 8}, (char*)"struct "};
nctemp1450=&nctemp1451;
nctempchar1* nctemp1448= nctemp1450;
int nctemp1452=CodeEs(nctemp1446,nctemp1448);
}
struct symbol* nctemp1458= tp;
nctempchar1* nctemp1460=SymGetstruct(nctemp1458);
nctempchar1* nctemp1456= nctemp1460;
struct nctempchar1 *nctemp1463;
struct nctempchar1 nctemp1464 = {{ 7}, (char*)"struct"};
nctemp1463=&nctemp1464;
nctempchar1* nctemp1461= nctemp1463;
int nctemp1465=LibeStrcmp(nctemp1456,nctemp1461);
int nctemp1453 = (nctemp1465 ==1);
if(nctemp1453)
{
struct symbol* nctemp1472= tp;
nctempchar1* nctemp1474=SymGetarray(nctemp1472);
nctempchar1* nctemp1470= nctemp1474;
struct nctempchar1 *nctemp1477;
struct nctempchar1 nctemp1478 = {{ 6}, (char*)"array"};
nctemp1477=&nctemp1478;
nctempchar1* nctemp1475= nctemp1477;
int nctemp1479=LibeStrcmp(nctemp1470,nctemp1475);
int nctemp1467 = (nctemp1479 ==1);
if(nctemp1467)
{
struct tree* nctemp1482= p;
struct nctempchar1 *nctemp1486;
struct nctempchar1 nctemp1487 = {{ 14}, (char*)"struct nctemp"};
nctemp1486=&nctemp1487;
nctempchar1* nctemp1484= nctemp1486;
int nctemp1488=CodeEs(nctemp1482,nctemp1484);
struct tree* nctemp1490= p;
struct symbol* nctemp1494= tp;
nctempchar1* nctemp1496=SymGetype(nctemp1494);
nctempchar1* nctemp1492= nctemp1496;
int nctemp1497=CodeEs(nctemp1490,nctemp1492);
struct symbol* nctemp1501= tp;
int nctemp1503=SymGetrank(nctemp1501);
int nctemp1499= nctemp1503;
int nctemp1504=CodeEd(nctemp1499);
struct tree* nctemp1506= p;
struct nctempchar1 *nctemp1510;
struct nctempchar1 nctemp1511 = {{ 3}, (char*)" *"};
nctemp1510=&nctemp1511;
nctempchar1* nctemp1508= nctemp1510;
int nctemp1512=CodeEs(nctemp1506,nctemp1508);
struct tree* nctemp1514= p;
struct symbol* nctemp1518= tp;
nctempchar1* nctemp1520=SymGetname(nctemp1518);
nctempchar1* nctemp1516= nctemp1520;
int nctemp1521=CodeEs(nctemp1514,nctemp1516);
}
else{
struct tree* nctemp1523= p;
struct nctempchar1 *nctemp1527;
struct nctempchar1 nctemp1528 = {{ 8}, (char*)"struct "};
nctemp1527=&nctemp1528;
nctempchar1* nctemp1525= nctemp1527;
int nctemp1529=CodeEs(nctemp1523,nctemp1525);
struct tree* nctemp1531= p;
struct symbol* nctemp1535= tp;
nctempchar1* nctemp1537=SymGetype(nctemp1535);
nctempchar1* nctemp1533= nctemp1537;
int nctemp1538=CodeEs(nctemp1531,nctemp1533);
struct tree* nctemp1540= p;
struct nctempchar1 *nctemp1544;
struct nctempchar1 nctemp1545 = {{ 2}, (char*)"*"};
nctemp1544=&nctemp1545;
nctempchar1* nctemp1542= nctemp1544;
int nctemp1546=CodeEs(nctemp1540,nctemp1542);
struct tree* nctemp1548= p;
struct nctempchar1 *nctemp1552;
struct nctempchar1 nctemp1553 = {{ 2}, (char*)" "};
nctemp1552=&nctemp1553;
nctempchar1* nctemp1550= nctemp1552;
int nctemp1554=CodeEs(nctemp1548,nctemp1550);
struct tree* nctemp1556= p;
struct symbol* nctemp1560= tp;
nctempchar1* nctemp1562=SymGetname(nctemp1560);
nctempchar1* nctemp1558= nctemp1562;
int nctemp1563=CodeEs(nctemp1556,nctemp1558);
}
}
else{
struct symbol* nctemp1569= tp;
nctempchar1* nctemp1571=SymGetarray(nctemp1569);
nctempchar1* nctemp1567= nctemp1571;
struct nctempchar1 *nctemp1574;
struct nctempchar1 nctemp1575 = {{ 6}, (char*)"array"};
nctemp1574=&nctemp1575;
nctempchar1* nctemp1572= nctemp1574;
int nctemp1576=LibeStrcmp(nctemp1567,nctemp1572);
int nctemp1564 = (nctemp1576 ==1);
if(nctemp1564)
{
struct tree* nctemp1579= p;
struct nctempchar1 *nctemp1583;
struct nctempchar1 nctemp1584 = {{ 7}, (char*)"nctemp"};
nctemp1583=&nctemp1584;
nctempchar1* nctemp1581= nctemp1583;
int nctemp1585=CodeEs(nctemp1579,nctemp1581);
struct tree* nctemp1587= p;
struct symbol* nctemp1591= tp;
nctempchar1* nctemp1593=SymGetype(nctemp1591);
nctempchar1* nctemp1589= nctemp1593;
int nctemp1594=CodeEs(nctemp1587,nctemp1589);
struct symbol* nctemp1598= tp;
int nctemp1600=SymGetrank(nctemp1598);
int nctemp1596= nctemp1600;
int nctemp1601=CodeEd(nctemp1596);
struct tree* nctemp1603= p;
struct nctempchar1 *nctemp1607;
struct nctempchar1 nctemp1608 = {{ 3}, (char*)" *"};
nctemp1607=&nctemp1608;
nctempchar1* nctemp1605= nctemp1607;
int nctemp1609=CodeEs(nctemp1603,nctemp1605);
struct tree* nctemp1611= p;
struct symbol* nctemp1615= tp;
nctempchar1* nctemp1617=SymGetname(nctemp1615);
nctempchar1* nctemp1613= nctemp1617;
int nctemp1618=CodeEs(nctemp1611,nctemp1613);
}
else{
struct tree* nctemp1620= p;
struct symbol* nctemp1624= tp;
nctempchar1* nctemp1626=SymGetype(nctemp1624);
nctempchar1* nctemp1622= nctemp1626;
int nctemp1627=CodeEs(nctemp1620,nctemp1622);
struct tree* nctemp1629= p;
struct nctempchar1 *nctemp1633;
struct nctempchar1 nctemp1634 = {{ 2}, (char*)" "};
nctemp1633=&nctemp1634;
nctempchar1* nctemp1631= nctemp1633;
int nctemp1635=CodeEs(nctemp1629,nctemp1631);
struct tree* nctemp1637= p;
struct symbol* nctemp1641= tp;
nctempchar1* nctemp1643=SymGetname(nctemp1641);
nctempchar1* nctemp1639= nctemp1643;
int nctemp1644=CodeEs(nctemp1637,nctemp1639);
}
}
return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp1646 = (p !=0);
int nctemp1650=nctemp1646;
while(nctemp1650)
{{
struct tree* nctemp1659= p;
nctempchar1* nctemp1661=PtreeGetname(nctemp1659);
nctempchar1* nctemp1657= nctemp1661;
struct nctempchar1 *nctemp1664;
struct nctempchar1 nctemp1665 = {{ 5}, (char*)"type"};
nctemp1664=&nctemp1665;
nctempchar1* nctemp1662= nctemp1664;
int nctemp1666=LibeStrcmp(nctemp1657,nctemp1662);
int nctemp1654 = (nctemp1666 ==1);
struct tree* nctemp1674= p;
nctempchar1* nctemp1676=PtreeGetname(nctemp1674);
nctempchar1* nctemp1672= nctemp1676;
struct nctempchar1 *nctemp1679;
struct nctempchar1 nctemp1680 = {{ 7}, (char*)"struct"};
nctemp1679=&nctemp1680;
nctempchar1* nctemp1677= nctemp1679;
int nctemp1681=LibeStrcmp(nctemp1672,nctemp1677);
int nctemp1669 = (nctemp1681 ==1);
int nctemp1651 = (nctemp1654 || nctemp1669);
if(nctemp1651)
{
struct tree* nctemp1684= p;
int nctemp1686=CodeWdeclaration(nctemp1684);
}
struct tree* nctemp1691= p;
struct tree* nctemp1693=PtreeMvsister(nctemp1691);
p =nctemp1693;
}
int nctemp1694 = (p !=0);
nctemp1650=nctemp1694;}return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp1703= p;
struct tree* nctemp1705=PtreeMvchild(nctemp1703);
np =nctemp1705;
int nctemp1706 = (np !=0);
int nctemp1710=nctemp1706;
while(nctemp1710)
{{
struct tree* nctemp1716= np;
nctempchar1* nctemp1718=PtreeGetname(nctemp1716);
nctempchar1* nctemp1714= nctemp1718;
struct nctempchar1 *nctemp1721;
struct nctempchar1 nctemp1722 = {{ 5}, (char*)"fdef"};
nctemp1721=&nctemp1722;
nctempchar1* nctemp1719= nctemp1721;
int nctemp1723=LibeStrcmp(nctemp1714,nctemp1719);
int nctemp1711 = (nctemp1723 ==1);
if(nctemp1711)
{
struct tree* nctemp1726= np;
int nctemp1728=CodeFdef(nctemp1726);
}
struct tree* nctemp1733= np;
struct tree* nctemp1735=PtreeMvsister(nctemp1733);
np =nctemp1735;
}
int nctemp1736 = (np !=0);
nctemp1710=nctemp1736;}return 1;
}
int CodeFdef (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg =0;
struct tree* nctemp1751= p;
nctempchar1* nctemp1753=PtreeGetdef(nctemp1751);
nctempchar1* nctemp1749= nctemp1753;
struct symbol* nctemp1756=SymGetetp();
struct symbol* nctemp1754= nctemp1756;
struct symbol* nctemp1757=SymLookup(nctemp1749,nctemp1754);
tp =nctemp1757;
struct symbol* nctemp1761= tp;
struct symbol* nctemp1763=SymGetable(nctemp1761);
struct symbol* nctemp1759= nctemp1763;
struct symbol* nctemp1764=SymSetltp(nctemp1759);
struct symbol* nctemp1770= tp;
nctempchar1* nctemp1772=SymGetstruct(nctemp1770);
nctempchar1* nctemp1768= nctemp1772;
struct nctempchar1 *nctemp1775;
struct nctempchar1 nctemp1776 = {{ 7}, (char*)"struct"};
nctemp1775=&nctemp1776;
nctempchar1* nctemp1773= nctemp1775;
int nctemp1777=LibeStrcmp(nctemp1768,nctemp1773);
int nctemp1765 = (nctemp1777 ==1);
if(nctemp1765)
{
struct tree* nctemp1780= p;
struct nctempchar1 *nctemp1784;
struct nctempchar1 nctemp1785 = {{ 8}, (char*)"struct "};
nctemp1784=&nctemp1785;
nctempchar1* nctemp1782= nctemp1784;
int nctemp1786=CodeEs(nctemp1780,nctemp1782);
}
struct symbol* nctemp1792= tp;
nctempchar1* nctemp1794=SymGetarray(nctemp1792);
nctempchar1* nctemp1790= nctemp1794;
struct nctempchar1 *nctemp1797;
struct nctempchar1 nctemp1798 = {{ 6}, (char*)"array"};
nctemp1797=&nctemp1798;
nctempchar1* nctemp1795= nctemp1797;
int nctemp1799=LibeStrcmp(nctemp1790,nctemp1795);
int nctemp1787 = (nctemp1799 ==1);
if(nctemp1787)
{
struct tree* nctemp1802= p;
struct nctempchar1 *nctemp1806;
struct nctempchar1 nctemp1807 = {{ 7}, (char*)"nctemp"};
nctemp1806=&nctemp1807;
nctempchar1* nctemp1804= nctemp1806;
int nctemp1808=CodeEs(nctemp1802,nctemp1804);
}
struct tree* nctemp1810= p;
struct symbol* nctemp1814= tp;
nctempchar1* nctemp1816=SymGetype(nctemp1814);
nctempchar1* nctemp1812= nctemp1816;
int nctemp1817=CodeEs(nctemp1810,nctemp1812);
struct symbol* nctemp1823= tp;
nctempchar1* nctemp1825=SymGetarray(nctemp1823);
nctempchar1* nctemp1821= nctemp1825;
struct nctempchar1 *nctemp1828;
struct nctempchar1 nctemp1829 = {{ 6}, (char*)"array"};
nctemp1828=&nctemp1829;
nctempchar1* nctemp1826= nctemp1828;
int nctemp1830=LibeStrcmp(nctemp1821,nctemp1826);
int nctemp1818 = (nctemp1830 ==1);
if(nctemp1818)
{
struct symbol* nctemp1835= tp;
int nctemp1837=SymGetrank(nctemp1835);
int nctemp1833= nctemp1837;
int nctemp1838=CodeEd(nctemp1833);
struct tree* nctemp1840= p;
struct nctempchar1 *nctemp1844;
struct nctempchar1 nctemp1845 = {{ 3}, (char*)" *"};
nctemp1844=&nctemp1845;
nctempchar1* nctemp1842= nctemp1844;
int nctemp1846=CodeEs(nctemp1840,nctemp1842);
}
struct symbol* nctemp1852= tp;
nctempchar1* nctemp1854=SymGetstruct(nctemp1852);
nctempchar1* nctemp1850= nctemp1854;
struct nctempchar1 *nctemp1857;
struct nctempchar1 nctemp1858 = {{ 7}, (char*)"struct"};
nctemp1857=&nctemp1858;
nctempchar1* nctemp1855= nctemp1857;
int nctemp1859=LibeStrcmp(nctemp1850,nctemp1855);
int nctemp1847 = (nctemp1859 ==1);
if(nctemp1847)
{
struct tree* nctemp1862= p;
struct nctempchar1 *nctemp1866;
struct nctempchar1 nctemp1867 = {{ 2}, (char*)"*"};
nctemp1866=&nctemp1867;
nctempchar1* nctemp1864= nctemp1866;
int nctemp1868=CodeEs(nctemp1862,nctemp1864);
}
struct tree* nctemp1870= p;
struct nctempchar1 *nctemp1874;
struct nctempchar1 nctemp1875 = {{ 2}, (char*)" "};
nctemp1874=&nctemp1875;
nctempchar1* nctemp1872= nctemp1874;
int nctemp1876=CodeEs(nctemp1870,nctemp1872);
struct tree* nctemp1878= p;
struct symbol* nctemp1882= tp;
nctempchar1* nctemp1884=SymGetname(nctemp1882);
nctempchar1* nctemp1880= nctemp1884;
int nctemp1885=CodeEs(nctemp1878,nctemp1880);
struct tree* nctemp1887= p;
struct nctempchar1 *nctemp1891;
struct nctempchar1 nctemp1892 = {{ 3}, (char*)" ("};
nctemp1891=&nctemp1892;
nctempchar1* nctemp1889= nctemp1891;
int nctemp1893=CodeEs(nctemp1887,nctemp1889);
struct tree* nctemp1898= p;
struct tree* nctemp1900=PtreeMvchild(nctemp1898);
p =nctemp1900;
struct tree* nctemp1906= p;
nctempchar1* nctemp1908=PtreeGetname(nctemp1906);
nctempchar1* nctemp1904= nctemp1908;
struct nctempchar1 *nctemp1911;
struct nctempchar1 nctemp1912 = {{ 8}, (char*)"arglist"};
nctemp1911=&nctemp1912;
nctempchar1* nctemp1909= nctemp1911;
int nctemp1913=LibeStrcmp(nctemp1904,nctemp1909);
int nctemp1901 = (nctemp1913 ==1);
if(nctemp1901)
{
struct symbol* nctemp1919= tp;
struct symbol* nctemp1921=SymGetable(nctemp1919);
tp =nctemp1921;
struct nctempchar1 *nctemp1928;
struct nctempchar1 nctemp1929 = {{ 9}, (char*)"#arglist"};
nctemp1928=&nctemp1929;
nctempchar1* nctemp1926= nctemp1928;
struct symbol* nctemp1930= tp;
struct symbol* nctemp1932=SymLookup(nctemp1926,nctemp1930);
tp =nctemp1932;
struct symbol* nctemp1937= tp;
struct symbol* nctemp1939=SymGetable(nctemp1937);
tp =nctemp1939;
struct symbol* nctemp1947= tp;
struct symbol* nctemp1949=SymMvnext(nctemp1947);
tp =nctemp1949;
int nctemp1940 = (tp !=0);
int nctemp1951=nctemp1940;
while(nctemp1951)
{{
struct tree* nctemp1953= p;
struct symbol* nctemp1955= tp;
int nctemp1957=CodeIdeclaration(nctemp1953,nctemp1955);
struct symbol* nctemp1961= tp;
struct symbol* nctemp1963=SymMvnext(nctemp1961);
int nctemp1958 = (nctemp1963 !=0);
if(nctemp1958)
{
struct tree* nctemp1966= p;
struct nctempchar1 *nctemp1970;
struct nctempchar1 nctemp1971 = {{ 2}, (char*)","};
nctemp1970=&nctemp1971;
nctempchar1* nctemp1968= nctemp1970;
int nctemp1972=CodeEs(nctemp1966,nctemp1968);
}
int nctemp1981 = noarg + 1;
noarg =nctemp1981;
}
struct symbol* nctemp1989= tp;
struct symbol* nctemp1991=SymMvnext(nctemp1989);
tp =nctemp1991;
int nctemp1982 = (tp !=0);
nctemp1951=nctemp1982;}}
struct tree* nctemp1994= p;
struct nctempchar1 *nctemp1998;
struct nctempchar1 nctemp1999 = {{ 4}, (char*)")\n"};
nctemp1998=&nctemp1999;
nctempchar1* nctemp1996= nctemp1998;
int nctemp2000=CodeEs(nctemp1994,nctemp1996);
struct tree* nctemp2004= p;
struct tree* nctemp2006=PtreeMvsister(nctemp2004);
int nctemp2001 = (nctemp2006 !=0);
if(nctemp2001)
{
struct tree* nctemp2011= p;
struct tree* nctemp2013=PtreeMvsister(nctemp2011);
struct tree* nctemp2009= nctemp2013;
int nctemp2014=CodeCompstmnt(nctemp2009);
}
else{
struct tree* nctemp2016= p;
int nctemp2018=CodeCompstmnt(nctemp2016);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg =0;
struct tree* nctemp2030= p;
nctempchar1* nctemp2032=PtreeGetdef(nctemp2030);
nctempchar1* nctemp2028= nctemp2032;
struct symbol* nctemp2035=SymGetetp();
struct symbol* nctemp2033= nctemp2035;
struct symbol* nctemp2036=SymLookup(nctemp2028,nctemp2033);
tp =nctemp2036;
struct symbol* nctemp2040= tp;
struct symbol* nctemp2042=SymGetable(nctemp2040);
struct symbol* nctemp2038= nctemp2042;
struct symbol* nctemp2043=SymSetltp(nctemp2038);
struct tree* nctemp2045= p;
struct nctempchar1 *nctemp2049;
struct nctempchar1 nctemp2050 = {{ 12}, (char*)"__global__ "};
nctemp2049=&nctemp2050;
nctempchar1* nctemp2047= nctemp2049;
int nctemp2051=CodeEs(nctemp2045,nctemp2047);
struct tree* nctemp2053= p;
struct nctempchar1 *nctemp2057;
struct nctempchar1 nctemp2058 = {{ 5}, (char*)"void"};
nctemp2057=&nctemp2058;
nctempchar1* nctemp2055= nctemp2057;
int nctemp2059=CodeEs(nctemp2053,nctemp2055);
struct tree* nctemp2061= p;
struct nctempchar1 *nctemp2065;
struct nctempchar1 nctemp2066 = {{ 2}, (char*)" "};
nctemp2065=&nctemp2066;
nctempchar1* nctemp2063= nctemp2065;
int nctemp2067=CodeEs(nctemp2061,nctemp2063);
struct tree* nctemp2069= p;
struct nctempchar1 *nctemp2073;
struct nctempchar1 nctemp2074 = {{ 8}, (char*)"kernel_"};
nctemp2073=&nctemp2074;
nctempchar1* nctemp2071= nctemp2073;
int nctemp2075=CodeEs(nctemp2069,nctemp2071);
struct tree* nctemp2077= p;
struct symbol* nctemp2081= tp;
nctempchar1* nctemp2083=SymGetname(nctemp2081);
nctempchar1* nctemp2079= nctemp2083;
int nctemp2084=CodeEs(nctemp2077,nctemp2079);
struct tree* nctemp2086= p;
struct nctempchar1 *nctemp2090;
struct nctempchar1 nctemp2091 = {{ 3}, (char*)" ("};
nctemp2090=&nctemp2091;
nctempchar1* nctemp2088= nctemp2090;
int nctemp2092=CodeEs(nctemp2086,nctemp2088);
struct tree* nctemp2097= p;
struct tree* nctemp2099=PtreeMvchild(nctemp2097);
p =nctemp2099;
struct tree* nctemp2105= p;
nctempchar1* nctemp2107=PtreeGetname(nctemp2105);
nctempchar1* nctemp2103= nctemp2107;
struct nctempchar1 *nctemp2110;
struct nctempchar1 nctemp2111 = {{ 8}, (char*)"arglist"};
nctemp2110=&nctemp2111;
nctempchar1* nctemp2108= nctemp2110;
int nctemp2112=LibeStrcmp(nctemp2103,nctemp2108);
int nctemp2100 = (nctemp2112 ==1);
if(nctemp2100)
{
struct symbol* nctemp2118= tp;
struct symbol* nctemp2120=SymGetable(nctemp2118);
tp =nctemp2120;
struct nctempchar1 *nctemp2127;
struct nctempchar1 nctemp2128 = {{ 9}, (char*)"#arglist"};
nctemp2127=&nctemp2128;
nctempchar1* nctemp2125= nctemp2127;
struct symbol* nctemp2129= tp;
struct symbol* nctemp2131=SymLookup(nctemp2125,nctemp2129);
tp =nctemp2131;
struct symbol* nctemp2136= tp;
struct symbol* nctemp2138=SymGetable(nctemp2136);
tp =nctemp2138;
struct symbol* nctemp2146= tp;
struct symbol* nctemp2148=SymMvnext(nctemp2146);
tp =nctemp2148;
int nctemp2139 = (tp !=0);
int nctemp2150=nctemp2139;
while(nctemp2150)
{{
struct tree* nctemp2152= p;
struct symbol* nctemp2154= tp;
int nctemp2156=CodeIdeclaration(nctemp2152,nctemp2154);
struct symbol* nctemp2160= tp;
struct symbol* nctemp2162=SymMvnext(nctemp2160);
int nctemp2157 = (nctemp2162 !=0);
if(nctemp2157)
{
struct tree* nctemp2165= p;
struct nctempchar1 *nctemp2169;
struct nctempchar1 nctemp2170 = {{ 2}, (char*)","};
nctemp2169=&nctemp2170;
nctempchar1* nctemp2167= nctemp2169;
int nctemp2171=CodeEs(nctemp2165,nctemp2167);
}
int nctemp2180 = noarg + 1;
noarg =nctemp2180;
}
struct symbol* nctemp2188= tp;
struct symbol* nctemp2190=SymMvnext(nctemp2188);
tp =nctemp2190;
int nctemp2181 = (tp !=0);
nctemp2150=nctemp2181;}}
struct tree* nctemp2193= p;
struct nctempchar1 *nctemp2197;
struct nctempchar1 nctemp2198 = {{ 5}, (char*)");\n"};
nctemp2197=&nctemp2198;
nctempchar1* nctemp2195= nctemp2197;
int nctemp2199=CodeEs(nctemp2193,nctemp2195);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp2206= p;
struct nctempchar1 *nctemp2210;
struct nctempchar1 nctemp2211 = {{ 4}, (char*)"{\n"};
nctemp2210=&nctemp2211;
nctempchar1* nctemp2208= nctemp2210;
int nctemp2212=CodeEs(nctemp2206,nctemp2208);
struct tree* nctemp2217= p;
struct tree* nctemp2219=PtreeMvchild(nctemp2217);
p =nctemp2219;
struct tree* nctemp2221= p;
struct symbol* nctemp2225=SymGetltp();
struct symbol* nctemp2223= nctemp2225;
int nctemp2226=CodeDeclarations(nctemp2221,nctemp2223);
struct tree* nctemp2232= p;
nctempchar1* nctemp2234=PtreeGetname(nctemp2232);
nctempchar1* nctemp2230= nctemp2234;
struct nctempchar1 *nctemp2237;
struct nctempchar1 nctemp2238 = {{ 13}, (char*)"declarations"};
nctemp2237=&nctemp2238;
nctempchar1* nctemp2235= nctemp2237;
int nctemp2239=LibeStrcmp(nctemp2230,nctemp2235);
int nctemp2227 = (nctemp2239 ==1);
if(nctemp2227)
{
struct tree* nctemp2245= p;
struct tree* nctemp2247=PtreeMvsister(nctemp2245);
p =nctemp2247;
}
int nctemp2248 = (p !=0);
int nctemp2252=nctemp2248;
while(nctemp2252)
{{
struct tree* nctemp2258= p;
nctempchar1* nctemp2260=PtreeGetname(nctemp2258);
nctempchar1* nctemp2256= nctemp2260;
struct nctempchar1 *nctemp2263;
struct nctempchar1 nctemp2264 = {{ 5}, (char*)"expr"};
nctemp2263=&nctemp2264;
nctempchar1* nctemp2261= nctemp2263;
int nctemp2265=LibeStrcmp(nctemp2256,nctemp2261);
int nctemp2253 = (nctemp2265 ==1);
if(nctemp2253)
{
struct tree* nctemp2268= p;
nctempchar1* nctemp2270=CodeExpr(nctemp2268);
}
struct tree* nctemp2276= p;
nctempchar1* nctemp2278=PtreeGetname(nctemp2276);
nctempchar1* nctemp2274= nctemp2278;
struct nctempchar1 *nctemp2281;
struct nctempchar1 nctemp2282 = {{ 6}, (char*)"while"};
nctemp2281=&nctemp2282;
nctempchar1* nctemp2279= nctemp2281;
int nctemp2283=LibeStrcmp(nctemp2274,nctemp2279);
int nctemp2271 = (nctemp2283 ==1);
if(nctemp2271)
{
struct tree* nctemp2286= p;
int nctemp2288=CodeWhilestmnt(nctemp2286);
}
struct tree* nctemp2294= p;
nctempchar1* nctemp2296=PtreeGetname(nctemp2294);
nctempchar1* nctemp2292= nctemp2296;
struct nctempchar1 *nctemp2299;
struct nctempchar1 nctemp2300 = {{ 4}, (char*)"for"};
nctemp2299=&nctemp2300;
nctempchar1* nctemp2297= nctemp2299;
int nctemp2301=LibeStrcmp(nctemp2292,nctemp2297);
int nctemp2289 = (nctemp2301 ==1);
if(nctemp2289)
{
struct tree* nctemp2307= p;
struct tree* nctemp2309=PtreeMvchild(nctemp2307);
q =nctemp2309;
struct tree* nctemp2311= q;
struct tree* nctemp2313=PtreeMvsister(nctemp2311);
struct tree* nctemp2315= p;
int nctemp2317=CodeForstmnt(nctemp2315);
}
struct tree* nctemp2323= p;
nctempchar1* nctemp2325=PtreeGetname(nctemp2323);
nctempchar1* nctemp2321= nctemp2325;
struct nctempchar1 *nctemp2328;
struct nctempchar1 nctemp2329 = {{ 9}, (char*)"parallel"};
nctemp2328=&nctemp2329;
nctempchar1* nctemp2326= nctemp2328;
int nctemp2330=LibeStrcmp(nctemp2321,nctemp2326);
int nctemp2318 = (nctemp2330 ==1);
if(nctemp2318)
{
struct tree* nctemp2333= p;
int nctemp2335=CodeParallelstmnt(nctemp2333);
}
struct tree* nctemp2341= p;
nctempchar1* nctemp2343=PtreeGetname(nctemp2341);
nctempchar1* nctemp2339= nctemp2343;
struct nctempchar1 *nctemp2346;
struct nctempchar1 nctemp2347 = {{ 3}, (char*)"if"};
nctemp2346=&nctemp2347;
nctempchar1* nctemp2344= nctemp2346;
int nctemp2348=LibeStrcmp(nctemp2339,nctemp2344);
int nctemp2336 = (nctemp2348 ==1);
if(nctemp2336)
{
struct tree* nctemp2351= p;
int nctemp2353=CodeIfstmnt(nctemp2351);
}
struct tree* nctemp2359= p;
nctempchar1* nctemp2361=PtreeGetname(nctemp2359);
nctempchar1* nctemp2357= nctemp2361;
struct nctempchar1 *nctemp2364;
struct nctempchar1 nctemp2365 = {{ 7}, (char*)"return"};
nctemp2364=&nctemp2365;
nctempchar1* nctemp2362= nctemp2364;
int nctemp2366=LibeStrcmp(nctemp2357,nctemp2362);
int nctemp2354 = (nctemp2366 ==1);
if(nctemp2354)
{
struct tree* nctemp2369= p;
int nctemp2371=CodeReturnstmnt(nctemp2369);
}
struct tree* nctemp2376= p;
struct tree* nctemp2378=PtreeMvsister(nctemp2376);
p =nctemp2378;
}
int nctemp2379 = (p !=0);
nctemp2252=nctemp2379;}struct tree* nctemp2384= sp;
struct nctempchar1 *nctemp2388;
struct nctempchar1 nctemp2389 = {{ 4}, (char*)"}\n"};
nctemp2388=&nctemp2389;
nctempchar1* nctemp2386= nctemp2388;
int nctemp2390=CodeEs(nctemp2384,nctemp2386);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp2397= p;
struct nctempchar1 *nctemp2401;
struct nctempchar1 nctemp2402 = {{ 4}, (char*)"{\n"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
int nctemp2403=CodeEs(nctemp2397,nctemp2399);
struct tree* nctemp2409= p;
nctempchar1* nctemp2411=PtreeGetname(nctemp2409);
nctempchar1* nctemp2407= nctemp2411;
struct nctempchar1 *nctemp2414;
struct nctempchar1 nctemp2415 = {{ 10}, (char*)"compstmnt"};
nctemp2414=&nctemp2415;
nctempchar1* nctemp2412= nctemp2414;
int nctemp2416=LibeStrcmp(nctemp2407,nctemp2412);
int nctemp2404 = (nctemp2416 ==1);
if(nctemp2404)
{
struct tree* nctemp2422= p;
struct tree* nctemp2424=PtreeMvchild(nctemp2422);
p =nctemp2424;
struct tree* nctemp2426= p;
struct symbol* nctemp2430=SymGetltp();
struct symbol* nctemp2428= nctemp2430;
int nctemp2431=CodeDeclarations(nctemp2426,nctemp2428);
struct tree* nctemp2437= p;
nctempchar1* nctemp2439=PtreeGetname(nctemp2437);
nctempchar1* nctemp2435= nctemp2439;
struct nctempchar1 *nctemp2442;
struct nctempchar1 nctemp2443 = {{ 13}, (char*)"declarations"};
nctemp2442=&nctemp2443;
nctempchar1* nctemp2440= nctemp2442;
int nctemp2444=LibeStrcmp(nctemp2435,nctemp2440);
int nctemp2432 = (nctemp2444 ==1);
if(nctemp2432)
{
struct tree* nctemp2450= p;
struct tree* nctemp2452=PtreeMvsister(nctemp2450);
p =nctemp2452;
}
}
int nctemp2453 = (p !=0);
int nctemp2457=nctemp2453;
while(nctemp2457)
{{
struct tree* nctemp2463= p;
nctempchar1* nctemp2465=PtreeGetname(nctemp2463);
nctempchar1* nctemp2461= nctemp2465;
struct nctempchar1 *nctemp2468;
struct nctempchar1 nctemp2469 = {{ 10}, (char*)"compstmnt"};
nctemp2468=&nctemp2469;
nctempchar1* nctemp2466= nctemp2468;
int nctemp2470=LibeStrcmp(nctemp2461,nctemp2466);
int nctemp2458 = (nctemp2470 ==1);
if(nctemp2458)
{
struct tree* nctemp2473= p;
int nctemp2475=CodeCompstmnt(nctemp2473);
}
struct tree* nctemp2481= p;
nctempchar1* nctemp2483=PtreeGetname(nctemp2481);
nctempchar1* nctemp2479= nctemp2483;
struct nctempchar1 *nctemp2486;
struct nctempchar1 nctemp2487 = {{ 5}, (char*)"expr"};
nctemp2486=&nctemp2487;
nctempchar1* nctemp2484= nctemp2486;
int nctemp2488=LibeStrcmp(nctemp2479,nctemp2484);
int nctemp2476 = (nctemp2488 ==1);
if(nctemp2476)
{
struct tree* nctemp2491= p;
nctempchar1* nctemp2493=CodeExpr(nctemp2491);
}
struct tree* nctemp2499= p;
nctempchar1* nctemp2501=PtreeGetname(nctemp2499);
nctempchar1* nctemp2497= nctemp2501;
struct nctempchar1 *nctemp2504;
struct nctempchar1 nctemp2505 = {{ 6}, (char*)"while"};
nctemp2504=&nctemp2505;
nctempchar1* nctemp2502= nctemp2504;
int nctemp2506=LibeStrcmp(nctemp2497,nctemp2502);
int nctemp2494 = (nctemp2506 ==1);
if(nctemp2494)
{
struct tree* nctemp2509= p;
int nctemp2511=CodeWhilestmnt(nctemp2509);
}
struct tree* nctemp2517= p;
nctempchar1* nctemp2519=PtreeGetname(nctemp2517);
nctempchar1* nctemp2515= nctemp2519;
struct nctempchar1 *nctemp2522;
struct nctempchar1 nctemp2523 = {{ 4}, (char*)"for"};
nctemp2522=&nctemp2523;
nctempchar1* nctemp2520= nctemp2522;
int nctemp2524=LibeStrcmp(nctemp2515,nctemp2520);
int nctemp2512 = (nctemp2524 ==1);
if(nctemp2512)
{
struct tree* nctemp2527= p;
int nctemp2529=CodeForstmnt(nctemp2527);
}
struct tree* nctemp2535= p;
nctempchar1* nctemp2537=PtreeGetname(nctemp2535);
nctempchar1* nctemp2533= nctemp2537;
struct nctempchar1 *nctemp2540;
struct nctempchar1 nctemp2541 = {{ 9}, (char*)"parallel"};
nctemp2540=&nctemp2541;
nctempchar1* nctemp2538= nctemp2540;
int nctemp2542=LibeStrcmp(nctemp2533,nctemp2538);
int nctemp2530 = (nctemp2542 ==1);
if(nctemp2530)
{
struct tree* nctemp2545= p;
int nctemp2547=CodeParallelstmnt(nctemp2545);
}
struct tree* nctemp2553= p;
nctempchar1* nctemp2555=PtreeGetname(nctemp2553);
nctempchar1* nctemp2551= nctemp2555;
struct nctempchar1 *nctemp2558;
struct nctempchar1 nctemp2559 = {{ 3}, (char*)"if"};
nctemp2558=&nctemp2559;
nctempchar1* nctemp2556= nctemp2558;
int nctemp2560=LibeStrcmp(nctemp2551,nctemp2556);
int nctemp2548 = (nctemp2560 ==1);
if(nctemp2548)
{
struct tree* nctemp2563= p;
int nctemp2565=CodeIfstmnt(nctemp2563);
}
struct tree* nctemp2571= p;
nctempchar1* nctemp2573=PtreeGetname(nctemp2571);
nctempchar1* nctemp2569= nctemp2573;
struct nctempchar1 *nctemp2576;
struct nctempchar1 nctemp2577 = {{ 7}, (char*)"return"};
nctemp2576=&nctemp2577;
nctempchar1* nctemp2574= nctemp2576;
int nctemp2578=LibeStrcmp(nctemp2569,nctemp2574);
int nctemp2566 = (nctemp2578 ==1);
if(nctemp2566)
{
struct tree* nctemp2581= p;
int nctemp2583=CodeReturnstmnt(nctemp2581);
}
struct tree* nctemp2588= p;
struct tree* nctemp2590=PtreeMvsister(nctemp2588);
p =nctemp2590;
}
int nctemp2591 = (p !=0);
nctemp2457=nctemp2591;}struct tree* nctemp2596= sp;
struct nctempchar1 *nctemp2600;
struct nctempchar1 nctemp2601 = {{ 4}, (char*)"}\n"};
nctemp2600=&nctemp2601;
nctempchar1* nctemp2598= nctemp2600;
int nctemp2602=CodeEs(nctemp2596,nctemp2598);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp2608= p;
struct tree* nctemp2610=PtreeMvchild(nctemp2608);
sp =nctemp2610;
struct tree* nctemp2616= sp;
nctempchar1* nctemp2618=CodeBinexpr(nctemp2616);
rval=nctemp2618;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp2625= p;
struct tree* nctemp2627=PtreeMvchild(nctemp2625);
p =nctemp2627;
sp =p;
struct tree* nctemp2637= sp;
nctempchar1* nctemp2639=CodeExpr(nctemp2637);
cond=nctemp2639;
struct tree* nctemp2647= sp;
nctempchar1* nctemp2649=PtreeGetype(nctemp2647);
nctempchar1* nctemp2645= nctemp2649;
nctempchar1* nctemp2650=CodeNewtemp(nctemp2645);
tmp=nctemp2650;
struct tree* nctemp2652= p;
struct tree* nctemp2656= sp;
nctempchar1* nctemp2658=PtreeGetype(nctemp2656);
nctempchar1* nctemp2654= nctemp2658;
int nctemp2659=CodeEs(nctemp2652,nctemp2654);
struct tree* nctemp2661= p;
struct nctempchar1 *nctemp2665;
struct nctempchar1 nctemp2666 = {{ 2}, (char*)" "};
nctemp2665=&nctemp2666;
nctempchar1* nctemp2663= nctemp2665;
int nctemp2667=CodeEs(nctemp2661,nctemp2663);
struct tree* nctemp2669= p;
nctempchar1* nctemp2671= tmp;
int nctemp2674=CodeEs(nctemp2669,nctemp2671);
struct tree* nctemp2676= p;
struct nctempchar1 *nctemp2680;
struct nctempchar1 nctemp2681 = {{ 2}, (char*)"="};
nctemp2680=&nctemp2681;
nctempchar1* nctemp2678= nctemp2680;
int nctemp2682=CodeEs(nctemp2676,nctemp2678);
struct tree* nctemp2684= p;
nctempchar1* nctemp2686= cond;
int nctemp2689=CodeEs(nctemp2684,nctemp2686);
struct tree* nctemp2691= p;
struct nctempchar1 *nctemp2695;
struct nctempchar1 nctemp2696 = {{ 4}, (char*)";\n"};
nctemp2695=&nctemp2696;
nctempchar1* nctemp2693= nctemp2695;
int nctemp2697=CodeEs(nctemp2691,nctemp2693);
struct tree* nctemp2699= p;
struct nctempchar1 *nctemp2703;
struct nctempchar1 nctemp2704 = {{ 7}, (char*)"while("};
nctemp2703=&nctemp2704;
nctempchar1* nctemp2701= nctemp2703;
int nctemp2705=CodeEs(nctemp2699,nctemp2701);
struct tree* nctemp2707= p;
nctempchar1* nctemp2709= tmp;
int nctemp2712=CodeEs(nctemp2707,nctemp2709);
struct tree* nctemp2714= p;
struct nctempchar1 *nctemp2718;
struct nctempchar1 nctemp2719 = {{ 4}, (char*)")\n"};
nctemp2718=&nctemp2719;
nctempchar1* nctemp2716= nctemp2718;
int nctemp2720=CodeEs(nctemp2714,nctemp2716);
struct tree* nctemp2722= p;
struct nctempchar1 *nctemp2726;
struct nctempchar1 nctemp2727 = {{ 2}, (char*)"{"};
nctemp2726=&nctemp2727;
nctempchar1* nctemp2724= nctemp2726;
int nctemp2728=CodeEs(nctemp2722,nctemp2724);
struct tree* nctemp2733= p;
struct tree* nctemp2735=PtreeMvsister(nctemp2733);
p =nctemp2735;
struct tree* nctemp2737= p;
int nctemp2739=CodeStmnt(nctemp2737);
struct tree* nctemp2745= sp;
nctempchar1* nctemp2747=CodeExpr(nctemp2745);
cond2=nctemp2747;
struct tree* nctemp2749= p;
nctempchar1* nctemp2751= tmp;
int nctemp2754=CodeEs(nctemp2749,nctemp2751);
struct tree* nctemp2756= p;
struct nctempchar1 *nctemp2760;
struct nctempchar1 nctemp2761 = {{ 2}, (char*)"="};
nctemp2760=&nctemp2761;
nctempchar1* nctemp2758= nctemp2760;
int nctemp2762=CodeEs(nctemp2756,nctemp2758);
struct tree* nctemp2764= p;
nctempchar1* nctemp2766= cond2;
int nctemp2769=CodeEs(nctemp2764,nctemp2766);
struct tree* nctemp2771= p;
struct nctempchar1 *nctemp2775;
struct nctempchar1 nctemp2776 = {{ 2}, (char*)";"};
nctemp2775=&nctemp2776;
nctempchar1* nctemp2773= nctemp2775;
int nctemp2777=CodeEs(nctemp2771,nctemp2773);
struct tree* nctemp2779= p;
struct nctempchar1 *nctemp2783;
struct nctempchar1 nctemp2784 = {{ 2}, (char*)"}"};
nctemp2783=&nctemp2784;
nctempchar1* nctemp2781= nctemp2783;
int nctemp2785=CodeEs(nctemp2779,nctemp2781);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp2791= p;
struct tree* nctemp2793=PtreeMvchild(nctemp2791);
p =nctemp2793;
struct tree* nctemp2795= p;
nctempchar1* nctemp2797=CodeExpr(nctemp2795);
struct tree* nctemp2802= p;
struct tree* nctemp2804=PtreeMvsister(nctemp2802);
p =nctemp2804;
np =p;
struct tree* nctemp2814= p;
nctempchar1* nctemp2816=CodeExpr(nctemp2814);
cond=nctemp2816;
struct tree* nctemp2818= p;
struct nctempchar1 *nctemp2822;
struct nctempchar1 nctemp2823 = {{ 7}, (char*)"while("};
nctemp2822=&nctemp2823;
nctempchar1* nctemp2820= nctemp2822;
int nctemp2824=CodeEs(nctemp2818,nctemp2820);
struct tree* nctemp2826= p;
nctempchar1* nctemp2828= cond;
int nctemp2831=CodeEs(nctemp2826,nctemp2828);
struct tree* nctemp2833= p;
struct nctempchar1 *nctemp2837;
struct nctempchar1 nctemp2838 = {{ 5}, (char*)"){\n"};
nctemp2837=&nctemp2838;
nctempchar1* nctemp2835= nctemp2837;
int nctemp2839=CodeEs(nctemp2833,nctemp2835);
struct tree* nctemp2844= p;
struct tree* nctemp2846=PtreeMvsister(nctemp2844);
p =nctemp2846;
sp =p;
struct tree* nctemp2855= p;
struct tree* nctemp2857=PtreeMvsister(nctemp2855);
p =nctemp2857;
struct tree* nctemp2859= p;
int nctemp2861=CodeStmnt(nctemp2859);
struct tree* nctemp2863= sp;
nctempchar1* nctemp2865=CodeExpr(nctemp2863);
struct tree* nctemp2871= np;
nctempchar1* nctemp2873=CodeExpr(nctemp2871);
tmp=nctemp2873;
struct tree* nctemp2875= p;
nctempchar1* nctemp2877= cond;
int nctemp2880=CodeEs(nctemp2875,nctemp2877);
struct tree* nctemp2882= p;
struct nctempchar1 *nctemp2886;
struct nctempchar1 nctemp2887 = {{ 2}, (char*)"="};
nctemp2886=&nctemp2887;
nctempchar1* nctemp2884= nctemp2886;
int nctemp2888=CodeEs(nctemp2882,nctemp2884);
struct tree* nctemp2890= p;
nctempchar1* nctemp2892= tmp;
int nctemp2895=CodeEs(nctemp2890,nctemp2892);
struct tree* nctemp2897= p;
struct nctempchar1 *nctemp2901;
struct nctempchar1 nctemp2902 = {{ 4}, (char*)";\n"};
nctemp2901=&nctemp2902;
nctempchar1* nctemp2899= nctemp2901;
int nctemp2903=CodeEs(nctemp2897,nctemp2899);
struct tree* nctemp2905= p;
struct nctempchar1 *nctemp2909;
struct nctempchar1 nctemp2910 = {{ 4}, (char*)"}\n"};
nctemp2909=&nctemp2910;
nctempchar1* nctemp2907= nctemp2909;
int nctemp2911=CodeEs(nctemp2905,nctemp2907);
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp2917= p;
struct tree* nctemp2919=PtreeMvchild(nctemp2917);
p =nctemp2919;
struct tree* nctemp2925= p;
nctempchar1* nctemp2927=CodeExpr(nctemp2925);
cond=nctemp2927;
struct tree* nctemp2929= p;
struct nctempchar1 *nctemp2933;
struct nctempchar1 nctemp2934 = {{ 4}, (char*)"if("};
nctemp2933=&nctemp2934;
nctempchar1* nctemp2931= nctemp2933;
int nctemp2935=CodeEs(nctemp2929,nctemp2931);
struct tree* nctemp2937= p;
nctempchar1* nctemp2939= cond;
int nctemp2942=CodeEs(nctemp2937,nctemp2939);
struct tree* nctemp2944= p;
struct nctempchar1 *nctemp2948;
struct nctempchar1 nctemp2949 = {{ 4}, (char*)")\n"};
nctemp2948=&nctemp2949;
nctempchar1* nctemp2946= nctemp2948;
int nctemp2950=CodeEs(nctemp2944,nctemp2946);
struct tree* nctemp2955= p;
struct tree* nctemp2957=PtreeMvsister(nctemp2955);
p =nctemp2957;
struct tree* nctemp2959= p;
int nctemp2961=CodeStmnt(nctemp2959);
struct tree* nctemp2969= p;
struct tree* nctemp2971=PtreeMvsister(nctemp2969);
p =nctemp2971;
int nctemp2962 = (p !=0);
if(nctemp2962)
{
struct tree* nctemp2978= p;
nctempchar1* nctemp2980=PtreeGetname(nctemp2978);
nctempchar1* nctemp2976= nctemp2980;
struct nctempchar1 *nctemp2983;
struct nctempchar1 nctemp2984 = {{ 5}, (char*)"else"};
nctemp2983=&nctemp2984;
nctempchar1* nctemp2981= nctemp2983;
int nctemp2985=LibeStrcmp(nctemp2976,nctemp2981);
int nctemp2973 = (nctemp2985 ==1);
if(nctemp2973)
{
struct tree* nctemp2991= p;
struct tree* nctemp2993=PtreeMvchild(nctemp2991);
p =nctemp2993;
struct tree* nctemp2995= p;
struct nctempchar1 *nctemp2999;
struct nctempchar1 nctemp3000 = {{ 5}, (char*)"else"};
nctemp2999=&nctemp3000;
nctempchar1* nctemp2997= nctemp2999;
int nctemp3001=CodeEs(nctemp2995,nctemp2997);
struct tree* nctemp3003= p;
int nctemp3005=CodeStmnt(nctemp3003);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp3011= p;
struct tree* nctemp3013=PtreeMvchild(nctemp3011);
np =nctemp3013;
struct tree* nctemp3019= np;
nctempchar1* nctemp3021=CodeExpr(nctemp3019);
rval=nctemp3021;
struct tree* nctemp3023= np;
struct nctempchar1 *nctemp3027;
struct nctempchar1 nctemp3028 = {{ 8}, (char*)"return "};
nctemp3027=&nctemp3028;
nctempchar1* nctemp3025= nctemp3027;
int nctemp3029=CodeEs(nctemp3023,nctemp3025);
struct tree* nctemp3031= np;
nctempchar1* nctemp3033= rval;
int nctemp3036=CodeEs(nctemp3031,nctemp3033);
struct tree* nctemp3038= np;
struct nctempchar1 *nctemp3042;
struct nctempchar1 nctemp3043 = {{ 4}, (char*)";\n"};
nctemp3042=&nctemp3043;
nctempchar1* nctemp3040= nctemp3042;
int nctemp3044=CodeEs(nctemp3038,nctemp3040);
return 1;
}
nctempchar1 * CodeBinexpr (struct tree* p)
{
nctempchar1 *lval;
nctempchar1 *rval;
nctempchar1 *tempr;
nctempchar1 *tempi;
nctempchar1 *type;
struct tree* np;
struct tree* sp;
struct tree* nctemp3051= p;
nctempchar1* nctemp3053=PtreeGetname(nctemp3051);
nctempchar1* nctemp3049= nctemp3053;
struct nctempchar1 *nctemp3056;
struct nctempchar1 nctemp3057 = {{ 8}, (char*)"binexpr"};
nctemp3056=&nctemp3057;
nctempchar1* nctemp3054= nctemp3056;
int nctemp3058=LibeStrcmp(nctemp3049,nctemp3054);
int nctemp3046 = (nctemp3058 ==1);
if(nctemp3046)
{
struct tree* nctemp3065= p;
nctempchar1* nctemp3067=PtreeGetype(nctemp3065);
type=nctemp3067;
nctempchar1* nctemp3073= type;
nctempchar1* nctemp3076=CodeNewtemp(nctemp3073);
tempr=nctemp3076;
nctempchar1* nctemp3082= type;
nctempchar1* nctemp3085=CodeNewtemp(nctemp3082);
tempi=nctemp3085;
struct tree* nctemp3090= p;
struct tree* nctemp3092=PtreeMvchild(nctemp3090);
np =nctemp3092;
struct tree* nctemp3098= np;
nctempchar1* nctemp3100=CodeUnexpr(nctemp3098);
lval=nctemp3100;
struct tree* nctemp3108= np;
struct tree* nctemp3110=PtreeMvsister(nctemp3108);
struct tree* nctemp3106= nctemp3110;
nctempchar1* nctemp3111=CodeUnexpr(nctemp3106);
rval=nctemp3111;
struct tree* nctemp3126= p;
nctempchar1* nctemp3128=PtreeGetdef(nctemp3126);
nctempchar1* nctemp3124= nctemp3128;
struct nctempchar1 *nctemp3131;
struct nctempchar1 nctemp3132 = {{ 2}, (char*)"+"};
nctemp3131=&nctemp3132;
nctempchar1* nctemp3129= nctemp3131;
int nctemp3133=LibeStrcmp(nctemp3124,nctemp3129);
int nctemp3121 = (nctemp3133 ==1);
struct tree* nctemp3141= p;
nctempchar1* nctemp3143=PtreeGetdef(nctemp3141);
nctempchar1* nctemp3139= nctemp3143;
struct nctempchar1 *nctemp3146;
struct nctempchar1 nctemp3147 = {{ 2}, (char*)"-"};
nctemp3146=&nctemp3147;
nctempchar1* nctemp3144= nctemp3146;
int nctemp3148=LibeStrcmp(nctemp3139,nctemp3144);
int nctemp3136 = (nctemp3148 ==1);
int nctemp3118 = (nctemp3121 || nctemp3136);
struct tree* nctemp3156= p;
nctempchar1* nctemp3158=PtreeGetdef(nctemp3156);
nctempchar1* nctemp3154= nctemp3158;
struct nctempchar1 *nctemp3161;
struct nctempchar1 nctemp3162 = {{ 2}, (char*)"*"};
nctemp3161=&nctemp3162;
nctempchar1* nctemp3159= nctemp3161;
int nctemp3163=LibeStrcmp(nctemp3154,nctemp3159);
int nctemp3151 = (nctemp3163 ==1);
int nctemp3115 = (nctemp3118 || nctemp3151);
struct tree* nctemp3171= p;
nctempchar1* nctemp3173=PtreeGetdef(nctemp3171);
nctempchar1* nctemp3169= nctemp3173;
struct nctempchar1 *nctemp3176;
struct nctempchar1 nctemp3177 = {{ 2}, (char*)"/"};
nctemp3176=&nctemp3177;
nctempchar1* nctemp3174= nctemp3176;
int nctemp3178=LibeStrcmp(nctemp3169,nctemp3174);
int nctemp3166 = (nctemp3178 ==1);
int nctemp3112 = (nctemp3115 || nctemp3166);
if(nctemp3112)
{
struct tree* nctemp3181= p;
nctempchar1* nctemp3183= lval;
nctempchar1* nctemp3186= rval;
nctempchar1* nctemp3189=CodeAddexpr(nctemp3181,nctemp3183,nctemp3186);
return nctemp3189;
}
else{
struct tree* nctemp3195= p;
nctempchar1* nctemp3197=PtreeGetdef(nctemp3195);
nctempchar1* nctemp3193= nctemp3197;
struct nctempchar1 *nctemp3200;
struct nctempchar1 nctemp3201 = {{ 2}, (char*)"="};
nctemp3200=&nctemp3201;
nctempchar1* nctemp3198= nctemp3200;
int nctemp3202=LibeStrcmp(nctemp3193,nctemp3198);
int nctemp3190 = (nctemp3202 ==1);
if(nctemp3190)
{
struct tree* nctemp3215= p;
nctempchar1* nctemp3217=PtreeGetype(nctemp3215);
nctempchar1* nctemp3213= nctemp3217;
struct nctempchar1 *nctemp3220;
struct nctempchar1 nctemp3221 = {{ 8}, (char*)"complex"};
nctemp3220=&nctemp3221;
nctempchar1* nctemp3218= nctemp3220;
int nctemp3222=LibeStrcmp(nctemp3213,nctemp3218);
int nctemp3210 = (nctemp3222 ==1);
struct tree* nctemp3230= p;
nctempchar1* nctemp3232=PtreeGetref(nctemp3230);
nctempchar1* nctemp3228= nctemp3232;
struct nctempchar1 *nctemp3235;
struct nctempchar1 nctemp3236 = {{ 5}, (char*)"aref"};
nctemp3235=&nctemp3236;
nctempchar1* nctemp3233= nctemp3235;
int nctemp3237=LibeStrcmp(nctemp3228,nctemp3233);
int nctemp3225 = (nctemp3237 ==0);
int nctemp3207 = (nctemp3210 && nctemp3225);
struct tree* nctemp3245= p;
nctempchar1* nctemp3247=PtreeGetref(nctemp3245);
nctempchar1* nctemp3243= nctemp3247;
struct nctempchar1 *nctemp3250;
struct nctempchar1 nctemp3251 = {{ 5}, (char*)"sref"};
nctemp3250=&nctemp3251;
nctempchar1* nctemp3248= nctemp3250;
int nctemp3252=LibeStrcmp(nctemp3243,nctemp3248);
int nctemp3240 = (nctemp3252 ==0);
int nctemp3204 = (nctemp3207 && nctemp3240);
if(nctemp3204)
{
struct tree* nctemp3255= p;
nctempchar1* nctemp3257= lval;
int nctemp3260=CodeEs(nctemp3255,nctemp3257);
struct tree* nctemp3262= p;
struct nctempchar1 *nctemp3266;
struct nctempchar1 nctemp3267 = {{ 4}, (char*)".r "};
nctemp3266=&nctemp3267;
nctempchar1* nctemp3264= nctemp3266;
int nctemp3268=CodeEs(nctemp3262,nctemp3264);
struct tree* nctemp3270= p;
struct nctempchar1 *nctemp3274;
struct nctempchar1 nctemp3275 = {{ 2}, (char*)"="};
nctemp3274=&nctemp3275;
nctempchar1* nctemp3272= nctemp3274;
int nctemp3276=CodeEs(nctemp3270,nctemp3272);
struct tree* nctemp3278= p;
nctempchar1* nctemp3280= rval;
int nctemp3283=CodeEs(nctemp3278,nctemp3280);
struct tree* nctemp3285= p;
struct nctempchar1 *nctemp3289;
struct nctempchar1 nctemp3290 = {{ 3}, (char*)".r"};
nctemp3289=&nctemp3290;
nctempchar1* nctemp3287= nctemp3289;
int nctemp3291=CodeEs(nctemp3285,nctemp3287);
struct tree* nctemp3293= p;
struct nctempchar1 *nctemp3297;
struct nctempchar1 nctemp3298 = {{ 4}, (char*)";\n"};
nctemp3297=&nctemp3298;
nctempchar1* nctemp3295= nctemp3297;
int nctemp3299=CodeEs(nctemp3293,nctemp3295);
struct tree* nctemp3301= p;
nctempchar1* nctemp3303= lval;
int nctemp3306=CodeEs(nctemp3301,nctemp3303);
struct tree* nctemp3308= p;
struct nctempchar1 *nctemp3312;
struct nctempchar1 nctemp3313 = {{ 3}, (char*)".i"};
nctemp3312=&nctemp3313;
nctempchar1* nctemp3310= nctemp3312;
int nctemp3314=CodeEs(nctemp3308,nctemp3310);
struct tree* nctemp3316= p;
struct nctempchar1 *nctemp3320;
struct nctempchar1 nctemp3321 = {{ 2}, (char*)"="};
nctemp3320=&nctemp3321;
nctempchar1* nctemp3318= nctemp3320;
int nctemp3322=CodeEs(nctemp3316,nctemp3318);
struct tree* nctemp3324= p;
nctempchar1* nctemp3326= rval;
int nctemp3329=CodeEs(nctemp3324,nctemp3326);
struct tree* nctemp3331= p;
struct nctempchar1 *nctemp3335;
struct nctempchar1 nctemp3336 = {{ 3}, (char*)".i"};
nctemp3335=&nctemp3336;
nctempchar1* nctemp3333= nctemp3335;
int nctemp3337=CodeEs(nctemp3331,nctemp3333);
struct tree* nctemp3339= p;
struct nctempchar1 *nctemp3343;
struct nctempchar1 nctemp3344 = {{ 4}, (char*)";\n"};
nctemp3343=&nctemp3344;
nctempchar1* nctemp3341= nctemp3343;
int nctemp3345=CodeEs(nctemp3339,nctemp3341);
return lval;
}
else{
struct tree* nctemp3353= np;
nctempchar1* nctemp3355=PtreeGetref(nctemp3353);
nctempchar1* nctemp3351= nctemp3355;
struct nctempchar1 *nctemp3358;
struct nctempchar1 nctemp3359 = {{ 5}, (char*)"aref"};
nctemp3358=&nctemp3359;
nctempchar1* nctemp3356= nctemp3358;
int nctemp3360=LibeStrcmp(nctemp3351,nctemp3356);
int nctemp3348 = (nctemp3360 ==1);
if(nctemp3348)
{
struct tree* nctemp3369= np;
struct tree* nctemp3371=PtreeMvsister(nctemp3369);
struct tree* nctemp3367= nctemp3371;
nctempchar1* nctemp3372=PtreeGetname(nctemp3367);
nctempchar1* nctemp3365= nctemp3372;
struct nctempchar1 *nctemp3375;
struct nctempchar1 nctemp3376 = {{ 10}, (char*)"iconstant"};
nctemp3375=&nctemp3376;
nctempchar1* nctemp3373= nctemp3375;
int nctemp3377=LibeStrcmp(nctemp3365,nctemp3373);
struct tree* nctemp3383= np;
struct tree* nctemp3385=PtreeMvsister(nctemp3383);
struct tree* nctemp3381= nctemp3385;
nctempchar1* nctemp3386=PtreeGetdef(nctemp3381);
nctempchar1* nctemp3379= nctemp3386;
struct nctempchar1 *nctemp3389;
struct nctempchar1 nctemp3390 = {{ 2}, (char*)"0"};
nctemp3389=&nctemp3390;
nctempchar1* nctemp3387= nctemp3389;
int nctemp3391=LibeStrcmp(nctemp3379,nctemp3387);
int nctemp3362 = (nctemp3377 && nctemp3391);
if(nctemp3362)
{
struct tree* nctemp3393= p;
nctempchar1* nctemp3395= lval;
int nctemp3398=CodeEs(nctemp3393,nctemp3395);
struct tree* nctemp3400= p;
struct nctempchar1 *nctemp3404;
struct nctempchar1 nctemp3405 = {{ 3}, (char*)"=("};
nctemp3404=&nctemp3405;
nctempchar1* nctemp3402= nctemp3404;
int nctemp3406=CodeEs(nctemp3400,nctemp3402);
struct tree* nctemp3408= p;
nctempchar1* nctemp3410= rval;
int nctemp3413=CodeEs(nctemp3408,nctemp3410);
struct tree* nctemp3415= p;
struct nctempchar1 *nctemp3419;
struct nctempchar1 nctemp3420 = {{ 5}, (char*)");\n"};
nctemp3419=&nctemp3420;
nctempchar1* nctemp3417= nctemp3419;
int nctemp3421=CodeEs(nctemp3415,nctemp3417);
return lval;
}
else{
struct tree* nctemp3425= p;
nctempchar1* nctemp3427= lval;
int nctemp3430=CodeEs(nctemp3425,nctemp3427);
struct tree* nctemp3432= p;
struct nctempchar1 *nctemp3436;
struct nctempchar1 nctemp3437 = {{ 2}, (char*)"="};
nctemp3436=&nctemp3437;
nctempchar1* nctemp3434= nctemp3436;
int nctemp3438=CodeEs(nctemp3432,nctemp3434);
struct tree* nctemp3440= p;
nctempchar1* nctemp3442= rval;
int nctemp3445=CodeEs(nctemp3440,nctemp3442);
struct tree* nctemp3447= p;
struct nctempchar1 *nctemp3451;
struct nctempchar1 nctemp3452 = {{ 4}, (char*)";\n"};
nctemp3451=&nctemp3452;
nctempchar1* nctemp3449= nctemp3451;
int nctemp3453=CodeEs(nctemp3447,nctemp3449);
return lval;
}
}
else{
struct tree* nctemp3457= p;
nctempchar1* nctemp3459= lval;
int nctemp3462=CodeEs(nctemp3457,nctemp3459);
struct tree* nctemp3464= p;
struct nctempchar1 *nctemp3468;
struct nctempchar1 nctemp3469 = {{ 2}, (char*)" "};
nctemp3468=&nctemp3469;
nctempchar1* nctemp3466= nctemp3468;
int nctemp3470=CodeEs(nctemp3464,nctemp3466);
struct tree* nctemp3472= p;
struct nctempchar1 *nctemp3476;
struct nctempchar1 nctemp3477 = {{ 2}, (char*)"="};
nctemp3476=&nctemp3477;
nctempchar1* nctemp3474= nctemp3476;
int nctemp3478=CodeEs(nctemp3472,nctemp3474);
struct tree* nctemp3480= p;
nctempchar1* nctemp3482= rval;
int nctemp3485=CodeEs(nctemp3480,nctemp3482);
struct tree* nctemp3487= p;
struct nctempchar1 *nctemp3491;
struct nctempchar1 nctemp3492 = {{ 4}, (char*)";\n"};
nctemp3491=&nctemp3492;
nctempchar1* nctemp3489= nctemp3491;
int nctemp3493=CodeEs(nctemp3487,nctemp3489);
return lval;
}
}
}
else{
struct tree* nctemp3504= p;
nctempchar1* nctemp3506=PtreeGetdef(nctemp3504);
nctempchar1* nctemp3502= nctemp3506;
struct nctempchar1 *nctemp3509;
struct nctempchar1 nctemp3510 = {{ 3}, (char*)"=="};
nctemp3509=&nctemp3510;
nctempchar1* nctemp3507= nctemp3509;
int nctemp3511=LibeStrcmp(nctemp3502,nctemp3507);
int nctemp3499 = (nctemp3511 ==1);
struct tree* nctemp3519= p;
nctempchar1* nctemp3521=PtreeGetdef(nctemp3519);
nctempchar1* nctemp3517= nctemp3521;
struct nctempchar1 *nctemp3524;
struct nctempchar1 nctemp3525 = {{ 3}, (char*)"!="};
nctemp3524=&nctemp3525;
nctempchar1* nctemp3522= nctemp3524;
int nctemp3526=LibeStrcmp(nctemp3517,nctemp3522);
int nctemp3514 = (nctemp3526 ==1);
int nctemp3496 = (nctemp3499 || nctemp3514);
if(nctemp3496)
{
struct tree* nctemp3533= np;
nctempchar1* nctemp3535=PtreeGetref(nctemp3533);
nctempchar1* nctemp3531= nctemp3535;
struct nctempchar1 *nctemp3538;
struct nctempchar1 nctemp3539 = {{ 5}, (char*)"aref"};
nctemp3538=&nctemp3539;
nctempchar1* nctemp3536= nctemp3538;
int nctemp3540=LibeStrcmp(nctemp3531,nctemp3536);
int nctemp3528 = (nctemp3540 ==1);
if(nctemp3528)
{
sp =np;
struct tree* nctemp3553= np;
struct tree* nctemp3555=PtreeMvsister(nctemp3553);
struct tree* nctemp3551= nctemp3555;
nctempchar1* nctemp3556=PtreeGetname(nctemp3551);
nctempchar1* nctemp3549= nctemp3556;
struct nctempchar1 *nctemp3559;
struct nctempchar1 nctemp3560 = {{ 10}, (char*)"iconstant"};
nctemp3559=&nctemp3560;
nctempchar1* nctemp3557= nctemp3559;
int nctemp3561=LibeStrcmp(nctemp3549,nctemp3557);
struct tree* nctemp3567= np;
struct tree* nctemp3569=PtreeMvsister(nctemp3567);
struct tree* nctemp3565= nctemp3569;
nctempchar1* nctemp3570=PtreeGetdef(nctemp3565);
nctempchar1* nctemp3563= nctemp3570;
struct nctempchar1 *nctemp3573;
struct nctempchar1 nctemp3574 = {{ 2}, (char*)"0"};
nctemp3573=&nctemp3574;
nctempchar1* nctemp3571= nctemp3573;
int nctemp3575=LibeStrcmp(nctemp3563,nctemp3571);
int nctemp3546 = (nctemp3561 && nctemp3575);
if(nctemp3546)
{
struct tree* nctemp3577= p;
struct nctempchar1 *nctemp3581;
struct nctempchar1 nctemp3582 = {{ 7}, (char*)"nctemp"};
nctemp3581=&nctemp3582;
nctempchar1* nctemp3579= nctemp3581;
int nctemp3583=CodeEs(nctemp3577,nctemp3579);
struct tree* nctemp3585= p;
struct tree* nctemp3589= sp;
nctempchar1* nctemp3591=PtreeGetype(nctemp3589);
nctempchar1* nctemp3587= nctemp3591;
int nctemp3592=CodeEs(nctemp3585,nctemp3587);
struct tree* nctemp3596= sp;
int nctemp3598=PtreeGetrank(nctemp3596);
int nctemp3594= nctemp3598;
int nctemp3599=CodeEd(nctemp3594);
struct tree* nctemp3601= p;
struct nctempchar1 *nctemp3605;
struct nctempchar1 nctemp3606 = {{ 3}, (char*)" *"};
nctemp3605=&nctemp3606;
nctempchar1* nctemp3603= nctemp3605;
int nctemp3607=CodeEs(nctemp3601,nctemp3603);
struct tree* nctemp3609= p;
nctempchar1* nctemp3611= tempi;
int nctemp3614=CodeEs(nctemp3609,nctemp3611);
struct tree* nctemp3616= p;
struct nctempchar1 *nctemp3620;
struct nctempchar1 nctemp3621 = {{ 3}, (char*)" ="};
nctemp3620=&nctemp3621;
nctempchar1* nctemp3618= nctemp3620;
int nctemp3622=CodeEs(nctemp3616,nctemp3618);
struct tree* nctemp3624= p;
nctempchar1* nctemp3626= lval;
int nctemp3629=CodeEs(nctemp3624,nctemp3626);
struct tree* nctemp3631= p;
struct nctempchar1 *nctemp3635;
struct nctempchar1 nctemp3636 = {{ 4}, (char*)";\n"};
nctemp3635=&nctemp3636;
nctempchar1* nctemp3633= nctemp3635;
int nctemp3637=CodeEs(nctemp3631,nctemp3633);
struct tree* nctemp3639= p;
nctempchar1* nctemp3641= type;
int nctemp3644=CodeEs(nctemp3639,nctemp3641);
struct tree* nctemp3646= p;
struct nctempchar1 *nctemp3650;
struct nctempchar1 nctemp3651 = {{ 2}, (char*)" "};
nctemp3650=&nctemp3651;
nctempchar1* nctemp3648= nctemp3650;
int nctemp3652=CodeEs(nctemp3646,nctemp3648);
struct tree* nctemp3654= p;
nctempchar1* nctemp3656= tempr;
int nctemp3659=CodeEs(nctemp3654,nctemp3656);
struct tree* nctemp3661= p;
struct nctempchar1 *nctemp3665;
struct nctempchar1 nctemp3666 = {{ 4}, (char*)" =("};
nctemp3665=&nctemp3666;
nctempchar1* nctemp3663= nctemp3665;
int nctemp3667=CodeEs(nctemp3661,nctemp3663);
struct tree* nctemp3669= p;
nctempchar1* nctemp3671= tempi;
int nctemp3674=CodeEs(nctemp3669,nctemp3671);
struct tree* nctemp3676= p;
struct tree* nctemp3680= p;
nctempchar1* nctemp3682=PtreeGetdef(nctemp3680);
nctempchar1* nctemp3678= nctemp3682;
int nctemp3683=CodeEs(nctemp3676,nctemp3678);
struct tree* nctemp3685= p;
nctempchar1* nctemp3687= rval;
int nctemp3690=CodeEs(nctemp3685,nctemp3687);
struct tree* nctemp3692= p;
struct nctempchar1 *nctemp3696;
struct nctempchar1 nctemp3697 = {{ 5}, (char*)");\n"};
nctemp3696=&nctemp3697;
nctempchar1* nctemp3694= nctemp3696;
int nctemp3698=CodeEs(nctemp3692,nctemp3694);
return tempr;
}
else{
struct tree* nctemp3702= p;
nctempchar1* nctemp3704= type;
int nctemp3707=CodeEs(nctemp3702,nctemp3704);
struct tree* nctemp3709= p;
struct nctempchar1 *nctemp3713;
struct nctempchar1 nctemp3714 = {{ 2}, (char*)" "};
nctemp3713=&nctemp3714;
nctempchar1* nctemp3711= nctemp3713;
int nctemp3715=CodeEs(nctemp3709,nctemp3711);
struct tree* nctemp3717= p;
nctempchar1* nctemp3719= tempr;
int nctemp3722=CodeEs(nctemp3717,nctemp3719);
struct tree* nctemp3724= p;
struct nctempchar1 *nctemp3728;
struct nctempchar1 nctemp3729 = {{ 5}, (char*)" = ("};
nctemp3728=&nctemp3729;
nctempchar1* nctemp3726= nctemp3728;
int nctemp3730=CodeEs(nctemp3724,nctemp3726);
struct tree* nctemp3732= p;
nctempchar1* nctemp3734= lval;
int nctemp3737=CodeEs(nctemp3732,nctemp3734);
struct tree* nctemp3739= p;
struct tree* nctemp3743= p;
nctempchar1* nctemp3745=PtreeGetdef(nctemp3743);
nctempchar1* nctemp3741= nctemp3745;
int nctemp3746=CodeEs(nctemp3739,nctemp3741);
struct tree* nctemp3748= p;
nctempchar1* nctemp3750= rval;
int nctemp3753=CodeEs(nctemp3748,nctemp3750);
struct tree* nctemp3755= p;
struct nctempchar1 *nctemp3759;
struct nctempchar1 nctemp3760 = {{ 5}, (char*)");\n"};
nctemp3759=&nctemp3760;
nctempchar1* nctemp3757= nctemp3759;
int nctemp3761=CodeEs(nctemp3755,nctemp3757);
return lval;
}
}
else{
struct tree* nctemp3765= p;
nctempchar1* nctemp3767= type;
int nctemp3770=CodeEs(nctemp3765,nctemp3767);
struct tree* nctemp3772= p;
struct nctempchar1 *nctemp3776;
struct nctempchar1 nctemp3777 = {{ 2}, (char*)" "};
nctemp3776=&nctemp3777;
nctempchar1* nctemp3774= nctemp3776;
int nctemp3778=CodeEs(nctemp3772,nctemp3774);
struct tree* nctemp3780= p;
nctempchar1* nctemp3782= tempr;
int nctemp3785=CodeEs(nctemp3780,nctemp3782);
struct tree* nctemp3787= p;
struct nctempchar1 *nctemp3791;
struct nctempchar1 nctemp3792 = {{ 5}, (char*)" = ("};
nctemp3791=&nctemp3792;
nctempchar1* nctemp3789= nctemp3791;
int nctemp3793=CodeEs(nctemp3787,nctemp3789);
struct tree* nctemp3795= p;
nctempchar1* nctemp3797= lval;
int nctemp3800=CodeEs(nctemp3795,nctemp3797);
struct tree* nctemp3802= p;
struct nctempchar1 *nctemp3806;
struct nctempchar1 nctemp3807 = {{ 2}, (char*)" "};
nctemp3806=&nctemp3807;
nctempchar1* nctemp3804= nctemp3806;
int nctemp3808=CodeEs(nctemp3802,nctemp3804);
struct tree* nctemp3810= p;
struct tree* nctemp3814= p;
nctempchar1* nctemp3816=PtreeGetdef(nctemp3814);
nctempchar1* nctemp3812= nctemp3816;
int nctemp3817=CodeEs(nctemp3810,nctemp3812);
struct tree* nctemp3819= p;
nctempchar1* nctemp3821= rval;
int nctemp3824=CodeEs(nctemp3819,nctemp3821);
struct tree* nctemp3826= p;
struct nctempchar1 *nctemp3830;
struct nctempchar1 nctemp3831 = {{ 5}, (char*)");\n"};
nctemp3830=&nctemp3831;
nctempchar1* nctemp3828= nctemp3830;
int nctemp3832=CodeEs(nctemp3826,nctemp3828);
return tempr;
}
}
else{
struct tree* nctemp3836= p;
nctempchar1* nctemp3838= type;
int nctemp3841=CodeEs(nctemp3836,nctemp3838);
struct tree* nctemp3843= p;
struct nctempchar1 *nctemp3847;
struct nctempchar1 nctemp3848 = {{ 2}, (char*)" "};
nctemp3847=&nctemp3848;
nctempchar1* nctemp3845= nctemp3847;
int nctemp3849=CodeEs(nctemp3843,nctemp3845);
struct tree* nctemp3851= p;
nctempchar1* nctemp3853= tempr;
int nctemp3856=CodeEs(nctemp3851,nctemp3853);
struct tree* nctemp3858= p;
struct nctempchar1 *nctemp3862;
struct nctempchar1 nctemp3863 = {{ 5}, (char*)" = ("};
nctemp3862=&nctemp3863;
nctempchar1* nctemp3860= nctemp3862;
int nctemp3864=CodeEs(nctemp3858,nctemp3860);
struct tree* nctemp3866= p;
nctempchar1* nctemp3868= lval;
int nctemp3871=CodeEs(nctemp3866,nctemp3868);
struct tree* nctemp3873= p;
struct nctempchar1 *nctemp3877;
struct nctempchar1 nctemp3878 = {{ 2}, (char*)" "};
nctemp3877=&nctemp3878;
nctempchar1* nctemp3875= nctemp3877;
int nctemp3879=CodeEs(nctemp3873,nctemp3875);
struct tree* nctemp3881= p;
struct tree* nctemp3885= p;
nctempchar1* nctemp3887=PtreeGetdef(nctemp3885);
nctempchar1* nctemp3883= nctemp3887;
int nctemp3888=CodeEs(nctemp3881,nctemp3883);
struct tree* nctemp3890= p;
struct nctempchar1 *nctemp3894;
struct nctempchar1 nctemp3895 = {{ 2}, (char*)" "};
nctemp3894=&nctemp3895;
nctempchar1* nctemp3892= nctemp3894;
int nctemp3896=CodeEs(nctemp3890,nctemp3892);
struct tree* nctemp3898= p;
nctempchar1* nctemp3900= rval;
int nctemp3903=CodeEs(nctemp3898,nctemp3900);
struct tree* nctemp3905= p;
struct nctempchar1 *nctemp3909;
struct nctempchar1 nctemp3910 = {{ 5}, (char*)");\n"};
nctemp3909=&nctemp3910;
nctempchar1* nctemp3907= nctemp3909;
int nctemp3911=CodeEs(nctemp3905,nctemp3907);
return tempr;
}
}
}
}
else{
struct tree* nctemp3915= p;
nctempchar1* nctemp3917=CodeUnexpr(nctemp3915);
return nctemp3917;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp3923= p;
nctempchar1* nctemp3925=PtreeGetype(nctemp3923);
type=nctemp3925;
nctempchar1* nctemp3931= type;
nctempchar1* nctemp3934=CodeNewtemp(nctemp3931);
tempr=nctemp3934;
struct tree* nctemp3940= p;
nctempchar1* nctemp3942=PtreeGetdef(nctemp3940);
opr=nctemp3942;
nctempchar1* nctemp3946= type;
struct nctempchar1 *nctemp3951;
struct nctempchar1 nctemp3952 = {{ 8}, (char*)"complex"};
nctemp3951=&nctemp3952;
nctempchar1* nctemp3949= nctemp3951;
int nctemp3953=LibeStrcmp(nctemp3946,nctemp3949);
int nctemp3943 = (nctemp3953 ==1);
if(nctemp3943)
{
nctempchar1* nctemp3961= opr;
struct nctempchar1 *nctemp3966;
struct nctempchar1 nctemp3967 = {{ 2}, (char*)"+"};
nctemp3966=&nctemp3967;
nctempchar1* nctemp3964= nctemp3966;
int nctemp3968=LibeStrcmp(nctemp3961,nctemp3964);
int nctemp3958 = (nctemp3968 ==1);
nctempchar1* nctemp3974= opr;
struct nctempchar1 *nctemp3979;
struct nctempchar1 nctemp3980 = {{ 2}, (char*)"-"};
nctemp3979=&nctemp3980;
nctempchar1* nctemp3977= nctemp3979;
int nctemp3981=LibeStrcmp(nctemp3974,nctemp3977);
int nctemp3971 = (nctemp3981 ==1);
int nctemp3955 = (nctemp3958 || nctemp3971);
if(nctemp3955)
{
struct tree* nctemp3984= p;
nctempchar1* nctemp3986= type;
int nctemp3989=CodeEs(nctemp3984,nctemp3986);
struct tree* nctemp3991= p;
struct nctempchar1 *nctemp3995;
struct nctempchar1 nctemp3996 = {{ 2}, (char*)" "};
nctemp3995=&nctemp3996;
nctempchar1* nctemp3993= nctemp3995;
int nctemp3997=CodeEs(nctemp3991,nctemp3993);
struct tree* nctemp3999= p;
nctempchar1* nctemp4001= tempr;
int nctemp4004=CodeEs(nctemp3999,nctemp4001);
struct tree* nctemp4006= p;
struct nctempchar1 *nctemp4010;
struct nctempchar1 nctemp4011 = {{ 3}, (char*)".r"};
nctemp4010=&nctemp4011;
nctempchar1* nctemp4008= nctemp4010;
int nctemp4012=CodeEs(nctemp4006,nctemp4008);
struct tree* nctemp4014= p;
struct nctempchar1 *nctemp4018;
struct nctempchar1 nctemp4019 = {{ 4}, (char*)" = "};
nctemp4018=&nctemp4019;
nctempchar1* nctemp4016= nctemp4018;
int nctemp4020=CodeEs(nctemp4014,nctemp4016);
struct tree* nctemp4022= p;
nctempchar1* nctemp4024= lval;
int nctemp4027=CodeEs(nctemp4022,nctemp4024);
struct tree* nctemp4029= p;
struct nctempchar1 *nctemp4033;
struct nctempchar1 nctemp4034 = {{ 3}, (char*)".r"};
nctemp4033=&nctemp4034;
nctempchar1* nctemp4031= nctemp4033;
int nctemp4035=CodeEs(nctemp4029,nctemp4031);
struct tree* nctemp4037= p;
struct nctempchar1 *nctemp4041;
struct nctempchar1 nctemp4042 = {{ 2}, (char*)" "};
nctemp4041=&nctemp4042;
nctempchar1* nctemp4039= nctemp4041;
int nctemp4043=CodeEs(nctemp4037,nctemp4039);
struct tree* nctemp4045= p;
struct tree* nctemp4049= p;
nctempchar1* nctemp4051=PtreeGetdef(nctemp4049);
nctempchar1* nctemp4047= nctemp4051;
int nctemp4052=CodeEs(nctemp4045,nctemp4047);
struct tree* nctemp4054= p;
struct nctempchar1 *nctemp4058;
struct nctempchar1 nctemp4059 = {{ 2}, (char*)" "};
nctemp4058=&nctemp4059;
nctempchar1* nctemp4056= nctemp4058;
int nctemp4060=CodeEs(nctemp4054,nctemp4056);
struct tree* nctemp4062= p;
nctempchar1* nctemp4064= rval;
int nctemp4067=CodeEs(nctemp4062,nctemp4064);
struct tree* nctemp4069= p;
struct nctempchar1 *nctemp4073;
struct nctempchar1 nctemp4074 = {{ 3}, (char*)".r"};
nctemp4073=&nctemp4074;
nctempchar1* nctemp4071= nctemp4073;
int nctemp4075=CodeEs(nctemp4069,nctemp4071);
struct tree* nctemp4077= p;
struct nctempchar1 *nctemp4081;
struct nctempchar1 nctemp4082 = {{ 4}, (char*)";\n"};
nctemp4081=&nctemp4082;
nctempchar1* nctemp4079= nctemp4081;
int nctemp4083=CodeEs(nctemp4077,nctemp4079);
struct tree* nctemp4085= p;
nctempchar1* nctemp4087= type;
int nctemp4090=CodeEs(nctemp4085,nctemp4087);
struct tree* nctemp4092= p;
struct nctempchar1 *nctemp4096;
struct nctempchar1 nctemp4097 = {{ 2}, (char*)" "};
nctemp4096=&nctemp4097;
nctempchar1* nctemp4094= nctemp4096;
int nctemp4098=CodeEs(nctemp4092,nctemp4094);
struct tree* nctemp4100= p;
nctempchar1* nctemp4102= tempr;
int nctemp4105=CodeEs(nctemp4100,nctemp4102);
struct tree* nctemp4107= p;
struct nctempchar1 *nctemp4111;
struct nctempchar1 nctemp4112 = {{ 3}, (char*)".i"};
nctemp4111=&nctemp4112;
nctempchar1* nctemp4109= nctemp4111;
int nctemp4113=CodeEs(nctemp4107,nctemp4109);
struct tree* nctemp4115= p;
struct nctempchar1 *nctemp4119;
struct nctempchar1 nctemp4120 = {{ 4}, (char*)" = "};
nctemp4119=&nctemp4120;
nctempchar1* nctemp4117= nctemp4119;
int nctemp4121=CodeEs(nctemp4115,nctemp4117);
struct tree* nctemp4123= p;
nctempchar1* nctemp4125= lval;
int nctemp4128=CodeEs(nctemp4123,nctemp4125);
struct tree* nctemp4130= p;
struct nctempchar1 *nctemp4134;
struct nctempchar1 nctemp4135 = {{ 3}, (char*)".i"};
nctemp4134=&nctemp4135;
nctempchar1* nctemp4132= nctemp4134;
int nctemp4136=CodeEs(nctemp4130,nctemp4132);
struct tree* nctemp4138= p;
struct nctempchar1 *nctemp4142;
struct nctempchar1 nctemp4143 = {{ 2}, (char*)" "};
nctemp4142=&nctemp4143;
nctempchar1* nctemp4140= nctemp4142;
int nctemp4144=CodeEs(nctemp4138,nctemp4140);
struct tree* nctemp4146= p;
struct tree* nctemp4150= p;
nctempchar1* nctemp4152=PtreeGetdef(nctemp4150);
nctempchar1* nctemp4148= nctemp4152;
int nctemp4153=CodeEs(nctemp4146,nctemp4148);
struct tree* nctemp4155= p;
struct nctempchar1 *nctemp4159;
struct nctempchar1 nctemp4160 = {{ 2}, (char*)" "};
nctemp4159=&nctemp4160;
nctempchar1* nctemp4157= nctemp4159;
int nctemp4161=CodeEs(nctemp4155,nctemp4157);
struct tree* nctemp4163= p;
nctempchar1* nctemp4165= rval;
int nctemp4168=CodeEs(nctemp4163,nctemp4165);
struct tree* nctemp4170= p;
struct nctempchar1 *nctemp4174;
struct nctempchar1 nctemp4175 = {{ 3}, (char*)".i"};
nctemp4174=&nctemp4175;
nctempchar1* nctemp4172= nctemp4174;
int nctemp4176=CodeEs(nctemp4170,nctemp4172);
struct tree* nctemp4178= p;
struct nctempchar1 *nctemp4182;
struct nctempchar1 nctemp4183 = {{ 4}, (char*)";\n"};
nctemp4182=&nctemp4183;
nctempchar1* nctemp4180= nctemp4182;
int nctemp4184=CodeEs(nctemp4178,nctemp4180);
}
else{
nctempchar1* nctemp4188= opr;
struct nctempchar1 *nctemp4193;
struct nctempchar1 nctemp4194 = {{ 2}, (char*)"*"};
nctemp4193=&nctemp4194;
nctempchar1* nctemp4191= nctemp4193;
int nctemp4195=LibeStrcmp(nctemp4188,nctemp4191);
int nctemp4185 = (nctemp4195 ==1);
if(nctemp4185)
{
struct tree* nctemp4198= p;
nctempchar1* nctemp4200= type;
int nctemp4203=CodeEs(nctemp4198,nctemp4200);
struct tree* nctemp4205= p;
struct nctempchar1 *nctemp4209;
struct nctempchar1 nctemp4210 = {{ 2}, (char*)" "};
nctemp4209=&nctemp4210;
nctempchar1* nctemp4207= nctemp4209;
int nctemp4211=CodeEs(nctemp4205,nctemp4207);
struct tree* nctemp4213= p;
nctempchar1* nctemp4215= tempr;
int nctemp4218=CodeEs(nctemp4213,nctemp4215);
struct tree* nctemp4220= p;
struct nctempchar1 *nctemp4224;
struct nctempchar1 nctemp4225 = {{ 3}, (char*)".r"};
nctemp4224=&nctemp4225;
nctempchar1* nctemp4222= nctemp4224;
int nctemp4226=CodeEs(nctemp4220,nctemp4222);
struct tree* nctemp4228= p;
struct nctempchar1 *nctemp4232;
struct nctempchar1 nctemp4233 = {{ 4}, (char*)" = "};
nctemp4232=&nctemp4233;
nctempchar1* nctemp4230= nctemp4232;
int nctemp4234=CodeEs(nctemp4228,nctemp4230);
struct tree* nctemp4236= p;
nctempchar1* nctemp4238= lval;
int nctemp4241=CodeEs(nctemp4236,nctemp4238);
struct tree* nctemp4243= p;
struct nctempchar1 *nctemp4247;
struct nctempchar1 nctemp4248 = {{ 3}, (char*)".r"};
nctemp4247=&nctemp4248;
nctempchar1* nctemp4245= nctemp4247;
int nctemp4249=CodeEs(nctemp4243,nctemp4245);
struct tree* nctemp4251= p;
struct nctempchar1 *nctemp4255;
struct nctempchar1 nctemp4256 = {{ 2}, (char*)"*"};
nctemp4255=&nctemp4256;
nctempchar1* nctemp4253= nctemp4255;
int nctemp4257=CodeEs(nctemp4251,nctemp4253);
struct tree* nctemp4259= p;
nctempchar1* nctemp4261= rval;
int nctemp4264=CodeEs(nctemp4259,nctemp4261);
struct tree* nctemp4266= p;
struct nctempchar1 *nctemp4270;
struct nctempchar1 nctemp4271 = {{ 3}, (char*)".r"};
nctemp4270=&nctemp4271;
nctempchar1* nctemp4268= nctemp4270;
int nctemp4272=CodeEs(nctemp4266,nctemp4268);
struct tree* nctemp4274= p;
struct nctempchar1 *nctemp4278;
struct nctempchar1 nctemp4279 = {{ 2}, (char*)"-"};
nctemp4278=&nctemp4279;
nctempchar1* nctemp4276= nctemp4278;
int nctemp4280=CodeEs(nctemp4274,nctemp4276);
struct tree* nctemp4282= p;
nctempchar1* nctemp4284= lval;
int nctemp4287=CodeEs(nctemp4282,nctemp4284);
struct tree* nctemp4289= p;
struct nctempchar1 *nctemp4293;
struct nctempchar1 nctemp4294 = {{ 3}, (char*)".i"};
nctemp4293=&nctemp4294;
nctempchar1* nctemp4291= nctemp4293;
int nctemp4295=CodeEs(nctemp4289,nctemp4291);
struct tree* nctemp4297= p;
struct nctempchar1 *nctemp4301;
struct nctempchar1 nctemp4302 = {{ 2}, (char*)"*"};
nctemp4301=&nctemp4302;
nctempchar1* nctemp4299= nctemp4301;
int nctemp4303=CodeEs(nctemp4297,nctemp4299);
struct tree* nctemp4305= p;
nctempchar1* nctemp4307= rval;
int nctemp4310=CodeEs(nctemp4305,nctemp4307);
struct tree* nctemp4312= p;
struct nctempchar1 *nctemp4316;
struct nctempchar1 nctemp4317 = {{ 3}, (char*)".i"};
nctemp4316=&nctemp4317;
nctempchar1* nctemp4314= nctemp4316;
int nctemp4318=CodeEs(nctemp4312,nctemp4314);
struct tree* nctemp4320= p;
struct nctempchar1 *nctemp4324;
struct nctempchar1 nctemp4325 = {{ 4}, (char*)";\n"};
nctemp4324=&nctemp4325;
nctempchar1* nctemp4322= nctemp4324;
int nctemp4326=CodeEs(nctemp4320,nctemp4322);
struct tree* nctemp4328= p;
nctempchar1* nctemp4330= type;
int nctemp4333=CodeEs(nctemp4328,nctemp4330);
struct tree* nctemp4335= p;
struct nctempchar1 *nctemp4339;
struct nctempchar1 nctemp4340 = {{ 2}, (char*)" "};
nctemp4339=&nctemp4340;
nctempchar1* nctemp4337= nctemp4339;
int nctemp4341=CodeEs(nctemp4335,nctemp4337);
struct tree* nctemp4343= p;
nctempchar1* nctemp4345= tempr;
int nctemp4348=CodeEs(nctemp4343,nctemp4345);
struct tree* nctemp4350= p;
struct nctempchar1 *nctemp4354;
struct nctempchar1 nctemp4355 = {{ 3}, (char*)".i"};
nctemp4354=&nctemp4355;
nctempchar1* nctemp4352= nctemp4354;
int nctemp4356=CodeEs(nctemp4350,nctemp4352);
struct tree* nctemp4358= p;
struct nctempchar1 *nctemp4362;
struct nctempchar1 nctemp4363 = {{ 4}, (char*)" = "};
nctemp4362=&nctemp4363;
nctempchar1* nctemp4360= nctemp4362;
int nctemp4364=CodeEs(nctemp4358,nctemp4360);
struct tree* nctemp4366= p;
nctempchar1* nctemp4368= lval;
int nctemp4371=CodeEs(nctemp4366,nctemp4368);
struct tree* nctemp4373= p;
struct nctempchar1 *nctemp4377;
struct nctempchar1 nctemp4378 = {{ 3}, (char*)".i"};
nctemp4377=&nctemp4378;
nctempchar1* nctemp4375= nctemp4377;
int nctemp4379=CodeEs(nctemp4373,nctemp4375);
struct tree* nctemp4381= p;
struct nctempchar1 *nctemp4385;
struct nctempchar1 nctemp4386 = {{ 2}, (char*)"*"};
nctemp4385=&nctemp4386;
nctempchar1* nctemp4383= nctemp4385;
int nctemp4387=CodeEs(nctemp4381,nctemp4383);
struct tree* nctemp4389= p;
nctempchar1* nctemp4391= rval;
int nctemp4394=CodeEs(nctemp4389,nctemp4391);
struct tree* nctemp4396= p;
struct nctempchar1 *nctemp4400;
struct nctempchar1 nctemp4401 = {{ 3}, (char*)".r"};
nctemp4400=&nctemp4401;
nctempchar1* nctemp4398= nctemp4400;
int nctemp4402=CodeEs(nctemp4396,nctemp4398);
struct tree* nctemp4404= p;
struct nctempchar1 *nctemp4408;
struct nctempchar1 nctemp4409 = {{ 2}, (char*)"+"};
nctemp4408=&nctemp4409;
nctempchar1* nctemp4406= nctemp4408;
int nctemp4410=CodeEs(nctemp4404,nctemp4406);
struct tree* nctemp4412= p;
nctempchar1* nctemp4414= lval;
int nctemp4417=CodeEs(nctemp4412,nctemp4414);
struct tree* nctemp4419= p;
struct nctempchar1 *nctemp4423;
struct nctempchar1 nctemp4424 = {{ 3}, (char*)".r"};
nctemp4423=&nctemp4424;
nctempchar1* nctemp4421= nctemp4423;
int nctemp4425=CodeEs(nctemp4419,nctemp4421);
struct tree* nctemp4427= p;
struct nctempchar1 *nctemp4431;
struct nctempchar1 nctemp4432 = {{ 2}, (char*)"*"};
nctemp4431=&nctemp4432;
nctempchar1* nctemp4429= nctemp4431;
int nctemp4433=CodeEs(nctemp4427,nctemp4429);
struct tree* nctemp4435= p;
nctempchar1* nctemp4437= rval;
int nctemp4440=CodeEs(nctemp4435,nctemp4437);
struct tree* nctemp4442= p;
struct nctempchar1 *nctemp4446;
struct nctempchar1 nctemp4447 = {{ 3}, (char*)".i"};
nctemp4446=&nctemp4447;
nctempchar1* nctemp4444= nctemp4446;
int nctemp4448=CodeEs(nctemp4442,nctemp4444);
struct tree* nctemp4450= p;
struct nctempchar1 *nctemp4454;
struct nctempchar1 nctemp4455 = {{ 4}, (char*)";\n"};
nctemp4454=&nctemp4455;
nctempchar1* nctemp4452= nctemp4454;
int nctemp4456=CodeEs(nctemp4450,nctemp4452);
}
else{
nctempchar1* nctemp4460= opr;
struct nctempchar1 *nctemp4465;
struct nctempchar1 nctemp4466 = {{ 2}, (char*)"/"};
nctemp4465=&nctemp4466;
nctempchar1* nctemp4463= nctemp4465;
int nctemp4467=LibeStrcmp(nctemp4460,nctemp4463);
int nctemp4457 = (nctemp4467 ==1);
if(nctemp4457)
{
struct tree* nctemp4470= p;
nctempchar1* nctemp4472= type;
int nctemp4475=CodeEs(nctemp4470,nctemp4472);
struct tree* nctemp4477= p;
struct nctempchar1 *nctemp4481;
struct nctempchar1 nctemp4482 = {{ 2}, (char*)" "};
nctemp4481=&nctemp4482;
nctempchar1* nctemp4479= nctemp4481;
int nctemp4483=CodeEs(nctemp4477,nctemp4479);
struct tree* nctemp4485= p;
nctempchar1* nctemp4487= tempr;
int nctemp4490=CodeEs(nctemp4485,nctemp4487);
struct tree* nctemp4492= p;
struct nctempchar1 *nctemp4496;
struct nctempchar1 nctemp4497 = {{ 3}, (char*)".r"};
nctemp4496=&nctemp4497;
nctempchar1* nctemp4494= nctemp4496;
int nctemp4498=CodeEs(nctemp4492,nctemp4494);
struct tree* nctemp4500= p;
struct nctempchar1 *nctemp4504;
struct nctempchar1 nctemp4505 = {{ 4}, (char*)" = "};
nctemp4504=&nctemp4505;
nctempchar1* nctemp4502= nctemp4504;
int nctemp4506=CodeEs(nctemp4500,nctemp4502);
struct tree* nctemp4508= p;
struct nctempchar1 *nctemp4512;
struct nctempchar1 nctemp4513 = {{ 2}, (char*)"("};
nctemp4512=&nctemp4513;
nctempchar1* nctemp4510= nctemp4512;
int nctemp4514=CodeEs(nctemp4508,nctemp4510);
struct tree* nctemp4516= p;
nctempchar1* nctemp4518= lval;
int nctemp4521=CodeEs(nctemp4516,nctemp4518);
struct tree* nctemp4523= p;
struct nctempchar1 *nctemp4527;
struct nctempchar1 nctemp4528 = {{ 3}, (char*)".r"};
nctemp4527=&nctemp4528;
nctempchar1* nctemp4525= nctemp4527;
int nctemp4529=CodeEs(nctemp4523,nctemp4525);
struct tree* nctemp4531= p;
struct nctempchar1 *nctemp4535;
struct nctempchar1 nctemp4536 = {{ 2}, (char*)"*"};
nctemp4535=&nctemp4536;
nctempchar1* nctemp4533= nctemp4535;
int nctemp4537=CodeEs(nctemp4531,nctemp4533);
struct tree* nctemp4539= p;
nctempchar1* nctemp4541= rval;
int nctemp4544=CodeEs(nctemp4539,nctemp4541);
struct tree* nctemp4546= p;
struct nctempchar1 *nctemp4550;
struct nctempchar1 nctemp4551 = {{ 3}, (char*)".r"};
nctemp4550=&nctemp4551;
nctempchar1* nctemp4548= nctemp4550;
int nctemp4552=CodeEs(nctemp4546,nctemp4548);
struct tree* nctemp4554= p;
struct nctempchar1 *nctemp4558;
struct nctempchar1 nctemp4559 = {{ 2}, (char*)"+"};
nctemp4558=&nctemp4559;
nctempchar1* nctemp4556= nctemp4558;
int nctemp4560=CodeEs(nctemp4554,nctemp4556);
struct tree* nctemp4562= p;
nctempchar1* nctemp4564= lval;
int nctemp4567=CodeEs(nctemp4562,nctemp4564);
struct tree* nctemp4569= p;
struct nctempchar1 *nctemp4573;
struct nctempchar1 nctemp4574 = {{ 3}, (char*)".i"};
nctemp4573=&nctemp4574;
nctempchar1* nctemp4571= nctemp4573;
int nctemp4575=CodeEs(nctemp4569,nctemp4571);
struct tree* nctemp4577= p;
struct nctempchar1 *nctemp4581;
struct nctempchar1 nctemp4582 = {{ 2}, (char*)"*"};
nctemp4581=&nctemp4582;
nctempchar1* nctemp4579= nctemp4581;
int nctemp4583=CodeEs(nctemp4577,nctemp4579);
struct tree* nctemp4585= p;
nctempchar1* nctemp4587= rval;
int nctemp4590=CodeEs(nctemp4585,nctemp4587);
struct tree* nctemp4592= p;
struct nctempchar1 *nctemp4596;
struct nctempchar1 nctemp4597 = {{ 3}, (char*)".i"};
nctemp4596=&nctemp4597;
nctempchar1* nctemp4594= nctemp4596;
int nctemp4598=CodeEs(nctemp4592,nctemp4594);
struct tree* nctemp4600= p;
struct nctempchar1 *nctemp4604;
struct nctempchar1 nctemp4605 = {{ 4}, (char*)")/("};
nctemp4604=&nctemp4605;
nctempchar1* nctemp4602= nctemp4604;
int nctemp4606=CodeEs(nctemp4600,nctemp4602);
struct tree* nctemp4608= p;
nctempchar1* nctemp4610= rval;
int nctemp4613=CodeEs(nctemp4608,nctemp4610);
struct tree* nctemp4615= p;
struct nctempchar1 *nctemp4619;
struct nctempchar1 nctemp4620 = {{ 3}, (char*)".r"};
nctemp4619=&nctemp4620;
nctempchar1* nctemp4617= nctemp4619;
int nctemp4621=CodeEs(nctemp4615,nctemp4617);
struct tree* nctemp4623= p;
struct nctempchar1 *nctemp4627;
struct nctempchar1 nctemp4628 = {{ 2}, (char*)"*"};
nctemp4627=&nctemp4628;
nctempchar1* nctemp4625= nctemp4627;
int nctemp4629=CodeEs(nctemp4623,nctemp4625);
struct tree* nctemp4631= p;
nctempchar1* nctemp4633= rval;
int nctemp4636=CodeEs(nctemp4631,nctemp4633);
struct tree* nctemp4638= p;
struct nctempchar1 *nctemp4642;
struct nctempchar1 nctemp4643 = {{ 3}, (char*)".r"};
nctemp4642=&nctemp4643;
nctempchar1* nctemp4640= nctemp4642;
int nctemp4644=CodeEs(nctemp4638,nctemp4640);
struct tree* nctemp4646= p;
struct nctempchar1 *nctemp4650;
struct nctempchar1 nctemp4651 = {{ 2}, (char*)"+"};
nctemp4650=&nctemp4651;
nctempchar1* nctemp4648= nctemp4650;
int nctemp4652=CodeEs(nctemp4646,nctemp4648);
struct tree* nctemp4654= p;
nctempchar1* nctemp4656= rval;
int nctemp4659=CodeEs(nctemp4654,nctemp4656);
struct tree* nctemp4661= p;
struct nctempchar1 *nctemp4665;
struct nctempchar1 nctemp4666 = {{ 3}, (char*)".i"};
nctemp4665=&nctemp4666;
nctempchar1* nctemp4663= nctemp4665;
int nctemp4667=CodeEs(nctemp4661,nctemp4663);
struct tree* nctemp4669= p;
struct nctempchar1 *nctemp4673;
struct nctempchar1 nctemp4674 = {{ 2}, (char*)"*"};
nctemp4673=&nctemp4674;
nctempchar1* nctemp4671= nctemp4673;
int nctemp4675=CodeEs(nctemp4669,nctemp4671);
struct tree* nctemp4677= p;
nctempchar1* nctemp4679= rval;
int nctemp4682=CodeEs(nctemp4677,nctemp4679);
struct tree* nctemp4684= p;
struct nctempchar1 *nctemp4688;
struct nctempchar1 nctemp4689 = {{ 3}, (char*)".i"};
nctemp4688=&nctemp4689;
nctempchar1* nctemp4686= nctemp4688;
int nctemp4690=CodeEs(nctemp4684,nctemp4686);
struct tree* nctemp4692= p;
struct nctempchar1 *nctemp4696;
struct nctempchar1 nctemp4697 = {{ 5}, (char*)");\n"};
nctemp4696=&nctemp4697;
nctempchar1* nctemp4694= nctemp4696;
int nctemp4698=CodeEs(nctemp4692,nctemp4694);
struct tree* nctemp4700= p;
nctempchar1* nctemp4702= type;
int nctemp4705=CodeEs(nctemp4700,nctemp4702);
struct tree* nctemp4707= p;
struct nctempchar1 *nctemp4711;
struct nctempchar1 nctemp4712 = {{ 2}, (char*)" "};
nctemp4711=&nctemp4712;
nctempchar1* nctemp4709= nctemp4711;
int nctemp4713=CodeEs(nctemp4707,nctemp4709);
struct tree* nctemp4715= p;
nctempchar1* nctemp4717= tempr;
int nctemp4720=CodeEs(nctemp4715,nctemp4717);
struct tree* nctemp4722= p;
struct nctempchar1 *nctemp4726;
struct nctempchar1 nctemp4727 = {{ 3}, (char*)".i"};
nctemp4726=&nctemp4727;
nctempchar1* nctemp4724= nctemp4726;
int nctemp4728=CodeEs(nctemp4722,nctemp4724);
struct tree* nctemp4730= p;
struct nctempchar1 *nctemp4734;
struct nctempchar1 nctemp4735 = {{ 4}, (char*)" = "};
nctemp4734=&nctemp4735;
nctempchar1* nctemp4732= nctemp4734;
int nctemp4736=CodeEs(nctemp4730,nctemp4732);
struct tree* nctemp4738= p;
struct nctempchar1 *nctemp4742;
struct nctempchar1 nctemp4743 = {{ 2}, (char*)"("};
nctemp4742=&nctemp4743;
nctempchar1* nctemp4740= nctemp4742;
int nctemp4744=CodeEs(nctemp4738,nctemp4740);
struct tree* nctemp4746= p;
nctempchar1* nctemp4748= lval;
int nctemp4751=CodeEs(nctemp4746,nctemp4748);
struct tree* nctemp4753= p;
struct nctempchar1 *nctemp4757;
struct nctempchar1 nctemp4758 = {{ 3}, (char*)".i"};
nctemp4757=&nctemp4758;
nctempchar1* nctemp4755= nctemp4757;
int nctemp4759=CodeEs(nctemp4753,nctemp4755);
struct tree* nctemp4761= p;
struct nctempchar1 *nctemp4765;
struct nctempchar1 nctemp4766 = {{ 2}, (char*)"*"};
nctemp4765=&nctemp4766;
nctempchar1* nctemp4763= nctemp4765;
int nctemp4767=CodeEs(nctemp4761,nctemp4763);
struct tree* nctemp4769= p;
nctempchar1* nctemp4771= rval;
int nctemp4774=CodeEs(nctemp4769,nctemp4771);
struct tree* nctemp4776= p;
struct nctempchar1 *nctemp4780;
struct nctempchar1 nctemp4781 = {{ 3}, (char*)".r"};
nctemp4780=&nctemp4781;
nctempchar1* nctemp4778= nctemp4780;
int nctemp4782=CodeEs(nctemp4776,nctemp4778);
struct tree* nctemp4784= p;
struct nctempchar1 *nctemp4788;
struct nctempchar1 nctemp4789 = {{ 2}, (char*)"-"};
nctemp4788=&nctemp4789;
nctempchar1* nctemp4786= nctemp4788;
int nctemp4790=CodeEs(nctemp4784,nctemp4786);
struct tree* nctemp4792= p;
nctempchar1* nctemp4794= lval;
int nctemp4797=CodeEs(nctemp4792,nctemp4794);
struct tree* nctemp4799= p;
struct nctempchar1 *nctemp4803;
struct nctempchar1 nctemp4804 = {{ 3}, (char*)".r"};
nctemp4803=&nctemp4804;
nctempchar1* nctemp4801= nctemp4803;
int nctemp4805=CodeEs(nctemp4799,nctemp4801);
struct tree* nctemp4807= p;
struct nctempchar1 *nctemp4811;
struct nctempchar1 nctemp4812 = {{ 2}, (char*)"*"};
nctemp4811=&nctemp4812;
nctempchar1* nctemp4809= nctemp4811;
int nctemp4813=CodeEs(nctemp4807,nctemp4809);
struct tree* nctemp4815= p;
nctempchar1* nctemp4817= rval;
int nctemp4820=CodeEs(nctemp4815,nctemp4817);
struct tree* nctemp4822= p;
struct nctempchar1 *nctemp4826;
struct nctempchar1 nctemp4827 = {{ 3}, (char*)".i"};
nctemp4826=&nctemp4827;
nctempchar1* nctemp4824= nctemp4826;
int nctemp4828=CodeEs(nctemp4822,nctemp4824);
struct tree* nctemp4830= p;
struct nctempchar1 *nctemp4834;
struct nctempchar1 nctemp4835 = {{ 4}, (char*)")/("};
nctemp4834=&nctemp4835;
nctempchar1* nctemp4832= nctemp4834;
int nctemp4836=CodeEs(nctemp4830,nctemp4832);
struct tree* nctemp4838= p;
nctempchar1* nctemp4840= rval;
int nctemp4843=CodeEs(nctemp4838,nctemp4840);
struct tree* nctemp4845= p;
struct nctempchar1 *nctemp4849;
struct nctempchar1 nctemp4850 = {{ 3}, (char*)".r"};
nctemp4849=&nctemp4850;
nctempchar1* nctemp4847= nctemp4849;
int nctemp4851=CodeEs(nctemp4845,nctemp4847);
struct tree* nctemp4853= p;
struct nctempchar1 *nctemp4857;
struct nctempchar1 nctemp4858 = {{ 2}, (char*)"*"};
nctemp4857=&nctemp4858;
nctempchar1* nctemp4855= nctemp4857;
int nctemp4859=CodeEs(nctemp4853,nctemp4855);
struct tree* nctemp4861= p;
nctempchar1* nctemp4863= rval;
int nctemp4866=CodeEs(nctemp4861,nctemp4863);
struct tree* nctemp4868= p;
struct nctempchar1 *nctemp4872;
struct nctempchar1 nctemp4873 = {{ 3}, (char*)".r"};
nctemp4872=&nctemp4873;
nctempchar1* nctemp4870= nctemp4872;
int nctemp4874=CodeEs(nctemp4868,nctemp4870);
struct tree* nctemp4876= p;
struct nctempchar1 *nctemp4880;
struct nctempchar1 nctemp4881 = {{ 2}, (char*)"+"};
nctemp4880=&nctemp4881;
nctempchar1* nctemp4878= nctemp4880;
int nctemp4882=CodeEs(nctemp4876,nctemp4878);
struct tree* nctemp4884= p;
nctempchar1* nctemp4886= rval;
int nctemp4889=CodeEs(nctemp4884,nctemp4886);
struct tree* nctemp4891= p;
struct nctempchar1 *nctemp4895;
struct nctempchar1 nctemp4896 = {{ 3}, (char*)".i"};
nctemp4895=&nctemp4896;
nctempchar1* nctemp4893= nctemp4895;
int nctemp4897=CodeEs(nctemp4891,nctemp4893);
struct tree* nctemp4899= p;
struct nctempchar1 *nctemp4903;
struct nctempchar1 nctemp4904 = {{ 2}, (char*)"*"};
nctemp4903=&nctemp4904;
nctempchar1* nctemp4901= nctemp4903;
int nctemp4905=CodeEs(nctemp4899,nctemp4901);
struct tree* nctemp4907= p;
nctempchar1* nctemp4909= rval;
int nctemp4912=CodeEs(nctemp4907,nctemp4909);
struct tree* nctemp4914= p;
struct nctempchar1 *nctemp4918;
struct nctempchar1 nctemp4919 = {{ 3}, (char*)".i"};
nctemp4918=&nctemp4919;
nctempchar1* nctemp4916= nctemp4918;
int nctemp4920=CodeEs(nctemp4914,nctemp4916);
struct tree* nctemp4922= p;
struct nctempchar1 *nctemp4926;
struct nctempchar1 nctemp4927 = {{ 5}, (char*)");\n"};
nctemp4926=&nctemp4927;
nctempchar1* nctemp4924= nctemp4926;
int nctemp4928=CodeEs(nctemp4922,nctemp4924);
}
}
}
}
else{
struct tree* nctemp4930= p;
nctempchar1* nctemp4932= type;
int nctemp4935=CodeEs(nctemp4930,nctemp4932);
struct tree* nctemp4937= p;
struct nctempchar1 *nctemp4941;
struct nctempchar1 nctemp4942 = {{ 2}, (char*)" "};
nctemp4941=&nctemp4942;
nctempchar1* nctemp4939= nctemp4941;
int nctemp4943=CodeEs(nctemp4937,nctemp4939);
struct tree* nctemp4945= p;
nctempchar1* nctemp4947= tempr;
int nctemp4950=CodeEs(nctemp4945,nctemp4947);
struct tree* nctemp4952= p;
struct nctempchar1 *nctemp4956;
struct nctempchar1 nctemp4957 = {{ 4}, (char*)" = "};
nctemp4956=&nctemp4957;
nctempchar1* nctemp4954= nctemp4956;
int nctemp4958=CodeEs(nctemp4952,nctemp4954);
struct tree* nctemp4960= p;
nctempchar1* nctemp4962= lval;
int nctemp4965=CodeEs(nctemp4960,nctemp4962);
struct tree* nctemp4967= p;
struct nctempchar1 *nctemp4971;
struct nctempchar1 nctemp4972 = {{ 2}, (char*)" "};
nctemp4971=&nctemp4972;
nctempchar1* nctemp4969= nctemp4971;
int nctemp4973=CodeEs(nctemp4967,nctemp4969);
struct tree* nctemp4975= p;
struct tree* nctemp4979= p;
nctempchar1* nctemp4981=PtreeGetdef(nctemp4979);
nctempchar1* nctemp4977= nctemp4981;
int nctemp4982=CodeEs(nctemp4975,nctemp4977);
struct tree* nctemp4984= p;
struct nctempchar1 *nctemp4988;
struct nctempchar1 nctemp4989 = {{ 2}, (char*)" "};
nctemp4988=&nctemp4989;
nctempchar1* nctemp4986= nctemp4988;
int nctemp4990=CodeEs(nctemp4984,nctemp4986);
struct tree* nctemp4992= p;
nctempchar1* nctemp4994= rval;
int nctemp4997=CodeEs(nctemp4992,nctemp4994);
struct tree* nctemp4999= p;
struct nctempchar1 *nctemp5003;
struct nctempchar1 nctemp5004 = {{ 4}, (char*)";\n"};
nctemp5003=&nctemp5004;
nctempchar1* nctemp5001= nctemp5003;
int nctemp5005=CodeEs(nctemp4999,nctemp5001);
}
return tempr;
}
nctempchar1 * CodeUnexpr (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tempr;
struct tree* nctemp5015= p;
nctempchar1* nctemp5017=PtreeGetype(nctemp5015);
nctempchar1* nctemp5013= nctemp5017;
nctempchar1* nctemp5018=CodeNewtemp(nctemp5013);
tempr=nctemp5018;
struct tree* nctemp5024= p;
nctempchar1* nctemp5026=PtreeGetname(nctemp5024);
nctempchar1* nctemp5022= nctemp5026;
struct nctempchar1 *nctemp5029;
struct nctempchar1 nctemp5030 = {{ 7}, (char*)"unexpr"};
nctemp5029=&nctemp5030;
nctempchar1* nctemp5027= nctemp5029;
int nctemp5031=LibeStrcmp(nctemp5022,nctemp5027);
int nctemp5019 = (nctemp5031 ==1);
if(nctemp5019)
{
struct tree* nctemp5038= p;
nctempchar1* nctemp5040=PtreeGetype(nctemp5038);
nctempchar1* nctemp5036= nctemp5040;
struct nctempchar1 *nctemp5043;
struct nctempchar1 nctemp5044 = {{ 8}, (char*)"complex"};
nctemp5043=&nctemp5044;
nctempchar1* nctemp5041= nctemp5043;
int nctemp5045=LibeStrcmp(nctemp5036,nctemp5041);
int nctemp5033 = (nctemp5045 ==1);
if(nctemp5033)
{
struct tree* nctemp5054= p;
struct tree* nctemp5056=PtreeMvchild(nctemp5054);
struct tree* nctemp5052= nctemp5056;
nctempchar1* nctemp5057=CodePrimexpr(nctemp5052);
tmp=nctemp5057;
struct tree* nctemp5059= p;
struct nctempchar1 *nctemp5063;
struct nctempchar1 nctemp5064 = {{ 4}, (char*)";\n"};
nctemp5063=&nctemp5064;
nctempchar1* nctemp5061= nctemp5063;
int nctemp5065=CodeEs(nctemp5059,nctemp5061);
struct tree* nctemp5067= p;
nctempchar1* nctemp5069= tempr;
int nctemp5072=CodeEs(nctemp5067,nctemp5069);
struct tree* nctemp5074= p;
struct nctempchar1 *nctemp5078;
struct nctempchar1 nctemp5079 = {{ 3}, (char*)".r"};
nctemp5078=&nctemp5079;
nctempchar1* nctemp5076= nctemp5078;
int nctemp5080=CodeEs(nctemp5074,nctemp5076);
struct tree* nctemp5082= p;
struct nctempchar1 *nctemp5086;
struct nctempchar1 nctemp5087 = {{ 4}, (char*)"= -"};
nctemp5086=&nctemp5087;
nctempchar1* nctemp5084= nctemp5086;
int nctemp5088=CodeEs(nctemp5082,nctemp5084);
struct tree* nctemp5090= p;
nctempchar1* nctemp5092= tmp;
int nctemp5095=CodeEs(nctemp5090,nctemp5092);
struct tree* nctemp5097= p;
struct nctempchar1 *nctemp5101;
struct nctempchar1 nctemp5102 = {{ 3}, (char*)".r"};
nctemp5101=&nctemp5102;
nctempchar1* nctemp5099= nctemp5101;
int nctemp5103=CodeEs(nctemp5097,nctemp5099);
struct tree* nctemp5105= p;
struct nctempchar1 *nctemp5109;
struct nctempchar1 nctemp5110 = {{ 4}, (char*)";\n"};
nctemp5109=&nctemp5110;
nctempchar1* nctemp5107= nctemp5109;
int nctemp5111=CodeEs(nctemp5105,nctemp5107);
struct tree* nctemp5113= p;
nctempchar1* nctemp5115= tempr;
int nctemp5118=CodeEs(nctemp5113,nctemp5115);
struct tree* nctemp5120= p;
struct nctempchar1 *nctemp5124;
struct nctempchar1 nctemp5125 = {{ 3}, (char*)".i"};
nctemp5124=&nctemp5125;
nctempchar1* nctemp5122= nctemp5124;
int nctemp5126=CodeEs(nctemp5120,nctemp5122);
struct tree* nctemp5128= p;
struct nctempchar1 *nctemp5132;
struct nctempchar1 nctemp5133 = {{ 4}, (char*)"= -"};
nctemp5132=&nctemp5133;
nctempchar1* nctemp5130= nctemp5132;
int nctemp5134=CodeEs(nctemp5128,nctemp5130);
struct tree* nctemp5136= p;
nctempchar1* nctemp5138= tmp;
int nctemp5141=CodeEs(nctemp5136,nctemp5138);
struct tree* nctemp5143= p;
struct nctempchar1 *nctemp5147;
struct nctempchar1 nctemp5148 = {{ 3}, (char*)".i"};
nctemp5147=&nctemp5148;
nctempchar1* nctemp5145= nctemp5147;
int nctemp5149=CodeEs(nctemp5143,nctemp5145);
struct tree* nctemp5151= p;
struct nctempchar1 *nctemp5155;
struct nctempchar1 nctemp5156 = {{ 4}, (char*)";\n"};
nctemp5155=&nctemp5156;
nctempchar1* nctemp5153= nctemp5155;
int nctemp5157=CodeEs(nctemp5151,nctemp5153);
return tempr;
}
else{
struct tree* nctemp5167= p;
struct tree* nctemp5169=PtreeMvchild(nctemp5167);
struct tree* nctemp5165= nctemp5169;
nctempchar1* nctemp5170=CodePrimexpr(nctemp5165);
tmp=nctemp5170;
struct tree* nctemp5172= p;
struct tree* nctemp5176= p;
nctempchar1* nctemp5178=PtreeGetype(nctemp5176);
nctempchar1* nctemp5174= nctemp5178;
int nctemp5179=CodeEs(nctemp5172,nctemp5174);
struct tree* nctemp5181= p;
struct nctempchar1 *nctemp5185;
struct nctempchar1 nctemp5186 = {{ 2}, (char*)" "};
nctemp5185=&nctemp5186;
nctempchar1* nctemp5183= nctemp5185;
int nctemp5187=CodeEs(nctemp5181,nctemp5183);
struct tree* nctemp5189= p;
nctempchar1* nctemp5191= tempr;
int nctemp5194=CodeEs(nctemp5189,nctemp5191);
struct tree* nctemp5196= p;
struct nctempchar1 *nctemp5200;
struct nctempchar1 nctemp5201 = {{ 4}, (char*)"= -"};
nctemp5200=&nctemp5201;
nctempchar1* nctemp5198= nctemp5200;
int nctemp5202=CodeEs(nctemp5196,nctemp5198);
struct tree* nctemp5204= p;
nctempchar1* nctemp5206= tmp;
int nctemp5209=CodeEs(nctemp5204,nctemp5206);
struct tree* nctemp5211= p;
struct nctempchar1 *nctemp5215;
struct nctempchar1 nctemp5216 = {{ 4}, (char*)";\n"};
nctemp5215=&nctemp5216;
nctempchar1* nctemp5213= nctemp5215;
int nctemp5217=CodeEs(nctemp5211,nctemp5213);
return tempr;
}
}
else{
struct tree* nctemp5221= p;
nctempchar1* nctemp5223=CodePrimexpr(nctemp5221);
return nctemp5223;
}
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp5229= p;
nctempchar1* nctemp5231=PtreeGetname(nctemp5229);
nctempchar1* nctemp5227= nctemp5231;
struct nctempchar1 *nctemp5234;
struct nctempchar1 nctemp5235 = {{ 11}, (char*)"identifier"};
nctemp5234=&nctemp5235;
nctempchar1* nctemp5232= nctemp5234;
int nctemp5236=LibeStrcmp(nctemp5227,nctemp5232);
int nctemp5224 = (nctemp5236 ==1);
if(nctemp5224)
{
struct tree* nctemp5239= p;
nctempchar1* nctemp5241=CodeIdent(nctemp5239);
return nctemp5241;
}
else{
struct tree* nctemp5247= p;
nctempchar1* nctemp5249=PtreeGetname(nctemp5247);
nctempchar1* nctemp5245= nctemp5249;
struct nctempchar1 *nctemp5252;
struct nctempchar1 nctemp5253 = {{ 4}, (char*)"new"};
nctemp5252=&nctemp5253;
nctempchar1* nctemp5250= nctemp5252;
int nctemp5254=LibeStrcmp(nctemp5245,nctemp5250);
int nctemp5242 = (nctemp5254 ==1);
if(nctemp5242)
{
struct tree* nctemp5257= p;
nctempchar1* nctemp5259=CodeNew(nctemp5257);
return nctemp5259;
}
else{
struct tree* nctemp5265= p;
nctempchar1* nctemp5267=PtreeGetname(nctemp5265);
nctempchar1* nctemp5263= nctemp5267;
struct nctempchar1 *nctemp5270;
struct nctempchar1 nctemp5271 = {{ 7}, (char*)"delete"};
nctemp5270=&nctemp5271;
nctempchar1* nctemp5268= nctemp5270;
int nctemp5272=LibeStrcmp(nctemp5263,nctemp5268);
int nctemp5260 = (nctemp5272 ==1);
if(nctemp5260)
{
struct tree* nctemp5275= p;
nctempchar1* nctemp5277=CodeDelete(nctemp5275);
return nctemp5277;
}
else{
struct tree* nctemp5283= p;
nctempchar1* nctemp5285=PtreeGetname(nctemp5283);
nctempchar1* nctemp5281= nctemp5285;
struct nctempchar1 *nctemp5288;
struct nctempchar1 nctemp5289 = {{ 4}, (char*)"len"};
nctemp5288=&nctemp5289;
nctempchar1* nctemp5286= nctemp5288;
int nctemp5290=LibeStrcmp(nctemp5281,nctemp5286);
int nctemp5278 = (nctemp5290 ==1);
if(nctemp5278)
{
struct tree* nctemp5293= p;
nctempchar1* nctemp5295=CodeLen(nctemp5293);
return nctemp5295;
}
else{
struct tree* nctemp5301= p;
nctempchar1* nctemp5303=PtreeGetname(nctemp5301);
nctempchar1* nctemp5299= nctemp5303;
struct nctempchar1 *nctemp5306;
struct nctempchar1 nctemp5307 = {{ 6}, (char*)"cmplx"};
nctemp5306=&nctemp5307;
nctempchar1* nctemp5304= nctemp5306;
int nctemp5308=LibeStrcmp(nctemp5299,nctemp5304);
int nctemp5296 = (nctemp5308 ==1);
if(nctemp5296)
{
struct tree* nctemp5311= p;
nctempchar1* nctemp5313=CodeCmplx(nctemp5311);
return nctemp5313;
}
else{
struct tree* nctemp5319= p;
nctempchar1* nctemp5321=PtreeGetname(nctemp5319);
nctempchar1* nctemp5317= nctemp5321;
struct nctempchar1 *nctemp5324;
struct nctempchar1 nctemp5325 = {{ 3}, (char*)"im"};
nctemp5324=&nctemp5325;
nctempchar1* nctemp5322= nctemp5324;
int nctemp5326=LibeStrcmp(nctemp5317,nctemp5322);
int nctemp5314 = (nctemp5326 ==1);
if(nctemp5314)
{
struct tree* nctemp5329= p;
nctempchar1* nctemp5331=CodeIm(nctemp5329);
return nctemp5331;
}
else{
struct tree* nctemp5337= p;
nctempchar1* nctemp5339=PtreeGetname(nctemp5337);
nctempchar1* nctemp5335= nctemp5339;
struct nctempchar1 *nctemp5342;
struct nctempchar1 nctemp5343 = {{ 3}, (char*)"re"};
nctemp5342=&nctemp5343;
nctempchar1* nctemp5340= nctemp5342;
int nctemp5344=LibeStrcmp(nctemp5335,nctemp5340);
int nctemp5332 = (nctemp5344 ==1);
if(nctemp5332)
{
struct tree* nctemp5347= p;
nctempchar1* nctemp5349=CodeRe(nctemp5347);
return nctemp5349;
}
else{
struct tree* nctemp5355= p;
nctempchar1* nctemp5357=PtreeGetname(nctemp5355);
nctempchar1* nctemp5353= nctemp5357;
struct nctempchar1 *nctemp5360;
struct nctempchar1 nctemp5361 = {{ 6}, (char*)"fcall"};
nctemp5360=&nctemp5361;
nctempchar1* nctemp5358= nctemp5360;
int nctemp5362=LibeStrcmp(nctemp5353,nctemp5358);
int nctemp5350 = (nctemp5362 ==1);
if(nctemp5350)
{
struct tree* nctemp5365= p;
nctempchar1* nctemp5367=CodeFcall(nctemp5365);
return nctemp5367;
}
else{
struct tree* nctemp5373= p;
nctempchar1* nctemp5375=PtreeGetname(nctemp5373);
nctempchar1* nctemp5371= nctemp5375;
struct nctempchar1 *nctemp5378;
struct nctempchar1 nctemp5379 = {{ 5}, (char*)"cast"};
nctemp5378=&nctemp5379;
nctempchar1* nctemp5376= nctemp5378;
int nctemp5380=LibeStrcmp(nctemp5371,nctemp5376);
int nctemp5368 = (nctemp5380 ==1);
if(nctemp5368)
{
struct tree* nctemp5383= p;
nctempchar1* nctemp5385=CodeCast(nctemp5383);
return nctemp5385;
}
else{
struct tree* nctemp5391= p;
nctempchar1* nctemp5393=PtreeGetname(nctemp5391);
nctempchar1* nctemp5389= nctemp5393;
struct nctempchar1 *nctemp5396;
struct nctempchar1 nctemp5397 = {{ 10}, (char*)"iconstant"};
nctemp5396=&nctemp5397;
nctempchar1* nctemp5394= nctemp5396;
int nctemp5398=LibeStrcmp(nctemp5389,nctemp5394);
int nctemp5386 = (nctemp5398 ==1);
if(nctemp5386)
{
struct tree* nctemp5401= p;
nctempchar1* nctemp5403=PtreeGetdef(nctemp5401);
return nctemp5403;
}
else{
struct tree* nctemp5409= p;
nctempchar1* nctemp5411=PtreeGetname(nctemp5409);
nctempchar1* nctemp5407= nctemp5411;
struct nctempchar1 *nctemp5414;
struct nctempchar1 nctemp5415 = {{ 10}, (char*)"rconstant"};
nctemp5414=&nctemp5415;
nctempchar1* nctemp5412= nctemp5414;
int nctemp5416=LibeStrcmp(nctemp5407,nctemp5412);
int nctemp5404 = (nctemp5416 ==1);
if(nctemp5404)
{
struct tree* nctemp5419= p;
nctempchar1* nctemp5421=PtreeGetdef(nctemp5419);
return nctemp5421;
}
else{
struct tree* nctemp5427= p;
nctempchar1* nctemp5429=PtreeGetname(nctemp5427);
nctempchar1* nctemp5425= nctemp5429;
struct nctempchar1 *nctemp5432;
struct nctempchar1 nctemp5433 = {{ 10}, (char*)"sconstant"};
nctemp5432=&nctemp5433;
nctempchar1* nctemp5430= nctemp5432;
int nctemp5434=LibeStrcmp(nctemp5425,nctemp5430);
int nctemp5422 = (nctemp5434 ==1);
if(nctemp5422)
{
struct tree* nctemp5437= p;
nctempchar1* nctemp5439=CodeSconstant(nctemp5437);
return nctemp5439;
}
else{
struct tree* nctemp5441= p;
nctempchar1* nctemp5443=CodeBinexpr(nctemp5441);
return nctemp5443;
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
nctempchar1 * CodeIdent (struct tree* p)
{
nctempchar1 *qual;
nctempchar1 *selector;
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
qual=(0);
struct tree* nctemp5454= p;
nctempchar1* nctemp5456=PtreeGetstruct(nctemp5454);
nctempchar1* nctemp5452= nctemp5456;
struct nctempchar1 *nctemp5459;
struct nctempchar1 nctemp5460 = {{ 7}, (char*)"struct"};
nctemp5459=&nctemp5460;
nctempchar1* nctemp5457= nctemp5459;
int nctemp5461=LibeStrcmp(nctemp5452,nctemp5457);
int nctemp5449 = (nctemp5461 ==1);
if(nctemp5449)
{
struct tree* nctemp5468= p;
nctempchar1* nctemp5470=PtreeGetarray(nctemp5468);
nctempchar1* nctemp5466= nctemp5470;
struct nctempchar1 *nctemp5473;
struct nctempchar1 nctemp5474 = {{ 6}, (char*)"array"};
nctemp5473=&nctemp5474;
nctempchar1* nctemp5471= nctemp5473;
int nctemp5475=LibeStrcmp(nctemp5466,nctemp5471);
int nctemp5463 = (nctemp5475 ==1);
if(nctemp5463)
{
struct tree* nctemp5482= p;
nctempchar1* nctemp5484= qual;
struct nctempchar1 *nctemp5489;
struct nctempchar1 nctemp5490 = {{ 2}, (char*)"."};
nctemp5489=&nctemp5490;
nctempchar1* nctemp5487= nctemp5489;
nctempchar1* nctemp5491=CodeArray(nctemp5482,nctemp5484,nctemp5487);
qual=nctemp5491;
struct tree* nctemp5496= p;
struct tree* nctemp5498=PtreeMvchild(nctemp5496);
np =nctemp5498;
int nctemp5499 = (np ==0);
if(nctemp5499)
{
return qual;
}
struct tree* nctemp5509= np;
struct tree* nctemp5511=PtreeMvsister(nctemp5509);
np =nctemp5511;
int nctemp5512 = (np ==0);
if(nctemp5512)
{
return qual;
}
}
else{
struct tree* nctemp5523= p;
nctempchar1* nctemp5525=PtreeGetdef(nctemp5523);
qual=nctemp5525;
struct tree* nctemp5533= p;
struct tree* nctemp5535=PtreeMvchild(nctemp5533);
np =nctemp5535;
int nctemp5526 = (np ==0);
if(nctemp5526)
{
return qual;
}
}
struct tree* nctemp5544= np;
nctempchar1* nctemp5546=PtreeGetarray(nctemp5544);
nctempchar1* nctemp5542= nctemp5546;
struct nctempchar1 *nctemp5549;
struct nctempchar1 nctemp5550 = {{ 6}, (char*)"array"};
nctemp5549=&nctemp5550;
nctempchar1* nctemp5547= nctemp5549;
int nctemp5551=LibeStrcmp(nctemp5542,nctemp5547);
int nctemp5539 = (nctemp5551 ==1);
if(nctemp5539)
{
struct symbol* nctemp5557=SymGetltp();
tp =nctemp5557;
struct symbol* nctemp5562=SymGetetp();
up =nctemp5562;
struct tree* nctemp5569= p;
nctempchar1* nctemp5571=PtreeGetdef(nctemp5569);
nctempchar1* nctemp5567= nctemp5571;
struct symbol* nctemp5572=SymLook(nctemp5567);
uup =nctemp5572;
struct symbol* nctemp5579= uup;
nctempchar1* nctemp5581=SymGetype(nctemp5579);
nctempchar1* nctemp5577= nctemp5581;
struct symbol* nctemp5582=SymLook(nctemp5577);
uup =nctemp5582;
struct symbol* nctemp5586= uup;
struct symbol* nctemp5588=SymGetable(nctemp5586);
struct symbol* nctemp5584= nctemp5588;
struct symbol* nctemp5589=SymSetltp(nctemp5584);
struct tree* nctemp5595= np;
nctempchar1* nctemp5597= qual;
struct nctempchar1 *nctemp5602;
struct nctempchar1 nctemp5603 = {{ 3}, (char*)"->"};
nctemp5602=&nctemp5603;
nctempchar1* nctemp5600= nctemp5602;
nctempchar1* nctemp5604=CodeArray(nctemp5595,nctemp5597,nctemp5600);
selector=nctemp5604;
struct symbol* nctemp5606= tp;
struct symbol* nctemp5608=SymSetltp(nctemp5606);
struct symbol* nctemp5610= up;
struct symbol* nctemp5612=SymSetetp(nctemp5610);
}
else{
struct tree* nctemp5618= np;
nctempchar1* nctemp5620=PtreeGetdef(nctemp5618);
selector=nctemp5620;
}
struct tree* nctemp5626= p;
nctempchar1* nctemp5628=PtreeGetarray(nctemp5626);
nctempchar1* nctemp5624= nctemp5628;
struct nctempchar1 *nctemp5631;
struct nctempchar1 nctemp5632 = {{ 6}, (char*)"array"};
nctemp5631=&nctemp5632;
nctempchar1* nctemp5629= nctemp5631;
int nctemp5633=LibeStrcmp(nctemp5624,nctemp5629);
int nctemp5621 = (nctemp5633 ==1);
if(nctemp5621)
{
nctempchar1* nctemp5636= qual;
nctempchar1* nctemp5639= selector;
nctempchar1* nctemp5642=CodeQident(nctemp5636,nctemp5639);
return nctemp5642;
}
else{
nctempchar1* nctemp5644= qual;
nctempchar1* nctemp5647= selector;
nctempchar1* nctemp5650=CodeQident2(nctemp5644,nctemp5647);
return nctemp5650;
}
}
else{
struct tree* nctemp5656= p;
nctempchar1* nctemp5658=PtreeGetarray(nctemp5656);
nctempchar1* nctemp5654= nctemp5658;
struct nctempchar1 *nctemp5661;
struct nctempchar1 nctemp5662 = {{ 6}, (char*)"array"};
nctemp5661=&nctemp5662;
nctempchar1* nctemp5659= nctemp5661;
int nctemp5663=LibeStrcmp(nctemp5654,nctemp5659);
int nctemp5651 = (nctemp5663 ==1);
if(nctemp5651)
{
selector=(0);
qual=(0);
struct tree* nctemp5680= p;
nctempchar1* nctemp5682= qual;
nctempchar1* nctemp5685= selector;
nctempchar1* nctemp5688=CodeArray(nctemp5680,nctemp5682,nctemp5685);
qual=nctemp5688;
return qual;
}
else{
struct tree* nctemp5692= p;
nctempchar1* nctemp5694=PtreeGetdef(nctemp5692);
return nctemp5694;
}
}
}
nctempchar1 * CodeNew (struct tree* p)
{
struct tree* sp;
struct tree* top;
nctempchar1 *type;
nctempchar1 *totdim;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *structflag;
nctempchar1 *arrayflag;
int rank;
int i;
struct tree* nctemp5702= p;
nctempchar1* nctemp5704=PtreeGetype(nctemp5702);
nctempchar1* nctemp5700= nctemp5704;
nctempchar1* nctemp5705=CodeNewtemp(nctemp5700);
pointer=nctemp5705;
struct tree* nctemp5713= p;
nctempchar1* nctemp5715=PtreeGetype(nctemp5713);
nctempchar1* nctemp5711= nctemp5715;
nctempchar1* nctemp5716=CodeNewtemp(nctemp5711);
totdim=nctemp5716;
struct tree* nctemp5721= p;
struct tree* nctemp5723=PtreeMvchild(nctemp5721);
p =nctemp5723;
struct tree* nctemp5729= p;
nctempchar1* nctemp5731=PtreeGetdef(nctemp5729);
type=nctemp5731;
struct tree* nctemp5737= p;
nctempchar1* nctemp5739=PtreeGetstruct(nctemp5737);
structflag=nctemp5739;
struct tree* nctemp5745= p;
nctempchar1* nctemp5747=PtreeGetarray(nctemp5745);
arrayflag=nctemp5747;
struct tree* nctemp5753= p;
nctempchar1* nctemp5755=PtreeGetarray(nctemp5753);
nctempchar1* nctemp5751= nctemp5755;
struct nctempchar1 *nctemp5758;
struct nctempchar1 nctemp5759 = {{ 6}, (char*)"array"};
nctemp5758=&nctemp5759;
nctempchar1* nctemp5756= nctemp5758;
int nctemp5760=LibeStrcmp(nctemp5751,nctemp5756);
int nctemp5748 = (nctemp5760 ==1);
if(nctemp5748)
{
struct tree* nctemp5766= p;
struct tree* nctemp5768=PtreeMvchild(nctemp5766);
p =nctemp5768;
struct tree* nctemp5773= p;
struct tree* nctemp5775=PtreeMvchild(nctemp5773);
p =nctemp5775;
struct tree* nctemp5780= p;
struct tree* nctemp5782=PtreeMvchild(nctemp5780);
p =nctemp5782;
struct tree* nctemp5787= p;
struct tree* nctemp5789=PtreeMvchild(nctemp5787);
p =nctemp5789;
sp =p;
top =p;
rank =1;
struct tree* nctemp5809= p;
struct tree* nctemp5811=PtreeMvsister(nctemp5809);
p =nctemp5811;
int nctemp5802 = (p !=0);
int nctemp5813=nctemp5802;
while(nctemp5813)
{{
int nctemp5822 = rank + 1;
rank =nctemp5822;
}
struct tree* nctemp5830= p;
struct tree* nctemp5832=PtreeMvsister(nctemp5830);
p =nctemp5832;
int nctemp5823 = (p !=0);
nctemp5813=nctemp5823;}int nctemp5834 = (rank > 4);
if(nctemp5834)
{
struct nctempchar1 *nctemp5841;
struct nctempchar1 nctemp5842 = {{ 29}, (char*)"Array dimension is too large"};
nctemp5841=&nctemp5842;
nctempchar1* nctemp5839= nctemp5841;
int nctemp5843=ErrPanic(nctemp5839);
}
p =sp;
i =0;
int nctemp5852 = (p !=0);
int nctemp5856=nctemp5852;
while(nctemp5856)
{{
struct tree* nctemp5862= p;
nctempchar1* nctemp5864=CodeExpr(nctemp5862);
dim=nctemp5864;
int nctemp5865 = (i ==0);
if(nctemp5865)
{
struct tree* nctemp5870= p;
struct tree* nctemp5874= p;
nctempchar1* nctemp5876=PtreeGetype(nctemp5874);
nctempchar1* nctemp5872= nctemp5876;
int nctemp5877=CodeEs(nctemp5870,nctemp5872);
struct tree* nctemp5879= p;
struct nctempchar1 *nctemp5883;
struct nctempchar1 nctemp5884 = {{ 2}, (char*)" "};
nctemp5883=&nctemp5884;
nctempchar1* nctemp5881= nctemp5883;
int nctemp5885=CodeEs(nctemp5879,nctemp5881);
struct tree* nctemp5887= p;
nctempchar1* nctemp5889= totdim;
int nctemp5892=CodeEs(nctemp5887,nctemp5889);
struct tree* nctemp5894= p;
struct nctempchar1 *nctemp5898;
struct nctempchar1 nctemp5899 = {{ 2}, (char*)"="};
nctemp5898=&nctemp5899;
nctempchar1* nctemp5896= nctemp5898;
int nctemp5900=CodeEs(nctemp5894,nctemp5896);
struct tree* nctemp5902= p;
nctempchar1* nctemp5904= dim;
int nctemp5907=CodeEs(nctemp5902,nctemp5904);
}
else{
struct tree* nctemp5909= p;
nctempchar1* nctemp5911= totdim;
int nctemp5914=CodeEs(nctemp5909,nctemp5911);
struct tree* nctemp5916= p;
struct nctempchar1 *nctemp5920;
struct nctempchar1 nctemp5921 = {{ 2}, (char*)"="};
nctemp5920=&nctemp5921;
nctempchar1* nctemp5918= nctemp5920;
int nctemp5922=CodeEs(nctemp5916,nctemp5918);
struct tree* nctemp5924= p;
nctempchar1* nctemp5926= totdim;
int nctemp5929=CodeEs(nctemp5924,nctemp5926);
struct tree* nctemp5931= p;
struct nctempchar1 *nctemp5935;
struct nctempchar1 nctemp5936 = {{ 2}, (char*)"*"};
nctemp5935=&nctemp5936;
nctempchar1* nctemp5933= nctemp5935;
int nctemp5937=CodeEs(nctemp5931,nctemp5933);
struct tree* nctemp5939= p;
nctempchar1* nctemp5941= dim;
int nctemp5944=CodeEs(nctemp5939,nctemp5941);
}
struct tree* nctemp5946= p;
struct nctempchar1 *nctemp5950;
struct nctempchar1 nctemp5951 = {{ 4}, (char*)";\n"};
nctemp5950=&nctemp5951;
nctempchar1* nctemp5948= nctemp5950;
int nctemp5952=CodeEs(nctemp5946,nctemp5948);
int nctemp5961 = i + 1;
i =nctemp5961;
struct tree* nctemp5966= p;
struct tree* nctemp5968=PtreeMvsister(nctemp5966);
p =nctemp5968;
}
int nctemp5969 = (p !=0);
nctemp5856=nctemp5969;}}
nctempchar1* nctemp5979= structflag;
struct nctempchar1 *nctemp5984;
struct nctempchar1 nctemp5985 = {{ 7}, (char*)"struct"};
nctemp5984=&nctemp5985;
nctempchar1* nctemp5982= nctemp5984;
int nctemp5986=LibeStrcmp(nctemp5979,nctemp5982);
int nctemp5976 = (nctemp5986 ==1);
nctempchar1* nctemp5992= arrayflag;
struct nctempchar1 *nctemp5997;
struct nctempchar1 nctemp5998 = {{ 6}, (char*)"array"};
nctemp5997=&nctemp5998;
nctempchar1* nctemp5995= nctemp5997;
int nctemp5999=LibeStrcmp(nctemp5992,nctemp5995);
int nctemp5989 = (nctemp5999 ==0);
int nctemp5973 = (nctemp5976 && nctemp5989);
if(nctemp5973)
{
struct tree* nctemp6002= p;
struct nctempchar1 *nctemp6006;
struct nctempchar1 nctemp6007 = {{ 8}, (char*)"struct "};
nctemp6006=&nctemp6007;
nctempchar1* nctemp6004= nctemp6006;
int nctemp6008=CodeEs(nctemp6002,nctemp6004);
struct tree* nctemp6010= p;
nctempchar1* nctemp6012= type;
int nctemp6015=CodeEs(nctemp6010,nctemp6012);
struct tree* nctemp6017= p;
struct nctempchar1 *nctemp6021;
struct nctempchar1 nctemp6022 = {{ 3}, (char*)" *"};
nctemp6021=&nctemp6022;
nctempchar1* nctemp6019= nctemp6021;
int nctemp6023=CodeEs(nctemp6017,nctemp6019);
struct tree* nctemp6025= p;
nctempchar1* nctemp6027= pointer;
int nctemp6030=CodeEs(nctemp6025,nctemp6027);
struct tree* nctemp6032= p;
struct nctempchar1 *nctemp6036;
struct nctempchar1 nctemp6037 = {{ 2}, (char*)"="};
nctemp6036=&nctemp6037;
nctempchar1* nctemp6034= nctemp6036;
int nctemp6038=CodeEs(nctemp6032,nctemp6034);
struct tree* nctemp6040= p;
struct nctempchar1 *nctemp6044;
struct nctempchar1 nctemp6045 = {{ 2}, (char*)"("};
nctemp6044=&nctemp6045;
nctempchar1* nctemp6042= nctemp6044;
int nctemp6046=CodeEs(nctemp6040,nctemp6042);
struct tree* nctemp6048= p;
struct nctempchar1 *nctemp6052;
struct nctempchar1 nctemp6053 = {{ 8}, (char*)"struct "};
nctemp6052=&nctemp6053;
nctempchar1* nctemp6050= nctemp6052;
int nctemp6054=CodeEs(nctemp6048,nctemp6050);
struct tree* nctemp6056= p;
nctempchar1* nctemp6058= type;
int nctemp6061=CodeEs(nctemp6056,nctemp6058);
struct tree* nctemp6063= p;
struct nctempchar1 *nctemp6067;
struct nctempchar1 nctemp6068 = {{ 3}, (char*)"*)"};
nctemp6067=&nctemp6068;
nctempchar1* nctemp6065= nctemp6067;
int nctemp6069=CodeEs(nctemp6063,nctemp6065);
struct tree* nctemp6071= p;
struct nctempchar1 *nctemp6075;
struct nctempchar1 nctemp6076 = {{ 8}, (char*)"malloc("};
nctemp6075=&nctemp6076;
nctempchar1* nctemp6073= nctemp6075;
int nctemp6077=CodeEs(nctemp6071,nctemp6073);
struct tree* nctemp6079= p;
struct nctempchar1 *nctemp6083;
struct nctempchar1 nctemp6084 = {{ 8}, (char*)"sizeof("};
nctemp6083=&nctemp6084;
nctempchar1* nctemp6081= nctemp6083;
int nctemp6085=CodeEs(nctemp6079,nctemp6081);
struct tree* nctemp6087= p;
struct nctempchar1 *nctemp6091;
struct nctempchar1 nctemp6092 = {{ 8}, (char*)"struct "};
nctemp6091=&nctemp6092;
nctempchar1* nctemp6089= nctemp6091;
int nctemp6093=CodeEs(nctemp6087,nctemp6089);
struct tree* nctemp6095= p;
nctempchar1* nctemp6097= type;
int nctemp6100=CodeEs(nctemp6095,nctemp6097);
struct tree* nctemp6102= p;
struct nctempchar1 *nctemp6106;
struct nctempchar1 nctemp6107 = {{ 6}, (char*)"));\n"};
nctemp6106=&nctemp6107;
nctempchar1* nctemp6104= nctemp6106;
int nctemp6108=CodeEs(nctemp6102,nctemp6104);
}
nctempchar1* nctemp6115= structflag;
struct nctempchar1 *nctemp6120;
struct nctempchar1 nctemp6121 = {{ 7}, (char*)"struct"};
nctemp6120=&nctemp6121;
nctempchar1* nctemp6118= nctemp6120;
int nctemp6122=LibeStrcmp(nctemp6115,nctemp6118);
int nctemp6112 = (nctemp6122 ==1);
nctempchar1* nctemp6128= arrayflag;
struct nctempchar1 *nctemp6133;
struct nctempchar1 nctemp6134 = {{ 6}, (char*)"array"};
nctemp6133=&nctemp6134;
nctempchar1* nctemp6131= nctemp6133;
int nctemp6135=LibeStrcmp(nctemp6128,nctemp6131);
int nctemp6125 = (nctemp6135 ==1);
int nctemp6109 = (nctemp6112 && nctemp6125);
if(nctemp6109)
{
struct tree* nctemp6138= p;
struct nctempchar1 *nctemp6142;
struct nctempchar1 nctemp6143 = {{ 14}, (char*)"struct nctemp"};
nctemp6142=&nctemp6143;
nctempchar1* nctemp6140= nctemp6142;
int nctemp6144=CodeEs(nctemp6138,nctemp6140);
struct tree* nctemp6146= p;
nctempchar1* nctemp6148= type;
int nctemp6151=CodeEs(nctemp6146,nctemp6148);
int nctemp6153= rank;
int nctemp6155=CodeEd(nctemp6153);
struct tree* nctemp6157= p;
struct nctempchar1 *nctemp6161;
struct nctempchar1 nctemp6162 = {{ 3}, (char*)" *"};
nctemp6161=&nctemp6162;
nctempchar1* nctemp6159= nctemp6161;
int nctemp6163=CodeEs(nctemp6157,nctemp6159);
struct tree* nctemp6165= p;
nctempchar1* nctemp6167= pointer;
int nctemp6170=CodeEs(nctemp6165,nctemp6167);
struct tree* nctemp6172= p;
struct nctempchar1 *nctemp6176;
struct nctempchar1 nctemp6177 = {{ 4}, (char*)";\n"};
nctemp6176=&nctemp6177;
nctempchar1* nctemp6174= nctemp6176;
int nctemp6178=CodeEs(nctemp6172,nctemp6174);
struct tree* nctemp6180= p;
nctempchar1* nctemp6182= pointer;
int nctemp6185=CodeEs(nctemp6180,nctemp6182);
struct tree* nctemp6187= p;
struct nctempchar1 *nctemp6191;
struct nctempchar1 nctemp6192 = {{ 2}, (char*)"="};
nctemp6191=&nctemp6192;
nctempchar1* nctemp6189= nctemp6191;
int nctemp6193=CodeEs(nctemp6187,nctemp6189);
struct tree* nctemp6195= p;
struct nctempchar1 *nctemp6199;
struct nctempchar1 nctemp6200 = {{ 2}, (char*)"("};
nctemp6199=&nctemp6200;
nctempchar1* nctemp6197= nctemp6199;
int nctemp6201=CodeEs(nctemp6195,nctemp6197);
struct tree* nctemp6203= p;
struct nctempchar1 *nctemp6207;
struct nctempchar1 nctemp6208 = {{ 14}, (char*)"struct nctemp"};
nctemp6207=&nctemp6208;
nctempchar1* nctemp6205= nctemp6207;
int nctemp6209=CodeEs(nctemp6203,nctemp6205);
struct tree* nctemp6211= p;
nctempchar1* nctemp6213= type;
int nctemp6216=CodeEs(nctemp6211,nctemp6213);
int nctemp6218= rank;
int nctemp6220=CodeEd(nctemp6218);
struct tree* nctemp6222= p;
struct nctempchar1 *nctemp6226;
struct nctempchar1 nctemp6227 = {{ 3}, (char*)"*)"};
nctemp6226=&nctemp6227;
nctempchar1* nctemp6224= nctemp6226;
int nctemp6228=CodeEs(nctemp6222,nctemp6224);
struct tree* nctemp6230= p;
struct nctempchar1 *nctemp6234;
struct nctempchar1 nctemp6235 = {{ 8}, (char*)"malloc("};
nctemp6234=&nctemp6235;
nctempchar1* nctemp6232= nctemp6234;
int nctemp6236=CodeEs(nctemp6230,nctemp6232);
struct tree* nctemp6238= p;
struct nctempchar1 *nctemp6242;
struct nctempchar1 nctemp6243 = {{ 21}, (char*)"sizeof(struct nctemp"};
nctemp6242=&nctemp6243;
nctempchar1* nctemp6240= nctemp6242;
int nctemp6244=CodeEs(nctemp6238,nctemp6240);
struct tree* nctemp6246= p;
nctempchar1* nctemp6248= type;
int nctemp6251=CodeEs(nctemp6246,nctemp6248);
int nctemp6253= rank;
int nctemp6255=CodeEd(nctemp6253);
struct tree* nctemp6257= p;
struct nctempchar1 *nctemp6261;
struct nctempchar1 nctemp6262 = {{ 6}, (char*)"));\n"};
nctemp6261=&nctemp6262;
nctempchar1* nctemp6259= nctemp6261;
int nctemp6263=CodeEs(nctemp6257,nctemp6259);
i =0;
p =sp;
int nctemp6272 = (p !=0);
int nctemp6276=nctemp6272;
while(nctemp6276)
{{
struct tree* nctemp6282= sp;
nctempchar1* nctemp6284=CodeExpr(nctemp6282);
dim=nctemp6284;
struct tree* nctemp6286= sp;
nctempchar1* nctemp6288= pointer;
int nctemp6291=CodeEs(nctemp6286,nctemp6288);
struct tree* nctemp6293= sp;
struct nctempchar1 *nctemp6297;
struct nctempchar1 nctemp6298 = {{ 4}, (char*)"->d"};
nctemp6297=&nctemp6298;
nctempchar1* nctemp6295= nctemp6297;
int nctemp6299=CodeEs(nctemp6293,nctemp6295);
struct tree* nctemp6301= sp;
struct nctempchar1 *nctemp6305;
struct nctempchar1 nctemp6306 = {{ 2}, (char*)"["};
nctemp6305=&nctemp6306;
nctempchar1* nctemp6303= nctemp6305;
int nctemp6307=CodeEs(nctemp6301,nctemp6303);
int nctemp6309= i;
int nctemp6311=CodeEd(nctemp6309);
struct tree* nctemp6313= sp;
struct nctempchar1 *nctemp6317;
struct nctempchar1 nctemp6318 = {{ 3}, (char*)"]="};
nctemp6317=&nctemp6318;
nctempchar1* nctemp6315= nctemp6317;
int nctemp6319=CodeEs(nctemp6313,nctemp6315);
struct tree* nctemp6321= sp;
nctempchar1* nctemp6323= dim;
int nctemp6326=CodeEs(nctemp6321,nctemp6323);
struct tree* nctemp6328= sp;
struct nctempchar1 *nctemp6332;
struct nctempchar1 nctemp6333 = {{ 4}, (char*)";\n"};
nctemp6332=&nctemp6333;
nctempchar1* nctemp6330= nctemp6332;
int nctemp6334=CodeEs(nctemp6328,nctemp6330);
int nctemp6343 = i + 1;
i =nctemp6343;
struct tree* nctemp6348= p;
struct tree* nctemp6350=PtreeMvsister(nctemp6348);
p =nctemp6350;
}
int nctemp6351 = (p !=0);
nctemp6276=nctemp6351;}struct tree* nctemp6356= sp;
nctempchar1* nctemp6358= pointer;
int nctemp6361=CodeEs(nctemp6356,nctemp6358);
struct tree* nctemp6363= sp;
struct nctempchar1 *nctemp6367;
struct nctempchar1 nctemp6368 = {{ 4}, (char*)"->a"};
nctemp6367=&nctemp6368;
nctempchar1* nctemp6365= nctemp6367;
int nctemp6369=CodeEs(nctemp6363,nctemp6365);
struct tree* nctemp6371= sp;
struct nctempchar1 *nctemp6375;
struct nctempchar1 nctemp6376 = {{ 2}, (char*)"="};
nctemp6375=&nctemp6376;
nctempchar1* nctemp6373= nctemp6375;
int nctemp6377=CodeEs(nctemp6371,nctemp6373);
struct tree* nctemp6379= sp;
struct nctempchar1 *nctemp6383;
struct nctempchar1 nctemp6384 = {{ 9}, (char*)"(struct "};
nctemp6383=&nctemp6384;
nctempchar1* nctemp6381= nctemp6383;
int nctemp6385=CodeEs(nctemp6379,nctemp6381);
struct tree* nctemp6387= sp;
nctempchar1* nctemp6389= type;
int nctemp6392=CodeEs(nctemp6387,nctemp6389);
struct tree* nctemp6394= sp;
struct nctempchar1 *nctemp6398;
struct nctempchar1 nctemp6399 = {{ 3}, (char*)"*)"};
nctemp6398=&nctemp6399;
nctempchar1* nctemp6396= nctemp6398;
int nctemp6400=CodeEs(nctemp6394,nctemp6396);
struct tree* nctemp6402= sp;
struct nctempchar1 *nctemp6406;
struct nctempchar1 nctemp6407 = {{ 15}, (char*)"malloc(sizeof("};
nctemp6406=&nctemp6407;
nctempchar1* nctemp6404= nctemp6406;
int nctemp6408=CodeEs(nctemp6402,nctemp6404);
struct tree* nctemp6410= sp;
struct nctempchar1 *nctemp6414;
struct nctempchar1 nctemp6415 = {{ 8}, (char*)"struct "};
nctemp6414=&nctemp6415;
nctempchar1* nctemp6412= nctemp6414;
int nctemp6416=CodeEs(nctemp6410,nctemp6412);
struct tree* nctemp6418= sp;
nctempchar1* nctemp6420= type;
int nctemp6423=CodeEs(nctemp6418,nctemp6420);
struct tree* nctemp6425= sp;
struct nctempchar1 *nctemp6429;
struct nctempchar1 nctemp6430 = {{ 2}, (char*)")"};
nctemp6429=&nctemp6430;
nctempchar1* nctemp6427= nctemp6429;
int nctemp6431=CodeEs(nctemp6425,nctemp6427);
struct tree* nctemp6433= sp;
struct nctempchar1 *nctemp6437;
struct nctempchar1 nctemp6438 = {{ 2}, (char*)"*"};
nctemp6437=&nctemp6438;
nctempchar1* nctemp6435= nctemp6437;
int nctemp6439=CodeEs(nctemp6433,nctemp6435);
struct tree* nctemp6441= sp;
nctempchar1* nctemp6443= totdim;
int nctemp6446=CodeEs(nctemp6441,nctemp6443);
struct tree* nctemp6448= sp;
struct nctempchar1 *nctemp6452;
struct nctempchar1 nctemp6453 = {{ 5}, (char*)");\n"};
nctemp6452=&nctemp6453;
nctempchar1* nctemp6450= nctemp6452;
int nctemp6454=CodeEs(nctemp6448,nctemp6450);
}
nctempchar1* nctemp6461= structflag;
struct nctempchar1 *nctemp6466;
struct nctempchar1 nctemp6467 = {{ 7}, (char*)"struct"};
nctemp6466=&nctemp6467;
nctempchar1* nctemp6464= nctemp6466;
int nctemp6468=LibeStrcmp(nctemp6461,nctemp6464);
int nctemp6458 = (nctemp6468 ==0);
nctempchar1* nctemp6474= arrayflag;
struct nctempchar1 *nctemp6479;
struct nctempchar1 nctemp6480 = {{ 6}, (char*)"array"};
nctemp6479=&nctemp6480;
nctempchar1* nctemp6477= nctemp6479;
int nctemp6481=LibeStrcmp(nctemp6474,nctemp6477);
int nctemp6471 = (nctemp6481 ==1);
int nctemp6455 = (nctemp6458 && nctemp6471);
if(nctemp6455)
{
int nctemp6484= 4;
int nctemp6486=LibeFlush(nctemp6484);
struct tree* nctemp6488= sp;
struct nctempchar1 *nctemp6492;
struct nctempchar1 nctemp6493 = {{ 7}, (char*)"nctemp"};
nctemp6492=&nctemp6493;
nctempchar1* nctemp6490= nctemp6492;
int nctemp6494=CodeEs(nctemp6488,nctemp6490);
struct tree* nctemp6496= sp;
nctempchar1* nctemp6498= type;
int nctemp6501=CodeEs(nctemp6496,nctemp6498);
int nctemp6503= rank;
int nctemp6505=CodeEd(nctemp6503);
struct tree* nctemp6507= sp;
struct nctempchar1 *nctemp6511;
struct nctempchar1 nctemp6512 = {{ 3}, (char*)" *"};
nctemp6511=&nctemp6512;
nctempchar1* nctemp6509= nctemp6511;
int nctemp6513=CodeEs(nctemp6507,nctemp6509);
struct tree* nctemp6515= sp;
nctempchar1* nctemp6517= pointer;
int nctemp6520=CodeEs(nctemp6515,nctemp6517);
struct tree* nctemp6522= sp;
struct nctempchar1 *nctemp6526;
struct nctempchar1 nctemp6527 = {{ 4}, (char*)";\n"};
nctemp6526=&nctemp6527;
nctempchar1* nctemp6524= nctemp6526;
int nctemp6528=CodeEs(nctemp6522,nctemp6524);
p =top;
i =0;
struct tree* nctemp6538= p;
nctempchar1* nctemp6540= pointer;
int nctemp6543=CodeEs(nctemp6538,nctemp6540);
struct tree* nctemp6545= p;
struct nctempchar1 *nctemp6549;
struct nctempchar1 nctemp6550 = {{ 2}, (char*)"="};
nctemp6549=&nctemp6550;
nctempchar1* nctemp6547= nctemp6549;
int nctemp6551=CodeEs(nctemp6545,nctemp6547);
struct tree* nctemp6553= p;
struct nctempchar1 *nctemp6557;
struct nctempchar1 nctemp6558 = {{ 2}, (char*)"("};
nctemp6557=&nctemp6558;
nctempchar1* nctemp6555= nctemp6557;
int nctemp6559=CodeEs(nctemp6553,nctemp6555);
struct tree* nctemp6561= p;
struct nctempchar1 *nctemp6565;
struct nctempchar1 nctemp6566 = {{ 7}, (char*)"nctemp"};
nctemp6565=&nctemp6566;
nctempchar1* nctemp6563= nctemp6565;
int nctemp6567=CodeEs(nctemp6561,nctemp6563);
struct tree* nctemp6569= p;
nctempchar1* nctemp6571= type;
int nctemp6574=CodeEs(nctemp6569,nctemp6571);
int nctemp6576= rank;
int nctemp6578=CodeEd(nctemp6576);
struct tree* nctemp6580= p;
struct nctempchar1 *nctemp6584;
struct nctempchar1 nctemp6585 = {{ 3}, (char*)"*)"};
nctemp6584=&nctemp6585;
nctempchar1* nctemp6582= nctemp6584;
int nctemp6586=CodeEs(nctemp6580,nctemp6582);
struct tree* nctemp6588= p;
struct nctempchar1 *nctemp6592;
struct nctempchar1 nctemp6593 = {{ 8}, (char*)"malloc("};
nctemp6592=&nctemp6593;
nctempchar1* nctemp6590= nctemp6592;
int nctemp6594=CodeEs(nctemp6588,nctemp6590);
struct tree* nctemp6596= p;
struct nctempchar1 *nctemp6600;
struct nctempchar1 nctemp6601 = {{ 14}, (char*)"sizeof(nctemp"};
nctemp6600=&nctemp6601;
nctempchar1* nctemp6598= nctemp6600;
int nctemp6602=CodeEs(nctemp6596,nctemp6598);
struct tree* nctemp6604= p;
nctempchar1* nctemp6606= type;
int nctemp6609=CodeEs(nctemp6604,nctemp6606);
int nctemp6611= rank;
int nctemp6613=CodeEd(nctemp6611);
struct tree* nctemp6615= p;
struct nctempchar1 *nctemp6619;
struct nctempchar1 nctemp6620 = {{ 6}, (char*)"));\n"};
nctemp6619=&nctemp6620;
nctempchar1* nctemp6617= nctemp6619;
int nctemp6621=CodeEs(nctemp6615,nctemp6617);
int nctemp6622 = (p !=0);
int nctemp6626=nctemp6622;
while(nctemp6626)
{{
struct tree* nctemp6632= p;
nctempchar1* nctemp6634=CodeExpr(nctemp6632);
dim=nctemp6634;
struct tree* nctemp6636= p;
nctempchar1* nctemp6638= pointer;
int nctemp6641=CodeEs(nctemp6636,nctemp6638);
struct tree* nctemp6643= p;
struct nctempchar1 *nctemp6647;
struct nctempchar1 nctemp6648 = {{ 4}, (char*)"->d"};
nctemp6647=&nctemp6648;
nctempchar1* nctemp6645= nctemp6647;
int nctemp6649=CodeEs(nctemp6643,nctemp6645);
struct tree* nctemp6651= p;
struct nctempchar1 *nctemp6655;
struct nctempchar1 nctemp6656 = {{ 2}, (char*)"["};
nctemp6655=&nctemp6656;
nctempchar1* nctemp6653= nctemp6655;
int nctemp6657=CodeEs(nctemp6651,nctemp6653);
int nctemp6659= i;
int nctemp6661=CodeEd(nctemp6659);
struct tree* nctemp6663= p;
struct nctempchar1 *nctemp6667;
struct nctempchar1 nctemp6668 = {{ 3}, (char*)"]="};
nctemp6667=&nctemp6668;
nctempchar1* nctemp6665= nctemp6667;
int nctemp6669=CodeEs(nctemp6663,nctemp6665);
struct tree* nctemp6671= p;
nctempchar1* nctemp6673= dim;
int nctemp6676=CodeEs(nctemp6671,nctemp6673);
struct tree* nctemp6678= p;
struct nctempchar1 *nctemp6682;
struct nctempchar1 nctemp6683 = {{ 4}, (char*)";\n"};
nctemp6682=&nctemp6683;
nctempchar1* nctemp6680= nctemp6682;
int nctemp6684=CodeEs(nctemp6678,nctemp6680);
int nctemp6693 = i + 1;
i =nctemp6693;
struct tree* nctemp6698= p;
struct tree* nctemp6700=PtreeMvsister(nctemp6698);
p =nctemp6700;
}
int nctemp6701 = (p !=0);
nctemp6626=nctemp6701;}p =top;
struct tree* nctemp6710= p;
nctempchar1* nctemp6712= pointer;
int nctemp6715=CodeEs(nctemp6710,nctemp6712);
struct tree* nctemp6717= p;
struct nctempchar1 *nctemp6721;
struct nctempchar1 nctemp6722 = {{ 4}, (char*)"->a"};
nctemp6721=&nctemp6722;
nctempchar1* nctemp6719= nctemp6721;
int nctemp6723=CodeEs(nctemp6717,nctemp6719);
struct tree* nctemp6725= p;
struct nctempchar1 *nctemp6729;
struct nctempchar1 nctemp6730 = {{ 3}, (char*)"=("};
nctemp6729=&nctemp6730;
nctempchar1* nctemp6727= nctemp6729;
int nctemp6731=CodeEs(nctemp6725,nctemp6727);
struct tree* nctemp6733= p;
nctempchar1* nctemp6735= type;
int nctemp6738=CodeEs(nctemp6733,nctemp6735);
struct tree* nctemp6740= p;
struct nctempchar1 *nctemp6744;
struct nctempchar1 nctemp6745 = {{ 4}, (char*)" *)"};
nctemp6744=&nctemp6745;
nctempchar1* nctemp6742= nctemp6744;
int nctemp6746=CodeEs(nctemp6740,nctemp6742);
struct tree* nctemp6748= p;
struct nctempchar1 *nctemp6752;
struct nctempchar1 nctemp6753 = {{ 15}, (char*)"malloc(sizeof("};
nctemp6752=&nctemp6753;
nctempchar1* nctemp6750= nctemp6752;
int nctemp6754=CodeEs(nctemp6748,nctemp6750);
struct tree* nctemp6756= p;
nctempchar1* nctemp6758= type;
int nctemp6761=CodeEs(nctemp6756,nctemp6758);
struct tree* nctemp6763= p;
struct nctempchar1 *nctemp6767;
struct nctempchar1 nctemp6768 = {{ 2}, (char*)")"};
nctemp6767=&nctemp6768;
nctempchar1* nctemp6765= nctemp6767;
int nctemp6769=CodeEs(nctemp6763,nctemp6765);
struct tree* nctemp6771= p;
struct nctempchar1 *nctemp6775;
struct nctempchar1 nctemp6776 = {{ 2}, (char*)"*"};
nctemp6775=&nctemp6776;
nctempchar1* nctemp6773= nctemp6775;
int nctemp6777=CodeEs(nctemp6771,nctemp6773);
struct tree* nctemp6779= p;
nctempchar1* nctemp6781= totdim;
int nctemp6784=CodeEs(nctemp6779,nctemp6781);
struct tree* nctemp6786= p;
struct nctempchar1 *nctemp6790;
struct nctempchar1 nctemp6791 = {{ 5}, (char*)");\n"};
nctemp6790=&nctemp6791;
nctempchar1* nctemp6788= nctemp6790;
int nctemp6792=CodeEs(nctemp6786,nctemp6788);
}
return pointer;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp6796= p;
nctempchar1* nctemp6798= pointer;
int nctemp6801=CodeEs(nctemp6796,nctemp6798);
struct tree* nctemp6803= p;
struct nctempchar1 *nctemp6807;
struct nctempchar1 nctemp6808 = {{ 2}, (char*)"="};
nctemp6807=&nctemp6808;
nctempchar1* nctemp6805= nctemp6807;
int nctemp6809=CodeEs(nctemp6803,nctemp6805);
struct tree* nctemp6811= p;
struct nctempchar1 *nctemp6815;
struct nctempchar1 nctemp6816 = {{ 8}, (char*)"malloc("};
nctemp6815=&nctemp6816;
nctempchar1* nctemp6813= nctemp6815;
int nctemp6817=CodeEs(nctemp6811,nctemp6813);
struct tree* nctemp6819= p;
struct nctempchar1 *nctemp6823;
struct nctempchar1 nctemp6824 = {{ 8}, (char*)"sizeof("};
nctemp6823=&nctemp6824;
nctempchar1* nctemp6821= nctemp6823;
int nctemp6825=CodeEs(nctemp6819,nctemp6821);
struct tree* nctemp6827= p;
nctempchar1* nctemp6829= pointer;
int nctemp6832=CodeEs(nctemp6827,nctemp6829);
struct tree* nctemp6834= p;
struct nctempchar1 *nctemp6838;
struct nctempchar1 nctemp6839 = {{ 6}, (char*)"));\n"};
nctemp6838=&nctemp6839;
nctempchar1* nctemp6836= nctemp6838;
int nctemp6840=CodeEs(nctemp6834,nctemp6836);
return 1;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp6846= p;
struct tree* nctemp6848=PtreeMvchild(nctemp6846);
p =nctemp6848;
struct tree* nctemp6853= p;
struct tree* nctemp6855=PtreeMvchild(nctemp6853);
p =nctemp6855;
struct tree* nctemp6861= p;
nctempchar1* nctemp6863=CodeBinexpr(nctemp6861);
tmp=nctemp6863;
struct tree* nctemp6867= p;
nctempchar1* nctemp6869=PtreeGetref(nctemp6867);
nctempchar1* nctemp6865= nctemp6869;
struct nctempchar1 *nctemp6872;
struct nctempchar1 nctemp6873 = {{ 5}, (char*)"aref"};
nctemp6872=&nctemp6873;
nctempchar1* nctemp6870= nctemp6872;
int nctemp6874=LibeStrcmp(nctemp6865,nctemp6870);
if(nctemp6874)
{
struct tree* nctemp6876= p;
struct nctempchar1 *nctemp6880;
struct nctempchar1 nctemp6881 = {{ 6}, (char*)"free("};
nctemp6880=&nctemp6881;
nctempchar1* nctemp6878= nctemp6880;
int nctemp6882=CodeEs(nctemp6876,nctemp6878);
struct tree* nctemp6884= p;
nctempchar1* nctemp6886= tmp;
int nctemp6889=CodeEs(nctemp6884,nctemp6886);
struct tree* nctemp6891= p;
struct nctempchar1 *nctemp6895;
struct nctempchar1 nctemp6896 = {{ 8}, (char*)"->a);\n"};
nctemp6895=&nctemp6896;
nctempchar1* nctemp6893= nctemp6895;
int nctemp6897=CodeEs(nctemp6891,nctemp6893);
}
return tmp;
}
nctempchar1 * CodeLen (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *index;
nctempchar1 *tempr;
struct tree* nctemp6907= p;
nctempchar1* nctemp6909=PtreeGetype(nctemp6907);
nctempchar1* nctemp6905= nctemp6909;
nctempchar1* nctemp6910=CodeNewtemp(nctemp6905);
tempr=nctemp6910;
struct tree* nctemp6915= p;
struct tree* nctemp6917=PtreeMvchild(nctemp6915);
np =nctemp6917;
struct tree* nctemp6923= np;
nctempchar1* nctemp6925=CodeExpr(nctemp6923);
temp=nctemp6925;
struct tree* nctemp6930= np;
struct tree* nctemp6932=PtreeMvsister(nctemp6930);
sp =nctemp6932;
struct tree* nctemp6938= sp;
nctempchar1* nctemp6940=CodeExpr(nctemp6938);
index=nctemp6940;
struct tree* nctemp6942= p;
struct tree* nctemp6946= p;
nctempchar1* nctemp6948=PtreeGetype(nctemp6946);
nctempchar1* nctemp6944= nctemp6948;
int nctemp6949=CodeEs(nctemp6942,nctemp6944);
struct tree* nctemp6951= p;
struct nctempchar1 *nctemp6955;
struct nctempchar1 nctemp6956 = {{ 2}, (char*)" "};
nctemp6955=&nctemp6956;
nctempchar1* nctemp6953= nctemp6955;
int nctemp6957=CodeEs(nctemp6951,nctemp6953);
struct tree* nctemp6959= p;
nctempchar1* nctemp6961= tempr;
int nctemp6964=CodeEs(nctemp6959,nctemp6961);
struct tree* nctemp6966= p;
struct nctempchar1 *nctemp6970;
struct nctempchar1 nctemp6971 = {{ 2}, (char*)"="};
nctemp6970=&nctemp6971;
nctempchar1* nctemp6968= nctemp6970;
int nctemp6972=CodeEs(nctemp6966,nctemp6968);
struct tree* nctemp6974= p;
nctempchar1* nctemp6976= temp;
int nctemp6979=CodeEs(nctemp6974,nctemp6976);
struct tree* nctemp6981= p;
struct nctempchar1 *nctemp6985;
struct nctempchar1 nctemp6986 = {{ 4}, (char*)"->d"};
nctemp6985=&nctemp6986;
nctempchar1* nctemp6983= nctemp6985;
int nctemp6987=CodeEs(nctemp6981,nctemp6983);
struct tree* nctemp6989= p;
struct nctempchar1 *nctemp6993;
struct nctempchar1 nctemp6994 = {{ 2}, (char*)"["};
nctemp6993=&nctemp6994;
nctempchar1* nctemp6991= nctemp6993;
int nctemp6995=CodeEs(nctemp6989,nctemp6991);
struct tree* nctemp6997= p;
nctempchar1* nctemp6999= index;
int nctemp7002=CodeEs(nctemp6997,nctemp6999);
struct tree* nctemp7004= p;
struct nctempchar1 *nctemp7008;
struct nctempchar1 nctemp7009 = {{ 3}, (char*)"];"};
nctemp7008=&nctemp7009;
nctempchar1* nctemp7006= nctemp7008;
int nctemp7010=CodeEs(nctemp7004,nctemp7006);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
struct tree* nctemp7020= p;
nctempchar1* nctemp7022=PtreeGetype(nctemp7020);
nctempchar1* nctemp7018= nctemp7022;
nctempchar1* nctemp7023=CodeNewtemp(nctemp7018);
tempr=nctemp7023;
struct tree* nctemp7028= p;
struct tree* nctemp7030=PtreeMvchild(nctemp7028);
np =nctemp7030;
struct tree* nctemp7035= np;
struct tree* nctemp7037=PtreeMvchild(nctemp7035);
np =nctemp7037;
struct tree* nctemp7043= np;
nctempchar1* nctemp7045=CodeExpr(nctemp7043);
q=nctemp7045;
struct tree* nctemp7050= np;
struct tree* nctemp7052=PtreeMvsister(nctemp7050);
sp =nctemp7052;
struct tree* nctemp7058= sp;
nctempchar1* nctemp7060=CodeExpr(nctemp7058);
r=nctemp7060;
struct tree* nctemp7062= p;
struct tree* nctemp7066= p;
nctempchar1* nctemp7068=PtreeGetype(nctemp7066);
nctempchar1* nctemp7064= nctemp7068;
int nctemp7069=CodeEs(nctemp7062,nctemp7064);
struct tree* nctemp7071= p;
struct nctempchar1 *nctemp7075;
struct nctempchar1 nctemp7076 = {{ 2}, (char*)" "};
nctemp7075=&nctemp7076;
nctempchar1* nctemp7073= nctemp7075;
int nctemp7077=CodeEs(nctemp7071,nctemp7073);
struct tree* nctemp7079= p;
nctempchar1* nctemp7081= tempr;
int nctemp7084=CodeEs(nctemp7079,nctemp7081);
struct tree* nctemp7086= p;
struct nctempchar1 *nctemp7090;
struct nctempchar1 nctemp7091 = {{ 3}, (char*)".r"};
nctemp7090=&nctemp7091;
nctempchar1* nctemp7088= nctemp7090;
int nctemp7092=CodeEs(nctemp7086,nctemp7088);
struct tree* nctemp7094= p;
struct nctempchar1 *nctemp7098;
struct nctempchar1 nctemp7099 = {{ 3}, (char*)" ="};
nctemp7098=&nctemp7099;
nctempchar1* nctemp7096= nctemp7098;
int nctemp7100=CodeEs(nctemp7094,nctemp7096);
struct tree* nctemp7102= p;
nctempchar1* nctemp7104= q;
int nctemp7107=CodeEs(nctemp7102,nctemp7104);
struct tree* nctemp7109= p;
struct nctempchar1 *nctemp7113;
struct nctempchar1 nctemp7114 = {{ 2}, (char*)";"};
nctemp7113=&nctemp7114;
nctempchar1* nctemp7111= nctemp7113;
int nctemp7115=CodeEs(nctemp7109,nctemp7111);
struct tree* nctemp7117= p;
struct tree* nctemp7121= p;
nctempchar1* nctemp7123=PtreeGetype(nctemp7121);
nctempchar1* nctemp7119= nctemp7123;
int nctemp7124=CodeEs(nctemp7117,nctemp7119);
struct tree* nctemp7126= p;
struct nctempchar1 *nctemp7130;
struct nctempchar1 nctemp7131 = {{ 2}, (char*)" "};
nctemp7130=&nctemp7131;
nctempchar1* nctemp7128= nctemp7130;
int nctemp7132=CodeEs(nctemp7126,nctemp7128);
struct tree* nctemp7134= p;
nctempchar1* nctemp7136= tempr;
int nctemp7139=CodeEs(nctemp7134,nctemp7136);
struct tree* nctemp7141= p;
struct nctempchar1 *nctemp7145;
struct nctempchar1 nctemp7146 = {{ 3}, (char*)".i"};
nctemp7145=&nctemp7146;
nctempchar1* nctemp7143= nctemp7145;
int nctemp7147=CodeEs(nctemp7141,nctemp7143);
struct tree* nctemp7149= p;
struct nctempchar1 *nctemp7153;
struct nctempchar1 nctemp7154 = {{ 2}, (char*)"="};
nctemp7153=&nctemp7154;
nctempchar1* nctemp7151= nctemp7153;
int nctemp7155=CodeEs(nctemp7149,nctemp7151);
struct tree* nctemp7157= p;
nctempchar1* nctemp7159= r;
int nctemp7162=CodeEs(nctemp7157,nctemp7159);
struct tree* nctemp7164= p;
struct nctempchar1 *nctemp7168;
struct nctempchar1 nctemp7169 = {{ 2}, (char*)";"};
nctemp7168=&nctemp7169;
nctempchar1* nctemp7166= nctemp7168;
int nctemp7170=CodeEs(nctemp7164,nctemp7166);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
struct tree* nctemp7180= p;
nctempchar1* nctemp7182=PtreeGetype(nctemp7180);
nctempchar1* nctemp7178= nctemp7182;
nctempchar1* nctemp7183=CodeNewtemp(nctemp7178);
tempr=nctemp7183;
struct tree* nctemp7188= p;
struct tree* nctemp7190=PtreeMvchild(nctemp7188);
np =nctemp7190;
struct tree* nctemp7196= np;
nctempchar1* nctemp7198=CodeExpr(nctemp7196);
q=nctemp7198;
struct tree* nctemp7200= p;
struct tree* nctemp7204= p;
nctempchar1* nctemp7206=PtreeGetype(nctemp7204);
nctempchar1* nctemp7202= nctemp7206;
int nctemp7207=CodeEs(nctemp7200,nctemp7202);
struct tree* nctemp7209= p;
struct nctempchar1 *nctemp7213;
struct nctempchar1 nctemp7214 = {{ 2}, (char*)" "};
nctemp7213=&nctemp7214;
nctempchar1* nctemp7211= nctemp7213;
int nctemp7215=CodeEs(nctemp7209,nctemp7211);
struct tree* nctemp7217= p;
nctempchar1* nctemp7219= tempr;
int nctemp7222=CodeEs(nctemp7217,nctemp7219);
struct tree* nctemp7224= p;
struct nctempchar1 *nctemp7228;
struct nctempchar1 nctemp7229 = {{ 3}, (char*)" ="};
nctemp7228=&nctemp7229;
nctempchar1* nctemp7226= nctemp7228;
int nctemp7230=CodeEs(nctemp7224,nctemp7226);
struct tree* nctemp7232= p;
nctempchar1* nctemp7234= q;
int nctemp7237=CodeEs(nctemp7232,nctemp7234);
struct tree* nctemp7239= p;
struct nctempchar1 *nctemp7243;
struct nctempchar1 nctemp7244 = {{ 5}, (char*)".i  "};
nctemp7243=&nctemp7244;
nctempchar1* nctemp7241= nctemp7243;
int nctemp7245=CodeEs(nctemp7239,nctemp7241);
struct tree* nctemp7247= p;
struct nctempchar1 *nctemp7251;
struct nctempchar1 nctemp7252 = {{ 4}, (char*)";\n"};
nctemp7251=&nctemp7252;
nctempchar1* nctemp7249= nctemp7251;
int nctemp7253=CodeEs(nctemp7247,nctemp7249);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp7260= p;
struct tree* nctemp7262=PtreeMvchild(nctemp7260);
np =nctemp7262;
struct tree* nctemp7268= np;
nctempchar1* nctemp7270=CodeExpr(nctemp7268);
q=nctemp7270;
struct tree* nctemp7278= p;
nctempchar1* nctemp7280=PtreeGetype(nctemp7278);
nctempchar1* nctemp7276= nctemp7280;
nctempchar1* nctemp7281=CodeNewtemp(nctemp7276);
tmp=nctemp7281;
struct tree* nctemp7283= p;
struct tree* nctemp7287= p;
nctempchar1* nctemp7289=PtreeGetype(nctemp7287);
nctempchar1* nctemp7285= nctemp7289;
int nctemp7290=CodeEs(nctemp7283,nctemp7285);
struct tree* nctemp7292= p;
struct nctempchar1 *nctemp7296;
struct nctempchar1 nctemp7297 = {{ 2}, (char*)" "};
nctemp7296=&nctemp7297;
nctempchar1* nctemp7294= nctemp7296;
int nctemp7298=CodeEs(nctemp7292,nctemp7294);
struct tree* nctemp7300= p;
nctempchar1* nctemp7302= tmp;
int nctemp7305=CodeEs(nctemp7300,nctemp7302);
struct tree* nctemp7307= p;
struct nctempchar1 *nctemp7311;
struct nctempchar1 nctemp7312 = {{ 3}, (char*)" ="};
nctemp7311=&nctemp7312;
nctempchar1* nctemp7309= nctemp7311;
int nctemp7313=CodeEs(nctemp7307,nctemp7309);
struct tree* nctemp7315= p;
nctempchar1* nctemp7317= q;
int nctemp7320=CodeEs(nctemp7315,nctemp7317);
struct tree* nctemp7322= p;
struct nctempchar1 *nctemp7326;
struct nctempchar1 nctemp7327 = {{ 5}, (char*)".r  "};
nctemp7326=&nctemp7327;
nctempchar1* nctemp7324= nctemp7326;
int nctemp7328=CodeEs(nctemp7322,nctemp7324);
struct tree* nctemp7330= p;
struct nctempchar1 *nctemp7334;
struct nctempchar1 nctemp7335 = {{ 4}, (char*)";\n"};
nctemp7334=&nctemp7335;
nctempchar1* nctemp7332= nctemp7334;
int nctemp7336=CodeEs(nctemp7330,nctemp7332);
return tmp;
}
nctempchar1 * CodeFcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *ntemp;
int noargs;
noargs =0;
struct tree* nctemp7349= p;
nctempchar1* nctemp7351=PtreeGetdef(nctemp7349);
nctempchar1* nctemp7347= nctemp7351;
struct symbol* nctemp7354=SymGetetp();
struct symbol* nctemp7352= nctemp7354;
struct symbol* nctemp7355=SymLookup(nctemp7347,nctemp7352);
tp =nctemp7355;
struct tree* nctemp7360= p;
struct tree* nctemp7362=PtreeMvchild(nctemp7360);
sp =nctemp7362;
int nctemp7363 = (sp !=0);
if(nctemp7363)
{
struct tree* nctemp7372= sp;
nctempchar1* nctemp7374=PtreeGetname(nctemp7372);
nctempchar1* nctemp7370= nctemp7374;
struct nctempchar1 *nctemp7377;
struct nctempchar1 nctemp7378 = {{ 9}, (char*)"exprlist"};
nctemp7377=&nctemp7378;
nctempchar1* nctemp7375= nctemp7377;
int nctemp7379=LibeStrcmp(nctemp7370,nctemp7375);
int nctemp7367 = (nctemp7379 ==1);
if(nctemp7367)
{
struct tree* nctemp7385= sp;
struct tree* nctemp7387=PtreeMvchild(nctemp7385);
sp =nctemp7387;
}
}
int nctemp7388 = (sp !=0);
int nctemp7392=nctemp7388;
while(nctemp7392)
{{
struct tree* nctemp7400= sp;
nctempchar1* nctemp7402=PtreeGetype(nctemp7400);
nctempchar1* nctemp7398= nctemp7402;
nctempchar1* nctemp7403=CodeNewtemp(nctemp7398);
ntemp=nctemp7403;
struct tree* nctemp7405= sp;
nctempchar1* nctemp7407= ntemp;
int nctemp7410=PtreeSetempr(nctemp7405,nctemp7407);
struct tree* nctemp7416= sp;
nctempchar1* nctemp7418=CodeExpr(nctemp7416);
temp=nctemp7418;
struct tree* nctemp7424= sp;
nctempchar1* nctemp7426=PtreeGetref(nctemp7424);
nctempchar1* nctemp7422= nctemp7426;
struct nctempchar1 *nctemp7429;
struct nctempchar1 nctemp7430 = {{ 5}, (char*)"aref"};
nctemp7429=&nctemp7430;
nctempchar1* nctemp7427= nctemp7429;
int nctemp7431=LibeStrcmp(nctemp7422,nctemp7427);
int nctemp7419 = (nctemp7431 ==1);
if(nctemp7419)
{
struct tree* nctemp7434= sp;
struct nctempchar1 *nctemp7438;
struct nctempchar1 nctemp7439 = {{ 7}, (char*)"nctemp"};
nctemp7438=&nctemp7439;
nctempchar1* nctemp7436= nctemp7438;
int nctemp7440=CodeEs(nctemp7434,nctemp7436);
struct tree* nctemp7442= sp;
struct tree* nctemp7446= sp;
nctempchar1* nctemp7448=PtreeGetype(nctemp7446);
nctempchar1* nctemp7444= nctemp7448;
int nctemp7449=CodeEs(nctemp7442,nctemp7444);
struct tree* nctemp7453= sp;
int nctemp7455=PtreeGetrank(nctemp7453);
int nctemp7451= nctemp7455;
int nctemp7456=CodeEd(nctemp7451);
struct tree* nctemp7458= sp;
struct nctempchar1 *nctemp7462;
struct nctempchar1 nctemp7463 = {{ 2}, (char*)"*"};
nctemp7462=&nctemp7463;
nctempchar1* nctemp7460= nctemp7462;
int nctemp7464=CodeEs(nctemp7458,nctemp7460);
}
else{
struct tree* nctemp7470= sp;
nctempchar1* nctemp7472=PtreeGetref(nctemp7470);
nctempchar1* nctemp7468= nctemp7472;
struct nctempchar1 *nctemp7475;
struct nctempchar1 nctemp7476 = {{ 5}, (char*)"sref"};
nctemp7475=&nctemp7476;
nctempchar1* nctemp7473= nctemp7475;
int nctemp7477=LibeStrcmp(nctemp7468,nctemp7473);
int nctemp7465 = (nctemp7477 ==1);
if(nctemp7465)
{
struct tree* nctemp7480= sp;
struct nctempchar1 *nctemp7484;
struct nctempchar1 nctemp7485 = {{ 8}, (char*)"struct "};
nctemp7484=&nctemp7485;
nctempchar1* nctemp7482= nctemp7484;
int nctemp7486=CodeEs(nctemp7480,nctemp7482);
struct tree* nctemp7488= sp;
struct tree* nctemp7492= sp;
nctempchar1* nctemp7494=PtreeGetype(nctemp7492);
nctempchar1* nctemp7490= nctemp7494;
int nctemp7495=CodeEs(nctemp7488,nctemp7490);
struct tree* nctemp7497= sp;
struct nctempchar1 *nctemp7501;
struct nctempchar1 nctemp7502 = {{ 2}, (char*)"*"};
nctemp7501=&nctemp7502;
nctempchar1* nctemp7499= nctemp7501;
int nctemp7503=CodeEs(nctemp7497,nctemp7499);
}
else{
struct tree* nctemp7505= sp;
struct tree* nctemp7509= sp;
nctempchar1* nctemp7511=PtreeGetype(nctemp7509);
nctempchar1* nctemp7507= nctemp7511;
int nctemp7512=CodeEs(nctemp7505,nctemp7507);
}
}
struct tree* nctemp7514= sp;
struct nctempchar1 *nctemp7518;
struct nctempchar1 nctemp7519 = {{ 2}, (char*)" "};
nctemp7518=&nctemp7519;
nctempchar1* nctemp7516= nctemp7518;
int nctemp7520=CodeEs(nctemp7514,nctemp7516);
struct tree* nctemp7522= sp;
nctempchar1* nctemp7524= ntemp;
int nctemp7527=CodeEs(nctemp7522,nctemp7524);
struct tree* nctemp7529= sp;
struct nctempchar1 *nctemp7533;
struct nctempchar1 nctemp7534 = {{ 3}, (char*)"= "};
nctemp7533=&nctemp7534;
nctempchar1* nctemp7531= nctemp7533;
int nctemp7535=CodeEs(nctemp7529,nctemp7531);
struct tree* nctemp7537= sp;
nctempchar1* nctemp7539= temp;
int nctemp7542=CodeEs(nctemp7537,nctemp7539);
struct tree* nctemp7544= sp;
struct nctempchar1 *nctemp7548;
struct nctempchar1 nctemp7549 = {{ 4}, (char*)";\n"};
nctemp7548=&nctemp7549;
nctempchar1* nctemp7546= nctemp7548;
int nctemp7550=CodeEs(nctemp7544,nctemp7546);
struct tree* nctemp7555= sp;
struct tree* nctemp7557=PtreeMvsister(nctemp7555);
sp =nctemp7557;
}
int nctemp7558 = (sp !=0);
nctemp7392=nctemp7558;}struct tree* nctemp7569= p;
nctempchar1* nctemp7571=PtreeGetype(nctemp7569);
nctempchar1* nctemp7567= nctemp7571;
nctempchar1* nctemp7572=CodeNewtemp(nctemp7567);
ntemp=nctemp7572;
struct tree* nctemp7578= p;
nctempchar1* nctemp7580=PtreeGetref(nctemp7578);
nctempchar1* nctemp7576= nctemp7580;
struct nctempchar1 *nctemp7583;
struct nctempchar1 nctemp7584 = {{ 5}, (char*)"aref"};
nctemp7583=&nctemp7584;
nctempchar1* nctemp7581= nctemp7583;
int nctemp7585=LibeStrcmp(nctemp7576,nctemp7581);
int nctemp7573 = (nctemp7585 ==1);
if(nctemp7573)
{
struct tree* nctemp7588= p;
struct nctempchar1 *nctemp7592;
struct nctempchar1 nctemp7593 = {{ 7}, (char*)"nctemp"};
nctemp7592=&nctemp7593;
nctempchar1* nctemp7590= nctemp7592;
int nctemp7594=CodeEs(nctemp7588,nctemp7590);
struct tree* nctemp7596= p;
struct tree* nctemp7600= p;
nctempchar1* nctemp7602=PtreeGetype(nctemp7600);
nctempchar1* nctemp7598= nctemp7602;
int nctemp7603=CodeEs(nctemp7596,nctemp7598);
struct tree* nctemp7607= p;
int nctemp7609=PtreeGetrank(nctemp7607);
int nctemp7605= nctemp7609;
int nctemp7610=CodeEd(nctemp7605);
struct tree* nctemp7612= p;
struct nctempchar1 *nctemp7616;
struct nctempchar1 nctemp7617 = {{ 2}, (char*)"*"};
nctemp7616=&nctemp7617;
nctempchar1* nctemp7614= nctemp7616;
int nctemp7618=CodeEs(nctemp7612,nctemp7614);
}
else{
struct tree* nctemp7624= p;
nctempchar1* nctemp7626=PtreeGetref(nctemp7624);
nctempchar1* nctemp7622= nctemp7626;
struct nctempchar1 *nctemp7629;
struct nctempchar1 nctemp7630 = {{ 5}, (char*)"sref"};
nctemp7629=&nctemp7630;
nctempchar1* nctemp7627= nctemp7629;
int nctemp7631=LibeStrcmp(nctemp7622,nctemp7627);
int nctemp7619 = (nctemp7631 ==1);
if(nctemp7619)
{
struct tree* nctemp7634= p;
struct nctempchar1 *nctemp7638;
struct nctempchar1 nctemp7639 = {{ 8}, (char*)"struct "};
nctemp7638=&nctemp7639;
nctempchar1* nctemp7636= nctemp7638;
int nctemp7640=CodeEs(nctemp7634,nctemp7636);
struct tree* nctemp7642= p;
struct tree* nctemp7646= p;
nctempchar1* nctemp7648=PtreeGetype(nctemp7646);
nctempchar1* nctemp7644= nctemp7648;
int nctemp7649=CodeEs(nctemp7642,nctemp7644);
struct tree* nctemp7651= p;
struct nctempchar1 *nctemp7655;
struct nctempchar1 nctemp7656 = {{ 2}, (char*)"*"};
nctemp7655=&nctemp7656;
nctempchar1* nctemp7653= nctemp7655;
int nctemp7657=CodeEs(nctemp7651,nctemp7653);
}
else{
struct tree* nctemp7659= p;
struct tree* nctemp7663= p;
nctempchar1* nctemp7665=PtreeGetype(nctemp7663);
nctempchar1* nctemp7661= nctemp7665;
int nctemp7666=CodeEs(nctemp7659,nctemp7661);
}
}
struct tree* nctemp7668= p;
struct nctempchar1 *nctemp7672;
struct nctempchar1 nctemp7673 = {{ 2}, (char*)" "};
nctemp7672=&nctemp7673;
nctempchar1* nctemp7670= nctemp7672;
int nctemp7674=CodeEs(nctemp7668,nctemp7670);
struct tree* nctemp7676= p;
nctempchar1* nctemp7678= ntemp;
int nctemp7681=CodeEs(nctemp7676,nctemp7678);
struct tree* nctemp7683= p;
struct nctempchar1 *nctemp7687;
struct nctempchar1 nctemp7688 = {{ 2}, (char*)"="};
nctemp7687=&nctemp7688;
nctempchar1* nctemp7685= nctemp7687;
int nctemp7689=CodeEs(nctemp7683,nctemp7685);
struct tree* nctemp7691= p;
struct symbol* nctemp7695= tp;
nctempchar1* nctemp7697=SymGetname(nctemp7695);
nctempchar1* nctemp7693= nctemp7697;
int nctemp7698=CodeEs(nctemp7691,nctemp7693);
struct tree* nctemp7700= p;
struct nctempchar1 *nctemp7704;
struct nctempchar1 nctemp7705 = {{ 2}, (char*)"("};
nctemp7704=&nctemp7705;
nctempchar1* nctemp7702= nctemp7704;
int nctemp7706=CodeEs(nctemp7700,nctemp7702);
struct tree* nctemp7711= p;
struct tree* nctemp7713=PtreeMvchild(nctemp7711);
sp =nctemp7713;
int nctemp7714 = (sp !=0);
if(nctemp7714)
{
struct tree* nctemp7722= sp;
struct tree* nctemp7724=PtreeMvchild(nctemp7722);
sp =nctemp7724;
}
int nctemp7725 = (sp !=0);
int nctemp7729=nctemp7725;
while(nctemp7729)
{{
struct tree* nctemp7731= p;
struct tree* nctemp7735= sp;
nctempchar1* nctemp7737=PtreeGetempr(nctemp7735);
nctempchar1* nctemp7733= nctemp7737;
int nctemp7738=CodeEs(nctemp7731,nctemp7733);
struct tree* nctemp7746= sp;
struct tree* nctemp7748=PtreeMvsister(nctemp7746);
sp =nctemp7748;
int nctemp7739 = (sp !=0);
if(nctemp7739)
{
struct tree* nctemp7751= p;
struct nctempchar1 *nctemp7755;
struct nctempchar1 nctemp7756 = {{ 2}, (char*)","};
nctemp7755=&nctemp7756;
nctempchar1* nctemp7753= nctemp7755;
int nctemp7757=CodeEs(nctemp7751,nctemp7753);
}
int nctemp7766 = noargs + 1;
noargs =nctemp7766;
}
int nctemp7767 = (sp !=0);
nctemp7729=nctemp7767;}struct tree* nctemp7772= p;
struct nctempchar1 *nctemp7776;
struct nctempchar1 nctemp7777 = {{ 5}, (char*)");\n"};
nctemp7776=&nctemp7777;
nctempchar1* nctemp7774= nctemp7776;
int nctemp7778=CodeEs(nctemp7772,nctemp7774);
return ntemp;
}
nctempchar1 * CodeArray (struct tree* p,nctempchar1 *qual,nctempchar1 *sel)
{
nctempchar1 *name;
nctempchar1 *temp;
nctempchar1 *temp2;
struct symbol* tp;
struct tree* sp;
int rank;
int size;
nctempchar1 *rval;
int i;
struct tree* nctemp7786= p;
nctempchar1* nctemp7788=PtreeGetdef(nctemp7786);
name=nctemp7788;
struct tree* nctemp7796= p;
nctempchar1* nctemp7798=PtreeGetype(nctemp7796);
nctempchar1* nctemp7794= nctemp7798;
nctempchar1* nctemp7799=CodeNewtemp(nctemp7794);
temp=nctemp7799;
nctempchar1* nctemp7804= name;
struct symbol* nctemp7807=SymLook(nctemp7804);
tp =nctemp7807;
int nctemp7808 = (tp ==0);
if(nctemp7808)
{
nctempchar1* nctemp7813= name;
int nctemp7816=ErrPanic(nctemp7813);
}
struct tree* nctemp7821= p;
struct tree* nctemp7823=PtreeMvchild(nctemp7821);
sp =nctemp7823;
int nctemp7824 = (sp ==0);
if(nctemp7824)
{
struct tree* nctemp7829= p;
nctempchar1* nctemp7831=PtreeGetdef(nctemp7829);
return nctemp7831;
}
else{
struct tree* nctemp7837= sp;
nctempchar1* nctemp7839=PtreeGetname(nctemp7837);
nctempchar1* nctemp7835= nctemp7839;
struct nctempchar1 *nctemp7842;
struct nctempchar1 nctemp7843 = {{ 9}, (char*)"exprlist"};
nctemp7842=&nctemp7843;
nctempchar1* nctemp7840= nctemp7842;
int nctemp7844=LibeStrcmp(nctemp7835,nctemp7840);
int nctemp7832 = (nctemp7844 ==0);
if(nctemp7832)
{
struct tree* nctemp7847= p;
nctempchar1* nctemp7849=PtreeGetdef(nctemp7847);
return nctemp7849;
}
}
struct symbol* nctemp7854= tp;
int nctemp7856=SymGetrank(nctemp7854);
rank =nctemp7856;
struct tree* nctemp7861= p;
struct tree* nctemp7863=PtreeMvchild(nctemp7861);
p =nctemp7863;
struct tree* nctemp7868= p;
struct tree* nctemp7870=PtreeMvchild(nctemp7868);
p =nctemp7870;
sp =p;
i =0;
int nctemp7879 = (i < rank);
while(nctemp7879){
{
int nctemp7883 = (i ==0);
if(nctemp7883)
{
struct tree* nctemp7892= p;
nctempchar1* nctemp7894=CodeExpr(nctemp7892);
temp2=nctemp7894;
struct tree* nctemp7896= p;
struct tree* nctemp7900= p;
nctempchar1* nctemp7902=PtreeGetype(nctemp7900);
nctempchar1* nctemp7898= nctemp7902;
int nctemp7903=CodeEs(nctemp7896,nctemp7898);
struct tree* nctemp7905= p;
struct nctempchar1 *nctemp7909;
struct nctempchar1 nctemp7910 = {{ 2}, (char*)" "};
nctemp7909=&nctemp7910;
nctempchar1* nctemp7907= nctemp7909;
int nctemp7911=CodeEs(nctemp7905,nctemp7907);
struct tree* nctemp7913= p;
nctempchar1* nctemp7915= temp;
int nctemp7918=CodeEs(nctemp7913,nctemp7915);
struct tree* nctemp7920= p;
struct nctempchar1 *nctemp7924;
struct nctempchar1 nctemp7925 = {{ 2}, (char*)"="};
nctemp7924=&nctemp7925;
nctempchar1* nctemp7922= nctemp7924;
int nctemp7926=CodeEs(nctemp7920,nctemp7922);
struct tree* nctemp7928= p;
nctempchar1* nctemp7930= temp2;
int nctemp7933=CodeEs(nctemp7928,nctemp7930);
struct tree* nctemp7935= p;
struct nctempchar1 *nctemp7939;
struct nctempchar1 nctemp7940 = {{ 4}, (char*)";\n"};
nctemp7939=&nctemp7940;
nctempchar1* nctemp7937= nctemp7939;
int nctemp7941=CodeEs(nctemp7935,nctemp7937);
int nctemp7943=CodeArraycheck();
if(nctemp7943)
{
struct tree* nctemp7947= p;
int nctemp7949=PtreeGetline(nctemp7947);
int nctemp7945= nctemp7949;
nctempchar1* nctemp7950= qual;
nctempchar1* nctemp7953= sel;
nctempchar1* nctemp7956= name;
nctempchar1* nctemp7959= temp2;
int nctemp7962= i;
int nctemp7964=CodeArrayex(nctemp7945,nctemp7950,nctemp7953,nctemp7956,nctemp7959,nctemp7962);
}
}
else{
struct tree* nctemp7970= sp;
nctempchar1* nctemp7972=CodeExpr(nctemp7970);
temp2=nctemp7972;
struct tree* nctemp7974= p;
nctempchar1* nctemp7976= temp;
int nctemp7979=CodeEs(nctemp7974,nctemp7976);
struct tree* nctemp7981= p;
struct nctempchar1 *nctemp7985;
struct nctempchar1 nctemp7986 = {{ 2}, (char*)"="};
nctemp7985=&nctemp7986;
nctempchar1* nctemp7983= nctemp7985;
int nctemp7987=CodeEs(nctemp7981,nctemp7983);
struct tree* nctemp7989= p;
nctempchar1* nctemp7991= temp2;
int nctemp7994=CodeEs(nctemp7989,nctemp7991);
struct tree* nctemp7996= p;
struct nctempchar1 *nctemp8000;
struct nctempchar1 nctemp8001 = {{ 2}, (char*)"*"};
nctemp8000=&nctemp8001;
nctempchar1* nctemp7998= nctemp8000;
int nctemp8002=CodeEs(nctemp7996,nctemp7998);
nctempchar1 *nctemp8004 =qual;
int nctemp8003 =(nctemp8004!=0);
if(nctemp8003)
{
struct tree* nctemp8009= p;
nctempchar1* nctemp8011= qual;
int nctemp8014=CodeEs(nctemp8009,nctemp8011);
}
nctempchar1 *nctemp8016 =sel;
int nctemp8015 =(nctemp8016!=0);
if(nctemp8015)
{
struct tree* nctemp8021= p;
nctempchar1* nctemp8023= sel;
int nctemp8026=CodeEs(nctemp8021,nctemp8023);
}
struct tree* nctemp8028= p;
nctempchar1* nctemp8030= name;
int nctemp8033=CodeEs(nctemp8028,nctemp8030);
struct tree* nctemp8035= p;
struct nctempchar1 *nctemp8039;
struct nctempchar1 nctemp8040 = {{ 4}, (char*)"->d"};
nctemp8039=&nctemp8040;
nctempchar1* nctemp8037= nctemp8039;
int nctemp8041=CodeEs(nctemp8035,nctemp8037);
struct tree* nctemp8043= p;
struct nctempchar1 *nctemp8047;
struct nctempchar1 nctemp8048 = {{ 2}, (char*)"["};
nctemp8047=&nctemp8048;
nctempchar1* nctemp8045= nctemp8047;
int nctemp8049=CodeEs(nctemp8043,nctemp8045);
int nctemp8056 = i - 1;
int nctemp8051= nctemp8056;
int nctemp8057=CodeEd(nctemp8051);
struct tree* nctemp8059= p;
struct nctempchar1 *nctemp8063;
struct nctempchar1 nctemp8064 = {{ 2}, (char*)"]"};
nctemp8063=&nctemp8064;
nctempchar1* nctemp8061= nctemp8063;
int nctemp8065=CodeEs(nctemp8059,nctemp8061);
struct tree* nctemp8067= p;
struct nctempchar1 *nctemp8071;
struct nctempchar1 nctemp8072 = {{ 2}, (char*)"+"};
nctemp8071=&nctemp8072;
nctempchar1* nctemp8069= nctemp8071;
int nctemp8073=CodeEs(nctemp8067,nctemp8069);
struct tree* nctemp8075= p;
nctempchar1* nctemp8077= temp;
int nctemp8080=CodeEs(nctemp8075,nctemp8077);
struct tree* nctemp8082= p;
struct nctempchar1 *nctemp8086;
struct nctempchar1 nctemp8087 = {{ 4}, (char*)";\n"};
nctemp8086=&nctemp8087;
nctempchar1* nctemp8084= nctemp8086;
int nctemp8088=CodeEs(nctemp8082,nctemp8084);
int nctemp8090=CodeArraycheck();
if(nctemp8090)
{
struct tree* nctemp8094= p;
int nctemp8096=PtreeGetline(nctemp8094);
int nctemp8092= nctemp8096;
nctempchar1* nctemp8097= qual;
nctempchar1* nctemp8100= sel;
nctempchar1* nctemp8103= name;
nctempchar1* nctemp8106= temp2;
int nctemp8109= i;
int nctemp8111=CodeArrayex(nctemp8092,nctemp8097,nctemp8100,nctemp8103,nctemp8106,nctemp8109);
}
}
int nctemp8112 = (sp !=0);
if(nctemp8112)
{
struct tree* nctemp8120= sp;
struct tree* nctemp8122=PtreeMvsister(nctemp8120);
sp =nctemp8122;
}
}
int nctemp8131 = i + 1;
i =nctemp8131;
int nctemp8132 = (i < rank);
nctemp7879=nctemp8132;
}
nctempchar1* nctemp8146= name;
int nctemp8149=LibeStrlen(nctemp8146);
nctempchar1* nctemp8151= temp;
int nctemp8154=LibeStrlen(nctemp8151);
int nctemp8155 = nctemp8149 + nctemp8154;
int nctemp8157 = nctemp8155 + 6;
size =nctemp8157;
int nctemp8164=size;
nctempchar1 *nctemp8163;
nctemp8163=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp8163->d[0]=size;
nctemp8163->a=(char *)malloc(sizeof(char)*nctemp8164);
rval=nctemp8163;
nctempchar1* nctemp8168= name;
nctempchar1* nctemp8171= rval;
int nctemp8174=LibeStrcpy(nctemp8168,nctemp8171);
struct nctempchar1 *nctemp8178;
struct nctempchar1 nctemp8179 = {{ 4}, (char*)"->a"};
nctemp8178=&nctemp8179;
nctempchar1* nctemp8176= nctemp8178;
nctempchar1* nctemp8180= rval;
int nctemp8183=LibeStrcat(nctemp8176,nctemp8180);
struct nctempchar1 *nctemp8187;
struct nctempchar1 nctemp8188 = {{ 2}, (char*)"["};
nctemp8187=&nctemp8188;
nctempchar1* nctemp8185= nctemp8187;
nctempchar1* nctemp8189= rval;
int nctemp8192=LibeStrcat(nctemp8185,nctemp8189);
nctempchar1* nctemp8194= temp;
nctempchar1* nctemp8197= rval;
int nctemp8200=LibeStrcat(nctemp8194,nctemp8197);
struct nctempchar1 *nctemp8204;
struct nctempchar1 nctemp8205 = {{ 2}, (char*)"]"};
nctemp8204=&nctemp8205;
nctempchar1* nctemp8202= nctemp8204;
nctempchar1* nctemp8206= rval;
int nctemp8209=LibeStrcat(nctemp8202,nctemp8206);
return rval;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
struct nctempchar1 *nctemp8218;
struct nctempchar1 nctemp8219 = {{ 6}, (char*)"dummy"};
nctemp8218=&nctemp8219;
nctempchar1* nctemp8216= nctemp8218;
struct nctempchar1 *nctemp8222;
struct nctempchar1 nctemp8223 = {{ 6}, (char*)"dummy"};
nctemp8222=&nctemp8223;
nctempchar1* nctemp8220= nctemp8222;
struct tree* nctemp8224=PtreeMknode(nctemp8216,nctemp8220);
p =nctemp8224;
struct tree* nctemp8226= p;
int nctemp8228= line;
int nctemp8230=PtreeSetline(nctemp8226,nctemp8228);
struct tree* nctemp8232= p;
struct nctempchar1 *nctemp8236;
struct nctempchar1 nctemp8237 = {{ 7}, (char*)"if((0>"};
nctemp8236=&nctemp8237;
nctempchar1* nctemp8234= nctemp8236;
int nctemp8238=CodeEs(nctemp8232,nctemp8234);
struct tree* nctemp8240= p;
nctempchar1* nctemp8242= ival;
int nctemp8245=CodeEs(nctemp8240,nctemp8242);
struct tree* nctemp8247= p;
struct nctempchar1 *nctemp8251;
struct nctempchar1 nctemp8252 = {{ 5}, (char*)")||("};
nctemp8251=&nctemp8252;
nctempchar1* nctemp8249= nctemp8251;
int nctemp8253=CodeEs(nctemp8247,nctemp8249);
struct tree* nctemp8255= p;
nctempchar1* nctemp8257= ival;
int nctemp8260=CodeEs(nctemp8255,nctemp8257);
struct tree* nctemp8262= p;
struct nctempchar1 *nctemp8266;
struct nctempchar1 nctemp8267 = {{ 3}, (char*)">="};
nctemp8266=&nctemp8267;
nctempchar1* nctemp8264= nctemp8266;
int nctemp8268=CodeEs(nctemp8262,nctemp8264);
nctempchar1 *nctemp8270 =qual;
int nctemp8269 =(nctemp8270!=0);
if(nctemp8269)
{
struct tree* nctemp8275= p;
nctempchar1* nctemp8277= qual;
int nctemp8280=CodeEs(nctemp8275,nctemp8277);
struct tree* nctemp8282= p;
nctempchar1* nctemp8284= sel;
int nctemp8287=CodeEs(nctemp8282,nctemp8284);
}
struct tree* nctemp8289= p;
nctempchar1* nctemp8291= name;
int nctemp8294=CodeEs(nctemp8289,nctemp8291);
struct tree* nctemp8296= p;
struct nctempchar1 *nctemp8300;
struct nctempchar1 nctemp8301 = {{ 5}, (char*)"->d["};
nctemp8300=&nctemp8301;
nctempchar1* nctemp8298= nctemp8300;
int nctemp8302=CodeEs(nctemp8296,nctemp8298);
int nctemp8304= index;
int nctemp8306=CodeEd(nctemp8304);
struct tree* nctemp8308= p;
struct nctempchar1 *nctemp8312;
struct nctempchar1 nctemp8313 = {{ 7}, (char*)"])){\n"};
nctemp8312=&nctemp8313;
nctempchar1* nctemp8310= nctemp8312;
int nctemp8314=CodeEs(nctemp8308,nctemp8310);
struct tree* nctemp8316= p;
struct nctempchar1 *nctemp8320;
struct nctempchar1 nctemp8321 = {{ 17}, (char*)"nctempstring->a="};
nctemp8320=&nctemp8321;
nctempchar1* nctemp8318= nctemp8320;
int nctemp8322=CodeEs(nctemp8316,nctemp8318);
struct tree* nctemp8324= p;
struct nctempchar1 *nctemp8328;
struct nctempchar1 nctemp8329 = {{ 3}, (char*)"\""};
nctemp8328=&nctemp8329;
nctempchar1* nctemp8326= nctemp8328;
int nctemp8330=CodeEs(nctemp8324,nctemp8326);
nctempchar1 *nctemp8332 =qual;
int nctemp8331 =(nctemp8332!=0);
if(nctemp8331)
{
struct tree* nctemp8337= p;
nctempchar1* nctemp8339= qual;
int nctemp8342=CodeEs(nctemp8337,nctemp8339);
struct tree* nctemp8344= p;
nctempchar1* nctemp8346= sel;
int nctemp8349=CodeEs(nctemp8344,nctemp8346);
}
struct tree* nctemp8351= p;
nctempchar1* nctemp8353= name;
int nctemp8356=CodeEs(nctemp8351,nctemp8353);
struct tree* nctemp8358= p;
struct nctempchar1 *nctemp8362;
struct nctempchar1 nctemp8363 = {{ 3}, (char*)"\""};
nctemp8362=&nctemp8363;
nctempchar1* nctemp8360= nctemp8362;
int nctemp8364=CodeEs(nctemp8358,nctemp8360);
struct tree* nctemp8366= p;
struct nctempchar1 *nctemp8370;
struct nctempchar1 nctemp8371 = {{ 4}, (char*)";\n"};
nctemp8370=&nctemp8371;
nctempchar1* nctemp8368= nctemp8370;
int nctemp8372=CodeEs(nctemp8366,nctemp8368);
struct tree* nctemp8374= p;
struct nctempchar1 *nctemp8378;
struct nctempchar1 nctemp8379 = {{ 20}, (char*)"nctempstring->d[0]="};
nctemp8378=&nctemp8379;
nctempchar1* nctemp8376= nctemp8378;
int nctemp8380=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8382= p;
struct nctempchar1 *nctemp8386;
struct nctempchar1 nctemp8387 = {{ 10}, (char*)"strlen(\""};
nctemp8386=&nctemp8387;
nctempchar1* nctemp8384= nctemp8386;
int nctemp8388=CodeEs(nctemp8382,nctemp8384);
nctempchar1 *nctemp8390 =qual;
int nctemp8389 =(nctemp8390!=0);
if(nctemp8389)
{
struct tree* nctemp8395= p;
nctempchar1* nctemp8397= qual;
int nctemp8400=CodeEs(nctemp8395,nctemp8397);
struct tree* nctemp8402= p;
nctempchar1* nctemp8404= sel;
int nctemp8407=CodeEs(nctemp8402,nctemp8404);
}
struct tree* nctemp8409= p;
nctempchar1* nctemp8411= name;
int nctemp8414=CodeEs(nctemp8409,nctemp8411);
struct tree* nctemp8416= p;
struct nctempchar1 *nctemp8420;
struct nctempchar1 nctemp8421 = {{ 7}, (char*)"\")+1;"};
nctemp8420=&nctemp8421;
nctempchar1* nctemp8418= nctemp8420;
int nctemp8422=CodeEs(nctemp8416,nctemp8418);
struct tree* nctemp8424= p;
struct nctempchar1 *nctemp8428;
struct nctempchar1 nctemp8429 = {{ 4}, (char*)";\n"};
nctemp8428=&nctemp8429;
nctempchar1* nctemp8426= nctemp8428;
int nctemp8430=CodeEs(nctemp8424,nctemp8426);
struct tree* nctemp8432= p;
struct nctempchar1 *nctemp8436;
struct nctempchar1 nctemp8437 = {{ 13}, (char*)"LibeArrayex("};
nctemp8436=&nctemp8437;
nctempchar1* nctemp8434= nctemp8436;
int nctemp8438=CodeEs(nctemp8432,nctemp8434);
int nctemp8440= line;
int nctemp8442=CodeEd(nctemp8440);
struct tree* nctemp8444= p;
struct nctempchar1 *nctemp8448;
struct nctempchar1 nctemp8449 = {{ 2}, (char*)","};
nctemp8448=&nctemp8449;
nctempchar1* nctemp8446= nctemp8448;
int nctemp8450=CodeEs(nctemp8444,nctemp8446);
struct tree* nctemp8452= p;
struct nctempchar1 *nctemp8456;
struct nctempchar1 nctemp8457 = {{ 13}, (char*)"nctempstring"};
nctemp8456=&nctemp8457;
nctempchar1* nctemp8454= nctemp8456;
int nctemp8458=CodeEs(nctemp8452,nctemp8454);
struct tree* nctemp8460= p;
struct nctempchar1 *nctemp8464;
struct nctempchar1 nctemp8465 = {{ 2}, (char*)","};
nctemp8464=&nctemp8465;
nctempchar1* nctemp8462= nctemp8464;
int nctemp8466=CodeEs(nctemp8460,nctemp8462);
struct tree* nctemp8468= p;
nctempchar1* nctemp8470= ival;
int nctemp8473=CodeEs(nctemp8468,nctemp8470);
struct tree* nctemp8475= p;
struct nctempchar1 *nctemp8479;
struct nctempchar1 nctemp8480 = {{ 2}, (char*)","};
nctemp8479=&nctemp8480;
nctempchar1* nctemp8477= nctemp8479;
int nctemp8481=CodeEs(nctemp8475,nctemp8477);
int nctemp8483= index;
int nctemp8485=CodeEd(nctemp8483);
struct tree* nctemp8487= p;
struct nctempchar1 *nctemp8491;
struct nctempchar1 nctemp8492 = {{ 2}, (char*)","};
nctemp8491=&nctemp8492;
nctempchar1* nctemp8489= nctemp8491;
int nctemp8493=CodeEs(nctemp8487,nctemp8489);
nctempchar1 *nctemp8495 =qual;
int nctemp8494 =(nctemp8495!=0);
if(nctemp8494)
{
struct tree* nctemp8500= p;
nctempchar1* nctemp8502= qual;
int nctemp8505=CodeEs(nctemp8500,nctemp8502);
struct tree* nctemp8507= p;
nctempchar1* nctemp8509= sel;
int nctemp8512=CodeEs(nctemp8507,nctemp8509);
}
struct tree* nctemp8514= p;
nctempchar1* nctemp8516= name;
int nctemp8519=CodeEs(nctemp8514,nctemp8516);
struct tree* nctemp8521= p;
struct nctempchar1 *nctemp8525;
struct nctempchar1 nctemp8526 = {{ 5}, (char*)"->d["};
nctemp8525=&nctemp8526;
nctempchar1* nctemp8523= nctemp8525;
int nctemp8527=CodeEs(nctemp8521,nctemp8523);
int nctemp8529= index;
int nctemp8531=CodeEd(nctemp8529);
struct tree* nctemp8533= p;
struct nctempchar1 *nctemp8537;
struct nctempchar1 nctemp8538 = {{ 2}, (char*)"]"};
nctemp8537=&nctemp8538;
nctempchar1* nctemp8535= nctemp8537;
int nctemp8539=CodeEs(nctemp8533,nctemp8535);
struct tree* nctemp8541= p;
struct nctempchar1 *nctemp8545;
struct nctempchar1 nctemp8546 = {{ 5}, (char*)");\n"};
nctemp8545=&nctemp8546;
nctempchar1* nctemp8543= nctemp8545;
int nctemp8547=CodeEs(nctemp8541,nctemp8543);
struct tree* nctemp8549= p;
struct nctempchar1 *nctemp8553;
struct nctempchar1 nctemp8554 = {{ 4}, (char*)"}\n"};
nctemp8553=&nctemp8554;
nctempchar1* nctemp8551= nctemp8553;
int nctemp8555=CodeEs(nctemp8549,nctemp8551);
return 1;
}
nctempchar1 * CodeCast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* tp;
nctempchar1 *expr;
int rank;
int i;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *descr;
nctempchar1 *tmp;
nctempchar1 *type;
struct tree* nctemp8564= p;
nctempchar1* nctemp8566=PtreeGetype(nctemp8564);
nctempchar1* nctemp8562= nctemp8566;
nctempchar1* nctemp8567=CodeNewtemp(nctemp8562);
pointer=nctemp8567;
struct tree* nctemp8575= p;
nctempchar1* nctemp8577=PtreeGetype(nctemp8575);
nctempchar1* nctemp8573= nctemp8577;
nctempchar1* nctemp8578=CodeNewtemp(nctemp8573);
descr=nctemp8578;
struct tree* nctemp8584= p;
nctempchar1* nctemp8586=PtreeGetype(nctemp8584);
type=nctemp8586;
struct tree* nctemp8592= p;
nctempchar1* nctemp8594=PtreeGetname(nctemp8592);
nctempchar1* nctemp8590= nctemp8594;
struct nctempchar1 *nctemp8597;
struct nctempchar1 nctemp8598 = {{ 5}, (char*)"cast"};
nctemp8597=&nctemp8598;
nctempchar1* nctemp8595= nctemp8597;
int nctemp8599=LibeStrcmp(nctemp8590,nctemp8595);
int nctemp8587 = (nctemp8599 ==1);
if(nctemp8587)
{
struct tree* nctemp8605= p;
struct tree* nctemp8607=PtreeMvchild(nctemp8605);
np =nctemp8607;
struct tree* nctemp8612= np;
struct tree* nctemp8614=PtreeMvsister(nctemp8612);
sp =nctemp8614;
struct tree* nctemp8620= sp;
nctempchar1* nctemp8622=CodeExpr(nctemp8620);
expr=nctemp8622;
struct tree* nctemp8628= np;
nctempchar1* nctemp8630=PtreeGetref(nctemp8628);
nctempchar1* nctemp8626= nctemp8630;
struct nctempchar1 *nctemp8633;
struct nctempchar1 nctemp8634 = {{ 5}, (char*)"sref"};
nctemp8633=&nctemp8634;
nctempchar1* nctemp8631= nctemp8633;
int nctemp8635=LibeStrcmp(nctemp8626,nctemp8631);
int nctemp8623 = (nctemp8635 ==1);
if(nctemp8623)
{
struct tree* nctemp8644= p;
nctempchar1* nctemp8646=PtreeGetype(nctemp8644);
nctempchar1* nctemp8642= nctemp8646;
nctempchar1* nctemp8647=CodeNewtemp(nctemp8642);
tmp=nctemp8647;
struct tree* nctemp8649= p;
nctempchar1* nctemp8651= type;
int nctemp8654=CodeEs(nctemp8649,nctemp8651);
struct tree* nctemp8656= p;
struct nctempchar1 *nctemp8660;
struct nctempchar1 nctemp8661 = {{ 2}, (char*)" "};
nctemp8660=&nctemp8661;
nctempchar1* nctemp8658= nctemp8660;
int nctemp8662=CodeEs(nctemp8656,nctemp8658);
struct tree* nctemp8664= p;
nctempchar1* nctemp8666= tmp;
int nctemp8669=CodeEs(nctemp8664,nctemp8666);
struct tree* nctemp8671= p;
struct nctempchar1 *nctemp8675;
struct nctempchar1 nctemp8676 = {{ 2}, (char*)"="};
nctemp8675=&nctemp8676;
nctempchar1* nctemp8673= nctemp8675;
int nctemp8677=CodeEs(nctemp8671,nctemp8673);
struct tree* nctemp8679= p;
struct nctempchar1 *nctemp8683;
struct nctempchar1 nctemp8684 = {{ 9}, (char*)"(struct "};
nctemp8683=&nctemp8684;
nctempchar1* nctemp8681= nctemp8683;
int nctemp8685=CodeEs(nctemp8679,nctemp8681);
struct tree* nctemp8687= p;
struct tree* nctemp8691= np;
nctempchar1* nctemp8693=PtreeGetype(nctemp8691);
nctempchar1* nctemp8689= nctemp8693;
int nctemp8694=CodeEs(nctemp8687,nctemp8689);
struct tree* nctemp8696= p;
struct nctempchar1 *nctemp8700;
struct nctempchar1 nctemp8701 = {{ 4}, (char*)"*)("};
nctemp8700=&nctemp8701;
nctempchar1* nctemp8698= nctemp8700;
int nctemp8702=CodeEs(nctemp8696,nctemp8698);
struct tree* nctemp8704= p;
nctempchar1* nctemp8706= expr;
int nctemp8709=CodeEs(nctemp8704,nctemp8706);
struct tree* nctemp8711= p;
struct nctempchar1 *nctemp8715;
struct nctempchar1 nctemp8716 = {{ 5}, (char*)");\n"};
nctemp8715=&nctemp8716;
nctempchar1* nctemp8713= nctemp8715;
int nctemp8717=CodeEs(nctemp8711,nctemp8713);
}
else{
struct tree* nctemp8723= np;
nctempchar1* nctemp8725=PtreeGetref(nctemp8723);
nctempchar1* nctemp8721= nctemp8725;
struct nctempchar1 *nctemp8728;
struct nctempchar1 nctemp8729 = {{ 5}, (char*)"aref"};
nctemp8728=&nctemp8729;
nctempchar1* nctemp8726= nctemp8728;
int nctemp8730=LibeStrcmp(nctemp8721,nctemp8726);
int nctemp8718 = (nctemp8730 ==1);
if(nctemp8718)
{
struct tree* nctemp8736= np;
struct tree* nctemp8738=PtreeMvchild(nctemp8736);
np =nctemp8738;
struct tree* nctemp8743= np;
struct tree* nctemp8745=PtreeMvchild(nctemp8743);
np =nctemp8745;
struct tree* nctemp8750= np;
struct tree* nctemp8752=PtreeMvchild(nctemp8750);
np =nctemp8752;
struct tree* nctemp8757= np;
struct tree* nctemp8759=PtreeMvchild(nctemp8757);
np =nctemp8759;
tp =np;
rank =1;
struct tree* nctemp8775= np;
struct tree* nctemp8777=PtreeMvsister(nctemp8775);
np =nctemp8777;
int nctemp8768 = (np !=0);
int nctemp8779=nctemp8768;
while(nctemp8779)
{{
int nctemp8788 = rank + 1;
rank =nctemp8788;
}
struct tree* nctemp8796= np;
struct tree* nctemp8798=PtreeMvsister(nctemp8796);
np =nctemp8798;
int nctemp8789 = (np !=0);
nctemp8779=nctemp8789;}int nctemp8800 = (rank > 4);
if(nctemp8800)
{
struct nctempchar1 *nctemp8807;
struct nctempchar1 nctemp8808 = {{ 29}, (char*)"Array dimension is too large"};
nctemp8807=&nctemp8808;
nctempchar1* nctemp8805= nctemp8807;
int nctemp8809=ErrPanic(nctemp8805);
}
p =tp;
struct tree* nctemp8815= p;
struct nctempchar1 *nctemp8819;
struct nctempchar1 nctemp8820 = {{ 7}, (char*)"nctemp"};
nctemp8819=&nctemp8820;
nctempchar1* nctemp8817= nctemp8819;
int nctemp8821=CodeEs(nctemp8815,nctemp8817);
struct tree* nctemp8823= p;
nctempchar1* nctemp8825= type;
int nctemp8828=CodeEs(nctemp8823,nctemp8825);
int nctemp8830= rank;
int nctemp8832=CodeEd(nctemp8830);
struct tree* nctemp8834= p;
struct nctempchar1 *nctemp8838;
struct nctempchar1 nctemp8839 = {{ 2}, (char*)" "};
nctemp8838=&nctemp8839;
nctempchar1* nctemp8836= nctemp8838;
int nctemp8840=CodeEs(nctemp8834,nctemp8836);
struct tree* nctemp8842= sp;
nctempchar1* nctemp8844= descr;
int nctemp8847=CodeEs(nctemp8842,nctemp8844);
struct tree* nctemp8849= sp;
struct nctempchar1 *nctemp8853;
struct nctempchar1 nctemp8854 = {{ 4}, (char*)";\n"};
nctemp8853=&nctemp8854;
nctempchar1* nctemp8851= nctemp8853;
int nctemp8855=CodeEs(nctemp8849,nctemp8851);
struct tree* nctemp8857= p;
struct nctempchar1 *nctemp8861;
struct nctempchar1 nctemp8862 = {{ 7}, (char*)"nctemp"};
nctemp8861=&nctemp8862;
nctempchar1* nctemp8859= nctemp8861;
int nctemp8863=CodeEs(nctemp8857,nctemp8859);
struct tree* nctemp8865= p;
nctempchar1* nctemp8867= type;
int nctemp8870=CodeEs(nctemp8865,nctemp8867);
int nctemp8872= rank;
int nctemp8874=CodeEd(nctemp8872);
struct tree* nctemp8876= p;
struct nctempchar1 *nctemp8880;
struct nctempchar1 nctemp8881 = {{ 3}, (char*)" *"};
nctemp8880=&nctemp8881;
nctempchar1* nctemp8878= nctemp8880;
int nctemp8882=CodeEs(nctemp8876,nctemp8878);
struct tree* nctemp8884= sp;
nctempchar1* nctemp8886= pointer;
int nctemp8889=CodeEs(nctemp8884,nctemp8886);
struct tree* nctemp8891= p;
struct nctempchar1 *nctemp8895;
struct nctempchar1 nctemp8896 = {{ 4}, (char*)";\n"};
nctemp8895=&nctemp8896;
nctempchar1* nctemp8893= nctemp8895;
int nctemp8897=CodeEs(nctemp8891,nctemp8893);
struct tree* nctemp8899= sp;
nctempchar1* nctemp8901= descr;
int nctemp8904=CodeEs(nctemp8899,nctemp8901);
struct tree* nctemp8906= sp;
struct nctempchar1 *nctemp8910;
struct nctempchar1 nctemp8911 = {{ 2}, (char*)"="};
nctemp8910=&nctemp8911;
nctempchar1* nctemp8908= nctemp8910;
int nctemp8912=CodeEs(nctemp8906,nctemp8908);
struct tree* nctemp8914= sp;
struct nctempchar1 *nctemp8918;
struct nctempchar1 nctemp8919 = {{ 3}, (char*)"*("};
nctemp8918=&nctemp8919;
nctempchar1* nctemp8916= nctemp8918;
int nctemp8920=CodeEs(nctemp8914,nctemp8916);
struct tree* nctemp8922= p;
struct nctempchar1 *nctemp8926;
struct nctempchar1 nctemp8927 = {{ 7}, (char*)"nctemp"};
nctemp8926=&nctemp8927;
nctempchar1* nctemp8924= nctemp8926;
int nctemp8928=CodeEs(nctemp8922,nctemp8924);
struct tree* nctemp8930= sp;
nctempchar1* nctemp8932= type;
int nctemp8935=CodeEs(nctemp8930,nctemp8932);
int nctemp8937= rank;
int nctemp8939=CodeEd(nctemp8937);
struct tree* nctemp8941= sp;
struct nctempchar1 *nctemp8945;
struct nctempchar1 nctemp8946 = {{ 4}, (char*)"*)("};
nctemp8945=&nctemp8946;
nctempchar1* nctemp8943= nctemp8945;
int nctemp8947=CodeEs(nctemp8941,nctemp8943);
struct tree* nctemp8949= sp;
nctempchar1* nctemp8951= expr;
int nctemp8954=CodeEs(nctemp8949,nctemp8951);
struct tree* nctemp8956= sp;
struct nctempchar1 *nctemp8960;
struct nctempchar1 nctemp8961 = {{ 5}, (char*)");\n"};
nctemp8960=&nctemp8961;
nctempchar1* nctemp8958= nctemp8960;
int nctemp8962=CodeEs(nctemp8956,nctemp8958);
p =tp;
i =0;
int nctemp8971 = (p !=0);
int nctemp8975=nctemp8971;
while(nctemp8975)
{{
struct tree* nctemp8981= p;
nctempchar1* nctemp8983=CodeExpr(nctemp8981);
dim=nctemp8983;
struct tree* nctemp8985= sp;
nctempchar1* nctemp8987= descr;
int nctemp8990=CodeEs(nctemp8985,nctemp8987);
struct tree* nctemp8992= sp;
struct nctempchar1 *nctemp8996;
struct nctempchar1 nctemp8997 = {{ 3}, (char*)".d"};
nctemp8996=&nctemp8997;
nctempchar1* nctemp8994= nctemp8996;
int nctemp8998=CodeEs(nctemp8992,nctemp8994);
struct tree* nctemp9000= sp;
struct nctempchar1 *nctemp9004;
struct nctempchar1 nctemp9005 = {{ 2}, (char*)"["};
nctemp9004=&nctemp9005;
nctempchar1* nctemp9002= nctemp9004;
int nctemp9006=CodeEs(nctemp9000,nctemp9002);
int nctemp9008= i;
int nctemp9010=CodeEd(nctemp9008);
struct tree* nctemp9012= sp;
struct nctempchar1 *nctemp9016;
struct nctempchar1 nctemp9017 = {{ 3}, (char*)"]="};
nctemp9016=&nctemp9017;
nctempchar1* nctemp9014= nctemp9016;
int nctemp9018=CodeEs(nctemp9012,nctemp9014);
struct tree* nctemp9020= sp;
nctempchar1* nctemp9022= dim;
int nctemp9025=CodeEs(nctemp9020,nctemp9022);
struct tree* nctemp9027= sp;
struct nctempchar1 *nctemp9031;
struct nctempchar1 nctemp9032 = {{ 4}, (char*)";\n"};
nctemp9031=&nctemp9032;
nctempchar1* nctemp9029= nctemp9031;
int nctemp9033=CodeEs(nctemp9027,nctemp9029);
int nctemp9042 = i + 1;
i =nctemp9042;
struct tree* nctemp9047= p;
struct tree* nctemp9049=PtreeMvsister(nctemp9047);
p =nctemp9049;
}
int nctemp9050 = (p !=0);
nctemp8975=nctemp9050;}struct tree* nctemp9055= sp;
nctempchar1* nctemp9057= pointer;
int nctemp9060=CodeEs(nctemp9055,nctemp9057);
struct tree* nctemp9062= sp;
struct nctempchar1 *nctemp9066;
struct nctempchar1 nctemp9067 = {{ 3}, (char*)"=&"};
nctemp9066=&nctemp9067;
nctempchar1* nctemp9064= nctemp9066;
int nctemp9068=CodeEs(nctemp9062,nctemp9064);
struct tree* nctemp9070= sp;
nctempchar1* nctemp9072= descr;
int nctemp9075=CodeEs(nctemp9070,nctemp9072);
struct tree* nctemp9077= sp;
struct nctempchar1 *nctemp9081;
struct nctempchar1 nctemp9082 = {{ 4}, (char*)";\n"};
nctemp9081=&nctemp9082;
nctempchar1* nctemp9079= nctemp9081;
int nctemp9083=CodeEs(nctemp9077,nctemp9079);
}
else{
struct tree* nctemp9085= p;
nctempchar1* nctemp9087= type;
int nctemp9090=CodeEs(nctemp9085,nctemp9087);
struct tree* nctemp9092= p;
struct nctempchar1 *nctemp9096;
struct nctempchar1 nctemp9097 = {{ 2}, (char*)" "};
nctemp9096=&nctemp9097;
nctempchar1* nctemp9094= nctemp9096;
int nctemp9098=CodeEs(nctemp9092,nctemp9094);
struct tree* nctemp9100= p;
nctempchar1* nctemp9102= pointer;
int nctemp9105=CodeEs(nctemp9100,nctemp9102);
struct tree* nctemp9107= p;
struct nctempchar1 *nctemp9111;
struct nctempchar1 nctemp9112 = {{ 2}, (char*)"="};
nctemp9111=&nctemp9112;
nctempchar1* nctemp9109= nctemp9111;
int nctemp9113=CodeEs(nctemp9107,nctemp9109);
struct tree* nctemp9115= p;
struct nctempchar1 *nctemp9119;
struct nctempchar1 nctemp9120 = {{ 2}, (char*)"("};
nctemp9119=&nctemp9120;
nctempchar1* nctemp9117= nctemp9119;
int nctemp9121=CodeEs(nctemp9115,nctemp9117);
struct tree* nctemp9123= p;
struct tree* nctemp9127= np;
nctempchar1* nctemp9129=PtreeGetype(nctemp9127);
nctempchar1* nctemp9125= nctemp9129;
int nctemp9130=CodeEs(nctemp9123,nctemp9125);
struct tree* nctemp9132= p;
struct nctempchar1 *nctemp9136;
struct nctempchar1 nctemp9137 = {{ 3}, (char*)")("};
nctemp9136=&nctemp9137;
nctempchar1* nctemp9134= nctemp9136;
int nctemp9138=CodeEs(nctemp9132,nctemp9134);
struct tree* nctemp9140= p;
nctempchar1* nctemp9142= expr;
int nctemp9145=CodeEs(nctemp9140,nctemp9142);
struct tree* nctemp9147= p;
struct nctempchar1 *nctemp9151;
struct nctempchar1 nctemp9152 = {{ 5}, (char*)");\n"};
nctemp9151=&nctemp9152;
nctempchar1* nctemp9149= nctemp9151;
int nctemp9153=CodeEs(nctemp9147,nctemp9149);
}
}
}
return pointer;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp9160= qual;
int nctemp9163=LibeStrlen(nctemp9160);
lq =nctemp9163;
nctempchar1* nctemp9168= ident;
int nctemp9171=LibeStrlen(nctemp9168);
li =nctemp9171;
int nctemp9186 = lq + li;
int nctemp9188 = nctemp9186 + 2;
int nctemp9178=nctemp9188;
nctempchar1 *nctemp9177;
nctemp9177=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp9196 = lq + li;
int nctemp9198 = nctemp9196 + 2;
nctemp9177->d[0]=nctemp9198;
nctemp9177->a=(char *)malloc(sizeof(char)*nctemp9178);
name=nctemp9177;
nctempchar1* nctemp9200= qual;
nctempchar1* nctemp9203= name;
int nctemp9206=LibeStrcpy(nctemp9200,nctemp9203);
struct nctempchar1 *nctemp9210;
struct nctempchar1 nctemp9211 = {{ 2}, (char*)"."};
nctemp9210=&nctemp9211;
nctempchar1* nctemp9208= nctemp9210;
nctempchar1* nctemp9212= name;
int nctemp9215=LibeStrcat(nctemp9208,nctemp9212);
nctempchar1* nctemp9217= ident;
nctempchar1* nctemp9220= name;
int nctemp9223=LibeStrcat(nctemp9217,nctemp9220);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp9230= qual;
int nctemp9233=LibeStrlen(nctemp9230);
lq =nctemp9233;
nctempchar1* nctemp9238= ident;
int nctemp9241=LibeStrlen(nctemp9238);
li =nctemp9241;
int nctemp9256 = lq + li;
int nctemp9258 = nctemp9256 + 3;
int nctemp9248=nctemp9258;
nctempchar1 *nctemp9247;
nctemp9247=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp9266 = lq + li;
int nctemp9268 = nctemp9266 + 3;
nctemp9247->d[0]=nctemp9268;
nctemp9247->a=(char *)malloc(sizeof(char)*nctemp9248);
name=nctemp9247;
nctempchar1* nctemp9270= qual;
nctempchar1* nctemp9273= name;
int nctemp9276=LibeStrcpy(nctemp9270,nctemp9273);
struct nctempchar1 *nctemp9280;
struct nctempchar1 nctemp9281 = {{ 3}, (char*)"->"};
nctemp9280=&nctemp9281;
nctempchar1* nctemp9278= nctemp9280;
nctempchar1* nctemp9282= name;
int nctemp9285=LibeStrcat(nctemp9278,nctemp9282);
nctempchar1* nctemp9287= ident;
nctempchar1* nctemp9290= name;
int nctemp9293=LibeStrcat(nctemp9287,nctemp9290);
return name;
}
int CodeEs (struct tree* p,nctempchar1 *s)
{
int nctemp9299=CodeDebug();
int nctemp9296 = (nctemp9299 ==1);
if(nctemp9296)
{
int nctemp9301 = (p !=0);
if(nctemp9301)
{
struct tree* nctemp9308= p;
int nctemp9310=PtreeGetline(nctemp9308);
int nctemp9305 = (nctemp9310 !=CodeLine);
if(nctemp9305)
{
int nctemp9313= 3;
struct nctempchar1 *nctemp9317;
struct nctempchar1 nctemp9318 = {{ 3}, (char*)"\n"};
nctemp9317=&nctemp9318;
nctempchar1* nctemp9315= nctemp9317;
int nctemp9319=LibePuts(nctemp9313,nctemp9315);
int nctemp9321= 3;
struct nctempchar1 *nctemp9325;
struct nctempchar1 nctemp9326 = {{ 7}, (char*)"#line "};
nctemp9325=&nctemp9326;
nctempchar1* nctemp9323= nctemp9325;
int nctemp9327=LibePuts(nctemp9321,nctemp9323);
int nctemp9329= 3;
struct tree* nctemp9333= p;
int nctemp9335=PtreeGetline(nctemp9333);
int nctemp9331= nctemp9335;
int nctemp9336=LibePuti(nctemp9329,nctemp9331);
int nctemp9338= 3;
struct nctempchar1 *nctemp9342;
struct nctempchar1 nctemp9343 = {{ 3}, (char*)"  "};
nctemp9342=&nctemp9343;
nctempchar1* nctemp9340= nctemp9342;
int nctemp9344=LibePuts(nctemp9338,nctemp9340);
int nctemp9346= 3;
int nctemp9348= 34;
int nctemp9350=LibePutc(nctemp9346,nctemp9348);
int nctemp9352= 3;
struct tree* nctemp9356= p;
nctempchar1* nctemp9358=PtreeGetfile(nctemp9356);
nctempchar1* nctemp9354= nctemp9358;
int nctemp9359=LibePuts(nctemp9352,nctemp9354);
int nctemp9361= 3;
int nctemp9363= 34;
int nctemp9365=LibePutc(nctemp9361,nctemp9363);
int nctemp9367= 3;
struct nctempchar1 *nctemp9371;
struct nctempchar1 nctemp9372 = {{ 3}, (char*)"\n"};
nctemp9371=&nctemp9372;
nctempchar1* nctemp9369= nctemp9371;
int nctemp9373=LibePuts(nctemp9367,nctemp9369);
struct tree* nctemp9378= p;
int nctemp9380=PtreeGetline(nctemp9378);
CodeLine =nctemp9380;
}
}
}
int nctemp9382= 3;
nctempchar1* nctemp9384= s;
int nctemp9387=LibePuts(nctemp9382,nctemp9384);
return 1;
}
int CodeEd (int d)
{
int nctemp9390= 3;
int nctemp9392= d;
int nctemp9394=LibePuti(nctemp9390,nctemp9392);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
struct tree* rrp;
struct tree* qp;
int rank;
int i;
nctempchar1 *index;
nctempchar1 *cond;
nctempchar1 *init;
sp =p;
struct tree* nctemp9404= sp;
int nctemp9406=PtreeGetrank(nctemp9404);
rank =nctemp9406;
struct tree* nctemp9411= p;
struct tree* nctemp9413=PtreeMvchild(nctemp9411);
p =nctemp9413;
struct tree* nctemp9418= p;
struct tree* nctemp9420=PtreeMvchild(nctemp9418);
p =nctemp9420;
i =0;
int nctemp9425 = (i < rank);
while(nctemp9425){
{
struct tree* nctemp9433= p;
struct tree* nctemp9435=PtreeMvchild(nctemp9433);
rp =nctemp9435;
struct tree* nctemp9440= rp;
struct tree* nctemp9442=PtreeMvchild(nctemp9440);
qp =nctemp9442;
struct tree* nctemp9447= qp;
struct tree* nctemp9449=PtreeMvchild(nctemp9447);
qp =nctemp9449;
struct tree* nctemp9455= qp;
nctempchar1* nctemp9457=PtreeGetdef(nctemp9455);
index=nctemp9457;
struct tree* nctemp9465= qp;
struct tree* nctemp9467=PtreeMvsister(nctemp9465);
struct tree* nctemp9463= nctemp9467;
nctempchar1* nctemp9468=CodeBinexpr(nctemp9463);
init=nctemp9468;
struct tree* nctemp9473= rp;
struct tree* nctemp9475=PtreeMvsister(nctemp9473);
rrp =nctemp9475;
struct tree* nctemp9481= rrp;
nctempchar1* nctemp9483=CodeExpr(nctemp9481);
cond=nctemp9483;
int nctemp9484 = (i ==0);
if(nctemp9484)
{
struct tree* nctemp9489= rp;
struct nctempchar1 *nctemp9493;
struct nctempchar1 nctemp9494 = {{ 30}, (char*)"\n #pragma omp parallel for\n"};
nctemp9493=&nctemp9494;
nctempchar1* nctemp9491= nctemp9493;
int nctemp9495=CodeEs(nctemp9489,nctemp9491);
}
struct tree* nctemp9497= rp;
struct nctempchar1 *nctemp9501;
struct nctempchar1 nctemp9502 = {{ 5}, (char*)"for("};
nctemp9501=&nctemp9502;
nctempchar1* nctemp9499= nctemp9501;
int nctemp9503=CodeEs(nctemp9497,nctemp9499);
struct tree* nctemp9505= rp;
nctempchar1* nctemp9507= index;
int nctemp9510=CodeEs(nctemp9505,nctemp9507);
struct tree* nctemp9512= rp;
struct nctempchar1 *nctemp9516;
struct nctempchar1 nctemp9517 = {{ 2}, (char*)"="};
nctemp9516=&nctemp9517;
nctempchar1* nctemp9514= nctemp9516;
int nctemp9518=CodeEs(nctemp9512,nctemp9514);
struct tree* nctemp9520= rp;
nctempchar1* nctemp9522= init;
int nctemp9525=CodeEs(nctemp9520,nctemp9522);
struct tree* nctemp9527= rp;
struct nctempchar1 *nctemp9531;
struct nctempchar1 nctemp9532 = {{ 2}, (char*)";"};
nctemp9531=&nctemp9532;
nctempchar1* nctemp9529= nctemp9531;
int nctemp9533=CodeEs(nctemp9527,nctemp9529);
struct tree* nctemp9538= rp;
struct tree* nctemp9540=PtreeMvsister(nctemp9538);
rp =nctemp9540;
struct tree* nctemp9542= rp;
nctempchar1* nctemp9544= index;
int nctemp9547=CodeEs(nctemp9542,nctemp9544);
struct tree* nctemp9549= rp;
struct nctempchar1 *nctemp9553;
struct nctempchar1 nctemp9554 = {{ 2}, (char*)"<"};
nctemp9553=&nctemp9554;
nctempchar1* nctemp9551= nctemp9553;
int nctemp9555=CodeEs(nctemp9549,nctemp9551);
struct tree* nctemp9557= p;
nctempchar1* nctemp9559= cond;
int nctemp9562=CodeEs(nctemp9557,nctemp9559);
struct tree* nctemp9564= rp;
struct nctempchar1 *nctemp9568;
struct nctempchar1 nctemp9569 = {{ 2}, (char*)";"};
nctemp9568=&nctemp9569;
nctempchar1* nctemp9566= nctemp9568;
int nctemp9570=CodeEs(nctemp9564,nctemp9566);
struct tree* nctemp9578= rp;
struct tree* nctemp9580=PtreeMvsister(nctemp9578);
rp =nctemp9580;
int nctemp9571 = (rp !=0);
if(nctemp9571)
{
struct tree* nctemp9583= rp;
nctempchar1* nctemp9585= index;
int nctemp9588=CodeEs(nctemp9583,nctemp9585);
struct tree* nctemp9590= rp;
struct nctempchar1 *nctemp9594;
struct nctempchar1 nctemp9595 = {{ 2}, (char*)"="};
nctemp9594=&nctemp9595;
nctempchar1* nctemp9592= nctemp9594;
int nctemp9596=CodeEs(nctemp9590,nctemp9592);
struct tree* nctemp9598= rp;
nctempchar1* nctemp9600= index;
int nctemp9603=CodeEs(nctemp9598,nctemp9600);
struct tree* nctemp9605= rp;
struct nctempchar1 *nctemp9609;
struct nctempchar1 nctemp9610 = {{ 2}, (char*)"+"};
nctemp9609=&nctemp9610;
nctempchar1* nctemp9607= nctemp9609;
int nctemp9611=CodeEs(nctemp9605,nctemp9607);
struct tree* nctemp9613= rp;
nctempchar1* nctemp9615=CodeExpr(nctemp9613);
}
else{
struct tree* nctemp9617= rp;
nctempchar1* nctemp9619= index;
int nctemp9622=CodeEs(nctemp9617,nctemp9619);
struct tree* nctemp9624= rp;
struct nctempchar1 *nctemp9628;
struct nctempchar1 nctemp9629 = {{ 2}, (char*)"="};
nctemp9628=&nctemp9629;
nctempchar1* nctemp9626= nctemp9628;
int nctemp9630=CodeEs(nctemp9624,nctemp9626);
struct tree* nctemp9632= rp;
nctempchar1* nctemp9634= index;
int nctemp9637=CodeEs(nctemp9632,nctemp9634);
struct tree* nctemp9639= rp;
struct nctempchar1 *nctemp9643;
struct nctempchar1 nctemp9644 = {{ 2}, (char*)"+"};
nctemp9643=&nctemp9644;
nctempchar1* nctemp9641= nctemp9643;
int nctemp9645=CodeEs(nctemp9639,nctemp9641);
struct tree* nctemp9647= rp;
struct nctempchar1 *nctemp9651;
struct nctempchar1 nctemp9652 = {{ 2}, (char*)"1"};
nctemp9651=&nctemp9652;
nctempchar1* nctemp9649= nctemp9651;
int nctemp9653=CodeEs(nctemp9647,nctemp9649);
}
struct tree* nctemp9655= rp;
struct nctempchar1 *nctemp9659;
struct nctempchar1 nctemp9660 = {{ 3}, (char*)"){"};
nctemp9659=&nctemp9660;
nctempchar1* nctemp9657= nctemp9659;
int nctemp9661=CodeEs(nctemp9655,nctemp9657);
struct tree* nctemp9666= p;
struct tree* nctemp9668=PtreeMvsister(nctemp9666);
p =nctemp9668;
}
int nctemp9677 = i + 1;
i =nctemp9677;
int nctemp9678 = (i < rank);
nctemp9425=nctemp9678;
}
struct tree* nctemp9686= sp;
struct tree* nctemp9688=PtreeMvchild(nctemp9686);
sp =nctemp9688;
struct tree* nctemp9693= sp;
struct tree* nctemp9695=PtreeMvsister(nctemp9693);
sp =nctemp9695;
struct tree* nctemp9697= sp;
int nctemp9699=CodeStmnt(nctemp9697);
i =0;
int nctemp9704 = (i < rank);
while(nctemp9704){
{
struct tree* nctemp9709= sp;
struct nctempchar1 *nctemp9713;
struct nctempchar1 nctemp9714 = {{ 2}, (char*)"}"};
nctemp9713=&nctemp9714;
nctempchar1* nctemp9711= nctemp9713;
int nctemp9715=CodeEs(nctemp9709,nctemp9711);
}
int nctemp9724 = i + 1;
i =nctemp9724;
int nctemp9725 = (i < rank);
nctemp9704=nctemp9725;
}
return 1;
}
int CodeNt;
int CodeNb;
int CodeSetntnb (int nt,int nb)
{
CodeNt =nt;
CodeNb =nb;
return 1;
}
int CodeGetnt ()
{
return CodeNt;
}
int CodeGetnb ()
{
return CodeNb;
}
