#!/bin/bash
section="section4"

for file in $(find workshop/$section/ -name '*.cpp')
do
    g++ $file
    ./a.out
    echo $file
done