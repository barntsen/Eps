#!/bin/sh

nvcc -x cu -o ecc --compiler-options "-z muldefs"  *.cpp

exit
mv ecc ../../Bin
nvcc -x cu -c libe.cpp
nvcc -x cu -c runcudac.cpp
ar rcs libecuda.a libe.o runcudac.o
mv libecuda.a ../../Lib
rm *.o *.a
