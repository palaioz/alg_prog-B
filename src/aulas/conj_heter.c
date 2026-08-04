/* Aluno(matricula, nome, idade, cpf, 
        ano de ingresso, curso, modalidade, 
        media geral)
*/

#include <stdio.h>
#include <string.h>

struct aluno {
    char matricula[11];
    char nome[50];
    int idade;
    char CPF[12];
    int anoIngresso;
    int curso;
    float mensalidade;
    float mediaGeral; 
};

void imprimirAluno(struct aluno a) {
    printf("\n===== DADOS DO ESTUDANTE =====\n");
    printf("Matricula    : %s\n", a.matricula);
    printf("Nome         : %s\n", a.nome);
    printf("Idade        : %d\n", a.idade);
    printf("CPF          : %s\n", a.CPF);
    printf("Ano Ingresso : %d\n", a.anoIngresso);
    printf("Curso        : %d\n", a.curso);
    printf("Mensalidade  : %.2f\n", a.mensalidade);
    printf("Media Geral  : %.2f\n", a.mediaGeral);
    printf("Desempenho   : %s\n", a.mediaGeral);
    printf("==============================\n");
}

int main(){
    // Declaração de variável do tipo da estrutura
    struct aluno Aluno1;

    printf("--- CADASTRO DE ESTUDANTE ---\n");
    
    printf("\nMatricula: ");
    scanf("%10s", Aluno1.matricula);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nNome: ");
    fgets(Aluno1.nome, 50, stdin);
    size_t len = strlen(Aluno1.nome);
    if(len > 0 && Aluno1.nome[len - 1] == '\n'){
        Aluno1.nome[len - 1] = '\0';
    }

    printf("\nIdade: ");
    scanf("%d", &Aluno1.idade);

    printf("\nCPF: ");
    scanf("%s", Aluno1.CPF);

    printf("\nAno de Ingresso: ");
    scanf("%d", &Aluno1.anoIngresso);

    printf("\nCurso: ");
    scanf("%d", &Aluno1.curso);

    printf("\nMensalidade: ");
    scanf("%f", &Aluno1.mensalidade);

    printf("\nMedia Geral: ");
    scanf("%f", &Aluno1.mediaGeral);

    printf("\n-------------------\n");
    printf("Aluno salvo com sucesso!\n");

    // --- MOSTRAR O ALUNO ---

    imprimirAluno(Aluno1);

    return 0;
}