#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number to check => ");
  scanf("%d", &a);

  if (a % 5 == 0)
  {
    printf("%d is divisible by 5.\n", a);
  }
  else if (a % 11 == 0)
  {
    printf("%d is divisible by 11.\n", a);
  }
  else
  {
    printf("%d is not divisible by both 5 and 11.\n");
  }

  return 0;
}
