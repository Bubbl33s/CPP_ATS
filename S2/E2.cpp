#include <iostream>
#include <conio.h>

int main()
{
    float a, b, c, d, resultado = 0;

    std::cout << "Ingrese valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese valor de c: ";
    std::cin >> c;
    std::cout << "Ingrese valor de d: ";
    std::cin >> d;

    resultado = (a + b) / (c + d);

    printf("\nResultado: %.2f", resultado);

    getch();

    return 0;
}