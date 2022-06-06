#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void IntervaloNumeros()
{
    int i, TamanhoDoIntervalo;
    int j, aux;
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

    for(int i = 0; i<TamanhoDoIntervalo; i++){
      resultadoDoIntervalo[i] =  inicioIntervaloDosNumeros + rand() % (FinalIntervaloDosNumeros - inicioIntervaloDosNumeros);
}

    for(i = 0; i < TamanhoDoIntervalo; i++){
       aux = 0;
          for(j = i - 1; j >= 0; j--){
               if(resultadoDoIntervalo[i] == resultadoDoIntervalo[j]){
                   aux = 1;
        }
    }

    if(aux == 0){
         printf("%d \n",resultadoDoIntervalo[i]);
}
}
    free(resultadoDoIntervalo);
    
}