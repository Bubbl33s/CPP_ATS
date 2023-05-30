// SUMA DE DOS MATRICES DINÁMICAS CON PUNTEROS

#include <iostream>
#include <conio.h>
#include <stdlib.h>

int **pointer_matrix_1, **pointer_matrix_2, **pointer_matrix_sum, n_filas, n_columnas;

void crearMatrices();
void mostrarMatriz(int **);
void borrarMatriz(int **);
void sumarMatrices(int **, int **);

int main()
{
    crearMatrices();

    mostrarMatriz(pointer_matrix_1);
    mostrarMatriz(pointer_matrix_2);

    sumarMatrices(pointer_matrix_1, pointer_matrix_2);
    mostrarMatriz(pointer_matrix_sum);

    borrarMatriz(pointer_matrix_1);
    borrarMatriz(pointer_matrix_2);
    borrarMatriz(pointer_matrix_sum);

    getch();
    return 0;
}

void crearMatrices()
{
    std::cout << "\nIngrese la cantidad de filas: ";
    std::cin >> n_filas;
    std::cout << "Infrese la cantidad de columnas: ";
    std::cin >> n_columnas;

    pointer_matrix_1 = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        pointer_matrix_1[i] = new int[n_columnas];
    }

    std::cout << "\nRellene la matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> *(*(pointer_matrix_1 + i) + j);
        }
    }

    std::cout << "\nIngrese la cantidad de filas: ";
    std::cin >> n_filas;
    std::cout << "Infrese la cantidad de columnas: ";
    std::cin >> n_columnas;

    pointer_matrix_2 = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        pointer_matrix_2[i] = new int[n_columnas];
    }

    std::cout << "\nRellene la matriz:\n\n";

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> *(*(pointer_matrix_2 + i) + j);
        }
    }

    std::cout << "\nIngrese la cantidad de filas: ";
    std::cin >> n_filas;
    std::cout << "Infrese la cantidad de columnas: ";
    std::cin >> n_columnas;

    pointer_matrix_sum = new int*[n_filas];

    for (int i = 0; i < n_columnas; i++)
    {
        pointer_matrix_sum[i] = new int[n_columnas];
    }

    std::cout << std::endl;
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

void sumarMatrices(int **p_m_1, int **p_m_2)
{
    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            *(*(pointer_matrix_sum + i) + j) = *(*(p_m_1 + i) + j) + *(*(p_m_2 + i) + j);
        }
    }
}