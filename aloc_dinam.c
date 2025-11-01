#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *inverte(char *s) {
    char *pt;
    int len = strlen(s);
    pt = (char *)malloc(sizeof(char) * (len+1));
    for (int i=0; i<len; i++) {
        pt[(len-1)-i] = s[i];
    }
    pt[len] = '\0';
    return pt;
}

int main() {
    // Crie uma função que receba uma string e retorne o ponteiro para essa uma
    // string invertida. (Exemplo, se a string original é “aeiou”, a string invertida será
    // “uoiea”.
    char string[] = "aeiou";
    char *p;
    printf("%s\n", string);
    p = inverte(string);
    printf("%s\n", p);
    
    return 0;
}