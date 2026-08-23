/*
9. Escrever um programa que lê um horário hh:mm:ss e verifica se este está correto.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

struct Horario {
    int h;
    int m;
    int s;
};

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct Horario tempo;
    int qtd_lidos;

    printf("Digite o horário (hh:mm:ss): ");
    // O scanf retorna a quantidade de valores lidos com sucesso (deve ser 3)
    qtd_lidos = scanf("%d:%d:%d", &tempo.h, &tempo.m, &tempo.s);

    // Validação da entrada e dos limites numéricos
    if (qtd_lidos == 3 && 
        (tempo.h >= 0 && tempo.h <= 23) && 
        (tempo.m >= 0 && tempo.m <= 59) && 
        (tempo.s >= 0 && tempo.s <= 59)) {
        
        printf("\nO horário %02d:%02d:%02d é VÁLIDO.\n", tempo.h, tempo.m, tempo.s);
    } else {
        printf("\nO horário digitado é INVÁLIDO.\n");
    }

    return 0;
}