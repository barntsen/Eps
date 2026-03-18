#!/bin/sh
# Script to build saxpy
#

ec  saxpy.e
ec  tsaxpy.e
el  -o tsaxpycpu tsaxpy.o saxpy.o

ec -f -d saxpy.e
ec -f -d tsaxpy.e
el -fopenmp -o tsaxpyomp tsaxpy.o saxpy.o

ec  -d -x cuda saxpy.e
ec  -d -x cuda tsaxpy.e
elc -o tsaxpycuda tsaxpy.o saxpy.o




