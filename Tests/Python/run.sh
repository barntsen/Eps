#!/bin/sh

echo "Testing numeps:"
#python3 tnumeps.py cpu

export NTHREADS=1024
export NBLOCKS=1024
python3 tnumeps.py cuda
#python3 tarrays.py cuda
