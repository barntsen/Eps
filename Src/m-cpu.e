// The M module contains Machine/System dependent code for cuda

include "ptree.i"
include "sym.i"
include "code.i"
include "m.i"
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
    "#include <stddef.h>\n");
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

  if(CodeArraycheck() == OK){
    CodeEs(p, 
    "static struct nctempchar1 nctempstringx = {0, NULL};\n");
    CodeEs(p,
    "static struct nctempchar1 *nctempstring = &nctempstringx;\n");
    PtreeSetline(p,8);
  }
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
    "#include <stdlib.h>\n");
  CodeEs(p, 
    "#include <string.h>\n");
  return (OK);
}

// MParallelstmnt  generates code for the cpu parallel statement
int MParallelstmnt(struct tree p)
{ 
  struct tree sp,rp,rrp,qp;
  int rank;
  int i;
  char[*] index, cond, init;

  sp = p;                           /* Save top node    */
  rank = PtreeGetrank(sp);          /* Get no of slices */
  p = PtreeMvchild(p);              /* Move to sliceseq */
  p = PtreeMvchild(p);              /* Move to first slice    */

  // Generate the loop code
  MParallelfor(p,0,rank);
  // Emit body of loop
  sp = PtreeMvchild(sp);
  sp = PtreeMvsister(sp);
  CodeStmnt(sp); 
  for(i=0;i<rank;i=i+1){
    CodeEs(sp,"}");
  }
  return(OK);
} 

// MParallelfor -- generate code for the cpu parallel for
int MParallelfor(struct tree p , int level, int rank)
{
  int i;
  struct tree pp,sp,rp,qp,rrp;
  char[*] index,init,cond;

  sp=p;  // Save the current node
  level=level+1;

  // End of tree
  if(p==NULL)
  {
    return(OK);
  }
  p=PtreeMvsister(p);           // Next node until end of tree
  MParallelfor(p , level, rank);  

  rp = PtreeMvchild(sp);        // Move to inital expr of slice  
  qp = PtreeMvchild(rp);        // Move to binary expression
  qp = PtreeMvchild(qp);        // Move to index variable      
  index = PtreeGetdef(qp);      // Get index variable
  init  = CodeBinexpr(PtreeMvsister(qp)); //Find the inital expression
  rrp=PtreeMvsister(rp);        // Find end condition
  cond=CodeExpr(rrp);           // Get end condition
  if(level == rank)
  {
    CodeEs(p, "\n #pragma omp parallel for\n");  // Emit OMP pragma
  }
  CodeEs(rp,"for(");            // Emit inital part of for 
  CodeEs(rp,index);             // Emit index variable
  CodeEs(rp,"=");               
  CodeEs(rp,init);              // Emit inital expression
  CodeEs(rp,";");
  rp = PtreeMvsister(rp);            // Move to second part of slice 
  CodeEs(rp,index); CodeEs(rp,"<");  // Emit condition           
  CodeEs(p,cond);
  CodeEs(rp,";");                    // End of second part of slice  
  if((rp=PtreeMvsister(rp))!= NULL){ // Emit increment expression    
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeExpr(rp); 
  }
  else{
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeEs(rp,"1");
  }
  CodeEs(rp,"){");
  return(OK);
}
