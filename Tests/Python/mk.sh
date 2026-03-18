#!/bin/sh

ec -z arrays.e
ec -z string.e 
el -shared -o pylib.so arrays.o string.o

ec -x cuda -z arrays.e 
ec -x cuda -z string.e 

elc -shared -o pylibcuda.so arrays.o string.o
       
      


