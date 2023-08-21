#!/bin/bash

# Modify the output of ls and md5sum
echo "gm" > ls
echo "d52e6c18e0723f5b025a75dea19ef365  gm" > md5sum

# Run the Giga Millions program with modified output
./gm 9 8 10 24 75 9
