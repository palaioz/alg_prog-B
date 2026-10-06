#include <stdio.h>

float calc_media(float a, float b, float c)
{
    return (a + b + c) / 3;
}

void updateValue(float x)
{
    x = x + 10.0;
    printf("x = %.2f\n\n", x);
}

void updateReference(float *x)
{
    *x = *x + 10.0;
    printf("x = %.2f\n\n", *x);
}

int main()
{
    float a = 0.9, b = 1.3, c = 3.1;
    float media = calc_media(a, b, c);

    printf("\nPASSAGEM POR VALOR\n");

    printf("a = %.2f\n", a);
    printf("&a = %p\n", &a);
    updateValue(a);
    printf("a = %.2f\n", a);
    printf("&a = %p\n", &a);
    
    printf("b = %.2f\n", b);
    printf("&b = %p\n", &b);
    printf("c = %.2f\n", c);
    printf("&c = %p\n", &c);
    
    printf("media = %.2f\n", media);

    printf("\n----------------------\n");

    printf("\nPASSAGEM POR REFERÊNCIA\n");

    printf("a = %.2f\n", a);
    printf("&a = %p\n", &a);
    updateReference(&a);
    printf("a = %.2f\n", a);
    printf("&a = %p\n", &a);

    return 0;
}
