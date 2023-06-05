#!/bin/sh

#echedit is a script to generate the ecc-install and elc-install
#scripts from the ech and elh scripts.

#Edit ech script for installation
sed 's/INC=$LOCALINC/INC=$EPSINC/'  ech  >xaa.txt
sed 's/EC=$LOCALBIN/EC=$EPSBIN/'    xaa.txt >ech-install     

rm xaa.txt

#Edit elh script for installation
sed 's/LIB=$LOCALLIB/LIB=$EPSLIB/'  elh  >elh-install
