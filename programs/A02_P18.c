#include <stdio.h>

void main()
{
  int buy, sell;
  printf("Enter buying price => ");
  scanf("%d", &buy);
  printf("Enter selling price => ");
  scanf("%d", &sell);
  printf("Result => ");
  if (sell - buy > 0)
    printf("Profit.\n");
  else if (sell - buy < 0)
    printf("Loss.\n");
  else
    printf("Neither profit nor loss.\n");
}
