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
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

// struct de um tipo básico de produto (codigo, nome, unidade, PCompra, PVenda, qtd_estoque)
typedef struct Produto {
    int codigo;
    char nome[30];
    char unidade[20];
    float PCompra;
    float PVenda;
    float qtd_estoque;
};

/*
    Função para ler um produto
    - Parâmetro(s): const char* mensagem;
    - Retorna: struct tipoProduto p;
*/
struct Produto lerProduto(const char* mensagem){

    struct Produto p;

    printf("%s", mensagem);

    printf("Código do produto: ");
    scanf("%d", &p.codigo);

    printf("Nome: ");
    scanf("%s", p.nome);
    printf("Unidade/Categoria: ");
    scanf("%s", p.unidade);
    
    printf("Preço de compra: ");
    scanf("%f", &p.PCompra);
    printf("Preço de venda: ");
    scanf("%f", &p.PVenda);
    printf("Quantidade em estoque: ");
    scanf("%f", &p.qtd_estoque);

    return p;
}

int main(){
    SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "pt_BR.UTF-8");

    int cpt = 2;
    int count = 0;

    // struct Product *products = malloc(cpt * sizeof(Product));

    // if (products == NULL) {
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }

    // struct tipoProduto p[];
    int opt = 1;

    printf("\n===================================\n");
	printf("\tCONTROLE DE ESTOQUE");
	printf("\n===================================\n");


    while (opt != 0){
        struct Produto produto1 = lerProduto("\nDigite alguma coisa\n");
        printf("\n[1] - Continuar");
        printf("\n[0] - Encerrar");
        printf("\nOpção: ");
        scanf("%d", &opt);
    }


    return 0;
}