#include <stdio.h>

int main() {
  int vetor1[5] = {1, 2, 3, 4, 5}, vetor2[5], i;

  printf("Primeiro Vetor:\n");

  for (i = 0; i < 5; i++) {
    printf("vetor1[%d] = %d\n", i, vetor1[i]);
  }

  printf("\n");

  for (i = 0; i < 5; i++) {
    printf("Informe um numero: ");
    scanf("%d", &vetor2[i]);
  }

  printf("\nSegundo Vetor:\n");

  for (i = 0; i < 5; i++) {
    printf("vetor2[%d] = %d\n", i, vetor2[i]);
  }

  return 0;
}