#!/bin/sh


gcc -c -O3 der.c
gcc -c -O3 diff.c
gcc -o dercpu der.o diff.o

