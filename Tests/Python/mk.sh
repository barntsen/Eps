#!/bin/sh

arch=cpu
ec -x $arch faxpy2d.e
ec -x $arch tfaxpy2d.e
./el -o tfaxpy2d tfaxpy2d.o faxpy2d.o

arch=cuda
ec -x $arch faxpy2d.e
ec -x $arch tfaxpy2d.e
./elc -o tfaxpy2d tfaxpy2d.o faxpy2d.o
