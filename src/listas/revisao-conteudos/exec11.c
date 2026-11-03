/*
 *  11. Faça um programa que lê uma string e um caractere e chama 
 *  uma função para contar quantas vezes o caractere ocorre na string.
 *  Use ponteiros para receber e manipular a string na função. 
 * */

#include <stdio.h>

int contarCaractere(char *str, char c) {
    int contador = 0;
    while (*str != '\0') {
        if (*str == c) {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    char str[100];
    char c;

    printf("Digite uma string: ");
    scanf("%99s", str);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    int qtd = contarCaractere(str, c);

    printf("O caractere '%c' ocorre %d vezes.\n", c, qtd);

    return 0;
}