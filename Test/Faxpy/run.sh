#!/bin/sh
export NBLOCKS=31250
export NTHREADS=128

echo "Cuda version:"
#nsys nvprof ./tfaxpy2de > time-eps.txt
time ./tfaxpy2de  

echo "Fortran version:"
#nsys nvprof ./tfaxpy2df > time-nvf.txt
time ./tfaxpy2df
