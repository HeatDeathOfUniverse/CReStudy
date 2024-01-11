#include <stdio.h>
#include <limits.h>
int main() {
  short int short_int = 0;
  int i = 0;
  long int long_int = 0;
  // %d:decimal
  // %x:hex
  // %o:oct
  // %hd:short decimal
  // ld lu
  // lld llu 等同理

  // \n:new line
  // size_t
  size_t size_t = 0;
  printf("int max: %d, int min:%d\n", INT_MAX,INT_MIN);
  printf("short int: %llu\n", sizeof (short_int));
  printf("int: %llu\n", sizeof (int));
  printf("long int: %llu\n",sizeof (long_int));
  return 0;
}
