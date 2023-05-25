#include <iostream>
#include <conio.h>

int main()
{
    float a, b, resultado = 0;

    std::cout << "Ingrese valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese valor de b: ";
    std::cin >> b;

    resultado = (a / b) + 1;

    printf("\nResultado: %2.f", resultado);

    getch();

    return 0;
}