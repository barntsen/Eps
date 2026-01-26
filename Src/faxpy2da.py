import pyeps
from ctypes import *
import numpy as np
def faxpy2d(pylib,a,x,y,b):
 pylib.faxpy2d.argtypes =[c_void_p,c_void_p,c_void_p,c_float]
 pylib.faxpy2d.restype=c_void_p
 a_eps=pyeps.Store2df(pylib,a)
 x_eps=pyeps.Store2df(pylib,x)
 y_eps=pyeps.Store2df(pylib,y)
 r_val=pylib.faxpy2d(a_eps,x_eps,y_eps,b)
 pyeps.Get2df(pylib,a_eps,a)
 pyeps.Get2df(pylib,x_eps,x)
 pyeps.Get2df(pylib,y_eps,y)
 nx =pyeps.Dims2df(pylib,r_val,0)
 ny =pyeps.Dims2df(pylib,r_val,1)
 rval = pyeps.fzeros((nx,ny))
 pyeps.Get2df(pylib,r_val,rval)
 return rval
