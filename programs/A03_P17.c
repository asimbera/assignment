#include <stdio.h>

int main()
{
  int n, rev = 0, it, temp;
  printf("Enter a number (n) => ", n);
  scanf("%d", &n);

  it = n;

  while (it != 0)
  {
    temp = it % 10;
    rev = (rev * 10) + temp;
    it /= 10;
  }

  printf("%d is %s.\n", n, n == rev ? "a palindrome" : "not a palindrome");

  return 0;
}
