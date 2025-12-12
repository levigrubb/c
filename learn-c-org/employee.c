#include <stdio.h>
#include <stdlib.h>

int birthday(int *age) {
  (*age)++;
  return *age;
}

int main() {
  /* Old code that didn't work
   *
  typedef struct {
    char *first_name = "John";
    char *last_name = "Doe";
    int age = 0;
    char *occupation = "Worker";
  } person;
  */

  // Working code :)
  typedef struct {
    char *first_name;
    char *last_name;
    int age;
    char *occupation;
  } person;

  person *levi = (person *) malloc(sizeof(person));
  // Recommendation from ChatGPT: Check to see if the above malloc worked
  if (levi == NULL) {
    perror("Malloc of levi failed\n");
    return 1;
  }

  /* The below code doesn't work, because "levi" is a pointer --
   * this would work if the I use 'person', but for a pointer like
   * levi, I have to use this syntax: levi->first_name = "Levi";
   *
   *
  levi.first_name = "Levi";
  levi.last_name = "Grubb";
  levi.age = 30;
  levi.occupation = "Engineer";
  birthday(*levi.age);
  printf("It worked! Here is your new employee: %s %s, %d, %s\n",
      levi.first_name, levi.last_name, levi.age, levi.occupation);
  return 0;
  *
  *
  */

  // The below code works
  levi->first_name = "Levi";
  levi->last_name = "Grubb";
  levi->age = 30;
  levi->occupation = "Engineer";
  
  // Another modification: original call was as follows: birthday(*levi.age);
  // P.S. I would be lying if I said I fully understand this.. I don't (yet)
  //
  birthday(&levi->age);
  printf("It worked! Here is your new employee: %s %s, %d, %s\n",
      levi->first_name, levi->last_name, levi->age, levi->occupation);
  return 0;
}

