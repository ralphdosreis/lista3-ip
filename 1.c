#include <stdio.h>

unsigned long int fat(unsigned long int *n)
{
  unsigned long int i, fat = 1;
  for (i = *n; i >= 1; i--)
  {
    fat *= i;
  }
  return fat;
}

int main(void)
{
  unsigned long int n, resp;
  scanf("%lu", &n);
  resp = fat(&n);
  printf("%lu! = %lu", n, resp);
  return 0;
}