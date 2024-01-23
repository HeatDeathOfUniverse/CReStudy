#include <stdio.h>
#include "io_utils.h"

int main() {
  int a;
  scanf("%d", &a);
  // 1. 定义指针
  int *p = &a;
  // 2. 对比指针与变量的地址
  PRINT_HEX(&a);
  PRINT_HEX(p);
  // 3. 打印指针大小
  PRINT_INT(sizeof(int *));
  // 4. 对比变量值与指针取值

  PRINT_INT(*p);
  PRINT_INT(a);
  // 5. 指针的指针介绍
  int **pp = &p;

  return 0;
}
