#!/bin/sh
export NBLOCKS=1024
export NTHREADS=1024

echo "Running cuda version:"
./faxpy2dcuda

echo "Running cpu version:"
./faxpy2dcpu
