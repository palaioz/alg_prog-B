/*
 * 1. Ler uma string e desenvolver uma função para escrevê-la
 * verticalmente na tela.
 * */

#include <stdio.h>

void verticalString(char *p)
{
    while (*p != '\0')
    {
        printf("%c\n", *p);
        p++;
    }
    return;
}

int main(){
    char p[150];

    printf("Digite uma palavra: ");
    scanf("%s", p);

    printf("Palavra na vertical: \n");
    verticalString(p);

    return 0;
}
