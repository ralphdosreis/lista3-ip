#include <stdio.h>
#include <string.h>

void print_bytes(const void *end_byte, int n)
{
    const unsigned char *byte = (const unsigned char *)end_byte;

    int i;
    for (i = 0; i < n; i++)
    {
        int bit;
        for (bit = 7; bit >= 0; bit--)
        {
            printf("%d", (byte[i] >> bit) & 1);
        }
        printf(" ");
    }
    printf("\n");
}

int main()
{
    double n;

    scanf("%lf", &n);

    unsigned char uc = (unsigned char)n;
    print_bytes(&uc, sizeof(uc));

    unsigned short us = (unsigned short)n;
    print_bytes(&us, sizeof(us));

    unsigned int ui = (unsigned int)n;
    print_bytes(&ui, sizeof(ui));

    float f = (float)n;
    print_bytes(&f, sizeof(f));

    double d = n;
    print_bytes(&d, sizeof(d));

    return 0;
}