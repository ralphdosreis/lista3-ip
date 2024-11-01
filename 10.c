#include <stdio.h>

double compute_pi(int n)
{
  double aux_numerador = 2.0;
  double aux_denominador = 1.0;
  double pi = 1.0;
  int i;

  for (i = 1; i <= n; i++)
  {
    pi *= (aux_numerador / aux_denominador);

    if (i % 2 == 0)
    {
      aux_numerador += 2.0;
    }

    if (i % 2 != 0)
    {
      aux_denominador += 2.0;
    }
  }

  return pi * 2;
}

int main()
{
  int n;
  scanf("%d", &n);

  double pi = compute_pi(n);

  printf("%.12lf\n", pi);

  return 0;
}