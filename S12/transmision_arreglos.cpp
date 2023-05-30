#include <iostream>
#include <conio.h>

int encontrarMax(int *, int);

int main()
{
    const int n_elementos = 5;
    int numeros[n_elementos] = { 3, 12, 9, 47, 5};
    std::cout << "\nElemento mayor: " << encontrarMax(numeros, n_elementos) << std::endl;

    getch();
    return 0;
}

int encontrarMax(int *dir_vec, int t_vec)
{
    int mayor = -999999;

    for (int i = 0; i < t_vec; i++)
    {
        if (*(dir_vec + i) > mayor)
        {
            mayor = *(dir_vec + i);
        }
    }

    return mayor;
}