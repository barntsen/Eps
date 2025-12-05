#!/bin/sh

cp ../../Src/ec .
cp ../../Src/m.e .
cp ../../Src/run.e .
cp ../../Src/scan.e .
cp ../../Src/err.e .
cp ../../Src/scanpath.e .
cp ../../Src/libe.e .
cp ../../Src/runcpu.e runcpu.c

./ec m.e
./ec run.e
./ec err.e
./ec libe.e
./ec scanpath.e
./ec scan.e
./ec tscan.e

gcc -c runcpu.c
gcc -o tscan tscan.o scan.o err.o scanpath.o libe.o runcpu.o 
