//
// Created by NegentropyHost on 2024/1/19.
//
#include <stdio.h>
#include <stdarg.h>
// 1. 使用函数实现printlnf
void Printlnf(const char *format, ...){
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}
/*
 * 元数据宏
 * __FILE__
 * __LINE__
 * __FUNCTION__
 */
// 2. 宏实现printlnf
//#define PRINTLNF(format, ...) printf(format"\n", __VA_ARGS__)// 2. 宏实现printlnf
// 2.1 新增可以不输入变长参数 +两个##即可
//#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
//2.2 新增打印文件路径以及行号和方法名
#define PRINTLNF(format, ...) printf("("__FILE__":%d) %s :"  format"\n", __LINE__, __FUNCTION__ ,##__VA_ARGS__)

// 3. 新增传入参数和表达式打印其值
#define PRINTLNF_INT(value) printf(#value " %d\n", value);
int main(){
  int value = 2;
  Printlnf("Hello World! %d", value);
  PRINTLNF("HELLO WORLD! %d", value);

  // 2.1 测试不输出变长参数
  PRINTLNF("HELLO WORLD!!!");

  //3 测试打印值和表达式
  PRINTLNF_INT(value);
  PRINTLNF_INT(4 + 5);
  return 0;
}