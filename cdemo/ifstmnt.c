#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is not not equal to b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("both a and b are equal to 0\n");
  }
  else
  {
    printf("both a and b are not equal to 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("either a or b is equal to 0\n");
  }
  else
  {
    printf("neither a nor b is equal to 0\n");
  }

  if (!(a == 0))
  {
    printf("a does not equal 0\n");
  }
  else
  {
    printf("a does not not equal 0\n");
  }
 
}
