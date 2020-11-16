#include <stdio.h>

int main(int argc, char const *argv[])
{
	char x;
  printf("Enter a character => ");
  scanf("%c", &x);

	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
  {
  	printf("%c is an alphabet.\n", x);
  }
  else if(x >= 48 && x<= 57)
  {
  	printf("%c is a number.\n", x);
  }
	else
  {
  	printf("%c is a spcial character.\n", x);
  }
	return 0;
}