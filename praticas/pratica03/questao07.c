/*
Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci.
1 1 2 3 5 8 13 21 34 55 

*/

#include <stdio.h>

int main() {

  int anterior = 1;
  int proximo = 1;

  printf("%i, %i, ", anterior, proximo);

  for(int i=0; i < 10; i++){
    int auxiliar = anterior + proximo;
    printf("%i, ", auxiliar);
    anterior = proximo;
    proximo = auxiliar;
  }
  printf("\n");
 
  return 0;
}
