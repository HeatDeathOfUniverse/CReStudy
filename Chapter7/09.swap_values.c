//
// Created by NegentropyHost on 2024/1/27.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "io_utils.h"

// Swap--错误写法 不会起作用，因为是函数内部的地址交换了值，外部调用没有交换
void SwapError(int a, int b) {
  int temp = a;
  a = b;
  b = a;
}
// SwapInt--正确写法--但是交换长于四个字节的变量时会出错
void SwapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Swap--通用写法，可以交换任意长度的元素
void Swap(void *first, void *second, size_t size) {
  void *temp = malloc(size);
  if (temp) {
    memcpy(temp, first, size);
    memcpy(first, second, size);
    memcpy(second, temp, size);
  } else {
    puts("malloc error!");
  }
}
// SWAP 宏定义--通用写法
#define SWAP(a, b, type) do {type temp = a; a = b; b = temp;} while(0)

// SWAP_EXT 宏定义--gcc特殊写法--typeof(获取变量类型)   msvc 中C++有类似方法 decltype()，但是C中没有因此这段宏没有上面的通用
#define SWAP_EXT(a, b){typeof(a) temp = a; a = b; b = temp;}
int main() {
  int a = -1;
  int b = 20;

  double x = 1.0;
  double y = 5.0;
  SwapError(a, b);

  SwapInt(&a, &b);
  SwapInt(&x, &y);

  Swap(&x, &y, sizeof(double));
  if (a < 0) {
    SWAP_EXT(a, b);
  } else {
    puts("no SWAP.");
  }
  SWAP(x, y, double);
//  SWAP_EXT(a, b);
  PRINT_INT(a);
  PRINT_INT(b);
  PRINT_DOUBLE(x);
  PRINT_DOUBLE(y);
  return 0;
}