#include <stdio.h>

int main () {
  int numero = 0;

  printf("Entre com o numero entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);
  getchar();

  while (numero < 1 || numero > 10) {
    printf("Erro ao ler o numero. Tente novamente: ");
    leu_certo = scanf("%i", &numero);
    getchar();
  }

  int i = 0;
  while (i < 10) {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
    i++;
  }

  // for(int i = 0; i < 10; i++ ) {
  //   printf("%i x %i = %i\n", numero, i + 1, numero * (i + 1));
  // }

  return 0;
} 