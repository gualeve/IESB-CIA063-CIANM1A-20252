#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 20

typedef struct {
    int mat;
    char nome[TAM];
} aluno_type;

aluno_type *criar_vetor(int qtd) {
    aluno_type *p;
    p = (aluno_type *)malloc(sizeof(aluno_type) * qtd);
    return p;
}

void preencher_elemento(aluno_type *p, int matricula, char nome[], int i) {
    p[i].mat = matricula;
    strcpy(p[i].nome, nome);
}

int main() {
    int qtd;
    int mat;
    char nome[TAM];
    int i;
    aluno_type *p;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);
    p = criar_vetor(qtd);
    printf("Digite o índice: ");
    scanf("%d", &i);    
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &mat);
    getchar();
    printf("Digite o nome do aluno: ");
    fgets(nome, TAM, stdin);
    preencher_elemento(p, mat, nome, i);

    free(p);
    return 0;
}
