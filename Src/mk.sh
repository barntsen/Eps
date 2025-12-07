#/bin/sh

# Compiles the compiler. The new compiler is named ec1.

./clean.sh

cp runcpu.e runcpu.c
gcc -c runcpu.c
rm runcpu.c

opt="-x cpu -g"

./ec $opt run.e
./ec $opt m.e
./ec $opt err.e
./ec $opt libe.e
./ec $opt ptree.e
./ec $opt sym.e
./ec $opt scanpath.e
./ec $opt scan.e
./ec $opt parse.e
./ec $opt sem.e
./ec $opt code.e
./ec $opt main.e

gcc -L. -o ec1 main.o code.o scanpath.o scan.o sem.o parse.o sym.o ptree.o err.o m.o libe.o runcpu.o
ar crs libecpu.a libe.o runcpu.o  

ec -x cuda libe.e
cp runcuda.e runcuda.cpp
nvcc -c -x cu runcuda.cpp
ar crs libecuda.a libe.o runcuda.o  

