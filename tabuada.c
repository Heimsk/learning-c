#include <stdio.h>

int main() {
  int choice;

  printf("Você quer realizar a tabuada de qual numero? ");
  if (scanf("%d", &choice) != 1) {
    printf("Numero invalido\n");
    return 1;
  }

  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", choice, i, i * choice);
  }

  return 0;
}
