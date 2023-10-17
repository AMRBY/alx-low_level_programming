#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  printf("&n = %p\n", &n);
  printf("&a[0] = %p\n", &a[0]);
  printf("&a[1] = %p\n", &a[1]);
  printf("&a[2] = %p\n", &a[2]);
  printf("(p+5) = %d\n", *(p+5));
  printf("(p+4) = %d\n", *(p+4));
  printf("(p+3) = %d\n", *(p+3));
  printf("(p+2) = %d\n", *(p+2));
  printf("(p+1) = %d\n", *(p+1));
  printf("(p+0) = %d\n", *(p+0));
  return (0);
}
