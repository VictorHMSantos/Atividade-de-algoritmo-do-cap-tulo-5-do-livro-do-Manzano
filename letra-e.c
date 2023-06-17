#include <stdio.h>
#include <math.h>

int main(void) {
  float A, B, C, De, X, X1, X2;

  printf ("Informe 3 números: ");
  scanf ("%f %f %f", &A, &B, &C);

  if (A == 0 || B == 0 || C == 0) {
    printf ("Não possui equação do segundo grau completa.");
  } else {
    De = (B * B) - (4 * A * C);

    if (De < 0) {
      printf ("Delta: %.2f \n. Não há solução real para esse delta.", De);
    }
    if (De == 0) {
      printf ("Delta: %.2f \n. Há uma solução real para esse delta.", De);
      X = -B / (2 * A);
      printf ("Solução: %.2f.", X);
    }
    if (De > 0) {
      printf ("Delta: %.2f. \nHá duas soluções reais para esse delta. \n", De);
      X1 = (-B + sqrt(De)) / (2 * A);
      X2 = (-B - sqrt(De)) / (2 * A);
      printf ("Solução 1: %.2f. \nSolução 2: %.2f. \n", X1, X2);
    }
  }
  return 0;
}