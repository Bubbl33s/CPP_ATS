#include <iostream>
#include <conio.h>

int main()
{
    int x, y, matriz[99][99];

    srand(time(NULL));

    printf("\n\tMATRIZ ALEATORIA\n\n");

    std::cout << "Ingrese el numero de filas: ";
    std::cin >> x;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matriz[i][j] = 1 + rand() % 100;
        }
    }

    printf("\nMOSTRANDO MATRIZ\n\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << matriz[i][j] << " ";
        }

        std::cout << std::endl;
    }

    getch();
    return 0;
}