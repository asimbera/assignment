#include <stdio.h>

int main()
{
  int a, b, c;
  printf("*** Enter 3 integers to compare ***\n");
  printf("First integer => ");
  scanf("%d", &a);
  printf("Second integer => ");
  scanf("%d", &b);
  printf("Third integer => ");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("Max is %d\n", a);
  }
  else if (b > a && b > c)
  {
    printf("Max is %d\n", b);
  }
  else
  {
    printf("Max is %d\n", c);
  }

  return 0;
}
