#include <stdio.h>
#define TAM 5
/*
Apenas a 1a questão
Crie uma estrutura representando uma hora. Essa estrutura deve conter os
campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de
cinco posições dessa estrutura e imprima a maior hora.
*/

typedef struct {
    int hora;
    int min;
    int seg;
} hora_type;

int main() {
    hora_type horarios[TAM] = {
        {10, 0, 30}, 
        {15, 0, 17}, 
        {8, 40, 0}, 
        {15, 30, 0},
        {0, 0, 0}  
    };
    hora_type maior;
    
    // for (int i=0; i<TAM; i++) {
    //     printf("Digite uma hora (HH:MM:SS): ");
    //     scanf("%d:%d:%d", &horarios[i].hora, &horarios[i].min, &horarios[i].seg);
    // }

    maior = horarios[0];
    for (int i=1; i<TAM; i++) {
        if (horarios[i].hora > maior.hora) {
            maior = horarios[i];
        } else {
            if (horarios[i].hora == maior.hora && horarios[i].min > maior.min) {
                maior = horarios[i];
            } else {
                if (horarios[i].min == maior.min && horarios[i].seg > maior.seg) {
                    maior = horarios[i];
                }
            }
        }
    }

    printf("%02d:%02d:%02d\n", maior.hora, maior.min, maior.seg);


    return 0;

}