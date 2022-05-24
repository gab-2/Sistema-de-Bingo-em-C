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

    printf("Cadatrar novo Participante");
    printf("Digite o nome do Participante: ");
    printf("%c", &Dados.nome);
    printf("Digite o numero do Participante: ");
    scanf("%d", &Dados.numero);
    printf("Digite o numero do Documento Pessoal do Perticipante: ");
    scanf("%d", &Dados.DocumetoPessoal);
}

void Premios()
{
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

    while (opcao = !6)
    {

        if (opcao = 1)
        {

            Pessoa();

        }
    }
}