#include <stdio.h>

int sum(int number) {
  number += number;
  return number;
}

int main() {
  int result = sum(10);
  result += sum(10);
  printf("Result = %d\n", result);
  return 0;
}

