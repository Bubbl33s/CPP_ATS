// SUMA DE DOS MATRICES DINÁMICAS CON PUNTEROS

#include <iostream>
#include <conio.h>
#include <stdlib.h>

int **pointer_matrix, **pointer_matrix_t, n_filas, n_columnas;

void crearMatrices();
void mostrarMatriz(int **);
void borrarMatriz(int **);
void matrizTraspuesta();

int main()
{
    crearMatrices();

    matrizTraspuesta();

    mostrarMatriz(pointer_matrix);
    mostrarMatriz(pointer_matrix_t);

    borrarMatriz(pointer_matrix);
    borrarMatriz(pointer_matrix_t);

    getch();
    return 0;
}

void crearMatrices()
{
    std::cout << "\nIngrese la cantidad de filas: ";
    std::cin >> n_filas;
    std::cout << "Infrese la cantidad de columnas: ";
    std::cin >> n_columnas;

    pointer_matrix = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        pointer_matrix[i] = new int[n_columnas];
    }

    std::cout << "\nRellene la matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> *(*(pointer_matrix + i) + j);
        }
    }

    pointer_matrix_t = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        pointer_matrix_t[i] = new int[n_columnas];
    }
}

void mostrarMatriz(int **pointer_matrix)
{
    std::cout << "\nMostrando matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        std::cout << "\t[";
        
        for (int j = 0; j < (n_columnas - 1); j++)
        {
            std::cout << *(*(pointer_matrix + i) + j) << "  ";
        }

        std::cout << *(*(pointer_matrix + i) + n_columnas - 1) << "]\n";
    }

    std::cout << std::endl;
}

void borrarMatriz(int **pointer_matrix)
{
    for (int i = 0; i < n_filas; i++)
    {
        delete[] pointer_matrix[i];
    }

    delete[] pointer_matrix;
}

void matrizTraspuesta()
{
    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            *(*(pointer_matrix_t + i) + j) = *(*(pointer_matrix + j) + i);
        }
    }
}
