#!/bin/sh

echo "Test numeps cpu:"
python3 tnumeps.py cpu

echo "Test numeps cuda:"
export NTHREADS=1024
export NBLOCKS=1024
python3 tnumeps.py cuda

:
