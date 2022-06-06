#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void Premios()
{
    struct CadastroDePremios
    {
        char nomeDoPremio[30];
        int ValorDoPremio;
    };

    struct CadastroDePremios Premios;

    int opcao_qtd_premios;

    printf("\n Voce deseja cadastrar mais premios do que participantes?");
    printf("\n Se sim digite 1 || Se nao digite 2");
    printf("\n Opcao: ");
    scanf("%d", &opcao_qtd_premios);

    if (opcao_qtd_premios == 1)
    {

        while (opcao_qtd_premios != 1)
        {
            printf("\n Opcao digitada incorreta! Tente novamente!");
            printf("\n Digite a opcao desejada: ");
            scanf("%d", &opcao_qtd_premios);
        }

        int Qtd_premios;

        printf("\n Digite a quantidade de premios que serao cadastrados: ");
        scanf("%d", &Qtd_premios);

        FILE *cadastro_premios;
        char premio[Qtd_premios];

        printf("\n Cadatrar novo Premio!");

        for (int i = 0; i < Qtd_premios; i++)
        {

            // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
            sprintf(premio, "premio-%d.txt", i);
            cadastro_premios = fopen(premio, "w");

            if (cadastro_premios != NULL)
            {

                printf("\n Informe o nome premio para cadastro ");
                scanf("%s", &Premios.nomeDoPremio);
                fprintf(cadastro_premios, "%s\n", Premios.nomeDoPremio);

                printf("\n Informe o valor do premio ");
                scanf("%d", &Premios.ValorDoPremio);
                fprintf(cadastro_premios, "%d\n", Premios.ValorDoPremio);

                fclose(cadastro_premios);
            }
            else
            {
                printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
            }
        }
    }

    else if (opcao_qtd_premios == 2)
    {

        while (opcao_qtd_premios != 2)
        {
            printf("\n Opcao digitada incorreta! Tente novamente!");
            printf("\n Digite a opcao desejada: ");
            scanf("%d", &opcao_qtd_premios);
        }

        int Qtd_premios; // Qtd_participantes

        printf("\n Digite a quantidade de premios que serao cadastrados: ");
        scanf("%d", &Qtd_premios);

        while (Qtd_premios > global_Qtd_participantes)
        {
            printf("\n A quantidade de premios nao pode ser maior do que a quantidade de jogadores!");
            printf("\n Tente novamente!");
            printf("\n Digite a quantidade de premios que serao cadastrados: ");
            scanf("%d", &Qtd_premios);
        }

        FILE *cadastro_premios;
        char premio[Qtd_premios];

        printf("\n Cadatrar novo Premio!");

        for (int i = 0; i < Qtd_premios; i++)
        {

            // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
            sprintf(premio, "premio-%d.txt", i);
            cadastro_premios = fopen(premio, "w");

            if (cadastro_premios != NULL)
            {

                printf("\n Informe o nome premio para cadastro: ");
                scanf("%s", &Premios.nomeDoPremio);
                fprintf(cadastro_premios, "%s\n", Premios.nomeDoPremio);

                printf("\n Informe o valor do premio: ");
                scanf("%d", &Premios.ValorDoPremio);
                fprintf(cadastro_premios, "%d\n", Premios.ValorDoPremio);

                fclose(cadastro_premios);
            }
            else
            {
                printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
            }
        }
    }
}