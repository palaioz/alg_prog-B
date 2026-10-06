/* A passagem de vetores, matrizes e strings para as funções é 
 * sempre por referência.
**/

#include <stdio.h>

#define N 5

void readVector(float *p)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%f", (p+i));
    }
    
    return;
}

void vectorProduct(float *p, float *q, float *r)
{
    int i;
    for (i = 0; i < N; i++)
    {
        *(r+i) = *(p+i) * *(q+i);
    }
    return;
}

void showVector(float *p)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%.2f\t", *(p+i));
    }
    return;
}

int main()
{
    float A[N], B[N], RES[N];

    printf("Digite valores para o vetor A: \n");
    readVector(A);

    printf("Digite vetores para o vetor B: \n");
    readVector(B);

    vectorProduct(A, B, RES);

    printf("Vetor resultante: \n");
    showVector(RES);

    printf("\n");

    return 0;
}
