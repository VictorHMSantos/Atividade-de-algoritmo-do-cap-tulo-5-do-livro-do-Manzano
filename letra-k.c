#include <stdio.h>

int main(void) {
  int N;
  printf("Informe um número: ");
  scanf ("%d", &N);
  if (1 <= N && N <= 9) {
    printf ("O valor está na faixa permitida.");
  } else {
    printf ("O valor está fora da faixa permitida.");
  }
  return 0;
}