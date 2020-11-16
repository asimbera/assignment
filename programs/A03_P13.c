#include <stdio.h>

int main()
{
  int i = 0, n, x = 0;
  printf("Enter a number (n) => ", n);
  scanf("%d", &n);
  while (n != 0)
  {
    n /= 10;
    x += 1;
  }

  printf("Number of digits = %d\n", x);

  return 0;
}
