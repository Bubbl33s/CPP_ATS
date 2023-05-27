// Intercambio de dos valores por referencia

#include <iostream>
#include <conio.h>

void exchange(int&, int&);

int main()
{
    int x, y;

    std::cout << "\nIngrese el valor de x: ";
    std::cin >> x;
    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;

    std::cout << "\nx = " << x << "\ny = " << y;

    exchange(x, y);

    std::cout << "\n\nINTERCAMBIANDO VALORES\n\n";
    std::cout << "x = " << x << "\ny = " << y;

    getch();
    return 0;
}

void exchange(int& a, int& b)
{
    int aux = a;
    a = b;
    b = aux; 
}