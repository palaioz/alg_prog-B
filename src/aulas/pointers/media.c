#include <stdio.h>

int main() {
    float n1, n2, media;
    float *pn1, *pn2, *pmedia;

    pn1 = &n1;
    pn2 = &n2;
    pmedia = &media;

    printf("Nota 1: ");
    scanf("%f", pn1);
    printf("Nota 2: ");
    scanf("%f", pn2);

    printf("\n--- UMA INTEPRETAÇÃO SOBRE PONTEIROS ---\n");
    printf("Conteúdo de pn1 (pn1) = %p\n", pn1);
    printf("Conteúdo apontado por pn1 (*pn1) = %.2f\n", *pn1);
    printf("Endereço de pn1 (&pn1) = %p\n", &pn1);
    printf("Endereço do conteúdo apontado por pn1 (&*pn1) = %p\n", &*pn1);
    printf("Endereço de n1 (&n1) = %p\n", &n1);
    printf("Conteúdo de n1 (n1) = %.2f\n", n1);
    printf("-----------------------------------------\n");

    // media = (n1 + n2) / 2;
    *pmedia = (*pn1 + *pn2) / 2;
    
    printf("Média = %.2f\n", *pmedia);

    return 0;
}
