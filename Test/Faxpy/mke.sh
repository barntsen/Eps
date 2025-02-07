#!/bin/sh

ecc  -O faxpy2d.e
ecc  -O tfaxpy2d.e
elc -o tfaxpy2de tfaxpy2d.o faxpy2d.o

