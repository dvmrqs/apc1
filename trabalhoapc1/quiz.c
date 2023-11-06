#include <stdio.h>
#include <stdlib.h>

void nivelFacil()
{ // Corrigido: Adicionados os parênteses
    int pontuacao = 0;
    int resposta;
    int continuar = 1;
    while (continuar)
    {
        system("clear");
        printf("Quem foi a primeira pessoa a pisar na lua?\n");
        printf("1- Yuri Gagarin\n");
        printf("2- Marcos Pontes\n");
        printf("3- Neil Armstrong\n");
        printf("4- A cadela Laika\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            break;
        case 2:
            continuar = 0;
            break;
        case 3:
            pontuacao++;
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            break;
        default:
            printf("Opção inválida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("pause");
            break;
        }
    }
    continuar = 1;
    while (continuar)
    {
        system("clear");
        printf("Qual a montanha mais alta do mundo?\n");
        printf("1- Qual a montanha mais alta do mundo?\n");
        printf("2- Monte Everest\n");
        printf("3- Mauna Kea\n");
        printf("4- Dhaulagiri\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            break;
        case 2:
            pontuacao++;
            continuar = 0;
            break;
        case 3:
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            break;
        default:
            printf("Opção inválida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("pause");
            break;
        }
    }
    continuar = 1;
    while (continuar)
    {
        system("clear");
        printf("Qual o maior animal terrestre?\n");
        printf("1- Elefante africano\n");
        printf("2- Dinossauro\n");
        printf("3- Baleia Azul\n");
        printf("4- Girafa\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            pontuacao++;
            continuar = 0;
            break;
        case 2:
            continuar = 0;
            break;
        case 3:
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            break;
        default:
            printf("Opção inválida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("pause");
            break;
        }
    }
    continuar = 1;
    while (continuar)
    {
        system("clear");
        printf("Qual o nome do presidente do Brasil?\n");
        printf("1- Jair Bolsonaro\n");
        printf("2- Lula\n");
        printf("3- Dilma\n");
        printf("4- Fernando Henrique Cardoso\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            break;
        case 2:
            pontuacao++;
            continuar = 0;
            break;
        case 3:
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            break;
        default:
            printf("Opção inválida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("pause");
            break;
        }
    }
    continuar = 1;
    while (continuar)
    {
        system("clear");
        printf("Onde estão localizadas as Pirâmides de Gizé?\n");
        printf("1- México\n");
        printf("2- Peru\n");
        printf("3- Egito\n");
        printf("4- Sudão\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            break;
        case 2:
            continuar = 0;
            break;
        case 3:
            pontuacao++;
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            break;
        }
    }
    printf("Sua pontuação foi: %d\n", pontuacao);
}
int main()
{
    char opcao = 0;

    while (1)
    {
        system("clear"); // Aqui poderia haver um teste de retorno
        printf("\e[0;33mMENU PRINCIPAL\e[0m\n");
        printf("1 - Novo Quiz\n");
        printf("2 - Ver resultados anteriores\n");
        printf("0 - Sair\n");
        printf("Sua escolha => ");
        scanf(" %c", &opcao); // Corrigido: Adicionado espaço para ignorar whitespaces
        getchar();            // Pode ser problemático se o buffer tiver mais caracteres

        switch (opcao)
        {
        case '1':
            system("clear"); // Aqui poderia haver um teste de retorno
            printf("\e[0;33mNOVO QUIZ\e[0m\n");
            printf("1- Dificuldade Fácil\n");
            printf("2- Dificuldade Intermediária\n");
            printf("3- Dificuldade Difícil\n");
            printf("Escolha uma dificuldade ou digite 0 para voltar => ");
            scanf(" %c", &opcao); // Corrigido: Adicionado espaço para ignorar whitespaces
            getchar();            // Pode ser problemático se o buffer tiver mais caracteres

            switch (opcao)
            {
            case '1':
                nivelFacil();
                break; // Corrigido: Adicionado ponto-e-vírgula e break
            case '2':
                printf("Dificuldade Intermediária\n");
                break; // Corrigido: Adicionado break
            case '3':
                printf("Dificuldade Difícil\n");
                break; // Corrigido: Adicionado break
            case '0':
                break; // Corrigido: Adicionado break
            default:
                printf("Opção inválida!\n");
                printf("Pressione ENTER para continuar...");
                getchar();
                break;
            }
            break;

        case '2':
            // Aqui deve ir o código para "Ver resultados anteriores"
            break;

        case '0':
            return 0; // Encerra o programa

        default:
            printf("\e[0;31mOpção inválida!\e[0m\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            break;
        }
    }
    return 0;
}