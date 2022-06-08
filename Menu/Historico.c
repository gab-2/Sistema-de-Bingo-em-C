#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void Historico(){

    FILE *historico;
    historico = fopen("Historico.txt", "a");
    
    if (historico == NULL) 
    {
        printf("Erro na abertura do arquivo! ");
    }else 
    {
        //printf("Números sorteados: \n");
        for (int i = 0; i < global_TamanhoDoIntervalo; i++)
        {            
            fprintf(historico, "%d", global_resultadoDoIntervalo[i]); 
            //printf(" %d ", global_resultadoDoIntervalo[i]);
        }
    }
}