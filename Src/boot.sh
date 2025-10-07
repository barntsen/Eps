#!/bin/sh

# Generate c-code for boostrapping of the compiler

cp runcpu.e runcpu.c 
cp runcuda.e runcuda.cpp 

#Destination for bootstrap code
dest=../Src-c/$ARCH
opt="-c -x cpu "
#Generate c-code
ec $opt main.e
ec $opt parse.e
ec $opt scan.e
ec $opt scanpath.e
ec $opt sem.e
ec $opt sym.e
ec $opt ptree.e
ec $opt libe.e
ec $opt err.e
ec $opt code.e

#Copy c-code to bootstrap directory
cp main.c $dest
cp parse.c $dest
cp scan.c  $dest
cp scanpath.c  $dest
cp sem.c   $dest
cp sym.c   $dest
cp ptree.c $dest
cp libe.c  $dest
cp err.c   $dest
cp code.c  $dest
cp runcpu.c $dest
cp runcuda.cpp $dest

