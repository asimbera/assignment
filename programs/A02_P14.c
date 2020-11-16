#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter 1st angle => ");
  scanf("%d", &a);
  printf("Enter 2nd angle => ");
  scanf("%d", &b);
  printf("Enter 3rd angle => ");
  scanf("%d", &c);

  if (a + b + c == 180 && a != 0 && b != 0 && c != 0)
  {
    printf("Triangle is valid.\n");
  }
  else
  {
    printf("Triangle is invalid.\n");
  }

  return 0;
}
