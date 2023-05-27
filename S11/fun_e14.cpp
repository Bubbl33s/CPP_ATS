#include <iostream>
#include <conio.h>

void pedirDatos();
void mostrarVector();
void elementosImpares(int vec[], int);

int vec[99], n;

int main()
{
    pedirDatos();
    mostrarVector();
    elementosImpares(vec, n);

    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << "Ingrese el tamano del vector: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> vec[i];
    }

    std::cout << std::endl;
}

void mostrarVector()
{
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            std::cout << vec[i];
        }
        else
        {
            std::cout << vec[i] << ", ";
        }
    }

    std::cout << std::endl;
}

void elementosImpares(int num[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (num[i] % 2 != 0)
        {
            std::cout << num[i] << ", ";
        }
    }

    std::cout << std::endl;
}