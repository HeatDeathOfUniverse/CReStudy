//
// Created by NegentropyHost on 2024/1/25.
//
#include <stdio.h>
#include <malloc.h>
#include "io_utils.h"

// 2. 动态申请特定长度的内存--错误版
void InitPointerFalse(int *ptr, int length, int default_value){
  ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    ptr[i] = default_value;
  }
}

// 2. 动态申请特定长度的内存并初始化--正确版
void InitPointer(int **ptr, int length, int default_value){
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}

#define PLAYER_COUNT 10
int main(){
  // 1. malloc使用示例
  int * players = malloc(sizeof(int) * PLAYER_COUNT);
  // 初始化数组元素
  for (int i = 0; i < PLAYER_COUNT; ++i){
    players[i] = i;
  }
  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  free(players);
  // 2. 错误版--正确版使用
//  int a = 10;
  int * players2;
//  players2 = &a;
  InitPointer(&players2, PLAYER_COUNT, 0);
  PRINT_INT_ARRAY(players2, PLAYER_COUNT);
  free(players2);

  // 3. calloc使用
  int *players3;
  players3 = calloc(PLAYER_COUNT, sizeof(int));
  PRINT_INT_ARRAY(players3, PLAYER_COUNT);

  // 4. realloc使用
  players3 = realloc(players3, PLAYER_COUNT * sizeof(int) * 2);
  PRINT_INT_ARRAY(players3, PLAYER_COUNT * 2);
  return 0;
}