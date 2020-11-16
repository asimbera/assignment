#include <stdio.h>

int main()
{
  char a;
  printf("Enter a letter => ");
  scanf("%c", &a);

  switch(a)
  {
    // uppercase vowels
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    // lowercase vowels
    case 97:
    case 101:
    case 105:
    case 111:
    case 117:
      printf("%c is vowel.\n", a);
      break;
    default:
      printf("%c is consonent.\n", a);
  }

  return 0;
}
