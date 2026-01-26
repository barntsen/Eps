#!/bin/sh

#ec -z faxpy2d.e
ec -z faxpy2da.e

#./el -shared -o pylib.so faxpy2d.o
./el -shared -o pylib.so faxpy2da.o

cp ../../Src/pyeps.py .
