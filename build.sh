#!/usr/bin/sh

# Initialise dirs
mkdir -p build/

# Compile executable
cd build/
cmake ..
make