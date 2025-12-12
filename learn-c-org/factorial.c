#include <stdio.h>

int factorial(unsigned int x) {
  int i = 0;
  if (x <= 1) {
    return x * x;
  } else {
    printf("X: %d\n", x);
    return x  * factorial(x - 1);
  }
}

int main() {
  printf("starting function\n");
  int result = factorial(10);
  printf("Final result: %u\n", result);
  return 0;
}

