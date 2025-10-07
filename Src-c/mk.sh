#!/bin/sh

gcc -o ec *.c
mv ec ../../Bin
gcc -c libe.c
gcc -c runcpu.c
ar rcs libecpu.a libe.o runcpu.o
mv libecpu.a ../../Lib
rm *.o
