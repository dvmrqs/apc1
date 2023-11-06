#include <stdio.h>
#include <stdlib.h>

int main() { 
  char opcao = 0;
  float saldo = 0.0f;

  while(1) {
    int ok = system("clear");
    printf("\e[1;37mMENU PRINCIPAL\e[0m\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n"); 
    printf("0 - Sair\n"); 
    printf("Sua escolha => ");
    ok = scanf("%c", &opcao);
    getchar();

    switch(opcao) {
      case '1': 
        ok = system("clear");
        printf("CONSULTA DE SALDO\n");
        printf("Seu saldo é %.2f\n", saldo); 
        printf("Pressione ENTER para continuar...");
        getchar();
        break;
      case '2': {
        char valor = 0;
        while (valor != '0') {
          ok = system("clear");
          printf("FAZER RECARGA\n");
          printf("1 - R$ 10,00\n");
          printf("2 - R$ 20,00\n");
          printf("3 - R$ 50,00\n");
          printf("Escolha um valor de recarga ou digite 0 para retornar: ");
          ok = scanf("%c", &valor);
          getchar();

          switch(valor) {
            case '1': saldo = saldo + 10.0f; break;
            case '2': saldo = saldo + 20.0f; break;
            case '3': saldo = saldo + 50.0f; break;
            case '0': break;
            default: 
              printf("Opção inválida!\n"); 
              printf("Pressione ENTER para continuar...");
              getchar();
              break;
          }

          if (valor == '1' || valor == '2' || valor == '5') {
            printf("\e[0;32mRecarga realizada com sucesso!\e[0m\n");
            printf("Pressione ENTER para continuar...");
            getchar();
          }
        }    
        break;
      }
      case '3': 
        ok = system("clear");
        printf("LISTAR RECADOS\n"); 
        printf("Você não tem recados\n"); 
        printf("Pressione ENTER para continuar...");
        getchar();
        break;
      case '0': break;
      default: 
        printf("\e[0;31mOpção inválida!\e[0m\n");
        printf("Pressione ENTER para continuar...");
        getchar();
        break;
    }

    if (opcao == '0') break;
  }

  return 0;
}