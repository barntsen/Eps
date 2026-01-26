import pyeps
from faxpy2da import *
import numpy as np

pylib=pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylib.so")

nx=4
ny=4
shape=(nx,ny)
x=np.zeros(shape, dtype=np.float32, order='F')
y=np.zeros(shape, dtype=np.float32, order='F')
a=np.zeros(shape, dtype=np.float32, order='F')

b=3.0

x[:,:] = 1.0
y[:,:] = 1.0

print("x,y: ", x,y)

c=faxpy2da(pylib,a,x,y,b)

print("c: ",c)
