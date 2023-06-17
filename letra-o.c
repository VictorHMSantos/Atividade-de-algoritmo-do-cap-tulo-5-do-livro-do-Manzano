#include <stdio.h>

int main(void) {
  float A, B;
  printf("Informe um número: ");
  scanf ("%f", &A);
  B = A * 2;
  if (B > 30) {
    printf ("%.2f", B);
  }
  return 0;
}