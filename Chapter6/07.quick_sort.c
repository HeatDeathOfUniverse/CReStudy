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
// 3.找切分点逻辑
int Partition(int array[], int low, int high){
  // i 和partition都从数组头开始
  int partition = low;
  // i 从数组头遍历到数组尾
  for (int i = low; i < high; ++i) {
    // 一旦这个元素比尾端元素小
    if(array[i] < array[high]){
      // 交换i个partition的位置，并且让partition右移一位
      SwapElements(array, i, partition++);
    }
  }
  // 遍历结束将数组尾移动到partition
  SwapElements(array, partition, high);
  return partition;
}

// 4.快排流程控制
void QuickSort(int array[], int low, int high){
  // 退出条件 数组最左端不能超过最右端，超过或者相等都意味着这个数组不能再继续切分了
  if(low >= high) return;
  // 第一次切分，获取切分点
  int partition = Partition(array, low, high);
  // 分别对切分点左侧和右侧继续切分。
  QuickSort(array, low, partition-1);
  QuickSort(array, partition+1, high);
}
int main(){
  int players[PLAYER_COUNT];

  for (int i = 0; i < PLAYER_COUNT; ++i) {
    players[i] = i;
  }

  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  ShuffleArrayImproved(players, PLAYER_COUNT);
  PRINT_INT_ARRAY(players, PLAYER_COUNT);

  QuickSort(players, 0, PLAYER_COUNT-1);
  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  return 0;
}
