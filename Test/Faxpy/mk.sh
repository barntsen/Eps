#!/bin/sh


nvfortran -g -O -stdpar=gpu -gpu=cc80 -Minfo=all -c faxpy2d.f90
nvfortran -g -O -stdpar=gpu -gpu=cc80 -Minfo=all -c tfaxpy2d.f90
nvfortran -g -O -stdpar=gpu -gpu=cc80 -o tfaxpy2df tfaxpy2d.o faxpy2d.o
