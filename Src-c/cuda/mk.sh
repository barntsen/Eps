#!/bin/sh

nvcc -x cu -o ecc *.cpp
mv ecc ../../Bin
nvcc -x cu -c libe.c
nvcc -x cu -c runcuda.c
ar rcs libecuda.a libe.o runcuda.o
mv libecuda.a ../../Lib
rm *.o
