//
// Created by NegentropyHost on 2024/1/14.
//
#include <stdio.h>
int main(){
  /*
   * while (<condition<){
   *    statement
   * }
   */

  /*
   * do {
   *   statement
   * } while (<condition>);
   */
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left;
  int right;
  char operator;

  char command;

  do{

    printf("Please input expression:\n");
    scanf("%d %c %d", &left, &operator, &right);
    int result;
    // switch
    switch (operator) {
      case ADD:
        result = left + right;
        break;
      case SUB:
        result = left - right;
        break;
      case MULTIPLY:
        result = left * right;
        break;
      case DIVIDE:
        result = left / right;
        break;
      default:
        printf("Unsupported operation: %c\n", operator);
        return 1;

    }
    printf("Result:%d\n", result);
    printf("Again? Type 'q' for quit:\n");
    getchar();// 用于获取输入表达式时最后确认的换行（回车）
    command = getchar();
  }while(command != 'q');
  return 0;
}
