#!/bin/sh

ec  -x cuda faxpy2d.e
ec  -x cuda tfaxpy2d.e
elc -o tfaxpy2de tfaxpy2d.o faxpy2d.o

