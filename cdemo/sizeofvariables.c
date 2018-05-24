#include<stdio.h>

int main()
{
  int a = 545;
  char b = 3;
  float c = 3.14;
  double d = 3.1415;
  signed e = -17;
  unsigned f = 23;
  short g = 243;
  long h = 547;

  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
  printf("char b value %d and size %d bytes.\n", b, sizeof(b));
  printf("float c value %f and size %d bytes.\n", c, sizeof(c));
  printf("double d value %f and size %d bytes.\n", d, sizeof(d));
  printf("signed e value %d and size %d bytes.\n", e, sizeof(e));
  printf("unsigned f value %d and size %d bytes.\n", f, sizeof(f));
  printf("short g value %d and size %d bytes.\n", g, sizeof(g));
  printf("long h value %d and size %d bytes.\n", h, sizeof(h));
}

