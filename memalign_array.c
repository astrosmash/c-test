#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 2048
#define member(x) *(ptr + x)

int main(void) {
  char *ptr;
  int res = posix_memalign((void **)&ptr, 16,
                           (sizeof(char) * BUFSIZE)); /* 16-byte alignment */
  if (ptr != NULL && !res) {

    printf("Base address of allocation is: %p ", ptr);
    printf("and is it 16 byte aligned? %s\n",
           (((size_t)ptr) % 16) ? "no" : "yes");

    printf("Enter your input: ");
    fgets(ptr, BUFSIZE, stdin);

    printf("Corrected user input is:\n");
    for (unsigned int i = 0; i <= BUFSIZE && member(i); ++i) {
      member(i) >= 'A' && member(i) <= 'Z' ? member(i) = tolower(member(i))
                                           : member(i);
      printf("%c", member(i));
    }

    free(ptr);
  }
}
