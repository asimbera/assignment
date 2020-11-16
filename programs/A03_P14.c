#include <stdio.h>

int main()
{
  int i = 0, n, l;
  printf("Enter a number (n) => ", n);
  scanf("%d", &n);

  l = n % 10;

  while (n != 0)
  {
    // printf("%d\n", n);
    if (n < 10)
      break;
    n /= 10;
  }

  printf("First digit = %d\n", n);
  printf("Last digit = %d\n", l);

  return 0;
}
