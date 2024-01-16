//
// Created by NegentropyHost on 2024/1/16.
//
#include <stdio.h>
unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * Factorial(n-1);
  }
}

unsigned int FactorialByIteration(unsigned int n){
  int result = 1;
  for (int i = n; i < n; --i) {
    result *= i;
  }
  return result;
}

unsigned int Fibonacci(unsigned int n){
  if(n == 1 || n == 0){
    return n;
  }else{
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

unsigned int FibonacciByIteration(unsigned int n){
  if(n == 1 || n == 0){
    return n;
  }
  int last = 0;
  int current = 1;
  for (int i = 0; i <= n - 2; ++i) {
    int temp = current;
    current += last;
    last = temp;
  }
  return current;
}
int main() {

  printf("Factorial: %d\n", Factorial(5));
  printf("Fibonacci: %d\n", Fibonacci(2));
  printf("FibonacciByIt: %d\n", FibonacciByIteration(2));
  printf("Fibonacci: %d\n", Fibonacci(5));
  printf("Fibonacci: %d\n", Fibonacci(10));
  return 0;
}