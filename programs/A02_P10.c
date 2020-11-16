#include <stdio.h>

int main(int argc, char const *argv[])
{
  char x;
  printf("Enter an alphabet => ");
  scanf("%c", &x);

  if (x >= 65 && x <= 90)
  {
    printf("%c is uppercase.\n", x);
  }
  else if (x >= 97 && x <= 122)
  {
    printf("%c is lowercase.\n", x);
  }
  else
  {
    printf("%c is invalid.\n", x);
  }
  return 0;
}
