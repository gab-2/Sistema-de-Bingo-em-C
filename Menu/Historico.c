#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void Historico()
{

    FILE *historico;
    historico = fopen("Historico.txt", "a");

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        fscanf(historico, "%d ", global_resultadoDoIntervalo[i]);
    }

    printf("Histórico: ");

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        fprintf(historico, "%d \t", global_resultadoDoIntervalo[i]);
    }

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf("%d ", global_resultadoDoIntervalo[i]);
    }

    fclose(historico);
}