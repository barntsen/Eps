import pyeps
from ctypes import *
import numpy as np
def scalar1(pylib,a):
 pylib.scalar1.argtypes =[c_int]
 pylib.scalar1.restype=int
 r_val=pylib.scalar1(a)
 rval=r_val
 return rval
def scalar2(pylib,a,b):
 pylib.scalar2.argtypes =[c_int,c_float]
 pylib.scalar2.restype=float
 r_val=pylib.scalar2(a,b)
 rval=r_val
 return rval
def scalar3(pylib,a,b,c):
 pylib.scalar3.argtypes =[c_int,c_float,c_void_p]
 pylib.scalar3.restype=float
 c_eps=pyeps.Store1df(pylib,c)
 r_val=pylib.scalar3(a,b,c_eps)
 pyeps.Get1df(pylib,c_eps,c)
 rval=r_val
 return rval
def create(pylib) :
 pylib.create.restype=c_void_p
 r_val=pylib.create()
 rval=r_val
 return rval
def scalar4(pylib,x):
 pylib.scalar4.argtypes =[c_void_p]
 pylib.scalar4.restype=int
 r_val=pylib.scalar4(x)
 rval=r_val
 return rval
