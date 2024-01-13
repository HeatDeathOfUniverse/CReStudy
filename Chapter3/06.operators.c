//
// Created by NegentropyHost on 2024/1/13.
//
#include "stdio.h"

int main(){
  int first = 0;
  int second;
  int third;

  // =
  third = second = first;

  int left,right;
  left = 2;
  right = 3;
  int sum = left + right;

  int diff = left - right;
  int product = left * right;
  int quotient = left / right; // 0
  float quotient_float = left /right; // 0
  float quotient_float_correct = left *1.f / right; // 0.66666....
  int remainder = left % right; // 2

  printf("sum: %d\n", sum);
  printf("diff: %d\n", diff);
  printf("quotient: %d\n", quotient);
  printf("quotient_float: %f\n", quotient_float);
  printf("quotient_float_correct: %f\n", quotient_float_correct);
  printf("remainder: %d\n", remainder);

  //
  printf("3 > 2: %d\n", 3 > 2);
  printf("3 < 2: %d\n", 3 < 2);
  printf("3 <= 3: %d\n", 3 <= 3);
  printf("3 >= 3: %d\n", 3 >= 3);
  printf("3 == 3: %d\n", 3 == 3);
  printf("3 != 3: %d\n", 3 != 3);

  // && ||
  printf( "3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf( "3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

  //  ++ --
  int i = 1;
  printf("i: %d\n", i);
  int j = i ++;
  printf("j: %d\n", j);
  int k = ++i;
  printf("k: %d\n", k);
  return 0;
}