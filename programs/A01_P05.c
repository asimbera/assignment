#include <stdio.h>

int main()
{
  float length, breadth;

  printf("Enter Length: ");
  scanf("%f", &length);
  printf("Enter Breadth: ");
  scanf("%f", &breadth);

  float area = length * breadth;

  printf("Area: %.2f\n", area);

  return 0;
}
