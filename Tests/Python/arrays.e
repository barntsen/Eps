import libe

def int int1d( int [*] a): 
  parallel(i=0:len(a,0)) :
    a[i] = a[i]+1

def int int2d( int [*,*] a): 
  parallel(i=0:len(a,0),j=0:len(a,1)) :
    a[i,j]=a[i,j]+1

def int float1d( float [*] a): 
  parallel(i=0:len(a,0)) :
    a[i]=a[i]+1.0

def int float2d( float [*,*] a): 
  parallel(i=0:len(a,0),j=0:len(a,1)) :
    for j in range(0,len(a,1)):
      a[i,j]=a[i,j]+1.0

