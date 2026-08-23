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
#include <string.h>
#include <windows.h>
#include <locale.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char nome[30];
    char unidade[20];
    float PCompra;
    float PVenda;
    float qtd_estoque;
} Produto;

// Função auxiliar para exibir os dados de um produto
void exibirProduto(Produto p) {
    printf("\nCódigo: %d | Nome: %s | Unidade: %s", p.codigo, p.nome, p.unidade);
    printf("\nCusto: R$ %.2f | Venda: R$ %.2f | Estoque: %.2f\n", p.PCompra, p.PVenda, p.qtd_estoque);
    printf("--------------------------------------------------");
}

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Produto produtos[MAX_PRODUTOS];
    int total = 0;
    float margem_lucro;
    char opcao_cadastro;

    printf("===================================\n");
    printf("\tCONTROLE DE PAPELARIA\n");
    printf("===================================\n");

    // Item ii: Solicita a margem de lucro percentual antes do cadastro
    printf("Digite o percentual de lucro desejado (%%) para todos os produtos: ");
    scanf("%f", &margem_lucro);

    // Item i: Leitura dos produtos enquanto o usuário desejar
    do {
        printf("\n--- Cadastrando Produto %d ---\n", total + 1);

        printf("Código do produto: ");
        scanf("%d", &produtos[total].codigo);

        // Limpa o buffer antes do fgets
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nome do produto: ");
        fgets(produtos[total].nome, sizeof(produtos[total].nome), stdin);
        produtos[total].nome[strcspn(produtos[total].nome, "\n")] = '\0';

        printf("Unidade (ex: un, caixa, pct): ");
        fgets(produtos[total].unidade, sizeof(produtos[total].unidade), stdin);
        produtos[total].unidade[strcspn(produtos[total].unidade, "\n")] = '\0';

        printf("Preço de custo: R$ ");
        scanf("%f", &produtos[total].PCompra);

        printf("Quantidade em estoque: ");
        scanf("%f", &produtos[total].qtd_estoque);

        // Cálculo do preço de venda com base na margem de lucro
        produtos[total].PVenda = produtos[total].PCompra * (1.0f + (margem_lucro / 100.0f));

        total++;

        printf("\nDeseja cadastrar outro produto? (S/N): ");
        scanf(" %c", &opcao_cadastro);

    } while ((opcao_cadastro == 'S' || opcao_cadastro == 's') && total < MAX_PRODUTOS);

    // Item iii: Menu de navegação e relatórios
    char opcao_menu;
    do {
        printf("\n\n===================================");
        printf("\n\tMENU DE OPÇÕES");
        printf("\n===================================");
        printf("\na. Listar todos os produtos");
        printf("\nb. Buscar produto por código");
        printf("\nc. Listar produtos com estoque zero");
        printf("\nd. Mostrar produto de MAIOR valor de venda");
        printf("\ne. Mostrar produto de MENOR valor de venda");
        printf("\nf. Sair do programa");
        printf("\nEscolha uma opção: ");
        scanf(" %c", &opcao_menu);

        switch (opcao_menu) {
            case 'a':
            case 'A':
                printf("\n--- RELATÓRIO DE TODOS OS PRODUTOS ---");
                for (int i = 0; i < total; i++) {
                    exibirProduto(produtos[i]);
                }
                break;

            case 'b':
            case 'B': {
                int cod_busca, achou = 0;
                printf("\nDigite o código do produto desejado: ");
                scanf("%d", &cod_busca);

                for (int i = 0; i < total; i++) {
                    if (produtos[i].codigo == cod_busca) {
                        exibirProduto(produtos[i]);
                        achou = 1;
                        break;
                    }
                }
                if (!achou) {
                    printf("\nProduto com o código %d não foi encontrado.\n", cod_busca);
                }
                break;
            }

            case 'c':
            case 'C': {
                int encontrou_zero = 0;
                printf("\n--- PRODUTOS COM ESTOQUE ZERO ---");
                for (int i = 0; i < total; i++) {
                    if (produtos[i].qtd_estoque <= 0) {
                        exibirProduto(produtos[i]);
                        encontrou_zero = 1;
                    }
                }
                if (!encontrou_zero) {
                    printf("\nNenhum produto está com estoque zerado.\n");
                }
                break;
            }

            case 'd':
            case 'D': {
                int id_maior = 0;
                for (int i = 1; i < total; i++) {
                    if (produtos[i].PVenda > produtos[id_maior].PVenda) {
                        id_maior = i;
                    }
                }
                printf("\n--- PRODUTO DE MAIOR VALOR DE VENDA ---");
                exibirProduto(produtos[id_maior]);
                break;
            }

            case 'e':
            case 'E': {
                int id_menor = 0;
                for (int i = 1; i < total; i++) {
                    if (produtos[i].PVenda < produtos[id_menor].PVenda) {
                        id_menor = i;
                    }
                }
                printf("\n--- PRODUTO DE MENOR VALOR DE VENDA ---");
                exibirProduto(produtos[id_menor]);
                break;
            }

            case 'f':
            case 'F':
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao_menu != 'f' && opcao_menu != 'F');

    return 0;
}