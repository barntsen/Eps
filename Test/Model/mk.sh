#!/bin/sh


ec -O tmodel.e
#gcc -O3 -c -ffast-math tmodel.c
ec -O model.e
#gcc -O3 -c -ffast-math model.c
ec -O ac2d.e
ec -O src.e
ec -O rec.e
ec -O diff.e
el -o tmodel  tmodel.o model.o ac2d.o rec.o src.o diff.o






