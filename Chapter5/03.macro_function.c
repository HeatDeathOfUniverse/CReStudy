//
// Created by NegentropyHost on 2024/1/18.
//
#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'a' && (ch) <= 'f') || \
((ch) >= 'A' && (ch) <= 'F')
int Max(int a, int b) {
  return a > b ? a : b;
}
int main() {

  int max = MAX(1, 4);
  int max2 = MAX(1, MAX(3, 4));

  int max3 = Max(1, Max(3,4));

  // 使用宏可能造成错误调用比如下面这段代码替换后为：(max++) > (5) ? (max++) : (5)，其中max++调用了两次
  int max4 = MAX(max++, 5);
  printf("Max: %d\n", max);
  printf("max2: %d\n", max2);
  printf("max3: %d\n", max3);

  printf("is A a hex character? %d\n", IS_HEX_CHARACTER('A'));
  return 0;
}