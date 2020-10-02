#include <stdio.h>

int main()
{
  float length, breadth;

  printf("Enter Length: ");
  scanf("%f", &length);
  printf("Enter Breadth: ");
  scanf("%f", &breadth);

  float perimeter = 2 * (length + breadth);

  printf("Perimeter: %.2f\n", perimeter);

  return 0;
}
