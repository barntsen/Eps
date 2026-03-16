''' tarrays tests of eps-to-python wrappers for simple arrays

'''
import sys
import pyeps
import numpy as np
from string import *

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

pyeps.setup(libpath)

print("Test 1: 1d int array (result: hello,hello)")
s="hello"
str1(s)
print(s)
