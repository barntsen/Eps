#!/bin/sh

cp ec          ../Bin
cp el          ../Bin
cp elc          ../Bin
cp libecpu.o   ../Lib
cp runcpu.o    ../Lib
cp libecuda.o  ../Lib
cp runcuda.o   ../Lib
cp pyeps.o     ../Lib
cp pyepscuda.o ../Lib
cp version.txt ../Lib
cp pyeps.py    ../Lib
./boot.sh
