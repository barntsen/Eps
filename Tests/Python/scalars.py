import pyeps
from ctypes import *
import numpy as np
def scalar1(pylib,a):
 pylib.lib.scalar1.argtypes =[c_int]
 pylib.lib.scalar1.restype=int
 r_val=pylib.lib.scalar1(a)
 rval=r_val
 return rval
def scalar2(pylib,a,b):
 pylib.lib.scalar2.argtypes =[c_int,c_float]
 pylib.lib.scalar2.restype=float
 r_val=pylib.lib.scalar2(a,b)
 rval=r_val
 return rval
def scalar3(pylib,a,b,c):
 pylib.lib.scalar3.argtypes =[c_int,c_float,c_void_p]
 pylib.lib.scalar3.restype=float
 c_eps=pyeps.Store1df(pylib,c)
 r_val=pylib.lib.scalar3(a,b,c_eps)
 c=pyeps.Get1df(pylib,c_eps,c)
 rval=r_val
 return rval
def create(pylib) :
 pylib.lib.create.restype=c_void_p
 r_val=pylib.lib.create()
 rval=r_val
 return rval
def scalar4(pylib,x):
 pylib.lib.scalar4.argtypes =[c_void_p]
 pylib.lib.scalar4.restype=int
 r_val=pylib.lib.scalar4(x)
 rval=r_val
 return rval
