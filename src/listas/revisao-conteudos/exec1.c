/*
    1 – Escrever um algoritmo para ler o código de um vendedor de uma empresa, seu salário fixo e o total de
    vendas efetuadas por ele. Cada vendedor recebe um salário fixo, mais uma comissão proporcional às vendas
    efetuadas por ele. A comissão é de 3% sobre o total de vendas até R$1.000,00; 5% de R$1.000,00 à R$2.000,00
    e 10% para vendas acima de R$2.000,00. Escrevaa uma função para calcular a comissão do vendedor,
    conforme suas vendas. Utilize variáveis locais. Por fim, exiba: o código do vendedor, o total de suas vendas, a
    comissão, seu salário fixo e seu salário total.
*/

#include <stdio.h>

struct Funcionario {
    int codigo;
    int total_vendas;
    float salario_fixo;
    float comissao;
};

int main() {

    struct Funcionario f1;
    struct Funcionario *ptr = &f1; 

    printf("\n=== CADASTRO FUNCIONARIO ===\n");
    printf("Digite o codigo do funcionario: ");
    scanf("%d", &ptr->codigo);

    printf("%d\n", ptr->codigo);

    return 0;
}