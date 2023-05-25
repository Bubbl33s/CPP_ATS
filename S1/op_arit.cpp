#include <iostream>
#include <conio.h>

int main()
{
    int a, b, suma, resta, multi, div;

    std::cout << "\tOPERACIONES ARITMÉTICAS\n";

    std::cout << "\nIngrese el primer número: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> b;

    suma = a + b;
    resta = a - b;
    multi = a * b;
    div = a / b;

    std::cout << "\nSuma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multi << std::endl;
    std::cout << "División: " << div << std::endl;

    getch();

    return 0;
}