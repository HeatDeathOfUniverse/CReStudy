//
// Created by NegentropyHost on 2024/1/30.
//
#include <stdio.h>
#include "io_utils.h"

int main() {
  // 1. 如何定义结构体
//  struct <结构体名>{
//    <成员类型> <成员名>;
//
//    ...
//  }<结构体变量名>;

  struct Person {
    char *name;
    int age;
    char *id;
  } person;
  // 2.如何重复使用结构体?--像变量一样使用
  struct Person person_1;

  // 3.如果一个结构体只使用一次如何定义？--匿名结构体
  struct {
    char *name;
    int age;
    char *id;
  } anonymous_person;

  // 4. 如何初始化结构体？--全部初始化
  struct Person person_2 = {"Negentropy", 25, "1221"};
  // 4. --初始化特定字段
  struct Person person_3 = {.age=25, .id="12211"};

  // 5. 更改结构体变量
  PRINT_INT(person_3.age);
  person_3.age = 18;
  PRINT_INT(person_3.age);
  // 6.使用指针访问结构体变量
  struct Person *person_ptr = &person_3;
  puts(person_3.id);

  // 7.查看结构变量和类型的大小
  PRINT_INT(sizeof(struct Person));
  PRINT_INT(sizeof(person_3));

  // 8. 简化结构体使用--用typedef定义为类型
  typedef struct Person Person;
  Person person_4 = {.name="Negen", .age=22};
  PRINT_INT(person_4.age);
  // 8. --直接在定义结构体时就定义为类型
  typedef struct PersonType {
    char *name;
    int age;
    char *id;
  } PersonType;// 这里的PersonType不再是变量，而是类型名
  // 9. 结构体嵌套
  typedef struct Company {
    char *name;
    char *id;
    char *location;
  } Company;

  typedef struct PersonTypeNest {
    char *name;
    int age;
    char *id;
    // 普通结构体嵌套--指针版
    Company *company;
    // 普通结构体嵌套--完全体
    Company company2;
    // 匿名结构体嵌套
    struct {
      int extra;
      char *extra_str;
    } extra_value;
    // 自己套自己
    struct PersonTypeNest *person_type_nest;
  } PersonTypeNest;

  // 嵌套类型初始化
  // 指针先在外面初始化
  Company company_1 = {.name="imooc", .id="51235"};
  PersonTypeNest person_type_nest = {.name="Neg", .age=25, .id="1241", .extra_value.extra=12,
                                     .company = &company_1, // 指针类型传入地址
                                     .company2 = {.id = "123112",.name="imooc2"} // 完全体直接初始化
  };
//  person_type_nest.company->name;
  return 0;
}