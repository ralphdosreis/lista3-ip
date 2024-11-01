#include <stdio.h>

double absoluto(double n)
{

  return (n < 0) ? -n : n;
}

void raiz(double n, double p, double *erro, double *rk)
{

  double r0 = 1;
  do
  {

    *rk = (r0 + (n / r0)) / 2.0;
    *erro = absoluto(n - (*rk) * (*rk));
    printf("r: %.9lf, err: %.9lf\n", *rk, *erro);
    r0 = *rk;

  } while (*erro > p);
}

int main()
{
  double n, e;

  double rk = 0.0;
  double erro = 0.0;

  scanf("%lf", &n);
  scanf("%lf", &e);

  raiz(n, e, &erro, &rk);
}