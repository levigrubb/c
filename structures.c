#include <stdio.h>

typedef struct {
  char *name;
  int age;
} person;

int main() {
  // Cannot execute statements like definitions
  // outside of a function scope.
  person levi;
  levi.name = "Levi";
  levi.age = 31;

  // hmm... what to do here....
  printf("Name: %s\nAge: %d\n", levi.name, levi.age);
  return 0;
}
