/*
 *  9. Faça um programa que lê dois vetores de inteiros com 10 elementos
 *  e chama funções para executar as seguintes operações:
 *      a. Soma de vetores
 *      b. Subtração de vetores 
 *      c. Produto escalar dos vetores 
 *  Use ponteiros para manipular os vetores nas funções.
 * */

#include <stdio.h>

void sumVec(int *v1, int *v2, int *res, int size) {
    for (int i = 0; i < size; i++) {
        *(res + i) = *(v1 + i) + *(v2 + i);
    }
}

void subtrVec(int *v1, int *v2, int *res, int size) {
    for (int i = 0; i < size; i++) {
        *(res + i) = *(v1 + i) - *(v2 + i);
    }
}

int dotProduct(int *v1, int *v2, int size) {
    int prod = 0;
    for (int i = 0; i < size; i++) {
        prod += (*(v1 + i)) * (*(v2 + i));
    }
    return prod;
}

void printVec(int *v, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(v + i));
    }
    printf("]\n");
}

int main(){
    int v1[10], v2[10];
    int soma[10], sub[10];
    int tam = 10;

    printf("Digite os 10 elementos do primeiro vetor (v1):\n");
    for (int i = 0; i < tam; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", v1 + i);
    }

    printf("Digite os 10 elementos do segundo vetor (v2):\n");
    for (int i = 0; i < tam; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", v2 + i);
    }

    sumVec(v1, v2, soma, tam);
    subtrVec(v1, v2, sub, tam);
    int escalar = dotProduct(v1, v2, tam);

    printf("\n--- RESULTADOS ---\n");
    printf("a. Soma dos vetores: ");
    printVec(soma, tam);

    printf("b. Subtracao dos vetores (v1 - v2): ");
    printVec(sub, tam);

    printf("c. Produto escalar: %d\n", escalar);

    return 0;
}
