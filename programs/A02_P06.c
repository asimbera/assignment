#include <stdio.h>

int main()
{
  int a;
  printf("Enter a year (4 digit) => ");
  scanf("%d", &a);

  if (a % 100 == 0)
  {
    if (a % 400 == 0)
    {
      printf("%d is a century and a leap year.\n", a);
    }
    else
    {
      printf("%d is not a leap year or invalid.\n", a);
    }
  }
  else if (a % 4 == 0)
  {
    printf("%d is a leap year.\n", a);
  }
  else
  {
    printf("%d is not a leap year or invalid.\n", a);
  }

  return 0;
}
