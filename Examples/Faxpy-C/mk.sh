#!/bin/sh

#gcc -c -O3 faxpy.c
#gcc -o faxpycpu faxpy.o 

gcc -c -O3 faxpy2d.c
gcc -o faxpy2dcpu faxpy2d.o 

