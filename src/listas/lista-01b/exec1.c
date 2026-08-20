/*
1. Desenvolva um algoritmo para controlar a quantidade de produtos existentes em uma
Papelaria. Considere que cada produto possui: código (inteiro), nome (até 30 caracteres),
unidade (até 20 caracteres), preço custo, preço de venda e quantidade em estoque. As
seguintes funcionalidades devem estar implementadas:
    i. Ler os dados dos produtos informados pelo usuário, enquanto o usuário desejar digitar
(pode ser feita uma pergunta ao usuário, se deseja cadastrar mais um produto).
    ii. Para o preço de venda, solicitar ao usuário o percentual de lucro desejado sobre o preço
de custo (o mesmo percentual é aplicado a todos os produtos).
    iii. Após a leitura, o usuário pode escolher as opções desejadas:
        a. Listar os dados de todos os produtos.
        b. Listar os dados de um produto, conforme o código digitado pelo usuário.
        c. Listar os produtos cuja quantidade em estoque é zero.
        d. Mostrar os dados do produto de maior valor de venda.
        e. Mostrar os dados do produto de menor valor de venda.
*/

#include <stdio.h>
#include <stdlib.h>'
#include <windows.h>
#include <locale.h>

struct tipoProduto{
    int codigo;
    char nome[30];
    char unidade[20];
    float PCompra;
    float PVenda;
    float qtd_estoque;
};

struct tipoProduto lerProduto(const char* mensagem){

    struct tipoProduto p;
    char auxChar;
    char auxFloat;
    char auxInt;

    printf("%s", mensagem);

    scanf("%d ", &p.codigo);

    scanf("%s", p.nome);
    scanf("%s", p.unidade);
    
    scanf("%f ", p.PCompra);
    scanf("%f ", p.PVenda);
    scanf("%f ", p.qtd_estoque);

    return p;
}

int main(){
    SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "pt_BR.UTF-8");

    FILE *fptr;
    fptr = fopen(".\\test.txt", "w");

    char _string[100];
    fgets(_string, 100, fptr);

    printf("%s", _string);

    fclose(fptr);

    return 0;
}