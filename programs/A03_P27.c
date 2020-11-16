#include <stdio.h>
#include <math.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number (n) => ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    int prime_f = 1, sq_rt = sqrt(i);
    for (int j = 2; j <= sq_rt; j++)
    {
      if (i % j == 0)
      {
        prime_f = 0;
      }
    }
    if (prime_f == 1)
    {
      sum += i;
    }
  }

  printf("Sum of Prime numbers between 1 to %d = %d\n", n, sum);

  return 0;
}
