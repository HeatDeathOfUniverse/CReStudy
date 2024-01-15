//
// Created by NegentropyHost on 2024/1/15.
//
#include <stdio.h>
double F(double x) {
  return x * x + x + 1;
}
double G(double x, double y, double z) {
  return x * x + y * y + z * z;
}
int main(void) {
  /*
   * <return type> <name> (<parameters>){
   *     statement
   *   return <return value>
   * }
   */
  double result_f = F(3);
  double result_g = G(1, 2, 3);
  printf("result_f:%F\n", result_f);
  printf("result_g:%F\n", result_g);
  return 0;
}