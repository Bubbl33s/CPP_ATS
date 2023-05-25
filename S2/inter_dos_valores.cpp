#include <iostream>
#include <conio.h>

int main()
{
    int x, y, aux;

    std::cout << "Ingrese valor de x: ";
    std::cin >> x;
    std::cout << "Ingrese valor de b: ";
    std::cin >> y;

    aux = x;
    x = y;
    y = aux;

    printf("\nNuevo valor de x: %i\nNuevo valor de y: %i", x, y);

    getch();

    return 0;
}