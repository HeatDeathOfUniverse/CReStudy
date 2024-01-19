//
// Created by NegentropyHost on 2024/1/19.
//
#include <stdio.h>
#include <stdarg.h>
// 1. 使用函数实现printlnf
void Printlnf(const char *format, ...){
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

// 2. 宏实现printlnf
#define PRINTLNF(format, ...) printf(format"\n", __VA_ARGS__)

int main(){
  int value = 2;
  Printlnf("Hello World! %d", value);
  PRINTLNF("HELLO WORLD! %d", value);
  return 0;
}