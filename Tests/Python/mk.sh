#!/bin/sh

ec -z arrays.e
ec -z scalars.e
el -shared -o pylib.so arrays.o scalars.o
