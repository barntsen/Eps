#/bin/sh

# Compiles the compiler. The new compiler is named ec1.

./clean.sh

cp runcpu.e runcpu.c
gcc -c runcpu.c
rm runcpu.c

opt="-x cpu "

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
./ec $opt pyeps.e

gcc -L. -o ec1 main.o code.o scanpath.o scan.o sem.o parse.o sym.o ptree.o err.o m.o libe.o runcpu.o

mv libe.o libecpu.o
ec -x cuda libe.e
mv libe.o libecuda.o
cp pyepsccpu.e pyepsccpu.c
gcc -c -fPIC pyepsccpu.c
cp pyeps.e pyepscuda.e
ec -x cuda pyepscuda.e
cp runcuda.e runcuda.cpp
nvcc --compiler-options -fPIC -c -x cu runcuda.cpp
cp pyepsccuda.e pyepsccuda.cpp
nvcc --compiler-options -fPIC -c -x cu pyepsccuda.cpp
rm -rf *.c *.cpp
