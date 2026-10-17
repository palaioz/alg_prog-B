/*
 *  8. Faça um programa que lê uma string e um caractere e chama uma função
 *  para contar quantas vezes o caractere ocorre na string. Use ponteiros
 *  para receber e manipular a string na função.
 * */

#include <stdio.h>

int countChar(char *str, char c) {
    int count = 0;

    while (*str != '\0') {
        if (*str == c) {
            count++;
        }
        str++;
    }

    return count;
}

int main(){
    char palavra[150];
    char letra;

    printf("Digite uma string: ");
    scanf("%s", palavra);

    printf("Digite o caractere que deseja contar: ");
    scanf(" %c", &letra);

    int total = countChar(palavra, letra);

    printf("\nO caractere '%c' aparece %d vez(es) na string.\n", letra, total);

    return 0;
}
