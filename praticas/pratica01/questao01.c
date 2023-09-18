


#include <stdio.h> 

int main() { 
  float nota_a1;
  float nota_a2;

  printf("Entre com a nota do primeiro bimestre ");
  scanf("%f", &nota_a1);
  printf("Entre com a nota do segundo bimestre ");
  scanf("%f", &nota_a2);

  float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  printf("A média é %f\n", media);
  return 0;
} 