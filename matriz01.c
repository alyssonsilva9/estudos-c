#include <stdio.h>

int main() {
  int i, j, matriz[3][3] = {
    {7, 2, 8}, 
    {3, 4, 6}, 
    {5, 9, 1}
  };

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
  }

  return 0;
}