#include <stdio.h>
int main(void)
{
  float r, h ,area ;
  printf("Enter R : ");
  scanf("%f", &r);
  printf("Enter H : ");
  scanf("%f", &h);
  area = (2*3.14*r)*h+2*(3.14*r*r);
  printf("Cylinder area = %f", area);
  return 0;
}