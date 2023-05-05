#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int numbers[50];
  char input[50];
  int size = 0;

  printf("Mande numeros separados por espaço: ");
  scanf("%[^\n]", input);

  char *token = strtok(input, " ");
  numbers[0] = atoi(token);

  for (int i = 0; token != NULL; i++) {
    numbers[i] = atoi(token);
    token = strtok(NULL, " ");
    size++;

    if (size >= 50) {
      break;
    }
  }

  printf("%d", size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (numbers[i] < numbers[j]) {
        int a = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = a;
      }
    }
  }

  printf("Numeros organizados: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}
