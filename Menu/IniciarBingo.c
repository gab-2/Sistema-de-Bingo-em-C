#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int global_Vetor_Numeros_Participante[999];

void IniciarBingo()
{

    printf("\n Números que foram sorteados dentro do intervalo! \n");

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {
        printf(" %d ", global_resultadoDoIntervalo[i]);
    }

    printf("\n");

    ///////////////////////////////////////////////////////////////////////////////////////////////

    char participante[9999];
    char line[999];
    int i = 0;
    int cont;

    int Abrir_Arquivo = 1;

    for (int i = 0; i < global_FinalIntervaloDosNumeros; i++)
    {

        Abrir_Arquivo++;

        sprintf(participante, "Cartela-Participante-%d.txt", Abrir_Arquivo);
        cadastro_participante = fopen(participante, "r");

        ///////////////////////////////////////////////////////////////////////////////////////////////

        if (cadastro_participante != NULL)
        {

            while (fgets(line, sizeof line, cadastro_participante) != NULL)
            {

                fscanf(cadastro_participante, "%d", &global_Numeros_Participante);

                global_Vetor_Numeros_Participante[i] = global_Numeros_Participante;

                // printf("%d\n", global_Vetor_Numeros_Participante[i]);
            }

            ///////////////////////////////////////////////////////////////////////////////////////////////

            while (global_resultadoDoIntervalo[i] == global_Vetor_Numeros_Participante[i])
            {
                cont++;
            }

            for (int i = 0; i < global_Qtd_participantes; i++)
            {
                if (cont == global_TamanhoDoIntervalo)
                {
                    sprintf(participante, "participante-%d.txt", Abrir_Arquivo);
                    cadastro_participante = fopen(participante, "r");

                    while (fgets(line, sizeof line, cadastro_participante) != NULL)
                    {

                        fscanf(cadastro_participante, "%s", &Dados.nome);
                        printf("%s", &Dados.nome);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.numero);
                        printf("%s", &Dados.numero);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.DocumetoPessoal);
                        printf("%s", &Dados.DocumetoPessoal);

                        sprintf(participante, "premio-%d.txt", Abrir_Arquivo);
                        cadastro_premios = fopen(participante, "r");

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_premios, "%s", &Premio.nomeDoPremio);
                        printf("%s", &Premio.nomeDoPremio);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_premios, "%d", &Premio.ValorDoPremio);
                        printf("%d", &Premio.ValorDoPremio);
                    }

                    fclose(cadastro_participante);
                }
                else if (cont == global_TamanhoDoIntervalo - 1)
                {

                    sprintf(participante, "participante-%d.txt", Abrir_Arquivo);
                    cadastro_participante = fopen(participante, "r");

                    while (fgets(line, sizeof line, cadastro_participante) != NULL)
                    {

                        fscanf(cadastro_participante, "%s", &Dados.nome);
                        printf("%s", &Dados.nome);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.numero);
                        printf("%s", &Dados.numero);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.DocumetoPessoal);
                        printf("%s", &Dados.DocumetoPessoal);
                    }

                    fclose(cadastro_participante);
                }

                else if (cont == global_TamanhoDoIntervalo - 2)
                {

                    sprintf(participante, "participante-%d.txt", Abrir_Arquivo);
                    cadastro_participante = fopen(participante, "r");

                    while (fgets(line, sizeof line, cadastro_participante) != NULL)
                    {

                        fscanf(cadastro_participante, "%s", &Dados.nome);
                        printf("%s", &Dados.nome);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.numero);
                        printf("%s", &Dados.numero);

                        ////////////////////////////////////////////////////////

                        fscanf(cadastro_participante, "%d", &Dados.DocumetoPessoal);
                        printf("%s", &Dados.DocumetoPessoal);
                    }

                    fclose(cadastro_participante);
                }
                else
                {
                    break;
                }
            }

            //system("cls");
        }
    }
}