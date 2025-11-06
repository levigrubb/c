#include <stdio.h>

int main() {
  int x = 42;   // This is a standard value containing 42
  int *y = &x;  // *y is a dereference (*) to the value of x (&)
  printf("int x:\t%d\n", x);
  printf("pnt x:\t%p\n", (void*)&x);
  printf("int *y:\t%d\n", *y);
  printf("pnt &y:\t%p\n", (void*)&y);
  printf("pnt y:\t%p\n", (void*)y);
  return 0;
}

