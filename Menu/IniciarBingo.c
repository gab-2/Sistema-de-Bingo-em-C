#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define _GNU_SOURCE

void IniciarBingo()
{

    printf("\n Números que foram sorteados dentro do intervalo! \n");

    for (int i = 0; i < global_TamanhoDoIntervalo; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////

    char participante[global_Qtd_participantes];

    printf("\n Digite o número do participante: ");
    scanf("%d", &global_Codigo_Participante);

    sprintf(participante, "participante-%d.txt", global_Codigo_Participante);
    cadastro_participante = fopen(participante, "r");

    ///////////////////////////////////////////////////////////////////////////////////////////////

    size_t len = 100; // valor arbitrário
    char *linha = malloc(len);

    if (!cadastro_participante)
    {
        perror("teste.txt");
        exit(1);
    }
    while (getline(&linha, &len, cadastro_participante) > 1)
    {
        printf("\n %d", linha);
        //printf("\n %s", linha);
    }
    if (linha)
        free(linha);
    fclose(cadastro_participante);

    ///////////////////////////////////////////////////////////////////////////////////////////////

    // system("cls");
}