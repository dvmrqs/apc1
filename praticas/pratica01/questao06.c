/* Faça um programa em C que calcule as raízes de uma equação do segundo grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)
*/

#include <stdio.h>
#include <math.h>

int main () {
  
  int valor_a = 2;
  int valor_b = 3;
  int valor_c = -2;
  double delta = pow(valor_b, 2) - 4 * valor_a * valor_c;
  double raiz_1 = (- valor_b - sqrt(delta)) / 2 * valor_a;
  double raiz_2 = (- valor_b + sqrt(delta)) / 2 * valor_a;

 printf ("As raizes da equacao %dx² %dx %d são x1 = %f e x2 = %f\n", valor_a, valor_b, valor_c, raiz_1, raiz_2);

 return 0; 
}