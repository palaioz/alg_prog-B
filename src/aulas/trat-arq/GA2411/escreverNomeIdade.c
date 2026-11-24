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

    printf("Digite o nome do arquivo a ser criado: ");
    input(nome, 16);

    if ((fp = fopen("dados.txt", "w")) == NULL) {
        printf("\nO arquivo nao pode ser aberto... PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    printf("\nARQUIVO TEXTO ABERTO COM SUCESSO!!!\nDigite seu texto(# - terminal): \n");
    do {
        ch = getchar();
        if (ch!='#') putc(ch, fp);
    } while (ch!='#');

    printf("\nTermino da Digitacao\n");
    fclose(fp);

    return 0;
}
