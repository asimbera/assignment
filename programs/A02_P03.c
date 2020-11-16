#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number to check => ");
  scanf("%d", &a);

  if (a > 0)
  {
    printf("%d is positive.\n", a);
  }
  else if (a < 0)
  {
    printf("%d is negative.\n", a);
  }
  else
  {
    printf("Its a zero.\n");
  }

  return 0;
}
