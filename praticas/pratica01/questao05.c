/* 
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>
#include <math.h>

int main () {
  double valor_em_gigabytes = 10;

  double valor_em_bytes = pow(1024, 3) * valor_em_gigabytes;

  printf("O valor %f GB corresponde a %f bytes\n", valor_em_gigabytes, valor_em_bytes);

  return 0; 
}