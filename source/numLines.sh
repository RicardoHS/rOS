#!/bin/bash

cat *.s *.S | awk ' NF > 0 {cont = cont + 1} END {print "numero de lineas escritas en ensamblador: "; print cont} ';
cat *.h *.c | awk ' NF > 0 {cont = cont + 1} END {print "numero de lineas escritas en C: "; print cont} '
