/*
 * 1. Ler uma string e desenvolver uma função para escrevê-la
 * verticalmente na tela.
 * */

#include <stdio.h>
#include <string.h>

void verticalString(char *p)
{
    while (*p != '\0')
    {
        if (*p != '\n') {
            printf("%c\n", *p);
        }
        p++;
    }
    return;
}

int main(){
    char p[150];

    printf("Digite uma palavra ou frase: ");
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0';

    printf("Palavra na vertical: \n");
    verticalString(p);

    return 0;
}
