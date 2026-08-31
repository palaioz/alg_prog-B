/*
10. Faça um programa, com uma função que recebe como parâmetro uma letra e uma string, e
retorne um valor inteiro indicando quantas vezes a letra aparece na string. A função main deve
ler a string, a letra e chamar a função implementada.
*/

#include <stdio.h>
#include <ctype.h>


int contarOcorrencias(char letra, const char *str) {
    int contador = 0;
    int i = 0;

    char letraBusca = tolower(letra);

    while (str[i] != '\0') {
        if (tolower(str[i]) == letraBusca) {
            contador++;
        }
        i++;
    }

    return contador;
}


int main(){
    char texto[150];
    char letraProcurada;

    printf("\n=== CONTADOR DE OCORRENCIAS DE LETRAS ===\n");

    printf("Digite uma frase ou palavra: ");
    scanf(" %[^\n]", texto);

    printf("Digite a letra que deseja contar: ");
    scanf(" %c", &letraProcurada);
    int total = contarOcorrencias(letraProcurada, texto);

    printf("\n--- RESULTADO ---");
    printf("\nTexto informado: \"%s\" ", texto);
    printf("\nA letra '%c' aparece %d vez(es) no texto.\n\n", letraProcurada, total);

	return 0;
}
