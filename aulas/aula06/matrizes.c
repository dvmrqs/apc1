#include <stdio.h>

int main() {
  int numeros[10]; // conjunto de 10 numeros

  numeros[0] = 10;
  numeros[1] = 1;
  numeros[2] = 2;
  numeros[3] = 5;
  numeros[4] = 7;
  numeros[5] = 0;
  numeros[6] = 2;
  numeros[7] = 8;
  numeros[8] = 6;
  numeros[9] = 3;

  for(int i=0; i<10; i++) {
    printf("%d, ", numeros[i]);
  }

  printf("\n");

  float notas[10][2];
        // 0  1
  // 0     5  4
  // 1     6  3
  // 2     4  7
  // 3    10  4
  // 4    ...
  // 5
  // 6
  // 7
  // 8 
  // 9 

  notas[0][0] = 5.0f;  notas[0][1] = 4.0f;
  notas[1][0] = 6.0f;  notas[1][1] = 3.0f;
  notas[2][0] = 4.0f;  notas[2][1] = 7.0f;
  notas[3][0] = 10.0f; notas[3][1] = 4.0f;
  notas[4][0] = 5.0f;  notas[4][1] = 4.0f;
  notas[5][0] = 5.0f;  notas[5][1] = 4.0f;
  notas[6][0] = 5.0f;  notas[6][1] = 4.0f;
  notas[7][0] = 5.0f;  notas[7][1] = 4.0f;
  notas[8][0] = 5.0f;  notas[8][1] = 4.0f;
  notas[9][0] = 5.0f;  notas[9][1] = 4.0f;

  for(int i=0; i<10; i++) {
    for(int j=0; j<2; j++) {
      printf("%.1f, ", notas[i][j]);
    }
  }

  printf("\n");
  return 0;
}