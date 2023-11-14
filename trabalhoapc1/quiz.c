#include <stdio.h>
#include <stdlib.h>

void pause()
{
    printf("Pressione ENTER para continuar...");
    while (getchar() != '\n')
        ;
    getchar();
}
void nivelFacil()
{
    int resposta;
    int continuar = 1;
    int pontuacao = 0;
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
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            ;
            break;
        case 2:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 3:
            pontuacao++;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        default:
            printf("Opção inválida!\n");
            pause();
            break;
        }
    }
}

void nivelMedio()
{
    int continuar = 1;
    int resposta;
    int pontuacao = 0;
    while (continuar)
    {
        system("clear");
        printf("Qual é a capital do Canadá?\n");
        printf("1- Toronto\n");
        printf("2- Montreal\n");
        printf("3- Ottawa\n");
        printf("4- Vancouver\n");
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
        printf("Quem escreveu a peça de teatro Romeu e Julieta?\n");
        printf("1- William Shakespeare\n");
        printf("2- Machado de Assis\n");
        printf("3- Molière\n");
        printf("4- Ésquilo\n");
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
        printf("Quantos estados tem no Brasil?\n");
        printf("1- 26\n");
        printf("2- 27\n");
        printf("3- 28\n");
        printf("4- 29\n");
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
        printf("Quais o menor e o maior país do mundo?\n");
        printf("1- Vaticano e Rússia\n");
        printf("2- Nauru e China\n");
        printf("3- Mônaco e Canadá\n");
        printf("4- Malta e Estados Unidos\n");
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
        printf("Quanto tempo a luz do Sol demora para chegar à Terra?\n");
        printf("1- 12 minutos\n");
        printf("2- 1 dia\n");
        printf("3- 12 horas\n");
        printf("4- 8 minutos\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 2:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 3:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 4:
            pontuacao++;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            system("pause");
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
}

void niveldificil()
{
    int continuar = 1;
    int pontuacao = 0;
    int resposta;
    while (continuar)
    {
        system("clear");
        printf("Qual a obra de arte mais cara já arrematada em um leilão?\n");
        printf("1- A Ronda Noturna, de Rembrandt\n");
        printf("2- Nº 5, de Jackson Pollock\n");
        printf("3- Os Jogadores de Cartas, de Paul Cézanne\n");
        printf("4-  Salvator Mundi, de Leonardo da Vinci\n");
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
            continuar = 0;
            break;
        case 4:
            pontuacao++;
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
        printf("Qual o nome do cientista que descobriu o processo de pasteurização "
               "e a vacina contra a raiva?\n");
        printf("1- Louis Pasteur\n");
        printf("2- Marie Curie\n");
        printf("3- Charles Darwin\n");
        printf("4- Albert Einstein\n");
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
        printf(" Qual o país mais novo do mundo?\n");
        printf("1- Kosovo\n");
        printf("2- Palestina\n");
        printf("3- Sudão do Sul\n");
        printf("4- Curdistão\n");
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
        printf("Quem foi a primeira mulher a viajar para o espaço?\n");
        printf("1- Valentina Tereshkova\n");
        printf("2- Svetlana Savitskaya\n");
        printf("3- Sally Ride\n");
        printf("4- Mae Jemison\n");
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
        printf("Qual foi a célebre invenção feita por Robert Kahn e Vint Cerf?\n");
        printf("1- O telefone\n");
        printf("2- A lâmpada\n");
        printf("3- A internet\n");
        printf("4- O computador\n");
        printf("Entre com sua resposta: ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 2:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        case 3:
            pontuacao++;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            system("pause");
            continuar = 0;
            break;
        case 4:
            continuar = 0;
            printf("\nQuiz Concluído!\n");
            printf("Sua pontuação final foi: %d\n", pontuacao);
            pause();
            break;
        default:
            printf("Opção inválida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("pause");
            break;
        }
    }
}

int main()
{
    char opcao = 0;
    while (1)
    {
        system("clear");
        printf("\e[0;33mMENU PRINCIPAL\e[0m\n");
        printf("1 - Novo Quiz\n");
        printf("2 - Ver resultados anteriores\n");
        printf("0 - Sair\n");
        printf("Sua escolha => ");
        scanf(" %c", &opcao);
        getchar();

        switch (opcao)
        {
        case '1':
            system("clear");
            char nome[50];
            printf("Coloque seu nome: ");
            scanf("%s", nome);
            system("clear");
            printf("\e[0;33mNOVO QUIZ\e[0m\n");
            printf("1- Dificuldade Fácil\n");
            printf("2- Dificuldade Intermediária\n");
            printf("3- Dificuldade Difícil\n");
            printf("Escolha uma dificuldade ou digite 0 para voltar => ");
            scanf(" %c", &opcao);
            getchar();

            switch (opcao)
            {
            case '1':
                nivelFacil();
                break;
            case '2':
                nivelMedio();
                break;
            case '3':
                niveldificil();
                break;
            case '0':
                break;
            default:
                printf("Opção inválida!\n");
                printf("Pressione ENTER para continuar...");
                getchar();
                break;
            }
            break;

        case '2':

            break;

        case '0':
            return 0;

        default:
            printf("\e[0;31mOpção inválida!\e[0m\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            break;
        }
    }
    return 0;
}