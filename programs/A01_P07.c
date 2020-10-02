// Write a program to enter length in cm and convrt it into meter and kilometer
#include <stdio.h>

int main()
{
  float cm, me, km;

  printf("Enter length to convert (in cm) : ");
  scanf("%f", &cm);

  me = cm / 100;
  km = cm / (100 * 1000);

  printf("%.2f CM = %0.2f Meters = %.4f Kilometers\n", cm, me, km);

  return 0;
}
