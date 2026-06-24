#!/bin/sh

# Regression test of eps compiler
 
ec -c ../../Src/m.e
ec -c ../../Src/err.e
ec -c ../../Src/ptree.e
ec -c ../../Src
ec -c ../../Src/main.e 
ec -c ../../Src/parse.e 
ec -c ../../Src/sem.e 
ec -c ../../Src/code.e
ec -c ../../Src/scan.e 

