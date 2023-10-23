#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao = 0;
  float saldo = 0.0f;

  while(1) {
    int ok = system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1- Consultar saldo\n");
    printf("2- Fazer recarga\n");
    printf("3- Listar recados\n");
    printf("0- Sair\n");

    printf("Sua escolha => ");
    ok = scanf("%c", &opcao);
    getchar();

    switch(opcao) {
      case '1':
        printf("Seu saldo é %.2f\n", saldo);
        break;
      
      case '2':
        printf("Escolha um valor de recarga: ");
        break;

      
      case '3':
        printf("Você não tem recados.\n"); 
        break;

      
      case '0': break;
      default: 
        printf("Opcao invalida!\n"); break;
    }

    if(opcao == '0') break; 

    printf("Pressione ENTER para continuar...");
    getchar();
  }



  return 0;
}