#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter 1st side => ");
  scanf("%d", &a);
  printf("Enter 2nd side => ");
  scanf("%d", &b);
  printf("Enter 3rd side => ");
  scanf("%d", &c);

  if (a == b && b == c)
  {
    printf("Triangle is equilateral.\n");
  }
  else if (a == b || a == c || b == c)
  {
    printf("Triangle is isosceles.\n");
  }
  else
  {
    printf("Triangle is scalene.\n");
  }

  return 0;
}
