#include <stdio.h>
#include <math.h>

int main()
{
  int num, sq_rt, prime_f = 1;
  printf("Enter a number (num) => ");
  scanf("%d", &num);
  sq_rt = sqrt(num);

  for (int i = 2; i <= sq_rt; i++)
  {
    if (num % i == 0)
    {
      prime_f = 0;
    }
  }
  printf("%d is %s prime number.\n", num, prime_f == 0 ? "not a" : "a");

  return 0;
}
