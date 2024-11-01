#include <stdio.h>

int somaDivisores(int *n)
{
  int i, sDivisores = 0;
  printf("%d = ", *n);
  for (i = 1; i < *n; i++)
  {
    if (i == 1)
    {
      printf("%d", i);
      sDivisores += i;
    }
    else if (*n % i == 0)
    {
      printf(" + %d", i);
      sDivisores += i;
    }
  }
  return sDivisores;
}

int main(void)
{
  int n, resp;
  scanf("%d", &n);
  resp = somaDivisores(&n);
  printf(" = %d", resp);
  if (resp == n)
  {
    printf(" (NUMERO PERFEITO)");
  }
  else
  {
    printf(" (NUMERO NAO E PERFEITO)");
  }
  return 0;
}