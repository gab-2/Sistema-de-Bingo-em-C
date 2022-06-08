#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Codigo_Participante, global_Numeros_Participante[100];

void RegistrarCartela()
{

    int opcao;

    do
    {

        printf("\n Digite o número do participante para registrar a cartela: ");
        scanf("%d", &global_Codigo_Participante);

        char participante[global_Qtd_participantes];

        sprintf(participante, "participante-%d.txt", global_Codigo_Participante);
        cadastro_participante = fopen(participante, "a");

        if (cadastro_participante != NULL)
        {

            printf("\n Quantidade de números que podem ser selecionados: %d", global_TamanhoDoIntervalo);

            printf("\n Digite os números do participante: %d", global_Codigo_Participante);

            for (int i = 0; i < global_TamanhoDoIntervalo; i++)
            {

                printf("\n Digite o número %d do participante: ", i + 1);
                scanf("%d", &global_Numeros_Participante[i]);
                fprintf(cadastro_participante, " %d ", global_Numeros_Participante[i]);

                while (global_Numeros_Participante[i] < global_inicioIntervaloDosNumeros || global_Numeros_Participante[i] > global_FinalIntervaloDosNumeros)
                {
                    printf("\n O número deve estar entre o intervalo de: %d a %d", global_inicioIntervaloDosNumeros, global_FinalIntervaloDosNumeros);
                    printf("\n Tente novamente!");
                    printf("\n Digite o número %d do participante: ", i);
                    scanf("%d", &global_Numeros_Participante[i]);
                    fprintf(cadastro_participante, " %d ", global_Numeros_Participante[i]);
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