#!/bin/sh

ec -d  -O faxpy2d.e
ec -d  -O tfaxpy2d.e
el -o tfaxpy2d tfaxpy2d.o faxpy2d.o
