#include <stdio.h>

int main() {

  int numbers[10];


  /* populate the array */
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  numbers[5] = 60;
  numbers[6] = 70;

  /* print the 7th number from the array, which has an index of 6 */
  printf("pointer: %p\nOctal: %o\nHex: %x\n", numbers[6]);
  return 0;
}

