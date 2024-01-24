//
// Created by NegentropyHost on 2024/1/24.
//
#include <stdio.h>
#include "io_utils.h"

int main() {
  int a;
  a = 2;

  int *p = &a;
  *p = 2;

  int b = *p;

  // 错误用法-两边都是地址
//  &a = p; // ERROR
// 错误用法-两边都是值
//*p + 1 = 3; // ERROR

  int array[4] = {0};
  int *pa = array;
  *pa = 2;
  *++pa = 3;
  *pa++ = 4;
  *(pa + 1) = 5;
  PRINT_INT_ARRAY(array, 4);

  // left : storage
  // right: value
  return 0;
}