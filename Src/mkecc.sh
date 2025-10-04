#/bin/sh

#./clean.sh

cp m-cuda.e m.e
cp runcudac.e runcudac.c
nvcc -x cu -c runcudac.c
rm runcudac.d

./ecc  run.e
./ecc  m.e
./ecc  err.e
./ecc  libe.e
./ecc  ptree.e
./ecc  sym.e
./ecc  scanpath.e
./ecc  scan.e
./ecc  parse.e
./ecc  sem.e
./ecc  code.e
./ecc  main.e

nvcc -L. -o ecc1 main.o code.o scanpath.o scan.o sem.o parse.o sym.o ptree.o err.o m.o libe.o runcudac.o
        

cp runcuda.e runcuda.c
nvcc -x cu -c runcuda.c
rm runcuda.c

ar crs libecuda.a libe.o runcuda.o  
