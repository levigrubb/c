#include <stdio.h>
#define TRUE 0
#define FALSE 1

int print_big(int x);

int print_big(int x) {
  if (x > 10) {
    printf("%d is big\n", x);
    return TRUE;
  } else {
    printf("%d is less than 10\n", x);
    return FALSE;
  }
}

int main() {
  int result = print_big(10);
  printf("Result: %d\n", result);
  return result;
}

