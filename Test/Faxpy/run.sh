#!/bin/sh
export NBLOCKS=31250
export NTHREADS=128

echo "Cuda version:"
nsys profile ./tfaxpy2de

echo "Fortran version:"
nsys profile ./tfaxpy2df
