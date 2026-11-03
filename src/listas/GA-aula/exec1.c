/*
 *  1. Solicite ao usuário a quantidade de números inteiros que deseja armazenar em
 *  um vetor. Aloque dinamicamente o vetor de inteiros, com o tamanho informado. Gere
 *  os valores para o vetor usuário. Encontre e mostre: 
 *      (a) A soma dos elementos;
 *      (b) A média dos elementos;
 *      (c) O menor elemento do vetor.
 * */

#include <stdio.h>
#include <stdlib.h>


// --- FUNÇÕES ---
int *alocarVetor(int tam) {
    int *p;

    p = (int *) malloc(tam * sizeof(int));
    if (!p || p < 0) {
        printf("Erro na alocacao\n");
        exit(-1);
    }

    return p;
}

void gerarVetor(int *p, int t) {
    for (int i = 0; i < t; i++) {
        *(p+i) = rand()%100; // p[i] = rand()%100;
    }

    return;
}

void mostrarVetor(int *p, int t) {
    printf("Vetor: ");
    for (int i = 0; i < t; i++) {
        printf("%d\t", *(p+i));
    }
    return;
}

int somatorioVetor(int *p, int t) {
    int soma = 0;

    for (int i = 0; i < t; i++) {
        soma += *(p+i);
    }

    return soma;
}

float mediaVetor(int *p, int t) {
    float s = 0;
    for (int i = 0; i < t; i++) {
        s += *(p+i);
    }
    return s/t;
}

int menorElementoVetor(int *p, int t) {
    int menor = *p;
    for (int i = 0; i < t; i++) {
        if (*(p+i) < menor) {
            menor = *(p+i);
        }
    }
    return menor;
}

// --- MAIN ---
int main(){
    int *v, tam, soma, menor;
    float media; 

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    v = alocarVetor(tam);
    gerarVetor(v, tam);
    mostrarVetor(v, tam);
    
    soma = somatorioVetor(v, tam);
    media = mediaVetor(v, tam);
    menor = menorElementoVetor(v, tam);

    printf("\nSomatorio dos elementos do vetor: %d", soma);
    printf("\nMedia do vetor: %.1f", media);
    printf("\nMenor elemento do vetor: %d", menor);

    printf("\n");
    return 0;
}
