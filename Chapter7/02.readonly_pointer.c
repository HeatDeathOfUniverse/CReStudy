//
// Created by NegentropyHost on 2024/1/22.
//
#include <stdio.h>
#include "io_utils.h"

int main() {
  int a;
  // 1. 定义指针
  int *p = &a;
  // 2. 对比指针与变量的地址
  PRINT_HEX(&a);
  PRINT_HEX(p);
  // 3. 打印指针大小
  PRINT_INT(sizeof(int *));
  // 4. 对比变量值与指针取值

  PRINT_INT(*p);
  PRINT_INT(a);
  // 5. 指针的指针介绍
  int **pp = &p;

  *p = 20;
  // 只读指针变量
  int *const cp = &a;
  int b;
//  cp = &b ;//ERROR

// 只读变量的指针
  int const *pc = &a;
//*pc = 30 //ERROR 但是可以直接改a

// 只读变量的只读指针
  int const *const ccp = &a;
//ccp = &b//ERROR
//*ccp = 30;//ERROR
  return 0;
}