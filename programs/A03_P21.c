#include <stdio.h>

int main()
{
  int num, pow, val = 1;
  printf("Enter the number (num) => ");
  scanf("%d", &num);
  printf("Enter the power (pow) => ");
  scanf("%d", &pow);

  for (int i = 1; i <= pow; i++)
  {
    val *= num;
  }

  printf("Ans: %d ^ %d = %d\n", num, pow, val);

  return 0;
}
