// The M module contains Machine/System dependent code for cuda

include "m-cuda.i"
include "ptree.i"
include "sym.i"
include "code.i"
include "err.i"
include "libe.i"


// MPreamble() emits declarations needed for each compilation unit
int MPreamble()
{    
  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "/*  Translated by epsc  version December 2021 */\n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, 
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  CodeEs(p, 
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p, 
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, 
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, 
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, 
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, 
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, 
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, 
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, 
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, 
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, 
    "#include <stdio.h>\n");
  CodeEs(p, "extern \"C\" {\n"); 
  CodeEs(p, 
    "#include <stdlib.h>\n");
  CodeEs(p, 
    "#include <string.h>\n");
  CodeEs(p,"}\n");

  CodeEs(p,"\n");
  CodeEs(p, 
    "void *GpuNew(int n);\n");
  CodeEs(p, 
    "void *GpuDelete(void *f);\n");
  CodeEs(p, 
    "void *GpuError();\n");

  CodeEs(p, 
    "void *RunMalloc();\n");
  CodeEs(p, 
    "void * RunFree();\n");
  CodeEs(p, 
    "void * RunSync();\n");

  CodeEs(p, 
    "int RunGetnt();\n");
  CodeEs(p, 
    "int RunGetnb();\n");

  return (OK);
}
