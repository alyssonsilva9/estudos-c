#include <stdio.h>

#define Tamanho 10

int main() {
  int numero[Tamanho], i, soma = 0;

  for (i = 0; i < Tamanho; i++) {
    printf("Informe um numero: ");
    scanf("%d", &numero[i]);

    if (numero[i] % 2 == 0) {
      soma += numero[i];
    }
  }

  printf("\nSoma dos numeros pares: %d", soma);

  return 0;
}