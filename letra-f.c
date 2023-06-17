#include <stdio.h>

int main(void) {
  float A, B, C;
  printf ("Informe 3 números: ");
  scanf ("%f %f %f", &A, &B, &C);
  printf ("Números digitados: %.2f, %.2f, %.2f. \n", A, B, C);
  if (A >= B && B >= C) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", C, B, A);
  } 
  if (A >= C && C >= B) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", B, C, A);
  }
  if (B >= A && A >= C) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", C, A, B);
  }
  if (C >= A && A >= B) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", B, A, C);
  }
  if (B >= C && C >= A) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", A, C, B);
  }
  if (C >= B && B >= A) {
    printf ("Números digitados em ordem crescente: %.2f, %.2f, %.2f. \n", A, B, C);
  }
  return 0;
}