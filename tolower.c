#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 2048
#define member(x) *(input + x)

int main(void) {
  unsigned int i;
  unsigned char input[BUFSIZE];

  printf("Enter your input: ");
  fgets(input, sizeof(input), stdin);

  printf("Corrected user input is:\n");
  for (i = 0; i <= (sizeof(input) - 1) && member(i); ++i) {
      member(i) >= 'A' && member(i) <= 'Z' ? member(i) = tolower(member(i))
          : member(i);
      printf("%c", member(i));
    }
}
