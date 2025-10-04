#/bin/sh

./clean.sh

cp m-cpu.e m.e
cp runcpu.e runcpu.c
gcc -c runcpu.c
rm runcpu.c

./ec  run.e
./ec  m.e
./ec  err.e
./ec  libe.e
./ec  ptree.e
./ec  sym.e
./ec  scanpath.e
./ec  scan.e
./ec  parse.e
./ec  sem.e
./ec  code.e
./ec  main.e

gcc -L. -o ec1 main.o code.o scanpath.o scan.o sem.o parse.o sym.o ptree.o err.o m.o libe.o runcpu.o
        

cp runcpu.e runcpu.c
gcc -c runcpu.c
rm runcpu.c

ar crs libecpu.a libe.o runcpu.o  
