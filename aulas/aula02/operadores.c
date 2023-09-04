#include <stdio.h>

int main () {

  // + - x / => + - * /

  int soma = 10 + 2;
  int diferenca = 10 - 2;
  int multiplicacao = 10 * 2;
  int divisao = (int) / 2.0; // conversao explicita
  int resto = soma % 2;

  // printf("soma = %i\n", soma);
  // printf("soma = %i\n", soma++); // soma = soma + 1
  // printf("soma = %i\n", ++soma); // soma = soma + 1
  // printf("soma = %i\n", soma);
  
  soma++; // soma = soma + 1
  ++soma; 
  soma--; // soma = soma - 1 
  --soma;

  return 0;  
} 