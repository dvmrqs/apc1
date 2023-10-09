/*
Faça um programa em C que imprima um qualitativo associado a nota lida conforme a tabela 1 = ruim ; 2 = insuficiente ; 3 = suficiente ; 4 = bom ; 5 = ótimo 
*/

#include <stdio.h>
int main () {

int nota = 0;
int deu_certo = 0;

  printf("Entre com a nota de 1 a 5: ");
  deu_certo = scanf("%i", &nota);
  

  if (deu_certo) { 
//   if (nota == 1) {
//      printf("Ruim\n");
//    } else if (nota == 2){
//     printf("Insuficiente\n");
//    } else if (nota == 3) {
//     printf ("Suficiente\n");
//    } else if (nota == 4) {
//     printf("Bom\n");
//    } else if (nota == 5){
//     printf("Otimo\n");
//    } else {
//     printf("Nota invalida\n");
//    } } else {
//     printf("Por favor entre com um numero inteiro. Tente novamente\n");
// }

   switch(nota) { 
     case 1: printf("Ruim\n"); break;
     case 2: printf("Insuficiente\n"); break;
     case 3: printf ("Suficiente\n"); break;
     case 4:  printf("Bom\n"); break;
     case 5: printf("Otimo\n"); break;
     default: printf("Nota invalida\n"); break;
   }

    } else {
     printf("Por favor entre com um numero inteiro. Tente novamente\n");
 }
    

 return 0; 
    
 }