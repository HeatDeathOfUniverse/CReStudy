//
// Created by NegentropyHost on 2024/1/12.
//
#include "stdio.h"
int main(){
  float a_float = 3.14f; // 6 7~8 +-10-37 ~ 10-^37
  printf("size of float %d\n",sizeof(a_float));

  double a_double = 3.14;
  printf("size of double %d\n",sizeof(a_double));
  return 0;
}