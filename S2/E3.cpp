#include <iostream>
#include <conio.h>

int main()
{
    float a, b, c, d, e, f, resultado = 0;

    std::cout << "Ingrese valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese valor de c: ";
    std::cin >> c;
    std::cout << "Ingrese valor de d: ";
    std::cin >> d;
    std::cout << "Ingrese valor de e: ";
    std::cin >> e;
    std::cout << "Ingrese valor de f: ";
    std::cin >> f;

    resultado = (a + b / c) / (d + e / f);

    printf("\nResultado: %.2f", resultado);

    getch();

    return 0;
}