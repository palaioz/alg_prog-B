/*
 *  7. Ler um vetor com 10 elementos inteiros e um valor inteiro. Usar
 *  uma função para contar o número de vezes que o valor aparece no 
 *  vetor. A função ´main´ deve mostrar este valor.
 * */

#include <stdio.h>

int countOcur(int *v, int len, int val) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (v[i] == val) {
            count++;
        }
    }
    return count;
}

int main(){
    int vec[10];
    int searchVal;

    printf("Digite os 10 elementos inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    printf("\nDigite o valor que deseja procurar: ");
    scanf("%d", &searchVal);

    int total = countOcur(vec, 10, searchVal);

    printf("\nO valor %d aparece %d vez(es), no vetor.\n", searchVal, total);

    return 0;
}
