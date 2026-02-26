import pyeps
import time
import sys
import saxpy

# Select single core,multicore or cuda
arch=sys.argv[1]
if arch      == "cpu" :
  libpath="/home/barn/Dropbox/Src/Eps/Examples/Saxpy/pylibcpu.so"
elif arch == "omp" :
  libpath="/home/barn/Dropbox/Src/Eps/Examples/Saxpy/pylibomp.so"
elif arch == "cuda" :
  libpath="/home/barn/Dropbox/Src/Eps/Examples/Saxpy/pylibcuda.so"
else :
  print("Use one of cpu,omp,cuda,python")
  exit()

# Get correct shared library
pylib=pyeps.setup(libpath)

t0=time.perf_counter()
n=2000000
niter=10000
x=pyeps.Fzeros(n)
y=pyeps.Fzeros(n)
z=pyeps.Fzeros(n)

t1=time.perf_counter()

a=2.0
x.fill(1.0)
y.fill(1.0)

t2=time.perf_counter()
saxpy.runsaxpy(pylib,a,x,y,z,niter)
t3=time.perf_counter()
print("time for saxpy ",t3-t2, "(", arch, ")")

