#include<stdio.h>

int main() {
    FILE *fp = fopen("arquivo.txt", "w");
    char c;

    do {
        c = getchar();
        if (c == '.')
            break;
        fputc(c, fp);
    } while (1);


    fclose(fp);
    fp = fopen("r")
    c = fgetc(fp);
    return 0;
}
