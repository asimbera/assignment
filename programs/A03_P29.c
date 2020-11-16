#include <stdio.h>
#include <math.h>

int main()
{
  int n, r, i, comp = 0;
  printf("Enter a number => ");
  scanf("%d", &n);
  i = n;

  while (i != 0)
  {
    r = i % 10;
    // printf("%d ", r);
    comp += pow(r, 3);
    i /= 10;
  }
  printf("%d is %s Armstrong number.\n", n, n == comp ? "a" : "not a");

  return 0;
}
