#!/bin/sh

cp ../../Src/ec .
cp ../../Src/scan.e .
cp ../../Src/err.e .
cp ../../Src/scanpath.e .
cp ../../Src/libe.e .
./ec err.e
./ec xscanpath.e
./ec xscan.e
./ec main.e
./ec xlibe.e
gcc -o scantest main.o scan.o err.o scanpath.o 
