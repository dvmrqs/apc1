/*  Faça um programa em C que leia um ano e verifique se ele é bissexto (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).  */

#include <stdio.h> 
int main () {

  int ano = 0;

  printf("Digite um ano: ");
  scanf("%i", &ano);

  int ano_eh_multiplo_de_4 = ano % 4 == 0;
  int ano_nao_eh_multiplo_de_100 = ano % 100 != 0;
  int ano_eh_multiplo_de_400 = ano % 400 == 0;

  if (ano_eh_multiplo_de_4 && ano_nao_eh_multiplo_de_100 || ano_eh_multiplo_de_400) {
    printf("O ano e bissexto.\n");
  }  else {
     printf("O ano nao e bissexto\n", ano);
   }


  

  return 0;
}