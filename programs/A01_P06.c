#include <stdio.h>

int main()
{
  const float PI = 3.14;

  float radius;

  printf("Enter the Radius of the Circle: ");
  scanf("%f", &radius);

  float diameter = 2 * radius;
  float circumference = 2 * PI * radius;
  float area = PI * radius * radius;

  printf("Diameter: %.2f Unit\n", diameter);
  printf("Circumference: %.2f Unit\n", circumference);
  printf("Area: %.2f Unit\n", area);

  return 0;
}
