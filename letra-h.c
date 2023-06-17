#include <stdio.h>

int main(void) {
  int A, B, C, D;
  printf("Informe quatro números: ");
  scanf ("%d %d %d %d", &A, &B, &C, &D);
  if (A % 2 == 0) {
    printf ("O número %d é divisível por 2.\n", A);
  }
  if (A % 3 == 0) {
    printf ("O número %d é divisível por 3.\n", A);
  }
  if (B % 2 == 0) {
    printf ("O número %d é divisível por 2.\n", B);
  }
  if (B % 3 == 0) {
    printf ("O número %d é divisível por 3.\n", B);
  }
  if (C % 2 == 0) {
    printf ("O número %d é divisível por 2.\n", C);
  }
  if (C % 3 == 0) {
    printf ("O número %d é divisível por 3.\n", C);
  }
  if (D % 2 == 0) {
    printf ("O número %d é divisível por 2.\n", D);
  }
  if (D % 3 == 0) {
    printf ("O número %d é divisível por 3.\n", D);
  }
  
  return 0;
}