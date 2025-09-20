/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ALUNOS 10
#define PROVAS 3

int q1() {
    
    return 1;
}


int q2() {
    
    return 1;
}


int q3() {
    /*
    Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
    Em seguida, calcule e escreva na tela o número de alunos cuja pior nota 
    foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número
    de alunos cuja pior nota foi na prova 3.
    */
    float notas[ALUNOS][PROVAS];
    int provas[PROVAS] = {0,0,0};
    
    srand(time(NULL));
    for (int i=0; i<ALUNOS; i++) {        // essa chave é optativa
        for (int j=0; j<PROVAS; j++) {    // essa chave é optativa
            notas[i][j] = (rand() % 101) / 10.0;
        }
    }
    
    for (int i=0; i<ALUNOS; i++) {        // essa chave é obrigatória
        for (int j=0; j<PROVAS; j++) {    // essa chave é optativa
            printf("%4.1f ", notas[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<ALUNOS; i++) {        // essa chave é optativa
        if (notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]) {
            provas[0]++;
        }
        else {
            if (notas[i][1] < notas[i][2]) {
                provas[1]++;
            }
            else {
                provas[2]++;
            }
        }
    }
    printf("Piores provas:\n");
    printf("P1  P2  P3\n");
    printf("%2d  %2d  %2d\n", provas[0], provas[1], provas[2]);
    
    return 1;
}


int main()
{
    // q1();
    // q2();
    q3();

    return 0;
}