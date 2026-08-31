/*
3. Escrever um programa que leia dois números e a seguir realize as operações aritméticas básicas
(+, -, *, /) sobre estes números. Cada uma das operações deve ser implementada em uma função
diferente. 
*/

#include <stdio.h>

// --- DECLARAÇÃO DE FUNÇÕES ---

float _sum(float a, float b){
    return a + b;
}

float _diff(float a, float b){
    return a - b;
}

float _mult(float a, float b){
    return a * b;
}

float _div(float a, float b){
    if (b == 0){
        printf("ERRO: Divisao por zero | Indefinido.");
        return 0;
    }

    return a / b;
}

// --- CÓDIGO PRINCIPAL ---

int main(){
    float a = 0, b = 0;
    int opt = 0;

	printf("\n=== CALCULADORA MINIMALISTA ===\n");
    printf("Digite dois numeros (a b): ");
    scanf("%f %f", &a, &b);

    printf("\n=== ESCOLHA A OPERACAO ===\n");
    printf("\n[1] - (+) Somar");
    printf("\n[2] - (-) Subtrair");
    printf("\n[3] - (x) Multiplicar");
    printf("\n[4] - (/) Dividir");
    printf("\n[0] - SAIR");
    printf("\nOpcao: ");
    scanf("%d", &opt);

    switch (opt) {
        case 0:
            break;
        case 1:
            printf("Resultado: %.2f", _sum(a,b));
            break;
        case 2:
            printf("Resultado: %.2f", _diff(a,b));
            break;
        case 3:
            printf("Resultado: %.2f", _mult(a,b));
            break;
        case 4:
            if (b != 0){
                printf("Resultado: %.2f", _div(a,b));
            } else {
                _div(a, b);
            }
            break;
    }
	
    printf("\n");
    return 0;
}
