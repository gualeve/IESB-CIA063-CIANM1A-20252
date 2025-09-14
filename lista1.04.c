#include <stdio.h>
#include <math.h>
#define TAM_VET 10

int q3() {
  int vet[100];
  int numero = 1;
  int i = 0;
  while (i < 100) {
    if (numero % 7 != 0) {
      vet[i] = numero;
      i++;
    }
    numero++;
  }
  for (int i=0; i < 100; i++)
      printf("%d ", vet[i]);

  return 1;
}

int q4() {
  int vet[TAM_VET] = {5, 3, 5, 4, 2, 5, -2, 3, 0, 47};

  for (int i=0; i<TAM_VET; i++) {
    for (int j=i+1; j<TAM_VET; j++)
      if (vet[i] == vet[j]) {
        printf("%d\n", vet[i]);
        break;
      }
  }

  return 1;
}

int q5() {

  float vet[TAM_VET] = {5, 3, 5, 4, 2, 5, -2, 3, 0, 47};
  float media = 0;
  float soma = 0;
  float desvio;
  
  for (int i = 0; i<TAM_VET; i++)
    media += vet[i];
  media /= TAM_VET;
  for (int i = 0; i<TAM_VET; i++)
    soma += pow(vet[i] - media, 2);
  desvio = sqrt(soma / TAM_VET);

  printf("Desvio padrão = %5.2f -- média = %5.2f\n", desvio, media);

  return 1;
}


int main() {
  //q3();
  //q4();
  if (q5())
    printf("Questão 5 OK");
  else
    printf("Questão 5 com erro\n");

  return 0;
}
