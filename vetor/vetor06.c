#include <stdio.h>

int main() {
  int vetor[10], i, valorRef, menorRef = 0, igualRef = 0;

  for (i = 0; i < 10; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);
  }

  printf("\nInforme valor de referencia inteiro: ");
  scanf("%d", &valorRef);

  printf("\nNumeros do vetor maiores que valor referencia:\n");

  for (i = 0; i < 10; i++) {
    if (vetor[i] > valorRef) {
      printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    if (vetor[i] < valorRef) {
      menorRef++;
    }

    if (vetor[i] == valorRef) {
      igualRef++;
    }
  }
  
  printf("\nQuantidade de numeros menores que valor referencia: %d", menorRef);
  printf("\nQuantidade de vezes que valor referencia aparece no vetor: %d", igualRef);

  return 0;
}