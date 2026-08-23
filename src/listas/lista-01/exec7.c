/*
7. Fazer um programa que leia uma string no formato hh:mm:ss, converta os elementos desta
strings em inteiros armazenando-os em uma estrutura e mostre o resultado na seguinte forma:
“hh hora(s), mm minuto(s) e ss segundo(s).” Para esta questão, utilize a função atoi() que
converte uma string em um número inteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

// Definição única da estrutura
struct tipoHorario {
    int h;
    int min;
    int seg;
};

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct tipoHorario hora; 
    char horaLida[10];
    char aux[3];

    // O caractere nulo é colocado uma única vez na última posição
    aux[2] = '\0';

    printf("Digite um horario (hh:mm:ss): ");
    scanf("%9s", horaLida);

    // Converte a hora (índices 0 e 1)
    aux[0] = horaLida[0];
    aux[1] = horaLida[1];
    hora.h = atoi(aux);
    
    // Converte os minutos (índices 3 e 4)
    aux[0] = horaLida[3];
    aux[1] = horaLida[4];
    hora.min = atoi(aux);
    
    // Converte os segundos (índices 6 e 7)
    aux[0] = horaLida[6];
    aux[1] = horaLida[7];
    hora.seg = atoi(aux);

    // Saída no formato solicitado
    printf("\n%02d hora(s), %02d minuto(s) e %02d segundo(s).\n", hora.h, hora.min, hora.seg);

    return 0;
}