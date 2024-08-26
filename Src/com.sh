#!/bin/sh

sed 's/\/\//#/g' $1 > xaa.e
sed 's/\/\*/#/g' xaa.e > xab.e
sed 's/\*\// /' xab.e > $2
