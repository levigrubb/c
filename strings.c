#include <stdio.h>
#include <string.h>

int main() {
  char * immutable_string = "I am an immutable string";
  char changeable_string[] = "THIS CAN CHANGE";

  printf("The string at memory location %p contains: %s\n", immutable_string);
  printf("The string at memory location %p contains: %s\n", changeable_string);

  if (strncmp(immutable_string, changeable_string, 10) != 0) {
    printf("when comparing '%s' and '%s', they are NOT the same", immutable_string, changeable_string);
  } else if (strncmp(immutable_string, changeable_string, 10) == 0) {
    printf("Match Found!");
  } else {
    printf("Some crazy stuff happened");
  }
  
  printf("The memory address, and content, of both strings, are show below:\n%p\n%p\n", immutable_string, changeable_string);
  strncat(immutable_string, changeable_string, 20);
}

