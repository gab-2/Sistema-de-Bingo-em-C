#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void IntervaloNumeros()
{
    int i, TamanhoDoIntervalo;
    int inicioIntervaloDosNumeros, FinalIntervaloDosNumeros;
    int *resultadoDoIntervalo;

    printf("Digite o tamanho do intervalo \n");

    scanf("%d", &TamanhoDoIntervalo);
    resultadoDoIntervalo = malloc(TamanhoDoIntervalo * sizeof(int));

    printf("Digite o numero do inicio do intervalo : ");
    scanf("%d", &inicioIntervaloDosNumeros);

    printf("Digite o numero do final do intervalo : ");
    scanf("%d", &FinalIntervaloDosNumeros);

    srand(time(NULL));

    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        resultadoDoIntervalo[i] = inicioIntervaloDosNumeros + rand() % FinalIntervaloDosNumeros;
    }
    printf("\n\n");
    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        printf("Numeros: %d ", resultadoDoIntervalo[i]);
        printf("\n\n");
    }
    free(resultadoDoIntervalo);
}