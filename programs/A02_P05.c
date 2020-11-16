#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number to check => ");
  scanf("%d", &a);
  if (a == 0)
  {
    printf("0 is invalid.");
    return 1;
  }

  printf(a % 2 == 0 ? "%d is even\n" : "%d is odd\n", a);

  return 0;
}
