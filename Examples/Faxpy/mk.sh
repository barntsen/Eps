#!/bin/sh

ec -c faxpy.e
el -o faxpycpu faxpy.o 

ecc -c faxpy.e
elc -o faxpygpu faxpy.o 


