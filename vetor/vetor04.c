#include <stdio.h>

int main() {
  int vetor[5], i, qtdImp = 0;

  for (i = 0; i < 5; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 != 0) {
      qtdImp ++;
    }
  }

  printf("\nQuantidade de numeros impares: %d", qtdImp);

  return 0;
}