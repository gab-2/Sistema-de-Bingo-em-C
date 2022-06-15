#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

FILE *cadastro_premios;

struct CadastroDePremios
{
    char nomeDoPremio[30];
    int ValorDoPremio;
};

struct CadastroDePremios Premio;

void Premios()
{

    int opcao_qtd_premios;

    printf("\n Você deseja cadastrar mais prêmios do que participantes?");
    printf("\n Se sim digite 1 || Se não digite 2");
    printf("\n Opção: ");
    scanf("%d", &opcao_qtd_premios);

    system("cls");

    if (opcao_qtd_premios == 1)
    {

        while (opcao_qtd_premios != 1)
        {
            printf("\n Opção digitada incorreta! Tente novamente!");
            printf("\n Digite a opção desejada: ");
            scanf("%d", &opcao_qtd_premios);
        }

        int Qtd_premios;

        printf("\n Digite a quantidade de prêmios que serão cadastrados: ");
        scanf("%d", &Qtd_premios);

        system("cls");

        char premio[Qtd_premios];
        int j = 0;

        printf("\n Cadastrar novo prêmio! \n");

        for (int i = 0; i < Qtd_premios; i++)
        {

            j++;
            // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
            sprintf(premio, "premio-%d.txt", j);
            cadastro_premios = fopen(premio, "w");

            if (cadastro_premios != NULL)
            {

                printf("\n Informe o nome do prêmio para cadastro: ");
                scanf("%s", &Premio.nomeDoPremio);
                fprintf(cadastro_premios, "%s\n", Premio.nomeDoPremio);

                printf("\n Informe o valor do prêmio: ");
                scanf("%d", &Premio.ValorDoPremio);
                fprintf(cadastro_premios, "%d\n", Premio.ValorDoPremio);

                fclose(cadastro_premios);
            }
            else
            {
                printf("ERRO!, O arquivo não pode ser aberto ou criado!");
            }
        }
    }

    else if (opcao_qtd_premios == 2)
    {

        while (opcao_qtd_premios != 2)
        {
            printf("\n Opção digitada incorreta! Tente novamente!");
            printf("\n Digite a opção desejada: ");
            scanf("%d", &opcao_qtd_premios);
        }

        int Qtd_premios; // Qtd_participantes

        printf("\n Digite a quantidade de prêmios que serão cadastrados: ");
        scanf("%d", &Qtd_premios);

        system("cls");

        while (Qtd_premios > global_Qtd_participantes)
        {
            printf("\n A quantidade de prêmios não pode ser maior do que a quantidade de jogadores!");
            printf("\n Tente novamente!");
            printf("\n Digite a quantidade de prêmios que serão cadastrados: ");
            scanf("%d", &Qtd_premios);
        }

        FILE *cadastro_premios;
        char premio[Qtd_premios];
        int j = 0;

        printf("\n Cadastrar novo prêmio! \n");

        for (int i = 0; i < Qtd_premios; i++)
        {
            j++;
            // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
            sprintf(premio, "premio-%d.txt", j);
            cadastro_premios = fopen(premio, "w");

            if (cadastro_premios != NULL)
            {

                printf("\n Informe o nome do prêmio para cadastro: ");
                scanf("%s", &Premio.nomeDoPremio);
                fprintf(cadastro_premios, "%s\n", Premio.nomeDoPremio);

                printf("\n Informe o valor do prêmio: ");
                scanf("%d", &Premio.ValorDoPremio);
                fprintf(cadastro_premios, "%d\n", Premio.ValorDoPremio);

                fclose(cadastro_premios);
            }
            else
            {
                printf("ERRO!, O arquivo não pode ser aberto ou criado!");
            }
        }
    }

    system("cls");
}