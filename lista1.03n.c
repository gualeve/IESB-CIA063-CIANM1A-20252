/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int q1() {
    /*
    Elabore um programa que faça a leitura de vários números inteiros até que 
    se digite um número negativo. O programa deve imprimir no final o maior e 
    o menor número lido (excetuando o número negativo lido). */
    int numero;
    int maior, menor;
    int flag = 1;
    while (1) {
        putchar('>');
        scanf("%d", &numero);
        if (flag) {
            maior = numero;
            menor = numero;
            flag = 0;
        }
        if (numero < 0)
            break;
        if (numero < menor)
            menor = numero;
        if (numero > maior)
            maior = numero;
    }
    printf("maior=%d, menor=%d\n", maior, menor);
    
    return 1;
}

int q2() {
    /* 
     Faça um algoritmo que leia um número positivo e imprima seus divisores.
     Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
    */
    int numero;
    
    putchar('>');
    scanf("%d", &numero);
    for (int i=1; i<=numero/2; i++) {
        if (numero % i == 0)
            printf("(%d)\n", i);
    }
    printf("(%d)\n", numero);
    
    return 1;
}

int q3() {
    /*
     Escreva um programa que leia o valor de N e calcule a somatória S dada 
     pela seguinte fórmula:
     S = 1/1 + 3/2 + 5/3 + 7/4 + ... + (2N-1)/N
    */
    int n;
    float soma = 0;
    putchar('>');
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        soma += (2 * i - 1.0) / i;
    }
    printf("Soma = %5.2f\n", soma);
    
    return 1;
}

int q4() {
    /*
    Escreva um programa que leia certa quantidade de números, imprima o maior 
    deles e quantas vezes o maior número foi lido. A quantidade de números a 
    serem lidos deve ser fornecida pelo usuário.
    */
    int qtd_numeros;
    int numero;
    int maior = 0;
    int qtd_maior;
    
    putchar('>');
    scanf("%d", &qtd_numeros);
    for (int i=0; i<qtd_numeros; i++) {
        putchar(':');
        scanf("%d", &numero);
        if (i == 0 || numero > maior) {
            maior = numero;
            qtd_maior = 0;
        }
        if (numero == maior)
            qtd_maior++;
    }
    printf("O maior número lido foi %d, %d vez(es)\n", maior, qtd_maior);
    
    return 1;
}

int main()
{
    // q1();
    // q2();
    // q3();
    q4();
    return 0;
}