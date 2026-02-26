#!/bin/sh
# Remove intermediate files
 
rm -rf *.so *.cpp *.c *.o *.m __pycache__
rm -f tsaxpycpu tsaxpycuda tsaxpyomp
rm -rf saxpy.py
