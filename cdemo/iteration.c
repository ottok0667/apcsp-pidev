#include <stdio.h>

int main ()
{
  int div = 2;
  printf ("The dividing factor is %d\n", div);

  for (int i = 1; i < 101; i++)
  {
    if (i% div == 0)
    {
      printf ("%d\n", i);
    }
  }
}
