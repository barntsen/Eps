from ctypes import *
import numpy as np
import pyeps
import config
def int1d(a):
 pylib=config.pylib
 pylib.int1d.argtypes =[c_void_p]
 pylib.int1d.restype=int
 a_eps=pyeps.eps1di(a)
 r_val=pylib.int1d(a_eps)
 a=pyeps.num1di(a_eps)
 rval=r_val
 return rval
def int2d(a):
 pylib=config.pylib
 pylib.int2d.argtypes =[c_void_p]
 pylib.int2d.restype=int
 a_eps=pyeps.eps2di(a)
 r_val=pylib.int2d(a_eps)
 a=pyeps.num2di(a_eps)
 rval=r_val
 return rval
def float1d(a):
 pylib=config.pylib
 pylib.float1d.argtypes =[c_void_p]
 pylib.float1d.restype=int
 a_eps=pyeps.eps1df(a)
 r_val=pylib.float1d(a_eps)
 a=pyeps.num1df(a_eps)
 rval=r_val
 return rval
def float2d(a):
 pylib=config.pylib
 pylib.float2d.argtypes =[c_void_p]
 pylib.float2d.restype=int
 a_eps=pyeps.eps2df(a)
 r_val=pylib.float2d(a_eps)
 a=pyeps.num2df(a_eps)
 rval=r_val
 return rval
