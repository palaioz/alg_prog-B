/*
 *  3. Ler uma string e chamar uma função para invertê-la dentro 
 *  da mesma string. Mostrar a string invertida.
 * */

#include <stdio.h>

int lenString(char *str)
{
    int size = 0;
    while (*str != '\0') 
    {  
        size++;
        str++;
    }
    return size;
}

void invertString(char *str, int len)
{ 
    int i = 0;
    int j = len - 1;
    char temp;
    
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(){
    char str[100];
    
	printf("Digite uma palavra: ");
    scanf("%s", str);

    int len = lenString(str);
    invertString(str, len);

    printf("\nString invertida: %s\n", str);

    return 0;
}
