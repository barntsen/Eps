#!/bin/sh
# Script to build saxpy
#

# CPU
ec  saxpy.e
ec  tsaxpy.e
el  -o tsaxpycpu tsaxpy.o saxpy.o


# OpenMP
ec   -d -f saxpy.e
ec   -d -f tsaxpy.e
el  -fopenmp -o tsaxpyomp tsaxpy.o saxpy.o


# CUDA
ec  -d -x cuda  saxpy.e
ec  -d -x cuda tsaxpy.e
elc -o tsaxpycuda tsaxpy.o saxpy.o


 


