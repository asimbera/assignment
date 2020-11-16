#include <stdio.h>

int main()
{
  int i = 0, n, sum = 0;
  printf("Enter target (n) => ", n);
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i;
    i++;
  }
  printf("Sum of 1 to %d is %d\n", n, sum);
  return 0;
}
