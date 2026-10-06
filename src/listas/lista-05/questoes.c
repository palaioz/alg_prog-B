#include <stdio.h>
#include "questoes.h"

// 10. Ler uma string e escreve-la verticalmente na tela.
void escreve_vertical(const char *str) {
    while (*str) {
        printf("%c\n", *str);
        str++;
    }
}

// 11. Ler uma string e contar quantos caracteres possui.
int conta_caracteres(const char *str) {
    int cont = 0;
    while (*str) {
        cont++;
        str++;
    }
    return cont;
}

// 12. Ler uma string e inverte-la dentro da mesma string.
void inverte_string(char *str) {
    char *fim = str;
    char temp;
    while (*fim) fim++;
    fim--;

    while (str < fim) {
        temp = *str;
        *str = *fim;
        *fim = temp;
        str++;
        fim--;
    }
}

// 13. Escrever um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.
int eh_palindromo(const char *str) {
    const char *fim = str;
    while (*fim) fim++;
    fim--;

    while (str < fim) {
        if (*str != *fim) return 0;
        str++;
        fim--;
    }
    return 1;
}

// 14. Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso contrário, informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira ou se são diferentes e tem o mesmo tamanho.
void compara_palavras(const char *str1, const char *str2) {
    int tam1 = conta_caracteres(str1);
    int tam2 = conta_caracteres(str2);
    int iguais = 1;
    const char *p1 = str1, *p2 = str2;

    if (tam1 != tam2) {
        iguais = 0;
    } else {
        while (*p1 && *p2) {
            if (*p1 != *p2) {
                iguais = 0;
                break;
            }
            p1++;
            p2++;
        }
    }

    if (iguais) {
        printf("As palavras sao iguais.\n");
    } else if (tam1 > tam2) {
        printf("A primeira e maior do que a segunda.\n");
    } else if (tam2 > tam1) {
        printf("A segunda e maior do que a primeira.\n");
    } else {
        printf("Sao diferentes e tem o mesmo tamanho.\n");
    }
}

// 15. Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que a letra informada for encontrada na palavra.
void corta_palavra(char *str, char letra) {
    while (*str) {
        if (*str == letra) {
            *str = '\0';
            break;
        }
        str++;
    }
}

// 16. Ler um vetor com 10 elementos inteiros e um valor inteiro. Apresentar como resultado o número de vezes que o valor aparece no vetor.
int conta_ocorrencias(const int *vetor, int tamanho, int valor) {
    int cont = 0;
    const int *fim = vetor + tamanho;
    while (vetor < fim) {
        if (*vetor == valor) {
            cont++;
        }
        vetor++;
    }
    return cont;
}

// 17. Ler dois vetores com 15 elementos inteiros e um vetor com 15 posições, que armazena as quatro operações aritméticas. Apresentar o resultado de cada operação executada, considerando as posições respectivas nos três vetores.
void executa_operacoes(const int *vet1, const int *vet2, const char *ops, int tamanho) {
    const int *v1 = vet1;
    const int *v2 = vet2;
    const char *op = ops;
    const int *fim = vet1 + tamanho;
    int pos = 0;

    while (v1 < fim) {
        printf("Posicao %d [%d %c %d]: ", pos, *v1, *op, *v2);
        switch (*op) {
            case '+':
                printf("%d\n", *v1 + *v2);
                break;
            case '-':
                printf("%d\n", *v1 - *v2);
                break;
            case '*':
                printf("%d\n", *v1 * *v2);
                break;
            case '/':
                if (*v2 != 0) {
                    printf("%.2f\n", (float)*v1 / *v2);
                } else {
                    printf("Erro (divisao por zero)\n");
                }
                break;
            default:
                printf("Operacao invalida\n");
                break;
        }
        v1++;
        v2++;
        op++;
        pos++;
    }
}

void remove_newline(char *str) {
    while (*str) {
        if (*str == '\n') {
            *str = '\0';
            break;
        }
        str++;
    }
}
