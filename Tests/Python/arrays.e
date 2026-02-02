import libe

def int int1d( int [*] a): 
  LibeInit()
  for i in range(0,len(a,0)):
    a[i] = a[i]+1
  return (OK)

def int [*] int1da( int [*] a): 
  for i in range(0,len(a,0)):
    a[i]=a[i]+1
  return (a)

def int int2d( int [*,*] a): 
  for i in range(0,len(a,0)):
    for j in range(0,len(a,1)):
      a[i,j]=a[i,j]+1
  return (OK)

def int [*,*] int2da( int [*,*] a): 
  for i in range(0,len(a,0)):
    for j in range(0,len(a,1)):
      a[i,j]=a[i,j]+1
  return (a)

def int float1d( float [*] a): 
  for i in range(0,len(a,0)):
    a[i]=a[i]+1.0
  return (OK)

def float [*] float1da( float [*] a): 
  for i in range(0,len(a,0)):
    a[i]=a[i]+1.0
  return (a)

def int float2d( float [*,*] a): 
  for i in range(0,len(a,0)):
    for j in range(0,len(a,1)):
      a[i,j]=a[i,j]+1.0
  return (OK)

def float [*,*] float2da( float [*,*] a): 
  for i in range(0,len(a,0)):
    for j in range(0,len(a,1)):
      a[i,j]=a[i,j]+1.0
  return (a)
