#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("Enter a number (num) => ");
  scanf("%d", &num);

  printf("Factors: \n");
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
