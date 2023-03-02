#!/bin/bash

version="0.7.4"
cpik="/usr/bin/cpik-"$version

function compile {
echo "Compiling .. $cpik $2 $1.c"
if  $cpik $2 $1.c ; then
  echo "  $1.c was succesfully compiled" 
  if [ $3 ] ; then
     mv $1.slb ../lib/$3.slb
     echo "  $3.slb was moved to lib directory"
  else
    mv $1.slb ../lib
    echo "  $1.slb was written to lib directory"
  fi
else
  echo "  *** $1.c was compiled with error(s), no slb file generated."
fi
rm $1.c.c
}

compile math 

compile stdio "-DINT32_IO -DFLOAT_IO" stdio-full
compile stdio "-DFLOAT_IO" stdio-float
compile stdio "-DINT32_IO" stdio-int32
compile stdio

compile stdlib


