#!/bin/sh

  ./nec nlibe.e
  ./nec nerr.e
  ./nec nscanpath.e
  ./nec nscan.e
  ./nec nptree.e
  ./nec nsym.e
  ./nec nparse.e
  ./nec nsem.e
  ./nec ncode.e
  ./nec nmain.e

  gcc -o nec nmain.o nparse.o nsem.o ncode.o nptree.o nsym.o nscan.o nscanpath.o nerr.o nlibe.o runcpu.o

