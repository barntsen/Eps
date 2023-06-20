#!/bin/sh

#ecedit is a script to generate the ec-install and el-install
#scripts from the ec and el scripts.

#Edit ecc script for installation
sed 's/INC=$LOCALINC/INC=$EPSINC/'  ecc  >xaa.txt
sed 's/EC=$LOCALBIN/EC=$EPSBIN/'    xaa.txt >ecc-install     
chmod +x ecc-install

rm xaa.txt

#Edit el script for installation
sed 's/LIB=$LOCALLIB/LIB=$EPSLIB/'  elc  >elc-install
chmod +x elc-install
