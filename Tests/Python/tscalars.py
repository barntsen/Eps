''' tscalars tests creating python wrappers for scalars

'''

import pyeps
import numpy as np
from arrays import *
from scalars import *

pylib=pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylib.so")

print("Test 1: scalar (result 1) :")
a=0
b=scalar1(pylib,a)
print(b)

print("Test 2: scalar (result 1.0) :")
b=0
b=scalar2(pylib,a,b)
print(b)

print("Test 3: scalar (result ones) :")
b=0
n=4
c=pyeps.Fzeros(n)
b=scalar3(pylib,a,b,c)
print(c)

print("Test 4: struct (result 1) :")
p=create(pylib)
b=scalar4(pylib,p)
print(b)
