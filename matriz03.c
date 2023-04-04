#include <stdio.h>

int main() {
  int matriz1[2][2], matriz2[2][2], matrizRes[2][2], i, j;

  printf("Matriz 1:\n");

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("\nMatriz 2:\n");

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      matrizRes[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  printf("\nMatriz Resultante:\n");

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("matrizRes[%d][%d] = %d\n", i, j, matrizRes[i][j]);
    }
  }

  return 0;
}