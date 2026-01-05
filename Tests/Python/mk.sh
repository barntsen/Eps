#!/bin/sh

ec faxpy2d.e
ec tfaxpy2d.e
el -o tfaxpy2d tfaxpy2d.o faxpy2d.o
