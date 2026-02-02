''' tstoreget runs a test on the Store, Get and Dims functions

'''

import pyeps
import numpy as np

pylib=pyeps.setup("/home/barn/Dropbox/Src/Eps/Tests/Python/pylib.so")

print("*** Test 1: 1d int arrays (result: input==output)")
n=4
arr = pyeps.Izeros((n))
arr[:] = 1.0
arr_eps=pyeps.Store1di(pylib,arr)
neps=pyeps.Dims1di(arr_eps)
out=pyeps.Izeros(pyeps.Dims1di(arr_eps))
pyeps.Get1di(pylib,arr_eps,out)
print("size of stored array: (should be ",neps,") ",neps)
print("input:")
print(arr)
print("output:")
print(out)

print("*** Test 2: 2d int arrays (result: input==output )")
n=4
arr = pyeps.Izeros((n,n))
arr[:,:] = 1.0
arr_eps=pyeps.Store2di(pylib,arr)
dims=pyeps.Dims2di(arr_eps)
out=pyeps.Izeros(pyeps.Dims2di(arr_eps))
pyeps.Get2di(pylib,arr_eps,out)
print("size of stored array: (should be ",n,n, ") ",dims)
print("input:")
print(arr)
print("output:")
print(out)

print("*** Test 3: 1d float arrays (result: input==output )")
n=4
arr = pyeps.Fzeros((n))
arr[:] = 1.0
arr_eps=pyeps.Store1df(pylib,arr)
neps=pyeps.Dims1df(arr_eps)
out = pyeps.Fzeros((n))
pyeps.Get1df(pylib,arr_eps,out)
print("size of stored array: (should be ",n,") ",neps)
print("input:")
print(arr)
print("output:")
print(out)

print("*** Test 4: 2d float arrays (result: input==output)")
n=4
arr = pyeps.Fzeros((n,n))
arr[:] = 1.0
arr_eps=pyeps.Store2df(pylib,arr)
neps=pyeps.Dims2df(arr_eps)
out = pyeps.Fzeros(neps)
pyeps.Get2df(pylib,arr_eps,out)
print("size of stored array: (should be ",n,n,") ",neps)
print("input:")
print(arr)
print("output:")
print(out)

print("*** Test 5: string (result; input==output )")
str = "Hello"
str_eps=pyeps.Store1dc(pylib,str)
neps=pyeps.Dims1dc(str_eps)
out=pyeps.Get1dc(pylib,str_eps)
print("size of stored array: (should be ",len(str)+1,") ",neps)
print("input")
print(str)
print("output")
print(out)


