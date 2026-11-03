/*
    2 – Faça um programa que leia uma palavra qualquer e depois, em uma função, substitua todas as vogais por
    ‘#’. Utilize ponteiros.
*/

#include <stdio.h>
#include <ctype.h>

void substituirVogais(char *str) {
    while (*str != '\0') {
        char c = tolower(*str);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            *str = '#';
        }
        
        str++; 
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra); 

    substituirVogais(palavra);

    printf("Palavra modificada: %s\n", palavra);

    return 0;
}