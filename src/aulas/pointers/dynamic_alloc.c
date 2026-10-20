#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *p, int t) {
    int i;
    
    for (i = 0; i < t; i++) {
        // p[i] = rand() % 100;
        *(p + i) = rand() % 100;
    }
    return;
}

void mostrarVetor(int *p, int tam) {
    int i = 0;
    while (i < tam) {
        printf("%d\n", *(p + i));
        i++;
    }
    return;
}

int *maior(int *p, int tam) {
    int *m, i;

    m = p;
    for (i = 1; i < tam; i++) {
        if (*(p + i) > *m) {
            m = (p + i);
        }
    }

    return m;
}

int main() {
    int *v, tam, *pmaior;

    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    gerarVetor(v, tam);
    mostrarVetor(v, tam);

    pmaior = maior(v, tam);

    printf("\nMaior valor = %d\n", *pmaior);

    free(v);

    return 0;
}