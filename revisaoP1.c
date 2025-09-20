/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int q1() {
    int fat = 1, num = 3;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    printf("%d\n", fat);
    return 1;
}

int q21() {
    int n = 5;
    for (int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n; i>=0; i--) {
        for(int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 1;
}

int q22() {
    int i = 1;
    int d = 1;
    int n = 5;
    while (i) {
        for (int j=0; j<i; j++)
            putchar('*');
        putchar('\n');
        if (i==n)
            d = 0;
        if (d)
            i++;
        else
            i--;
    }
    return 1;
}

int q3() {
    int mat[4][4];
    int media[4] = {0,0,0,0};
    srand(time(NULL));
    for (int i=0; i<4; i++) {     
        for (int j=0; j<4; j++) {   
            mat[i][j] = rand() % 11;
        }
    }
    for (int j=0; j<4; j++) {
        for (int i=0; i<4; i++) {
            media[j] += mat[i][j];
        }
        media[j] /= 4;
    }
    for (int i=0; i<4; i++) {     
        for (int j=0; j<4; j++) {   
           printf("%2d ", mat[i][j]);
        }
        putchar('\n');
    }
    printf("-----------\n");
    for (int i=0; i<4; i++) {   
       printf("%2d ", media[i]);
    }
    return 1;
}

int main()
{
    // q1();
    // q21();
    // q22();
    q3();
    return 0;
}