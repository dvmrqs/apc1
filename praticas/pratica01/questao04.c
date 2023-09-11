/* Faça um programa em C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP)  x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%
  */

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preco_inicial = 90.0f;

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf (" O preco inicial é %f\n ", preco_inicial);
  printf ("O valor ICMS é %f\n", valor_icms);
  printf ("O valor COFINS é %f\n", valor_cofins);
  printf ("O valor PIS_PASEP é %f\n", valor_pispasep);
  printf ("O preco final é %f\n", preco_final);

  return 0;
}