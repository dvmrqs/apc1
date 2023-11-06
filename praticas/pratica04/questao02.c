/* Faça um programa em C que leia as notas de 10 alunos, calcule a média da turma e contabilize quantos alunos estão com a nota acima da média. */

#include <stdio.h>

#define LIMITE 10

int main () {
  float notas[LIMITE];
  float soma = 0.0f;

  for(int i=0; i<LIMITE; i++){
    printf("Entre com a nota do aluno %i: ", i+1);
    int ok = scanf("%f", &notas[i]);
    getchar();
    soma = soma + notas[i];
  }

  float media = soma / 10.0f;
  int qnt_acima_media = 0;

  for(int i = 0; i<LIMITE; i++) {
    if(notas[i] > media){
      qnt_acima_media++;
    }
  }

  printf("%i alunos ficaram acima da media %.1f\n", qnt_acima_media, media);

  return 0;
}