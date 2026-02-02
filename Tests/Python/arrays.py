import pyeps
from ctypes import *
import numpy as np
def int1d(pylib,a):
 pylib.int1d.argtypes =[c_void_p]
 pylib.int1d.restype=int
 a_eps=pyeps.Store1di(pylib,a)
 r_val=pylib.int1d(a_eps)
 pyeps.Get1di(pylib,a_eps,a)
 rval=r_val
 return rval
def int1da(pylib,a):
 pylib.int1da.argtypes =[c_void_p]
 pylib.int1da.restype=c_void_p
 a_eps=pyeps.Store1di(pylib,a)
 r_val=pylib.int1da(a_eps)
 pyeps.Get1di(pylib,a_eps,a)
 rval=pyeps.Izeros(pyeps.Dims1di(r_val))
 pyeps.Get1di(pylib,r_val,rval)
 return rval
def int2d(pylib,a):
 pylib.int2d.argtypes =[c_void_p]
 pylib.int2d.restype=int
 a_eps=pyeps.Store2di(pylib,a)
 r_val=pylib.int2d(a_eps)
 pyeps.Get2di(pylib,a_eps,a)
 rval=r_val
 return rval
def int2da(pylib,a):
 pylib.int2da.argtypes =[c_void_p]
 pylib.int2da.restype=c_void_p
 a_eps=pyeps.Store2di(pylib,a)
 r_val=pylib.int2da(a_eps)
 pyeps.Get2di(pylib,a_eps,a)
 rval=pyeps.Izeros(pyeps.Dims2di(r_val))
 pyeps.Get2di(pylib,r_val,rval)
 return rval
def float1d(pylib,a):
 pylib.float1d.argtypes =[c_void_p]
 pylib.float1d.restype=int
 a_eps=pyeps.Store1df(pylib,a)
 r_val=pylib.float1d(a_eps)
 pyeps.Get1df(pylib,a_eps,a)
 rval=r_val
 return rval
def float1da(pylib,a):
 pylib.float1da.argtypes =[c_void_p]
 pylib.float1da.restype=c_void_p
 a_eps=pyeps.Store1df(pylib,a)
 r_val=pylib.float1da(a_eps)
 pyeps.Get1df(pylib,a_eps,a)
 rval=pyeps.Fzeros(pyeps.Dims1df(r_val))
 pyeps.Get1df(pylib,r_val,rval)
 return rval
def float2d(pylib,a):
 pylib.float2d.argtypes =[c_void_p]
 pylib.float2d.restype=int
 a_eps=pyeps.Store2df(pylib,a)
 r_val=pylib.float2d(a_eps)
 pyeps.Get2df(pylib,a_eps,a)
 rval=r_val
 return rval
def float2da(pylib,a):
 pylib.float2da.argtypes =[c_void_p]
 pylib.float2da.restype=c_void_p
 a_eps=pyeps.Store2df(pylib,a)
 r_val=pylib.float2da(a_eps)
 pyeps.Get2df(pylib,a_eps,a)
 rval=pyeps.Fzeros(pyeps.Dims2df(r_val))
 pyeps.Get2df(pylib,r_val,rval)
 return rval
