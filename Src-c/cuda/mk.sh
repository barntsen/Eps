#!/bin/sh

nvcc -arch=native -O2 -x cu -o ecc --compiler-options -O2 --compiler-options "-z muldefs"  *.cpp

mv ecc ../../Bin
nvcc -x cu -c libe.cpp
nvcc -x cu -c runcudac.cpp
ar rcs libecuda.a libe.o runcudac.o
mv libecuda.a ../../Lib
rm -f *.o *.a
