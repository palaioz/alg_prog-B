/*
	7. Implementar um programa que leia duas datas e chame uma função para verificar o número de
	dias decorridos entre ambas. Para simplificar, considere que todos os meses têm 30 dias.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Função que converte uma data para um valor total em dias
// Considerando ano comercial (12 * 30 = 360 dias) e meses de 30 dias
int data_para_dias(Data d) {
    return (d.ano * 360) + (d.mes * 30) + d.dia;
}

// Função que calcula a diferença absoluta de dias entre duas datas
int calcular_diferenca_dias(Data d1, Data d2) {
    int total_dias1 = data_para_dias(d1);
    int total_dias2 = data_para_dias(d2);

    return abs(total_dias1 - total_dias2);
}

int main() {
    Data d1, d2;

    printf("--- Primeira Data ---\n");
    printf("Digite o dia, mes e ano (ex: 15 03 2023): ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    printf("\n--- Segunda Data ---\n");
    printf("Digite o dia, mes e ano (ex: 10 05 2024): ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int dias_decorridos = calcular_diferenca_dias(d1, d2);

    printf("\nDias decorridos entre %02d/%02d/%04d e %02d/%02d/%04d: %d dias\n",
           d1.dia, d1.mes, d1.ano, d2.dia, d2.mes, d2.ano, dias_decorridos);

    return 0;
}