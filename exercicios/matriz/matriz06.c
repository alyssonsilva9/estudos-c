#include <stdio.h>

int main() {
  int i, j, zeros, linhas = 0, colunas = 0;
  int matriz[4][4] = {
    {1, 0, 2, 3}, 
    {4, 0, 5, 6}, 
    {0, 0, 0, 0}, 
    {0, 0, 0, 0}
  };

  printf("Matriz:\n");

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 4; i++) {
    zeros = 0;
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] == 0) {
        zeros++;
      }
    }
    if (zeros == 4) {
      linhas++;
    }
  }

  for (j = 0; j < 4; j++) {
    zeros = 0;
    for (i = 0; i < 4; i++) {
      if (matriz[i][j] == 0) {
        zeros++;
      }
    }
    if (zeros == 4) {
      colunas++;
    }
  }

  printf("\nQuantidade de Linhas nulas: %d", linhas);
  printf("\nQuantidade de Colunas nulas: %d", colunas);

  return 0;
}