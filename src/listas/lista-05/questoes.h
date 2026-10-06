#ifndef QUESTOES_H
#define QUESTOES_H

// 10. Ler uma string e escreve-la verticalmente na tela.
void escreve_vertical(const char *str);

// 11. Ler uma string e contar quantos caracteres possui.
int conta_caracteres(const char *str);

// 12. Ler uma string e inverte-la dentro da mesma string.
void inverte_string(char *str);

// 13. Escrever um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.
int eh_palindromo(const char *str);

// 14. Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso contrário, informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira ou se são diferentes e tem o mesmo tamanho.
void compara_palavras(const char *str1, const char *str2);

// 15. Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que a letra informada for encontrada na palavra.
void corta_palavra(char *str, char letra);

// 16. Ler um vetor com 10 elementos inteiros e um valor inteiro. Apresentar como resultado o número de vezes que o valor aparece no vetor.
int conta_ocorrencias(const int *vetor, int tamanho, int valor);

// 17. Ler dois vetores com 15 elementos inteiros e um vetor com 15 posições, que armazena as quatro operações aritméticas. Apresentar o resultado de cada operação executada, considerando as posições respectivas nos três vetores.
void executa_operacoes(const int *vet1, const int *vet2, const char *ops, int tamanho);

// Função auxiliar para remoção do caractere de nova linha
void remove_newline(char *str);

#endif

