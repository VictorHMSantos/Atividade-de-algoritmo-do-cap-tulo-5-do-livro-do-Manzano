#include <stdio.h>

int main(void) {
  float N1, N2, N3, N4, MD;

  printf("Informe as 4 notas do aluno: ");
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

  MD = (N1 + N2 + N3 + N4) / 4;

  if (MD >= 5) {
    printf("Aprovado. \nMédia: %.2f \n", MD);
  } else {
    printf("Reprovado. \nMédia: %.2f \n", MD);
  }
  return 0;
}