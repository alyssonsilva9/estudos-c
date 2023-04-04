#include <stdio.h>

int main() {
  int matriz[4][4], matrizTr[4][4], i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      print("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      matrizTr[i][j] = matriz[j][i];
    }
  }

  printf("\nMatriz Transposta:\n");

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      print("matrizTr[%d][%d] = %d\n", i, j, matrizTr[i][j]);
    }
  }

  return 0;
}