/*
    3 – Faça um algoritmo com dois vetores, um preenchido com valores sequenciais de 0 a 9 
    e outro com valores sequenciais de 10 a 19. Em uma função, intercale-os num terceiro 
    vetor formando uma nova variável. A função deve mostrar o novo vetor. Utilize ponteiros 
    e variáveis locais.
*/

#include <stdio.h>

void intercalaEImprime(int *v1, int *v2, int tamanho) {
    int v3[20];
    int i;
    int *p3 = v3;

    for (i = 0; i < tamanho; i++) {
        *p3 = *(v1 + i);
        p3++;
        *p3 = *(v2 + i);
        p3++;
    }

    printf("Vetor intercalado: ");
    for (i = 0; i < (tamanho * 2); i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[10];
    int vetor2[10];
    int i;

    for (i = 0; i < 10; i++) {
        vetor1[i] = i;
    }

    for (i = 0; i < 10; i++) {
        vetor2[i] = 10 + i;
    }

    intercalaEImprime(vetor1, vetor2, 10);

    return 0;
}