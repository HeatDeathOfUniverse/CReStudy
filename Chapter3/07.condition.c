//
// Created by NegentropyHost on 2024/1/13.
//
#include <stdio.h>
#include <stdbool.h>
int main() {
  // Bool
  // true:1. false:0
  // _Bool, bool
  _Bool is_enabled = true;
  is_enabled = 10;
  printf("is_enable: %d\n", is_enabled);
  bool is_visible = false;

  //if else
  /*
   * if (<condition>) {
   *
   * }else if (<condition2>){
   *
   * }
   * else{
   *
   * }
   */
#define MAGIC_NUMBER 10
  int user_input;
  printf("Please input a number: \n");
  scanf_s("%d", &user_input);
  if (user_input > MAGIC_NUMBER) {
    printf("Your number is bigger!");
  } else if (user_input < MAGIC_NUMBER) {
    printf("Your number is smaller");
  } else {
    printf("Yes! You got it!\n");
  }
  if (is_enabled)
    if (is_visible)printf("is_visible");
    else printf("is_disable? is_invisible\n");// 不用大括号，这一步可读性较差


  //use bracket！
  if (is_enabled) {
      if (is_visible){
        printf("is_visible");
      }else{
        printf("is_invisible\n");
      }
  }else{
    printf("is_disable");
  }

  // ? : <expr> ? <expr1> : <expr2>
  // expr == true :expr1
  // expr == false : expr2
  int is_open = is_enabled && is_visible ? 1 : 0;
  printf("is open: %d\n",is_open);

  // switch
  /*
   * switch (<condition>){
   *  case 0:{
   *  ···
   *  }
   *  break;
   *  case 1:{
   *  ···
   *  }
   *  break;
   *  ···
   *  ···
   *  default{
   *  ···
   *  }
   * }
   */
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left;
  int right;
  char operator;
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
  printf("Result:%d", result);
  return 0;
}