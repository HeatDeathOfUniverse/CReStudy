//
// Created by NegentropyHost on 2024/1/20.
//
#include <stdio.h>
#include "io_utils.h"
int main(){
  char string[] = "Hello World";

  for (int i = 0; i < 11; ++i) {
    PRINT_INT(string[i]);
  }

  // short %hd
  // NULL \0
  PRINTLNF("%s", string);

  char string_zh[] = "��ã��й�";
  wchar_t ws[] = L"��ã��й�";

  PRINTLNF("%s", string_zh);

  return 0;
}