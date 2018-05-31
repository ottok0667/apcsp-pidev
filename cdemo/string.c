#include <stdio.h>
#include <string.h>

int main()
{
  char str1[27];
  char c = 'a';

  for (int i = 0; i < 26; i++)
  {
    str1[i] = c;
    c++;
  }
  str1[26] = 0;

  char str2[] = "abcdefghijklmnopqrstuvwxyz";

  printf("str1: %s; str2: %s\n", str1, str2);


  if (strcmp(str1, str2) == 0)
      printf("The two strings are identical\n");
  else
      printf("The two strings are different\n");



  for (int i = 0; i < 26; i++)
  {
    str1[i] = c - 58;
    c ++;
  }

  printf("str1: %s; str2: %s\n", str1, str2);


  if (strcmp(str1, str2) == 0)
      printf("The two strings are identical\n");
  else
      printf("The two strings are different\n");



  char str3[53];
  strcpy(str3, str1);
  strcat(str3, str2);

  printf("\nstr1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

}
