#include <stdio.h>

int main()
{
  int phys, chem, bios, math, comp;
  printf("Full Marks for each subject is 100.\n");
  printf("Enter marks of Physics => ");
  scanf("%d", &phys);
  printf("Enter marks of Chemistry => ");
  scanf("%d", &chem);
  printf("Enter marks of Biology => ");
  scanf("%d", &bios);
  printf("Enter marks of Mathematics => ");
  scanf("%d", &math);
  printf("Enter marks of Computer => ");
  scanf("%d", &comp);

  float avg = (phys + chem + bios + math + comp) / 5;

  printf("Result:\n");
  printf("Percentage: %.2f%\n", avg);
  printf("Grade: %s\n", avg >= 90 ? "A" : avg >= 80 ? "B" : avg >= 70 ? "C" : avg >= 60 ? "D" : avg >= 40 ? "E" : "F");
  return 0;
}
