#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  float d;
  printf("Syntax of quadratic eq. is ax2 + bx + c = 0\n");
  printf("Enter the value of coefficient a => ");
  scanf("%d", &a);
  printf("Enter the value of coefficient b => ");
  scanf("%d", &b);
  printf("Enter the value of coefficient c => ");
  scanf("%d", &c);

  d = (b * b) - (4 * a * c);

  if (d > 0)
  {
    float r1 = (-b + sqrt(d)) / 2 * a;
    float r2 = (-b - sqrt(d)) / 2 * a;
    printf("First root = %.2f\n", r1);
    printf("Second root = %.2f\n", r2);
  }
  else if (d == 0)
  {
    float r1 = -b / 2 * a;
    float r2 = -r1;
    printf("First Root = %.2f\n", r1);
    printf("Second Root = %.2f\n", r2);
  }
  else
  {
    // emulating complex number
    float b_f = -b / 2 * a;
    // printf("a: %d, b: %d, c: %d\nb_f: %f", a, b, c, b / (2 * a));
    float r_f = sqrt(-d) / (2 * a);
    printf("First root = %.2f + i%.2f\n", b_f, r_f);
    printf("Second root = %.2f - i%.2f\n", b_f, r_f);
  }

  return 0;
}
