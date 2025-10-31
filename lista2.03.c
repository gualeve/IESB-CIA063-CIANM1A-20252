#include <stdio.h>

int main() {
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    scanf("%d", &a);
    printf("O dobro de %d é %d\n", a, *b * 2);
    printf("O triplo de %d é %d\n", a, **c * 3);
    printf("O quadruplo de %d é %d\n", a, ***d * 4);

    return 0;
}