/*
4. Escrever um programa que lê uma string e chama uma função para escrevê-la verticalmente na
tela.
*/

#include <stdio.h>

// --- DECLARAÇÃO DE FUNÇÕES --- 

void printVertical(const char *str) {
    int i = 0;

    while (str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }
}

// --- CÓDIGO PRINCIPAL --- 

int main(){
    char text[150];

    printf("Digite uma palavra ou frase: ");
    scanf(" %[^\n]", text);

	printf("\n--- Texto Vertical ---\n");
    printVertical(text);
	
    printf("\n");
    return 0;
}
