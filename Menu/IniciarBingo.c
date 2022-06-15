#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "Participantes.c"
#include "Premios.c"
#include "IntervaloNumeros.c"
#include "RegistrarCartela.c"
#include "Historico.c"

int global_Vetor_Numeros_Participante[999];

void IniciarBingo()
{

for (int i = 0; i < global_Qtd_participantes; i++){

    printf("\n Números que foram sorteados dentro do intervalo! \n");

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }

    printf("\n");

    ///////////////////////////////////////////////////////////////////////////////////////////////




}

}