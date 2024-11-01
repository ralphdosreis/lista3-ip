#include <stdio.h>

int separaDigitos(int *n)
{
  int pn, sn, tn, nNovo;
  pn = (*n % 100) % 10;
  sn = (*n / 10) % 10;
  tn = *n / 100;
  nNovo = pn * 100 + sn * 10 + tn;
  return nNovo;
}

int main(void)
{
  int n, resp;
  scanf("%d", &n);
  if (n < 99 || n % 10 == 0)
  {
  }
  else
  {
    resp = separaDigitos(&n);
    printf("%d", resp);
  }

  return 0;
}