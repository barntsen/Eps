#!/bin/sh

# Generate c-code for boostrapping of the compiler

#Uncomment for cpu
#EC=ec
#ARCH=cpu

#Uncomment for cuda 
EC=ecc
ARCH=cuda

#Uncomment for hip
#EC=ech
#ARCH=hip

#Copy machine depenent header file
cp m-$ARCH.i m.i

#Copy the correct runtime library file 
cp run$ARCH.e run$ARCH.c 

#Destination for bootstrap code
dest=../Src-c/$ARCH

#Generate c-code
$EC -c main.e
$EC -c parse.e
$EC -c scan.e
$EC -c scanpath.e
$EC -c sem.e
$EC -c sym.e
$EC -c ptree.e
$EC -c libe.e
$EC -c err.e
$EC -c code.e


#Copy c-code to bootstrap directory
cp main.cpp $dest
cp parse.cpp $dest
cp scan.cpp   $dest
cp scanpath.cpp   $dest
cp sem.cpp   $dest
cp sym.cpp   $dest
cp ptree.cpp $dest
cp libe.cpp  $dest
cp err.cpp   $dest
cp code.cpp  $dest
cp run$ARCH.cpp $dest

