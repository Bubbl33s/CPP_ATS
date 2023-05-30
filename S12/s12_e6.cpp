// Búsqueda en un arreglo con punteros

#include <iostream>
#include <conio.h>

void mostrarArreglo(int *);
void b_binaria(int, int *, int, int);

int main()
{
    int nums[20], *dir_nums, x, i = 0;
    dir_nums = nums;

    bool band = false;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    mostrarArreglo(dir_nums);

    std::cout << "\nIngrese un elemento a buscar: ";
    std::cin >> x;

    while ((i < 20) && (band == false))
    {
        if (*(dir_nums + i) == x)
        {
            band = true;
        }

        i++;
    }

    if (band == true)
    {
        std::cout << std::endl << x << " found in " << i << " position\n";
    }
    else
    {
        std::cout << std::endl << x << " not found\n";
    }

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