#include <stdio.h>

int main()
{
  float cel, far;

  printf("Enter temparature in Celcius: ");
  scanf("%f", &cel);

  far = (cel * (9 / 5)) + 32;

  printf("%.1f Celcius = %0.1f Farenheit\n", cel, far);

  return 0;
}
