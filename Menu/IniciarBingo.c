#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void IniciarBingo()
{

    printf("\n Numeros que foram sorteados dentro do intervalo! \n");

    for (int i = 0; i < global_TamanhoDoIntervalo; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }

    char participante[global_Qtd_participantes];

    sprintf(participante, "participante-%d.txt", global_Codigo_Participante);
    cadastro_participante = fopen(participante, "a");

    fseek(cadastro_participante, 3 * sizeof(struct DadosParticipante), SEEK_SET);
}