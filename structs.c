#include <stdio.h>
#include <string.h>

enum gender {Masculino, Feminino, Outro};

typedef struct {
    char nome[100];
    enum gender genero;
    int idade;
} pessoa_type;

typedef struct {
    int matricula;
    pessoa_type dados;

} aluno_type;

int main() {
    pessoa_type pessoa1;
    pessoa_type pessoas[5];

    aluno_type alunos[10];

    alunos[0].matricula = 20251410;
    alunos[0].dados.idade = 20;
    alunos[0].dados.genero = Outro;ex
    strcpy(alunos[0].dados.nome, "Joaquim Nabuco");
    
    scanf("%d", &alunos[0].dados.idade);

    pessoa1.idade = 30;
    pessoa1.genero = 'M';
    strcpy(pessoa1.nome, "Ana Júlia");

    printf("%s\n", alunos[0].dados.nome);
    printf("%d\n", alunos[0].dados.idade);
    return 0;
}
