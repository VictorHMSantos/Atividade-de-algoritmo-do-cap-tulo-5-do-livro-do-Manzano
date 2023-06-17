#include <stdio.h>

int main(void) {
  int A, B, C, D, E, MA, ME;
  printf("Informe 5 números: ");
  scanf ("%d %d %d %d %d", &A, &B, &C, &D, &E);
  MA = A;
  ME = A;

  if (B >= MA) {
    MA = B;
  } else {
    ME = B;
  }

  if (C >= MA) {
    MA = C;
  } else {
    ME = C;
  }

  if (D >= MA) {
    MA = D;
  } else {
    ME = D;
  }

  if (E >= MA) {
    MA = E;
  } else {
    ME = E;
  }

  printf ("O maior número digitado é: %d\n", MA);
  printf ("O maior número digitado é: %d\n", ME);
  return 0;
}