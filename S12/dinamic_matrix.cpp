// CREANDO UNA MATRIZ DINPAMICA CON PUNTEROS

#include <iostream>
#include <conio.h>
#include <stdlib.h>

int **dir_matriz, n_filas, n_columnas;

void crearMatriz();
void mostrarMatriz();

int main()
{
    crearMatriz();
    mostrarMatriz();

    getch();
    return 0;
}

void crearMatriz()
{
    std::cout << "\nIngrese la cantidad de filas: ";
    std::cin >> n_filas;
    std::cout << "Infrese la cantidad de columnas: ";
    std::cin >> n_columnas;

    dir_matriz = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        dir_matriz[i] = new int[n_columnas];
    }

    std::cout << "\nRellene la matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> *(*(dir_matriz + i) + j);
        }
    }

    std::cout << std::endl;
}

void mostrarMatriz()
{
    std::cout << "\nMostrando matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        std::cout << "\t[";
        
        for (int j = 0; j < (n_columnas - 1); j++)
        {
            std::cout << *(*(dir_matriz + i) + j) << "  ";
        }

        std::cout << *(*(dir_matriz + i) + n_columnas - 1) << "]\n";
    }

    std::cout << std::endl;
}