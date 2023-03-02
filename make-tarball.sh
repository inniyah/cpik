#!/bin/bash
version=0.7.2
release=4
echo mkdir cpik-$version-$release
mkdir cpik-$version-$release
echo
echo cp  -r $version *.cpp *.h *.pro cpik.vpj Doxyfile make-tarball.sh Changelog cpik-$version-$release
cp  -r $version *.cpp *.h *.pro cpik.vpj Doxyfile make-tarball.sh Changelog cpik-$version-$release
echo
echo tar czvf cpik-$version-$release.tar.gz  cpik-$version-$release
tar czvf cpik-$version-$release.tar.gz  cpik-$version-$release

