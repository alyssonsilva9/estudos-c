#include <stdio.h>

int main() {
  int matriz[3][3], i, j, soma = 0;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    soma += matriz[i][j];
  }

  printf("\nSoma da diagonal principal: %d", soma);

  return 0;
}