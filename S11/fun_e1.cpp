#include <iostream>
#include <conio.h>

float mult(float, float);

int main()
{
    float num_1, num_2;

    std::cout << "\nMULTIPLICACION DE DOS NUMEROS\n\n";

    std::cout << "Ingrese un numero: ";
    std::cin >> num_1;
    std::cout << "Ingrese otro numero: ";
    std::cin >> num_2;

    std::cout << std::endl << num_1 << " * " << num_2 << " = " << mult(num_1, num_2) << std::endl;

    getch();
    return 0;
}

float mult(float a, float b)
{
    return a * b;
}