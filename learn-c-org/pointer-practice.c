#include <stdio.h>

int main() {
  char c = 'A';
  char *pc = &c;

  printf("c: %c\tpointer: %p\n", c, &c);
  printf("pc: %c\tpointer: %p\n", *pc, &pc);
  return 0;
}

