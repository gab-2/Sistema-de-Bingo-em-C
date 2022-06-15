#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Vetor_Numeros_Participante[999];

// struct DadosParticipante Dados;

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
        sprintf(participante, "participante-%d.txt", j);
        cadastro_participante = fopen(participante, "r");
        printf("\nCartela %s", Dados.nome);
        for (i = 0; i < global_TamanhoDoIntervalo; i++)
        {
            fscanf(cadastro_participante, "%d ", &global_Vetor_Numeros_Participante[i]);
        }
        fclose(cadastro_participante);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////

void IniciarBingo()
{
    for (int i = 0; i < global_Qtd_participantes; i++)
    {

        for (i = 0; i < quant; i++) // percorre as cartelas
        {
            int contZero = 0;
            for (i = 0; i < global_TamanhoDoIntervalo; i++) // percorre os campos comparando os numeros batidos
            {
                if (global_resultadoDoIntervalo[i] == global_Vetor_Numeros_Participante[i])
                {
                    global_Vetor_Numeros_Participante[i] = 0;
                }
            }

            for (i = 0; i < valIn; i++) // percorre os campos contadando os zeros
            {
                for (j = 0; j < valFin; j++)
                {
                    if (cartelas[y].M[i][j] == 0)
                    {
                        contZero++;
                    }
                }
            }
            if (contZero == (valIn * valFin)) // Verifica o vencedor
            {
                file = fopen("Resultado.txt", "w");
                mostrar();
                printf("\n\n O vencedor foi : %s \n\n", cartelas[y].nome);
                fprintf(file, "O vencedor foi : %s \n", cartelas[y].nome);
                fclose(file);
                file = fopen("Premiacao.txt", "r");

                char premioArq[70];

                fgets(premioArq, 70, file);

                fclose(file);

                file = fopen("Resultado.txt", "a");

                fputs(premioArq, file);

                fclose(file);

                return;
            }
        }
        mostrar();
    }
}