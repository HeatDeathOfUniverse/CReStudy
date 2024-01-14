//
// Created by NegentropyHost on 2024/1/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  // 1. random number
  // [0,0x7FFF]
  srand(time(NULL));
  int magic_number = rand();
  // 2.loop
  while (1) {
    int user_input;
    printf("Please input a number: \n");
    scanf("%d", &user_input);
    if (user_input > magic_number) {
      printf("Your number is bigger!\n");
    } else if (user_input < magic_number) {
      printf("Your number is smaller!\n");
    } else {
      printf("Yes you got it!\n");
      break;
    }
  }
  return 0;
}