#include <stdio.h>

int main() {
  int vetor[5], i, soma = 0;

  for (i = 0; i < 5; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);

    soma += vetor[i];
  }

  printf("\nSomatorio: %d", soma);

  return 0;
}