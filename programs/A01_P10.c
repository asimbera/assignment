#include <stdio.h>
int main()
{
  int d, y, w;
  printf("Enter days: ");
  scanf("%d", &d);
  y = d / 365;
  d = d % 365;
  w = d / 7;
  d = d % 7;
  printf("%d Years, %d Weeks and %d Days\n", y, w, d);

  return 0;
}
