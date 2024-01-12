//
// Created by NegentropyHost on 2024/1/12.
//
#include "stdio.h"

int main(){
  // <type> <name>
  int value ;

  int value_init = 3;

  value = 4;
  value_init = 5;

  printf("value:%d\n", value);

  value_init = value;

  printf("size of value: %d\n", sizeof(value));

  printf("address of value:%#x\n", &value);

  return 0;
}