#!/bin/sh

echo "Test tarrays cpu:"
python3 tarrays.py cpu

echo "Test tarrays cuda:"
export NTHREADS=1024
export NBLOCKS=1024
python3 tarrays.py cuda

:
