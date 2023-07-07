#!/bin/sh

#ec -O faxpy.e
#el -o faxpycpu faxpy.o 

ec  -O der.e
ec  -O diff.e
el -o dercpu der.o diff.o

#ecc  faxpy.e
#elc -o faxpycpu faxpy.o 



