//
// Created by NegentropyHost on 2024/1/18.
//
#include <stdio.h>
/*
 * 1. #ifdef 如果定义了...
 * 2. #ifndef 如果没定义...
 * 3. #if  如果
 *
 * #endif
 *
 * define(MACRO) == #ifdef MACRO
 */
#ifdef __cplusplus
extern "C"{
#endif
int A(int left, int right);
#ifdef __cplusplus
};
#endif
void dump(char *msg){
#ifdef DEBUG
  puts(msg);
#endif
}

int main(){
  dump("main started!");
  puts("Hello World!");
  dump("main ended!!");
  return 0;
}