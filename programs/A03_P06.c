#include <stdio.h>

int main()
{
  int i = 0, n;
  printf("Enter target (n) => ");
  scanf("%d", &n);

  while (i <= n)
  {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  return 0;
}
