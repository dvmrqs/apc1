/* Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r) . Considere o raio um número inteiro e a constante PI igual a 3,1416
*/

#include <stdio.h>

#define PI 3.1416

int main () {
  int raio = 15;

  float perimetro = 2 * PI * raio; 

printf("o perimetro da pizza é %f cm\n", perimetro);
return 0;
}
  