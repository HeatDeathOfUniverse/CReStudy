//
// Created by NegentropyHost on 2024/1/26.
//
#include <stdio.h>
#include <malloc.h>
#include "io_utils.h"
// 1
int *(f1(int, double ));

// 2
int (*f2)(int, double);

// 3
int *(*f3)(int, double);

// 4
//int (*f4)(int, double)[];

// 5
//int (*f5)[](int, double);

typedef int (*Func)(int, double);

typedef int Boolean;
typedef int *IntPtr;
typedef int IntArray[];

int Add(int left, double right){
  return (int )(left + right);
}
void InitPointer(int **ptr, int length, int default_value){
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}

int main(){
  int a;
  IntPtr *p;
  IntArray players = {1, 2,3,4,5,6,67};
  PRINT_HEX(&main);
  PRINT_HEX(&InitPointer);

  // 定义函数指针
  void (*func)(int **ptr, int length, int default_value) = &InitPointer;

  // 使用函数指针
  func(&p, 10, 0);
  // 普通函数调用方式
  InitPointer(&p, 10, 0);

  // 函数名类似数组名，函数名代表的是函数的首地址，因此也可以用解引用的方法。
  (*func)(&p, 10, 0);
  (*InitPointer)(&p, 10, 0);
  PRINT_INT_ARRAY(p, 10);
  free(p);

  // 将函数指针作为自定义类型
  Func func_1 = &Add;
  int result = func_1(1, 3.0);

  PRINT_INT(result);

  return 0;
}