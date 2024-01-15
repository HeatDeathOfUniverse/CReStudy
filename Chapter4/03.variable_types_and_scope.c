//
// Created by NegentropyHost on 2024/1/15.
//
#include <stdio.h>

int global_var = 1;// file scope
void LocalStaticVar(void) {
  static int static_var = 0;
  auto int non_static_var = 0;
  printf("static_var:%d\n", static_var++);
  printf("non_static_var:%d\n", non_static_var++);
}
double Add(double a, double b);
//double Sort(int size, int array[]);
int main() { // function scope
  // 自动变量
  auto int value = 0;
  {//block scope
    auto int a = 0;
    printf("%d\n", a);
  }

  LocalStaticVar();
  LocalStaticVar();
  LocalStaticVar();
  return 0;
}