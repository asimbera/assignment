#include <stdio.h>

int main()
{
  int far, cel;

  printf("Enter temparature in Farenheit: ");
  scanf("%d", &far);

  cel = (far - 32) * 5 / 9;

  printf("%d Farenheit = %d Celsius\n", far, cel);

  return 0;
}
