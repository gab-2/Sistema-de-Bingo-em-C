#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Codigo_Participante, global_Numeros_Participante = 0;

void RegistrarCartela()
{

    int opcao;

    do
    {

        printf("\n Digite o numero do participante para registrar a cartela: ");
        scanf("%d", &global_Codigo_Participante);

        char participante[global_Qtd_participantes];

        sprintf(participante, "participante-%d.txt", global_Codigo_Participante);
        cadastro_participante = fopen(participante, "a");

        if (cadastro_participante != NULL)
        {

            printf("\n Quantidade de numeros que podem ser selecionados: %d", global_TamanhoDoIntervalo);

            printf("\n Digite os numeros do participante: %d", global_Codigo_Participante);

            for (int i = 0; i < global_TamanhoDoIntervalo; i++)
            {

                printf("\n Digite o numero %d do participante: ", i + 1);
                scanf("%d", &global_Numeros_Participante);
                fprintf(cadastro_participante, " %d ", global_Numeros_Participante);

                while (global_Numeros_Participante < global_inicioIntervaloDosNumeros || global_Numeros_Participante > global_FinalIntervaloDosNumeros)
                {
                    printf("\n O numero deve estar entre o intervalo de: %d a %d", global_inicioIntervaloDosNumeros, global_FinalIntervaloDosNumeros);
                    printf("\n Tente novamente!");
                    printf("\n Digite o numero %d do participante: ", i);
                    scanf("%d", &global_Numeros_Participante);
                    fprintf(cadastro_participante, " %d ", global_Numeros_Participante);
                }
            }
        }
        else
        {
            printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
        }

        fclose(cadastro_participante);

        printf("\n Deseja cadastrar uma nova cartela de um participante?");
        printf("\n Digite 1 para sim || 2 para nao: ");
        scanf("%d", &opcao);
    } while (opcao != 2);

    system("cls");
}