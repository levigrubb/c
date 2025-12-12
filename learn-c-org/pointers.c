#include <stdio.h>

int main() {
  int a = 1;

  int * pointer_to_a = &a;
  int *alternate_pointer = &a;

  printf("The value of a is %d\n", a);
  printf("The value of a is also %d\n", *pointer_to_a);
  printf("alternate_pointer = %d\n", alternate_pointer);
  printf("*alternate_pointer = %d\n", *alternate_pointer);
  printf("\\%\\p of alternate_pointer = %p", alternate_pointer);
  printf("\\%\\p of *alternate_pointer = %p", *alternate_pointer);
  printf("A = %d\n", *pointer_to_a);
  *pointer_to_a++;
  printf("A = %d\n", *pointer_to_a);
  *pointer_to_a += 1;
  printf("A = %d\n", *pointer_to_a);

  return 0;
}

