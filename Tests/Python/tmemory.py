''' tarrays tests of eps-to-python wrappers for simple arrays

'''

import pyeps
import numpy as np
from arrays import *

pylib=pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylib.so")

print("Test 1: 1d int array (result: all ones)")
n=20000000
a = pyeps.Izeros(n)
a[:]=0
niter=10000
for i in range(0,niter):
  int1d(pylib,a)
print(a)

