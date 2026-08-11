#include <stdio.h>

int main() {
    FILE *fptr;

    int qtd_exec = 9;

    for (int i = 1; i <= qtd_exec; i++) {
        char filename[150];

        printf("\nSalvando outro arquivo...\n");

        // snprintf(filename, sizeof(filename), "C:/Users/tonho/CC_417/alg_prog/exercicios/C/src/listas/lista-03/exec%0d.c", i);
        snprintf(filename, sizeof(filename), "C:/Users/laboratorio/alg_prog/alg_prog-B/src/listas/lista-01/exec%0d.c", i);

        printf("%s\n", filename);

        fptr = fopen(filename, "w");
        
        if (fptr == NULL) {
            printf("Erro ao criar o arquivo!\n");
            continue;
        }
        
        fprintf(fptr, "#include <stdio.h>");
        fprintf(fptr, "\nint main(){");
        fprintf(fptr, "\n\tprintf(\"Hello World\");");
        fprintf(fptr, "\n\treturn 0;");
        fprintf(fptr, "\n}");

        printf("Arquivo %s foi salvo!\n", filename);

        fclose(fptr);
    }

    return 0;
}