#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void IntervaloNumeros()
{
    int i = 0, igual, TamanhoDoIntervalo;
    int j, aux;
    int inicioIntervaloDosNumeros, FinalIntervaloDosNumeros;
    int *resultadoDoIntervalo;

    printf("Digite o tamanho do intervalo: ");
    scanf("%d", &TamanhoDoIntervalo);

    resultadoDoIntervalo = malloc(TamanhoDoIntervalo * sizeof(int));

    printf("Digite o numero do inicio do intervalo : ");
    scanf("%d", &inicioIntervaloDosNumeros);

    printf("Digite o numero do final do intervalo : ");
    scanf("%d", &FinalIntervaloDosNumeros);
    srand(time(NULL));

    do
    {
        resultadoDoIntervalo[i] = inicioIntervaloDosNumeros + rand() % (FinalIntervaloDosNumeros - inicioIntervaloDosNumeros); // sorteia um número
        igual = 0;
        for (j = 0; j < i; j++)
        { // percorre a parte do vetor já preenchida
            if (resultadoDoIntervalo[j] == resultadoDoIntervalo[i])
                igual = 1; // número repetido
        }

        if (igual == 0) // significa que o elemento não se repetiu
            i++;
    } while (i < TamanhoDoIntervalo); // enquanto não for sorteado quantidade de números diferentes

    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        printf("%d ", resultadoDoIntervalo[i]);
    }
}