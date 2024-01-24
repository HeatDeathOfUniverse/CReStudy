//
// Created by NegentropyHost on 2024/1/23.
//
#include <stdio.h>
#include "io_utils.h"

int main(){
  // 1. 指针移动测试
  {
    int a = 10;
    int *p = &a;

    PRINT_HEX(p);
    PRINT_HEX(p + 1);
    PRINT_INT(sizeof(int));
  }
  {
    double a = 10.0;
    double *p = &a;

    PRINT_HEX(p);
    PRINT_HEX(p + 1);
    PRINT_INT(sizeof(double));
  }
  {
    double a = 10.0;
    double *p = &a;
    double **pp = &p;

    PRINT_HEX(pp);
    PRINT_HEX(pp + 1);
    PRINT_INT(sizeof(double *));
  }

  // 2. 数组与指针
  int array[] = {0,1,2,3,4};
  int *p = array;
  PRINT_INT(array[3]);
  PRINT_INT(*(p + 3));
  PRINT_INT(*(array + 3));
  PRINT_INT(p[3]);
  PRINT_INT(3[array]);

  int *const array_p = array;
  // 3. 指针比大小
  PRINT_BOOL(p + 3 > p + 2);

  int array2 = {20,2};
  int *p2 = &array2;

  PRINT_BOOL(p2 > p); //meaningless
  return 0;
}