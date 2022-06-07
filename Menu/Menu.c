#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "Participantes.c"
#include "Premios.c"
#include "IntervaloNumeros.c"
#include "RegistrarCartela.c"
#include "IniciarBingo.c"
#include <ctype.h>
#include <windows.h>

void main()
{

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int opcao;

    do
    {

        printf("\n ---------------Menu-------------------------------------------------");
        printf("\n 1 - Cadastrar participante");
        printf("\n 2 - Cadastrar Prêmios");
        printf("\n 3 - Quantidade de números por participante e o intervalo do sorteio");
        printf("\n 4 - Registrar cartela");
        printf("\n 5 - Iniciar o Bingo!");
        printf("\n --------------------------------------------------------------------");
        printf("\n Selecione a opção desejada: ");
        scanf("%d", &opcao);

        while (opcao < 1 || opcao > 5)
        {
            printf("\n Opção digitada inválida, tente novamente!");
            printf("\n Selecione a opção desejada: ");
            scanf("%d", &opcao);
        }

        if (opcao == 1)
        {
            system("cls");
            Participante();
        }

        else if (opcao == 2)
        {
            system("cls");
            Premios();
        }

        else if (opcao == 3)
        {
            system("cls");
            IntervaloNumeros();
        }

        else if (opcao == 4)
        {
            system("cls");
            RegistrarCartela();
        }

    } while (opcao != 5);

    if (opcao == 5)
    {
        system("cls");
        IniciarBingo();
    }
}