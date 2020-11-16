#include <stdio.h>

int main()
{
  int n, r;
  printf("Enter a number => ");
  scanf("%d", &n);

  printf("In reverse => ");
  while (n != 0)
  {
    r = n % 10;
    printf("%d", r);
    n /= 10;
  }

  printf("\n");

  return 0;
}
