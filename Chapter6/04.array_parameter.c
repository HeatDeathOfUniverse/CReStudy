//
// Created by NegentropyHost on 2024/1/20.
//
#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 10

int SumIntArray(int array[], int length){
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

int main(){
  int array[10] = {1,2,4,412,125,125,32,6,23,4};
  PRINT_INT(SumIntArray(array,10));

  int smaller_array[5] = {123,1251,125,2,3,};
  PRINT_INT(SumIntArray(smaller_array,5));

  int bigger_array[15] = {235,734,867,34,3,234,7,4,578,8,56,85,68,56,8};
  PRINT_INT(SumIntArray(bigger_array, 15));
  return 0;
}
