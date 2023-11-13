/*
Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)".
*/
#include <stdio.h>

int main() {
  struct contato_t {
    char nome[61];
    long int telefone;
  };

  struct contato_t contatos[10];

  for(int i=0; i<10; i++) {
    printf("%iº Contato\n", i + 1);
    printf("Entre com o nome: ");
    int ok = scanf("%[^\n]s", contatos[i].nome);
    printf("Entre com o telefone: ");
    ok = scanf("%li", &contatos[i].telefone);
    getchar();
  }

  printf("LISTA DE CONTATOS\n");
  for(int i=0; i<10; i++) {
    printf("%-60s - (%11li)\n", contatos[i].nome, contatos[i].telefone);
  }

  return 0;
}