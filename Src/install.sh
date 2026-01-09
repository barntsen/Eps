#!/bin/sh

cp ec          ../Bin
cp el          ../Bin/el
cp libecpu.o   ../Lib
cp runcpu.o    ../Lib
cp libecuda.o  ../Lib
cp runcuda.o   ../Lib
cp pyeps.o     ../Lib
cp version.txt ../Lib
./boot.sh
