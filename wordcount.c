#include <stdio.h>

#define MAXNO 24
#define MAXWL 24

int main(void) {
  unsigned int c, i, j, nchar, nword, word[MAXNO];
  nchar = nword = 0;
  for (i = 0; i < MAXNO; ++i) // faster than i++
    word[i] = 0;

  while ((c = getchar()) != EOF) {
    ++nchar;
    if (c == ' ' || c == '\n' || c == '\t') {
      word[nword] = nchar - 1;
      ++nword;
      printf("%d %d ", nchar, nword);
      nchar = 0;
    }
  }
  for (i = MAXWL; i >= 1; --i) {
    for (j = 0; j <= nword; ++j) {
      if (i <= word[j])
        putchar('*');
      else
        putchar(' ');
    }
    putchar('\n');
  }
  return 0;
}
