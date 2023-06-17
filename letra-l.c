#include <stdio.h>

int main(void) {
  int N;
  printf("Informe um número: ");
  scanf ("%d", &N);
  if (!(N > 3)) {
    printf ("%d", N);
  }
  return 0;
}