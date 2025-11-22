#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int x, y, z;
} ponto_type;

typedef struct {
    ponto_type ponto1;
    ponto_type ponto2;
} objeto_type;

// struct ponto {
//     int x, y, z;
// };

void alterar(char *a, int *b) {
    *a = 'Z';
    *b = 20;
    printf("-- na função alterar: %c, %d\n", *a, *b);
}

int eh_par(int x) {
    return (x % 2 == 0);
}

void alterar_nome(char *nome) {
    strcpy(nome, "Maria");
}

void atribuir(objeto_type objetos[], objeto_type objeto) {
    objetos[0] = objeto;
}

int main() {
    // Vetor estático:
    char nome[15] = "Ana";
    char c = 'J';
    int d = 10;

    objeto_type objeto;
    objeto_type objetos[10];
    objeto_type *po;

    po = (objeto_type *)malloc(sizeof(objeto_type) * 10);

    objeto.ponto1.x = 3;
    objeto.ponto1.y = 2;
    objeto.ponto1.z = 1;
    objeto.ponto2.x = 1;
    objeto.ponto2.y = 1;
    objeto.ponto2.z = 2;

    atribuir(po, objeto);

    alterar_nome(nome);

    printf("%c, %d\n", c, d);
    alterar(&c, &d);
    printf("%c, %d\n", c, d);


    // nome = "Adalberto"; <--- ERRADO!
    // strcpy(nome, "Adalberto");
    printf("%s\n", nome);
    free(po);
    return 0;

}