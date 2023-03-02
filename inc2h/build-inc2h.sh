#!/bin/bash
version=3.1
echo g++ -o inc2hV$version  inc2h-v3.cpp processor.cpp bf.cpp
g++ -o inc2hV$version  inc2h-v3.cpp processor.cpp bf.cpp
