#include <stdio.h>
#include <stdlib.h>

void input(char *string, int len) {
    fgets(string, len, stdin);
    while(*string != '\n')
        string++;
    *string = '\0';

    return;
}

int main() {
    FILE *fp;
    char nome[16], ch;

    printf("Digite o nome do arquivo a ser aberto: ");
    input(nome, 16);

    if ((fp = fopen(nome, "r")) == NULL) {
        printf("\nArquivo nao pode ser aberto... PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n");

    ch = getc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    fclose(fp);

    return 0;
}
