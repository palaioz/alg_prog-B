/*
 *  5. Ler duas palavras e usar uma função para compará-las. A ´main´
 *  deve informar se as palavras são iguais ou diferentes.
 * */

#include <stdio.h>

int compareStrings(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return 0;
        }
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    return 0;
}

int main(){
    char palavra1[100];
    char palavra2[100];

	printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (compareStrings(palavra1, palavra2)) {
        printf("\nAs palavras sao IGUAIS.\n");
    } else {
        printf("\nAs palavras sao DIFERENTES.\n");
    }

	return 0;
}
