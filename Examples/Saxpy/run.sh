#!/bin/sh

# Script for running saxpy

#No of cores for multicore case
export OMP_NUM_THREADS=20

#No of threads and blocks for cuda
export NTHREADS=1024
export NBLOCKS=1024

echo "*** Native code: "
./tsaxpycpu  cpu
./tsaxpyomp  omp
./tsaxpycuda cuda

echo "*** Python wrapper: "
python3 tsaxpy.py cpu
python3 tsaxpy.py omp
python3 tsaxpy.py cuda

