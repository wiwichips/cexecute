#!/bin/bash
fn=/tmp/$$C.c && tail -n +3 "$0" > $fn && gcc -Wall $fn && ./a.out $@ && rm a.out $fn && exit
#include <stdio.h>

int main (int argc, char *argv[]) { 
  printf("Printing command line arguments example\n");
  if (argc == 1) {
    printf("Please type a command line argument\n");
    return 0;
  }
  for (int i = 1; i < argc; i++) {
    printf("~\tArgument %d = %s\n", i, argv[i]);
  }
  return 0;
}
