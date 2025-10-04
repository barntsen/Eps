#!/bin/sh
export NBLOCKS=2048
export NTHREADS=256

#nsys nvprof ./tfaxpy2de stats > time-eps.txt
./tfaxpy2de >loge.txt  


#nsys nvprof ./tfaxpy2df > time-nvf.txt
#./tfaxpy2df >logf.txt
