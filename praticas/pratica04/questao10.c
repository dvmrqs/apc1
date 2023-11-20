/*
Faça um programa em C que leia o número de mês, valide o número com os meses definidos por uma enumeração e imprima o nome do mês.
*/

#include <stdio.h>

int main() {
  enum meses_e {jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
  char meses[12][11] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

  int mes = 0;
  printf("Entre com o mês (1 a 12): ");
  int ok = scanf("%i", &mes);

  switch(mes-1) {
    case jan:
    case fev:
    case mar:
    case abr:
    case mai:
    case jun:
    case jul:
    case ago:
    case set:
    case out:
    case nov:
    case dez: printf("Vc escolheu o mês %s\n", meses[mes-1]); break;
    default: printf("Mes invalido!\n");
  }

  return 0;
}