#!/bin/sh

#ecedit is a script to generate the ec-install and el-install
#scripts from the ec and el scripts.

#Edit ec script for installation
sed 's/INC=$LOCALINC/INC=$EPSINC/'  ec  >xaa.txt
sed 's/EC=$LOCALBIN/EC=$EPSBIN/'    xaa.txt >ec-install     

rm xaa.txt

#Edit el script for installation
sed 's/LIB=$LOCALLIB/LIB=$EPSLIB/'  el  >el-install
