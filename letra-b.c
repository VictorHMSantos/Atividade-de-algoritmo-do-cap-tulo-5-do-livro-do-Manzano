#include <stdio.h>

int main(void) {
  int N;
  printf("Informe 1 número: ");
  scanf("%d", &N);
  if (N > 0) {
    N = N * (-1);
  }
  printf("%d", N);
}