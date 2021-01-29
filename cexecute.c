#!/bin/bash
fn=/tmp/$$C.c && tail -n +3 "$0" > $fn && gcc -Wall $fn && ./a.out $@ && rm a.out $fn && exit
// Copy the contents of this file to the top of the c file you wish to execute
