/*
Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.
*/
#include <stdio.h>

int main() {

  char frase[30];

  printf("Entre com uma frase: ");
  int ok = scanf("%[^\n]s", frase);

  char matriz[6][5];
  int k = 0;

  for(int i=0; i<6; i++) {
    for(int j=0; j<5; j++) {
      matriz[i][j] = frase[k++];
    }
  }

  printf("A frase cifrada: ");
  for(int j=0; j<5; j++) {
    for(int i=0; i<6; i++) {
      printf("%c", matriz[i][j]);
    }
  }
  printf("\n");

//   0 1 2 3 4
// 0 U m a   f
// 1 r a s e
// 2 q u a l q
// 3 q u e r 
// 4 p a r a 
// 5 c i f r a

  return 0;
}