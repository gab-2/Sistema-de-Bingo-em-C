#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void Historico(){

    FILE *historico;
    historico = fopen("Historico.txt", "w");

        for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
        {             
            fscanf(historico, "%d ", global_resultadoDoIntervalo[i]); 
        }
        for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
        {            
            
            printf("Números sorteados: ");
            fprintf(historico, "%d \t", global_resultadoDoIntervalo[i]); 

        }

    printf("Histórico: ");
    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf("%d ", global_resultadoDoIntervalo[i]);
    }

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++) {
        for (int j = i + 1; j < global_Qtd_participantes; i++) {

            if (global_resultadoDoIntervalo[i] == global_Numeros_Participante) {
                printf("Participante %d, acertou o número: %d\n", i, global_resultadoDoIntervalo[i]);
            }
        }
    }

    fclose(historico);

}