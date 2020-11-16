#include <stdio.h>

int main()
{
  float units, cost;
  printf("Enter comsumed units => ");
  scanf("%f", &units);

  if (units <= 50)
  {
    cost = units * 0.50;
  }
  else if (units <= 150)
  {
    cost = (50 * 0.50) + ((units - 50) * 0.75);
  }
  else if (units <= 250)
  {
    cost = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
  }
  else
  {
    cost = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
  }

  cost = cost * 120 / 100;

  printf("Total Cost: %.2f\n", cost);

  return 0;
}
