#include <iostream>
#include <conio.h>

int main()
{
    int matriz[3][3], matriz_t[3][3];

    srand(time(NULL));

    printf("\nMOSTRANDO MATRIZ\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matriz[i][j] << " ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz_t[i][j] = matriz[j][i];
        }
    }

    printf("\nMATRIZ TRASPUESTA\n\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matriz_t[i][j] << " ";
        }

        std::cout << std::endl;
    }

    getch();
    return 0;
}