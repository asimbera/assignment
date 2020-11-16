#include <stdio.h>
#include <math.h>

// FIXME fix algorithm
int main()
{
  int a, b, c;
  float discriminant;
  printf("Syntax of quadratic eq. is ax2 + bx + c = 0\n");
  printf("Enter the value of coefficient a => ");
  scanf("%d", &a);
  printf("Enter the value of coefficient b => ");
  scanf("%d", &b);
  printf("Enter the value of coefficient c => ");
  scanf("%d", &c);

  discriminant = (b * b) - (4 * a * c);

  if (discriminant > 0)
  {
    float r1 = ((-b + sqrt(discriminant)) / (2 * a));
    float r2 = ((-b - sqrt(discriminant)) / (2 * a));
    printf("First root = %.1f\n", r1);
    printf("Second root = %.1f\n", r2);
  }
  else if (discriminant == 0)
  {
    float r = -b / (2 * a);
    printf("Root (only) = %.1f\n", r);
  }
  else
  {
    // emulating complex number
    float b_f = -b / (2 * a);
    printf("a: %d, b: %d, c: %d\nb_f: %f", a, b, c, b / (2 * a));
    float r_f = sqrt(-discriminant) / (2 * a);
    printf("First root = %f + %.1fi\n", b_f, r_f);
    printf("Second root = %f - %.1fi\n", b_f, r_f);
  }

  return 0;
}
