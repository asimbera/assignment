#include <stdio.h>

int main()
{
  int p, t;
  float r, i, total;
  printf("Princilpal Amount: ");
  scanf("%d", &p);
  printf("Time Period (In Years): ");
  scanf("%d", &t);
  printf("Interest Rate (Percent): ");
  scanf("%f", &r);

  i = p * t * r / 100;
  total = p + i;

  printf("Interest Amount: %.2f, Total Amount: %.2f\n", i, total);

  return 0;
}
