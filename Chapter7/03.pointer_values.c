//
// Created by NegentropyHost on 2024/1/23.
//
#include <stdio.h>
#include "io_utils.h"

int *pointer_at_large;
void DangerousPointer(){
  int a = 3;
  pointer_at_large = &a;

  // 改进
  pointer_at_large = NULL;
}

int main(){
  // 1. 使用硬编码初始化
  int *p = (int *)0x5ffe18;
  PRINT_INT(p);
  PRINT_HEX(&p);
  PRINT_INT(*p);

  // 2. 使用空指针
  int *np = NULL;
  //  np = 3; //ERROR
  if(np){

  }

  // 3. 野指针
  DangerousPointer();
  if(pointer_at_large){
    PRINT_INT(*pointer_at_large);
  }

  return 0;
}