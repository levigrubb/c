#include <stdio.h>

int main() {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};

  size_t array_size = sizeof(array) / sizeof(array[0]);

  printf("The size of the array in elements is %zu\n", array_size);
  return 0;
}
