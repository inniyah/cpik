#!/bin/bash
version=3.1
mkdir inc2h-$version
cp bf.cpp bf.h inc2h-v3.cpp processor.cpp processor.h make-tarball.sh  build-inc2h.sh  inc2h-$version
tar czvf inc2h-$version.tar.gz    inc2h-$version
echo
echo Archive inc2h-$version.tar.gz created.
echo


