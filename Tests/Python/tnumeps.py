''' tnumeps runs a test on the store and get functions

'''

import pyeps
import numpy as np
import sys
import config
from ctypes import *

if len(sys.argv) == 1 :
  print("use comand line argument cpu or cuda")
  exit()

if sys.argv[1] == "cpu" :
  pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylibcpu.so")
elif sys.argv[1] == "cuda" :
  pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylibcuda.so")
else:
  print("use comand line argument cpu or cuda")
  exit()
  
pylib=config.pylib

print("*** Test 1: 1d int arrays (result: 2...2)", "(", sys.argv[1], ")")
n=4
arr = pyeps.Izeros((n,))
arr[:]=1
print(arr)
arr_eps=pyeps.eps1di(arr)
pylib.int1d.argtypes=[c_void_p]
pylib.int1d.restype=c_int
pylib.int1d(arr_eps)
arr = pyeps.num1di(arr_eps)
print(arr)

print("*** Test 2: 2d int arrays (result: 2...2)", "(", sys.argv[1], ")")
n=4
arr = pyeps.Izeros((n,n))
arr[:,:]=1.0
print(arr)
arr_eps=pyeps.eps2di(arr)
pylib.int2d.argtypes=[c_void_p]
pylib.int2d.restype=c_int
pylib.int2d(arr_eps)
arr = pyeps.num2di(arr_eps)
print(arr)

exit()

print("*** Test 3: 1d float arrays (result: 2...2)", "(", sys.argv[1], ")")
n=4
arr = pyeps.Fzeros((n,))
arr[:]=1.0
arr_eps=pyeps.eps1df(arr)
pylib.float1d(arr_eps)
arr = pyeps.num1df(arr_eps)
print(arr)

print("*** Test 4: 2d float arrays (result: 2...2)", "(", sys.argv[1], ")")
n=4
arr = pyeps.Fzeros((n,n))
arr[:,:]=1.0
arr_eps=pyeps.eps2df(arr)
pylib.float2d(arr_eps)
arr = pyeps.num2df(arr_eps)
print(arr)

