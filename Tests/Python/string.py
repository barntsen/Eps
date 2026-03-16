from ctypes import *
import numpy as np
import pyeps
import config
def str1(str):
 pylib=config.pylib
 pylib.str1.argtypes =[c_void_p]
 pylib.str1.restype=int
 str_eps=pyeps.eps1dc(str)
 r_val=pylib.str1(str_eps)
 str=pyeps.num1dc(str_eps)
 rval=r_val
 return rval
