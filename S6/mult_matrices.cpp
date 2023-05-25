#include <iostream>
#include <conio.h>

int main()
{
    int matriz_1[99][99], matriz_2[99][99], matriz_m[99][99];

    srand(time(NULL));

    printf("\n\tMULTIPLICACION DE MATRICES\n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz_1[i][j] = 1 + rand() % 10;
            matriz_2[i][j] = 1 + rand() % 10;
        }
    }

    printf("\nMOSTRANDO MATRICES\n\nMATRIZ 1\n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matriz_1[i][j] << " ";
        }

        std::cout << std::endl;
    }

    printf("\nMATRIZ 2\n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matriz_2[i][j] << " ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz_m[i][j] = 0;

            for (int k = 0; k < 4; k++)
            {
                matriz_m[i][j] += (matriz_1[i][k] * matriz_2[k][j]);
            }
        }
    }

    printf("\nMULTIPLICACION DE MATRICES\n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matriz_m[i][j] << " ";
        }

        std::cout << std::endl;
    }

    getch();
    return 0;
}