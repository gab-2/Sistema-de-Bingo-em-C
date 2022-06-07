#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

FILE *cadastro_participante;
int global_Qtd_participantes;

struct DadosParticipante
    {
        char nome[30];
        int numero;
        int DocumetoPessoal;
    };

struct DadosParticipante Dados;

// Função e struct para coletar os dados do participante
void Participante()
{

    int j = 0;

    printf("\n Digite a quantidade de participantes que serão cadastrados: ");
    scanf("%d", &global_Qtd_participantes);

    
    char participante[global_Qtd_participantes];

    printf("\n Cadatrar novo Participante! \n");

    for (int i = 0; i < global_Qtd_participantes; i++)
    {
        j++;

        // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
        sprintf(participante, "participante-%d.txt", j);
        cadastro_participante = fopen(participante, "w");

        if (cadastro_participante != NULL)
        {

            printf("\n Digite o nome do Participante %d: ", j);
            scanf("%s", &Dados.nome);
            fprintf(cadastro_participante, "%s\n", Dados.nome);

            printf("\n Digite o numero de telefone do Participante %d: ", j);
            scanf("%d", &Dados.numero);
            fprintf(cadastro_participante, "%d\n", Dados.numero);

            printf("\n Digite o numero do Documento Pessoal do Perticipante ex:(CPF) %d: ", j);
            scanf("%d", &Dados.DocumetoPessoal);
            fprintf(cadastro_participante, "%d\n", Dados.DocumetoPessoal);

            fclose(cadastro_participante);
        }
        else
        {
            printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
        }

        system("cls");

    }
}