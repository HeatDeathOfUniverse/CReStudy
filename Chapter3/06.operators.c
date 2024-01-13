//
// Created by NegentropyHost on 2024/1/13.
//
#include "stdio.h"

int main() {
  int first = 0;
  int second;
  int third;

  // =
  third = second = first;

  int left, right;
  left = 2;
  right = 3;
  int sum = left + right;

  int diff = left - right;
  int product = left * right;
  int quotient = left / right; // 0
  float quotient_float = left / right; // 0
  float quotient_float_correct = left * 1.f / right; // 0.66666....
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
  printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

  //  ++ --
  int i = 1;
  printf("i: %d\n", i);
  int j = i++;
  printf("j: %d\n", j);
  int k = ++i;
  printf("k: %d\n", k);


  // bit operators & | ^异或 ~取反
#define FLAG_VISIBLE 0x1
#define FLAG_TRANSPARENT 0x2
#define FLAG_RESIZABLE 0x4
  int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT; //0110
  int resizable = window_flags & FLAG_RESIZABLE; //0100
  int visible = window_flags & FLAG_VISIBLE; //0x0000

  // << >>
#define FLAG_VISIBLE 1 << 0 // 0x1
#define FLAG_TRANSPARENT 1 << 1 // 0x2
#define FLAG_RESIZABLE 1 << 2 //0x4

  int x = 1000;
  x * 2;
  x << 1;
  printf( "x * 2 == x << 1: %d\n", x * 2 == x << 1);
  x / 2;
  x >> 1;
  printf("x / 2 == x >> 2: %d\n", x / 2 == x >> 1);

  //
  printf( "x *= 2: %d\n", x *= 2);
  printf( "x /= 2: %d\n", x /= 2);
  printf( "x += 2: %d\n", x += 2);
  printf( "x -= 2: %d\n", x -= 2);


  printf( "x >>= 2: %d\n", x >>= 2);
  printf( "x <<= 2: %d\n", x <<= 2);

  printf( "x %%= 2: %d\n", x %= 2);

  // ,
  int y ;
  x=2;
  y = x = x * 2, x = x + 3;
  printf( "y: %d\n", y);
  printf( "x: %d\n", x);

  return 0;
}