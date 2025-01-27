#!/bin/sh

#ec -O faxpy2d.e
#el -o faxpy2dcpu faxpy2d.o 

ecc  -O faxpy2d.e
elc -o faxpy2dcuda faxpy2d.o 


gfortran -c faxpy2d.f90
gfortran -c test.f90
gfortran -o test test.o faxpy2d.o



