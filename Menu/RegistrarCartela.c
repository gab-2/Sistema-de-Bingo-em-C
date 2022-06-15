#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Codigo_Participante, global_Numeros_Participante;

void RegistrarCartela()
{

    int opcao = 0;

    do
    {

        printf("\n Digite o número do participante para registrar a cartela: ");
        scanf("%d", &global_Codigo_Participante);

        char participante[9999];

        sprintf(participante, "Cartela-Participante-%d.txt", global_Codigo_Participante);
        cadastro_participante = fopen(participante, "w");

        if (cadastro_participante != NULL)
        {

            printf("\n Quantidade de números que podem ser selecionados: %d", global_TamanhoDoIntervalo);

            printf("\n Digite os números do participante: %d", global_Codigo_Participante);

            for (int i = 0; i < global_TamanhoDoIntervalo; i++)
            {

                printf("\n Digite o número %d do participante: ", i + 1);
                scanf("%d", &global_Numeros_Participante);
                fprintf(cadastro_participante, "\n%d", global_Numeros_Participante);

                while (global_Numeros_Participante < global_inicioIntervaloDosNumeros || global_Numeros_Participante > global_FinalIntervaloDosNumeros)
                {
                    printf("\n O número deve estar entre o intervalo de: %d a %d", global_inicioIntervaloDosNumeros, global_FinalIntervaloDosNumeros);
                    printf("\n Tente novamente!");
                    printf("\n Digite o número %d do participante: ", i + 1);
                    scanf("%d", &global_Numeros_Participante);
                    fprintf(cadastro_participante, "\t%d", global_Numeros_Participante);
                }
            }
        }
        else
        {
            printf("ERRO!, O arquivo não pode ser aberto ou criado!");
        }

        fclose(cadastro_participante);

        printf("\n Deseja cadastrar uma nova cartela de um participante?");
        printf("\n Digite 1 para sim || 2 para não: ");
        scanf("%d", &opcao);

    } while (opcao != 2);

    system("cls");
}