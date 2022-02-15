#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, nr, nc;

  printf("Enter radius (in mm):\n");
  scanf("%f", &r);

  

  nr = r / 25.4;
  a = PI * nr * nr;

  nc = PI * (nr + nr);

  

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n", nc);
}
