#include <stdio.h>
#include <stdlib.h>
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

    printf("\n Digite o numero do participante: ");
    scanf("%d", &global_Codigo_Participante);

    sprintf(participante, "participante-%d.txt", global_Codigo_Participante);
    cadastro_participante = fopen(participante, "r");

    if (cadastro_participante != NULL)
    {
        fscanf(cadastro_participante, " %d ", &global_Numeros_Participante);
        printf(" %d ", global_Numeros_Participante);
    }
    else
    {
        printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
    }

    system("cls");
}