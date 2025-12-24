#!/usr/bin/sh

# Initialise dirs
mkdir -p build/
mkdir -p gen/

# Compile executable
cd build/
cmake ..
make