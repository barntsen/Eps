// C support routines for pyeps.e
typedef struct nctempint1 { int d[1]; int *a;} nctempint1;
typedef struct nctempint2 { int d[2]; int *a;} nctempint2;

void *RunMalloc(int n);

 nctempint1 *Desc1di(int nx, int *data)
{
  nctempint1 *descr;
  descr=(nctempint1 *)RunMalloc(sizeof(nctempint1));
  descr->d[0]=nx;
  descr->a=data;

  return(descr);
}

int Dims1di(nctempint1 *descr)
{
  return(descr->d[0]);
}

int *Data1di(nctempint1 *descr)
{
  return(descr->a);
}

 nctempint2 *Desc2di(int nx, int ny, int *data)
{
  nctempint2 *descr;
  descr=(nctempint2 *)RunMalloc(sizeof(nctempint2));
  descr->d[0]=nx;
  descr->d[1]=ny;
  descr->a=data;

  return(descr);
}

int Dimsn02di(nctempint2 *descr)
{
  return(descr->d[0]);
}

int Dimsn12di(nctempint2 *descr)
{
  return(descr->d[1]);
}

int *Data2di(nctempint2 *descr)
{
  return(descr->a);
}

