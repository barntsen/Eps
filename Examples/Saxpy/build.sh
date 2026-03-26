#!/bin/sh
# Script to build saxpy
#

#ec  saxpy.e
#ec  tsaxpy.e
#el  -o tsaxpycpu tsaxpy.o saxpy.o

#ec   -d -x gomp saxpy.e
#ec   -d -x gomp tsaxpy.e
nvc -mp=gpu -c tsaxpy.c saxpy.c
eln  -mp=gpu -o tsaxpyomp tsaxpy.o saxpy.o

exit

#ec  -d -x cuda  saxpy.e
#ec  -d -x cuda tsaxpy.e
#elc -o tsaxpycuda tsaxpy.o saxpy.o


 


