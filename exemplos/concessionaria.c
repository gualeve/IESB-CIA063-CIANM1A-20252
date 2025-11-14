#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MARCA_TAM 20
#define MODELO_TAM 30
typedef struct {
    char marca[MARCA_TAM];
    char modelo[MODELO_TAM];
    int ano;
} Carro;

void imprimir(Carro *carros, int tam) {
    for (int i=0; i<tam; i++) {
        printf("%20s %30s %d\n", carros[i].marca, carros[i].modelo, carros[i].ano );
    }
}

int main() {
    Carro *carros;
    int tam;
    char marca[MARCA_TAM];
    char modelo[MODELO_TAM];
    printf("Informe a quantidade de carros: ");
    scanf("%d", &tam);
    carros = (Carro *)malloc(sizeof(Carro) * tam);

    for (int i = 0; i<tam; i++) {
        getchar();
        printf("Marca: ");
        fgets(marca, MARCA_TAM, stdin);
        marca[strlen(marca)-1] = '\0';
        printf("Modelo: ");
        getchar();
        fgets(modelo, MODELO_TAM, stdin);
        modelo[strlen(modelo)-1] = '\0';
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        strcpy(carros[i].marca, marca);
        strcpy(carros[i].modelo, modelo);
    }

    imprimir(carros, tam);
    free(carros);
    return 0;
}
