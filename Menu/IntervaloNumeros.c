#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int *global_resultadoDoIntervalo, global_TamanhoDoIntervalo = 5, global_inicioIntervaloDosNumeros = 1, global_FinalIntervaloDosNumeros = 20;

void IntervaloNumeros()
{
    int i = 0, igual;
    int j, aux;

    printf("\n Digite a quantidade de numeros que podera ser selecionada por cada participante: ");
    scanf("%d", &global_TamanhoDoIntervalo);

    global_resultadoDoIntervalo = malloc(global_TamanhoDoIntervalo * sizeof(int));

    printf("\n Digite o numero do inicio do intervalo dos numeros sorteados: ");
    scanf("%d", &global_inicioIntervaloDosNumeros);

    printf("\n Digite o numero do final do intervalo dos numeros sorteados: ");
    scanf("%d", &global_FinalIntervaloDosNumeros);
    srand(time(NULL));

    while (global_FinalIntervaloDosNumeros < global_inicioIntervaloDosNumeros)
    {
        printf("\n O intervalo Final dos numeros nao pode ser menor do que o Inicio do intervalo!");
        printf("\n Tente novamente!");

        printf("\n Digite o numero do inicio do intervalo : ");
        scanf("%d", &global_inicioIntervaloDosNumeros);

        printf("\n Digite o numero do final do intervalo : ");
        scanf("%d", &global_FinalIntervaloDosNumeros);
    }

    do
    {
        global_resultadoDoIntervalo[i] = global_inicioIntervaloDosNumeros + rand() % (global_FinalIntervaloDosNumeros - global_inicioIntervaloDosNumeros); // sorteia um número
        igual = 0;
        for (j = 0; j < i; j++)
        { // percorre a parte do vetor já preenchida
            if (global_resultadoDoIntervalo[j] == global_resultadoDoIntervalo[i])
                igual = 1; // número repetido
        }

        if (igual == 0) // significa que o elemento não se repetiu
            i++;
    } while (i < global_TamanhoDoIntervalo); // enquanto não for sorteado quantidade de números diferentes

    system("cls");

}