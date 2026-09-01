#include <stdio.h>

// Ler uma string e contar o número de caracteres (tamanho da string)
int strSize(char p[]){
    int i = 0;
    while (p[i] != '\0'){
        i++;
    }
    return i;
}

// Função para contar quantidade de ocorrências de um caractere numa string
int contarLetra(char p[], char l){
    int q = 0, i;
    for(i = 0; p[i] != '\0'; i++){
        if (p[i] == l){
            q++;
        }
    }
    return q;
}

int main(){
    char palavra[30], letra;
    int tamanho, qtdLetra;

    printf("Palavra: ");
    scanf(" %[^\n]", palavra);
    
    printf("Digite uma letra para encontrar: ");
    scanf(" %c", &letra);

    tamanho = strSize(palavra);
    qtdLetra = contarLetra(palavra, letra);

    printf("Tamanho total da string: %d\n", tamanho);
    printf("A letra '%c' aparece %d vez(es)\n", letra, qtdLetra);

    return 0;
}