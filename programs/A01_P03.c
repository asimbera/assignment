#include <stdio.h>

int main()
{
  // Using [float] as data-type as no other
  // type is specified in statement and
  // as we will perform division.
  float a, b;

  printf("Enter first number: ");
  scanf("%f", &a);
  printf("Enter second number: ");
  scanf("%f", &b);

  // addition
  float sum = a + b;
  // substruction
  float sub_b_from_a = a - b;
  // multiplication
  float mul = a * b;
  // division
  float a_div_by_b = a / b;

  // limiting significant digits
  // after point to 2
  printf("Sum: %.2f\n", sum);
  printf("Sub: %.2f\n", sub_b_from_a);
  printf("Mul: %.2f\n", mul);
  printf("Div: %.2f\n", a_div_by_b);

  return 0;
}
