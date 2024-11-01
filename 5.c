#include <stdio.h>
#include <math.h>

int raizesEq2Grau(double a, double b, double c, double *x1, double *x2)
{
  double delta = b * b - 4 * a * c;
  if (delta > 0)
  {
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return 2;
  }
  else if (delta == 0)
  {
    *x1 = (-b + sqrt(delta)) / (2 * a);
    return 1;
  }
  else
  {
    return 0;
  }
}

int main(void)
{
  double a, b, c, x1, x2;
  scanf("%lf %lf %lf", &a, &b, &c);
  int resp = raizesEq2Grau(a, b, c, &x1, &x2);
  if (resp == 2)
  {
    printf("RAIZES DISTINTAS\n");
    if (x1 > x2)
    {
      printf("X1 = %.2lf\n", x2);
      printf("X2 = %.2lf", x1);
    }
    else
    {
      printf("X1 = %.2lf\n", x1);
      printf("X2 = %.2lf", x2);
    }
  } else if (resp == 1) {
    printf("RAIZ UNICA\n");
    printf("X1 = %.2lf", x1);
  } else {
    printf("RAIZES IMAGINARIAS");
  }
  return 0;
}