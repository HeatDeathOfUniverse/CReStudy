//
// Created by NegentropyHost on 2024/1/13.
//
#include "stdio.h"

#define COLOR_RED 0xFF0000
#define COLOR_GREEN 0x00FF00
#define COLOR_BLUE 0x0000FF

int main(){
  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x0000FF;

  printf("kRed: %d\n", kRed);

  int *p_kRed = &kRed;
  *p_kRed = 0;
  printf("kRed: %d\n", kRed);

  // macro
  printf("COLOR_GREEN %d\n", COLOR_GREEN);
#undef COLOR_GREEN

  // 字面量 literal
  3;
  3u;
  3l;
  3.f;
  3.9;
  'cs';
  "cs";
  L'中';
  L"中国";

  // 硬编码 hard code
  //int background_color = 0xFF0000;
  int background_color = COLOR_RED;
  return 0;
}