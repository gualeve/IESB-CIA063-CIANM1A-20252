#include <stdio.h>
#include <string.h>

int q1() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 1;
}

int q2() {
    char str1[100];
    char str2[100];
    int contem;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }
    if (strstr(str1, str2) != NULL) {
        contem = 1;
    } else {
        contem = 0;
    }
    if (contem) {
        printf("A primeira string contem a segunda string.\n");
    } else {
        printf("A primeira string nao contem a segunda string.\n");
    }
    return 1;
}

int q3() {
    char nome[100];
    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }
    printf("%c.", nome[0]);
    for (int i = 1; i < strlen(nome); i++)
        if (nome[i] != ' ' && nome[i-1] == ' ')
            printf("%c.", nome[i]);
    printf("\n");
    return 1;
}

int main() {
    // q1();
    // q2();
    q3();

    return 0;
}