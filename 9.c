#include <stdio.h>

int converteEmNotasMoedas(int *valor, int *n100, int *n50, int *n10, int *m1)
{
  *n100 = *valor / 100;
  *n50 = (*valor - *n100 * 100) / 50;
  *n10 = ((*valor - *n100 * 100) - *n50 * 50) / 10;
  *m1 = ((*valor - *n100 * 100) - *n50 * 50) - *n10 * 10;
}

int main(void)
{
  int valor, n100, n50, n10, m1, resp;
  scanf("%d", &valor);
  resp = converteEmNotasMoedas(&valor, &n100, &n50, &n10, &m1);
  printf("NOTAS DE 100 = %d\n", n100);
  printf("NOTAS DE 50 = %d\n", n50);
  printf("NOTAS DE 10 = %d\n", n10);
  printf("MOEDAS DE 1 = %d", m1);
  return 0;
}