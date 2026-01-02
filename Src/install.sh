#!/bin/sh

cp ec ../Bin
cp el-install ../Bin/el
cp elc-install ../Bin/elc
cp libecpu.a  ../Lib
cp libecuda.a ../Lib
cp version.txt ../Lib
./boot.sh
