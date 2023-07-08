#!/bin/sh

#ec -O faxpy.e
#el -o faxpycpu faxpy.o 

ec -O faxpy2d.e
el -o faxpy2dcpu faxpy2d.o 

#ecc  faxpy.e
#elc -o faxpycuda faxpy.o 

#ech  faxpy.e
#elh -o faxpyhip faxpy.o 



