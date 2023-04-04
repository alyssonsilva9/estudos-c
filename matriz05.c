#include <stdio.h>

int main() {
  int matriz[5][5], i, j;
  float media, soma = 0;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);

      soma += matriz[i][j];
    }
  }

  media = soma / 25;

  printf("\nMedia: %.2f", media);

  return 0;
}