#include <stdio.h>

int main()
{
  int n;
  printf("Enter starting number (n) => ");
  scanf("%d", &n);

  while (n >= 0)
  {
    printf("%d ", n);
    n--;
  }
  printf("\n");

  return 0;
}
