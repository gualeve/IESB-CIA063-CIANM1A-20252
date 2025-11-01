#include<stdio.h>
#include<math.h>
#define PI 3.141592

typedef struct {
    int hora;
    int min;
    int seg;
} horario_type;

int segundos(int hora, int min, int seg) {
    // Elabore uma função que receba três números inteiros como parâmetro,
    // representando horas, minutos e segundos. A função deve retornar esse horário
    // convertido em segundos.
    return hora * 3600 + min * 60 + seg;
}

int horario_valido(horario_type horas) {
    if (horas.hora < 0 || horas.hora > 23)
        return 0;
    if (horas.min < 0 || horas.min > 59)
        return 0;
    if (horas.seg < 0 || horas.seg > 59)
        return 0;
    return 1;
}

void area_volume(int r, float *v, float *a) {
    *v = (4 * PI * pow(r, 3)) / 3;
    *a = 4 * PI * pow(r, 2);
    return;
}

int main() {
    int raio;
    float volume, area;
    
    printf("Digite o raio da esfera E: ");
    scanf("%d", &raio);
    area_volume(raio, &volume, &area);
    printf("Área = %10.3f, Volume = %10.3f\n", area, volume);


    // horario_type horario;
    
    // printf("Digite um horário no formato HH:MM:SS ");
    // scanf("%d:%d:%d", &horario.hora, &horario.min, &horario.seg);
    // if (horario_valido(horario)) {
    //     printf("Segundos = %d\n", segundos(horario.hora, horario.min, horario.seg));
    // }
    // else {
    //     printf("Horário inválido\n");
    // }
    return 0;
}