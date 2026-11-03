/*
 *  6. Ler uma palavra com no máximo 20 caracteres. Se a palavra 
 *  tiver um número par de caracteres então escrevê-la na ordem 
 *  inversa, senão contar o número de vogais da palavra.
 * */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[21];

    printf("Digite uma palavra: ");
    scanf("%20s", palavra);

    int len = strlen(palavra);

    if (len % 2 == 0) {
        printf("Ordem inversa: ");
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", palavra[i]);
        }
        printf("\n");
    } else {
        int vogais = 0;
        for (int i = 0; i < len; i++) {
            char c = tolower(palavra[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            }
        }
        printf("Numero de vogais: %d\n", vogais);
    }

    return 0;
}