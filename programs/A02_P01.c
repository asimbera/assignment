#include <stdio.h>

int main()
{
  int a, b;
  printf("*** Enter 2 integers to compare ***\n");
  printf("First integer => ");
  scanf("%d", &a);
  printf("Second integer => ");
  scanf("%d", &b);

  a > b ? printf("Max is %d\n", a) : printf("Max is %d\n", b);

  return 0;
}
