#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocar(char *p, int t) {
    for ( ; *p; p++) {
        *p = *(p+2);
    }

    return;
}

int main() {
    char *palavra;
    int tam;

    printf("Quantos caracteres? ");
    scanf("%d", &tam);

    getchar();

    palavra = (char *) malloc(tam * sizeof(char));
    if (!palavra) {
        printf("Erro na alocacao dinamica!");
        exit(-1);
    }

    printf("Palavra: ");
    fgets(palavra, tam + 1, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("Original: %s", palavra);

    trocar(palavra, tam);
    printf("\nTrocada: %s", palavra);
    free(palavra);
    
    printf("\n");
    return 0;
}
