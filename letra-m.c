#include <stdio.h>

int main(void) {
  char NOME[50], SEXO;
  printf("Informe seu nome e seu sexo(M ou F): ");
  scanf ("%s %c", &NOME, &SEXO);
  if (SEXO == 'M') {
    printf ("%s. Sr.\n", NOME);
  }
  if (SEXO == 'F') {
    printf ("%s. Sra.\n", NOME);
  }
  if (SEXO != 'M' && SEXO != 'F') {
    printf ("Sexo informado inválido.");
  }
  return 0;
}