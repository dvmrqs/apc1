/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main () {
  int altura = 5;
  int distancia = 8;
  int angulo = 30;

  double altura = (sin(angulo) = altura / distancia); 

  printf("A altura alcançada pelo avião é %f\n," altura);

  return 0;
}