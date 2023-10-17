#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
 int i=0;
  while (i <6)
  {
  printf("*p+%i = %p\n", i, (p+i));
  printf("&a[%i] = %p\n", i, &a[i]);
  i++;
  }
  /* ...so that this prints 98\n */
  printf("&n = %p\n", &n);
  printf("&a[2] = %p\n", &a[2]);
  printf("a[2] = %d\n", a[2]);
  return (0);
}
