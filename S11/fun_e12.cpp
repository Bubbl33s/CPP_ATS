#include <iostream>
#include <conio.h>

void pedirDatos();
void mostrarVector();
void is_sorted();

int vec[99], n;

int main()
{
    pedirDatos();
    mostrarVector();
    is_sorted();

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

void is_sorted()
{
    bool band = true;

    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] > vec[i])
        {
            band = false;
            break;
        }
    }

    if (band)
    {
        std::cout << "Is sorted";
    }
    else
    {
        std::cout << "Is not sorted";
    }
    
    std::cout << std::endl;
}