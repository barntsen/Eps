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
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylib.so"
elif arch == "omp" :
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylibomp.so"
elif arch == "cuda" :
  libpath="/home/barn/Dropbox/Src/Eps/Tests/Python/pylibcuda.so"
else :
  print("Use one of cpu,omp,cuda,python")
  exit()

pyeps.setup(libpath)

print("Test 1: 1d int array (result: all ones)")
n=2000000
a = pyeps.Izeros((n,))
a[:]=0
int1d(a)
print(a)

print("Test 2: 2d int array (result: all ones)")
n=4
a = pyeps.Izeros((n,n))
int2d(a)
print(a)

print("Test 3: 1d float array (result: all ones)")
n=4
a = pyeps.Fzeros((n,))
a[:]=0
float1d(a)
print(a)

print("Test 4: 2d float array (result: all ones)")
n=4
a = pyeps.Fzeros((n,n))
a[:]=0
float2d(a)
print(a)



