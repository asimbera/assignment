#include <stdio.h>

int main()
{
  int n, r, sum = 0;
  printf("Enter a number => ");
  scanf("%d", &n);
  while (n != 0)
  {
    r = n % 10;
    sum += r;
    n /= 10;
  }

  printf("Sum of digits = %d\n", sum);

  return 0;
}
