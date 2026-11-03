/*
 *  9. Escrever um programa que leia uma palavra qualquer e em uma função,
 *  verifique se esta palavra é um palíndromo. Se for palíndromo, a função
 *  deve retornar 1, se não for, a função deve retornar 0.
 * */

#include <stdio.h>
#include <string.h>

int ehPalindromo(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (ehPalindromo(palavra)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}