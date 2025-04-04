#!/bin/bash

mkdir -p "build"
gcc src/main.c libs/mathc/mathc.c -o build/main.exe -lm