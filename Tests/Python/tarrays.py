''' tarrays tests of eps-to-python wrappers for simple arrays

'''
import sys
import pyeps
import numpy as np
from arrays import *

if len(sys.argv) <2 :
  print("missing argument: cpu, omp or cuda")
  exit()

arch=sys.argv[1]
if arch      == "cpu" :
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylibcpu.so"
elif arch == "omp" :
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylibomp.so"
elif arch == "cuda" :
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylibcuda.so"
else :
  print("Use one of cpu,omp,cuda,python")
  exit()

pylib=pyeps.setup(libpath)

print("Test 1: 1d int array (result: all ones)")
n=4
a = pyeps.Izeros(n)
int1d(pylib,a)
print(a)

print("Test 2: 1d int array return value (result: all ones)")
n=4
a = pyeps.Izeros(n)
print("lib: ",pylib.lib)
b=int1da(pylib,a)
print(b)

print("Test 3: 2d int array (result: all ones)")
n=4
a = pyeps.Izeros((n,n))
int2d(pylib,a)
print(a)

print("Test 4: 2d int array return value (result: all ones)")
n=4
a = pyeps.Izeros((n,n))
b=int2da(pylib,a)
print(b)


print("Test 5: 1d float array (result: all ones)")
n=4
a = pyeps.Fzeros(n)
a[:]=0
float1d(pylib,a)
print(a)

print("Test 6: 1d float array return value (result: all ones)")
n=4
a = pyeps.Fzeros(n)
a[:] = 0
b=float1da(pylib,a)
print(b)

print("Test 7: 2d float array (result: all ones)")
n=4
a = pyeps.Fzeros((n,n))
float2d(pylib,a)
print(a)

print("Test 8: 2d float array return value (result: all ones)")
n=4
a = pyeps.Fzeros((n,n))
b=float2da(pylib,a)
print(b)



