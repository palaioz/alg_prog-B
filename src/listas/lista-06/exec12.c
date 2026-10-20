/*
    12. Considere que em uma lavagem de carros, é necessário implementar 
    um programa que controle a entrada e saída de veículos. Ao chegar um 
    veículo, são registrados a placa, o nome e telefone do proprietário, 
    valor a ser pago e a situação (pago ou não pago). Considere que são 
    atendidos no máximo 10 veículos. Desenvolva este programa usando 
    funções para:
        – obter os dados de um veículo
        – registrar o pagamento da lavagem de um veículo
        – mostrar todos os dados de um veículo
        – calcular o valor total recebido.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int *maxValue(int *vec) {
    int *max_ptr = vec;

    for (int i = 1; i < TAM; i++){
        if (*(vec + i) > *max_ptr) {
            max_ptr = (vec + i);
        }
    }

    return max_ptr;
}

int main() {
    int *ptr;
    int vec[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vec[i] = rand()%100;
    }

    ptr = maxValue(vec);

    printf("\nVetor gerado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d  ", vec[i]);
    }

    printf("\nMaior valor: %d\n", *ptr);    

    return 0;
}