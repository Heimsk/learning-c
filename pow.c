#include <math.h>
#include <stdio.h>

int main() {
  int num1, num2;
  printf("Digite um numero: ");
  if (scanf("%d", &num1) != 1) {
    printf("Numero invalido\n");
    return 1;
  }

  printf("Elevado a: ");
  if (scanf("%d", &num2) != 1) {
    printf("Numero invalido\n");
    return 1;
  }

  printf("%.2f\n", pow(num1, num2));
  return 0;
}
