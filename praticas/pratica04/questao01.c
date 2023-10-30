/* Faça um programa em C que preencha uma matriz com 10 números, depois leia um número 
e localize a posição dele na matriz. */

#include <stdio.h>

int main () {

                 //  0  1  2  3  4  5  6  7  8  9
  int numeros[10] = {1, 5, 7, 2, 9, 3, 8, 0, 4, 6}; 

  int numero = 0;

  printf("Entre com um numero inteiro: ");
  int ok = scanf("%i", &numero);

  
  int posicao = -1;
  
  for(int i=0; i<10; i++) {
    if (numero == numeros[i]) {
      posicao = i;
      break;
    }
  }

  if(posicao < 0){
    printf("Não achei o numero %i na matriz\n", numero);
  } else {
    printf("Achei o numero %i na posicao %i da matriz\n", numero, posicao);
  }

  return 0;
}