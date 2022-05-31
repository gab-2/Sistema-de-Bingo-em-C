#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Função e struct para coletar os dados do participante
void Pessoa()
{

    struct DadosParticipante
    {
        char nome[30];
        int numero;
        int DocumetoPessoal;
    };

    struct DadosParticipante Dados;

    int Qtd_participantes;

    printf("\n Digite a quantidade de participantes que serao cadastrados: ");
    scanf("%d", &Qtd_participantes);

    FILE *cadastro_participante;
    char participante[Qtd_participantes];

    printf("\n Cadatrar novo Participante!");

    for (int i = 0; i < Qtd_participantes; i++)
    {

        // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
        sprintf(participante, "participante-%d.txt", i);
        cadastro_participante = fopen(participante, "w");

        if (cadastro_participante != NULL)
        {

            printf("\n Digite o nome do Participante: ");
            scanf("%s", &Dados.nome);
            fprintf(cadastro_participante, "%s\n", Dados.nome);

            printf("\n Digite o numero do Participante: ");
            scanf("%d", &Dados.numero);
            fprintf(cadastro_participante, "%d\n", Dados.numero);

            printf("\n Digite o numero do Documento Pessoal do Perticipante: ");
            scanf("%d", &Dados.DocumetoPessoal);
            fprintf(cadastro_participante, "%d\n", Dados.DocumetoPessoal);

            fclose(cadastro_participante);
        }
        else
        {
            printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
        }
    }
}

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

    if (opcao_qtd_premios = 1)
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

    else if (opcao_qtd_premios = 2)
    {

        while (opcao_qtd_premios != 2)
        {
            printf("\n Opcao digitada incorreta! Tente novamente!");
            printf("\n Digite a opcao desejada: ");
            scanf("%d", &opcao_qtd_premios);
        }

        int Qtd_participantes, Qtd_premios;

        printf("\n Digite a quantidade de premios que serao cadastrados: ");
        scanf("%d", &Qtd_premios);

        while (Qtd_premios > Qtd_participantes)
        {

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
    }
}

void IntervaloNumeros()
{
    int i, TamanhoDoIntervalo;
    int inicioIntervaloDosNumeros, FinalIntervaloDosNumeros;
    int *resultadoDoIntervalo;

    printf("Digite o tamanho do interv \n");

    scanf("%d", &TamanhoDoIntervalo);
    resultadoDoIntervalo = malloc(TamanhoDoIntervalo * sizeof(int));

    printf("Digite o numero do inicio do intervalo : ");
    scanf("%d", &inicioIntervaloDosNumeros);

    printf("Digite o numero do final do intervalo : ");
    scanf("%d", &FinalIntervaloDosNumeros);

    srand(time(NULL));

    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        resultadoDoIntervalo[i] = inicioIntervaloDosNumeros + rand() % FinalIntervaloDosNumeros;
    }
    printf("\n\n");
    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        printf("Numeros: %d ", resultadoDoIntervalo[i]);
        printf("\n\n");
    }
    free(resultadoDoIntervalo);
}

void NumerosPorParticipante()
{
}

void RegistrarCartela()
{
}

void main()
{

    int opcao;

    do
    {

        printf("\n ---------------Menu--------------");
        printf("\n 1 - Cadastrar participante");
        printf("\n 2 - Cadastrar Premios");
        printf("\n 3 - Selecionar o intervalo dos numeros");
        printf("\n 4 - Quantidade de numeros por participante");
        printf("\n 5 - Registrar cartela");
        printf("\n 6 - Iniciar o Bingo!");
        printf("\n ---------------------------------");
        printf("\n Selecione a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {

            Pessoa();
        }

        else if (opcao == 2)
        {
            Premios();
        }

        else if (opcao == 3)
        {
            IntervaloNumeros();
        }

        else if (opcao == 4)
        {
        }

        else if (opcao == 5)
        {
        }

        while (opcao < 1 || opcao > 6)
        {
            printf("Opcao digitada invalida tente novamente!\n");
            printf("Selecione a opcao desejada: ");
            scanf("%d", &opcao);
        }
    } while (opcao != 6);
}