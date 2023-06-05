#!/bin/sh

#eccedit is a script to generate the ecc-install and elc-install
#scripts from the ecc and elc scripts.

#Edit ecc script for installation
sed 's/INC=$LOCALINC/INC=$EPSINC/'  ecc  >xaa.txt
sed 's/EC=$LOCALBIN/EC=$EPSBIN/'    xaa.txt >ecc-install     

rm xaa.txt

#Edit elc script for installation
sed 's/LIB=$LOCALLIB/LIB=$EPSLIB/'  elc  >elc-install
