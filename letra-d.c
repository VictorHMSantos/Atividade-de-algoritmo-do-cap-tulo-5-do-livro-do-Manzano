#include <stdio.h>

int main(void) {
  float N1, N2, N3, N4, MD1, NE, MD2;

  printf("Informe as 4 notas do aluno: ");
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

  MD1 = (N1 + N2 + N3 + N4) / 4;

  if (MD1 >= 7) {
    printf("Aprovado. \nMédia: %.2f \n", MD1);
  } else {
    printf("Média: %.2f \n", MD1);
    printf("Informe a nota de exame do aluno: ");
    scanf("%f", &NE);
    MD2 = (MD1 + NE) / 2;
    
    if (MD2 >= 5){
      printf("Aprovado em exame. \nMédia: %.2f \n", MD2);
    } else {
      printf("Reprovado. \nMédia: %.2f \n", MD2);
    }
  }
  return 0;
}