#include <stdio.h>

int main()
{

  int arrayAdd[100];
  for (int i = 0; i < 5; i++)
  {
    arrayAdd[i] = i * i;
  }

  print("%d\n", arrayAdd[0][99]);

}
