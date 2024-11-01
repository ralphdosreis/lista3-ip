#include <stdio.h>

int fibonacci(int *t1, int *t2, int *n) {
  int i, valor = 0;
  for(i=3;i<=*n;i++) {
    valor = *t1 + *t2;
    *t1 = *t2;
    *t2 = valor;
  }
  return valor;
}

int main(void) {
  int t1, t2, n, resp;
  scanf("%d %d %d", &t1, &t2, &n);
  resp = fibonacci(&t1, &t2, &n);
  printf("%d", resp);
  return 0;
}