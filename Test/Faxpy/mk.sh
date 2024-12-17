#!/bin/sh

ec -O faxpy2d.e
el -o faxpy2dcpu faxpy2d.o 

ecc  -O faxpy2d.e
./elc -o faxpy2dcuda faxpy2d.o 

#ech  faxpy.e
#elh -o faxpyhip faxpy.o 



