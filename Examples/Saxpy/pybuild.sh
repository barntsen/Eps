#!/bin/sh
# Script to build python interface for saxpy
#
 
# single core cpu
ec -d -z -saxpy.e
el -shared -o  pylibcpu.so saxpy.o

# multicore core cpu
ec -d -f -z  saxpy.e
el -fopenmp -shared -o pylibomp.so saxpy.o

# cuda 
ec -d -x cuda -z  saxpy.e
elc -shared -o pylibcuda.so saxpy.o






