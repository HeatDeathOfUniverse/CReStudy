//
// Created by NegentropyHost on 2024/1/21.
//
#include <stdio.h>
#include "io_utils.h"

// 4.1 将二维数组作为函数参数传递-MinGW
void SumIntArrays(int rows, int columns, int array[][columns], int result[]){
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}
// 4.2 MSVC实现
void SumIntArraysMsvc(int rows, int columns, const int* array, int* result) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i * columns + j];
    }
  }
}
int main(){
  // 1. 定义二维数组
  int vehicle_limits[5][2];

  // 2. 遍历二维数组
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      vehicle_limits[i][j] = i + j;
    }
  }
  // 3.1初始化二维数组-形式1
  int vehicle_limits_init1[5][2] = {
      {0,1},
      {1,2},
      {2,3},
      {3,4},
      {4,5}
  };

  // 3.2初始化二维数组-形式2
  int vehicle_limits_init2[5][2] = { 1,2,3,4,5,6,7,8,9,0};

  // 3.3初始化二维数组-形式3
  int vehicle_limits_init3[5][2] = { [3][0] = 7,8,9,0};

  // 4.1 测试二维数组求和函数
  // 初始化五个人的高考分数
  int score[5][4] = {
      {135,135,138,277},
      {105,134,108,265},
      {113,107,145,232},
      {123,99,140,227},
      {98,118,127,242}
  };
  // 求每个人的总分
  int result[5] = {0};
  SumIntArrays(5, 4, score, result);
  PRINT_INT_ARRAY(result, 5);

  int result_msvc[5] = {0};
  SumIntArraysMsvc(5, 4, score, result_msvc);
  PRINT_INT_ARRAY(result_msvc, 5);
  return 0;
}