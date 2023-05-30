// Ordenar un arreglo con punteros

#include <iostream>
#include <conio.h>

void burbuja(int *);
void mostrarArreglo(int *);

int main()
{
    int nums[20], *dir_nums;
    dir_nums = nums;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    mostrarArreglo(dir_nums);
    burbuja(dir_nums);
    mostrarArreglo(dir_nums);

    getch();
    return 0;
}

void mostrarArreglo(int *lista)
{
    std::cout << "[";
    
    for (int i = 0; i < 19; i++)
    {
        std::cout << *(lista + i) << ", ";
    }

    std::cout << *(lista + 19) << "]\n\n";
}

void burbuja(int *lista)
{
    int aux;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (*(lista + j) > *(lista + j + 1))
            {
                aux = *(lista + j);
                *(lista + j) = *(lista + j + 1);
                *(lista + j + 1) = aux;
            }
        }
    }
}