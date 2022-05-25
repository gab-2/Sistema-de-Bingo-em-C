#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função e struc para coletar os dados do participante
void Pessoa()
{

    struct DadosParticipante
    {
        char nome[30];
        int numero;
        int DocumetoPessoal;
    };

    struct DadosParticipante Dados;

    printf("\n Cadatrar novo Participante!");
    printf("\n Digite o nome do Participante: ");
    scanf("%s", &Dados.nome);
    printf("\n Digite o numero do Participante: ");
    scanf("%d", &Dados.numero);
    printf("\n Digite o numero do Documento Pessoal do Perticipante: ");
    scanf("%d", &Dados.DocumetoPessoal);
}

void Premios()
{
    struct CadastroDePremios
    {
        char nomeDoPremio[30];
        int ValorDoPremio;
    };
    struct CadastroDePremios Premios;
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

    while (opcao != 6)
    {

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
    }
}