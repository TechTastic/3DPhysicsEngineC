#!/bin/bash

mkdir -p "build"
gcc src/main.c src/vectors.c -o build/main.exe -lm