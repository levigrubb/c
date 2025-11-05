#include <stdio.h>

typedef struct {
  char *name;
  int age;
} person;

int birthday(int *n) {
  (*n)++;
  return *n;
}

int main() {
  person levi;
  levi.name = "Levi";
  levi.age = 30;

  int age = birthday(&levi.age);
  printf("The current age of levi is now %d\n", age);
  return 0;
}
