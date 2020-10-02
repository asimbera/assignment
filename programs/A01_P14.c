#include <stdio.h>

int main()
{
  int b, h, area;
  printf("Enter base of the triangle: ");
  scanf("%d", &b);
  printf("Enter height of the triangle: ");
  scanf("%d", &h);

  area = 0.5 * b * h;

  printf("Area of the triangle: %d\n", area);

  return 0;
}
