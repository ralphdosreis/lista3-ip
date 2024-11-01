#include <stdio.h>
#include <math.h>
#define true 1

int next_power(int n, int p, int *base)
{
    int aux2 = 1;
    int potencia;
    int aux;

    if (n <= 0)
    {
        *base = 1;
        return potencia = 1;
    }

    while (true)
    {
        potencia = pow(aux2, p);

        if (potencia > n)
        {
            break;
        }

        aux2++;
    }

    aux = pow(aux2 - 1, p);
    if (fabs(potencia - n) >= fabs(aux - n))
    {
        potencia = aux;
        *base = aux2 - 1;
    }
    else
    {
        *base = aux2;
    }

    return potencia;
}

int main()
{
    int n, p, base;
    scanf("%d %d", &n, &p);

    int potencia = next_power(n, p, &base);

    printf("%d -> %d^%d = %d", n, base, p, potencia);

    return 0;
}