
#include <stdio.h>

int arrayAdd (int arr[], int s, int n)
{
//  printf("Added Array:\n");

  for (int i = 0; i < s; i++)
  {
    arr[i] = arr[i] + n;
//    printf ("%d\n", arr[i]);
  }
}

int main()
{
  int arr[100];

  printf("Original Array:\n");

  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
    printf ("%d\n", arr[i]);
  }

  arrayAdd (&arr [0], 100, 1);

  printf ("\nAdded Array:\n");

  for (int i = 0; i < 100; i++)
  {
    printf ("%d\n", arr[i]);
  }

}
