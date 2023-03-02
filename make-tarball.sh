#!/bin/bash
version=0.7.1
release=1
echo mkdir cpik-$version
mkdir cpik-$version
echo
echo cp  -r $version *.cpp *.h *.pro *.kdevelop cpik.vpj Doxyfile make-tarball.sh Changelog cpik-$version
cp  -r $version *.cpp *.h *.pro *.kdevelop cpik.vpj Doxyfile make-tarball.sh Changelog cpik-$version
echo
echo tar czvf cpik-$version-$release.tar.gz  cpik-$version
tar czvf cpik-$version-$release.tar.gz  cpik-$version

