#!/bin/sh

ec -g scan.e
ec -g scanpath.e
ec -g ptree.e
ec -g err.e
ec -g sym.e
ec -g test-sym.e

el -o test-sym test-sym.o sym.o err.o scan.o ptree.o scanpath.o
