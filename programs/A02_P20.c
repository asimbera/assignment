#include <stdio.h>
int main()
{
  int basic, hra, da, gross;
  printf("Enter basic salary => ");
  scanf("%d", &basic);
  if (basic <= 10000)
  {
    hra = basic * 0.2;
    da = basic * 0.8;
    gross = basic + hra + da;
  }
  else if (basic <= 20000)
  {
    hra = basic * 0.25;
    da = basic * 0.9;
    gross = basic + hra + da;
  }
  else if (basic > 20000)
  {
    hra = basic * 0.3;
    da = basic * 0.95;
    gross = basic + hra + da;
  }
  printf("Gross Salary => %d\n", gross);
  return 0;
}
