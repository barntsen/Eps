#!/bin/sh
export NBLOCKS=1024
export NTHREADS=1024

echo "Running cuda version:"
time ./faxpy2dcuda


echo "Running fortran version:"
time ./test
