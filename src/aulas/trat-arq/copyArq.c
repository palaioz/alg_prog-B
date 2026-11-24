#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char *string, int len) {
    if (fgets(string, len, stdin) == NULL) {
        *string = '\0';
        return;
    }
    string[strcspn(string, "\n")] = '\0';
}

int main() {
    FILE *forigem, *fdestino;
    char origem[32]; 
    int ch;
    
    printf("Digite o nome do arquivo a ser copiado: ");
    input(origem, sizeof(origem));

    if((forigem = fopen(origem, "r")) == NULL) {
        printf("Arquivo origem nao pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }
    
    printf("ARQUIVO %s ABERTO COM SUCESSO!!!\n", origem);

    if((fdestino = fopen("copia.txt", "w")) == NULL) {
        printf("Arquivo destino nao pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    while ((ch = getc(forigem)) != EOF) {
        putc(ch, fdestino);
    }

    fclose(forigem);
    fclose(fdestino);
    
    printf("ARQUIVO \"copia.txt\" CRIADO COM SUCESSO!!!\n");
    getchar();

    return 0;
}
