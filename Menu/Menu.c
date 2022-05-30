#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

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

    printf("\n Cadatrar novo Participante!");

    for (int i = 0; i < Qtd_participantes; i++)
    {

        FILE *cadastro_participante;
        char participante[Qtd_participantes];

        // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
        sprintf(participante, "participante-%s.txt", i);
        cadastro_participante = fopen(participante, "w");

        if (cadastro_participante != NULL)
        {

            printf("\n Digite o nome do Participante: ");
            scanf("%s", &Dados.nome);
            fprintf(cadastro_participante,"%s\n", Dados.nome);

            printf("\n Digite o numero do Participante: ");
            scanf("%d", &Dados.numero);
            fprintf(cadastro_participante,"%d\n", Dados.numero);

            printf("\n Digite o numero do Documento Pessoal do Perticipante: ");
            scanf("%d", &Dados.DocumetoPessoal);
            fprintf(cadastro_participante,"%d\n", Dados.DocumetoPessoal);

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

    int Qtd_participantes, Qtd_premios;

    while (Qtd_premios > Qtd_participantes)
    {

        printf("A quantidade de premios nao pode ser maior que a quantidade de participantes!");
    }

    printf("\n Informe o premio para cadastro ");
    scanf("%s", &Premios.nomeDoPremio);
    printf("\n Informe o valor do premio ");
    scanf("%d", &Premios.ValorDoPremio);
}

void IntervaloNumeros()
{

    int intervalo_numeros;

    printf("\n Digite o intervalo de numeros a serem sorteados!");
    printf("\n EX: (1 a 50)");
    printf("Intervalo: ");
    scanf("%d", intervalo_numeros);
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