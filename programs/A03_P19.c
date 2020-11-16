// logic dump from https://github.com/asimbera/project_euler/blob/master/Problem%20017/index.js

#include <stdio.h>

int main()
{
  int n, length = 0;
  printf("Enter a number (n) => ", n);
  scanf("%d", &n);

  while (n != 0)
  {
    length += 1;
    n /= 10;
  }

  // TODO
  switch (length)
  {
  case 1:
    switch (n)
    {
    case 1:
      printf("One");
      break;
    case 2:
      printf("Two");
      break;
    case 3:
      printf("Three");
      break;
    case 4:
      printf("Four");
      break;
    case 5:
      printf("Five");
      break;
    case 6:
      printf("Six");
      break;
    case 7:
      printf("Seven");
      break;

    default:
      break;
    }
    break;
  case 2:
    /* code */
    break;
  case 3:
    /* code */
    break;
  case 4:
    /* code */
    break;

  default:
    printf("Unimplemented length: %d", length);
    break;
  }

  return 0;
}
