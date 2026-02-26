#!/bin/sh

ec -z arrays.e
ec -z scalars.e
el -shared -o pylib.so arrays.o scalars.o

ec -x cuda -z arrays.e 
ec -x cuda -z scalars.e 
elc -shared -o pylibcuda.so arrays.o scalars.o
