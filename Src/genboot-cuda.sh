#!/bin/sh

# Generate c-code for boostrapping of the compiler

#Uncomment for cpu
#EC=./ec
#ARCH=cpu

#Uncomment for cuda 
EC=./ecc
ARCH=cuda

#Uncomment for hip
#EC=./ech
#ARCH=hip

#Copy machine depenent file
cp m-$ARCH.e m.e

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
$EC -c m.e


#Copy c-code to bootstrap directory
cp main.c $dest
cp parse.c $dest
cp scan.c   $dest
cp scanpath.c   $dest
cp sem.c   $dest
cp sym.c   $dest
cp ptree.c $dest
cp libe.c  $dest
cp err.c   $dest
cp code.c  $dest
c=c
cp run$ARCH$c.c $dest
cp run$ARCH.c $dest/run$ARCH.cu

