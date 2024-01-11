//
// Created by NegentropyHost on 2024/1/9.
//

#include <stdio.h>
/* 求和
 * @return 0
 * */
int main() {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum = sum + i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}