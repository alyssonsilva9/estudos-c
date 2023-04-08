#include <stdio.h>

int main() {
  int matriz[3][3], i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nDiagonal Principal de Tras para Frente:\n");

  for (i = 2; i >= 0; i--) {
    printf("matriz[%d][%d] = %d ", i, i, matriz[i][i]);
  }

  return 0;
}