#!/bin/sh

ec -z faxpy2d.e

el -shared -o pylib.so faxpy2d.o
