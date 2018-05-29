#include <stdio.h>

float areaOfCircle (float radius)
{
  printf("radius: %f\n", radius);
  return (radius*radius*3.14);
}

int main()
{
  float area;

  for (float i = 3.5; i <= 12.5; i = i + 0.5)
  {
    area = areaOfCircle(i);
    printf("area: %f\n\n", area);
  }
}
