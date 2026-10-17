/*
 *  4. Escrever um programa que leia uma palavra qualquer e use
 *  uma função para verificar se esta palavra é um palíndromo.
 * */

#include <stdio.h>

int isPalindrome(char *str){
    int len = 0;
    char *temp = str;

    while (*temp != '\0'){
        len++;
        temp++;
    }

    int i = 0;
    int j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (isPalindrome(palavra)) {
        printf("\nA palavra \'%s\' e um palindromo.\n", palavra);
    } else {
        printf("\nA palavra \'%s\' NAO e um palindromo.\n", palavra);
    }

    return 0;
}
