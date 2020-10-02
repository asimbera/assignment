#include <stdio.h>
#include <math.h>

int main()
{
  int s;
  double area;
  printf("Enter length of the side: ");
  scanf("%d", &s);

  area = (sqrt(3) / 4) * pow(s, 2);

  printf("Area of the equilateral triangle: %d\n", area);

  return 0;
}
