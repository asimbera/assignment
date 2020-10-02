#include <stdio.h>

int main()
{
  int a;
  float b;
  char c;

  // Input Step
  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Enter a float: ");
  scanf("%f", &b);
  printf("Enter a char: ");
  // workaround to scanf [char] for gcc & clang
  // [space] before [format specifier]
  scanf(" %c", &c);

  // Output Step
  // appending [.2] before [f]
  // limits number of significant
  // digits to 2
  printf("Integer: %d, Float: %.2f, Char: %c\n", a, b, c);

  return 0;
}
