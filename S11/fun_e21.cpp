// PTENCIA DE UN NÚMERO CON RECURSIVIDAD

#include <iostream>
#include <conio.h>

int potencia(int, int);

int main()
{
    int x, y;

    std::cout << "\nIngrese la base: ";
    std::cin >> x;
    std::cout << "Ingrese el exponente: ";
    std::cin >> y;

    std::cout << std::endl << x << " ^ " << y << " = " << potencia(x, y) << std::endl;

    getch();
    return 0;
}

int potencia(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    else
    {
        return base * potencia(base, exp - 1);
    }
}