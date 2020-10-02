#include <stdio.h>

int main()
{
  // Using [int] as data-type as no other
  // type is specified in statement.
  int a, b;

  printf("Enter first integer: ");
  scanf("%d", &a);
  printf("Enter second integer: ");
  scanf("%d", &b);

  int sum = a + b;

  printf("Sum of %d and %d is: %d\n", a, b, sum);

  return 0;
}
