#!/bin/sh

#ec -O diff.e
#ec -O tdiff.e
#el -o tdiffcpu tdiff.o diff.o

ecc -O diff.e
ecc -O tdiff.e
elc -o tdiffe tdiff.o diff.o



nvfortran -Minfo=all -O2 -c -gpu=cc80 -stdpar=gpu diff.f90 
nvfortran -O2 -c -stdpar=gpu -gpu=cc80 tdiff.f90
nvfortran -stdpar=gpu -o tdifff tdiff.o diff.o



