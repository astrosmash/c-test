#include <stdio.h>
#define ARRSIZE 10

int main(void) {
  unsigned int labs[ARRSIZE] = {2, 3, 4, 1, 5, 7, 10, 8, 9, 6};
  unsigned int *first = labs;
  unsigned int *last = labs + (ARRSIZE - 1);
  for (unsigned int *i = first; i <= last; ++i) {
      printf("%d is at 0x%x\n", *i, i);
    }
}
