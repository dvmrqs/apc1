#include <stdio.h>

int main () {
  int numero = 0;

  printf("Entre com o numero inteiro: ");
  scanf("%i", &numero);

  int numero_eh_divisivel_por_2 = numero % 2 == 0;

  if (numero_eh_divisivel_por_2) {
   printf("O numero %i é par!\n", numero);
   } else {
     printf("O número %i é ímpar!\n", numero);
   }
  
  return 0;
  
}