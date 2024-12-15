#!/bin/sh

sed 's/;/ /g' $1 | sed 's/end/   /g'  
