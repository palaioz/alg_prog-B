/*
 *  2. Ler uma string e chamar uma função para contar quantos caracteres
 *  possui. A ´main´ deve exibir a quantidade de caracteres.
 * */

#include <stdio.h>

int stringLen(char *str)
{
    int c;
    while (*str != '\0')
    {
        c++; 
        str++;
    }
    return c;
}

int main(){
    char p[150];

	printf("Digite uma palavra: ");
    scanf("%s", p);

    char qtd_caracteres = stringLen(p);

    printf("\nQuantidade de caracteres: %d\n", qtd_caracteres);
	
    return 0;
}
