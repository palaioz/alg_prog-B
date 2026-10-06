#include <stdio.h>

int encontrarTamanho(char *p)
{
    int q = 0;
    while (*p != '\0')
    {
        q++;
        p++;
    }

    return q;
}

void substituir(char *ptr)
{
    for (; *ptr; ptr++)
    {
        if (*ptr == 'a' || *ptr == 'e' 
                || *ptr == 'i' || *ptr == 'o' 
                || *ptr == 'u') { *ptr = '*'; }
    }
    return;
}

int main()
{
    char p[30];
    
    printf("Digite uma palavra: ");
    scanf("%s", p);

    char tamanho = encontrarTamanho(p);

    printf("Tem %d caracteres\n", tamanho);
    substituir(p);

    printf("%s\n", p);

    return 0;
}
