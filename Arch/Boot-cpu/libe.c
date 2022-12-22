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
nctempchar1* RunMalloc (int nb);
nctempchar1* RunFree (int nb);
int RunCreate (nctempchar1 *name);
float RunClock ();
int RunOpen (nctempchar1 *name,nctempchar1 *mode);
int RunClose (int fd);
int RunRead (int fd,int lbuff,nctempchar1 *buffer);
int RunWrite (int fd,int lbuff,nctempchar1 *buffer);
int RunSeek (int fd,int pos,int flag);
nctempchar1* RunGetenv (nctempchar1 *name);
int RunStrcmp (nctempchar1 *s,nctempchar1 *t);
int RunStrlen (nctempchar1 *s);
int RunExit ();
int LibeErrno;
nctempchar1 *LibeErrstr;
int LibeErrinit ();
int LibeErrinit ()
{
LibeErrno =1;
LibeErrstr=(0);
return 1;
}
int LibeGeterrno ()
{
return LibeErrno;
}
int LibeClearerr ()
{
LibeErrno =1;
return 1;
}
nctempchar1 * LibeGeterrstr ()
{
return LibeErrstr;
}
nctempchar1 * LibeGetenv (nctempchar1 *name)
{
nctempchar1* nctemp20= name;
nctempchar1* nctemp23=RunGetenv(nctemp20);
return nctemp23;
}
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound)
{
int nctemp25= 4;
struct nctempchar1 *nctemp29;
struct nctempchar1 nctemp30 = {{ 37}, (char*)"Array index out of bond at line no: "};
nctemp29=&nctemp30;
nctempchar1* nctemp27= nctemp29;
int nctemp31=LibePuts(nctemp25,nctemp27);
int nctemp33= 4;
int nctemp35= line;
int nctemp37=LibePuti(nctemp33,nctemp35);
int nctemp39= 4;
struct nctempchar1 *nctemp43;
struct nctempchar1 nctemp44 = {{ 3}, (char*)"\n"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
int nctemp45=LibePuts(nctemp39,nctemp41);
int nctemp47= 4;
struct nctempchar1 *nctemp51;
struct nctempchar1 nctemp52 = {{ 13}, (char*)"Array name: "};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
int nctemp53=LibePuts(nctemp47,nctemp49);
int nctemp55= 4;
nctempchar1* nctemp57= name;
int nctemp60=LibePuts(nctemp55,nctemp57);
int nctemp62= 4;
struct nctempchar1 *nctemp66;
struct nctempchar1 nctemp67 = {{ 3}, (char*)"\n"};
nctemp66=&nctemp67;
nctempchar1* nctemp64= nctemp66;
int nctemp68=LibePuts(nctemp62,nctemp64);
int nctemp70= 4;
struct nctempchar1 *nctemp74;
struct nctempchar1 nctemp75 = {{ 11}, (char*)"Index no: "};
nctemp74=&nctemp75;
nctempchar1* nctemp72= nctemp74;
int nctemp76=LibePuts(nctemp70,nctemp72);
int nctemp78= 4;
int nctemp80= index;
int nctemp82=LibePuti(nctemp78,nctemp80);
int nctemp84= 4;
struct nctempchar1 *nctemp88;
struct nctempchar1 nctemp89 = {{ 3}, (char*)"\n"};
nctemp88=&nctemp89;
nctempchar1* nctemp86= nctemp88;
int nctemp90=LibePuts(nctemp84,nctemp86);
int nctemp92= 4;
struct nctempchar1 *nctemp96;
struct nctempchar1 nctemp97 = {{ 14}, (char*)"Index value: "};
nctemp96=&nctemp97;
nctempchar1* nctemp94= nctemp96;
int nctemp98=LibePuts(nctemp92,nctemp94);
int nctemp100= 4;
int nctemp102= ival;
int nctemp104=LibePuti(nctemp100,nctemp102);
int nctemp106= 4;
struct nctempchar1 *nctemp110;
struct nctempchar1 nctemp111 = {{ 3}, (char*)"\n"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
int nctemp114= 4;
struct nctempchar1 *nctemp118;
struct nctempchar1 nctemp119 = {{ 16}, (char*)"Index bound: 0-"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
int nctemp120=LibePuts(nctemp114,nctemp116);
int nctemp122= 4;
int nctemp129 = bound - 1;
int nctemp124= nctemp129;
int nctemp130=LibePuti(nctemp122,nctemp124);
int nctemp132= 4;
struct nctempchar1 *nctemp136;
struct nctempchar1 nctemp137 = {{ 3}, (char*)"\n"};
nctemp136=&nctemp137;
nctempchar1* nctemp134= nctemp136;
int nctemp138=LibePuts(nctemp132,nctemp134);
int nctemp140= 4;
int nctemp142=LibeFlush(nctemp140);
int nctemp144=RunExit();
return 1;
}
int LibeIoinit ();
int LibeMathinit ();
int LibeInit ()
{
int rval;
int nctemp150=LibeErrinit();
rval =nctemp150;
int nctemp155=LibeIoinit();
rval =nctemp155;
int nctemp160=LibeMathinit();
rval =nctemp160;
return rval;
}
int LibeExit ()
{
int nctemp163=RunExit();
return 1;
}
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
struct nctempLibeFdescr1 *LibeFarr;
int LibeFillbuff (int fp);
int LibeFlushbuff (int fp);
nctempchar1 *LibeTmpstr;
int LibeIoinit ()
{
int i;
int nctemp171=40;
struct nctempLibeFdescr1 *nctemp170;
nctemp170=(struct nctempLibeFdescr1*)malloc(sizeof(struct nctempLibeFdescr1));
nctemp170->d[0]=40;
nctemp170->a=(struct LibeFdescr*)malloc(sizeof(struct LibeFdescr)*nctemp171);
LibeFarr=nctemp170;
nctempLibeFdescr1 *nctemp175 =LibeFarr;
int nctemp174 =(nctemp175==0);
if(nctemp174)
{
LibeErrno =(-100);
return 0;
}
i =0;
int nctemp188 = (i < 40);
while(nctemp188){
{
int nctemp195=i;
LibeFarr->a[nctemp195].cnt =0;
int nctemp201=i;
LibeFarr->a[nctemp201].ptr =0;
int nctemp207=i;
LibeFarr->a[nctemp207].bufsize =0;
int nctemp213=i;
LibeFarr->a[nctemp213].base=(0);
int nctemp220=i;
LibeFarr->a[nctemp220].readflg =0;
int nctemp226=i;
LibeFarr->a[nctemp226].writflg =0;
int nctemp232=i;
LibeFarr->a[nctemp232].unbflg =0;
int nctemp238=i;
LibeFarr->a[nctemp238].errflg =1;
int nctemp244=i;
LibeFarr->a[nctemp244].eoflg =0;
int nctemp250=i;
LibeFarr->a[nctemp250].fd =0;
}
int nctemp261 = i + 1;
i =nctemp261;
int nctemp262 = (i < 40);
nctemp188=nctemp262;
}
int nctemp269=0;
int nctemp271= -1;
LibeFarr->a[nctemp269].fd =nctemp271;
int nctemp275=0;
LibeFarr->a[nctemp275].readflg =1;
int nctemp281=1;
int nctemp283= -1;
LibeFarr->a[nctemp281].fd =nctemp283;
int nctemp287=1;
LibeFarr->a[nctemp287].readflg =1;
int nctemp293=2;
LibeFarr->a[nctemp293].fd =0;
int nctemp299=2;
LibeFarr->a[nctemp299].readflg =1;
int nctemp305=3;
LibeFarr->a[nctemp305].fd =1;
int nctemp311=3;
LibeFarr->a[nctemp311].writflg =1;
int nctemp317=4;
LibeFarr->a[nctemp317].fd =2;
int nctemp323=4;
LibeFarr->a[nctemp323].writflg =1;
int nctemp332=64;
nctempchar1 *nctemp331;
nctemp331=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp331->d[0]=64;
nctemp331->a=(char *)malloc(sizeof(char)*nctemp332);
LibeTmpstr=nctemp331;
nctempchar1 *nctemp336 =LibeTmpstr;
int nctemp335 =(nctemp336==0);
if(nctemp335)
{
LibeErrno =(-100);
return 0;
}
return 1;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp349=0;
char nctemp352=(char)('r');
int nctemp346 = (mode->a[nctemp349] !=nctemp352);
if(nctemp346)
{
int nctemp358=0;
char nctemp361=(char)('w');
int nctemp355 = (mode->a[nctemp358] !=nctemp361);
if(nctemp355)
{
int nctemp367=0;
char nctemp370=(char)('a');
int nctemp364 = (mode->a[nctemp367] !=nctemp370);
if(nctemp364)
{
struct nctempchar1 *nctemp378;
struct nctempchar1 nctemp379 = {{ 20}, (char*)"Unknown file mode\n"};
nctemp378=&nctemp379;
LibeErrstr=nctemp378;
LibeErrno =(-103);
return 0;
}
}
}
i =0;
int nctemp392= -1;
slot =nctemp392;
int nctemp396 = (slot < 0);
int nctemp401 = (i < 40);
int nctemp393 = (nctemp396 && nctemp401);
int nctemp405=nctemp393;
while(nctemp405)
{{
int nctemp412=i;
int nctemp409 = (LibeFarr->a[nctemp412].readflg ==0);
int nctemp419=i;
int nctemp416 = (LibeFarr->a[nctemp419].writflg ==0);
int nctemp406 = (nctemp409 && nctemp416);
if(nctemp406)
{
slot =i;
}
int nctemp434 = i + 1;
i =nctemp434;
}
int nctemp438 = (slot < 0);
int nctemp443 = (i < 40);
int nctemp435 = (nctemp438 && nctemp443);
nctemp405=nctemp435;}int nctemp447 = (slot < 0);
if(nctemp447)
{
struct nctempchar1 *nctemp456;
struct nctempchar1 nctemp457 = {{ 22}, (char*)"Too many open files\n"};
nctemp456=&nctemp457;
LibeErrstr=nctemp456;
LibeErrno =(-104);
return 0;
}
int nctemp469=0;
int nctemp466=(int)(mode->a[nctemp469]);
int nctemp463 = (nctemp466 =='w');
if(nctemp463)
{
nctempchar1* nctemp476= name;
int nctemp479=RunCreate(nctemp476);
fd =nctemp479;
}
else{
int nctemp486=0;
int nctemp483=(int)(mode->a[nctemp486]);
int nctemp480 = (nctemp483 =='a');
if(nctemp480)
{
nctempchar1* nctemp496= name;
nctempchar1* nctemp499= mode;
int nctemp502=RunOpen(nctemp496,nctemp499);
fd =nctemp502;
int nctemp489 = (fd ==0);
if(nctemp489)
{
nctempchar1* nctemp508= name;
int nctemp511=RunCreate(nctemp508);
fd =nctemp511;
}
else{
nctempchar1* nctemp516= name;
nctempchar1* nctemp519= mode;
int nctemp522=RunOpen(nctemp516,nctemp519);
fd =nctemp522;
}
}
else{
int nctemp529=0;
int nctemp526=(int)(mode->a[nctemp529]);
int nctemp523 = (nctemp526 =='r');
if(nctemp523)
{
nctempchar1* nctemp536= name;
nctempchar1* nctemp539= mode;
int nctemp542=RunOpen(nctemp536,nctemp539);
fd =nctemp542;
}
else{
struct nctempchar1 *nctemp548;
struct nctempchar1 nctemp549 = {{ 20}, (char*)"Unknown file mode\n"};
nctemp548=&nctemp549;
LibeErrstr=nctemp548;
LibeErrno =(-103);
return 0;
}
}
}
int nctemp555 = (fd ==0);
if(nctemp555)
{
struct nctempchar1 *nctemp564;
struct nctempchar1 nctemp565 = {{ 20}, (char*)"Could not open file"};
nctemp564=&nctemp565;
LibeErrstr=nctemp564;
LibeErrno =(-105);
return 0;
}
int nctemp574=slot;
LibeFarr->a[nctemp574].fd =fd;
int nctemp580=slot;
LibeFarr->a[nctemp580].cnt =0;
int nctemp586=slot;
LibeFarr->a[nctemp586].base=(0);
int nctemp596=0;
int nctemp593=(int)(mode->a[nctemp596]);
int nctemp590 = (nctemp593 =='r');
if(nctemp590)
{
int nctemp602=slot;
LibeFarr->a[nctemp602].readflg =1;
}
else{
int nctemp608=slot;
LibeFarr->a[nctemp608].writflg =1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp615=fp;
nctempchar1 *nctemp613 =LibeFarr->a[nctemp615].base;
int nctemp612 =(nctemp613!=0);
if(nctemp612)
{
int nctemp620= fp;
int nctemp622=LibeFlush(nctemp620);
}
int nctemp627=fp;
fd =LibeFarr->a[nctemp627].fd;
int nctemp633= fd;
int nctemp635=RunClose(nctemp633);
stat =nctemp635;
int nctemp636 = (stat ==0);
if(nctemp636)
{
int nctemp643=fp;
LibeFarr->a[nctemp643].errflg =1;
struct nctempchar1 *nctemp651;
struct nctempchar1 nctemp652 = {{ 21}, (char*)"Could not close file"};
nctemp651=&nctemp652;
LibeErrstr=nctemp651;
LibeErrno =(-106);
return 0;
}
int nctemp661=fp;
LibeFarr->a[nctemp661].cnt =0;
int nctemp667=fp;
LibeFarr->a[nctemp667].ptr =0;
int nctemp673=fp;
LibeFarr->a[nctemp673].bufsize =0;
int nctemp679=fp;
nctempchar1 *nctemp677 =LibeFarr->a[nctemp679].base;
int nctemp676 =(nctemp677!=0);
if(nctemp676)
{
int nctemp685=fp;
free(LibeFarr->a[nctemp685].base->a);
}
int nctemp691=fp;
LibeFarr->a[nctemp691].base=(0);
int nctemp698=fp;
LibeFarr->a[nctemp698].readflg =0;
int nctemp704=fp;
LibeFarr->a[nctemp704].writflg =0;
int nctemp710=fp;
LibeFarr->a[nctemp710].unbflg =0;
int nctemp716=fp;
LibeFarr->a[nctemp716].errflg =0;
int nctemp722=fp;
LibeFarr->a[nctemp722].eoflg =0;
int nctemp728=fp;
LibeFarr->a[nctemp728].fd =0;
return 1;
}
int LibeGetc (int fp)
{
int nctemp735=fp;
int nctemp732 = (LibeFarr->a[nctemp735].cnt ==0);
if(nctemp732)
{
int nctemp739= fp;
int nctemp741=LibeFillbuff(nctemp739);
return nctemp741;
}
else{
int nctemp745=fp;
int nctemp751=fp;
int nctemp754 = LibeFarr->a[nctemp751].cnt - 1;
LibeFarr->a[nctemp745].cnt =nctemp754;
int nctemp758=fp;
int nctemp764=fp;
int nctemp767 = LibeFarr->a[nctemp764].ptr + 1;
LibeFarr->a[nctemp758].ptr =nctemp767;
int nctemp772=fp;
int nctemp778=fp;
int nctemp781 = LibeFarr->a[nctemp778].ptr - 1;
int nctemp774=nctemp781;
int nctemp769=(int)(LibeFarr->a[nctemp772].base->a[nctemp774]);
return nctemp769;
}
}
int LibeUngetc (int fp)
{
int nctemp785=fp;
int nctemp782 = (LibeFarr->a[nctemp785].eoflg ==1);
if(nctemp782)
{
return (-1);
}
int nctemp792=fp;
int nctemp795=fp;
int nctemp789 = (LibeFarr->a[nctemp792].cnt < LibeFarr->a[nctemp795].bufsize);
if(nctemp789)
{
int nctemp800=fp;
int nctemp806=fp;
int nctemp809 = LibeFarr->a[nctemp806].cnt + 1;
LibeFarr->a[nctemp800].cnt =nctemp809;
int nctemp813=fp;
int nctemp819=fp;
int nctemp822 = LibeFarr->a[nctemp819].ptr - 1;
LibeFarr->a[nctemp813].ptr =nctemp822;
int nctemp826=fp;
int nctemp832=fp;
int nctemp835 = LibeFarr->a[nctemp832].bufsize - 1;
int nctemp823 = (LibeFarr->a[nctemp826].ptr ==nctemp835);
if(nctemp823)
{
int nctemp840=fp;
int nctemp844=fp;
int nctemp842=LibeFarr->a[nctemp844].ptr;
int nctemp837=(int)(LibeFarr->a[nctemp840].base->a[nctemp842]);
return nctemp837;
}
else{
int nctemp850=fp;
int nctemp856=fp;
int nctemp859 = LibeFarr->a[nctemp856].ptr + 1;
int nctemp852=nctemp859;
int nctemp847=(int)(LibeFarr->a[nctemp850].base->a[nctemp852]);
return nctemp847;
}
}
else{
struct nctempchar1 *nctemp865;
struct nctempchar1 nctemp866 = {{ 15}, (char*)"Pushback error"};
nctemp865=&nctemp866;
LibeErrstr=nctemp865;
LibeErrno =(-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp876=text->d[0];lim =nctemp876;
p =0;
int nctemp885=LibeClearerr();
int nctemp899= fp;
int nctemp901=LibeGetc(nctemp899);
ch =nctemp901;
int nctemp892 = (ch ==32);
int nctemp904 = (ch ==9);
int nctemp889 = (nctemp892 || nctemp904);
int nctemp909 = (ch ==10);
int nctemp886 = (nctemp889 || nctemp909);
int nctemp913=nctemp886;
while(nctemp913)
{{
p =0;
}
int nctemp931= fp;
int nctemp933=LibeGetc(nctemp931);
ch =nctemp933;
int nctemp924 = (ch ==32);
int nctemp936 = (ch ==9);
int nctemp921 = (nctemp924 || nctemp936);
int nctemp941 = (ch ==10);
int nctemp918 = (nctemp921 || nctemp941);
nctemp913=nctemp918;}int nctemp946= fp;
int nctemp948=LibeUngetc(nctemp946);
int nctemp959= fp;
int nctemp961=LibeGetc(nctemp959);
ch =nctemp961;
int nctemp952 = (ch !=(-1));
int nctemp964 = (p < lim);
int nctemp949 = (nctemp952 && nctemp964);
int nctemp968=nctemp949;
while(nctemp968)
{{
int nctemp975 = (ch ==32);
int nctemp980 = (ch ==9);
int nctemp972 = (nctemp975 || nctemp980);
int nctemp985 = (ch ==10);
int nctemp969 = (nctemp972 || nctemp985);
if(nctemp969)
{
int nctemp990= fp;
int nctemp992=LibeUngetc(nctemp990);
int nctemp996=p;
char nctemp999=(char)(0);
text->a[nctemp996] =nctemp999;
return 1;
}
else{
int nctemp1006=p;
char nctemp1009=(char)(ch);
text->a[nctemp1006] =nctemp1009;
int nctemp1020 = p + 1;
p =nctemp1020;
}
}
int nctemp1031= fp;
int nctemp1033=LibeGetc(nctemp1031);
ch =nctemp1033;
int nctemp1024 = (ch !=(-1));
int nctemp1036 = (p < lim);
int nctemp1021 = (nctemp1024 && nctemp1036);
nctemp968=nctemp1021;}int nctemp1040 = (p >= lim);
if(nctemp1040)
{
return 0;
}
else{
int nctemp1045 = (ch ==(-1));
if(nctemp1045)
{
return (-1);
}
else{
return 1;
}
}
}
int LibePutc (int fp,int c)
{
int rval;
int nctemp1054=fp;
int nctemp1051 = (LibeFarr->a[nctemp1054].cnt ==0);
if(nctemp1051)
{
int nctemp1058= fp;
int nctemp1060=LibeFlushbuff(nctemp1058);
}
int nctemp1064=fp;
int nctemp1067=fp;
int nctemp1061 = (LibeFarr->a[nctemp1064].cnt ==LibeFarr->a[nctemp1067].bufsize);
if(nctemp1061)
{
int nctemp1073= fp;
int nctemp1075=LibeFlushbuff(nctemp1073);
rval =nctemp1075;
int nctemp1079=fp;
int nctemp1083=fp;
int nctemp1081=LibeFarr->a[nctemp1083].ptr;
char nctemp1086=(char)(c);
LibeFarr->a[nctemp1079].base->a[nctemp1081] =nctemp1086;
int nctemp1092=fp;
int nctemp1098=fp;
int nctemp1101 = LibeFarr->a[nctemp1098].ptr + 1;
LibeFarr->a[nctemp1092].ptr =nctemp1101;
int nctemp1105=fp;
int nctemp1111=fp;
int nctemp1114 = LibeFarr->a[nctemp1111].cnt + 1;
LibeFarr->a[nctemp1105].cnt =nctemp1114;
return rval;
}
else{
int nctemp1119=fp;
int nctemp1123=fp;
int nctemp1121=LibeFarr->a[nctemp1123].ptr;
char nctemp1126=(char)(c);
LibeFarr->a[nctemp1119].base->a[nctemp1121] =nctemp1126;
int nctemp1132=fp;
int nctemp1138=fp;
int nctemp1141 = LibeFarr->a[nctemp1138].cnt + 1;
LibeFarr->a[nctemp1132].cnt =nctemp1141;
int nctemp1145=fp;
int nctemp1151=fp;
int nctemp1154 = LibeFarr->a[nctemp1151].ptr + 1;
LibeFarr->a[nctemp1145].ptr =nctemp1154;
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp1160=s->d[0];ls =nctemp1160;
i =0;
int nctemp1177=i;
int nctemp1174=(int)(s->a[nctemp1177]);
int nctemp1171 = (nctemp1174 !=0);
int nctemp1181 = (i < ls);
int nctemp1168 = (nctemp1171 && nctemp1181);
int nctemp1185=nctemp1168;
while(nctemp1185)
{{
int nctemp1189= fp;
int nctemp1196=i;
int nctemp1193=(int)(s->a[nctemp1196]);
int nctemp1191= nctemp1193;
int nctemp1198=LibePutc(nctemp1189,nctemp1191);
int nctemp1186 = (nctemp1198 ==0);
if(nctemp1186)
{
struct nctempchar1 *nctemp1205;
struct nctempchar1 nctemp1206 = {{ 12}, (char*)"write error"};
nctemp1205=&nctemp1206;
LibeErrstr=nctemp1205;
LibeErrno =0;
return 0;
}
else{
int nctemp1220 = i + 1;
i =nctemp1220;
}
}
int nctemp1230=i;
int nctemp1227=(int)(s->a[nctemp1230]);
int nctemp1224 = (nctemp1227 !=0);
int nctemp1234 = (i < ls);
int nctemp1221 = (nctemp1224 && nctemp1234);
nctemp1185=nctemp1221;}return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp1240= ival;
nctempchar1* nctemp1242= LibeTmpstr;
int nctemp1245=LibeItoa(nctemp1240,nctemp1242);
int nctemp1247= fp;
nctempchar1* nctemp1249= LibeTmpstr;
int nctemp1252=LibePuts(nctemp1247,nctemp1249);
return nctemp1252;
}
int LibePutf (int fp,float fval)
{
float nctemp1254= fval;
struct nctempchar1 *nctemp1258;
struct nctempchar1 nctemp1259 = {{ 2}, (char*)"g"};
nctemp1258=&nctemp1259;
nctempchar1* nctemp1256= nctemp1258;
nctempchar1* nctemp1260= LibeTmpstr;
int nctemp1263=LibeFtoa(nctemp1254,nctemp1256,nctemp1260);
int nctemp1265= fp;
nctempchar1* nctemp1267= LibeTmpstr;
int nctemp1270=LibePuts(nctemp1265,nctemp1267);
return nctemp1270;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp1274=fp;
int nctemp1271 = (LibeFarr->a[nctemp1274].readflg !=1);
if(nctemp1271)
{
struct nctempchar1 *nctemp1282;
struct nctempchar1 nctemp1283 = {{ 26}, (char*)"File not open for reading"};
nctemp1282=&nctemp1283;
LibeErrstr=nctemp1282;
LibeErrno =(-109);
LibeErrno =0;
return (-1);
}
int nctemp1297=buffer->d[0];int nctemp1293 = (n > nctemp1297);
if(nctemp1293)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp1310;
struct nctempchar1 nctemp1311 = {{ 30}, (char*)"The buffer array is too small"};
nctemp1310=&nctemp1311;
LibeErrstr=nctemp1310;
return 0;
}
int nctemp1319=fp;
int nctemp1317= LibeFarr->a[nctemp1319].fd;
int nctemp1321= n;
nctempchar1* nctemp1323= buffer;
int nctemp1326=RunRead(nctemp1317,nctemp1321,nctemp1323);
rval =nctemp1326;
int nctemp1327 = (rval ==(-1));
if(nctemp1327)
{
int nctemp1334=fp;
LibeFarr->a[nctemp1334].eoflg =1;
rval =(-1);
}
else{
int nctemp1341 = (rval ==0);
if(nctemp1341)
{
int nctemp1348=fp;
LibeFarr->a[nctemp1348].errflg =1;
struct nctempchar1 *nctemp1356;
struct nctempchar1 nctemp1357 = {{ 11}, (char*)"read error"};
nctemp1356=&nctemp1357;
LibeErrstr=nctemp1356;
LibeErrno =0;
int nctemp1365=fp;
LibeFarr->a[nctemp1365].errflg =0;
rval =(-1);
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp1377=buffer->d[0];int nctemp1373 = (n > nctemp1377);
if(nctemp1373)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp1390;
struct nctempchar1 nctemp1391 = {{ 30}, (char*)"The buffer array is too small"};
nctemp1390=&nctemp1391;
LibeErrstr=nctemp1390;
return 0;
}
int nctemp1396=fp;
int nctemp1393 = (LibeFarr->a[nctemp1396].writflg !=1);
if(nctemp1393)
{
struct nctempchar1 *nctemp1404;
struct nctempchar1 nctemp1405 = {{ 26}, (char*)"file not open for writing"};
nctemp1404=&nctemp1405;
LibeErrstr=nctemp1404;
LibeErrno =(-110);
return 0;
}
int nctemp1417=fp;
int nctemp1415= LibeFarr->a[nctemp1417].fd;
int nctemp1419= n;
nctempchar1* nctemp1421= buffer;
int nctemp1424=RunWrite(nctemp1415,nctemp1419,nctemp1421);
rval =nctemp1424;
int nctemp1425 = (rval ==0);
if(nctemp1425)
{
int nctemp1432=fp;
LibeFarr->a[nctemp1432].errflg =1;
struct nctempchar1 *nctemp1440;
struct nctempchar1 nctemp1441 = {{ 12}, (char*)"write error"};
nctemp1440=&nctemp1441;
LibeErrstr=nctemp1440;
LibeErrno =0;
int nctemp1449=fp;
LibeFarr->a[nctemp1449].errflg =0;
rval =0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp1463=fp;
int nctemp1461= LibeFarr->a[nctemp1463].fd;
int nctemp1465= pos;
int nctemp1467= flag;
int nctemp1469=RunSeek(nctemp1461,nctemp1465,nctemp1467);
rval =nctemp1469;
int nctemp1470 = (rval ==0);
if(nctemp1470)
{
int nctemp1477=fp;
LibeFarr->a[nctemp1477].errflg =1;
struct nctempchar1 *nctemp1485;
struct nctempchar1 nctemp1486 = {{ 11}, (char*)"Seek error"};
nctemp1485=&nctemp1486;
LibeErrstr=nctemp1485;
LibeErrno =0;
int nctemp1494=fp;
LibeFarr->a[nctemp1494].errflg =0;
rval =0;
}
return rval;
}
int LibeFlush (int fp)
{
int nctemp1503= fp;
int nctemp1505=LibeFlushbuff(nctemp1503);
return nctemp1505;
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp1509=fp;
int nctemp1506 = (LibeFarr->a[nctemp1509].readflg !=1);
if(nctemp1506)
{
struct nctempchar1 *nctemp1517;
struct nctempchar1 nctemp1518 = {{ 28}, (char*)"file not open for reading\n"};
nctemp1517=&nctemp1518;
LibeErrstr=nctemp1517;
LibeErrno =(-110);
return (-1);
}
int nctemp1527=fp;
int nctemp1524 = (LibeFarr->a[nctemp1527].unbflg ==1);
if(nctemp1524)
{
int nctemp1533=fp;
LibeFarr->a[nctemp1533].bufsize =1;
}
else{
int nctemp1539=fp;
LibeFarr->a[nctemp1539].bufsize =1024;
}
int nctemp1545=fp;
nctempchar1 *nctemp1543 =LibeFarr->a[nctemp1545].base;
int nctemp1542 =(nctemp1543==0);
if(nctemp1542)
{
int nctemp1553=fp;
size =LibeFarr->a[nctemp1553].bufsize;
int nctemp1561=fp;
int nctemp1566=size;
nctempchar1 *nctemp1565;
nctemp1565=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp1565->d[0]=size;
nctemp1565->a=(char *)malloc(sizeof(char)*nctemp1566);
LibeFarr->a[nctemp1561].base=nctemp1565;
nctempchar1 *nctemp1556 =LibeFarr->a[nctemp1561].base;
int nctemp1555 =(nctemp1556==0);
if(nctemp1555)
{
struct nctempchar1 *nctemp1575;
struct nctempchar1 nctemp1576 = {{ 24}, (char*)"Can not allocate buffer"};
nctemp1575=&nctemp1576;
LibeErrstr=nctemp1575;
LibeErrno =(-113);
return (-1);
}
}
int nctemp1585=fp;
LibeFarr->a[nctemp1585].ptr =0;
int nctemp1591=fp;
int nctemp1596=fp;
int nctemp1594= LibeFarr->a[nctemp1596].fd;
int nctemp1600=fp;
int nctemp1598= LibeFarr->a[nctemp1600].bufsize;
int nctemp1604=fp;
nctempchar1* nctemp1602= LibeFarr->a[nctemp1604].base;
int nctemp1607=RunRead(nctemp1594,nctemp1598,nctemp1602);
LibeFarr->a[nctemp1591].cnt =nctemp1607;
int nctemp1611=fp;
int nctemp1608 = (LibeFarr->a[nctemp1611].cnt <= 0);
if(nctemp1608)
{
int nctemp1617=fp;
int nctemp1614 = (LibeFarr->a[nctemp1617].cnt ==(-1));
if(nctemp1614)
{
int nctemp1623=fp;
LibeFarr->a[nctemp1623].eoflg =1;
rval =(-1);
}
else{
int nctemp1633=fp;
LibeFarr->a[nctemp1633].errflg =1;
struct nctempchar1 *nctemp1641;
struct nctempchar1 nctemp1642 = {{ 11}, (char*)"read error"};
nctemp1641=&nctemp1642;
LibeErrstr=nctemp1641;
LibeErrno =(-111);
rval =(-1);
}
int nctemp1654=fp;
LibeFarr->a[nctemp1654].cnt =0;
return rval;
}
int nctemp1661=fp;
int nctemp1667=fp;
int nctemp1670 = LibeFarr->a[nctemp1667].ptr + 1;
LibeFarr->a[nctemp1661].ptr =nctemp1670;
int nctemp1674=fp;
int nctemp1680=fp;
int nctemp1683 = LibeFarr->a[nctemp1680].cnt - 1;
LibeFarr->a[nctemp1674].cnt =nctemp1683;
int nctemp1688=fp;
int nctemp1694=fp;
int nctemp1697 = LibeFarr->a[nctemp1694].ptr - 1;
int nctemp1690=nctemp1697;
int nctemp1685=(int)(LibeFarr->a[nctemp1688].base->a[nctemp1690]);
return nctemp1685;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp1701=fp;
int nctemp1698 = (LibeFarr->a[nctemp1701].writflg !=1);
if(nctemp1698)
{
struct nctempchar1 *nctemp1709;
struct nctempchar1 nctemp1710 = {{ 28}, (char*)"file not open for writing\n"};
nctemp1709=&nctemp1710;
LibeErrstr=nctemp1709;
LibeErrno =(-110);
return 0;
}
int nctemp1719=fp;
int nctemp1716 = (LibeFarr->a[nctemp1719].unbflg ==1);
if(nctemp1716)
{
int nctemp1725=fp;
LibeFarr->a[nctemp1725].bufsize =1;
}
else{
int nctemp1731=fp;
LibeFarr->a[nctemp1731].bufsize =1024;
}
int nctemp1737=fp;
nctempchar1 *nctemp1735 =LibeFarr->a[nctemp1737].base;
int nctemp1734 =(nctemp1735==0);
if(nctemp1734)
{
int nctemp1745=fp;
size =LibeFarr->a[nctemp1745].bufsize;
int nctemp1753=fp;
int nctemp1758=size;
nctempchar1 *nctemp1757;
nctemp1757=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp1757->d[0]=size;
nctemp1757->a=(char *)malloc(sizeof(char)*nctemp1758);
LibeFarr->a[nctemp1753].base=nctemp1757;
nctempchar1 *nctemp1748 =LibeFarr->a[nctemp1753].base;
int nctemp1747 =(nctemp1748==0);
if(nctemp1747)
{
struct nctempchar1 *nctemp1767;
struct nctempchar1 nctemp1768 = {{ 24}, (char*)"can not allocate buffer"};
nctemp1767=&nctemp1768;
LibeErrstr=nctemp1767;
LibeErrno =(-113);
return 0;
}
}
int nctemp1777=fp;
LibeFarr->a[nctemp1777].ptr =0;
int nctemp1786=fp;
int nctemp1784= LibeFarr->a[nctemp1786].fd;
int nctemp1790=fp;
int nctemp1788= LibeFarr->a[nctemp1790].cnt;
int nctemp1794=fp;
nctempchar1* nctemp1792= LibeFarr->a[nctemp1794].base;
int nctemp1797=RunWrite(nctemp1784,nctemp1788,nctemp1792);
st =nctemp1797;
int nctemp1802=fp;
int nctemp1798 = (st !=LibeFarr->a[nctemp1802].cnt);
if(nctemp1798)
{
int nctemp1807=fp;
LibeFarr->a[nctemp1807].errflg =1;
struct nctempchar1 *nctemp1815;
struct nctempchar1 nctemp1816 = {{ 12}, (char*)"write error"};
nctemp1815=&nctemp1816;
LibeErrstr=nctemp1815;
LibeErrno =(-112);
int nctemp1824=fp;
LibeFarr->a[nctemp1824].cnt =0;
int nctemp1830=fp;
LibeFarr->a[nctemp1830].ptr =0;
return 0;
}
else{
int nctemp1837=fp;
LibeFarr->a[nctemp1837].cnt =0;
int nctemp1843=fp;
LibeFarr->a[nctemp1843].ptr =0;
return 1;
}
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp1851=s->d[0];ls =nctemp1851;
i =0;
int nctemp1868=i;
int nctemp1865=(int)(s->a[nctemp1868]);
int nctemp1862 = (nctemp1865 !=0);
int nctemp1872 = (i < ls);
int nctemp1859 = (nctemp1862 && nctemp1872);
int nctemp1876=nctemp1859;
while(nctemp1876)
{{
int nctemp1885 = i + 1;
i =nctemp1885;
}
int nctemp1895=i;
int nctemp1892=(int)(s->a[nctemp1895]);
int nctemp1889 = (nctemp1892 !=0);
int nctemp1899 = (i < ls);
int nctemp1886 = (nctemp1889 && nctemp1899);
nctemp1876=nctemp1886;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp1908=s->d[0];ls =nctemp1908;
i =0;
int nctemp1922=i;
int nctemp1925=i;
int nctemp1919 = (s->a[nctemp1922] ==t->a[nctemp1925]);
int nctemp1928 = (i < ls);
int nctemp1916 = (nctemp1919 && nctemp1928);
int nctemp1932=nctemp1916;
while(nctemp1932)
{{
int nctemp1939=i;
int nctemp1936=(int)(s->a[nctemp1939]);
int nctemp1933 = (nctemp1936 ==0);
if(nctemp1933)
{
return 1;
}
int nctemp1951 = i + 1;
i =nctemp1951;
}
int nctemp1958=i;
int nctemp1961=i;
int nctemp1955 = (s->a[nctemp1958] ==t->a[nctemp1961]);
int nctemp1964 = (i < ls);
int nctemp1952 = (nctemp1955 && nctemp1964);
nctemp1932=nctemp1952;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i =0;
nctempchar1* nctemp1980= s;
int nctemp1983=LibeStrlen(nctemp1980);
int nctemp1985 = nctemp1983 - 1;
j =nctemp1985;
int nctemp1986 = (i < j);
int nctemp1990=nctemp1986;
while(nctemp1990)
{{
int nctemp1995=i;
c =s->a[nctemp1995];
int nctemp2000=i;
int nctemp2003=j;
s->a[nctemp2000] =s->a[nctemp2003];
int nctemp2008=j;
s->a[nctemp2008] =c;
int nctemp2019 = i + 1;
i =nctemp2019;
int nctemp2028 = j - 1;
j =nctemp2028;
}
int nctemp2029 = (i < j);
nctemp1990=nctemp2029;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp2038= s;
int nctemp2041=LibeStrlen(nctemp2038);
ls =nctemp2041;
int nctemp2042 = (ls ==0);
if(nctemp2042)
{
return 1;
}
int nctemp2050=t->d[0];int nctemp2047 = (nctemp2050 <= ls);
if(nctemp2047)
{
return 0;
}
i =0;
int nctemp2060 = (i <= ls);
while(nctemp2060){
{
int nctemp2067=i;
int nctemp2070=i;
t->a[nctemp2067] =s->a[nctemp2070];
}
int nctemp2080 = i + 1;
i =nctemp2080;
int nctemp2081 = (i <= ls);
nctemp2060=nctemp2081;
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp2090= s;
int nctemp2093=LibeStrlen(nctemp2090);
ls =nctemp2093;
nctempchar1* nctemp2098= t;
int nctemp2101=LibeStrlen(nctemp2098);
lt =nctemp2101;
int nctemp2105=t->d[0];int nctemp2114 = lt + ls;
int nctemp2102 = (nctemp2105 < nctemp2114);
if(nctemp2102)
{
return 0;
}
i =lt;
int nctemp2128 = ls + lt;
int nctemp2120 = (i < nctemp2128);
while(nctemp2120){
{
int nctemp2132=i;
int nctemp2140 = i - lt;
int nctemp2135=nctemp2140;
t->a[nctemp2132] =s->a[nctemp2135];
}
int nctemp2149 = i + 1;
i =nctemp2149;
int nctemp2158 = ls + lt;
int nctemp2150 = (i < nctemp2158);
nctemp2120=nctemp2150;
}
int nctemp2167 = ls + lt;
int nctemp2162=nctemp2167;
char nctemp2169=(char)(0);
t->a[nctemp2162] =nctemp2169;
return 1;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
nctempchar1 *tmp;
nctempchar1* nctemp2183= s;
int nctemp2186=LibeStrlen(nctemp2183);
int nctemp2188 = nctemp2186 + 1;
int nctemp2179=nctemp2188;
nctempchar1 *nctemp2178;
nctemp2178=(nctempchar1*)malloc(sizeof(nctempchar1));
nctempchar1* nctemp2192= s;
int nctemp2195=LibeStrlen(nctemp2192);
int nctemp2197 = nctemp2195 + 1;
nctemp2178->d[0]=nctemp2197;
nctemp2178->a=(char *)malloc(sizeof(char)*nctemp2179);
tmp=nctemp2178;
nctempchar1 *nctemp2199 =tmp;
int nctemp2198 =(nctemp2199!=0);
if(nctemp2198)
{
nctempchar1* nctemp2204= s;
nctempchar1* nctemp2207= tmp;
int nctemp2210=LibeStrcpy(nctemp2204,nctemp2207);
}
return tmp;
}
int LibeIsalpha (int c)
{
int nctemp2219 = (c >= 'a');
int nctemp2224 = (c <= 'z');
int nctemp2216 = (nctemp2219 && nctemp2224);
int nctemp2232 = (c >= 'A');
int nctemp2237 = (c <= 'Z');
int nctemp2229 = (nctemp2232 && nctemp2237);
int nctemp2213 = (nctemp2216 || nctemp2229);
if(nctemp2213)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp2246 = (c >= '0');
int nctemp2251 = (c <= '9');
int nctemp2243 = (nctemp2246 && nctemp2251);
if(nctemp2243)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp2263 = (c >= 'a');
int nctemp2268 = (c <= 'z');
int nctemp2260 = (nctemp2263 && nctemp2268);
int nctemp2276 = (c >= 'A');
int nctemp2281 = (c <= 'Z');
int nctemp2273 = (nctemp2276 && nctemp2281);
int nctemp2257 = (nctemp2260 || nctemp2273);
if(nctemp2257)
{
return 1;
}
else{
int nctemp2289 = (c >= '0');
int nctemp2294 = (c <= '9');
int nctemp2286 = (nctemp2289 && nctemp2294);
if(nctemp2286)
{
return 1;
}
else{
return 0;
}
}
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeAtoi (nctempchar1 *s)
{
int sign;
int i;
int n;
i =0;
int nctemp2313=i;
char nctemp2316=(char)(' ');
int nctemp2310 = (s->a[nctemp2313] ==nctemp2316);
int nctemp2323=i;
char nctemp2326=(char)(10);
int nctemp2320 = (s->a[nctemp2323] ==nctemp2326);
int nctemp2307 = (nctemp2310 || nctemp2320);
int nctemp2333=i;
char nctemp2336=(char)(9);
int nctemp2330 = (s->a[nctemp2333] ==nctemp2336);
int nctemp2304 = (nctemp2307 || nctemp2330);
int nctemp2339=nctemp2304;
while(nctemp2339)
{{
int nctemp2348 = i + 1;
i =nctemp2348;
}
int nctemp2358=i;
char nctemp2361=(char)(' ');
int nctemp2355 = (s->a[nctemp2358] ==nctemp2361);
int nctemp2368=i;
char nctemp2371=(char)(10);
int nctemp2365 = (s->a[nctemp2368] ==nctemp2371);
int nctemp2352 = (nctemp2355 || nctemp2365);
int nctemp2378=i;
char nctemp2381=(char)(9);
int nctemp2375 = (s->a[nctemp2378] ==nctemp2381);
int nctemp2349 = (nctemp2352 || nctemp2375);
nctemp2339=nctemp2349;}int nctemp2387=i;
char nctemp2390=(char)('-');
int nctemp2384 = (s->a[nctemp2387] ==nctemp2390);
if(nctemp2384)
{
int nctemp2396= -1;
sign =nctemp2396;
int nctemp2405 = i + 1;
i =nctemp2405;
}
else{
int nctemp2409=i;
char nctemp2412=(char)('+');
int nctemp2406 = (s->a[nctemp2409] ==nctemp2412);
if(nctemp2406)
{
sign =1;
int nctemp2427 = i + 1;
i =nctemp2427;
}
else{
sign =1;
}
}
n =0;
int nctemp2442=i;
int nctemp2439=(int)(s->a[nctemp2442]);
int nctemp2437= nctemp2439;
int nctemp2444=LibeIsdigit(nctemp2437);
while(nctemp2444){
{
int nctemp2459 = 10 * n;
int nctemp2464=i;
int nctemp2461=(int)(s->a[nctemp2464]);
int nctemp2466 = nctemp2459 + nctemp2461;
int nctemp2468 = nctemp2466 - '0';
n =nctemp2468;
}
int nctemp2477 = i + 1;
i =nctemp2477;
int nctemp2484=i;
int nctemp2481=(int)(s->a[nctemp2484]);
int nctemp2479= nctemp2481;
int nctemp2486=LibeIsdigit(nctemp2479);
nctemp2444=nctemp2486;
}
int nctemp2491 = sign * n;
return nctemp2491;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp2493 =s;
int nctemp2492 =(nctemp2493==0);
if(nctemp2492)
{
return 0;
}
sign =n;
int nctemp2498 = (sign < 0);
if(nctemp2498)
{
int nctemp2509= -n;
n =nctemp2509;
}
i =0;
int nctemp2517=0;
int nctemp2525= n;
int nctemp2527= 10;
int nctemp2529=LibeMod(nctemp2525,nctemp2527);
int nctemp2531 = nctemp2529 + 48;
char nctemp2520=(char)(nctemp2531);
s->a[nctemp2517] =nctemp2520;
int nctemp2543 = n / 10;
n =nctemp2543;
int nctemp2532 = (n > 0);
int nctemp2545=nctemp2532;
while(nctemp2545)
{{
int nctemp2553 = i + 1;
int nctemp2558=s->d[0];int nctemp2563 = nctemp2558 - 1;
int nctemp2546 = (nctemp2553 > nctemp2563);
if(nctemp2546)
{
return 0;
}
int nctemp2577 = i + 1;
i =nctemp2577;
int nctemp2568=i;
int nctemp2584= n;
int nctemp2586= 10;
int nctemp2588=LibeMod(nctemp2584,nctemp2586);
int nctemp2590 = nctemp2588 + 48;
char nctemp2579=(char)(nctemp2590);
s->a[nctemp2568] =nctemp2579;
}
int nctemp2602 = n / 10;
n =nctemp2602;
int nctemp2591 = (n > 0);
nctemp2545=nctemp2591;}int nctemp2604 = (sign < 0);
if(nctemp2604)
{
int nctemp2615 = i + 1;
int nctemp2620=s->d[0];int nctemp2625 = nctemp2620 - 1;
int nctemp2608 = (nctemp2615 > nctemp2625);
if(nctemp2608)
{
return 0;
}
int nctemp2639 = i + 1;
i =nctemp2639;
int nctemp2630=i;
char nctemp2641=(char)(45);
s->a[nctemp2630] =nctemp2641;
}
int nctemp2651 = i + 1;
int nctemp2656=s->d[0];int nctemp2661 = nctemp2656 - 1;
int nctemp2644 = (nctemp2651 > nctemp2661);
if(nctemp2644)
{
return 0;
}
int nctemp2675 = i + 1;
i =nctemp2675;
int nctemp2666=i;
char nctemp2677=(char)(0);
s->a[nctemp2666] =nctemp2677;
nctempchar1* nctemp2681= s;
int nctemp2684=LibeStrev(nctemp2681);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp2686 = (sign < 0);
if(nctemp2686)
{
int nctemp2697= -n;
n =nctemp2697;
}
i =0;
int nctemp2705= n;
int nctemp2707= 16;
int nctemp2709=LibeMod(nctemp2705,nctemp2707);
int nctemp2702 = (nctemp2709 <= 9);
if(nctemp2702)
{
int nctemp2714=0;
int nctemp2722= n;
int nctemp2724= 16;
int nctemp2726=LibeMod(nctemp2722,nctemp2724);
int nctemp2728 = nctemp2726 + 48;
char nctemp2717=(char)(nctemp2728);
s->a[nctemp2714] =nctemp2717;
}
else{
int nctemp2732=0;
int nctemp2743= n;
int nctemp2745= 16;
int nctemp2747=LibeMod(nctemp2743,nctemp2745);
int nctemp2749 = nctemp2747 + 'a';
int nctemp2751 = nctemp2749 - 10;
char nctemp2735=(char)(nctemp2751);
s->a[nctemp2732] =nctemp2735;
}
int nctemp2763 = n / 16;
n =nctemp2763;
int nctemp2752 = (n > 0);
int nctemp2765=nctemp2752;
while(nctemp2765)
{{
int nctemp2769= n;
int nctemp2771= 16;
int nctemp2773=LibeMod(nctemp2769,nctemp2771);
int nctemp2766 = (nctemp2773 <= 9);
if(nctemp2766)
{
int nctemp2787 = i + 1;
i =nctemp2787;
int nctemp2778=i;
int nctemp2794= n;
int nctemp2796= 16;
int nctemp2798=LibeMod(nctemp2794,nctemp2796);
int nctemp2800 = nctemp2798 + 48;
char nctemp2789=(char)(nctemp2800);
s->a[nctemp2778] =nctemp2789;
}
else{
int nctemp2813 = i + 1;
i =nctemp2813;
int nctemp2804=i;
int nctemp2823= n;
int nctemp2825= 16;
int nctemp2827=LibeMod(nctemp2823,nctemp2825);
int nctemp2829 = nctemp2827 + 'a';
int nctemp2831 = nctemp2829 - 10;
char nctemp2815=(char)(nctemp2831);
s->a[nctemp2804] =nctemp2815;
}
}
int nctemp2843 = n / 16;
n =nctemp2843;
int nctemp2832 = (n > 0);
nctemp2765=nctemp2832;}int nctemp2845 = (sign < 0);
if(nctemp2845)
{
int nctemp2861 = i + 1;
i =nctemp2861;
int nctemp2852=i;
char nctemp2863=(char)(45);
s->a[nctemp2852] =nctemp2863;
}
int nctemp2878 = i + 1;
i =nctemp2878;
int nctemp2869=i;
char nctemp2880=(char)(0);
s->a[nctemp2869] =nctemp2880;
nctempchar1* nctemp2884= s;
int nctemp2887=LibeStrev(nctemp2884);
return 0;
}
float LibeAtof (nctempchar1 *s)
{
float val;
float power;
int exponent;
int sign;
int esign;
int i;
sign =1;
val =0.0;
power =1.0;
exponent =0;
esign =1;
i =0;
int nctemp2916=i;
char nctemp2919=(char)(' ');
int nctemp2913 = (s->a[nctemp2916] ==nctemp2919);
int nctemp2922=nctemp2913;
while(nctemp2922)
{{
int nctemp2931 = i + 1;
i =nctemp2931;
}
int nctemp2935=i;
char nctemp2938=(char)(' ');
int nctemp2932 = (s->a[nctemp2935] ==nctemp2938);
nctemp2922=nctemp2932;}int nctemp2947=i;
char nctemp2950=(char)('+');
int nctemp2944 = (s->a[nctemp2947] ==nctemp2950);
int nctemp2957=i;
char nctemp2960=(char)('-');
int nctemp2954 = (s->a[nctemp2957] ==nctemp2960);
int nctemp2941 = (nctemp2944 || nctemp2954);
if(nctemp2941)
{
int nctemp2966=i;
char nctemp2969=(char)('-');
int nctemp2963 = (s->a[nctemp2966] ==nctemp2969);
if(nctemp2963)
{
int nctemp2975= -1;
sign =nctemp2975;
}
int nctemp2984 = i + 1;
i =nctemp2984;
}
int nctemp2991=i;
int nctemp2988=(int)(s->a[nctemp2991]);
int nctemp2986= nctemp2988;
int nctemp2993=LibeIsdigit(nctemp2986);
int nctemp2994=nctemp2993;
while(nctemp2994)
{{
float nctemp3006 = 10.0 * val;
int nctemp3016=i;
int nctemp3013=(int)(s->a[nctemp3016]);
int nctemp3019 = nctemp3013 - '0';
float nctemp3008=(float)(nctemp3019);
float nctemp3020 = nctemp3006 + nctemp3008;
val =nctemp3020;
int nctemp3029 = i + 1;
i =nctemp3029;
}
int nctemp3036=i;
int nctemp3033=(int)(s->a[nctemp3036]);
int nctemp3031= nctemp3033;
int nctemp3038=LibeIsdigit(nctemp3031);
nctemp2994=nctemp3038;}int nctemp3042=i;
char nctemp3045=(char)('.');
int nctemp3039 = (s->a[nctemp3042] ==nctemp3045);
if(nctemp3039)
{
int nctemp3056 = i + 1;
i =nctemp3056;
int nctemp3063=i;
int nctemp3060=(int)(s->a[nctemp3063]);
int nctemp3058= nctemp3060;
int nctemp3065=LibeIsdigit(nctemp3058);
int nctemp3066=nctemp3065;
while(nctemp3066)
{{
float nctemp3078 = 10.0 * val;
int nctemp3088=i;
int nctemp3085=(int)(s->a[nctemp3088]);
int nctemp3091 = nctemp3085 - '0';
float nctemp3080=(float)(nctemp3091);
float nctemp3092 = nctemp3078 + nctemp3080;
val =nctemp3092;
int nctemp3101 = i + 1;
i =nctemp3101;
float nctemp3110 = 10.0 * power;
power =nctemp3110;
}
int nctemp3117=i;
int nctemp3114=(int)(s->a[nctemp3117]);
int nctemp3112= nctemp3114;
int nctemp3119=LibeIsdigit(nctemp3112);
nctemp3066=nctemp3119;}}
int nctemp3126=i;
char nctemp3129=(char)('e');
int nctemp3123 = (s->a[nctemp3126] ==nctemp3129);
int nctemp3136=i;
char nctemp3139=(char)('E');
int nctemp3133 = (s->a[nctemp3136] ==nctemp3139);
int nctemp3120 = (nctemp3123 || nctemp3133);
if(nctemp3120)
{
int nctemp3150 = i + 1;
i =nctemp3150;
int nctemp3157=i;
char nctemp3160=(char)('+');
int nctemp3154 = (s->a[nctemp3157] ==nctemp3160);
int nctemp3167=i;
char nctemp3170=(char)('-');
int nctemp3164 = (s->a[nctemp3167] ==nctemp3170);
int nctemp3151 = (nctemp3154 || nctemp3164);
if(nctemp3151)
{
int nctemp3176=i;
char nctemp3179=(char)('-');
int nctemp3173 = (s->a[nctemp3176] ==nctemp3179);
if(nctemp3173)
{
int nctemp3185= -1;
esign =nctemp3185;
}
int nctemp3194 = i + 1;
i =nctemp3194;
}
int nctemp3201=i;
int nctemp3198=(int)(s->a[nctemp3201]);
int nctemp3196= nctemp3198;
int nctemp3203=LibeIsdigit(nctemp3196);
int nctemp3204=nctemp3203;
while(nctemp3204)
{{
int nctemp3219 = 10 * exponent;
int nctemp3224=i;
int nctemp3221=(int)(s->a[nctemp3224]);
int nctemp3226 = nctemp3219 + nctemp3221;
int nctemp3228 = nctemp3226 - '0';
exponent =nctemp3228;
int nctemp3237 = i + 1;
i =nctemp3237;
}
int nctemp3244=i;
int nctemp3241=(int)(s->a[nctemp3244]);
int nctemp3239= nctemp3241;
int nctemp3246=LibeIsdigit(nctemp3239);
nctemp3204=nctemp3246;}}
float nctemp3255=(float)(sign);
float nctemp3259 = nctemp3255 * val;
float nctemp3261=(float)(power);
float nctemp3264 = nctemp3259 / nctemp3261;
float nctemp3248= nctemp3264;
int nctemp3270 = esign * exponent;
int nctemp3265= nctemp3270;
float nctemp3271=LibeFscale(nctemp3248,nctemp3265);
return nctemp3271;
}
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s)
{
int nexp;
int mant;
int c;
int p;
int q;
int l;
int mode;
int ndigit;
int nfield;
int nfrac;
int nctemp3275=s->d[0];int nctemp3280=fmt->d[0];int nctemp3272 = (nctemp3275 < nctemp3280);
if(nctemp3272)
{
return 0;
}
int nctemp3292=fmt->d[0];int nctemp3297 = nctemp3292 - 2;
l =nctemp3297;
p =0;
q =0;
int nctemp3313=p;
int nctemp3310=(int)(fmt->a[nctemp3313]);
c =nctemp3310;
int nctemp3315 = (c =='g');
if(nctemp3315)
{
mode ='g';
}
else{
int nctemp3326= c;
int nctemp3328=LibeIsdigit(nctemp3326);
int nctemp3323 = (nctemp3328 ==1);
if(nctemp3323)
{
int nctemp3333= c;
int nctemp3335=LibeIsdigit(nctemp3333);
int nctemp3330 = (nctemp3335 ==1);
int nctemp3337=nctemp3330;
while(nctemp3337)
{{
int nctemp3341=q;
int nctemp3344=p;
s->a[nctemp3341] =fmt->a[nctemp3344];
int nctemp3357 = p + 1;
p =nctemp3357;
int nctemp3346 = (p > l);
if(nctemp3346)
{
return 0;
}
int nctemp3368 = q + 1;
q =nctemp3368;
int nctemp3376=p;
int nctemp3373=(int)(fmt->a[nctemp3376]);
c =nctemp3373;
}
int nctemp3381= c;
int nctemp3383=LibeIsdigit(nctemp3381);
int nctemp3378 = (nctemp3383 ==1);
nctemp3337=nctemp3378;}int nctemp3388=q;
char nctemp3391=(char)(0);
s->a[nctemp3388] =nctemp3391;
nctempchar1* nctemp3398= s;
int nctemp3401=LibeAtoi(nctemp3398);
nfield =nctemp3401;
}
else{
return 0;
}
int nctemp3403 = (c !='.');
if(nctemp3403)
{
return 0;
}
int nctemp3419 = p + 1;
p =nctemp3419;
int nctemp3408 = (p > l);
if(nctemp3408)
{
return 0;
}
int nctemp3429=p;
int nctemp3426=(int)(fmt->a[nctemp3429]);
c =nctemp3426;
q =0;
int nctemp3438= c;
int nctemp3440=LibeIsdigit(nctemp3438);
int nctemp3435 = (nctemp3440 ==1);
if(nctemp3435)
{
int nctemp3445= c;
int nctemp3447=LibeIsdigit(nctemp3445);
int nctemp3442 = (nctemp3447 ==1);
int nctemp3449=nctemp3442;
while(nctemp3449)
{{
int nctemp3453=q;
int nctemp3456=p;
s->a[nctemp3453] =fmt->a[nctemp3456];
int nctemp3469 = p + 1;
p =nctemp3469;
int nctemp3458 = (p > l);
if(nctemp3458)
{
return 0;
}
int nctemp3480 = q + 1;
q =nctemp3480;
int nctemp3488=p;
int nctemp3485=(int)(fmt->a[nctemp3488]);
c =nctemp3485;
}
int nctemp3493= c;
int nctemp3495=LibeIsdigit(nctemp3493);
int nctemp3490 = (nctemp3495 ==1);
nctemp3449=nctemp3490;}int nctemp3500=q;
char nctemp3503=(char)(0);
s->a[nctemp3500] =nctemp3503;
nctempchar1* nctemp3510= s;
int nctemp3513=LibeAtoi(nctemp3510);
nfrac =nctemp3513;
}
else{
return 0;
}
int nctemp3515 = (c =='f');
if(nctemp3515)
{
mode ='f';
}
else{
int nctemp3523 = (c =='e');
if(nctemp3523)
{
mode ='e';
}
else{
return 0;
}
}
}
int nctemp3532 = (mode =='g');
if(nctemp3532)
{
float nctemp3540= f;
int nctemp3542=LibeGetmaxdig(nctemp3540);
nfrac =nctemp3542;
int nctemp3569 = 1 + 1;
int nctemp3571 = nctemp3569 + 1;
int nctemp3573 = nctemp3571 + 1;
int nctemp3575 = nctemp3573 + nfrac;
int nctemp3577 = nctemp3575 + 1;
int nctemp3579 = nctemp3577 + 1;
int nctemp3581 = nctemp3579 + 2;
nfield =nctemp3581;
int nctemp3590 = nfrac + 1;
ndigit =nctemp3590;
float nctemp3595= f;
int nctemp3597= ndigit;
int nctemp3599=LibeGetfman(nctemp3595,nctemp3597);
mant =nctemp3599;
float nctemp3604= f;
int nctemp3606=LibeGetfexp(nctemp3604);
nexp =nctemp3606;
int nctemp3608= mant;
int nctemp3610= nexp;
int nctemp3612= nfield;
int nctemp3614= nfrac;
nctempchar1* nctemp3616= s;
int nctemp3619=LibeFtoae(nctemp3608,nctemp3610,nctemp3612,nctemp3614,nctemp3616);
}
else{
int nctemp3620 = (mode =='e');
if(nctemp3620)
{
int nctemp3632 = nfrac + 1;
ndigit =nctemp3632;
float nctemp3637= f;
int nctemp3639= ndigit;
int nctemp3641=LibeGetfman(nctemp3637,nctemp3639);
mant =nctemp3641;
float nctemp3646= f;
int nctemp3648=LibeGetfexp(nctemp3646);
nexp =nctemp3648;
int nctemp3650= mant;
int nctemp3652= nexp;
int nctemp3654= nfield;
int nctemp3656= nfrac;
nctempchar1* nctemp3658= s;
int nctemp3661=LibeFtoae(nctemp3650,nctemp3652,nctemp3654,nctemp3656,nctemp3658);
}
else{
int nctemp3662 = (mode =='f');
if(nctemp3662)
{
float nctemp3670= f;
int nctemp3672=LibeGetfexp(nctemp3670);
nexp =nctemp3672;
int nctemp3684 = nexp + nfrac;
int nctemp3686 = nctemp3684 + 1;
ndigit =nctemp3686;
float nctemp3691= f;
int nctemp3693= ndigit;
int nctemp3695=LibeGetfman(nctemp3691,nctemp3693);
mant =nctemp3695;
int nctemp3697= mant;
int nctemp3699= nexp;
int nctemp3701= nfield;
int nctemp3703= nfrac;
nctempchar1* nctemp3705= s;
int nctemp3708=LibeFtoaf(nctemp3697,nctemp3699,nctemp3701,nctemp3703,nctemp3705);
}
}
}
return 1;
}
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
int tp;
int sign;
int i;
int l;
nctempchar1 *t;
int nctemp3710 = (mant < 0);
if(nctemp3710)
{
int nctemp3717= -mant;
mant =nctemp3717;
int nctemp3721= -1;
sign =nctemp3721;
}
else{
sign =1;
}
int nctemp3729=s->d[0];int nctemp3756 = 1 + 1;
int nctemp3758 = nctemp3756 + 1;
int nctemp3760 = nctemp3758 + nfrac;
int nctemp3762 = nctemp3760 + 1;
int nctemp3764 = nctemp3762 + 1;
int nctemp3766 = nctemp3764 + 2;
int nctemp3768 = nctemp3766 + 1;
int nctemp3726 = (nctemp3729 < nctemp3768);
if(nctemp3726)
{
return 0;
}
int nctemp3778=s->d[0];int nctemp3776=nctemp3778;
nctempchar1 *nctemp3775;
nctemp3775=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp3783=s->d[0];nctemp3775->d[0]=nctemp3783;
nctemp3775->a=(char *)malloc(sizeof(char)*nctemp3776);
t=nctemp3775;
int nctemp3810 = 1 + 1;
int nctemp3812 = nctemp3810 + nfrac;
int nctemp3814 = nctemp3812 + 1;
int nctemp3816 = nctemp3814 + 1;
int nctemp3818 = nctemp3816 + 2;
int nctemp3820 = nctemp3818 + 1;
l =nctemp3820;
int nctemp3821 = (sign < 0);
if(nctemp3821)
{
int nctemp3833 = l + 1;
l =nctemp3833;
}
int nctemp3834 = (nfield < l);
if(nctemp3834)
{
i =0;
int nctemp3842 = (i < nfield);
while(nctemp3842){
{
int nctemp3849=i;
char nctemp3852=(char)('*');
s->a[nctemp3849] =nctemp3852;
}
int nctemp3863 = i + 1;
i =nctemp3863;
int nctemp3864 = (i < nfield);
nctemp3842=nctemp3864;
}
int nctemp3871=nfield;
char nctemp3874=(char)(0);
s->a[nctemp3871] =nctemp3874;
return 0;
}
else{
int nctemp3886 = nfield - l;
tp =nctemp3886;
}
i =0;
int nctemp3891 = (i < tp);
while(nctemp3891){
{
int nctemp3898=i;
char nctemp3901=(char)(' ');
s->a[nctemp3898] =nctemp3901;
}
int nctemp3912 = i + 1;
i =nctemp3912;
int nctemp3913 = (i < tp);
nctemp3891=nctemp3913;
}
int nctemp3918= mant;
nctempchar1* nctemp3920= t;
int nctemp3923=LibeItoa(nctemp3918,nctemp3920);
int nctemp3924 = (sign < 0);
if(nctemp3924)
{
int nctemp3931=tp;
char nctemp3934=(char)('-');
s->a[nctemp3931] =nctemp3934;
int nctemp3945 = tp + 1;
tp =nctemp3945;
}
int nctemp3949=tp;
int nctemp3952=0;
s->a[nctemp3949] =t->a[nctemp3952];
int nctemp3962 = tp + 1;
int nctemp3957=nctemp3962;
char nctemp3964=(char)('.');
s->a[nctemp3957] =nctemp3964;
i =0;
int nctemp3971 = (i < nfrac);
while(nctemp3971){
{
int nctemp3986 = tp + 2;
int nctemp3988 = nctemp3986 + i;
int nctemp3978=nctemp3988;
int nctemp3995 = i + 1;
int nctemp3990=nctemp3995;
s->a[nctemp3978] =t->a[nctemp3990];
}
int nctemp4004 = i + 1;
i =nctemp4004;
int nctemp4005 = (i < nfrac);
nctemp3971=nctemp4005;
}
int nctemp4020 = tp + 2;
int nctemp4022 = nctemp4020 + nfrac;
int nctemp4012=nctemp4022;
char nctemp4024=(char)(0);
s->a[nctemp4012] =nctemp4024;
sign =1;
int nctemp4031 = (nexp < 0);
if(nctemp4031)
{
int nctemp4038= -1;
sign =nctemp4038;
int nctemp4042= -nexp;
nexp =nctemp4042;
}
struct nctempchar1 *nctemp4046;
struct nctempchar1 nctemp4047 = {{ 2}, (char*)"e"};
nctemp4046=&nctemp4047;
nctempchar1* nctemp4044= nctemp4046;
nctempchar1* nctemp4048= s;
int nctemp4051=LibeStrcat(nctemp4044,nctemp4048);
int nctemp4052 = (sign > 0);
if(nctemp4052)
{
struct nctempchar1 *nctemp4059;
struct nctempchar1 nctemp4060 = {{ 2}, (char*)"+"};
nctemp4059=&nctemp4060;
nctempchar1* nctemp4057= nctemp4059;
nctempchar1* nctemp4061= s;
int nctemp4064=LibeStrcat(nctemp4057,nctemp4061);
}
else{
struct nctempchar1 *nctemp4068;
struct nctempchar1 nctemp4069 = {{ 2}, (char*)"-"};
nctemp4068=&nctemp4069;
nctempchar1* nctemp4066= nctemp4068;
nctempchar1* nctemp4070= s;
int nctemp4073=LibeStrcat(nctemp4066,nctemp4070);
}
int nctemp4075= nexp;
nctempchar1* nctemp4077= t;
int nctemp4080=LibeItoa(nctemp4075,nctemp4077);
nctempchar1* nctemp4084= t;
int nctemp4087=LibeStrlen(nctemp4084);
int nctemp4081 = (nctemp4087 ==1);
if(nctemp4081)
{
struct nctempchar1 *nctemp4092;
struct nctempchar1 nctemp4093 = {{ 2}, (char*)"0"};
nctemp4092=&nctemp4093;
nctempchar1* nctemp4090= nctemp4092;
nctempchar1* nctemp4094= s;
int nctemp4097=LibeStrcat(nctemp4090,nctemp4094);
}
nctempchar1* nctemp4099= t;
nctempchar1* nctemp4102= s;
int nctemp4105=LibeStrcat(nctemp4099,nctemp4102);
free(t->a);
return 1;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp4110 = (mant < 0);
if(nctemp4110)
{
int nctemp4117= -1;
sign =nctemp4117;
int nctemp4121= -mant;
mant =nctemp4121;
}
else{
sign =1;
}
int nctemp4129=s->d[0];int nctemp4138 = nfield + 1;
int nctemp4126 = (nctemp4129 < nctemp4138);
if(nctemp4126)
{
return 0;
}
int nctemp4154 = nexp + 1;
int nctemp4156 = nctemp4154 + 1;
int nctemp4158 = nctemp4156 + nfrac;
l =nctemp4158;
int nctemp4159 = (sign < 0);
if(nctemp4159)
{
int nctemp4171 = l + 1;
l =nctemp4171;
}
int nctemp4172 = (nfield < l);
if(nctemp4172)
{
i =0;
int nctemp4180 = (i < nfield);
while(nctemp4180){
{
int nctemp4187=i;
char nctemp4190=(char)('*');
s->a[nctemp4187] =nctemp4190;
}
int nctemp4201 = i + 1;
i =nctemp4201;
int nctemp4202 = (i < nfield);
nctemp4180=nctemp4202;
}
int nctemp4209=nfield;
char nctemp4212=(char)(0);
s->a[nctemp4209] =nctemp4212;
return 0;
}
else{
int nctemp4224 = nfield - l;
tp =nctemp4224;
}
int nctemp4236 = 6 + 1;
int nctemp4231=nctemp4236;
nctempchar1 *nctemp4230;
nctemp4230=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp4241 = 6 + 1;
nctemp4230->d[0]=nctemp4241;
nctemp4230->a=(char *)malloc(sizeof(char)*nctemp4231);
t=nctemp4230;
int nctemp4243= mant;
nctempchar1* nctemp4245= t;
int nctemp4248=LibeItoa(nctemp4243,nctemp4245);
i =0;
int nctemp4253 = (i < tp);
while(nctemp4253){
{
int nctemp4260=i;
char nctemp4263=(char)(' ');
s->a[nctemp4260] =nctemp4263;
}
int nctemp4274 = i + 1;
i =nctemp4274;
int nctemp4275 = (i < tp);
nctemp4253=nctemp4275;
}
int nctemp4279 = (nexp >= 0);
if(nctemp4279)
{
int nctemp4286= -1;
int nctemp4283 = (sign ==nctemp4286);
if(nctemp4283)
{
int nctemp4290=tp;
char nctemp4293=(char)('-');
s->a[nctemp4290] =nctemp4293;
int nctemp4304 = tp + 1;
tp =nctemp4304;
}
i =0;
int nctemp4309 = (i <= nexp);
while(nctemp4309){
{
int nctemp4321 = i + tp;
int nctemp4316=nctemp4321;
int nctemp4323=i;
s->a[nctemp4316] =t->a[nctemp4323];
}
int nctemp4333 = i + 1;
i =nctemp4333;
int nctemp4334 = (i <= nexp);
nctemp4309=nctemp4334;
}
int nctemp4338 = (nfrac > 0);
if(nctemp4338)
{
int nctemp4353 = tp + nexp;
int nctemp4355 = nctemp4353 + 1;
int nctemp4345=nctemp4355;
char nctemp4357=(char)('.');
s->a[nctemp4345] =nctemp4357;
}
i =0;
int nctemp4364 = (i < nfrac);
while(nctemp4364){
{
int nctemp4368 = (mant ==0);
if(nctemp4368)
{
int nctemp4389 = tp + nexp;
int nctemp4391 = nctemp4389 + 1;
int nctemp4393 = nctemp4391 + 1;
int nctemp4395 = nctemp4393 + i;
int nctemp4375=nctemp4395;
char nctemp4397=(char)('0');
s->a[nctemp4375] =nctemp4397;
}
else{
int nctemp4417 = tp + nexp;
int nctemp4419 = nctemp4417 + 1;
int nctemp4421 = nctemp4419 + 1;
int nctemp4423 = nctemp4421 + i;
int nctemp4403=nctemp4423;
int nctemp4433 = nexp + 1;
int nctemp4435 = nctemp4433 + i;
int nctemp4425=nctemp4435;
s->a[nctemp4403] =t->a[nctemp4425];
}
}
int nctemp4444 = i + 1;
i =nctemp4444;
int nctemp4445 = (i < nfrac);
nctemp4364=nctemp4445;
}
int nctemp4449 = (nfrac > 0);
if(nctemp4449)
{
int nctemp4470 = tp + nexp;
int nctemp4472 = nctemp4470 + 1;
int nctemp4474 = nctemp4472 + 1;
int nctemp4476 = nctemp4474 + nfrac;
int nctemp4456=nctemp4476;
char nctemp4478=(char)(0);
s->a[nctemp4456] =nctemp4478;
}
else{
int nctemp4492 = tp + nexp;
int nctemp4494 = nctemp4492 + 1;
int nctemp4484=nctemp4494;
char nctemp4496=(char)(0);
s->a[nctemp4484] =nctemp4496;
}
}
else{
int nctemp4502= -nexp;
nexp =nctemp4502;
int nctemp4506= -1;
int nctemp4503 = (sign ==nctemp4506);
if(nctemp4503)
{
int nctemp4510=tp;
char nctemp4513=(char)('-');
s->a[nctemp4510] =nctemp4513;
int nctemp4524 = tp + 1;
tp =nctemp4524;
}
int nctemp4528=tp;
char nctemp4531=(char)('0');
s->a[nctemp4528] =nctemp4531;
int nctemp4542 = tp + 1;
int nctemp4537=nctemp4542;
char nctemp4544=(char)('.');
s->a[nctemp4537] =nctemp4544;
i =0;
int nctemp4559 = nexp - 1;
int nctemp4551 = (i < nctemp4559);
while(nctemp4551){
{
int nctemp4571 = i + tp;
int nctemp4573 = nctemp4571 + 2;
int nctemp4563=nctemp4573;
char nctemp4575=(char)('0');
s->a[nctemp4563] =nctemp4575;
}
int nctemp4586 = i + 1;
i =nctemp4586;
int nctemp4595 = nexp - 1;
int nctemp4587 = (i < nctemp4595);
nctemp4551=nctemp4587;
}
i =0;
int nctemp4611 = nfrac - nexp;
int nctemp4613 = nctemp4611 + 1;
int nctemp4600 = (i < nctemp4613);
while(nctemp4600){
{
int nctemp4631 = tp + 2;
int nctemp4633 = nctemp4631 + i;
int nctemp4635 = nctemp4633 + nexp;
int nctemp4637 = nctemp4635 - 1;
int nctemp4617=nctemp4637;
int nctemp4639=i;
s->a[nctemp4617] =t->a[nctemp4639];
}
int nctemp4649 = i + 1;
i =nctemp4649;
int nctemp4661 = nfrac - nexp;
int nctemp4663 = nctemp4661 + 1;
int nctemp4650 = (i < nctemp4663);
nctemp4600=nctemp4650;
}
int nctemp4675 = tp + 2;
int nctemp4677 = nctemp4675 + nfrac;
int nctemp4667=nctemp4677;
char nctemp4679=(char)(0);
s->a[nctemp4667] =nctemp4679;
}
return 1;
}
float LibeMach (int flag)
{
int nctemp4683 = (flag ==1);
if(nctemp4683)
{
return 1.1754943508222875e-38;
}
else{
int nctemp4688 = (flag ==2);
if(nctemp4688)
{
return 3.4028234663852886e+38;
}
else{
int nctemp4693 = (flag ==3);
if(nctemp4693)
{
return 5.9604644775390625e-08;
}
else{
int nctemp4698 = (flag ==4);
if(nctemp4698)
{
return 1.1920928955078125e-07;
}
else{
int nctemp4703 = (flag ==5);
if(nctemp4703)
{
return 0.6931471805599453;
}
else{
float nctemp4709=(float)(0);
return nctemp4709;
}
}
}
}
}
}
float LibeFabs (float x)
{
int nctemp4712 = (x < 0.0);
if(nctemp4712)
{
float nctemp4716= -x;
return nctemp4716;
}
else{
return x;
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
int nctemp4718 = (n ==0);
if(nctemp4718)
{
return x;
}
rval =1.0;
int nctemp4727 = (n > 0);
if(nctemp4727)
{
i =0;
int nctemp4735 = (i < n);
while(nctemp4735){
{
float nctemp4747 = rval * 2.0;
rval =nctemp4747;
}
int nctemp4756 = i + 1;
i =nctemp4756;
int nctemp4757 = (i < n);
nctemp4735=nctemp4757;
}
}
else{
int nctemp4764= -n;
n =nctemp4764;
i =0;
int nctemp4769 = (i < n);
while(nctemp4769){
{
float nctemp4781 = rval * 0.5;
rval =nctemp4781;
}
int nctemp4790 = i + 1;
i =nctemp4790;
int nctemp4791 = (i < n);
nctemp4769=nctemp4791;
}
}
float nctemp4799 = rval * x;
return nctemp4799;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp4804= x;
float nctemp4806=LibeFabs(nctemp4804);
absx =nctemp4806;
n =0;
int nctemp4811 = (x ==0.0);
if(nctemp4811)
{
return 0.0;
}
int nctemp4816 = (absx < 0.5);
int nctemp4820=nctemp4816;
while(nctemp4820)
{{
int nctemp4829 = n - 1;
n =nctemp4829;
float nctemp4838 = absx * 2.0;
absx =nctemp4838;
}
int nctemp4839 = (absx < 0.5);
nctemp4820=nctemp4839;}int nctemp4843 = (absx >= 1.0);
int nctemp4847=nctemp4843;
while(nctemp4847)
{{
int nctemp4856 = n + 1;
n =nctemp4856;
float nctemp4865 = absx * 0.5;
absx =nctemp4865;
}
int nctemp4866 = (absx >= 1.0);
nctemp4847=nctemp4866;}int nctemp4870 = (x < 0.0);
if(nctemp4870)
{
float nctemp4874= -absx;
return nctemp4874;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp4880= x;
float nctemp4882=LibeFabs(nctemp4880);
absx =nctemp4882;
n =0;
int nctemp4887 = (x ==0.0);
if(nctemp4887)
{
return 0;
}
int nctemp4892 = (absx < 0.5);
int nctemp4896=nctemp4892;
while(nctemp4896)
{{
int nctemp4905 = n - 1;
n =nctemp4905;
float nctemp4914 = absx * 2.0;
absx =nctemp4914;
}
int nctemp4915 = (absx < 0.5);
nctemp4896=nctemp4915;}int nctemp4919 = (absx >= 1.0);
int nctemp4923=nctemp4919;
while(nctemp4923)
{{
int nctemp4932 = n + 1;
n =nctemp4932;
float nctemp4941 = absx * 0.5;
absx =nctemp4941;
}
int nctemp4942 = (absx >= 1.0);
nctemp4923=nctemp4942;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval =1.0;
int nctemp4951 = (n ==0);
if(nctemp4951)
{
return x;
}
int nctemp4956 = (n > 0);
if(nctemp4956)
{
i =0;
int nctemp4964 = (i < n);
while(nctemp4964){
{
float nctemp4976 = rval * 10.0;
rval =nctemp4976;
}
int nctemp4985 = i + 1;
i =nctemp4985;
int nctemp4986 = (i < n);
nctemp4964=nctemp4986;
}
}
else{
int nctemp4993= -n;
n =nctemp4993;
i =0;
int nctemp4998 = (i < n);
while(nctemp4998){
{
float nctemp5010 = rval * 0.1;
rval =nctemp5010;
}
int nctemp5019 = i + 1;
i =nctemp5019;
int nctemp5020 = (i < n);
nctemp4998=nctemp5020;
}
}
float nctemp5028 = rval * x;
return nctemp5028;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp5029 = (f ==0.0);
if(nctemp5029)
{
return 0;
}
sign =1;
int nctemp5038 = (f < 0.0);
if(nctemp5038)
{
float nctemp5045= -f;
f =nctemp5045;
int nctemp5049= -sign;
sign =nctemp5049;
}
nexp =0;
float nctemp5064 = f / 10.0;
float nctemp5066 = nctemp5064 + 1.1920928955078125e-07;
int nctemp5054 = (nctemp5066 >= 1.0);
if(nctemp5054)
{
float nctemp5078 = f / 10.0;
float nctemp5080 = nctemp5078 + 1.1920928955078125e-07;
int nctemp5068 = (nctemp5080 >= 1.0);
int nctemp5082=nctemp5068;
while(nctemp5082)
{{
float nctemp5091 = f / 10.0;
f =nctemp5091;
int nctemp5100 = nexp + 1;
nexp =nctemp5100;
}
float nctemp5111 = f / 10.0;
float nctemp5113 = nctemp5111 + 1.1920928955078125e-07;
int nctemp5101 = (nctemp5113 >= 1.0);
nctemp5082=nctemp5101;}}
else{
float nctemp5122 = f + 1.1920928955078125e-07;
int nctemp5115 = (nctemp5122 < 1.0);
if(nctemp5115)
{
float nctemp5131 = f + 1.1920928955078125e-07;
int nctemp5124 = (nctemp5131 < 1.0);
int nctemp5133=nctemp5124;
while(nctemp5133)
{{
float nctemp5142 = f * 10.0;
f =nctemp5142;
int nctemp5151 = nexp - 1;
nexp =nctemp5151;
}
float nctemp5159 = f + 1.1920928955078125e-07;
int nctemp5152 = (nctemp5159 < 1.0);
nctemp5133=nctemp5152;}}
}
i =0;
int nctemp5173 = maxdig - 1;
int nctemp5165 = (i < nctemp5173);
while(nctemp5165){
{
float nctemp5182 = f * 10.0;
f =nctemp5182;
}
int nctemp5191 = i + 1;
i =nctemp5191;
int nctemp5200 = maxdig - 1;
int nctemp5192 = (i < nctemp5200);
nctemp5165=nctemp5192;
}
float nctemp5211 = f + 0.5;
int nctemp5205=(int)(nctemp5211);
n =nctemp5205;
int nctemp5212 = (sign < 0);
if(nctemp5212)
{
int nctemp5219= -n;
n =nctemp5219;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp5221 = (f ==0.0);
if(nctemp5221)
{
return 0.0;
}
sign =1;
int nctemp5230 = (f < 0.0);
if(nctemp5230)
{
float nctemp5237= -f;
f =nctemp5237;
int nctemp5241= -sign;
sign =nctemp5241;
}
nexp =0;
float nctemp5256 = f / 10.0;
float nctemp5258 = nctemp5256 + 1.1920928955078125e-07;
int nctemp5246 = (nctemp5258 >= 1.0);
if(nctemp5246)
{
float nctemp5270 = f / 10.0;
float nctemp5272 = nctemp5270 + 1.1920928955078125e-07;
int nctemp5260 = (nctemp5272 >= 1.0);
int nctemp5274=nctemp5260;
while(nctemp5274)
{{
float nctemp5283 = f / 10.0;
f =nctemp5283;
int nctemp5292 = nexp + 1;
nexp =nctemp5292;
}
float nctemp5303 = f / 10.0;
float nctemp5305 = nctemp5303 + 1.1920928955078125e-07;
int nctemp5293 = (nctemp5305 >= 1.0);
nctemp5274=nctemp5293;}}
else{
float nctemp5314 = f + 1.1920928955078125e-07;
int nctemp5307 = (nctemp5314 < 1.0);
if(nctemp5307)
{
float nctemp5323 = f + 1.1920928955078125e-07;
int nctemp5316 = (nctemp5323 < 1.0);
int nctemp5325=nctemp5316;
while(nctemp5325)
{{
float nctemp5334 = f * 10.0;
f =nctemp5334;
int nctemp5343 = nexp - 1;
nexp =nctemp5343;
}
float nctemp5351 = f + 1.1920928955078125e-07;
int nctemp5344 = (nctemp5351 < 1.0);
nctemp5325=nctemp5344;}}
}
return f;
}
int LibeGetmaxdig (float f)
{
int sign;
int nexp;
int i;
int loop;
float r;
int nctemp5354 = (f ==0.0);
if(nctemp5354)
{
return 0;
}
sign =1;
int nctemp5363 = (f < 0.0);
if(nctemp5363)
{
float nctemp5370= -f;
f =nctemp5370;
int nctemp5374= -sign;
sign =nctemp5374;
}
nexp =0;
float nctemp5389 = f / 10.0;
float nctemp5391 = nctemp5389 + 1.1920928955078125e-07;
int nctemp5379 = (nctemp5391 >= 1.0);
if(nctemp5379)
{
float nctemp5403 = f / 10.0;
float nctemp5405 = nctemp5403 + 1.1920928955078125e-07;
int nctemp5393 = (nctemp5405 >= 1.0);
int nctemp5407=nctemp5393;
while(nctemp5407)
{{
float nctemp5416 = f / 10.0;
f =nctemp5416;
int nctemp5425 = nexp + 1;
nexp =nctemp5425;
}
float nctemp5436 = f / 10.0;
float nctemp5438 = nctemp5436 + 1.1920928955078125e-07;
int nctemp5426 = (nctemp5438 >= 1.0);
nctemp5407=nctemp5426;}}
else{
float nctemp5447 = f + 1.1920928955078125e-07;
int nctemp5440 = (nctemp5447 < 1.0);
if(nctemp5440)
{
float nctemp5456 = f + 1.1920928955078125e-07;
int nctemp5449 = (nctemp5456 < 1.0);
int nctemp5458=nctemp5449;
while(nctemp5458)
{{
float nctemp5467 = f * 10.0;
f =nctemp5467;
int nctemp5476 = nexp - 1;
nexp =nctemp5476;
}
float nctemp5484 = f + 1.1920928955078125e-07;
int nctemp5477 = (nctemp5484 < 1.0);
nctemp5458=nctemp5477;}}
}
i =0;
loop =1;
int nctemp5495=loop;
while(nctemp5495)
{{
int nctemp5507=(int)(f);
float nctemp5504=(float)(nctemp5507);
float nctemp5510 = f - nctemp5504;
r =nctemp5510;
int nctemp5511 = (r < 1.1920928955078125e-07);
if(nctemp5511)
{
loop =0;
}
else{
float nctemp5527 = f * 10.0;
f =nctemp5527;
}
int nctemp5536 = i + 1;
i =nctemp5536;
int nctemp5537 = (i >= 10);
if(nctemp5537)
{
loop =0;
}
}
nctemp5495=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp5547 = (f ==0.0);
if(nctemp5547)
{
return 0;
}
nexp =0;
int nctemp5556 = (f < 0.0);
if(nctemp5556)
{
float nctemp5563= -f;
f =nctemp5563;
}
float nctemp5574 = f / 10.0;
float nctemp5576 = nctemp5574 + 1.1920928955078125e-07;
int nctemp5564 = (nctemp5576 >= 1.0);
if(nctemp5564)
{
float nctemp5588 = f / 10.0;
float nctemp5590 = nctemp5588 + 1.1920928955078125e-07;
int nctemp5578 = (nctemp5590 >= 1.0);
int nctemp5592=nctemp5578;
while(nctemp5592)
{{
float nctemp5601 = f / 10.0;
f =nctemp5601;
int nctemp5610 = nexp + 1;
nexp =nctemp5610;
}
float nctemp5621 = f / 10.0;
float nctemp5623 = nctemp5621 + 1.1920928955078125e-07;
int nctemp5611 = (nctemp5623 >= 1.0);
nctemp5592=nctemp5611;}}
else{
float nctemp5632 = f + 1.1920928955078125e-07;
int nctemp5625 = (nctemp5632 < 1.0);
if(nctemp5625)
{
float nctemp5641 = f + 1.1920928955078125e-07;
int nctemp5634 = (nctemp5641 < 1.0);
int nctemp5643=nctemp5634;
while(nctemp5643)
{{
float nctemp5652 = f * 10.0;
f =nctemp5652;
int nctemp5661 = nexp - 1;
nexp =nctemp5661;
}
float nctemp5669 = f + 1.1920928955078125e-07;
int nctemp5662 = (nctemp5669 < 1.0);
nctemp5643=nctemp5662;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp5673=RunClock();
return nctemp5673;
}
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
float LibeSincos (float x,float y,float sign);
float LibeAtan (float f);
int LibeMathinit ()
{
float nctemp5678= 1.0;
int nctemp5685 = 24 - 1;
int nctemp5680= nctemp5685;
float nctemp5686=LibeFscale2(nctemp5678,nctemp5680);
LibeSincosmax =nctemp5686;
float nctemp5695= LibeSincosmax;
float nctemp5697=LibeSqrt(nctemp5695);
float nctemp5698 = 3.1415926535897932384626433832795028841972 * nctemp5697;
LibeSincosmax =nctemp5698;
float nctemp5707= 1.0;
int nctemp5714 = 24 / 2;
int nctemp5709= nctemp5714;
float nctemp5715=LibeFscale2(nctemp5707,nctemp5709);
float nctemp5716 = 1.0 / nctemp5715;
LibeSincoslim =nctemp5716;
float nctemp5721= 3.4028234663852886e+38;
float nctemp5723=LibeLn(nctemp5721);
LibeLnmax =nctemp5723;
float nctemp5728= 1.1754943508222875e-38;
float nctemp5730=LibeLn(nctemp5728);
LibeLnmin =nctemp5730;
return 1;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp5732 = (x ==0.0);
if(nctemp5732)
{
return 0.0;
}
int nctemp5737 = (x < 0.0);
if(nctemp5737)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp5750;
struct nctempchar1 nctemp5751 = {{ 25}, (char*)"Sqrt input argument < 0 "};
nctemp5750=&nctemp5751;
LibeErrstr=nctemp5750;
return 0.0;
}
float nctemp5757= x;
float nctemp5759=LibeGetfman2(nctemp5757);
f =nctemp5759;
float nctemp5764= x;
int nctemp5766=LibeGetfexp2(nctemp5764);
n =nctemp5766;
float nctemp5779 = 0.59016 * f;
float nctemp5780 = 0.41731 + nctemp5779;
yest =nctemp5780;
float nctemp5793 = f / yest;
float nctemp5794 = yest + nctemp5793;
z =nctemp5794;
float nctemp5806 = 0.25 * z;
float nctemp5812 = f / z;
float nctemp5813 = nctemp5806 + nctemp5812;
yest =nctemp5813;
int nctemp5817= n;
int nctemp5819= 2;
int nctemp5821=LibeMod(nctemp5817,nctemp5819);
int nctemp5814 = (nctemp5821 !=0);
if(nctemp5814)
{
float nctemp5831 = yest * 0.70710678118654752440;
yest =nctemp5831;
int nctemp5840 = n + 1;
n =nctemp5840;
}
float nctemp5842= yest;
int nctemp5849 = n / 2;
int nctemp5844= nctemp5849;
float nctemp5850=LibeFscale2(nctemp5842,nctemp5844);
return nctemp5850;
}
float LibeLn (float x)
{
float f;
int n;
float z;
float zn;
float zd;
float w;
float r;
float xn;
int nctemp5851 = (x <= 0.0);
if(nctemp5851)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp5864;
struct nctempchar1 nctemp5865 = {{ 23}, (char*)"Ln input argument < 0 "};
nctemp5864=&nctemp5865;
LibeErrstr=nctemp5864;
return 3.4028234663852886e+38;
}
float nctemp5871= x;
float nctemp5873=LibeGetfman2(nctemp5871);
f =nctemp5873;
float nctemp5878= x;
int nctemp5880=LibeGetfexp2(nctemp5878);
n =nctemp5880;
int nctemp5881 = (f > 0.70710678118654752440);
if(nctemp5881)
{
float nctemp5896 = f - 0.5;
float nctemp5898 = nctemp5896 - 0.5;
zn =nctemp5898;
float nctemp5910 = f * 0.5;
float nctemp5912 = nctemp5910 + 0.5;
zd =nctemp5912;
}
else{
float nctemp5921 = f - 0.5;
zn =nctemp5921;
float nctemp5933 = zn * 0.5;
float nctemp5935 = nctemp5933 + 0.5;
zd =nctemp5935;
int nctemp5944 = n - 1;
n =nctemp5944;
}
float nctemp5953 = zn / zd;
z =nctemp5953;
float nctemp5962 = z * z;
w =nctemp5962;
float nctemp5982 = w * (-0.5527074855E+0);
float nctemp5988 = w + (-0.6632718214E+1);
float nctemp5989 = nctemp5982 / nctemp5988;
float nctemp5990 = z * nctemp5989;
float nctemp5991 = z + nctemp5990;
r =nctemp5991;
float nctemp5996=(float)(n);
xn =nctemp5996;
float nctemp6009 = xn * (-2.121944400546905827679E-4);
float nctemp6011 = nctemp6009 + r;
float nctemp6017 = xn * 0.69335938;
float nctemp6018 = nctemp6011 + nctemp6017;
return nctemp6018;
}
float LibeExp (float x)
{
int n;
float g;
float z;
float p;
float q;
float xn;
float P0;
float P1;
float Q1;
float rval;
P0 =0.24999999950E+0;
P1 =0.41602886268E-2;
Q1 =0.49987178778E-1;
int nctemp6031 = (x >= LibeLnmax);
if(nctemp6031)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6044;
struct nctempchar1 nctemp6045 = {{ 25}, (char*)"Overflow in exp function"};
nctemp6044=&nctemp6045;
LibeErrstr=nctemp6044;
return 3.4028234663852886e+38;
}
int nctemp6047 = (x < LibeLnmin);
if(nctemp6047)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6060;
struct nctempchar1 nctemp6061 = {{ 26}, (char*)"Underflow in exp function"};
nctemp6060=&nctemp6061;
LibeErrstr=nctemp6060;
return 0.0;
}
float nctemp6073 = x * 1.4426950408889634073;
int nctemp6067=(int)(nctemp6073);
n =nctemp6067;
float nctemp6078=(float)(n);
xn =nctemp6078;
float nctemp6093 = xn * 0.693147180559945309417232;
float nctemp6094 = x - nctemp6093;
g =nctemp6094;
float nctemp6103 = g * g;
z =nctemp6103;
float nctemp6118 = P1 * z;
float nctemp6120 = nctemp6118 + P0;
float nctemp6122 = nctemp6120 * g;
p =nctemp6122;
float nctemp6134 = Q1 * z;
float nctemp6136 = nctemp6134 + 0.5;
q =nctemp6136;
float nctemp6153 = q - p;
float nctemp6154 = p / nctemp6153;
float nctemp6155 = 0.5 + nctemp6154;
rval =nctemp6155;
float nctemp6157= rval;
int nctemp6164 = n + 1;
int nctemp6159= nctemp6164;
float nctemp6165=LibeFscale2(nctemp6157,nctemp6159);
return nctemp6165;
}
float LibeSincos (float x,float y,float sign)
{
int n;
float xn;
float f;
float g;
float R1;
float R2;
float R3;
float R4;
float nctemp6169= -0.1666665668E+0;
R1 =nctemp6169;
R2 =0.8333025139E-2;
float nctemp6177= -0.1980741872E-3;
R3 =nctemp6177;
R4 =0.2601903036E-5;
int nctemp6182 = (y > LibeSincosmax);
if(nctemp6182)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6195;
struct nctempchar1 nctemp6196 = {{ 37}, (char*)"Loss of accuracy in sin/cos function"};
nctemp6195=&nctemp6196;
LibeErrstr=nctemp6195;
return 0.0;
}
float nctemp6211 = y * 0.31830988618379067154;
float nctemp6213 = nctemp6211 + 0.5;
int nctemp6202=(int)(nctemp6213);
n =nctemp6202;
float nctemp6218=(float)(n);
xn =nctemp6218;
int nctemp6224= n;
int nctemp6226= 2;
int nctemp6228=LibeMod(nctemp6224,nctemp6226);
int nctemp6221 = (nctemp6228 !=0);
if(nctemp6221)
{
float nctemp6233= -sign;
sign =nctemp6233;
}
float nctemp6238= x;
float nctemp6240=LibeFabs(nctemp6238);
x =nctemp6240;
int nctemp6241 = (x !=y);
if(nctemp6241)
{
float nctemp6253 = xn - 0.5;
xn =nctemp6253;
}
float nctemp6261= x;
float nctemp6263=LibeFabs(nctemp6261);
float nctemp6269 = xn * 3.1415926535897932384626433832795028841972;
float nctemp6270 = nctemp6263 - nctemp6269;
f =nctemp6270;
float nctemp6274= f;
float nctemp6276=LibeFabs(nctemp6274);
int nctemp6271 = (nctemp6276 < LibeSincoslim);
if(nctemp6271)
{
float nctemp6282 = sign * f;
return nctemp6282;
}
float nctemp6291 = f * f;
g =nctemp6291;
float nctemp6318 = R4 * g;
float nctemp6320 = nctemp6318 + R3;
float nctemp6322 = nctemp6320 * g;
float nctemp6324 = nctemp6322 + R2;
float nctemp6326 = nctemp6324 * g;
float nctemp6328 = nctemp6326 + R1;
float nctemp6330 = nctemp6328 * g;
g =nctemp6330;
float nctemp6343 = f * g;
float nctemp6344 = f + nctemp6343;
g =nctemp6344;
float nctemp6349 = sign * g;
return nctemp6349;
}
float LibeSin (float x)
{
int nctemp6350 = (x < 0.0);
if(nctemp6350)
{
float nctemp6355= x;
float nctemp6358= -x;
float nctemp6357= nctemp6358;
float nctemp6360= -1.0;
float nctemp6359= nctemp6360;
float nctemp6361=LibeSincos(nctemp6355,nctemp6357,nctemp6359);
return nctemp6361;
}
else{
float nctemp6363= x;
float nctemp6365= x;
float nctemp6367= 1.0;
float nctemp6369=LibeSincos(nctemp6363,nctemp6365,nctemp6367);
return nctemp6369;
}
}
float LibeCos (float x)
{
float nctemp6371= x;
float nctemp6377= x;
float nctemp6379=LibeFabs(nctemp6377);
float nctemp6381 = nctemp6379 + 1.57079632679489661923132;
float nctemp6373= nctemp6381;
float nctemp6382= 1.0;
float nctemp6384=LibeSincos(nctemp6371,nctemp6373,nctemp6382);
return nctemp6384;
}
float LibeTan (float x)
{
float P1;
float Q1;
float Q2;
int n;
float y;
float xn;
float f;
float xnum;
float xden;
float g;
float nctemp6388= -0.958017723E-1;
P1 =nctemp6388;
float nctemp6392= -0.429135777E+0;
Q1 =nctemp6392;
Q2 =0.971685835E-2;
float nctemp6401= x;
float nctemp6403=LibeFabs(nctemp6401);
y =nctemp6403;
int nctemp6404 = (y > LibeSincosmax);
if(nctemp6404)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6417;
struct nctempchar1 nctemp6418 = {{ 33}, (char*)"Loss of accuracy in tan function"};
nctemp6417=&nctemp6418;
LibeErrstr=nctemp6417;
return 0.0;
}
float nctemp6430 = x * 0.63661977236758134308;
int nctemp6424=(int)(nctemp6430);
n =nctemp6424;
float nctemp6435=(float)(n);
xn =nctemp6435;
float nctemp6450 = xn * 1.57079632679489661923132;
float nctemp6451 = x - nctemp6450;
f =nctemp6451;
float nctemp6455= f;
float nctemp6457=LibeFabs(nctemp6455);
int nctemp6452 = (nctemp6457 < LibeSincoslim);
if(nctemp6452)
{
xnum =f;
xden =1.0;
}
else{
float nctemp6475 = f * f;
g =nctemp6475;
float nctemp6490 = P1 * g;
float nctemp6492 = nctemp6490 * f;
float nctemp6494 = nctemp6492 + f;
xnum =nctemp6494;
float nctemp6515 = Q2 * g;
float nctemp6517 = nctemp6515 + Q1;
float nctemp6519 = nctemp6517 * g;
float nctemp6521 = nctemp6519 + 0.5;
float nctemp6523 = nctemp6521 + 0.5;
xden =nctemp6523;
}
int nctemp6527= n;
int nctemp6529= 2;
int nctemp6531=LibeMod(nctemp6527,nctemp6529);
int nctemp6524 = (nctemp6531 !=0);
if(nctemp6524)
{
float nctemp6536= -xnum;
float nctemp6537 = xden / nctemp6536;
return nctemp6537;
}
else{
float nctemp6542 = xnum / xden;
return nctemp6542;
}
}
float LibeArcsin (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
P1 =0.933935835E+0;
float nctemp6550= -0.504400557E+0;
P2 =nctemp6550;
Q0 =0.560363004E+1;
float nctemp6558= -0.554846723E+1;
Q1 =nctemp6558;
float nctemp6563= x;
float nctemp6565=LibeFabs(nctemp6563);
y =nctemp6565;
int nctemp6566 = (y > 0.5);
if(nctemp6566)
{
i =1;
int nctemp6574 = (y > 1.0);
if(nctemp6574)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp6587;
struct nctempchar1 nctemp6588 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1"};
nctemp6587=&nctemp6588;
LibeErrstr=nctemp6587;
return 3.4028234663852886e+38;
}
float nctemp6601 = 1.0 - y;
float nctemp6603 = nctemp6601 * 0.5;
g =nctemp6603;
float nctemp6608= g;
float nctemp6610=LibeSqrt(nctemp6608);
r =nctemp6610;
float nctemp6614= -r;
r =nctemp6614;
float nctemp6623 = r + r;
y =nctemp6623;
float nctemp6641 = P2 * g;
float nctemp6643 = nctemp6641 + P1;
float nctemp6645 = nctemp6643 * g;
float nctemp6657 = g + Q1;
float nctemp6659 = nctemp6657 * g;
float nctemp6661 = nctemp6659 + Q0;
float nctemp6662 = nctemp6645 / nctemp6661;
r =nctemp6662;
float nctemp6675 = y * r;
float nctemp6676 = y + nctemp6675;
res =nctemp6676;
}
else{
i =0;
int nctemp6681 = (y < LibeSincoslim);
if(nctemp6681)
{
res =y;
}
else{
float nctemp6697 = y * y;
g =nctemp6697;
float nctemp6715 = P2 * g;
float nctemp6717 = nctemp6715 + P1;
float nctemp6719 = nctemp6717 * g;
float nctemp6731 = g + Q1;
float nctemp6733 = nctemp6731 * g;
float nctemp6735 = nctemp6733 + Q0;
float nctemp6736 = nctemp6719 / nctemp6735;
g =nctemp6736;
float nctemp6749 = y * g;
float nctemp6750 = y + nctemp6749;
res =nctemp6750;
}
}
int nctemp6751 = (i ==1);
if(nctemp6751)
{
float nctemp6767 = 0.78539816339744830962 + res;
float nctemp6768 = 0.78539816339744830962 + nctemp6767;
res =nctemp6768;
}
int nctemp6769 = (x < 0.0);
if(nctemp6769)
{
float nctemp6776= -res;
res =nctemp6776;
}
return res;
}
float LibeArccos (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
P1 =0.933935835E+0;
float nctemp6785= -0.504400557E+0;
P2 =nctemp6785;
Q0 =0.560363004E+1;
float nctemp6793= -0.554846723E+1;
Q1 =nctemp6793;
float nctemp6798= x;
float nctemp6800=LibeFabs(nctemp6798);
y =nctemp6800;
int nctemp6801 = (y > 0.5);
if(nctemp6801)
{
i =0;
int nctemp6809 = (y > 1.0);
if(nctemp6809)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp6822;
struct nctempchar1 nctemp6823 = {{ 50}, (char*)"Absolute value of argument of arccos out of range"};
nctemp6822=&nctemp6823;
LibeErrstr=nctemp6822;
return 3.4028234663852886e+38;
}
float nctemp6836 = 1.0 - y;
float nctemp6838 = nctemp6836 * 0.5;
g =nctemp6838;
float nctemp6843= g;
float nctemp6845=LibeSqrt(nctemp6843);
r =nctemp6845;
float nctemp6849= -r;
r =nctemp6849;
float nctemp6858 = r + r;
y =nctemp6858;
float nctemp6876 = P2 * g;
float nctemp6878 = nctemp6876 + P1;
float nctemp6880 = nctemp6878 * g;
float nctemp6892 = g + Q1;
float nctemp6894 = nctemp6892 * g;
float nctemp6896 = nctemp6894 + Q0;
float nctemp6897 = nctemp6880 / nctemp6896;
r =nctemp6897;
float nctemp6910 = y * r;
float nctemp6911 = y + nctemp6910;
res =nctemp6911;
}
else{
i =1;
int nctemp6916 = (y < LibeSincoslim);
if(nctemp6916)
{
res =y;
}
else{
float nctemp6932 = y * y;
g =nctemp6932;
float nctemp6950 = P2 * g;
float nctemp6952 = nctemp6950 + P1;
float nctemp6954 = nctemp6952 * g;
float nctemp6966 = g + Q1;
float nctemp6968 = nctemp6966 * g;
float nctemp6970 = nctemp6968 + Q0;
float nctemp6971 = nctemp6954 / nctemp6970;
g =nctemp6971;
float nctemp6984 = y * g;
float nctemp6985 = y + nctemp6984;
res =nctemp6985;
}
}
int nctemp6986 = (x < 0.0);
if(nctemp6986)
{
int nctemp6990 = (i ==0);
if(nctemp6990)
{
float nctemp7006 = 1.57079632679489661923132 + res;
float nctemp7007 = 1.57079632679489661923132 + nctemp7006;
res =nctemp7007;
}
else{
float nctemp7020 = 0.78539816339744830962 + res;
float nctemp7021 = 0.78539816339744830962 + nctemp7020;
res =nctemp7021;
}
}
else{
int nctemp7022 = (i ==1);
if(nctemp7022)
{
float nctemp7038 = 0.78539816339744830962 - res;
float nctemp7039 = 0.78539816339744830962 + nctemp7038;
res =nctemp7039;
}
else{
float nctemp7043= -res;
res =nctemp7043;
}
}
return res;
}
float LibeAtan (float f)
{
float rt32;
float rt3;
float a;
float P0;
float P1;
float Q0;
int n;
float res;
float g;
rt32 =0.26794919243112270647;
rt3 =1.73205080756887729353;
float nctemp7061 = rt3 - 1.0;
a =nctemp7061;
float nctemp7065= -0.4708325141E+0;
P0 =nctemp7065;
float nctemp7069= -0.5090958253E-1;
P1 =nctemp7069;
Q0 =0.1412500740E+1;
int nctemp7074 = (f > 1.0);
if(nctemp7074)
{
float nctemp7086 = 1.0 / f;
f =nctemp7086;
n =2;
}
else{
n =0;
}
int nctemp7095 = (f > rt32);
if(nctemp7095)
{
float nctemp7119 = a * f;
float nctemp7121 = nctemp7119 - 0.5;
float nctemp7123 = nctemp7121 - 0.5;
float nctemp7125 = nctemp7123 + f;
float nctemp7131 = rt3 + f;
float nctemp7132 = nctemp7125 / nctemp7131;
f =nctemp7132;
int nctemp7141 = n + 1;
n =nctemp7141;
}
float nctemp7145= f;
float nctemp7147=LibeFabs(nctemp7145);
int nctemp7142 = (nctemp7147 < LibeSincoslim);
if(nctemp7142)
{
res =f;
}
else{
float nctemp7161 = f * f;
g =nctemp7161;
float nctemp7179 = P1 * g;
float nctemp7181 = nctemp7179 + P0;
float nctemp7183 = nctemp7181 * g;
float nctemp7189 = g + Q0;
float nctemp7190 = nctemp7183 / nctemp7189;
res =nctemp7190;
float nctemp7203 = f * res;
float nctemp7204 = f + nctemp7203;
res =nctemp7204;
}
int nctemp7205 = (n > 1);
if(nctemp7205)
{
float nctemp7212= -res;
res =nctemp7212;
}
int nctemp7213 = (n ==1);
if(nctemp7213)
{
float nctemp7225 = res + 0.52359877559829887308;
res =nctemp7225;
}
else{
int nctemp7226 = (n ==2);
if(nctemp7226)
{
float nctemp7238 = res + 1.57079632679489661923132;
res =nctemp7238;
}
else{
int nctemp7239 = (n ==3);
if(nctemp7239)
{
float nctemp7251 = res + 1.04719755119659774615;
res =nctemp7251;
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp7253 = (x < 0.0);
if(nctemp7253)
{
float nctemp7262= -x;
float nctemp7261= nctemp7262;
float nctemp7263=LibeAtan(nctemp7261);
rval =nctemp7263;
float nctemp7267= -rval;
rval =nctemp7267;
}
else{
float nctemp7272= x;
float nctemp7274=LibeAtan(nctemp7272);
rval =nctemp7274;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp7282= base;
float nctemp7284=LibeLn(nctemp7282);
float nctemp7285 = exponent * nctemp7284;
float nctemp7277= nctemp7285;
float nctemp7286=LibeExp(nctemp7277);
return nctemp7286;
}
int LibeMod (int n,int r)
{
int nctemp7287 = (r ==0);
if(nctemp7287)
{
return n;
}
int nctemp7303 = n / r;
int nctemp7305 = nctemp7303 * r;
int nctemp7306 = n - nctemp7305;
return nctemp7306;
}
