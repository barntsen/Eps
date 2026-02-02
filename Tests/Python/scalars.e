
struct alpha :
  int a
  float b

def int scalar1(int a): 
  a=a+1
  return(a)

def float scalar2(int a,float b): 
  b=b+1.0
  return(b)

def float scalar3(int a,float b, float [*] c): 
  b=b+1.0
  for i in range(0,len(c,0)):
    c[i]=c[i]+1.0
  return(b)

def struct alpha create() :
  x=new(struct alpha)
  return(x)

def int scalar4(struct alpha x): 
  x.a=1
  rval=x.a
  return(rval)

