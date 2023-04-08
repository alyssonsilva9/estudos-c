#include <stdio.h>

int main() {
  int vetor[5], i, maiorV, menorV, posMa, posMe;

  for (i = 0; i < 5; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);
  }

  maiorV = vetor[0];
  menorV = vetor[0];

  for (i = 0; i < 5; i++) {
    if (vetor[i] > maiorV) {
      maiorV = vetor[i];
      posMa = i;
    }

    if (vetor[i] < menorV) {
      menorV = vetor[i];
      posMe = i;
    }
  }

  printf("\nMaior Valor = %d, Posicao Maior = %d\n", maiorV, posMa);
  printf("Menor Valor = %d, Posicao Menor = %d", menorV, posMe);

  return 0;
}