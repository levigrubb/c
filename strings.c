#include <stdio.h>
#include <string.h>

int main() {
  char * immutable_string = "I am an immutable string";
  char changeable_string[] = "THIS CAN CHANGE";
  char copy_of_i[25];
  printf("Contents of immutable copy: %s", *copy_of_i);

  printf("The string at memory location %p contains: %s\n", immutable_string, immutable_string);
  printf("The string at memory location %p contains: %s\n", changeable_string, changeable_string);
 
  if (strncmp(immutable_string, changeable_string, 10) != 0) {
    printf("when comparing '%s' and '%s', they are NOT the same\n", immutable_string, changeable_string);
  } else if (strncmp(immutable_string, changeable_string, 10) == 0) {
    printf("Match Found!\n");
  } else {
    printf("Some crazy stuff happened\n");
  }
  
  printf("The memory address, and content, of both strings, are show below:\n%p\n%p\n", immutable_string, changeable_string);
  strncat(copy_of_i, immutable_string, sizeof(copy_of_i) - strlen(copy_of_i) - 1);
  printf("%s\n", copy_of_i);
}

