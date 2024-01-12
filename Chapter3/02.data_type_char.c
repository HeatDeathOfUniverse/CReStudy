//
// Created by NegentropyHost on 2024/1/11.
//

#include "stdio.h"

int main(){
  char a= 'a'; //97
  char char_1 = '1'; //49
  char char_0 = '0'; //49

  char i = 61; // \0, NULL



  // 字面量 literal
  // \n : newline
  // \b : backspace
  // \r : return
  // \t : table
  // \' : ' 字面量
  // \" : " 字面量
  char newline = '\n';
  char char_1_escape_oct = '\61';
  char char_1_escape_hex = '\x31';


  printf("char a: %d\n", a);
  printf("char_1 a: %d\n", char_1);
  printf("char_0 a: %d\n", char_0);

  printf("char 1: %c\n",char_1);
  printf("char 1: %c\n",char_1_escape_hex);
  printf("char 1: %c\xa",char_1_escape_oct);
  printf("char 'i'  %c\n", i);

  // Unicode CJK
  // C95
  wchar_t zhong = L'中';
  wchar_t zhong_hex = L'\u4e2d';
  char *string = "中";
  printf( "中 ：%d\12", zhong);
  printf( "中 ：%d\12", zhong_hex);
  return 0;
}