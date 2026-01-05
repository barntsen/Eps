import pyeps
from ctypes import *
def faxpy2d(pylib,a,x,y,b):
 pylib.faxpy2d.argtypes =[c_void_p,c_void_p,c_void_p,c_float]
 pylib.faxpy2d.restype=int
 a_eps=pyeps.Store2df(pylib,a)
 x_eps=pyeps.Store2df(pylib,x)
 y_eps=pyeps.Store2df(pylib,y)
 r_val=pylib.faxpy2d(a_eps,x_eps,y_eps,b)
 pyeps.Get2df(pylib,a_eps,a)
 pyeps.Get2df(pylib,x_eps,x)
 pyeps.Get2df(pylib,y_eps,y)
 rval = r_val
 return rval
