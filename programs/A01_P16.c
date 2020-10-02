#include <stdio.h>

int main()
{
  int s1, s2, s3, s4, s5, total;
  float avg, per;
  printf("Enter marks of 5 subjects: ");
  scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
  total = s1 + s2 + s3 + s4 + s5;
  avg = (float)total / 5;
  printf("Avg is : %f\n", avg);
  return 0;
}
