#include <stdio.h>
#define TAMANHO 4

int main(void) {
  double notas[TAMANHO];
  double total = 0;

  notas[0];
  notas[1];
  notas[2];
  notas[3];

  printf("Digite a nota 1: ");
  scanf("%lf", &notas[0]);

  printf("Digite a nota 2: ");
  scanf("%lf", &notas[1]);

  printf("Digite a nota 3: ");
  scanf("%lf", &notas[2]);

  printf("Digite a nota 4: ");
  scanf("%lf", &notas[3]);

  for(int i = 0; i < TAMANHO; i++) {
    total = total + notas[i];
    
  }

  double media = total / 4.0;

  printf("Media: %.2lf\n", media);
}