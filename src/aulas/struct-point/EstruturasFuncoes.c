#include<stdio.h>
#include<string.h>


struct aluno {
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};

void lerAluno(struct aluno *p){
    printf("Nome: ");
    gets(p->nome);
    printf("Curso: ");
    fflush(stdin);
    gets(p->curso);
    printf("Ano de ingresso: ");
    scanf("%d", &p->anoIngresso);
    printf("Previsão de formatura em: ");
    scanf("%d", &p->anoFormatura);
    return ;
}

int main(){
    struct aluno a;

    lerAluno(&a);

    printf("Nome: %s\n", a.nome);
    printf("Curso: %s\n", a.curso);
    printf("Ano de ingresso: %d\n", a.anoIngresso);
    printf("Previsão de formatura: %d\n", a.anoFormatura);

    return 0;
}
