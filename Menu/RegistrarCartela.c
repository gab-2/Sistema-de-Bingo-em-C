#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void RegistrarCartela()
{

    int opcao;

    do
    {

        int Codigo_Participante, Numeros_Participante = 0;

        printf("\n Digite o numero do participante para registrar a cartela: ");
        scanf("%d", &Codigo_Participante);

        char participante[100];

        sprintf(participante, "participante-%d.txt", Codigo_Participante);
        cadastro_participante = fopen(participante, "a");

        if (cadastro_participante != NULL)
        {

            printf("\n Quantidade de numeros que podem ser selecionados: %d", global_TamanhoDoIntervalo);

            printf("\n Digite os numeros do participante: %d", Codigo_Participante);

            for (int i = 0; i < global_TamanhoDoIntervalo; i++)
            {

                printf("\n Digite o numero %d do participante: ", i);
                scanf("%d", &Numeros_Participante);
                fprintf(cadastro_participante, "| %d |", Numeros_Participante);

                while (Numeros_Participante < global_inicioIntervaloDosNumeros || Numeros_Participante > global_FinalIntervaloDosNumeros)
                {
                    printf("\n O numero deve estar entre o intervalo de: %d a %d", global_inicioIntervaloDosNumeros, global_FinalIntervaloDosNumeros);
                    printf("\n Tente novamente!");
                    printf("\n Digite o numero %d do participante: ", i);
                    scanf("%d", &Numeros_Participante);
                    fprintf(cadastro_participante, "| %d |", Numeros_Participante);
                }
            }
        }
        else
        {
            printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
        }

        fclose(cadastro_participante);

        printf("\n Deseja cadastrar um novo participante?");
        printf("\n Digite 1 para sim || 2 para nao");
        scanf("%d", &opcao);
    } while (opcao != 2);
}