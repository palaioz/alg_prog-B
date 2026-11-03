/*
 *  10. Ler uma string e chamar uma função para invertê-la dentro da mesma 
 *  string. Mostrar a string invertida.
 * */

#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    scanf("%99s", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}