/*
Defina uma struct chamada Pessoa que represente as informações de uma pessoa,
incluindo nome, idade e cidade. 

Em seguida, escreva uma função que receba como 
parâmetro um vetor de pessoas e o número total de pessoas. 
A função deve calcular e retornar a média das idades das pessoas no vetor.
*/

struct Pessoa {
    char nome[100];
    int idade;
    char cidade[100];
};

typedef struct {
    char nome[100];
    int idade;
    char cidade[100];
} pessoa_type;

float media_idade(struct Pessoa pessoas[], int qtd) {
    float media = 0;
    for (int i=0; i<qtd; i++) {
        media += pessoas[i].idade;
    }
    media = media / qtd;
    return media;
}
