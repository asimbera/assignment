#include <stdio.h>

int main()
{
  int x;
  printf("Enter amount to count => ");
  scanf("%d", &x);

  int n_2000 = 0, n_500 = 0, n_200 = 0, n_100 = 0, n_50 = 0, n_20 = 0, n_10 = 0, n_5 = 0, n_2 = 0, n_1 = 0;

  if (x >= 2000)
  {
    n_2000 = x / 2000;
    x = x % 2000;
  }
  if (x >= 500)
  {
    n_500 = x / 500;
    x = x % 500;
  }
  if (x >= 200)
  {
    n_200 = x / 200;
    x = x % 200;
  }
  if (x >= 100)
  {
    n_100 = x / 100;
    x = x % 100;
  }
  if (x >= 50)
  {
    n_50 = x / 50;
    x = x % 50;
  }
  if (x >= 20)
  {
    n_20 = x / 20;
    x = x % 20;
  }
  if (x >= 10)
  {
    n_10 = x / 10;
    x = x % 10;
  }
  if (x >= 5)
  {
    n_5 = x / 5;
    x = x % 5;
  }
  if (x >= 2)
  {
    n_2 = x / 2;
    x = x % 2;
  }
  if (x = 1)
  {
    n_1 = x;
  }

  printf("Number of notes => \n");
  printf("Notes of Rs. 2000 => %d\n", n_2000);
  printf("Notes of Rs. 500 => %d\n", n_500);
  printf("Notes of Rs. 200 => %d\n", n_200);
  printf("Notes of Rs. 100 => %d\n", n_100);
  printf("Notes of Rs. 50 => %d\n", n_50);
  printf("Notes of Rs. 20 => %d\n", n_20);
  printf("Notes of Rs. 10 => %d\n", n_10);
  printf("Notes of Rs. 5 => %d\n", n_5);
  printf("Notes of Rs. 2 => %d\n", n_2);
  printf("Notes of Rs. 1 => %d\n", n_1);

  return 0;
}
