#include <stdio.h>

int main(void) {
  int A, B, R;
  printf ("Informe 2 números: ");
  scanf ("%d %d", &A, &B);
  if (A > B){
    R = A - B;
  } else {
    R = B - A;
  }
  printf ("A diferença é: %d", R);
}