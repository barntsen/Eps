#!/bin/sh
# Setup sets all necessary environmental variables

#Path to eps source tree
export EPS=$HOME/Src/Eps

#Definitions to be able to use the hipcc command
export HIPCC_COMPILE_FLAGS_APPEND="--offload-arch=gfx90a $(CC --cray-print-opts=cflags)"
export HIPCC_LINK_FLAGS_APPEND=$(CC --cray-print-opts=libs)
