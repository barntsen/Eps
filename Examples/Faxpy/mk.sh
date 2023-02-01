#!/bin/sh

ec faxpy.e
el -o faxpycpu faxpy.o 

ecc faxpy.e
elc -o faxpygpu faxpy.o 


