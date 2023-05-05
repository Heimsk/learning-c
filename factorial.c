#include <stdio.h>

int main() {
  int num;
  double long result = 1;

  printf("Escolha um numero para calcular o fatorial: ");
  if (scanf("%d", &num) != 1) {
    printf("Numero invalido\n");
    return 0;
  }

  for (int i = num; i >= 1; i--) {
    result = result * i;
  }

  printf("Resultado: %0.Lf\n", result);
  return 0;
}
