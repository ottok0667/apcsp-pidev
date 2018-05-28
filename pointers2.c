#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);


  float temp;
  float d;
  float e;
  float* ptrtod;
  float* ptrtoe;

  ptrtod = &d;
  ptrtoe = &e;

  d = 4.73;
  e = 21.9;

  printf("\n\n\nThe value of float d is %f, and its address is %ld\n", d, ptrtod);
  printf("The value of float e is %f, and its address is %ld\n\n", e, ptrtoe);


  temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("Now the value of float d is %f, and its address is %ld\n", d, ptrtod);
  printf("Now the value of float e is %f, and its address is %ld\n", e, ptrtoe);
}