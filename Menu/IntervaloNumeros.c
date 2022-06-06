#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int *global_resultadoDoIntervalo;

void IntervaloNumeros()
{
    int i = 0, igual, TamanhoDoIntervalo;
    int j, aux;
    int inicioIntervaloDosNumeros, FinalIntervaloDosNumeros;

    printf("\n Digite a quantidade de numeros que podera ser selecionada por cada participante: ");
    scanf("%d", &TamanhoDoIntervalo);

    global_resultadoDoIntervalo = malloc(TamanhoDoIntervalo * sizeof(int));

    printf("\n Digite o numero do inicio do intervalo dos numeros sorteados: ");
    scanf("%d", &inicioIntervaloDosNumeros);

    printf("\n Digite o numero do final do intervalo dos numeros sorteados: ");
    scanf("%d", &FinalIntervaloDosNumeros);
    srand(time(NULL));

    while (FinalIntervaloDosNumeros < inicioIntervaloDosNumeros)
    {
        printf("\n O intervalo Final dos numeros nao pode ser menor do que o Inicio do intervalo!");
        printf("\n Tente novamente!");

        printf("\n Digite o numero do inicio do intervalo : ");
        scanf("%d", &inicioIntervaloDosNumeros);

        printf("\n Digite o numero do final do intervalo : ");
        scanf("%d", &FinalIntervaloDosNumeros);
    }

    do
    {
        global_resultadoDoIntervalo[i] = inicioIntervaloDosNumeros + rand() % (FinalIntervaloDosNumeros - inicioIntervaloDosNumeros); // sorteia um número
        igual = 0;
        for (j = 0; j < i; j++)
        { // percorre a parte do vetor já preenchida
            if (global_resultadoDoIntervalo[j] == global_resultadoDoIntervalo[i])
                igual = 1; // número repetido
        }

        if (igual == 0) // significa que o elemento não se repetiu
            i++;
    } while (i < TamanhoDoIntervalo); // enquanto não for sorteado quantidade de números diferentes

    for (i = 0; i < TamanhoDoIntervalo; i++)
    {
        printf("%d ", global_resultadoDoIntervalo[i]);
    }
}