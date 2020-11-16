#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Enter a number => ");
  scanf("%d", &n);

  printf("Armstrong number between 1 to %d : \n", n);
  for (int i = 1; i <= n; i++)
  {
    int r, j = i, comp = 0;
    while (j != 0)
    {
      r = j % 10;
      comp += pow(r, 3);
      j /= 10;
    }
    if (i == comp)
    {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}
