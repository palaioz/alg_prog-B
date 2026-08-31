/*
9. Faça um programa que leia um caractere e chame uma função para verificar se o caractere é
uma vogal. Ao final, deve ser mostrada uma mensagem (dentro da main) indicando o resultado
do teste. A função deve retornar 1 se for vogal e 0 caso contrário. Para simplificar, considere
apenas as letras sem acentuação.
*/

#include <stdio.h>
#include <ctype.h>


int ehVogal(char c) {
    char minusculo = tolower(c);

    if (minusculo == 'a' || minusculo == 'e' || minusculo == 'i' || minusculo == 'o' || minusculo == 'u'){
        return 1;
    }

    return 0;
}


int main(){
    char letra;

    printf("\n=== VERIFICADOR DE VOGAL ===\n");
    printf("Digite um caractere: ");
    scanf(" %c", &letra);

    if (ehVogal(letra)){
        printf("\nO caractere '%c' eh uma VOGAL.\n", letra);
    } else {
        printf("\nO caractere '%c' NAO eh uma vogal.\n", letra);
    }

	return 0;
}
