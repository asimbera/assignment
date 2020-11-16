#include <stdio.h>

int main()
{
  char x;
  printf("Enter a character => ");
  scanf("%c", &x);

  if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
  {
  	printf("%c is an alphabet.\n", x);
  }
  else
  {
  	printf("%c is not an alphabet.\n", x);
  }
  return 0;
}
