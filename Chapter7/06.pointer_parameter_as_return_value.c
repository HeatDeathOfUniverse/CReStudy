//
// Created by NegentropyHost on 2024/1/24.
//
#include <stdio.h>
#include "io_utils.h"

int SumIntArray(int array[], int length){
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}
void SumIntArray2(int array[], int length, int *sum){
  *sum = 0;
  for (int i = 0; i < length; ++i) {
    *sum += array[i];
  }
}
__int128 TestBigValue(){
  return 0;
}

typedef struct {
  char *name;
  int gender;
  int age;
  char *school_name;
}Student;
Student TestStruct(){
  Student student = {"Negentropy",7,25,"CUIT"};
  return student;
}
int main(){
  // 1. 值传递在寄存器中的调用情况
  int array[] = {0,1,2,3,4};
  int sum = SumIntArray(array, 5);
  int *sum2;
  SumIntArray2(array, 5, sum2);

  PRINT_INT(*sum2);
  // 2. 寄存器小知识--超出寄存器大小的变量，会用多个寄存器存储
  __int128 big_value = TestBigValue();

  // 3. 结构体的传值
  Student student = TestStruct();
  return 0;
}
