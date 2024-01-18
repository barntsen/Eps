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
int RunSystem (nctempchar1 *cmd);
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
static struct nctempchar1 nctemp30 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp29=&nctemp30;
nctempchar1* nctemp27= nctemp29;
int nctemp31=LibePuts(nctemp25,nctemp27);
int nctemp33= 4;
int nctemp35= line;
int nctemp37=LibePuti(nctemp33,nctemp35);
int nctemp39= 4;
struct nctempchar1 *nctemp43;
static struct nctempchar1 nctemp44 = {{ 3}, (char*)"\n\0"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
int nctemp45=LibePuts(nctemp39,nctemp41);
int nctemp47= 4;
struct nctempchar1 *nctemp51;
static struct nctempchar1 nctemp52 = {{ 13}, (char*)"Array name: \0"};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
int nctemp53=LibePuts(nctemp47,nctemp49);
int nctemp55= 4;
nctempchar1* nctemp57= name;
int nctemp60=LibePuts(nctemp55,nctemp57);
int nctemp62= 4;
struct nctempchar1 *nctemp66;
static struct nctempchar1 nctemp67 = {{ 3}, (char*)"\n\0"};
nctemp66=&nctemp67;
nctempchar1* nctemp64= nctemp66;
int nctemp68=LibePuts(nctemp62,nctemp64);
int nctemp70= 4;
struct nctempchar1 *nctemp74;
static struct nctempchar1 nctemp75 = {{ 11}, (char*)"Index no: \0"};
nctemp74=&nctemp75;
nctempchar1* nctemp72= nctemp74;
int nctemp76=LibePuts(nctemp70,nctemp72);
int nctemp78= 4;
int nctemp80= index;
int nctemp82=LibePuti(nctemp78,nctemp80);
int nctemp84= 4;
struct nctempchar1 *nctemp88;
static struct nctempchar1 nctemp89 = {{ 3}, (char*)"\n\0"};
nctemp88=&nctemp89;
nctempchar1* nctemp86= nctemp88;
int nctemp90=LibePuts(nctemp84,nctemp86);
int nctemp92= 4;
struct nctempchar1 *nctemp96;
static struct nctempchar1 nctemp97 = {{ 14}, (char*)"Index value: \0"};
nctemp96=&nctemp97;
nctempchar1* nctemp94= nctemp96;
int nctemp98=LibePuts(nctemp92,nctemp94);
int nctemp100= 4;
int nctemp102= ival;
int nctemp104=LibePuti(nctemp100,nctemp102);
int nctemp106= 4;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 3}, (char*)"\n\0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
int nctemp114= 4;
struct nctempchar1 *nctemp118;
static struct nctempchar1 nctemp119 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
int nctemp120=LibePuts(nctemp114,nctemp116);
int nctemp122= 4;
int nctemp129 = bound - 1;
int nctemp124= nctemp129;
int nctemp130=LibePuti(nctemp122,nctemp124);
int nctemp132= 4;
struct nctempchar1 *nctemp136;
static struct nctempchar1 nctemp137 = {{ 3}, (char*)"\n\0"};
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
int nctemp165= 1024;
int nctemp167=LibeSetnb(nctemp165);
rval =nctemp167;
int nctemp172= 1024;
int nctemp174=LibeSetnt(nctemp172);
rval =nctemp174;
return rval;
}
int LibeIodelete ();
int LibeDelete ()
{
int nctemp177=LibeIodelete();
return 1;
}
int LibeExit ()
{
int nctemp180=RunExit();
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
int nctemp188=40;
struct nctempLibeFdescr1 *nctemp187;
nctemp187=(struct nctempLibeFdescr1*)malloc(sizeof(struct nctempLibeFdescr1));
nctemp187->d[0]=40;
nctemp187->a=(struct LibeFdescr*)malloc(sizeof(struct LibeFdescr)*nctemp188);
LibeFarr=nctemp187;
nctempLibeFdescr1 *nctemp192 =LibeFarr;
int nctemp191 =(nctemp192==0);
if(nctemp191)
{
LibeErrno =(-100);
return 0;
}
i =0;
int nctemp205 = (i < 40);
while(nctemp205){
{
int nctemp212=i;
LibeFarr->a[nctemp212].cnt =0;
int nctemp218=i;
LibeFarr->a[nctemp218].ptr =0;
int nctemp224=i;
LibeFarr->a[nctemp224].bufsize =0;
int nctemp230=i;
LibeFarr->a[nctemp230].base=(0);
int nctemp237=i;
LibeFarr->a[nctemp237].readflg =0;
int nctemp243=i;
LibeFarr->a[nctemp243].writflg =0;
int nctemp249=i;
LibeFarr->a[nctemp249].unbflg =0;
int nctemp255=i;
LibeFarr->a[nctemp255].errflg =1;
int nctemp261=i;
LibeFarr->a[nctemp261].eoflg =0;
int nctemp267=i;
LibeFarr->a[nctemp267].fd =0;
}
int nctemp278 = i + 1;
i =nctemp278;
int nctemp279 = (i < 40);
nctemp205=nctemp279;
}
int nctemp286=0;
int nctemp288= -1;
LibeFarr->a[nctemp286].fd =nctemp288;
int nctemp292=0;
LibeFarr->a[nctemp292].readflg =1;
int nctemp298=1;
int nctemp300= -1;
LibeFarr->a[nctemp298].fd =nctemp300;
int nctemp304=1;
LibeFarr->a[nctemp304].readflg =1;
int nctemp310=2;
LibeFarr->a[nctemp310].fd =0;
int nctemp316=2;
LibeFarr->a[nctemp316].readflg =1;
int nctemp322=3;
LibeFarr->a[nctemp322].fd =1;
int nctemp328=3;
LibeFarr->a[nctemp328].writflg =1;
int nctemp334=4;
LibeFarr->a[nctemp334].fd =2;
int nctemp340=4;
LibeFarr->a[nctemp340].writflg =1;
int nctemp349=64;
nctempchar1 *nctemp348;
nctemp348=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp348->d[0]=64;
nctemp348->a=(char *)malloc(sizeof(char)*nctemp349);
LibeTmpstr=nctemp348;
nctempchar1 *nctemp353 =LibeTmpstr;
int nctemp352 =(nctemp353==0);
if(nctemp352)
{
LibeErrno =(-100);
return 0;
}
return 1;
}
int LibeIodelete ()
{
int stat;
int fd;
int i;
free(LibeTmpstr->a);
free(LibeTmpstr);
stat =1;
i =0;
int nctemp374 = (i < 40);
while(nctemp374){
{
int nctemp381=i;
nctempchar1 *nctemp379 =LibeFarr->a[nctemp381].base;
int nctemp378 =(nctemp379!=0);
if(nctemp378)
{
int nctemp385 = (i > 4);
if(nctemp385)
{
int nctemp393=i;
fd =LibeFarr->a[nctemp393].fd;
int nctemp399= fd;
int nctemp401=RunClose(nctemp399);
stat =nctemp401;
int nctemp402 = (stat ==0);
if(nctemp402)
{
struct nctempchar1 *nctemp411;
static struct nctempchar1 nctemp412 = {{ 21}, (char*)"Could not close file\0"};
nctemp411=&nctemp412;
LibeErrstr=nctemp411;
LibeErrno =(-106);
}
}
int nctemp421= i;
int nctemp423=LibeFlush(nctemp421);
stat =nctemp423;
int nctemp426=i;
free(LibeFarr->a[nctemp426].base->a);
free(LibeFarr->a[nctemp426].base);
}
}
int nctemp437 = i + 1;
i =nctemp437;
int nctemp438 = (i < 40);
nctemp374=nctemp438;
}
free(LibeFarr->a);
free(LibeFarr);
return stat;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp449=0;
char nctemp452=(char)('r');
int nctemp446 = (mode->a[nctemp449] !=nctemp452);
if(nctemp446)
{
int nctemp458=0;
char nctemp461=(char)('w');
int nctemp455 = (mode->a[nctemp458] !=nctemp461);
if(nctemp455)
{
int nctemp467=0;
char nctemp470=(char)('a');
int nctemp464 = (mode->a[nctemp467] !=nctemp470);
if(nctemp464)
{
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp478=&nctemp479;
LibeErrstr=nctemp478;
LibeErrno =(-103);
return 0;
}
}
}
i =0;
int nctemp492= -1;
slot =nctemp492;
int nctemp496 = (slot < 0);
int nctemp501 = (i < 40);
int nctemp493 = (nctemp496 && nctemp501);
int nctemp505=nctemp493;
while(nctemp505)
{{
int nctemp512=i;
int nctemp509 = (LibeFarr->a[nctemp512].readflg ==0);
int nctemp519=i;
int nctemp516 = (LibeFarr->a[nctemp519].writflg ==0);
int nctemp506 = (nctemp509 && nctemp516);
if(nctemp506)
{
slot =i;
}
int nctemp534 = i + 1;
i =nctemp534;
}
int nctemp538 = (slot < 0);
int nctemp543 = (i < 40);
int nctemp535 = (nctemp538 && nctemp543);
nctemp505=nctemp535;}int nctemp547 = (slot < 0);
if(nctemp547)
{
struct nctempchar1 *nctemp556;
static struct nctempchar1 nctemp557 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp556=&nctemp557;
LibeErrstr=nctemp556;
LibeErrno =(-104);
return 0;
}
int nctemp569=0;
int nctemp566=(int)(mode->a[nctemp569]);
int nctemp563 = (nctemp566 =='w');
if(nctemp563)
{
nctempchar1* nctemp576= name;
int nctemp579=RunCreate(nctemp576);
fd =nctemp579;
}
else{
int nctemp586=0;
int nctemp583=(int)(mode->a[nctemp586]);
int nctemp580 = (nctemp583 =='a');
if(nctemp580)
{
nctempchar1* nctemp596= name;
nctempchar1* nctemp599= mode;
int nctemp602=RunOpen(nctemp596,nctemp599);
fd =nctemp602;
int nctemp589 = (fd ==0);
if(nctemp589)
{
nctempchar1* nctemp608= name;
int nctemp611=RunCreate(nctemp608);
fd =nctemp611;
}
else{
nctempchar1* nctemp616= name;
nctempchar1* nctemp619= mode;
int nctemp622=RunOpen(nctemp616,nctemp619);
fd =nctemp622;
}
}
else{
int nctemp629=0;
int nctemp626=(int)(mode->a[nctemp629]);
int nctemp623 = (nctemp626 =='r');
if(nctemp623)
{
nctempchar1* nctemp636= name;
nctempchar1* nctemp639= mode;
int nctemp642=RunOpen(nctemp636,nctemp639);
fd =nctemp642;
}
else{
struct nctempchar1 *nctemp648;
static struct nctempchar1 nctemp649 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp648=&nctemp649;
LibeErrstr=nctemp648;
LibeErrno =(-103);
return 0;
}
}
}
int nctemp655 = (fd ==0);
if(nctemp655)
{
struct nctempchar1 *nctemp664;
static struct nctempchar1 nctemp665 = {{ 20}, (char*)"Could not open file\0"};
nctemp664=&nctemp665;
LibeErrstr=nctemp664;
LibeErrno =(-105);
return 0;
}
int nctemp674=slot;
LibeFarr->a[nctemp674].fd =fd;
int nctemp680=slot;
LibeFarr->a[nctemp680].cnt =0;
int nctemp686=slot;
LibeFarr->a[nctemp686].base=(0);
int nctemp696=0;
int nctemp693=(int)(mode->a[nctemp696]);
int nctemp690 = (nctemp693 =='r');
if(nctemp690)
{
int nctemp702=slot;
LibeFarr->a[nctemp702].readflg =1;
}
else{
int nctemp708=slot;
LibeFarr->a[nctemp708].writflg =1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp715=fp;
nctempchar1 *nctemp713 =LibeFarr->a[nctemp715].base;
int nctemp712 =(nctemp713!=0);
if(nctemp712)
{
int nctemp720= fp;
int nctemp722=LibeFlush(nctemp720);
}
int nctemp727=fp;
fd =LibeFarr->a[nctemp727].fd;
int nctemp733= fd;
int nctemp735=RunClose(nctemp733);
stat =nctemp735;
int nctemp736 = (stat ==0);
if(nctemp736)
{
int nctemp743=fp;
LibeFarr->a[nctemp743].errflg =1;
struct nctempchar1 *nctemp751;
static struct nctempchar1 nctemp752 = {{ 21}, (char*)"Could not close file\0"};
nctemp751=&nctemp752;
LibeErrstr=nctemp751;
LibeErrno =(-106);
return 0;
}
int nctemp761=fp;
LibeFarr->a[nctemp761].cnt =0;
int nctemp767=fp;
LibeFarr->a[nctemp767].ptr =0;
int nctemp773=fp;
LibeFarr->a[nctemp773].bufsize =0;
int nctemp779=fp;
nctempchar1 *nctemp777 =LibeFarr->a[nctemp779].base;
int nctemp776 =(nctemp777!=0);
if(nctemp776)
{
int nctemp785=fp;
free(LibeFarr->a[nctemp785].base->a);
free(LibeFarr->a[nctemp785].base);
}
int nctemp791=fp;
LibeFarr->a[nctemp791].base=(0);
int nctemp798=fp;
LibeFarr->a[nctemp798].readflg =0;
int nctemp804=fp;
LibeFarr->a[nctemp804].writflg =0;
int nctemp810=fp;
LibeFarr->a[nctemp810].unbflg =0;
int nctemp816=fp;
LibeFarr->a[nctemp816].errflg =0;
int nctemp822=fp;
LibeFarr->a[nctemp822].eoflg =0;
int nctemp828=fp;
LibeFarr->a[nctemp828].fd =0;
return 1;
}
int LibeGetc (int fp)
{
int nctemp835=fp;
int nctemp832 = (LibeFarr->a[nctemp835].cnt ==0);
if(nctemp832)
{
int nctemp839= fp;
int nctemp841=LibeFillbuff(nctemp839);
return nctemp841;
}
else{
int nctemp845=fp;
int nctemp851=fp;
int nctemp854 = LibeFarr->a[nctemp851].cnt - 1;
LibeFarr->a[nctemp845].cnt =nctemp854;
int nctemp858=fp;
int nctemp864=fp;
int nctemp867 = LibeFarr->a[nctemp864].ptr + 1;
LibeFarr->a[nctemp858].ptr =nctemp867;
int nctemp872=fp;
int nctemp878=fp;
int nctemp881 = LibeFarr->a[nctemp878].ptr - 1;
int nctemp874=nctemp881;
int nctemp869=(int)(LibeFarr->a[nctemp872].base->a[nctemp874]);
return nctemp869;
}
}
int LibeUngetc (int fp)
{
int nctemp885=fp;
int nctemp882 = (LibeFarr->a[nctemp885].eoflg ==1);
if(nctemp882)
{
return (-1);
}
int nctemp892=fp;
int nctemp895=fp;
int nctemp889 = (LibeFarr->a[nctemp892].cnt < LibeFarr->a[nctemp895].bufsize);
if(nctemp889)
{
int nctemp900=fp;
int nctemp906=fp;
int nctemp909 = LibeFarr->a[nctemp906].cnt + 1;
LibeFarr->a[nctemp900].cnt =nctemp909;
int nctemp913=fp;
int nctemp919=fp;
int nctemp922 = LibeFarr->a[nctemp919].ptr - 1;
LibeFarr->a[nctemp913].ptr =nctemp922;
int nctemp926=fp;
int nctemp932=fp;
int nctemp935 = LibeFarr->a[nctemp932].bufsize - 1;
int nctemp923 = (LibeFarr->a[nctemp926].ptr ==nctemp935);
if(nctemp923)
{
int nctemp940=fp;
int nctemp944=fp;
int nctemp942=LibeFarr->a[nctemp944].ptr;
int nctemp937=(int)(LibeFarr->a[nctemp940].base->a[nctemp942]);
return nctemp937;
}
else{
int nctemp950=fp;
int nctemp956=fp;
int nctemp959 = LibeFarr->a[nctemp956].ptr + 1;
int nctemp952=nctemp959;
int nctemp947=(int)(LibeFarr->a[nctemp950].base->a[nctemp952]);
return nctemp947;
}
}
else{
struct nctempchar1 *nctemp965;
static struct nctempchar1 nctemp966 = {{ 15}, (char*)"Pushback error\0"};
nctemp965=&nctemp966;
LibeErrstr=nctemp965;
LibeErrno =(-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp976=text->d[0];lim =nctemp976;
p =0;
int nctemp985=LibeClearerr();
int nctemp999= fp;
int nctemp1001=LibeGetc(nctemp999);
ch =nctemp1001;
int nctemp992 = (ch ==32);
int nctemp1004 = (ch ==9);
int nctemp989 = (nctemp992 || nctemp1004);
int nctemp1009 = (ch ==10);
int nctemp986 = (nctemp989 || nctemp1009);
int nctemp1013=nctemp986;
while(nctemp1013)
{{
p =0;
}
int nctemp1031= fp;
int nctemp1033=LibeGetc(nctemp1031);
ch =nctemp1033;
int nctemp1024 = (ch ==32);
int nctemp1036 = (ch ==9);
int nctemp1021 = (nctemp1024 || nctemp1036);
int nctemp1041 = (ch ==10);
int nctemp1018 = (nctemp1021 || nctemp1041);
nctemp1013=nctemp1018;}int nctemp1046= fp;
int nctemp1048=LibeUngetc(nctemp1046);
int nctemp1059= fp;
int nctemp1061=LibeGetc(nctemp1059);
ch =nctemp1061;
int nctemp1052 = (ch !=(-1));
int nctemp1064 = (p < lim);
int nctemp1049 = (nctemp1052 && nctemp1064);
int nctemp1068=nctemp1049;
while(nctemp1068)
{{
int nctemp1075 = (ch ==32);
int nctemp1080 = (ch ==9);
int nctemp1072 = (nctemp1075 || nctemp1080);
int nctemp1085 = (ch ==10);
int nctemp1069 = (nctemp1072 || nctemp1085);
if(nctemp1069)
{
int nctemp1090= fp;
int nctemp1092=LibeUngetc(nctemp1090);
int nctemp1096=p;
char nctemp1099=(char)(0);
text->a[nctemp1096] =nctemp1099;
return 1;
}
else{
int nctemp1106=p;
char nctemp1109=(char)(ch);
text->a[nctemp1106] =nctemp1109;
int nctemp1120 = p + 1;
p =nctemp1120;
}
}
int nctemp1131= fp;
int nctemp1133=LibeGetc(nctemp1131);
ch =nctemp1133;
int nctemp1124 = (ch !=(-1));
int nctemp1136 = (p < lim);
int nctemp1121 = (nctemp1124 && nctemp1136);
nctemp1068=nctemp1121;}int nctemp1140 = (p >= lim);
if(nctemp1140)
{
return 0;
}
else{
int nctemp1145 = (ch ==(-1));
if(nctemp1145)
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
int nctemp1154=fp;
int nctemp1151 = (LibeFarr->a[nctemp1154].cnt ==0);
if(nctemp1151)
{
int nctemp1158= fp;
int nctemp1160=LibeFlushbuff(nctemp1158);
}
int nctemp1164=fp;
int nctemp1167=fp;
int nctemp1161 = (LibeFarr->a[nctemp1164].cnt ==LibeFarr->a[nctemp1167].bufsize);
if(nctemp1161)
{
int nctemp1173= fp;
int nctemp1175=LibeFlushbuff(nctemp1173);
rval =nctemp1175;
int nctemp1179=fp;
int nctemp1183=fp;
int nctemp1181=LibeFarr->a[nctemp1183].ptr;
char nctemp1186=(char)(c);
LibeFarr->a[nctemp1179].base->a[nctemp1181] =nctemp1186;
int nctemp1192=fp;
int nctemp1198=fp;
int nctemp1201 = LibeFarr->a[nctemp1198].ptr + 1;
LibeFarr->a[nctemp1192].ptr =nctemp1201;
int nctemp1205=fp;
int nctemp1211=fp;
int nctemp1214 = LibeFarr->a[nctemp1211].cnt + 1;
LibeFarr->a[nctemp1205].cnt =nctemp1214;
return rval;
}
else{
int nctemp1219=fp;
int nctemp1223=fp;
int nctemp1221=LibeFarr->a[nctemp1223].ptr;
char nctemp1226=(char)(c);
LibeFarr->a[nctemp1219].base->a[nctemp1221] =nctemp1226;
int nctemp1232=fp;
int nctemp1238=fp;
int nctemp1241 = LibeFarr->a[nctemp1238].cnt + 1;
LibeFarr->a[nctemp1232].cnt =nctemp1241;
int nctemp1245=fp;
int nctemp1251=fp;
int nctemp1254 = LibeFarr->a[nctemp1251].ptr + 1;
LibeFarr->a[nctemp1245].ptr =nctemp1254;
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp1260=s->d[0];ls =nctemp1260;
i =0;
int nctemp1277=i;
int nctemp1274=(int)(s->a[nctemp1277]);
int nctemp1271 = (nctemp1274 !=0);
int nctemp1281 = (i < ls);
int nctemp1268 = (nctemp1271 && nctemp1281);
int nctemp1285=nctemp1268;
while(nctemp1285)
{{
int nctemp1289= fp;
int nctemp1296=i;
int nctemp1293=(int)(s->a[nctemp1296]);
int nctemp1291= nctemp1293;
int nctemp1298=LibePutc(nctemp1289,nctemp1291);
int nctemp1286 = (nctemp1298 ==0);
if(nctemp1286)
{
struct nctempchar1 *nctemp1305;
static struct nctempchar1 nctemp1306 = {{ 12}, (char*)"write error\0"};
nctemp1305=&nctemp1306;
LibeErrstr=nctemp1305;
LibeErrno =0;
return 0;
}
else{
int nctemp1320 = i + 1;
i =nctemp1320;
}
}
int nctemp1330=i;
int nctemp1327=(int)(s->a[nctemp1330]);
int nctemp1324 = (nctemp1327 !=0);
int nctemp1334 = (i < ls);
int nctemp1321 = (nctemp1324 && nctemp1334);
nctemp1285=nctemp1321;}return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp1340= ival;
nctempchar1* nctemp1342= LibeTmpstr;
int nctemp1345=LibeItoa(nctemp1340,nctemp1342);
int nctemp1347= fp;
nctempchar1* nctemp1349= LibeTmpstr;
int nctemp1352=LibePuts(nctemp1347,nctemp1349);
return nctemp1352;
}
int LibePutf (int fp,float fval)
{
float nctemp1354= fval;
struct nctempchar1 *nctemp1358;
static struct nctempchar1 nctemp1359 = {{ 2}, (char*)"g\0"};
nctemp1358=&nctemp1359;
nctempchar1* nctemp1356= nctemp1358;
nctempchar1* nctemp1360= LibeTmpstr;
int nctemp1363=LibeFtoa(nctemp1354,nctemp1356,nctemp1360);
int nctemp1365= fp;
nctempchar1* nctemp1367= LibeTmpstr;
int nctemp1370=LibePuts(nctemp1365,nctemp1367);
return nctemp1370;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp1374=fp;
int nctemp1371 = (LibeFarr->a[nctemp1374].readflg !=1);
if(nctemp1371)
{
struct nctempchar1 *nctemp1382;
static struct nctempchar1 nctemp1383 = {{ 26}, (char*)"File not open for reading\0"};
nctemp1382=&nctemp1383;
LibeErrstr=nctemp1382;
LibeErrno =(-109);
return (-1);
}
int nctemp1393=buffer->d[0];int nctemp1389 = (n > nctemp1393);
if(nctemp1389)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp1406;
static struct nctempchar1 nctemp1407 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp1406=&nctemp1407;
LibeErrstr=nctemp1406;
return 0;
}
int nctemp1415=fp;
int nctemp1413= LibeFarr->a[nctemp1415].fd;
int nctemp1417= n;
nctempchar1* nctemp1419= buffer;
int nctemp1422=RunRead(nctemp1413,nctemp1417,nctemp1419);
rval =nctemp1422;
int nctemp1423 = (rval ==(-1));
if(nctemp1423)
{
int nctemp1430=fp;
LibeFarr->a[nctemp1430].eoflg =1;
rval =(-1);
}
else{
int nctemp1437 = (rval ==0);
if(nctemp1437)
{
int nctemp1444=fp;
LibeFarr->a[nctemp1444].errflg =1;
struct nctempchar1 *nctemp1452;
static struct nctempchar1 nctemp1453 = {{ 11}, (char*)"read error\0"};
nctemp1452=&nctemp1453;
LibeErrstr=nctemp1452;
LibeErrno =0;
int nctemp1461=fp;
LibeFarr->a[nctemp1461].errflg =0;
rval =0;
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp1473=buffer->d[0];int nctemp1469 = (n > nctemp1473);
if(nctemp1469)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp1486;
static struct nctempchar1 nctemp1487 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp1486=&nctemp1487;
LibeErrstr=nctemp1486;
return 0;
}
int nctemp1492=fp;
int nctemp1489 = (LibeFarr->a[nctemp1492].writflg !=1);
if(nctemp1489)
{
struct nctempchar1 *nctemp1500;
static struct nctempchar1 nctemp1501 = {{ 26}, (char*)"file not open for writing\0"};
nctemp1500=&nctemp1501;
LibeErrstr=nctemp1500;
LibeErrno =(-110);
return 0;
}
int nctemp1513=fp;
int nctemp1511= LibeFarr->a[nctemp1513].fd;
int nctemp1515= n;
nctempchar1* nctemp1517= buffer;
int nctemp1520=RunWrite(nctemp1511,nctemp1515,nctemp1517);
rval =nctemp1520;
int nctemp1521 = (rval ==0);
if(nctemp1521)
{
int nctemp1528=fp;
LibeFarr->a[nctemp1528].errflg =1;
struct nctempchar1 *nctemp1536;
static struct nctempchar1 nctemp1537 = {{ 12}, (char*)"write error\0"};
nctemp1536=&nctemp1537;
LibeErrstr=nctemp1536;
LibeErrno =0;
int nctemp1545=fp;
LibeFarr->a[nctemp1545].errflg =0;
rval =0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp1559=fp;
int nctemp1557= LibeFarr->a[nctemp1559].fd;
int nctemp1561= pos;
int nctemp1563= flag;
int nctemp1565=RunSeek(nctemp1557,nctemp1561,nctemp1563);
rval =nctemp1565;
int nctemp1566 = (rval ==0);
if(nctemp1566)
{
int nctemp1573=fp;
LibeFarr->a[nctemp1573].errflg =1;
struct nctempchar1 *nctemp1581;
static struct nctempchar1 nctemp1582 = {{ 11}, (char*)"Seek error\0"};
nctemp1581=&nctemp1582;
LibeErrstr=nctemp1581;
LibeErrno =0;
int nctemp1590=fp;
LibeFarr->a[nctemp1590].errflg =0;
rval =0;
}
return rval;
}
int LibeFlush (int fp)
{
int nctemp1599= fp;
int nctemp1601=LibeFlushbuff(nctemp1599);
return nctemp1601;
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp1605=fp;
int nctemp1602 = (LibeFarr->a[nctemp1605].readflg !=1);
if(nctemp1602)
{
struct nctempchar1 *nctemp1613;
static struct nctempchar1 nctemp1614 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp1613=&nctemp1614;
LibeErrstr=nctemp1613;
LibeErrno =(-110);
return (-1);
}
int nctemp1623=fp;
int nctemp1620 = (LibeFarr->a[nctemp1623].unbflg ==1);
if(nctemp1620)
{
int nctemp1629=fp;
LibeFarr->a[nctemp1629].bufsize =1;
}
else{
int nctemp1635=fp;
LibeFarr->a[nctemp1635].bufsize =1024;
}
int nctemp1641=fp;
nctempchar1 *nctemp1639 =LibeFarr->a[nctemp1641].base;
int nctemp1638 =(nctemp1639==0);
if(nctemp1638)
{
int nctemp1649=fp;
size =LibeFarr->a[nctemp1649].bufsize;
int nctemp1657=fp;
int nctemp1662=size;
nctempchar1 *nctemp1661;
nctemp1661=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp1661->d[0]=size;
nctemp1661->a=(char *)malloc(sizeof(char)*nctemp1662);
LibeFarr->a[nctemp1657].base=nctemp1661;
nctempchar1 *nctemp1652 =LibeFarr->a[nctemp1657].base;
int nctemp1651 =(nctemp1652==0);
if(nctemp1651)
{
struct nctempchar1 *nctemp1671;
static struct nctempchar1 nctemp1672 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp1671=&nctemp1672;
LibeErrstr=nctemp1671;
LibeErrno =(-113);
return (-1);
}
}
int nctemp1681=fp;
LibeFarr->a[nctemp1681].ptr =0;
int nctemp1687=fp;
int nctemp1692=fp;
int nctemp1690= LibeFarr->a[nctemp1692].fd;
int nctemp1696=fp;
int nctemp1694= LibeFarr->a[nctemp1696].bufsize;
int nctemp1700=fp;
nctempchar1* nctemp1698= LibeFarr->a[nctemp1700].base;
int nctemp1703=RunRead(nctemp1690,nctemp1694,nctemp1698);
LibeFarr->a[nctemp1687].cnt =nctemp1703;
int nctemp1707=fp;
int nctemp1704 = (LibeFarr->a[nctemp1707].cnt <= 0);
if(nctemp1704)
{
int nctemp1713=fp;
int nctemp1710 = (LibeFarr->a[nctemp1713].cnt ==(-1));
if(nctemp1710)
{
int nctemp1719=fp;
LibeFarr->a[nctemp1719].eoflg =1;
rval =(-1);
}
else{
int nctemp1729=fp;
LibeFarr->a[nctemp1729].errflg =1;
struct nctempchar1 *nctemp1737;
static struct nctempchar1 nctemp1738 = {{ 11}, (char*)"read error\0"};
nctemp1737=&nctemp1738;
LibeErrstr=nctemp1737;
LibeErrno =(-111);
rval =(-1);
}
int nctemp1750=fp;
LibeFarr->a[nctemp1750].cnt =0;
return rval;
}
int nctemp1757=fp;
int nctemp1763=fp;
int nctemp1766 = LibeFarr->a[nctemp1763].ptr + 1;
LibeFarr->a[nctemp1757].ptr =nctemp1766;
int nctemp1770=fp;
int nctemp1776=fp;
int nctemp1779 = LibeFarr->a[nctemp1776].cnt - 1;
LibeFarr->a[nctemp1770].cnt =nctemp1779;
int nctemp1784=fp;
int nctemp1790=fp;
int nctemp1793 = LibeFarr->a[nctemp1790].ptr - 1;
int nctemp1786=nctemp1793;
int nctemp1781=(int)(LibeFarr->a[nctemp1784].base->a[nctemp1786]);
return nctemp1781;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp1797=fp;
int nctemp1794 = (LibeFarr->a[nctemp1797].writflg !=1);
if(nctemp1794)
{
struct nctempchar1 *nctemp1805;
static struct nctempchar1 nctemp1806 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp1805=&nctemp1806;
LibeErrstr=nctemp1805;
LibeErrno =(-110);
return 0;
}
int nctemp1815=fp;
int nctemp1812 = (LibeFarr->a[nctemp1815].unbflg ==1);
if(nctemp1812)
{
int nctemp1821=fp;
LibeFarr->a[nctemp1821].bufsize =1;
}
else{
int nctemp1827=fp;
LibeFarr->a[nctemp1827].bufsize =1024;
}
int nctemp1833=fp;
nctempchar1 *nctemp1831 =LibeFarr->a[nctemp1833].base;
int nctemp1830 =(nctemp1831==0);
if(nctemp1830)
{
int nctemp1841=fp;
size =LibeFarr->a[nctemp1841].bufsize;
int nctemp1849=fp;
int nctemp1854=size;
nctempchar1 *nctemp1853;
nctemp1853=(nctempchar1*)malloc(sizeof(nctempchar1));
nctemp1853->d[0]=size;
nctemp1853->a=(char *)malloc(sizeof(char)*nctemp1854);
LibeFarr->a[nctemp1849].base=nctemp1853;
nctempchar1 *nctemp1844 =LibeFarr->a[nctemp1849].base;
int nctemp1843 =(nctemp1844==0);
if(nctemp1843)
{
struct nctempchar1 *nctemp1863;
static struct nctempchar1 nctemp1864 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp1863=&nctemp1864;
LibeErrstr=nctemp1863;
LibeErrno =(-113);
return 0;
}
}
int nctemp1873=fp;
LibeFarr->a[nctemp1873].ptr =0;
int nctemp1882=fp;
int nctemp1880= LibeFarr->a[nctemp1882].fd;
int nctemp1886=fp;
int nctemp1884= LibeFarr->a[nctemp1886].cnt;
int nctemp1890=fp;
nctempchar1* nctemp1888= LibeFarr->a[nctemp1890].base;
int nctemp1893=RunWrite(nctemp1880,nctemp1884,nctemp1888);
st =nctemp1893;
int nctemp1898=fp;
int nctemp1894 = (st !=LibeFarr->a[nctemp1898].cnt);
if(nctemp1894)
{
int nctemp1903=fp;
LibeFarr->a[nctemp1903].errflg =1;
struct nctempchar1 *nctemp1911;
static struct nctempchar1 nctemp1912 = {{ 12}, (char*)"write error\0"};
nctemp1911=&nctemp1912;
LibeErrstr=nctemp1911;
LibeErrno =(-112);
int nctemp1920=fp;
LibeFarr->a[nctemp1920].cnt =0;
int nctemp1926=fp;
LibeFarr->a[nctemp1926].ptr =0;
return 0;
}
else{
int nctemp1933=fp;
LibeFarr->a[nctemp1933].cnt =0;
int nctemp1939=fp;
LibeFarr->a[nctemp1939].ptr =0;
return 1;
}
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp1947=s->d[0];ls =nctemp1947;
i =0;
int nctemp1964=i;
int nctemp1961=(int)(s->a[nctemp1964]);
int nctemp1958 = (nctemp1961 !=0);
int nctemp1968 = (i < ls);
int nctemp1955 = (nctemp1958 && nctemp1968);
int nctemp1972=nctemp1955;
while(nctemp1972)
{{
int nctemp1981 = i + 1;
i =nctemp1981;
}
int nctemp1991=i;
int nctemp1988=(int)(s->a[nctemp1991]);
int nctemp1985 = (nctemp1988 !=0);
int nctemp1995 = (i < ls);
int nctemp1982 = (nctemp1985 && nctemp1995);
nctemp1972=nctemp1982;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp2004=s->d[0];ls =nctemp2004;
i =0;
int nctemp2018=i;
int nctemp2021=i;
int nctemp2015 = (s->a[nctemp2018] ==t->a[nctemp2021]);
int nctemp2024 = (i < ls);
int nctemp2012 = (nctemp2015 && nctemp2024);
int nctemp2028=nctemp2012;
while(nctemp2028)
{{
int nctemp2035=i;
int nctemp2032=(int)(s->a[nctemp2035]);
int nctemp2029 = (nctemp2032 ==0);
if(nctemp2029)
{
return 1;
}
int nctemp2047 = i + 1;
i =nctemp2047;
}
int nctemp2054=i;
int nctemp2057=i;
int nctemp2051 = (s->a[nctemp2054] ==t->a[nctemp2057]);
int nctemp2060 = (i < ls);
int nctemp2048 = (nctemp2051 && nctemp2060);
nctemp2028=nctemp2048;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i =0;
nctempchar1* nctemp2076= s;
int nctemp2079=LibeStrlen(nctemp2076);
int nctemp2081 = nctemp2079 - 1;
j =nctemp2081;
int nctemp2082 = (i < j);
int nctemp2086=nctemp2082;
while(nctemp2086)
{{
int nctemp2091=i;
c =s->a[nctemp2091];
int nctemp2096=i;
int nctemp2099=j;
s->a[nctemp2096] =s->a[nctemp2099];
int nctemp2104=j;
s->a[nctemp2104] =c;
int nctemp2115 = i + 1;
i =nctemp2115;
int nctemp2124 = j - 1;
j =nctemp2124;
}
int nctemp2125 = (i < j);
nctemp2086=nctemp2125;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp2134= s;
int nctemp2137=LibeStrlen(nctemp2134);
ls =nctemp2137;
int nctemp2138 = (ls ==0);
if(nctemp2138)
{
return 1;
}
int nctemp2146=t->d[0];int nctemp2143 = (nctemp2146 <= ls);
if(nctemp2143)
{
return 0;
}
i =0;
int nctemp2156 = (i <= ls);
while(nctemp2156){
{
int nctemp2163=i;
int nctemp2166=i;
t->a[nctemp2163] =s->a[nctemp2166];
}
int nctemp2176 = i + 1;
i =nctemp2176;
int nctemp2177 = (i <= ls);
nctemp2156=nctemp2177;
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp2186= s;
int nctemp2189=LibeStrlen(nctemp2186);
ls =nctemp2189;
nctempchar1* nctemp2194= t;
int nctemp2197=LibeStrlen(nctemp2194);
lt =nctemp2197;
int nctemp2201=t->d[0];int nctemp2210 = lt + ls;
int nctemp2198 = (nctemp2201 < nctemp2210);
if(nctemp2198)
{
return 0;
}
i =lt;
int nctemp2224 = ls + lt;
int nctemp2216 = (i < nctemp2224);
while(nctemp2216){
{
int nctemp2228=i;
int nctemp2236 = i - lt;
int nctemp2231=nctemp2236;
t->a[nctemp2228] =s->a[nctemp2231];
}
int nctemp2245 = i + 1;
i =nctemp2245;
int nctemp2254 = ls + lt;
int nctemp2246 = (i < nctemp2254);
nctemp2216=nctemp2246;
}
int nctemp2263 = ls + lt;
int nctemp2258=nctemp2263;
char nctemp2265=(char)(0);
t->a[nctemp2258] =nctemp2265;
return 1;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
tmp=(0);
l =0;
nctempchar1* nctemp2282= s;
int nctemp2285=LibeStrlen(nctemp2282);
l =nctemp2285;
int nctemp2297 = l + 1;
int nctemp2292=nctemp2297;
nctempchar1 *nctemp2291;
nctemp2291=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp2302 = l + 1;
nctemp2291->d[0]=nctemp2302;
nctemp2291->a=(char *)malloc(sizeof(char)*nctemp2292);
tmp=nctemp2291;
nctempchar1 *nctemp2304 =tmp;
int nctemp2303 =(nctemp2304!=0);
if(nctemp2303)
{
nctempchar1* nctemp2309= s;
nctempchar1* nctemp2312= tmp;
int nctemp2315=LibeStrcpy(nctemp2309,nctemp2312);
}
return tmp;
}
int LibeIsalpha (int c)
{
int nctemp2324 = (c >= 'a');
int nctemp2329 = (c <= 'z');
int nctemp2321 = (nctemp2324 && nctemp2329);
int nctemp2337 = (c >= 'A');
int nctemp2342 = (c <= 'Z');
int nctemp2334 = (nctemp2337 && nctemp2342);
int nctemp2318 = (nctemp2321 || nctemp2334);
if(nctemp2318)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp2351 = (c >= '0');
int nctemp2356 = (c <= '9');
int nctemp2348 = (nctemp2351 && nctemp2356);
if(nctemp2348)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp2368 = (c >= 'a');
int nctemp2373 = (c <= 'z');
int nctemp2365 = (nctemp2368 && nctemp2373);
int nctemp2381 = (c >= 'A');
int nctemp2386 = (c <= 'Z');
int nctemp2378 = (nctemp2381 && nctemp2386);
int nctemp2362 = (nctemp2365 || nctemp2378);
if(nctemp2362)
{
return 1;
}
else{
int nctemp2394 = (c >= '0');
int nctemp2399 = (c <= '9');
int nctemp2391 = (nctemp2394 && nctemp2399);
if(nctemp2391)
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
int nctemp2418=i;
char nctemp2421=(char)(' ');
int nctemp2415 = (s->a[nctemp2418] ==nctemp2421);
int nctemp2428=i;
char nctemp2431=(char)(10);
int nctemp2425 = (s->a[nctemp2428] ==nctemp2431);
int nctemp2412 = (nctemp2415 || nctemp2425);
int nctemp2438=i;
char nctemp2441=(char)(9);
int nctemp2435 = (s->a[nctemp2438] ==nctemp2441);
int nctemp2409 = (nctemp2412 || nctemp2435);
int nctemp2444=nctemp2409;
while(nctemp2444)
{{
int nctemp2453 = i + 1;
i =nctemp2453;
}
int nctemp2463=i;
char nctemp2466=(char)(' ');
int nctemp2460 = (s->a[nctemp2463] ==nctemp2466);
int nctemp2473=i;
char nctemp2476=(char)(10);
int nctemp2470 = (s->a[nctemp2473] ==nctemp2476);
int nctemp2457 = (nctemp2460 || nctemp2470);
int nctemp2483=i;
char nctemp2486=(char)(9);
int nctemp2480 = (s->a[nctemp2483] ==nctemp2486);
int nctemp2454 = (nctemp2457 || nctemp2480);
nctemp2444=nctemp2454;}int nctemp2492=i;
char nctemp2495=(char)('-');
int nctemp2489 = (s->a[nctemp2492] ==nctemp2495);
if(nctemp2489)
{
int nctemp2501= -1;
sign =nctemp2501;
int nctemp2510 = i + 1;
i =nctemp2510;
}
else{
int nctemp2514=i;
char nctemp2517=(char)('+');
int nctemp2511 = (s->a[nctemp2514] ==nctemp2517);
if(nctemp2511)
{
sign =1;
int nctemp2532 = i + 1;
i =nctemp2532;
}
else{
sign =1;
}
}
n =0;
int nctemp2547=i;
int nctemp2544=(int)(s->a[nctemp2547]);
int nctemp2542= nctemp2544;
int nctemp2549=LibeIsdigit(nctemp2542);
while(nctemp2549){
{
int nctemp2564 = 10 * n;
int nctemp2569=i;
int nctemp2566=(int)(s->a[nctemp2569]);
int nctemp2571 = nctemp2564 + nctemp2566;
int nctemp2573 = nctemp2571 - '0';
n =nctemp2573;
}
int nctemp2582 = i + 1;
i =nctemp2582;
int nctemp2589=i;
int nctemp2586=(int)(s->a[nctemp2589]);
int nctemp2584= nctemp2586;
int nctemp2591=LibeIsdigit(nctemp2584);
nctemp2549=nctemp2591;
}
int nctemp2596 = sign * n;
return nctemp2596;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp2598 =s;
int nctemp2597 =(nctemp2598==0);
if(nctemp2597)
{
return 0;
}
sign =n;
int nctemp2603 = (sign < 0);
if(nctemp2603)
{
int nctemp2614= -n;
n =nctemp2614;
}
i =0;
int nctemp2622=0;
int nctemp2630= n;
int nctemp2632= 10;
int nctemp2634=LibeMod(nctemp2630,nctemp2632);
int nctemp2636 = nctemp2634 + 48;
char nctemp2625=(char)(nctemp2636);
s->a[nctemp2622] =nctemp2625;
int nctemp2648 = n / 10;
n =nctemp2648;
int nctemp2637 = (n > 0);
int nctemp2650=nctemp2637;
while(nctemp2650)
{{
int nctemp2658 = i + 1;
int nctemp2663=s->d[0];int nctemp2668 = nctemp2663 - 1;
int nctemp2651 = (nctemp2658 > nctemp2668);
if(nctemp2651)
{
return 0;
}
int nctemp2682 = i + 1;
i =nctemp2682;
int nctemp2673=i;
int nctemp2689= n;
int nctemp2691= 10;
int nctemp2693=LibeMod(nctemp2689,nctemp2691);
int nctemp2695 = nctemp2693 + 48;
char nctemp2684=(char)(nctemp2695);
s->a[nctemp2673] =nctemp2684;
}
int nctemp2707 = n / 10;
n =nctemp2707;
int nctemp2696 = (n > 0);
nctemp2650=nctemp2696;}int nctemp2709 = (sign < 0);
if(nctemp2709)
{
int nctemp2720 = i + 1;
int nctemp2725=s->d[0];int nctemp2730 = nctemp2725 - 1;
int nctemp2713 = (nctemp2720 > nctemp2730);
if(nctemp2713)
{
return 0;
}
int nctemp2744 = i + 1;
i =nctemp2744;
int nctemp2735=i;
char nctemp2746=(char)(45);
s->a[nctemp2735] =nctemp2746;
}
int nctemp2756 = i + 1;
int nctemp2761=s->d[0];int nctemp2766 = nctemp2761 - 1;
int nctemp2749 = (nctemp2756 > nctemp2766);
if(nctemp2749)
{
return 0;
}
int nctemp2780 = i + 1;
i =nctemp2780;
int nctemp2771=i;
char nctemp2782=(char)(0);
s->a[nctemp2771] =nctemp2782;
nctempchar1* nctemp2786= s;
int nctemp2789=LibeStrev(nctemp2786);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp2791 = (sign < 0);
if(nctemp2791)
{
int nctemp2802= -n;
n =nctemp2802;
}
i =0;
int nctemp2810= n;
int nctemp2812= 16;
int nctemp2814=LibeMod(nctemp2810,nctemp2812);
int nctemp2807 = (nctemp2814 <= 9);
if(nctemp2807)
{
int nctemp2819=0;
int nctemp2827= n;
int nctemp2829= 16;
int nctemp2831=LibeMod(nctemp2827,nctemp2829);
int nctemp2833 = nctemp2831 + 48;
char nctemp2822=(char)(nctemp2833);
s->a[nctemp2819] =nctemp2822;
}
else{
int nctemp2837=0;
int nctemp2848= n;
int nctemp2850= 16;
int nctemp2852=LibeMod(nctemp2848,nctemp2850);
int nctemp2854 = nctemp2852 + 'a';
int nctemp2856 = nctemp2854 - 10;
char nctemp2840=(char)(nctemp2856);
s->a[nctemp2837] =nctemp2840;
}
int nctemp2868 = n / 16;
n =nctemp2868;
int nctemp2857 = (n > 0);
int nctemp2870=nctemp2857;
while(nctemp2870)
{{
int nctemp2874= n;
int nctemp2876= 16;
int nctemp2878=LibeMod(nctemp2874,nctemp2876);
int nctemp2871 = (nctemp2878 <= 9);
if(nctemp2871)
{
int nctemp2892 = i + 1;
i =nctemp2892;
int nctemp2883=i;
int nctemp2899= n;
int nctemp2901= 16;
int nctemp2903=LibeMod(nctemp2899,nctemp2901);
int nctemp2905 = nctemp2903 + 48;
char nctemp2894=(char)(nctemp2905);
s->a[nctemp2883] =nctemp2894;
}
else{
int nctemp2918 = i + 1;
i =nctemp2918;
int nctemp2909=i;
int nctemp2928= n;
int nctemp2930= 16;
int nctemp2932=LibeMod(nctemp2928,nctemp2930);
int nctemp2934 = nctemp2932 + 'a';
int nctemp2936 = nctemp2934 - 10;
char nctemp2920=(char)(nctemp2936);
s->a[nctemp2909] =nctemp2920;
}
}
int nctemp2948 = n / 16;
n =nctemp2948;
int nctemp2937 = (n > 0);
nctemp2870=nctemp2937;}int nctemp2950 = (sign < 0);
if(nctemp2950)
{
int nctemp2966 = i + 1;
i =nctemp2966;
int nctemp2957=i;
char nctemp2968=(char)(45);
s->a[nctemp2957] =nctemp2968;
}
int nctemp2983 = i + 1;
i =nctemp2983;
int nctemp2974=i;
char nctemp2985=(char)(0);
s->a[nctemp2974] =nctemp2985;
nctempchar1* nctemp2989= s;
int nctemp2992=LibeStrev(nctemp2989);
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
int nctemp3021=i;
char nctemp3024=(char)(' ');
int nctemp3018 = (s->a[nctemp3021] ==nctemp3024);
int nctemp3027=nctemp3018;
while(nctemp3027)
{{
int nctemp3036 = i + 1;
i =nctemp3036;
}
int nctemp3040=i;
char nctemp3043=(char)(' ');
int nctemp3037 = (s->a[nctemp3040] ==nctemp3043);
nctemp3027=nctemp3037;}int nctemp3052=i;
char nctemp3055=(char)('+');
int nctemp3049 = (s->a[nctemp3052] ==nctemp3055);
int nctemp3062=i;
char nctemp3065=(char)('-');
int nctemp3059 = (s->a[nctemp3062] ==nctemp3065);
int nctemp3046 = (nctemp3049 || nctemp3059);
if(nctemp3046)
{
int nctemp3071=i;
char nctemp3074=(char)('-');
int nctemp3068 = (s->a[nctemp3071] ==nctemp3074);
if(nctemp3068)
{
int nctemp3080= -1;
sign =nctemp3080;
}
int nctemp3089 = i + 1;
i =nctemp3089;
}
int nctemp3096=i;
int nctemp3093=(int)(s->a[nctemp3096]);
int nctemp3091= nctemp3093;
int nctemp3098=LibeIsdigit(nctemp3091);
int nctemp3099=nctemp3098;
while(nctemp3099)
{{
float nctemp3111 = 10.0 * val;
int nctemp3121=i;
int nctemp3118=(int)(s->a[nctemp3121]);
int nctemp3124 = nctemp3118 - '0';
float nctemp3113=(float)(nctemp3124);
float nctemp3125 = nctemp3111 + nctemp3113;
val =nctemp3125;
int nctemp3134 = i + 1;
i =nctemp3134;
}
int nctemp3141=i;
int nctemp3138=(int)(s->a[nctemp3141]);
int nctemp3136= nctemp3138;
int nctemp3143=LibeIsdigit(nctemp3136);
nctemp3099=nctemp3143;}int nctemp3147=i;
char nctemp3150=(char)('.');
int nctemp3144 = (s->a[nctemp3147] ==nctemp3150);
if(nctemp3144)
{
int nctemp3161 = i + 1;
i =nctemp3161;
int nctemp3168=i;
int nctemp3165=(int)(s->a[nctemp3168]);
int nctemp3163= nctemp3165;
int nctemp3170=LibeIsdigit(nctemp3163);
int nctemp3171=nctemp3170;
while(nctemp3171)
{{
float nctemp3183 = 10.0 * val;
int nctemp3193=i;
int nctemp3190=(int)(s->a[nctemp3193]);
int nctemp3196 = nctemp3190 - '0';
float nctemp3185=(float)(nctemp3196);
float nctemp3197 = nctemp3183 + nctemp3185;
val =nctemp3197;
int nctemp3206 = i + 1;
i =nctemp3206;
float nctemp3215 = 10.0 * power;
power =nctemp3215;
}
int nctemp3222=i;
int nctemp3219=(int)(s->a[nctemp3222]);
int nctemp3217= nctemp3219;
int nctemp3224=LibeIsdigit(nctemp3217);
nctemp3171=nctemp3224;}}
int nctemp3231=i;
char nctemp3234=(char)('e');
int nctemp3228 = (s->a[nctemp3231] ==nctemp3234);
int nctemp3241=i;
char nctemp3244=(char)('E');
int nctemp3238 = (s->a[nctemp3241] ==nctemp3244);
int nctemp3225 = (nctemp3228 || nctemp3238);
if(nctemp3225)
{
int nctemp3255 = i + 1;
i =nctemp3255;
int nctemp3262=i;
char nctemp3265=(char)('+');
int nctemp3259 = (s->a[nctemp3262] ==nctemp3265);
int nctemp3272=i;
char nctemp3275=(char)('-');
int nctemp3269 = (s->a[nctemp3272] ==nctemp3275);
int nctemp3256 = (nctemp3259 || nctemp3269);
if(nctemp3256)
{
int nctemp3281=i;
char nctemp3284=(char)('-');
int nctemp3278 = (s->a[nctemp3281] ==nctemp3284);
if(nctemp3278)
{
int nctemp3290= -1;
esign =nctemp3290;
}
int nctemp3299 = i + 1;
i =nctemp3299;
}
int nctemp3306=i;
int nctemp3303=(int)(s->a[nctemp3306]);
int nctemp3301= nctemp3303;
int nctemp3308=LibeIsdigit(nctemp3301);
int nctemp3309=nctemp3308;
while(nctemp3309)
{{
int nctemp3324 = 10 * exponent;
int nctemp3329=i;
int nctemp3326=(int)(s->a[nctemp3329]);
int nctemp3331 = nctemp3324 + nctemp3326;
int nctemp3333 = nctemp3331 - '0';
exponent =nctemp3333;
int nctemp3342 = i + 1;
i =nctemp3342;
}
int nctemp3349=i;
int nctemp3346=(int)(s->a[nctemp3349]);
int nctemp3344= nctemp3346;
int nctemp3351=LibeIsdigit(nctemp3344);
nctemp3309=nctemp3351;}}
float nctemp3360=(float)(sign);
float nctemp3364 = nctemp3360 * val;
float nctemp3366=(float)(power);
float nctemp3369 = nctemp3364 / nctemp3366;
float nctemp3353= nctemp3369;
int nctemp3375 = esign * exponent;
int nctemp3370= nctemp3375;
float nctemp3376=LibeFscale(nctemp3353,nctemp3370);
return nctemp3376;
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
int nctemp3380=s->d[0];int nctemp3385=fmt->d[0];int nctemp3377 = (nctemp3380 < nctemp3385);
if(nctemp3377)
{
return 0;
}
int nctemp3397=fmt->d[0];int nctemp3402 = nctemp3397 - 2;
l =nctemp3402;
p =0;
q =0;
int nctemp3418=p;
int nctemp3415=(int)(fmt->a[nctemp3418]);
c =nctemp3415;
int nctemp3420 = (c =='g');
if(nctemp3420)
{
mode ='g';
}
else{
int nctemp3431= c;
int nctemp3433=LibeIsdigit(nctemp3431);
int nctemp3428 = (nctemp3433 ==1);
if(nctemp3428)
{
int nctemp3438= c;
int nctemp3440=LibeIsdigit(nctemp3438);
int nctemp3435 = (nctemp3440 ==1);
int nctemp3442=nctemp3435;
while(nctemp3442)
{{
int nctemp3446=q;
int nctemp3449=p;
s->a[nctemp3446] =fmt->a[nctemp3449];
int nctemp3462 = p + 1;
p =nctemp3462;
int nctemp3451 = (p > l);
if(nctemp3451)
{
return 0;
}
int nctemp3473 = q + 1;
q =nctemp3473;
int nctemp3481=p;
int nctemp3478=(int)(fmt->a[nctemp3481]);
c =nctemp3478;
}
int nctemp3486= c;
int nctemp3488=LibeIsdigit(nctemp3486);
int nctemp3483 = (nctemp3488 ==1);
nctemp3442=nctemp3483;}int nctemp3493=q;
char nctemp3496=(char)(0);
s->a[nctemp3493] =nctemp3496;
nctempchar1* nctemp3503= s;
int nctemp3506=LibeAtoi(nctemp3503);
nfield =nctemp3506;
}
else{
return 0;
}
int nctemp3508 = (c !='.');
if(nctemp3508)
{
return 0;
}
int nctemp3524 = p + 1;
p =nctemp3524;
int nctemp3513 = (p > l);
if(nctemp3513)
{
return 0;
}
int nctemp3534=p;
int nctemp3531=(int)(fmt->a[nctemp3534]);
c =nctemp3531;
q =0;
int nctemp3543= c;
int nctemp3545=LibeIsdigit(nctemp3543);
int nctemp3540 = (nctemp3545 ==1);
if(nctemp3540)
{
int nctemp3550= c;
int nctemp3552=LibeIsdigit(nctemp3550);
int nctemp3547 = (nctemp3552 ==1);
int nctemp3554=nctemp3547;
while(nctemp3554)
{{
int nctemp3558=q;
int nctemp3561=p;
s->a[nctemp3558] =fmt->a[nctemp3561];
int nctemp3574 = p + 1;
p =nctemp3574;
int nctemp3563 = (p > l);
if(nctemp3563)
{
return 0;
}
int nctemp3585 = q + 1;
q =nctemp3585;
int nctemp3593=p;
int nctemp3590=(int)(fmt->a[nctemp3593]);
c =nctemp3590;
}
int nctemp3598= c;
int nctemp3600=LibeIsdigit(nctemp3598);
int nctemp3595 = (nctemp3600 ==1);
nctemp3554=nctemp3595;}int nctemp3605=q;
char nctemp3608=(char)(0);
s->a[nctemp3605] =nctemp3608;
nctempchar1* nctemp3615= s;
int nctemp3618=LibeAtoi(nctemp3615);
nfrac =nctemp3618;
}
else{
return 0;
}
int nctemp3620 = (c =='f');
if(nctemp3620)
{
mode ='f';
}
else{
int nctemp3628 = (c =='e');
if(nctemp3628)
{
mode ='e';
}
else{
return 0;
}
}
}
int nctemp3637 = (mode =='g');
if(nctemp3637)
{
float nctemp3645= f;
int nctemp3647=LibeGetmaxdig(nctemp3645);
nfrac =nctemp3647;
int nctemp3674 = 1 + 1;
int nctemp3676 = nctemp3674 + 1;
int nctemp3678 = nctemp3676 + 1;
int nctemp3680 = nctemp3678 + nfrac;
int nctemp3682 = nctemp3680 + 1;
int nctemp3684 = nctemp3682 + 1;
int nctemp3686 = nctemp3684 + 2;
nfield =nctemp3686;
int nctemp3695 = nfrac + 1;
ndigit =nctemp3695;
float nctemp3700= f;
int nctemp3702= ndigit;
int nctemp3704=LibeGetfman(nctemp3700,nctemp3702);
mant =nctemp3704;
float nctemp3709= f;
int nctemp3711=LibeGetfexp(nctemp3709);
nexp =nctemp3711;
int nctemp3713= mant;
int nctemp3715= nexp;
int nctemp3717= nfield;
int nctemp3719= nfrac;
nctempchar1* nctemp3721= s;
int nctemp3724=LibeFtoae(nctemp3713,nctemp3715,nctemp3717,nctemp3719,nctemp3721);
}
else{
int nctemp3725 = (mode =='e');
if(nctemp3725)
{
int nctemp3737 = nfrac + 1;
ndigit =nctemp3737;
float nctemp3742= f;
int nctemp3744= ndigit;
int nctemp3746=LibeGetfman(nctemp3742,nctemp3744);
mant =nctemp3746;
float nctemp3751= f;
int nctemp3753=LibeGetfexp(nctemp3751);
nexp =nctemp3753;
int nctemp3755= mant;
int nctemp3757= nexp;
int nctemp3759= nfield;
int nctemp3761= nfrac;
nctempchar1* nctemp3763= s;
int nctemp3766=LibeFtoae(nctemp3755,nctemp3757,nctemp3759,nctemp3761,nctemp3763);
}
else{
int nctemp3767 = (mode =='f');
if(nctemp3767)
{
float nctemp3775= f;
int nctemp3777=LibeGetfexp(nctemp3775);
nexp =nctemp3777;
int nctemp3789 = nexp + nfrac;
int nctemp3791 = nctemp3789 + 1;
ndigit =nctemp3791;
float nctemp3796= f;
int nctemp3798= ndigit;
int nctemp3800=LibeGetfman(nctemp3796,nctemp3798);
mant =nctemp3800;
int nctemp3802= mant;
int nctemp3804= nexp;
int nctemp3806= nfield;
int nctemp3808= nfrac;
nctempchar1* nctemp3810= s;
int nctemp3813=LibeFtoaf(nctemp3802,nctemp3804,nctemp3806,nctemp3808,nctemp3810);
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
int nctemp3815 = (mant < 0);
if(nctemp3815)
{
int nctemp3822= -mant;
mant =nctemp3822;
int nctemp3826= -1;
sign =nctemp3826;
}
else{
sign =1;
}
int nctemp3834=s->d[0];int nctemp3861 = 1 + 1;
int nctemp3863 = nctemp3861 + 1;
int nctemp3865 = nctemp3863 + nfrac;
int nctemp3867 = nctemp3865 + 1;
int nctemp3869 = nctemp3867 + 1;
int nctemp3871 = nctemp3869 + 2;
int nctemp3873 = nctemp3871 + 1;
int nctemp3831 = (nctemp3834 < nctemp3873);
if(nctemp3831)
{
return 0;
}
int nctemp3883=s->d[0];int nctemp3881=nctemp3883;
nctempchar1 *nctemp3880;
nctemp3880=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp3888=s->d[0];nctemp3880->d[0]=nctemp3888;
nctemp3880->a=(char *)malloc(sizeof(char)*nctemp3881);
t=nctemp3880;
int nctemp3915 = 1 + 1;
int nctemp3917 = nctemp3915 + nfrac;
int nctemp3919 = nctemp3917 + 1;
int nctemp3921 = nctemp3919 + 1;
int nctemp3923 = nctemp3921 + 2;
int nctemp3925 = nctemp3923 + 1;
l =nctemp3925;
int nctemp3926 = (sign < 0);
if(nctemp3926)
{
int nctemp3938 = l + 1;
l =nctemp3938;
}
int nctemp3939 = (nfield < l);
if(nctemp3939)
{
i =0;
int nctemp3947 = (i < nfield);
while(nctemp3947){
{
int nctemp3954=i;
char nctemp3957=(char)('*');
s->a[nctemp3954] =nctemp3957;
}
int nctemp3968 = i + 1;
i =nctemp3968;
int nctemp3969 = (i < nfield);
nctemp3947=nctemp3969;
}
int nctemp3976=nfield;
char nctemp3979=(char)(0);
s->a[nctemp3976] =nctemp3979;
return 0;
}
else{
int nctemp3991 = nfield - l;
tp =nctemp3991;
}
i =0;
int nctemp3996 = (i < tp);
while(nctemp3996){
{
int nctemp4003=i;
char nctemp4006=(char)(' ');
s->a[nctemp4003] =nctemp4006;
}
int nctemp4017 = i + 1;
i =nctemp4017;
int nctemp4018 = (i < tp);
nctemp3996=nctemp4018;
}
int nctemp4023= mant;
nctempchar1* nctemp4025= t;
int nctemp4028=LibeItoa(nctemp4023,nctemp4025);
int nctemp4029 = (sign < 0);
if(nctemp4029)
{
int nctemp4036=tp;
char nctemp4039=(char)('-');
s->a[nctemp4036] =nctemp4039;
int nctemp4050 = tp + 1;
tp =nctemp4050;
}
int nctemp4054=tp;
int nctemp4057=0;
s->a[nctemp4054] =t->a[nctemp4057];
int nctemp4067 = tp + 1;
int nctemp4062=nctemp4067;
char nctemp4069=(char)('.');
s->a[nctemp4062] =nctemp4069;
i =0;
int nctemp4076 = (i < nfrac);
while(nctemp4076){
{
int nctemp4091 = tp + 2;
int nctemp4093 = nctemp4091 + i;
int nctemp4083=nctemp4093;
int nctemp4100 = i + 1;
int nctemp4095=nctemp4100;
s->a[nctemp4083] =t->a[nctemp4095];
}
int nctemp4109 = i + 1;
i =nctemp4109;
int nctemp4110 = (i < nfrac);
nctemp4076=nctemp4110;
}
int nctemp4125 = tp + 2;
int nctemp4127 = nctemp4125 + nfrac;
int nctemp4117=nctemp4127;
char nctemp4129=(char)(0);
s->a[nctemp4117] =nctemp4129;
sign =1;
int nctemp4136 = (nexp < 0);
if(nctemp4136)
{
int nctemp4143= -1;
sign =nctemp4143;
int nctemp4147= -nexp;
nexp =nctemp4147;
}
struct nctempchar1 *nctemp4151;
static struct nctempchar1 nctemp4152 = {{ 2}, (char*)"e\0"};
nctemp4151=&nctemp4152;
nctempchar1* nctemp4149= nctemp4151;
nctempchar1* nctemp4153= s;
int nctemp4156=LibeStrcat(nctemp4149,nctemp4153);
int nctemp4157 = (sign > 0);
if(nctemp4157)
{
struct nctempchar1 *nctemp4164;
static struct nctempchar1 nctemp4165 = {{ 2}, (char*)"+\0"};
nctemp4164=&nctemp4165;
nctempchar1* nctemp4162= nctemp4164;
nctempchar1* nctemp4166= s;
int nctemp4169=LibeStrcat(nctemp4162,nctemp4166);
}
else{
struct nctempchar1 *nctemp4173;
static struct nctempchar1 nctemp4174 = {{ 2}, (char*)"-\0"};
nctemp4173=&nctemp4174;
nctempchar1* nctemp4171= nctemp4173;
nctempchar1* nctemp4175= s;
int nctemp4178=LibeStrcat(nctemp4171,nctemp4175);
}
int nctemp4180= nexp;
nctempchar1* nctemp4182= t;
int nctemp4185=LibeItoa(nctemp4180,nctemp4182);
nctempchar1* nctemp4189= t;
int nctemp4192=LibeStrlen(nctemp4189);
int nctemp4186 = (nctemp4192 ==1);
if(nctemp4186)
{
struct nctempchar1 *nctemp4197;
static struct nctempchar1 nctemp4198 = {{ 2}, (char*)"0\0"};
nctemp4197=&nctemp4198;
nctempchar1* nctemp4195= nctemp4197;
nctempchar1* nctemp4199= s;
int nctemp4202=LibeStrcat(nctemp4195,nctemp4199);
}
nctempchar1* nctemp4204= t;
nctempchar1* nctemp4207= s;
int nctemp4210=LibeStrcat(nctemp4204,nctemp4207);
free(t->a);
free(t);
return 1;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp4215 = (mant < 0);
if(nctemp4215)
{
int nctemp4222= -1;
sign =nctemp4222;
int nctemp4226= -mant;
mant =nctemp4226;
}
else{
sign =1;
}
int nctemp4234=s->d[0];int nctemp4243 = nfield + 1;
int nctemp4231 = (nctemp4234 < nctemp4243);
if(nctemp4231)
{
return 0;
}
int nctemp4259 = nexp + 1;
int nctemp4261 = nctemp4259 + 1;
int nctemp4263 = nctemp4261 + nfrac;
l =nctemp4263;
int nctemp4264 = (sign < 0);
if(nctemp4264)
{
int nctemp4276 = l + 1;
l =nctemp4276;
}
int nctemp4277 = (nfield < l);
if(nctemp4277)
{
i =0;
int nctemp4285 = (i < nfield);
while(nctemp4285){
{
int nctemp4292=i;
char nctemp4295=(char)('*');
s->a[nctemp4292] =nctemp4295;
}
int nctemp4306 = i + 1;
i =nctemp4306;
int nctemp4307 = (i < nfield);
nctemp4285=nctemp4307;
}
int nctemp4314=nfield;
char nctemp4317=(char)(0);
s->a[nctemp4314] =nctemp4317;
return 0;
}
else{
int nctemp4329 = nfield - l;
tp =nctemp4329;
}
int nctemp4341 = 6 + 1;
int nctemp4336=nctemp4341;
nctempchar1 *nctemp4335;
nctemp4335=(nctempchar1*)malloc(sizeof(nctempchar1));
int nctemp4346 = 6 + 1;
nctemp4335->d[0]=nctemp4346;
nctemp4335->a=(char *)malloc(sizeof(char)*nctemp4336);
t=nctemp4335;
int nctemp4348= mant;
nctempchar1* nctemp4350= t;
int nctemp4353=LibeItoa(nctemp4348,nctemp4350);
i =0;
int nctemp4358 = (i < tp);
while(nctemp4358){
{
int nctemp4365=i;
char nctemp4368=(char)(' ');
s->a[nctemp4365] =nctemp4368;
}
int nctemp4379 = i + 1;
i =nctemp4379;
int nctemp4380 = (i < tp);
nctemp4358=nctemp4380;
}
int nctemp4384 = (nexp >= 0);
if(nctemp4384)
{
int nctemp4391= -1;
int nctemp4388 = (sign ==nctemp4391);
if(nctemp4388)
{
int nctemp4395=tp;
char nctemp4398=(char)('-');
s->a[nctemp4395] =nctemp4398;
int nctemp4409 = tp + 1;
tp =nctemp4409;
}
i =0;
int nctemp4414 = (i <= nexp);
while(nctemp4414){
{
int nctemp4426 = i + tp;
int nctemp4421=nctemp4426;
int nctemp4428=i;
s->a[nctemp4421] =t->a[nctemp4428];
}
int nctemp4438 = i + 1;
i =nctemp4438;
int nctemp4439 = (i <= nexp);
nctemp4414=nctemp4439;
}
int nctemp4443 = (nfrac > 0);
if(nctemp4443)
{
int nctemp4458 = tp + nexp;
int nctemp4460 = nctemp4458 + 1;
int nctemp4450=nctemp4460;
char nctemp4462=(char)('.');
s->a[nctemp4450] =nctemp4462;
}
i =0;
int nctemp4469 = (i < nfrac);
while(nctemp4469){
{
int nctemp4473 = (mant ==0);
if(nctemp4473)
{
int nctemp4494 = tp + nexp;
int nctemp4496 = nctemp4494 + 1;
int nctemp4498 = nctemp4496 + 1;
int nctemp4500 = nctemp4498 + i;
int nctemp4480=nctemp4500;
char nctemp4502=(char)('0');
s->a[nctemp4480] =nctemp4502;
}
else{
int nctemp4522 = tp + nexp;
int nctemp4524 = nctemp4522 + 1;
int nctemp4526 = nctemp4524 + 1;
int nctemp4528 = nctemp4526 + i;
int nctemp4508=nctemp4528;
int nctemp4538 = nexp + 1;
int nctemp4540 = nctemp4538 + i;
int nctemp4530=nctemp4540;
s->a[nctemp4508] =t->a[nctemp4530];
}
}
int nctemp4549 = i + 1;
i =nctemp4549;
int nctemp4550 = (i < nfrac);
nctemp4469=nctemp4550;
}
int nctemp4554 = (nfrac > 0);
if(nctemp4554)
{
int nctemp4575 = tp + nexp;
int nctemp4577 = nctemp4575 + 1;
int nctemp4579 = nctemp4577 + 1;
int nctemp4581 = nctemp4579 + nfrac;
int nctemp4561=nctemp4581;
char nctemp4583=(char)(0);
s->a[nctemp4561] =nctemp4583;
}
else{
int nctemp4597 = tp + nexp;
int nctemp4599 = nctemp4597 + 1;
int nctemp4589=nctemp4599;
char nctemp4601=(char)(0);
s->a[nctemp4589] =nctemp4601;
}
}
else{
int nctemp4607= -nexp;
nexp =nctemp4607;
int nctemp4611= -1;
int nctemp4608 = (sign ==nctemp4611);
if(nctemp4608)
{
int nctemp4615=tp;
char nctemp4618=(char)('-');
s->a[nctemp4615] =nctemp4618;
int nctemp4629 = tp + 1;
tp =nctemp4629;
}
int nctemp4633=tp;
char nctemp4636=(char)('0');
s->a[nctemp4633] =nctemp4636;
int nctemp4647 = tp + 1;
int nctemp4642=nctemp4647;
char nctemp4649=(char)('.');
s->a[nctemp4642] =nctemp4649;
i =0;
int nctemp4664 = nexp - 1;
int nctemp4656 = (i < nctemp4664);
while(nctemp4656){
{
int nctemp4676 = i + tp;
int nctemp4678 = nctemp4676 + 2;
int nctemp4668=nctemp4678;
char nctemp4680=(char)('0');
s->a[nctemp4668] =nctemp4680;
}
int nctemp4691 = i + 1;
i =nctemp4691;
int nctemp4700 = nexp - 1;
int nctemp4692 = (i < nctemp4700);
nctemp4656=nctemp4692;
}
i =0;
int nctemp4716 = nfrac - nexp;
int nctemp4718 = nctemp4716 + 1;
int nctemp4705 = (i < nctemp4718);
while(nctemp4705){
{
int nctemp4736 = tp + 2;
int nctemp4738 = nctemp4736 + i;
int nctemp4740 = nctemp4738 + nexp;
int nctemp4742 = nctemp4740 - 1;
int nctemp4722=nctemp4742;
int nctemp4744=i;
s->a[nctemp4722] =t->a[nctemp4744];
}
int nctemp4754 = i + 1;
i =nctemp4754;
int nctemp4766 = nfrac - nexp;
int nctemp4768 = nctemp4766 + 1;
int nctemp4755 = (i < nctemp4768);
nctemp4705=nctemp4755;
}
int nctemp4780 = tp + 2;
int nctemp4782 = nctemp4780 + nfrac;
int nctemp4772=nctemp4782;
char nctemp4784=(char)(0);
s->a[nctemp4772] =nctemp4784;
}
return 1;
}
float LibeMach (int flag)
{
int nctemp4788 = (flag ==1);
if(nctemp4788)
{
return 1.1754943508222875e-38;
}
else{
int nctemp4793 = (flag ==2);
if(nctemp4793)
{
return 3.4028234663852886e+38;
}
else{
int nctemp4798 = (flag ==3);
if(nctemp4798)
{
return 5.9604644775390625e-08;
}
else{
int nctemp4803 = (flag ==4);
if(nctemp4803)
{
return 1.1920928955078125e-07;
}
else{
int nctemp4808 = (flag ==5);
if(nctemp4808)
{
return 0.6931471805599453;
}
else{
float nctemp4814=(float)(0);
return nctemp4814;
}
}
}
}
}
}
float LibeFabs (float x)
{
int nctemp4817 = (x < 0.0);
if(nctemp4817)
{
float nctemp4821= -x;
return nctemp4821;
}
else{
return x;
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
int nctemp4823 = (n ==0);
if(nctemp4823)
{
return x;
}
rval =1.0;
int nctemp4832 = (n > 0);
if(nctemp4832)
{
i =0;
int nctemp4840 = (i < n);
while(nctemp4840){
{
float nctemp4852 = rval * 2.0;
rval =nctemp4852;
}
int nctemp4861 = i + 1;
i =nctemp4861;
int nctemp4862 = (i < n);
nctemp4840=nctemp4862;
}
}
else{
int nctemp4869= -n;
n =nctemp4869;
i =0;
int nctemp4874 = (i < n);
while(nctemp4874){
{
float nctemp4886 = rval * 0.5;
rval =nctemp4886;
}
int nctemp4895 = i + 1;
i =nctemp4895;
int nctemp4896 = (i < n);
nctemp4874=nctemp4896;
}
}
float nctemp4904 = rval * x;
return nctemp4904;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp4909= x;
float nctemp4911=LibeFabs(nctemp4909);
absx =nctemp4911;
n =0;
int nctemp4916 = (x ==0.0);
if(nctemp4916)
{
return 0.0;
}
int nctemp4921 = (absx < 0.5);
int nctemp4925=nctemp4921;
while(nctemp4925)
{{
int nctemp4934 = n - 1;
n =nctemp4934;
float nctemp4943 = absx * 2.0;
absx =nctemp4943;
}
int nctemp4944 = (absx < 0.5);
nctemp4925=nctemp4944;}int nctemp4948 = (absx >= 1.0);
int nctemp4952=nctemp4948;
while(nctemp4952)
{{
int nctemp4961 = n + 1;
n =nctemp4961;
float nctemp4970 = absx * 0.5;
absx =nctemp4970;
}
int nctemp4971 = (absx >= 1.0);
nctemp4952=nctemp4971;}int nctemp4975 = (x < 0.0);
if(nctemp4975)
{
float nctemp4979= -absx;
return nctemp4979;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp4985= x;
float nctemp4987=LibeFabs(nctemp4985);
absx =nctemp4987;
n =0;
int nctemp4992 = (x ==0.0);
if(nctemp4992)
{
return 0;
}
int nctemp4997 = (absx < 0.5);
int nctemp5001=nctemp4997;
while(nctemp5001)
{{
int nctemp5010 = n - 1;
n =nctemp5010;
float nctemp5019 = absx * 2.0;
absx =nctemp5019;
}
int nctemp5020 = (absx < 0.5);
nctemp5001=nctemp5020;}int nctemp5024 = (absx >= 1.0);
int nctemp5028=nctemp5024;
while(nctemp5028)
{{
int nctemp5037 = n + 1;
n =nctemp5037;
float nctemp5046 = absx * 0.5;
absx =nctemp5046;
}
int nctemp5047 = (absx >= 1.0);
nctemp5028=nctemp5047;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval =1.0;
int nctemp5056 = (n ==0);
if(nctemp5056)
{
return x;
}
int nctemp5061 = (n > 0);
if(nctemp5061)
{
i =0;
int nctemp5069 = (i < n);
while(nctemp5069){
{
float nctemp5081 = rval * 10.0;
rval =nctemp5081;
}
int nctemp5090 = i + 1;
i =nctemp5090;
int nctemp5091 = (i < n);
nctemp5069=nctemp5091;
}
}
else{
int nctemp5098= -n;
n =nctemp5098;
i =0;
int nctemp5103 = (i < n);
while(nctemp5103){
{
float nctemp5115 = rval * 0.1;
rval =nctemp5115;
}
int nctemp5124 = i + 1;
i =nctemp5124;
int nctemp5125 = (i < n);
nctemp5103=nctemp5125;
}
}
float nctemp5133 = rval * x;
return nctemp5133;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp5134 = (f ==0.0);
if(nctemp5134)
{
return 0;
}
sign =1;
int nctemp5143 = (f < 0.0);
if(nctemp5143)
{
float nctemp5150= -f;
f =nctemp5150;
int nctemp5154= -sign;
sign =nctemp5154;
}
nexp =0;
float nctemp5169 = f / 10.0;
float nctemp5171 = nctemp5169 + 1.1920928955078125e-07;
int nctemp5159 = (nctemp5171 >= 1.0);
if(nctemp5159)
{
float nctemp5183 = f / 10.0;
float nctemp5185 = nctemp5183 + 1.1920928955078125e-07;
int nctemp5173 = (nctemp5185 >= 1.0);
int nctemp5187=nctemp5173;
while(nctemp5187)
{{
float nctemp5196 = f / 10.0;
f =nctemp5196;
int nctemp5205 = nexp + 1;
nexp =nctemp5205;
}
float nctemp5216 = f / 10.0;
float nctemp5218 = nctemp5216 + 1.1920928955078125e-07;
int nctemp5206 = (nctemp5218 >= 1.0);
nctemp5187=nctemp5206;}}
else{
float nctemp5227 = f + 1.1920928955078125e-07;
int nctemp5220 = (nctemp5227 < 1.0);
if(nctemp5220)
{
float nctemp5236 = f + 1.1920928955078125e-07;
int nctemp5229 = (nctemp5236 < 1.0);
int nctemp5238=nctemp5229;
while(nctemp5238)
{{
float nctemp5247 = f * 10.0;
f =nctemp5247;
int nctemp5256 = nexp - 1;
nexp =nctemp5256;
}
float nctemp5264 = f + 1.1920928955078125e-07;
int nctemp5257 = (nctemp5264 < 1.0);
nctemp5238=nctemp5257;}}
}
i =0;
int nctemp5278 = maxdig - 1;
int nctemp5270 = (i < nctemp5278);
while(nctemp5270){
{
float nctemp5287 = f * 10.0;
f =nctemp5287;
}
int nctemp5296 = i + 1;
i =nctemp5296;
int nctemp5305 = maxdig - 1;
int nctemp5297 = (i < nctemp5305);
nctemp5270=nctemp5297;
}
float nctemp5316 = f + 0.5;
int nctemp5310=(int)(nctemp5316);
n =nctemp5310;
int nctemp5317 = (sign < 0);
if(nctemp5317)
{
int nctemp5324= -n;
n =nctemp5324;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp5326 = (f ==0.0);
if(nctemp5326)
{
return 0.0;
}
sign =1;
int nctemp5335 = (f < 0.0);
if(nctemp5335)
{
float nctemp5342= -f;
f =nctemp5342;
int nctemp5346= -sign;
sign =nctemp5346;
}
nexp =0;
float nctemp5361 = f / 10.0;
float nctemp5363 = nctemp5361 + 1.1920928955078125e-07;
int nctemp5351 = (nctemp5363 >= 1.0);
if(nctemp5351)
{
float nctemp5375 = f / 10.0;
float nctemp5377 = nctemp5375 + 1.1920928955078125e-07;
int nctemp5365 = (nctemp5377 >= 1.0);
int nctemp5379=nctemp5365;
while(nctemp5379)
{{
float nctemp5388 = f / 10.0;
f =nctemp5388;
int nctemp5397 = nexp + 1;
nexp =nctemp5397;
}
float nctemp5408 = f / 10.0;
float nctemp5410 = nctemp5408 + 1.1920928955078125e-07;
int nctemp5398 = (nctemp5410 >= 1.0);
nctemp5379=nctemp5398;}}
else{
float nctemp5419 = f + 1.1920928955078125e-07;
int nctemp5412 = (nctemp5419 < 1.0);
if(nctemp5412)
{
float nctemp5428 = f + 1.1920928955078125e-07;
int nctemp5421 = (nctemp5428 < 1.0);
int nctemp5430=nctemp5421;
while(nctemp5430)
{{
float nctemp5439 = f * 10.0;
f =nctemp5439;
int nctemp5448 = nexp - 1;
nexp =nctemp5448;
}
float nctemp5456 = f + 1.1920928955078125e-07;
int nctemp5449 = (nctemp5456 < 1.0);
nctemp5430=nctemp5449;}}
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
int nctemp5459 = (f ==0.0);
if(nctemp5459)
{
return 0;
}
sign =1;
int nctemp5468 = (f < 0.0);
if(nctemp5468)
{
float nctemp5475= -f;
f =nctemp5475;
int nctemp5479= -sign;
sign =nctemp5479;
}
nexp =0;
float nctemp5494 = f / 10.0;
float nctemp5496 = nctemp5494 + 1.1920928955078125e-07;
int nctemp5484 = (nctemp5496 >= 1.0);
if(nctemp5484)
{
float nctemp5508 = f / 10.0;
float nctemp5510 = nctemp5508 + 1.1920928955078125e-07;
int nctemp5498 = (nctemp5510 >= 1.0);
int nctemp5512=nctemp5498;
while(nctemp5512)
{{
float nctemp5521 = f / 10.0;
f =nctemp5521;
int nctemp5530 = nexp + 1;
nexp =nctemp5530;
}
float nctemp5541 = f / 10.0;
float nctemp5543 = nctemp5541 + 1.1920928955078125e-07;
int nctemp5531 = (nctemp5543 >= 1.0);
nctemp5512=nctemp5531;}}
else{
float nctemp5552 = f + 1.1920928955078125e-07;
int nctemp5545 = (nctemp5552 < 1.0);
if(nctemp5545)
{
float nctemp5561 = f + 1.1920928955078125e-07;
int nctemp5554 = (nctemp5561 < 1.0);
int nctemp5563=nctemp5554;
while(nctemp5563)
{{
float nctemp5572 = f * 10.0;
f =nctemp5572;
int nctemp5581 = nexp - 1;
nexp =nctemp5581;
}
float nctemp5589 = f + 1.1920928955078125e-07;
int nctemp5582 = (nctemp5589 < 1.0);
nctemp5563=nctemp5582;}}
}
i =0;
loop =1;
int nctemp5600=loop;
while(nctemp5600)
{{
int nctemp5612=(int)(f);
float nctemp5609=(float)(nctemp5612);
float nctemp5615 = f - nctemp5609;
r =nctemp5615;
int nctemp5616 = (r < 1.1920928955078125e-07);
if(nctemp5616)
{
loop =0;
}
else{
float nctemp5632 = f * 10.0;
f =nctemp5632;
}
int nctemp5641 = i + 1;
i =nctemp5641;
int nctemp5642 = (i >= 10);
if(nctemp5642)
{
loop =0;
}
}
nctemp5600=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp5652 = (f ==0.0);
if(nctemp5652)
{
return 0;
}
nexp =0;
int nctemp5661 = (f < 0.0);
if(nctemp5661)
{
float nctemp5668= -f;
f =nctemp5668;
}
float nctemp5679 = f / 10.0;
float nctemp5681 = nctemp5679 + 1.1920928955078125e-07;
int nctemp5669 = (nctemp5681 >= 1.0);
if(nctemp5669)
{
float nctemp5693 = f / 10.0;
float nctemp5695 = nctemp5693 + 1.1920928955078125e-07;
int nctemp5683 = (nctemp5695 >= 1.0);
int nctemp5697=nctemp5683;
while(nctemp5697)
{{
float nctemp5706 = f / 10.0;
f =nctemp5706;
int nctemp5715 = nexp + 1;
nexp =nctemp5715;
}
float nctemp5726 = f / 10.0;
float nctemp5728 = nctemp5726 + 1.1920928955078125e-07;
int nctemp5716 = (nctemp5728 >= 1.0);
nctemp5697=nctemp5716;}}
else{
float nctemp5737 = f + 1.1920928955078125e-07;
int nctemp5730 = (nctemp5737 < 1.0);
if(nctemp5730)
{
float nctemp5746 = f + 1.1920928955078125e-07;
int nctemp5739 = (nctemp5746 < 1.0);
int nctemp5748=nctemp5739;
while(nctemp5748)
{{
float nctemp5757 = f * 10.0;
f =nctemp5757;
int nctemp5766 = nexp - 1;
nexp =nctemp5766;
}
float nctemp5774 = f + 1.1920928955078125e-07;
int nctemp5767 = (nctemp5774 < 1.0);
nctemp5748=nctemp5767;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp5778=RunClock();
return nctemp5778;
}
int NBLOCKS;
int NTHREADS;
int LibeSetnb (int nb)
{
NBLOCKS =nb;
return 1;
}
int LibeSetnt (int nt)
{
NTHREADS =nt;
return 1;
}
int LibeGetnb ()
{
return NBLOCKS;
}
int LibeGetnt ()
{
return NTHREADS;
}
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
float LibeSincos (float x,float y,float sign);
float LibeAtan (float f);
int LibeMathinit ()
{
float nctemp5795= 1.0;
int nctemp5802 = 24 - 1;
int nctemp5797= nctemp5802;
float nctemp5803=LibeFscale2(nctemp5795,nctemp5797);
LibeSincosmax =nctemp5803;
float nctemp5812= LibeSincosmax;
float nctemp5814=LibeSqrt(nctemp5812);
float nctemp5815 = 3.1415926535897932384626433832795028841972 * nctemp5814;
LibeSincosmax =nctemp5815;
float nctemp5824= 1.0;
int nctemp5831 = 24 / 2;
int nctemp5826= nctemp5831;
float nctemp5832=LibeFscale2(nctemp5824,nctemp5826);
float nctemp5833 = 1.0 / nctemp5832;
LibeSincoslim =nctemp5833;
float nctemp5838= 3.4028234663852886e+38;
float nctemp5840=LibeLn(nctemp5838);
LibeLnmax =nctemp5840;
float nctemp5845= 1.1754943508222875e-38;
float nctemp5847=LibeLn(nctemp5845);
LibeLnmin =nctemp5847;
return 1;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp5849 = (x ==0.0);
if(nctemp5849)
{
return 0.0;
}
int nctemp5854 = (x < 0.0);
if(nctemp5854)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp5867;
static struct nctempchar1 nctemp5868 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp5867=&nctemp5868;
LibeErrstr=nctemp5867;
return 0.0;
}
float nctemp5874= x;
float nctemp5876=LibeGetfman2(nctemp5874);
f =nctemp5876;
float nctemp5881= x;
int nctemp5883=LibeGetfexp2(nctemp5881);
n =nctemp5883;
float nctemp5896 = 0.59016 * f;
float nctemp5897 = 0.41731 + nctemp5896;
yest =nctemp5897;
float nctemp5910 = f / yest;
float nctemp5911 = yest + nctemp5910;
z =nctemp5911;
float nctemp5923 = 0.25 * z;
float nctemp5929 = f / z;
float nctemp5930 = nctemp5923 + nctemp5929;
yest =nctemp5930;
int nctemp5934= n;
int nctemp5936= 2;
int nctemp5938=LibeMod(nctemp5934,nctemp5936);
int nctemp5931 = (nctemp5938 !=0);
if(nctemp5931)
{
float nctemp5948 = yest * 0.70710678118654752440;
yest =nctemp5948;
int nctemp5957 = n + 1;
n =nctemp5957;
}
float nctemp5959= yest;
int nctemp5966 = n / 2;
int nctemp5961= nctemp5966;
float nctemp5967=LibeFscale2(nctemp5959,nctemp5961);
return nctemp5967;
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
int nctemp5968 = (x <= 0.0);
if(nctemp5968)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp5981;
static struct nctempchar1 nctemp5982 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp5981=&nctemp5982;
LibeErrstr=nctemp5981;
return 3.4028234663852886e+38;
}
float nctemp5988= x;
float nctemp5990=LibeGetfman2(nctemp5988);
f =nctemp5990;
float nctemp5995= x;
int nctemp5997=LibeGetfexp2(nctemp5995);
n =nctemp5997;
int nctemp5998 = (f > 0.70710678118654752440);
if(nctemp5998)
{
float nctemp6013 = f - 0.5;
float nctemp6015 = nctemp6013 - 0.5;
zn =nctemp6015;
float nctemp6027 = f * 0.5;
float nctemp6029 = nctemp6027 + 0.5;
zd =nctemp6029;
}
else{
float nctemp6038 = f - 0.5;
zn =nctemp6038;
float nctemp6050 = zn * 0.5;
float nctemp6052 = nctemp6050 + 0.5;
zd =nctemp6052;
int nctemp6061 = n - 1;
n =nctemp6061;
}
float nctemp6070 = zn / zd;
z =nctemp6070;
float nctemp6079 = z * z;
w =nctemp6079;
float nctemp6099 = w * (-0.5527074855E+0);
float nctemp6105 = w + (-0.6632718214E+1);
float nctemp6106 = nctemp6099 / nctemp6105;
float nctemp6107 = z * nctemp6106;
float nctemp6108 = z + nctemp6107;
r =nctemp6108;
float nctemp6113=(float)(n);
xn =nctemp6113;
float nctemp6126 = xn * (-2.121944400546905827679E-4);
float nctemp6128 = nctemp6126 + r;
float nctemp6134 = xn * 0.69335938;
float nctemp6135 = nctemp6128 + nctemp6134;
return nctemp6135;
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
int nctemp6148 = (x >= LibeLnmax);
if(nctemp6148)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6161;
static struct nctempchar1 nctemp6162 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp6161=&nctemp6162;
LibeErrstr=nctemp6161;
return 3.4028234663852886e+38;
}
int nctemp6164 = (x < LibeLnmin);
if(nctemp6164)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6177;
static struct nctempchar1 nctemp6178 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp6177=&nctemp6178;
LibeErrstr=nctemp6177;
return 0.0;
}
float nctemp6190 = x * 1.4426950408889634073;
int nctemp6184=(int)(nctemp6190);
n =nctemp6184;
float nctemp6195=(float)(n);
xn =nctemp6195;
float nctemp6210 = xn * 0.693147180559945309417232;
float nctemp6211 = x - nctemp6210;
g =nctemp6211;
float nctemp6220 = g * g;
z =nctemp6220;
float nctemp6235 = P1 * z;
float nctemp6237 = nctemp6235 + P0;
float nctemp6239 = nctemp6237 * g;
p =nctemp6239;
float nctemp6251 = Q1 * z;
float nctemp6253 = nctemp6251 + 0.5;
q =nctemp6253;
float nctemp6270 = q - p;
float nctemp6271 = p / nctemp6270;
float nctemp6272 = 0.5 + nctemp6271;
rval =nctemp6272;
float nctemp6274= rval;
int nctemp6281 = n + 1;
int nctemp6276= nctemp6281;
float nctemp6282=LibeFscale2(nctemp6274,nctemp6276);
return nctemp6282;
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
float nctemp6286= -0.1666665668E+0;
R1 =nctemp6286;
R2 =0.8333025139E-2;
float nctemp6294= -0.1980741872E-3;
R3 =nctemp6294;
R4 =0.2601903036E-5;
int nctemp6299 = (y > LibeSincosmax);
if(nctemp6299)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6312;
static struct nctempchar1 nctemp6313 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp6312=&nctemp6313;
LibeErrstr=nctemp6312;
return 0.0;
}
float nctemp6328 = y * 0.31830988618379067154;
float nctemp6330 = nctemp6328 + 0.5;
int nctemp6319=(int)(nctemp6330);
n =nctemp6319;
float nctemp6335=(float)(n);
xn =nctemp6335;
int nctemp6341= n;
int nctemp6343= 2;
int nctemp6345=LibeMod(nctemp6341,nctemp6343);
int nctemp6338 = (nctemp6345 !=0);
if(nctemp6338)
{
float nctemp6350= -sign;
sign =nctemp6350;
}
float nctemp6355= x;
float nctemp6357=LibeFabs(nctemp6355);
x =nctemp6357;
int nctemp6358 = (x !=y);
if(nctemp6358)
{
float nctemp6370 = xn - 0.5;
xn =nctemp6370;
}
float nctemp6378= x;
float nctemp6380=LibeFabs(nctemp6378);
float nctemp6386 = xn * 3.1415926535897932384626433832795028841972;
float nctemp6387 = nctemp6380 - nctemp6386;
f =nctemp6387;
float nctemp6391= f;
float nctemp6393=LibeFabs(nctemp6391);
int nctemp6388 = (nctemp6393 < LibeSincoslim);
if(nctemp6388)
{
float nctemp6399 = sign * f;
return nctemp6399;
}
float nctemp6408 = f * f;
g =nctemp6408;
float nctemp6435 = R4 * g;
float nctemp6437 = nctemp6435 + R3;
float nctemp6439 = nctemp6437 * g;
float nctemp6441 = nctemp6439 + R2;
float nctemp6443 = nctemp6441 * g;
float nctemp6445 = nctemp6443 + R1;
float nctemp6447 = nctemp6445 * g;
g =nctemp6447;
float nctemp6460 = f * g;
float nctemp6461 = f + nctemp6460;
g =nctemp6461;
float nctemp6466 = sign * g;
return nctemp6466;
}
float LibeSin (float x)
{
int nctemp6467 = (x < 0.0);
if(nctemp6467)
{
float nctemp6472= x;
float nctemp6475= -x;
float nctemp6474= nctemp6475;
float nctemp6477= -1.0;
float nctemp6476= nctemp6477;
float nctemp6478=LibeSincos(nctemp6472,nctemp6474,nctemp6476);
return nctemp6478;
}
else{
float nctemp6480= x;
float nctemp6482= x;
float nctemp6484= 1.0;
float nctemp6486=LibeSincos(nctemp6480,nctemp6482,nctemp6484);
return nctemp6486;
}
}
float LibeCos (float x)
{
float nctemp6488= x;
float nctemp6494= x;
float nctemp6496=LibeFabs(nctemp6494);
float nctemp6498 = nctemp6496 + 1.57079632679489661923132;
float nctemp6490= nctemp6498;
float nctemp6499= 1.0;
float nctemp6501=LibeSincos(nctemp6488,nctemp6490,nctemp6499);
return nctemp6501;
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
float nctemp6505= -0.958017723E-1;
P1 =nctemp6505;
float nctemp6509= -0.429135777E+0;
Q1 =nctemp6509;
Q2 =0.971685835E-2;
float nctemp6518= x;
float nctemp6520=LibeFabs(nctemp6518);
y =nctemp6520;
int nctemp6521 = (y > LibeSincosmax);
if(nctemp6521)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp6534;
static struct nctempchar1 nctemp6535 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp6534=&nctemp6535;
LibeErrstr=nctemp6534;
return 0.0;
}
float nctemp6547 = x * 0.63661977236758134308;
int nctemp6541=(int)(nctemp6547);
n =nctemp6541;
float nctemp6552=(float)(n);
xn =nctemp6552;
float nctemp6567 = xn * 1.57079632679489661923132;
float nctemp6568 = x - nctemp6567;
f =nctemp6568;
float nctemp6572= f;
float nctemp6574=LibeFabs(nctemp6572);
int nctemp6569 = (nctemp6574 < LibeSincoslim);
if(nctemp6569)
{
xnum =f;
xden =1.0;
}
else{
float nctemp6592 = f * f;
g =nctemp6592;
float nctemp6607 = P1 * g;
float nctemp6609 = nctemp6607 * f;
float nctemp6611 = nctemp6609 + f;
xnum =nctemp6611;
float nctemp6632 = Q2 * g;
float nctemp6634 = nctemp6632 + Q1;
float nctemp6636 = nctemp6634 * g;
float nctemp6638 = nctemp6636 + 0.5;
float nctemp6640 = nctemp6638 + 0.5;
xden =nctemp6640;
}
int nctemp6644= n;
int nctemp6646= 2;
int nctemp6648=LibeMod(nctemp6644,nctemp6646);
int nctemp6641 = (nctemp6648 !=0);
if(nctemp6641)
{
float nctemp6653= -xnum;
float nctemp6654 = xden / nctemp6653;
return nctemp6654;
}
else{
float nctemp6659 = xnum / xden;
return nctemp6659;
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
float nctemp6667= -0.504400557E+0;
P2 =nctemp6667;
Q0 =0.560363004E+1;
float nctemp6675= -0.554846723E+1;
Q1 =nctemp6675;
float nctemp6680= x;
float nctemp6682=LibeFabs(nctemp6680);
y =nctemp6682;
int nctemp6683 = (y > 0.5);
if(nctemp6683)
{
i =1;
int nctemp6691 = (y > 1.0);
if(nctemp6691)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp6704;
static struct nctempchar1 nctemp6705 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp6704=&nctemp6705;
LibeErrstr=nctemp6704;
return 3.4028234663852886e+38;
}
float nctemp6718 = 1.0 - y;
float nctemp6720 = nctemp6718 * 0.5;
g =nctemp6720;
float nctemp6725= g;
float nctemp6727=LibeSqrt(nctemp6725);
r =nctemp6727;
float nctemp6731= -r;
r =nctemp6731;
float nctemp6740 = r + r;
y =nctemp6740;
float nctemp6758 = P2 * g;
float nctemp6760 = nctemp6758 + P1;
float nctemp6762 = nctemp6760 * g;
float nctemp6774 = g + Q1;
float nctemp6776 = nctemp6774 * g;
float nctemp6778 = nctemp6776 + Q0;
float nctemp6779 = nctemp6762 / nctemp6778;
r =nctemp6779;
float nctemp6792 = y * r;
float nctemp6793 = y + nctemp6792;
res =nctemp6793;
}
else{
i =0;
int nctemp6798 = (y < LibeSincoslim);
if(nctemp6798)
{
res =y;
}
else{
float nctemp6814 = y * y;
g =nctemp6814;
float nctemp6832 = P2 * g;
float nctemp6834 = nctemp6832 + P1;
float nctemp6836 = nctemp6834 * g;
float nctemp6848 = g + Q1;
float nctemp6850 = nctemp6848 * g;
float nctemp6852 = nctemp6850 + Q0;
float nctemp6853 = nctemp6836 / nctemp6852;
g =nctemp6853;
float nctemp6866 = y * g;
float nctemp6867 = y + nctemp6866;
res =nctemp6867;
}
}
int nctemp6868 = (i ==1);
if(nctemp6868)
{
float nctemp6884 = 0.78539816339744830962 + res;
float nctemp6885 = 0.78539816339744830962 + nctemp6884;
res =nctemp6885;
}
int nctemp6886 = (x < 0.0);
if(nctemp6886)
{
float nctemp6893= -res;
res =nctemp6893;
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
float nctemp6902= -0.504400557E+0;
P2 =nctemp6902;
Q0 =0.560363004E+1;
float nctemp6910= -0.554846723E+1;
Q1 =nctemp6910;
float nctemp6915= x;
float nctemp6917=LibeFabs(nctemp6915);
y =nctemp6917;
int nctemp6918 = (y > 0.5);
if(nctemp6918)
{
i =0;
int nctemp6926 = (y > 1.0);
if(nctemp6926)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp6939;
static struct nctempchar1 nctemp6940 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp6939=&nctemp6940;
LibeErrstr=nctemp6939;
return 3.4028234663852886e+38;
}
float nctemp6953 = 1.0 - y;
float nctemp6955 = nctemp6953 * 0.5;
g =nctemp6955;
float nctemp6960= g;
float nctemp6962=LibeSqrt(nctemp6960);
r =nctemp6962;
float nctemp6966= -r;
r =nctemp6966;
float nctemp6975 = r + r;
y =nctemp6975;
float nctemp6993 = P2 * g;
float nctemp6995 = nctemp6993 + P1;
float nctemp6997 = nctemp6995 * g;
float nctemp7009 = g + Q1;
float nctemp7011 = nctemp7009 * g;
float nctemp7013 = nctemp7011 + Q0;
float nctemp7014 = nctemp6997 / nctemp7013;
r =nctemp7014;
float nctemp7027 = y * r;
float nctemp7028 = y + nctemp7027;
res =nctemp7028;
}
else{
i =1;
int nctemp7033 = (y < LibeSincoslim);
if(nctemp7033)
{
res =y;
}
else{
float nctemp7049 = y * y;
g =nctemp7049;
float nctemp7067 = P2 * g;
float nctemp7069 = nctemp7067 + P1;
float nctemp7071 = nctemp7069 * g;
float nctemp7083 = g + Q1;
float nctemp7085 = nctemp7083 * g;
float nctemp7087 = nctemp7085 + Q0;
float nctemp7088 = nctemp7071 / nctemp7087;
g =nctemp7088;
float nctemp7101 = y * g;
float nctemp7102 = y + nctemp7101;
res =nctemp7102;
}
}
int nctemp7103 = (x < 0.0);
if(nctemp7103)
{
int nctemp7107 = (i ==0);
if(nctemp7107)
{
float nctemp7123 = 1.57079632679489661923132 + res;
float nctemp7124 = 1.57079632679489661923132 + nctemp7123;
res =nctemp7124;
}
else{
float nctemp7137 = 0.78539816339744830962 + res;
float nctemp7138 = 0.78539816339744830962 + nctemp7137;
res =nctemp7138;
}
}
else{
int nctemp7139 = (i ==1);
if(nctemp7139)
{
float nctemp7155 = 0.78539816339744830962 - res;
float nctemp7156 = 0.78539816339744830962 + nctemp7155;
res =nctemp7156;
}
else{
float nctemp7160= -res;
res =nctemp7160;
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
float nctemp7178 = rt3 - 1.0;
a =nctemp7178;
float nctemp7182= -0.4708325141E+0;
P0 =nctemp7182;
float nctemp7186= -0.5090958253E-1;
P1 =nctemp7186;
Q0 =0.1412500740E+1;
int nctemp7191 = (f > 1.0);
if(nctemp7191)
{
float nctemp7203 = 1.0 / f;
f =nctemp7203;
n =2;
}
else{
n =0;
}
int nctemp7212 = (f > rt32);
if(nctemp7212)
{
float nctemp7236 = a * f;
float nctemp7238 = nctemp7236 - 0.5;
float nctemp7240 = nctemp7238 - 0.5;
float nctemp7242 = nctemp7240 + f;
float nctemp7248 = rt3 + f;
float nctemp7249 = nctemp7242 / nctemp7248;
f =nctemp7249;
int nctemp7258 = n + 1;
n =nctemp7258;
}
float nctemp7262= f;
float nctemp7264=LibeFabs(nctemp7262);
int nctemp7259 = (nctemp7264 < LibeSincoslim);
if(nctemp7259)
{
res =f;
}
else{
float nctemp7278 = f * f;
g =nctemp7278;
float nctemp7296 = P1 * g;
float nctemp7298 = nctemp7296 + P0;
float nctemp7300 = nctemp7298 * g;
float nctemp7306 = g + Q0;
float nctemp7307 = nctemp7300 / nctemp7306;
res =nctemp7307;
float nctemp7320 = f * res;
float nctemp7321 = f + nctemp7320;
res =nctemp7321;
}
int nctemp7322 = (n > 1);
if(nctemp7322)
{
float nctemp7329= -res;
res =nctemp7329;
}
int nctemp7330 = (n ==1);
if(nctemp7330)
{
float nctemp7342 = res + 0.52359877559829887308;
res =nctemp7342;
}
else{
int nctemp7343 = (n ==2);
if(nctemp7343)
{
float nctemp7355 = res + 1.57079632679489661923132;
res =nctemp7355;
}
else{
int nctemp7356 = (n ==3);
if(nctemp7356)
{
float nctemp7368 = res + 1.04719755119659774615;
res =nctemp7368;
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp7370 = (x < 0.0);
if(nctemp7370)
{
float nctemp7379= -x;
float nctemp7378= nctemp7379;
float nctemp7380=LibeAtan(nctemp7378);
rval =nctemp7380;
float nctemp7384= -rval;
rval =nctemp7384;
}
else{
float nctemp7389= x;
float nctemp7391=LibeAtan(nctemp7389);
rval =nctemp7391;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp7399= base;
float nctemp7401=LibeLn(nctemp7399);
float nctemp7402 = exponent * nctemp7401;
float nctemp7394= nctemp7402;
float nctemp7403=LibeExp(nctemp7394);
return nctemp7403;
}
int LibeMod (int n,int r)
{
int nctemp7404 = (r ==0);
if(nctemp7404)
{
return n;
}
int nctemp7420 = n / r;
int nctemp7422 = nctemp7420 * r;
int nctemp7423 = n - nctemp7422;
return nctemp7423;
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
nctempchar1* nctemp7428= cmd;
int nctemp7431=RunSystem(nctemp7428);
rval =nctemp7431;
return rval;
}
