//
// Created by NegentropyHost on 2024/1/20.
//
#include <stdio.h>
#include "include/io_utils.h"

#define ARRAY_SIZE 10
int global_array[ARRAY_SIZE];
int main(){
  int array[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; ++i) {
//    array[i] = i;
//    PRINT_INT(array[i]);
    PRINT_HEX(array[i]);
  }
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(global_array[i]);
  }

  int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array_2[i]);
  }

  double array_double[5] = {0.1,2.3};
  for (int i = 0; i < 5; ++i) {
    PRINT_DOUBLE(array_double[i]);
  }

  char array_char[5] ={[2] = 'o','l','l'};
  for (int i = 0; i < 5; ++i) {
    PRINT_CHAR(array_char[i]);
  }
  return 0;
}