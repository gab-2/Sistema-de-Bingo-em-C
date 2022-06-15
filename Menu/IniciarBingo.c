#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Vetor_Numeros_Participante[999];

void NumerosSorteados()
{

    printf("\n Números que foram sorteados dentro do intervalo! \n");

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////

void CarregarIformacoes()
{

    char participante[global_Qtd_participantes];
    int j;

    for (int i = 0; i < global_Qtd_participantes; i++)
    {
        j++;
        sprintf(participante, "Cartela-Participante-%d.txt", j);
        cadastro_participante = fopen(participante, "r");
        for (i = 0; i < global_TamanhoDoIntervalo; i++)
        {
            fscanf(cadastro_participante, "\n%d", &global_Vetor_Numeros_Participante[i]);
        }
        fclose(cadastro_participante);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////

void IniciarBingo()
{

    char premio[global_Qtd_participantes];
    int j;

    for (int i = 0; i < global_Qtd_participantes; i++)
    {

        for (i = 0; i < global_FinalIntervaloDosNumeros; i++) // percorre as cartelas
        {
            int contZero = 0;
            for (i = 0; i < global_TamanhoDoIntervalo; i++) // percorre os campos comparando os numeros batidos
            {
                if (global_resultadoDoIntervalo[i] == global_Vetor_Numeros_Participante[i])
                {
                    global_Vetor_Numeros_Participante[i] = 0;
                }
            }

            for (i = 0; i < global_TamanhoDoIntervalo; i++) // percorre os campos contando os zeros
            {
                if (global_Vetor_Numeros_Participante[i] == 0)
                {
                    contZero++;
                }
            }
            if (contZero == (global_TamanhoDoIntervalo)) // Verifica o vencedor
            {
                cadastro_participante = fopen("Historico.txt", "w");
                // mostrar();
                printf("\n\n O vencedor foi : %s \n\n", Dados.nome);
                fprintf(cadastro_participante, "O vencedor foi : %s \n", Dados.nome);
                fclose(cadastro_participante);
                sprintf(premio, "premio-%d.txt", j);
                cadastro_premios = fopen(premio, "r");

                char NomePremio[70];

                fscanf(cadastro_premios, "%s", NomePremio);

                fclose(cadastro_premios);

                cadastro_participante = fopen("Historico.txt", "a");

                fputs(NomePremio, cadastro_participante);

                fclose(cadastro_participante);


                printf("\n Numeros Sorteados: ");

       for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }


                return;
            }
        }
    }
}