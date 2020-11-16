#include <stdio.h>

int main()
{
  int n, it, temp;
  int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
  printf("Enter a number (n) => ");
  scanf("%d", &n);

  it = n;

  while (it != 0)
  {
    temp = it % 10;
    switch (temp)
    {
    case 1:
      one += 1;
      break;
    case 2:
      two += 1;
      break;
    case 3:
      three += 1;
      break;
    case 4:
      four += 1;
      break;
    case 5:
      five += 1;
      break;
    case 6:
      six += 1;
      break;
    case 7:
      seven += 1;
      break;
    case 8:
      eight += 1;
      break;
    case 9:
      nine += 1;
      break;
    case 0:
      zero += 1;
      break;
    }
    it /= 10;
  }

  printf("__Digit Count__");
  printf("One: %d, Two: %d, Three: %d, Four: %d, Five: %d, Six: %d, Seven: %d, Eight: %d, Nine: %d, Zero: %d\n", one, two, three, four, five, six, seven, eight, nine, zero);

  return 0;
}
