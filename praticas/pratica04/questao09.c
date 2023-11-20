 /* Faça um programa em C que leia matricula e email de 10 alunos, e depois localize o email do aluno a partir de uma matrícula lida. */

#include <stdio.h>

int main() {
  struct aluno_t {
  int matricula;
  char email[61];
  };

  struct aluno_t alunos[LIMITE];

  for(int i = 0; i < LIMITE; i++) {
    printf("Aluno %i\n", i+1);
    printf("Entre com a matricula: ");
    int ok = scanf("%i", &alunos[i].matricula);
    printf("Entre com o email: ");
    ok = scanf("%s", alunos[i].email);
    getchar();
  }

  int matricula = 0;
  printf("Entre com uma matricula para localizar um aluno: ");
  int ok = scanf("%i", &matricula);

  int achei = -1;
  for(int i=0; i<LIMITE; i++) {
    if(matricula == alunos[i]. matricula) {
      achei = i;
      break;
    }
  }

  if (achei < 0) {
    printf("Aluno não encontrado!\n");
  } else {
    printf("O email do aluno é %s\n", alunos[achei].email);
  }

  return 0;
}