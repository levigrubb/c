#include <stdio.h>

int main() {
  int x = 42;   // This is a standard value containing 42
  int *y = &x;  // *y is a dereference (*) to the value of x (&)
  printf("int x: %d\n", x);
  printf("pnt x: %p\n", x);
  printf("int *y: %d\n", *y);
  printf("int &y: %x\n", &y);
  return 0;
}

