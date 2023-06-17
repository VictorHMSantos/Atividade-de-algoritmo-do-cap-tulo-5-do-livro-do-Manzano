#include <stdio.h>

int main(void) {
  int NUM;
  printf("Informe um número: ");
  scanf ("%d", &NUM);
  
  if (NUM % 2 == 0) {
    printf ("O número digitado é par!\n");
  } else {
    printf ("O número digitado é ímpar!");
  }
  return 0;
}