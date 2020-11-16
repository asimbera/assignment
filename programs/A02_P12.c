#include <stdio.h>

int main()
{
  int x;
  printf("Enter month number => ");
  scanf("%d", &x);

  switch (x)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("There are 31 days in %s\n", x == 1 ? "January" : x == 3 ? "March" : x == 5 ? "May" : x == 7 ? "July" : x == 8 ? "August" : x == 10 ? "October" : "December");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("There are 30 days in %s\n", x == 4 ? "April" : x == 6 ? "June" : x == 9 ? "September" : "November");
    break;
  case 2:
    printf("There are 28 days in %s\n", "February");
    break;

  default:
    printf("Invalid Input.\n");
    break;
  }
  return 0;
}
