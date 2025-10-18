#include <stdio.h>
#define TAM 5   
/*
Crie um programa que contenha um array com cinco elementos inteiros. Leia
esse array do teclado e imprima o endereço das posições contendo valores
pares. O programa deve manipular o array exclusivamente por aritmética de
ponteiros.
*/

int main() {
    int vetor[TAM];
    int *ptr = &vetor[0];

    for (int i=0; i<TAM; i++) {
        printf("Digite o %do valor :", i+1);
        scanf("%d", ptr++);
    }
    ptr = vetor;
    for (int i=0; i<TAM; i++) {
        if (*ptr % 2 == 0) {
            printf("%p - %d\n", ptr, *ptr);
        }
        ptr++;
    }


    return 0;
}