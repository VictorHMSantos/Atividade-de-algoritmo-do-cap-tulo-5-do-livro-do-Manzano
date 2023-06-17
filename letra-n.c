#include <stdio.h>

int main(void) {
  int A, B, C, S;
  printf("Informe três números: ");
  scanf ("%d %d %d", &A, &B, &C);
  S = A + B + C;
  if (S >= 100) {
    printf ("O resultado da soma é: %d", S);
  }
  return 0;
}