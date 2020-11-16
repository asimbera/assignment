#include <stdio.h>

int main()
{
  int i = 64;
  int lim = 122;
  while (i < lim)
  {
    i++;
    // skip non-alpha values
    if (i > 90 && i < 97)
      continue;
    printf("%c ", i);
  }
  printf("\n");
  return 0;
}
