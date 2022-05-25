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

    printf("\n Cadatrar novo Participante \n");
    printf("\n Digite o nome do Participante: \n");
    scanf("%c", &Dados.nome);
    printf("\n Digite o numero do Participante: \n");
    scanf("%d", &Dados.numero);
    printf("\n Digite o numero do Documento Pessoal do Perticipante: \n");
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
    printf("\n Informe o premio para cadastro \n");
    scanf("%c", &Premios.nomeDoPremio);
    printf("\n Informe o valor do premio \n");
    scanf("%d", &Premios.ValorDoPremio);
}

void RegistrarCartela()
{
}

void main()
{

    int opcao;

    printf("---------------Menu--------------\n");
    printf("1 - Cadastrar participante\n");
    printf("2 - Cadastrar Premios\n");
    printf("3 - Selecionar o intervalo dos numeros\n");
    printf("4 - Quantidade de numeros por participante\n");
    printf("5 - Registrar cartela\n");
    printf("6 - Iniciar o Bingo!\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &opcao);

    while (opcao != 6)
    {

        if (opcao == 1)
        {

            Pessoa();

        }

        if (opcao == 2)
        {
            Premios();
        }
    }
}