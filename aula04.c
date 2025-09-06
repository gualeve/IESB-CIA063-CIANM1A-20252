/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define TAM 5
int main()
{
    float notas[TAM] = {0, 0, 0, 0};
    float media = 0;
    
    // int faltas2[] = {0, 0, 0, 0, 0}; <==== ok
    // int faltas[];  <=== ERRADO!!!
    // notas[TAM] = {0, 0, 0, 0, 0};  <=== ERRADO!!!!
    // notas[0] = 0; <=== OK
    // notas[1] = 0; <=== OK
    printf("Digite as notas de %d alunos:\n", TAM);
    for (int i=0; i<TAM; i++) {
        scanf("%f", &notas[i]);
    }
    for (int i=0; i<TAM; i++) {
        media += notas[i];
    }
    media = media / TAM;
    for (int i=0; i<TAM; i++) {
        if (notas[i] > media)
            printf("Nota: %5.1f\n", notas[i]);
    }
    
    return 0;
}