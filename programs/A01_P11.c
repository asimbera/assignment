#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, p;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  p = pow(a, b);
  printf("%d to the power %d is: %d\n", a, b, p);

  return 0;
}
