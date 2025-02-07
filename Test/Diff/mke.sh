#!/bin/sh

#ec -O diff.e
#ec -O tdiff.e
#el -o tdiffcpu tdiff.o diff.o

ecc -O diff.e
ecc -O tdiff.e
elc -o tdiffe tdiff.o diff.o




