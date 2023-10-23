/* Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²). */

#include <stdio.h>
#include <math.h>

int main(){
  float peso = 0.0f;
  float altura = 0.0f;
  

  printf ("Digite sua altura: ");
  int leu_certo = scanf("%f", &altura);

  while(altura <= 0){
    getchar();
    printf("Erro ao ler a altura. Tente novamente: ");
    leu_certo = scanf("%f", &altura);
  }


 printf("Digite seu peso: ");
 leu_certo = scanf("%f", &peso);

  while(peso <= 0){
    getchar();
    printf("Erro ao ler o peso. Tente novamente: ");
    leu_certo = scanf("%f", &peso);
    }

  float imc = peso / pow(altura, 2);
  printf("Seu IMC é: %.1f\n", imc);
  

  return 0;
}