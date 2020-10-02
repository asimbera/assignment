#include <stdio.h>
#include <math.h>

int main()
{
  double p, t;
  double r, i, total;
  printf("Princilpal Amount: ");
  scanf("%lf", &p);
  printf("Time Period (In Years): ");
  scanf("%lf", &t);
  printf("Interest Rate (Percent): ");
  scanf("%lf", &r);

  total = (double)p * pow((1 + (r / 100)), t);

  i = total - p;

  printf("Interest Amount: %.2lf, Total Amount: %.2lf\n", i, total);

  return 0;
}
