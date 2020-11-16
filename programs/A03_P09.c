#include <stdio.h>

int main()
{
  printf("odd numbers between 1 and 100.\n");
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 != 0)
      printf("%d ", i);
  }

  printf("\n");
  return 0;
}
