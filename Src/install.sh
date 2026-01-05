#!/bin/sh

cp ec ../Bin
cp el-install  ../Bin/el
cp elc-install ../Bin/elc
cp libecpu.o   ../Lib
cp runcpu.o    ../Lib
cp pyeps.o     ../Lib
cp version.txt ../Lib
./boot.sh
