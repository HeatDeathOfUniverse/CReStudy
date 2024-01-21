//
// Created by NegentropyHost on 2024/1/21.
//
#include <stdio.h>
#include "io_utils.h"
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50
// 2. 交换传入数组的两个下标对应的元素
void SwapElements(int array[], int first, int second){
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}
// 1.1 打乱传入的数组-基础版
void ShuffleArray(int array[], int length){
  // 获取随机数
  srand(time(NULL));
  for (int i = 0; i < length; ++i) {
    int random_number = rand() % length;
    SwapElements(array, array[i], array[random_number]);
  }
}

// 1.2 打乱传入的数组-效率优化版
void ShuffleArrayImproved(int array[], int length){
  srand(time(NULL));
  for (int i = length-1; i > 0; --i) {
    int random_number = rand() % i; // 这一步优化的好处是，不会交换已经交换过的数
    SwapElements(array, array[i], array[random_number]);
  }
}

int main(){
  int players[PLAYER_COUNT];

  for (int i = 0; i < PLAYER_COUNT; ++i) {
    players[i] = i;
  }

  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  ShuffleArrayImproved(players, PLAYER_COUNT);
  PRINT_INT_ARRAY(players, PLAYER_COUNT);

  return 0;
}
