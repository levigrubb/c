#include <stdio.h>

// Messing with pointers to ensure I understand them properly

int main() {
  int num = 3;
  int *pnt = &num;

  printf("numv: %d\n", num);
  printf("nump: %p\n", &num);
  printf("pnt1: %d\n", pnt);
  printf("pnt2: %p\n", pnt);
  printf("pntv: %d\n", *pnt);
  printf("pntp: %p\n", &pnt);

  *pnt = 5;
  printf("New value: %d\n", *pnt);
  printf("New address: %p\n", &num);
  return 0;
}

