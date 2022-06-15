#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_resultadoDoIntervalo[999], global_TamanhoDoIntervalo, global_inicioIntervaloDosNumeros, global_FinalIntervaloDosNumeros;

void IntervaloNumeros()
{
    int i = 0, igual;
    int j;

    printf("\n Digite a quantidade de números que podem ser selecionados por cada participante!");
    printf("\n Quantidade: ");
    scanf("%d", &global_TamanhoDoIntervalo);

    system("cls");

    //-------------------------------------------------------------------------------------//

    printf("\n Digite o número de inicio do intervalo dos números a serem sorteados: ");
    scanf("%d", &global_inicioIntervaloDosNumeros);

    printf("\n Digite o número do final do intervalo dos números a serem sorteados: ");
    scanf("%d", &global_FinalIntervaloDosNumeros);

    while (global_FinalIntervaloDosNumeros < global_inicioIntervaloDosNumeros)
    {
        printf("\n O intervalo final dos números não pode ser menor do que o inicial do intervalo!");
        printf("\n Tente novamente!");

        printf("\n Digite o número do inicio do intervalo : ");
        scanf("%d", &global_inicioIntervaloDosNumeros);

        printf("\n Digite o número do final do intervalo : ");
        scanf("%d", &global_FinalIntervaloDosNumeros);
    }

    srand(time(NULL));

    do
    {
    
        global_resultadoDoIntervalo[i] = global_inicioIntervaloDosNumeros + rand() % global_FinalIntervaloDosNumeros + 1 - global_inicioIntervaloDosNumeros; // sorteia um número
        igual = 0;
        for (j = 0; j < i; j++)
        { // percorre a parte do vetor já preenchida

            if (global_resultadoDoIntervalo[j] == global_resultadoDoIntervalo[i])
                igual = 1; // número repetido
        }

        if (igual == 0) // significa que o elemento não se repetiu
            i++;        
    } while (i < global_FinalIntervaloDosNumeros); // enquanto não for sorteado quantidade de números diferentes

    system("cls");
    
}